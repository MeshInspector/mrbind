/// Enum comment.
///
/// Generated from enum `MR::CSharp::E1`. The constants are associated constants of this type.
pub use crate::ffi::MR_CSharp_E1 as E1;

/// Generated from enum `MR::CSharp::E2`. The constants are associated constants of this type.
pub use crate::ffi::MR_CSharp_E2 as E2;

/// Other injection cases:
///
/// Generated from enum `MR::CSharp::StaticOpsEnum`. The constants are associated constants of this type.
pub use crate::ffi::MR_CSharp_StaticOpsEnum as StaticOpsEnum;

/// Generated from class `MR::CSharp::A`.
/// Derived classes:
///   Virtual:
///     `MR::CSharp::C`
///   Direct: (non-virtual)
///     `MR::CSharp::B`
///     `MR::CSharp::F`
///     `MR::CSharp::G`
///
/// Generated from class `MR::CSharp::A`. Heap-allocated instances are held in `Owned<A>`.
#[repr(transparent)]
pub struct A(crate::ffi::MR_CSharp_A);

unsafe impl crate::CppClass for A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_A_Destroy(ptr as *const crate::ffi::MR_CSharp_A)}
}

impl A
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_A_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::A>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_A_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::A)}
    }

    /// Generated from constructor `MR::CSharp::A::A`.
    ///
    /// Calls `MR_CSharp_A_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::A) -> crate::Owned<crate::mr::c_sharp::A>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_A_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::A as *mut crate::ffi::MR_CSharp_A)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::A)}
    }

    /// Generated from method `MR::CSharp::A::operator=`.
    ///
    /// Calls `MR_CSharp_A_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    /// The reference to this object might be preserved in the return value.
    pub fn assign_from_another<'a>(&'a mut self, _other: &crate::mr::c_sharp::A) -> &'a mut crate::mr::c_sharp::A
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_A, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::A as *mut crate::ffi::MR_CSharp_A)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::A)}
    }

    /// Generated from method `MR::CSharp::A::foo`.
    ///
    /// Calls `MR_CSharp_A_foo()`.
    pub fn foo(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_A_foo(self as *mut Self as *mut crate::ffi::MR_CSharp_A)};
        __ret
    }

    /// Generated from method `MR::CSharp::A::bar`.
    ///
    /// Calls `MR_CSharp_A_bar()`.
    pub fn bar(&self, _1: i32, _2: i32)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_A_bar(self as *const Self as *const crate::ffi::MR_CSharp_A, _1, _2)};
        __ret
    }

    /// Generated from method `MR::CSharp::A::static_foo`.
    ///
    /// Calls `MR_CSharp_A_static_foo()`.
    pub fn static_foo()
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_A_static_foo()};
        __ret
    }

    /// Generated from method `MR::CSharp::A::static_bar`.
    ///
    /// Calls `MR_CSharp_A_static_bar()`.
    pub fn static_bar(_1: i32, _2: i32)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_A_static_bar(_1, _2)};
        __ret
    }

    /// Generated from method `MR::CSharp::A::virtual_foo`.
    ///
    /// Calls `MR_CSharp_A_virtual_foo()`.
    pub fn virtual_foo(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_A_virtual_foo(self as *mut Self as *mut crate::ffi::MR_CSharp_A)};
        __ret
    }

    /// Generated from method `MR::CSharp::A::virtual_bar`.
    ///
    /// Calls `MR_CSharp_A_virtual_bar()`.
    pub fn virtual_bar(&self, _1: i32, _2: i32)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_A_virtual_bar(self as *const Self as *const crate::ffi::MR_CSharp_A, _1, _2)};
        __ret
    }

    /// Generated from method `MR::CSharp::A::refs`.
    ///
    /// Calls `MR_CSharp_A_refs()`.
    pub fn refs(&mut self, x: &mut i32, _2: &mut i32) -> &mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_A_refs(self as *mut Self as *mut crate::ffi::MR_CSharp_A, x as *mut i32 as *mut i32, _2 as *mut i32 as *mut i32)};
        unsafe {&mut *(__ret as *mut i32)}
    }

}

unsafe impl crate::CppCopy for A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::AmbiguousTemplates`.
///
/// Generated from class `MR::CSharp::AmbiguousTemplates`. Heap-allocated instances are held in `Owned<AmbiguousTemplates>`.
#[repr(transparent)]
pub struct AmbiguousTemplates(crate::ffi::MR_CSharp_AmbiguousTemplates);

unsafe impl crate::CppClass for AmbiguousTemplates
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_AmbiguousTemplates_Destroy(ptr as *const crate::ffi::MR_CSharp_AmbiguousTemplates)}
}

impl AmbiguousTemplates
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_AmbiguousTemplates_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::AmbiguousTemplates>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_AmbiguousTemplates_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::AmbiguousTemplates)}
    }

    /// Generated from constructor `MR::CSharp::AmbiguousTemplates::AmbiguousTemplates`.
    ///
    /// Calls `MR_CSharp_AmbiguousTemplates_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::AmbiguousTemplates) -> crate::Owned<crate::mr::c_sharp::AmbiguousTemplates>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_AmbiguousTemplates_ConstructFromAnother(_other as *const crate::mr::c_sharp::AmbiguousTemplates as *const crate::ffi::MR_CSharp_AmbiguousTemplates)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::AmbiguousTemplates)}
    }

    /// Generated from method `MR::CSharp::AmbiguousTemplates::operator=`.
    ///
    /// Calls `MR_CSharp_AmbiguousTemplates_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::AmbiguousTemplates) -> &mut crate::mr::c_sharp::AmbiguousTemplates
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_AmbiguousTemplates_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_AmbiguousTemplates, _other as *const crate::mr::c_sharp::AmbiguousTemplates as *const crate::ffi::MR_CSharp_AmbiguousTemplates)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::AmbiguousTemplates)}
    }

    /// Generated from method `MR::CSharp::AmbiguousTemplates::template_a<int32_t>`.
    ///
    /// Calls `MR_CSharp_AmbiguousTemplates_template_a_int32_t()`.
    pub fn template_a_int32_t(&mut self, _1: i32)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_AmbiguousTemplates_template_a_int32_t(self as *mut Self as *mut crate::ffi::MR_CSharp_AmbiguousTemplates, _1)};
        __ret
    }

    /// Generated from method `MR::CSharp::AmbiguousTemplates::template_a<float>`.
    ///
    /// Calls `MR_CSharp_AmbiguousTemplates_template_a_float()`.
    pub fn template_a_float(&mut self, _1: f32)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_AmbiguousTemplates_template_a_float(self as *mut Self as *mut crate::ffi::MR_CSharp_AmbiguousTemplates, _1)};
        __ret
    }

    /// Generated from method `MR::CSharp::AmbiguousTemplates::template_b<int32_t>`.
    ///
    /// Calls `MR_CSharp_AmbiguousTemplates_template_b_int32_t()`.
    pub fn template_b_int32_t(&mut self) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_AmbiguousTemplates_template_b_int32_t(self as *mut Self as *mut crate::ffi::MR_CSharp_AmbiguousTemplates)};
        __ret
    }

    /// Generated from method `MR::CSharp::AmbiguousTemplates::template_b<float>`.
    ///
    /// Calls `MR_CSharp_AmbiguousTemplates_template_b_float()`.
    pub fn template_b_float(&mut self) -> f32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_AmbiguousTemplates_template_b_float(self as *mut Self as *mut crate::ffi::MR_CSharp_AmbiguousTemplates)};
        __ret
    }

    /// Generated from method `MR::CSharp::AmbiguousTemplates::template_c<int32_t>`.
    ///
    /// Calls `MR_CSharp_AmbiguousTemplates_template_c_int32_t()`.
    pub fn template_c_int32_t(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_AmbiguousTemplates_template_c_int32_t(self as *mut Self as *mut crate::ffi::MR_CSharp_AmbiguousTemplates)};
        __ret
    }

    /// Generated from method `MR::CSharp::AmbiguousTemplates::template_c<float>`.
    ///
    /// Calls `MR_CSharp_AmbiguousTemplates_template_c_float()`.
    pub fn template_c_float(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_AmbiguousTemplates_template_c_float(self as *mut Self as *mut crate::ffi::MR_CSharp_AmbiguousTemplates)};
        __ret
    }

    /// Generated from method `MR::CSharp::AmbiguousTemplates::instantiate`.
    ///
    /// Calls `MR_CSharp_AmbiguousTemplates_instantiate()`.
    pub fn instantiate(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_AmbiguousTemplates_instantiate(self as *mut Self as *mut crate::ffi::MR_CSharp_AmbiguousTemplates)};
        __ret
    }

}

unsafe impl crate::CppCopy for AmbiguousTemplates
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Test various array members.
/// Generated from class `MR::CSharp::ArrayMembers`.
///
/// Generated from class `MR::CSharp::ArrayMembers`. Heap-allocated instances are held in `Owned<ArrayMembers>`.
#[repr(transparent)]
pub struct ArrayMembers(crate::ffi::MR_CSharp_ArrayMembers);

unsafe impl crate::CppClass for ArrayMembers
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_ArrayMembers_Destroy(ptr as *const crate::ffi::MR_CSharp_ArrayMembers)}
}

impl ArrayMembers
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_ArrayMembers_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::ArrayMembers>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ArrayMembers)}
    }

    /// Generated from constructor `MR::CSharp::ArrayMembers::ArrayMembers`.
    ///
    /// Calls `MR_CSharp_ArrayMembers_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::ArrayMembers) -> crate::Owned<crate::mr::c_sharp::ArrayMembers>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::ArrayMembers as *mut crate::ffi::MR_CSharp_ArrayMembers)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ArrayMembers)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `i`.
    ///
    /// Calls `MR_CSharp_ArrayMembers_Get_i()`.
    /// The reference to this object might be preserved as the return value.
    pub fn i<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_Get_i(self as *const Self as *const crate::ffi::MR_CSharp_ArrayMembers)};
        unsafe {&*(__ret as *const i32)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ArrayMembers` named `i`.
    ///
    /// Calls `MR_CSharp_ArrayMembers_GetMutable_i()`.
    /// The reference to this object might be preserved as the return value.
    pub fn i_mut<'a>(&'a mut self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_GetMutable_i(self as *mut Self as *mut crate::ffi::MR_CSharp_ArrayMembers)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// Modifies a member variable of class `MR::CSharp::ArrayMembers` named `i`.
    ///
    /// Calls `MR_CSharp_ArrayMembers_Set_i()`.
    /// The reference to the parameter `value` might be preserved in this object in element `i`.
    pub fn set_i(&mut self, value: i32)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_Set_i(self as *mut Self as *mut crate::ffi::MR_CSharp_ArrayMembers, value)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `ia`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_ArrayMembers_Get_ia()`.
    /// The reference to this object might be preserved as the return value.
    pub fn ia<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_Get_ia(self as *const Self as *const crate::ffi::MR_CSharp_ArrayMembers)};
        unsafe {&*(__ret as *const i32)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ArrayMembers` named `ia`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_ArrayMembers_GetMutable_ia()`.
    /// The reference to this object might be preserved as the return value.
    pub fn ia_mut<'a>(&'a mut self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_GetMutable_ia(self as *mut Self as *mut crate::ffi::MR_CSharp_ArrayMembers)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `ia`. The size is `2`.
    ///
    /// Calls `MR_CSharp_ArrayMembers_GetSize_ia()`.
    pub fn ia_size() -> usize
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_GetSize_ia()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `iaa`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_ArrayMembers_Get_iaa()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn iaa(&self) -> *const [i32; 4]
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_Get_iaa(self as *const Self as *const crate::ffi::MR_CSharp_ArrayMembers)};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ArrayMembers` named `iaa`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_ArrayMembers_GetMutable_iaa()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn iaa_mut(&mut self) -> *mut [i32; 4]
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_GetMutable_iaa(self as *mut Self as *mut crate::ffi::MR_CSharp_ArrayMembers)};
        __ret
    }

    /// Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `iaa`. The size is `3`.
    ///
    /// Calls `MR_CSharp_ArrayMembers_GetSize_iaa()`.
    pub fn iaa_size() -> usize
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_GetSize_iaa()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `ci`.
    ///
    /// Calls `MR_CSharp_ArrayMembers_Get_ci()`.
    /// The reference to this object might be preserved as the return value.
    pub fn ci<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_Get_ci(self as *const Self as *const crate::ffi::MR_CSharp_ArrayMembers)};
        unsafe {&*(__ret as *const i32)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `cia`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_ArrayMembers_Get_cia()`.
    /// The reference to this object might be preserved as the return value.
    pub fn cia<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_Get_cia(self as *const Self as *const crate::ffi::MR_CSharp_ArrayMembers)};
        unsafe {&*(__ret as *const i32)}
    }

    /// Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `cia`. The size is `2`.
    ///
    /// Calls `MR_CSharp_ArrayMembers_GetSize_cia()`.
    pub fn cia_size() -> usize
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_GetSize_cia()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `ciaa`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_ArrayMembers_Get_ciaa()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn ciaa(&self) -> *const [i32; 4]
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_Get_ciaa(self as *const Self as *const crate::ffi::MR_CSharp_ArrayMembers)};
        __ret
    }

    /// Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `ciaa`. The size is `3`.
    ///
    /// Calls `MR_CSharp_ArrayMembers_GetSize_ciaa()`.
    pub fn ciaa_size() -> usize
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_GetSize_ciaa()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `s`.
    ///
    /// Calls `MR_CSharp_ArrayMembers_Get_s()`.
    /// The reference to this object might be preserved as the return value.
    pub fn s<'a>(&'a self) -> &'a crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_Get_s(self as *const Self as *const crate::ffi::MR_CSharp_ArrayMembers)};
        unsafe {&*(__ret as *const crate::mr::cs::std_string)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ArrayMembers` named `s`.
    ///
    /// Calls `MR_CSharp_ArrayMembers_GetMutable_s()`.
    /// The reference to this object might be preserved as the return value.
    pub fn s_mut<'a>(&'a mut self) -> &'a mut crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_GetMutable_s(self as *mut Self as *mut crate::ffi::MR_CSharp_ArrayMembers)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_string)}
    }

    /// Modifies a member variable of class `MR::CSharp::ArrayMembers` named `s`.
    ///
    /// Calls `MR_CSharp_ArrayMembers_Set_s()`.
    /// The reference to the parameter `value` might be preserved in this object in element `s`.
    pub fn set_s(&mut self, value: &str)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_Set_s(self as *mut Self as *mut crate::ffi::MR_CSharp_ArrayMembers, value.as_ptr() as *const core::ffi::c_char, value.as_ptr().wrapping_add(value.len()) as *const core::ffi::c_char)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `sa`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_ArrayMembers_Get_sa()`.
    /// The reference to this object might be preserved as the return value.
    pub fn sa<'a>(&'a self) -> &'a crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_Get_sa(self as *const Self as *const crate::ffi::MR_CSharp_ArrayMembers)};
        unsafe {&*(__ret as *const crate::mr::cs::std_string)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ArrayMembers` named `sa`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_ArrayMembers_GetMutable_sa()`.
    /// The reference to this object might be preserved as the return value.
    pub fn sa_mut<'a>(&'a mut self) -> &'a mut crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_GetMutable_sa(self as *mut Self as *mut crate::ffi::MR_CSharp_ArrayMembers)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_string)}
    }

    /// Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `sa`. The size is `2`.
    ///
    /// Calls `MR_CSharp_ArrayMembers_GetSize_sa()`.
    pub fn sa_size() -> usize
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_GetSize_sa()};
        __ret
    }

    /// std::string saa[3][4]; // The C generator doesn't support those yet. We'd need to expose them as flat arrays, with N size getters, I think?
    /// Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `cs`.
    ///
    /// Calls `MR_CSharp_ArrayMembers_Get_cs()`.
    /// The reference to this object might be preserved as the return value.
    pub fn cs<'a>(&'a self) -> &'a crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_Get_cs(self as *const Self as *const crate::ffi::MR_CSharp_ArrayMembers)};
        unsafe {&*(__ret as *const crate::mr::cs::std_string)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `csa`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_ArrayMembers_Get_csa()`.
    /// The reference to this object might be preserved as the return value.
    pub fn csa<'a>(&'a self) -> &'a crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_Get_csa(self as *const Self as *const crate::ffi::MR_CSharp_ArrayMembers)};
        unsafe {&*(__ret as *const crate::mr::cs::std_string)}
    }

    /// Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `csa`. The size is `2`.
    ///
    /// Calls `MR_CSharp_ArrayMembers_GetSize_csa()`.
    pub fn csa_size() -> usize
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ArrayMembers_GetSize_csa()};
        __ret
    }

}

unsafe impl crate::CppCopy for ArrayMembers
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::B`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::CSharp::A`
///
/// Generated from class `MR::CSharp::B`. Heap-allocated instances are held in `Owned<B>`.
#[repr(transparent)]
pub struct B(crate::ffi::MR_CSharp_B);

unsafe impl crate::CppClass for B
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_B_Destroy(ptr as *const crate::ffi::MR_CSharp_B)}
}

impl B
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_B_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::B>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_B_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::B)}
    }

    /// Generated from constructor `MR::CSharp::B::B`.
    ///
    /// Calls `MR_CSharp_B_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::B) -> crate::Owned<crate::mr::c_sharp::B>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_B_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::B as *mut crate::ffi::MR_CSharp_B)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::B)}
    }

    /// Generated from constructor `MR::CSharp::B::B`.
    ///
    /// Calls `MR_CSharp_B_Construct()`.
    pub fn construct(a: i32, b: i32) -> crate::Owned<crate::mr::c_sharp::B>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_B_Construct(a, b)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::B)}
    }

    /// Generated from method `MR::CSharp::B::operator=`.
    ///
    /// Calls `MR_CSharp_B_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::B) -> &mut crate::mr::c_sharp::B
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_B_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_B, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::B as *mut crate::ffi::MR_CSharp_B)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::B)}
    }

    /// Upcasts to the base class `MR::CSharp::A`.
    ///
    /// Calls `MR_CSharp_B_UpcastTo_MR_CSharp_A()`.
    pub fn upcast_to_a(&self) -> &crate::mr::c_sharp::A
    {
        unsafe {&*(crate::ffi::MR_CSharp_B_UpcastTo_MR_CSharp_A(self as *const Self as *const crate::ffi::MR_CSharp_B) as *const crate::mr::c_sharp::A)}
    }

    /// Upcasts to the base class `MR::CSharp::A`.
    ///
    /// Calls `MR_CSharp_B_MutableUpcastTo_MR_CSharp_A()`.
    pub fn upcast_to_a_mut(&mut self) -> &mut crate::mr::c_sharp::A
    {
        unsafe {&mut *(crate::ffi::MR_CSharp_B_MutableUpcastTo_MR_CSharp_A(self as *mut Self as *mut crate::ffi::MR_CSharp_B) as *mut crate::mr::c_sharp::A)}
    }

    /// Static downcast from the base class `MR::CSharp::A`.
    ///
    /// Calls `MR_CSharp_B_StaticDowncastFrom_MR_CSharp_A()`. Undefined behavior if the object isn't actually a `B`.
    pub unsafe fn static_downcast_from_a(object: &crate::mr::c_sharp::A) -> &Self
    {
        &*(crate::ffi::MR_CSharp_B_StaticDowncastFrom_MR_CSharp_A(object as *const crate::mr::c_sharp::A as *const crate::ffi::MR_CSharp_A) as *const Self)
    }

    /// Static downcast from the base class `MR::CSharp::A`.
    ///
    /// Calls `MR_CSharp_B_MutableStaticDowncastFrom_MR_CSharp_A()`. Undefined behavior if the object isn't actually a `B`.
    pub unsafe fn static_downcast_from_a_mut(object: &mut crate::mr::c_sharp::A) -> &mut Self
    {
        &mut *(crate::ffi::MR_CSharp_B_MutableStaticDowncastFrom_MR_CSharp_A(object as *mut crate::mr::c_sharp::A as *mut crate::ffi::MR_CSharp_A) as *mut Self)
    }

    /// Dynamic downcast from the base class `MR::CSharp::A`. Returns `None` if the object isn't actually a `B`.
    ///
    /// Calls `MR_CSharp_B_DynamicDowncastFrom_MR_CSharp_A()`.
    pub fn dynamic_downcast_from_a(object: &crate::mr::c_sharp::A) -> Option<&Self>
    {
        unsafe {(crate::ffi::MR_CSharp_B_DynamicDowncastFrom_MR_CSharp_A(object as *const crate::mr::c_sharp::A as *const crate::ffi::MR_CSharp_A) as *const Self).as_ref()}
    }

    /// Dynamic downcast from the base class `MR::CSharp::A`. Returns `None` if the object isn't actually a `B`.
    ///
    /// Calls `MR_CSharp_B_MutableDynamicDowncastFrom_MR_CSharp_A()`.
    pub fn dynamic_downcast_from_a_mut(object: &mut crate::mr::c_sharp::A) -> Option<&mut Self>
    {
        unsafe {(crate::ffi::MR_CSharp_B_MutableDynamicDowncastFrom_MR_CSharp_A(object as *mut crate::mr::c_sharp::A as *mut crate::ffi::MR_CSharp_A) as *mut Self).as_mut()}
    }

}

impl AsRef<crate::mr::c_sharp::A> for B
{
    fn as_ref(&self) -> &crate::mr::c_sharp::A {self.upcast_to_a()}
}

impl AsMut<crate::mr::c_sharp::A> for B
{
    fn as_mut(&mut self) -> &mut crate::mr::c_sharp::A {self.upcast_to_a_mut()}
}

unsafe impl crate::CppCopy for B
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::C`.
/// Base classes:
///   Virtual:
///     `MR::CSharp::A`
///
/// Generated from class `MR::CSharp::C`. Heap-allocated instances are held in `Owned<C>`.
#[repr(transparent)]
pub struct C(crate::ffi::MR_CSharp_C);

unsafe impl crate::CppClass for C
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_C_Destroy(ptr as *const crate::ffi::MR_CSharp_C)}
}

impl C
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_C_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::C>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_C_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::C)}
    }

    /// Generated from constructor `MR::CSharp::C::C`.
    ///
    /// Calls `MR_CSharp_C_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::C) -> crate::Owned<crate::mr::c_sharp::C>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_C_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::C as *mut crate::ffi::MR_CSharp_C)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::C)}
    }

    /// Generated from method `MR::CSharp::C::operator=`.
    ///
    /// Calls `MR_CSharp_C_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::C) -> &mut crate::mr::c_sharp::C
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_C_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_C, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::C as *mut crate::ffi::MR_CSharp_C)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::C)}
    }

    /// Upcasts to the base class `MR::CSharp::A`.
    ///
    /// Calls `MR_CSharp_C_UpcastTo_MR_CSharp_A()`.
    pub fn upcast_to_a(&self) -> &crate::mr::c_sharp::A
    {
        unsafe {&*(crate::ffi::MR_CSharp_C_UpcastTo_MR_CSharp_A(self as *const Self as *const crate::ffi::MR_CSharp_C) as *const crate::mr::c_sharp::A)}
    }

    /// Upcasts to the base class `MR::CSharp::A`.
    ///
    /// Calls `MR_CSharp_C_MutableUpcastTo_MR_CSharp_A()`.
    pub fn upcast_to_a_mut(&mut self) -> &mut crate::mr::c_sharp::A
    {
        unsafe {&mut *(crate::ffi::MR_CSharp_C_MutableUpcastTo_MR_CSharp_A(self as *mut Self as *mut crate::ffi::MR_CSharp_C) as *mut crate::mr::c_sharp::A)}
    }

    /// Dynamic downcast from the base class `MR::CSharp::A`. Returns `None` if the object isn't actually a `C`.
    ///
    /// Calls `MR_CSharp_C_DynamicDowncastFrom_MR_CSharp_A()`.
    pub fn dynamic_downcast_from_a(object: &crate::mr::c_sharp::A) -> Option<&Self>
    {
        unsafe {(crate::ffi::MR_CSharp_C_DynamicDowncastFrom_MR_CSharp_A(object as *const crate::mr::c_sharp::A as *const crate::ffi::MR_CSharp_A) as *const Self).as_ref()}
    }

    /// Dynamic downcast from the base class `MR::CSharp::A`. Returns `None` if the object isn't actually a `C`.
    ///
    /// Calls `MR_CSharp_C_MutableDynamicDowncastFrom_MR_CSharp_A()`.
    pub fn dynamic_downcast_from_a_mut(object: &mut crate::mr::c_sharp::A) -> Option<&mut Self>
    {
        unsafe {(crate::ffi::MR_CSharp_C_MutableDynamicDowncastFrom_MR_CSharp_A(object as *mut crate::mr::c_sharp::A as *mut crate::ffi::MR_CSharp_A) as *mut Self).as_mut()}
    }

}

impl AsRef<crate::mr::c_sharp::A> for C
{
    fn as_ref(&self) -> &crate::mr::c_sharp::A {self.upcast_to_a()}
}

impl AsMut<crate::mr::c_sharp::A> for C
{
    fn as_mut(&mut self) -> &mut crate::mr::c_sharp::A {self.upcast_to_a_mut()}
}

unsafe impl crate::CppCopy for C
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Test the call operator, since it can have an unusual amount of arguments.
/// Not testing `[]` here to be able to run the tests on older C++.
/// Generated from class `MR::CSharp::CallOp`.
///
/// Generated from class `MR::CSharp::CallOp`. Heap-allocated instances are held in `Owned<CallOp>`.
#[repr(transparent)]
pub struct CallOp(crate::ffi::MR_CSharp_CallOp);

unsafe impl crate::CppClass for CallOp
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_CallOp_Destroy(ptr as *const crate::ffi::MR_CSharp_CallOp)}
}

impl CallOp
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_CallOp_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::CallOp>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_CallOp_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::CallOp)}
    }

    /// Generated from constructor `MR::CSharp::CallOp::CallOp`.
    ///
    /// Calls `MR_CSharp_CallOp_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::CallOp) -> crate::Owned<crate::mr::c_sharp::CallOp>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_CallOp_ConstructFromAnother(_other as *const crate::mr::c_sharp::CallOp as *const crate::ffi::MR_CSharp_CallOp)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::CallOp)}
    }

    /// Generated from method `MR::CSharp::CallOp::operator=`.
    ///
    /// Calls `MR_CSharp_CallOp_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::CallOp) -> &mut crate::mr::c_sharp::CallOp
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_CallOp_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_CallOp, _other as *const crate::mr::c_sharp::CallOp as *const crate::ffi::MR_CSharp_CallOp)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::CallOp)}
    }

    /// Generated from method `MR::CSharp::CallOp::operator()`.
    ///
    /// Calls `MR_CSharp_CallOp_call_0()`.
    pub fn call_0(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_CallOp_call_0(self as *mut Self as *mut crate::ffi::MR_CSharp_CallOp)};
        __ret
    }

    /// Generated from method `MR::CSharp::CallOp::operator()`.
    ///
    /// Calls `MR_CSharp_CallOp_call_3()`.
    pub fn call_3(&mut self, _1: i32, _2: i32, _3: i32) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_CallOp_call_3(self as *mut Self as *mut crate::ffi::MR_CSharp_CallOp, _1, _2, _3)};
        __ret
    }

}

unsafe impl crate::CppCopy for CallOp
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::ClassMemberPointersBool`.
///
/// Generated from class `MR::CSharp::ClassMemberPointersBool`. Heap-allocated instances are held in `Owned<ClassMemberPointersBool>`.
#[repr(transparent)]
pub struct ClassMemberPointersBool(crate::ffi::MR_CSharp_ClassMemberPointersBool);

unsafe impl crate::CppClass for ClassMemberPointersBool
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_ClassMemberPointersBool_Destroy(ptr as *const crate::ffi::MR_CSharp_ClassMemberPointersBool)}
}

impl ClassMemberPointersBool
{
    /// Generated from constructor `MR::CSharp::ClassMemberPointersBool::ClassMemberPointersBool`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersBool_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::ClassMemberPointersBool) -> crate::Owned<crate::mr::c_sharp::ClassMemberPointersBool>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersBool_ConstructFromAnother(_other as *const crate::mr::c_sharp::ClassMemberPointersBool as *const crate::ffi::MR_CSharp_ClassMemberPointersBool)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ClassMemberPointersBool)}
    }

    /// Constructs `MR::CSharp::ClassMemberPointersBool` elementwise.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersBool_ConstructFrom()`.
    /// The reference to the parameter `a` might be preserved in the constructed object.
    /// The reference to the parameter `b` might be preserved in the constructed object.
    /// The reference to the parameter `c` might be preserved in the constructed object.
    /// The reference to the parameter `d` might be preserved in the constructed object.
    pub fn construct_from(a: Option<&mut bool>, b: Option<&bool>, c: &mut bool, d: &bool) -> crate::Owned<crate::mr::c_sharp::ClassMemberPointersBool>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersBool_ConstructFrom(a.map_or(core::ptr::null_mut(), |r| r as *mut bool as *mut bool), b.map_or(core::ptr::null(), |r| r as *const bool as *const bool), c as *mut bool as *mut bool, d as *const bool as *const bool)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ClassMemberPointersBool)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sa`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersBool_Get_sa()`. Some types are raw C types, see the C bindings for the details.
    pub fn sa() -> *const *mut bool
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersBool_Get_sa()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sa`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersBool_GetMutable_sa()`. Some types are raw C types, see the C bindings for the details.
    pub fn sa_mut() -> *mut *mut bool
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersBool_GetMutable_sa()};
        __ret
    }

    /// Modifies a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sa`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersBool_Set_sa()`.
    /// The reference to the parameter `value` might be preserved in this object in element `sa`.
    pub fn set_sa(value: Option<&mut bool>)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersBool_Set_sa(value.map_or(core::ptr::null_mut(), |r| r as *mut bool as *mut bool))};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sb`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersBool_Get_sb()`. Some types are raw C types, see the C bindings for the details.
    pub fn sb() -> *const *const bool
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersBool_Get_sb()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sb`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersBool_GetMutable_sb()`. Some types are raw C types, see the C bindings for the details.
    pub fn sb_mut() -> *mut *const bool
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersBool_GetMutable_sb()};
        __ret
    }

    /// Modifies a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sb`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersBool_Set_sb()`.
    /// The reference to the parameter `value` might be preserved in this object in element `sb`.
    pub fn set_sb(value: Option<&bool>)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersBool_Set_sb(value.map_or(core::ptr::null(), |r| r as *const bool as *const bool))};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sc`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersBool_Get_sc()`.
    pub fn sc() -> *mut bool
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersBool_Get_sc()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sd`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersBool_Get_sd()`.
    pub fn sd() -> *const bool
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersBool_Get_sd()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `a`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersBool_Get_a()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn a(&self) -> *const *mut bool
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersBool_Get_a(self as *const Self as *const crate::ffi::MR_CSharp_ClassMemberPointersBool)};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `a`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersBool_GetMutable_a()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn a_mut(&mut self) -> *mut *mut bool
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersBool_GetMutable_a(self as *mut Self as *mut crate::ffi::MR_CSharp_ClassMemberPointersBool)};
        __ret
    }

    /// Modifies a member variable of class `MR::CSharp::ClassMemberPointersBool` named `a`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersBool_Set_a()`.
    /// The reference to the parameter `value` might be preserved in this object in element `a`.
    pub fn set_a(&mut self, value: Option<&mut bool>)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersBool_Set_a(self as *mut Self as *mut crate::ffi::MR_CSharp_ClassMemberPointersBool, value.map_or(core::ptr::null_mut(), |r| r as *mut bool as *mut bool))};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `b`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersBool_Get_b()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn b(&self) -> *const *const bool
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersBool_Get_b(self as *const Self as *const crate::ffi::MR_CSharp_ClassMemberPointersBool)};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `b`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersBool_GetMutable_b()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn b_mut(&mut self) -> *mut *const bool
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersBool_GetMutable_b(self as *mut Self as *mut crate::ffi::MR_CSharp_ClassMemberPointersBool)};
        __ret
    }

    /// Modifies a member variable of class `MR::CSharp::ClassMemberPointersBool` named `b`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersBool_Set_b()`.
    /// The reference to the parameter `value` might be preserved in this object in element `b`.
    pub fn set_b(&mut self, value: Option<&bool>)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersBool_Set_b(self as *mut Self as *mut crate::ffi::MR_CSharp_ClassMemberPointersBool, value.map_or(core::ptr::null(), |r| r as *const bool as *const bool))};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `c`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersBool_Get_c()`.
    /// The reference to this object might be preserved as the return value.
    pub fn c<'a>(&'a self) -> &'a mut bool
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersBool_Get_c(self as *const Self as *const crate::ffi::MR_CSharp_ClassMemberPointersBool)};
        unsafe {&mut *(__ret as *mut bool)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `d`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersBool_Get_d()`.
    /// The reference to this object might be preserved as the return value.
    pub fn d<'a>(&'a self) -> &'a bool
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersBool_Get_d(self as *const Self as *const crate::ffi::MR_CSharp_ClassMemberPointersBool)};
        unsafe {&*(__ret as *const bool)}
    }

}

unsafe impl crate::CppCopy for ClassMemberPointersBool
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Class fields of pointer types:
/// Generated from class `MR::CSharp::ClassMemberPointersClass`.
///
/// Generated from class `MR::CSharp::ClassMemberPointersClass`. Heap-allocated instances are held in `Owned<ClassMemberPointersClass>`.
#[repr(transparent)]
pub struct ClassMemberPointersClass(crate::ffi::MR_CSharp_ClassMemberPointersClass);

unsafe impl crate::CppClass for ClassMemberPointersClass
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_ClassMemberPointersClass_Destroy(ptr as *const crate::ffi::MR_CSharp_ClassMemberPointersClass)}
}

impl ClassMemberPointersClass
{
    /// Generated from constructor `MR::CSharp::ClassMemberPointersClass::ClassMemberPointersClass`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersClass_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::ClassMemberPointersClass) -> crate::Owned<crate::mr::c_sharp::ClassMemberPointersClass>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersClass_ConstructFromAnother(_other as *const crate::mr::c_sharp::ClassMemberPointersClass as *const crate::ffi::MR_CSharp_ClassMemberPointersClass)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ClassMemberPointersClass)}
    }

    /// Constructs `MR::CSharp::ClassMemberPointersClass` elementwise.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersClass_ConstructFrom()`.
    /// The reference to the parameter `a` might be preserved in the constructed object.
    /// The reference to the parameter `b` might be preserved in the constructed object.
    /// The reference to the parameter `c` might be preserved in the constructed object.
    /// The reference to the parameter `d` might be preserved in the constructed object.
    pub fn construct_from(a: Option<&mut crate::mr::c_sharp::A>, b: Option<&crate::mr::c_sharp::A>, c: &mut crate::mr::c_sharp::A, d: &crate::mr::c_sharp::A) -> crate::Owned<crate::mr::c_sharp::ClassMemberPointersClass>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersClass_ConstructFrom(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::A as *mut crate::ffi::MR_CSharp_A), b.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::A as *const crate::ffi::MR_CSharp_A), c as *mut crate::mr::c_sharp::A as *mut crate::ffi::MR_CSharp_A, d as *const crate::mr::c_sharp::A as *const crate::ffi::MR_CSharp_A)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ClassMemberPointersClass)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `sa`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersClass_Get_sa()`. Some types are raw C types, see the C bindings for the details.
    pub fn sa() -> *const *mut crate::ffi::MR_CSharp_A
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersClass_Get_sa()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `sa`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersClass_GetMutable_sa()`. Some types are raw C types, see the C bindings for the details.
    pub fn sa_mut() -> *mut *mut crate::ffi::MR_CSharp_A
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersClass_GetMutable_sa()};
        __ret
    }

    /// Modifies a member variable of class `MR::CSharp::ClassMemberPointersClass` named `sa`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersClass_Set_sa()`.
    /// The reference to the parameter `value` might be preserved in this object in element `sa`.
    pub fn set_sa(value: Option<&mut crate::mr::c_sharp::A>)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersClass_Set_sa(value.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::A as *mut crate::ffi::MR_CSharp_A))};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `sb`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersClass_Get_sb()`. Some types are raw C types, see the C bindings for the details.
    pub fn sb() -> *const *const crate::ffi::MR_CSharp_A
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersClass_Get_sb()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `sb`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersClass_GetMutable_sb()`. Some types are raw C types, see the C bindings for the details.
    pub fn sb_mut() -> *mut *const crate::ffi::MR_CSharp_A
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersClass_GetMutable_sb()};
        __ret
    }

    /// Modifies a member variable of class `MR::CSharp::ClassMemberPointersClass` named `sb`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersClass_Set_sb()`.
    /// The reference to the parameter `value` might be preserved in this object in element `sb`.
    pub fn set_sb(value: Option<&crate::mr::c_sharp::A>)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersClass_Set_sb(value.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::A as *const crate::ffi::MR_CSharp_A))};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `sc`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersClass_Get_sc()`.
    pub fn sc() -> *mut crate::ffi::MR_CSharp_A
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersClass_Get_sc()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `sd`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersClass_Get_sd()`.
    pub fn sd() -> *const crate::ffi::MR_CSharp_A
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersClass_Get_sd()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `a`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersClass_Get_a()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn a(&self) -> *const *mut crate::ffi::MR_CSharp_A
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersClass_Get_a(self as *const Self as *const crate::ffi::MR_CSharp_ClassMemberPointersClass)};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `a`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersClass_GetMutable_a()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn a_mut(&mut self) -> *mut *mut crate::ffi::MR_CSharp_A
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersClass_GetMutable_a(self as *mut Self as *mut crate::ffi::MR_CSharp_ClassMemberPointersClass)};
        __ret
    }

    /// Modifies a member variable of class `MR::CSharp::ClassMemberPointersClass` named `a`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersClass_Set_a()`.
    /// The reference to the parameter `value` might be preserved in this object in element `a`.
    pub fn set_a(&mut self, value: Option<&mut crate::mr::c_sharp::A>)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersClass_Set_a(self as *mut Self as *mut crate::ffi::MR_CSharp_ClassMemberPointersClass, value.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::A as *mut crate::ffi::MR_CSharp_A))};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `b`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersClass_Get_b()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn b(&self) -> *const *const crate::ffi::MR_CSharp_A
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersClass_Get_b(self as *const Self as *const crate::ffi::MR_CSharp_ClassMemberPointersClass)};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `b`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersClass_GetMutable_b()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn b_mut(&mut self) -> *mut *const crate::ffi::MR_CSharp_A
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersClass_GetMutable_b(self as *mut Self as *mut crate::ffi::MR_CSharp_ClassMemberPointersClass)};
        __ret
    }

    /// Modifies a member variable of class `MR::CSharp::ClassMemberPointersClass` named `b`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersClass_Set_b()`.
    /// The reference to the parameter `value` might be preserved in this object in element `b`.
    pub fn set_b(&mut self, value: Option<&crate::mr::c_sharp::A>)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersClass_Set_b(self as *mut Self as *mut crate::ffi::MR_CSharp_ClassMemberPointersClass, value.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::A as *const crate::ffi::MR_CSharp_A))};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `c`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersClass_Get_c()`.
    /// The reference to this object might be preserved as the return value.
    pub fn c<'a>(&'a self) -> &'a mut crate::mr::c_sharp::A
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersClass_Get_c(self as *const Self as *const crate::ffi::MR_CSharp_ClassMemberPointersClass)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::A)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `d`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersClass_Get_d()`.
    /// The reference to this object might be preserved as the return value.
    pub fn d<'a>(&'a self) -> &'a crate::mr::c_sharp::A
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersClass_Get_d(self as *const Self as *const crate::ffi::MR_CSharp_ClassMemberPointersClass)};
        unsafe {&*(__ret as *const crate::mr::c_sharp::A)}
    }

}

unsafe impl crate::CppCopy for ClassMemberPointersClass
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::ClassMemberPointersExposed`.
///
/// Generated from class `MR::CSharp::ClassMemberPointersExposed`. Heap-allocated instances are held in `Owned<ClassMemberPointersExposed>`.
#[repr(transparent)]
pub struct ClassMemberPointersExposed(crate::ffi::MR_CSharp_ClassMemberPointersExposed);

unsafe impl crate::CppClass for ClassMemberPointersExposed
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_ClassMemberPointersExposed_Destroy(ptr as *const crate::ffi::MR_CSharp_ClassMemberPointersExposed)}
}

impl ClassMemberPointersExposed
{
    /// Generated from constructor `MR::CSharp::ClassMemberPointersExposed::ClassMemberPointersExposed`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersExposed_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::ClassMemberPointersExposed) -> crate::Owned<crate::mr::c_sharp::ClassMemberPointersExposed>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersExposed_ConstructFromAnother(_other as *const crate::mr::c_sharp::ClassMemberPointersExposed as *const crate::ffi::MR_CSharp_ClassMemberPointersExposed)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ClassMemberPointersExposed)}
    }

    /// Constructs `MR::CSharp::ClassMemberPointersExposed` elementwise.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersExposed_ConstructFrom()`.
    /// The reference to the parameter `a` might be preserved in the constructed object.
    /// The reference to the parameter `b` might be preserved in the constructed object.
    /// The reference to the parameter `c` might be preserved in the constructed object.
    /// The reference to the parameter `d` might be preserved in the constructed object.
    pub fn construct_from(a: Option<&mut crate::ffi::MR_CSharp_ExposedLayout>, b: Option<&crate::ffi::MR_CSharp_ExposedLayout>, c: &mut crate::ffi::MR_CSharp_ExposedLayout, d: &crate::ffi::MR_CSharp_ExposedLayout) -> crate::Owned<crate::mr::c_sharp::ClassMemberPointersExposed>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersExposed_ConstructFrom(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_CSharp_ExposedLayout as *mut crate::ffi::MR_CSharp_ExposedLayout), b.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_ExposedLayout as *const crate::ffi::MR_CSharp_ExposedLayout), c as *mut crate::ffi::MR_CSharp_ExposedLayout as *mut crate::ffi::MR_CSharp_ExposedLayout, d as *const crate::ffi::MR_CSharp_ExposedLayout as *const crate::ffi::MR_CSharp_ExposedLayout)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ClassMemberPointersExposed)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sa`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersExposed_Get_sa()`. Some types are raw C types, see the C bindings for the details.
    pub fn sa() -> *const *mut crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersExposed_Get_sa()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sa`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersExposed_GetMutable_sa()`. Some types are raw C types, see the C bindings for the details.
    pub fn sa_mut() -> *mut *mut crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersExposed_GetMutable_sa()};
        __ret
    }

    /// Modifies a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sa`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersExposed_Set_sa()`.
    /// The reference to the parameter `value` might be preserved in this object in element `sa`.
    pub fn set_sa(value: Option<&mut crate::ffi::MR_CSharp_ExposedLayout>)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersExposed_Set_sa(value.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_CSharp_ExposedLayout as *mut crate::ffi::MR_CSharp_ExposedLayout))};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sb`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersExposed_Get_sb()`. Some types are raw C types, see the C bindings for the details.
    pub fn sb() -> *const *const crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersExposed_Get_sb()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sb`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersExposed_GetMutable_sb()`. Some types are raw C types, see the C bindings for the details.
    pub fn sb_mut() -> *mut *const crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersExposed_GetMutable_sb()};
        __ret
    }

    /// Modifies a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sb`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersExposed_Set_sb()`.
    /// The reference to the parameter `value` might be preserved in this object in element `sb`.
    pub fn set_sb(value: Option<&crate::ffi::MR_CSharp_ExposedLayout>)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersExposed_Set_sb(value.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_ExposedLayout as *const crate::ffi::MR_CSharp_ExposedLayout))};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sc`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersExposed_Get_sc()`.
    pub fn sc() -> *mut crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersExposed_Get_sc()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sd`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersExposed_Get_sd()`.
    pub fn sd() -> *const crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersExposed_Get_sd()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `a`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersExposed_Get_a()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn a(&self) -> *const *mut crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersExposed_Get_a(self as *const Self as *const crate::ffi::MR_CSharp_ClassMemberPointersExposed)};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `a`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersExposed_GetMutable_a()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn a_mut(&mut self) -> *mut *mut crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersExposed_GetMutable_a(self as *mut Self as *mut crate::ffi::MR_CSharp_ClassMemberPointersExposed)};
        __ret
    }

    /// Modifies a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `a`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersExposed_Set_a()`.
    /// The reference to the parameter `value` might be preserved in this object in element `a`.
    pub fn set_a(&mut self, value: Option<&mut crate::ffi::MR_CSharp_ExposedLayout>)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersExposed_Set_a(self as *mut Self as *mut crate::ffi::MR_CSharp_ClassMemberPointersExposed, value.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_CSharp_ExposedLayout as *mut crate::ffi::MR_CSharp_ExposedLayout))};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `b`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersExposed_Get_b()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn b(&self) -> *const *const crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersExposed_Get_b(self as *const Self as *const crate::ffi::MR_CSharp_ClassMemberPointersExposed)};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `b`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersExposed_GetMutable_b()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn b_mut(&mut self) -> *mut *const crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersExposed_GetMutable_b(self as *mut Self as *mut crate::ffi::MR_CSharp_ClassMemberPointersExposed)};
        __ret
    }

    /// Modifies a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `b`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersExposed_Set_b()`.
    /// The reference to the parameter `value` might be preserved in this object in element `b`.
    pub fn set_b(&mut self, value: Option<&crate::ffi::MR_CSharp_ExposedLayout>)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersExposed_Set_b(self as *mut Self as *mut crate::ffi::MR_CSharp_ClassMemberPointersExposed, value.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_ExposedLayout as *const crate::ffi::MR_CSharp_ExposedLayout))};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `c`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersExposed_Get_c()`.
    /// The reference to this object might be preserved as the return value.
    pub fn c<'a>(&'a self) -> &'a mut crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersExposed_Get_c(self as *const Self as *const crate::ffi::MR_CSharp_ClassMemberPointersExposed)};
        unsafe {&mut *(__ret as *mut crate::ffi::MR_CSharp_ExposedLayout)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `d`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersExposed_Get_d()`.
    /// The reference to this object might be preserved as the return value.
    pub fn d<'a>(&'a self) -> &'a crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersExposed_Get_d(self as *const Self as *const crate::ffi::MR_CSharp_ClassMemberPointersExposed)};
        unsafe {&*(__ret as *const crate::ffi::MR_CSharp_ExposedLayout)}
    }

}

unsafe impl crate::CppCopy for ClassMemberPointersExposed
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::ClassMemberPointersUshort`.
///
/// Generated from class `MR::CSharp::ClassMemberPointersUshort`. Heap-allocated instances are held in `Owned<ClassMemberPointersUshort>`.
#[repr(transparent)]
pub struct ClassMemberPointersUshort(crate::ffi::MR_CSharp_ClassMemberPointersUshort);

unsafe impl crate::CppClass for ClassMemberPointersUshort
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_ClassMemberPointersUshort_Destroy(ptr as *const crate::ffi::MR_CSharp_ClassMemberPointersUshort)}
}

impl ClassMemberPointersUshort
{
    /// Generated from constructor `MR::CSharp::ClassMemberPointersUshort::ClassMemberPointersUshort`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersUshort_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::ClassMemberPointersUshort) -> crate::Owned<crate::mr::c_sharp::ClassMemberPointersUshort>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersUshort_ConstructFromAnother(_other as *const crate::mr::c_sharp::ClassMemberPointersUshort as *const crate::ffi::MR_CSharp_ClassMemberPointersUshort)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ClassMemberPointersUshort)}
    }

    /// Constructs `MR::CSharp::ClassMemberPointersUshort` elementwise.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersUshort_ConstructFrom()`.
    /// The reference to the parameter `a` might be preserved in the constructed object.
    /// The reference to the parameter `b` might be preserved in the constructed object.
    /// The reference to the parameter `c` might be preserved in the constructed object.
    /// The reference to the parameter `d` might be preserved in the constructed object.
    pub fn construct_from(a: Option<&mut u16>, b: Option<&u16>, c: &mut u16, d: &u16) -> crate::Owned<crate::mr::c_sharp::ClassMemberPointersUshort>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersUshort_ConstructFrom(a.map_or(core::ptr::null_mut(), |r| r as *mut u16 as *mut u16), b.map_or(core::ptr::null(), |r| r as *const u16 as *const u16), c as *mut u16 as *mut u16, d as *const u16 as *const u16)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ClassMemberPointersUshort)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sa`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersUshort_Get_sa()`. Some types are raw C types, see the C bindings for the details.
    pub fn sa() -> *const *mut u16
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersUshort_Get_sa()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sa`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersUshort_GetMutable_sa()`. Some types are raw C types, see the C bindings for the details.
    pub fn sa_mut() -> *mut *mut u16
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersUshort_GetMutable_sa()};
        __ret
    }

    /// Modifies a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sa`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersUshort_Set_sa()`.
    /// The reference to the parameter `value` might be preserved in this object in element `sa`.
    pub fn set_sa(value: Option<&mut u16>)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersUshort_Set_sa(value.map_or(core::ptr::null_mut(), |r| r as *mut u16 as *mut u16))};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sb`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersUshort_Get_sb()`. Some types are raw C types, see the C bindings for the details.
    pub fn sb() -> *const *const u16
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersUshort_Get_sb()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sb`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersUshort_GetMutable_sb()`. Some types are raw C types, see the C bindings for the details.
    pub fn sb_mut() -> *mut *const u16
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersUshort_GetMutable_sb()};
        __ret
    }

    /// Modifies a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sb`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersUshort_Set_sb()`.
    /// The reference to the parameter `value` might be preserved in this object in element `sb`.
    pub fn set_sb(value: Option<&u16>)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersUshort_Set_sb(value.map_or(core::ptr::null(), |r| r as *const u16 as *const u16))};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sc`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersUshort_Get_sc()`.
    pub fn sc() -> *mut u16
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersUshort_Get_sc()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sd`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersUshort_Get_sd()`.
    pub fn sd() -> *const u16
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersUshort_Get_sd()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `a`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersUshort_Get_a()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn a(&self) -> *const *mut u16
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersUshort_Get_a(self as *const Self as *const crate::ffi::MR_CSharp_ClassMemberPointersUshort)};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `a`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersUshort_GetMutable_a()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn a_mut(&mut self) -> *mut *mut u16
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersUshort_GetMutable_a(self as *mut Self as *mut crate::ffi::MR_CSharp_ClassMemberPointersUshort)};
        __ret
    }

    /// Modifies a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `a`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersUshort_Set_a()`.
    /// The reference to the parameter `value` might be preserved in this object in element `a`.
    pub fn set_a(&mut self, value: Option<&mut u16>)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersUshort_Set_a(self as *mut Self as *mut crate::ffi::MR_CSharp_ClassMemberPointersUshort, value.map_or(core::ptr::null_mut(), |r| r as *mut u16 as *mut u16))};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `b`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersUshort_Get_b()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn b(&self) -> *const *const u16
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersUshort_Get_b(self as *const Self as *const crate::ffi::MR_CSharp_ClassMemberPointersUshort)};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `b`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersUshort_GetMutable_b()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn b_mut(&mut self) -> *mut *const u16
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersUshort_GetMutable_b(self as *mut Self as *mut crate::ffi::MR_CSharp_ClassMemberPointersUshort)};
        __ret
    }

    /// Modifies a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `b`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersUshort_Set_b()`.
    /// The reference to the parameter `value` might be preserved in this object in element `b`.
    pub fn set_b(&mut self, value: Option<&u16>)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersUshort_Set_b(self as *mut Self as *mut crate::ffi::MR_CSharp_ClassMemberPointersUshort, value.map_or(core::ptr::null(), |r| r as *const u16 as *const u16))};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `c`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersUshort_Get_c()`.
    /// The reference to this object might be preserved as the return value.
    pub fn c<'a>(&'a self) -> &'a mut u16
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersUshort_Get_c(self as *const Self as *const crate::ffi::MR_CSharp_ClassMemberPointersUshort)};
        unsafe {&mut *(__ret as *mut u16)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `d`.
    ///
    /// Calls `MR_CSharp_ClassMemberPointersUshort_Get_d()`.
    /// The reference to this object might be preserved as the return value.
    pub fn d<'a>(&'a self) -> &'a u16
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ClassMemberPointersUshort_Get_d(self as *const Self as *const crate::ffi::MR_CSharp_ClassMemberPointersUshort)};
        unsafe {&*(__ret as *const u16)}
    }

}

unsafe impl crate::CppCopy for ClassMemberPointersUshort
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Test that we don't produce the const and non-const overloads of the same function under the same name in C#, as that would be a compilation error in C#.
/// Generated from class `MR::CSharp::ConstNonconstConflicts`.
///
/// Generated from struct `MR::CSharp::ConstNonconstConflicts`. The fields are accessed directly.
pub use crate::ffi::MR_CSharp_ConstNonconstConflicts as ConstNonconstConflicts;

impl ConstNonconstConflicts
{
    /// Generated from method `MR::CSharp::ConstNonconstConflicts::foo`.
    ///
    /// Calls `MR_CSharp_ConstNonconstConflicts_foo_mut_int32_t()`.
    pub fn foo_mut_int32_t(&mut self, _1: i32)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConstNonconstConflicts_foo_mut_int32_t(self as *mut Self as *mut crate::ffi::MR_CSharp_ConstNonconstConflicts, _1)};
        __ret
    }

    /// Generated from method `MR::CSharp::ConstNonconstConflicts::foo`.
    ///
    /// Calls `MR_CSharp_ConstNonconstConflicts_foo_float()`.
    pub fn foo_float(&self, _1: f32)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConstNonconstConflicts_foo_float(self as *const Self as *const crate::ffi::MR_CSharp_ConstNonconstConflicts, _1)};
        __ret
    }

    /// Generated from method `MR::CSharp::ConstNonconstConflicts::foo`.
    ///
    /// Calls `MR_CSharp_ConstNonconstConflicts_foo_mut_char()`.
    pub fn foo_mut_char(&mut self, _1: core::ffi::c_char)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConstNonconstConflicts_foo_mut_char(self as *mut Self as *mut crate::ffi::MR_CSharp_ConstNonconstConflicts, _1)};
        __ret
    }

    /// Generated from method `MR::CSharp::ConstNonconstConflicts::foo`.
    ///
    /// Calls `MR_CSharp_ConstNonconstConflicts_foo_char()`.
    pub fn foo_char(&self, _1: core::ffi::c_char)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConstNonconstConflicts_foo_char(self as *const Self as *const crate::ffi::MR_CSharp_ConstNonconstConflicts, _1)};
        __ret
    }

    /// Generated from method `MR::CSharp::ConstNonconstConflicts::operator+`.
    ///
    /// Calls `MR_C_pos_MR_CSharp_ConstNonconstConflicts_ref()`.
    pub fn op_pos_ref(&mut self) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_pos_MR_CSharp_ConstNonconstConflicts_ref(self as *mut Self as *mut crate::ffi::MR_CSharp_ConstNonconstConflicts)};
        __ret
    }

    /// Generated from method `MR::CSharp::ConstNonconstConflicts::operator+`.
    ///
    /// Calls `MR_C_pos_const_MR_CSharp_ConstNonconstConflicts_ref()`.
    pub fn op_pos_const_ref(&self) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_pos_const_MR_CSharp_ConstNonconstConflicts_ref(self as *const Self as *const crate::ffi::MR_CSharp_ConstNonconstConflicts)};
        __ret
    }

    /// Since this returns void, it gets rewritten into a method.
    /// Generated from method `MR::CSharp::ConstNonconstConflicts::operator~`.
    ///
    /// Calls `MR_C_compl_MR_CSharp_ConstNonconstConflicts_ref()`.
    pub fn op_compl_ref(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_compl_MR_CSharp_ConstNonconstConflicts_ref(self as *mut Self as *mut crate::ffi::MR_CSharp_ConstNonconstConflicts)};
        __ret
    }

    /// Generated from method `MR::CSharp::ConstNonconstConflicts::operator~`.
    ///
    /// Calls `MR_C_compl_const_MR_CSharp_ConstNonconstConflicts_ref()`.
    pub fn op_compl_const_ref(&self)
    {
        let __ret = unsafe {crate::ffi::MR_C_compl_const_MR_CSharp_ConstNonconstConflicts_ref(self as *const Self as *const crate::ffi::MR_CSharp_ConstNonconstConflicts)};
        __ret
    }

    /// Generated from method `MR::CSharp::ConstNonconstConflicts::operator/`.
    ///
    /// Calls `MR_C_div_MR_CSharp_ConstNonconstConflicts_ref_int32_t()`.
    pub fn op_div_ref_int32_t(&mut self, _1: i32) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_div_MR_CSharp_ConstNonconstConflicts_ref_int32_t(self as *mut Self as *mut crate::ffi::MR_CSharp_ConstNonconstConflicts, _1)};
        __ret
    }

    /// Generated from method `MR::CSharp::ConstNonconstConflicts::operator/`.
    ///
    /// Calls `MR_C_div_const_MR_CSharp_ConstNonconstConflicts_ref_int32_t()`.
    pub fn op_div_const_ref_int32_t(&self, _1: i32) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_div_const_MR_CSharp_ConstNonconstConflicts_ref_int32_t(self as *const Self as *const crate::ffi::MR_CSharp_ConstNonconstConflicts, _1)};
        __ret
    }

}

/// Conversion constructors. Right now we only provide conversion operators for implicit ones,
///   because I have no idea when the explicit ones could be useful.
/// Generated from class `MR::CSharp::ConvCtor`.
///
/// Generated from class `MR::CSharp::ConvCtor`. Heap-allocated instances are held in `Owned<ConvCtor>`.
#[repr(transparent)]
pub struct ConvCtor(crate::ffi::MR_CSharp_ConvCtor);

unsafe impl crate::CppClass for ConvCtor
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_ConvCtor_Destroy(ptr as *const crate::ffi::MR_CSharp_ConvCtor)}
}

impl ConvCtor
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_ConvCtor_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::ConvCtor>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtor_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtor)}
    }

    /// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
    ///
    /// Calls `MR_CSharp_ConvCtor_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::ConvCtor) -> crate::Owned<crate::mr::c_sharp::ConvCtor>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtor_ConstructFromAnother(_other as *const crate::mr::c_sharp::ConvCtor as *const crate::ffi::MR_CSharp_ConvCtor)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtor)}
    }

    /// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
    ///
    /// Calls `MR_CSharp_ConvCtor_Construct_1_int32_t()`.
    pub fn construct_1_int32_t(_1: i32) -> crate::Owned<crate::mr::c_sharp::ConvCtor>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtor_Construct_1_int32_t(_1)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtor)}
    }

    /// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
    ///
    /// Calls `MR_CSharp_ConvCtor_Construct_2_int32_t()`.
    pub fn construct_2_int32_t(_1: i32, _2: i32) -> crate::Owned<crate::mr::c_sharp::ConvCtor>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtor_Construct_2_int32_t(_1, _2)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtor)}
    }

    /// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
    ///
    /// Calls `MR_CSharp_ConvCtor_Construct_2_int16_t()`.
    pub fn construct_2_int16_t(_1: i16, _2: Option<i32>) -> crate::Owned<crate::mr::c_sharp::ConvCtor>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtor_Construct_2_int16_t(_1, _2.as_ref().map_or(core::ptr::null(), |r| r as *const i32 as *const i32))};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtor)}
    }

    /// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
    ///
    /// Calls `MR_CSharp_ConvCtor_Construct_1_float()`.
    pub fn construct_1_float(_1: f32) -> crate::Owned<crate::mr::c_sharp::ConvCtor>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtor_Construct_1_float(_1)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtor)}
    }

    /// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
    ///
    /// Calls `MR_CSharp_ConvCtor_Construct_2_float()`.
    pub fn construct_2_float(_1: f32, _2: f32) -> crate::Owned<crate::mr::c_sharp::ConvCtor>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtor_Construct_2_float(_1, _2)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtor)}
    }

    /// Generated from method `MR::CSharp::ConvCtor::operator=`.
    ///
    /// Calls `MR_CSharp_ConvCtor_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::ConvCtor) -> &mut crate::mr::c_sharp::ConvCtor
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtor_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_ConvCtor, _other as *const crate::mr::c_sharp::ConvCtor as *const crate::ffi::MR_CSharp_ConvCtor)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::ConvCtor)}
    }

}

unsafe impl crate::CppCopy for ConvCtor
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// A sad class that's copyable but not movable.
/// This can often happen if you have a user-provided destructor.
/// Generated from class `MR::CSharp::ConvCtorCopyButNoMove`.
///
/// Generated from class `MR::CSharp::ConvCtorCopyButNoMove`. Heap-allocated instances are held in `Owned<ConvCtorCopyButNoMove>`.
#[repr(transparent)]
pub struct ConvCtorCopyButNoMove(crate::ffi::MR_CSharp_ConvCtorCopyButNoMove);

unsafe impl crate::CppClass for ConvCtorCopyButNoMove
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_ConvCtorCopyButNoMove_Destroy(ptr as *const crate::ffi::MR_CSharp_ConvCtorCopyButNoMove)}
}

impl ConvCtorCopyButNoMove
{
    /// Generated from constructor `MR::CSharp::ConvCtorCopyButNoMove::ConvCtorCopyButNoMove`.
    ///
    /// Calls `MR_CSharp_ConvCtorCopyButNoMove_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::ConvCtorCopyButNoMove) -> crate::Owned<crate::mr::c_sharp::ConvCtorCopyButNoMove>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtorCopyButNoMove_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::ConvCtorCopyButNoMove as *mut crate::ffi::MR_CSharp_ConvCtorCopyButNoMove)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtorCopyButNoMove)}
    }

    /// Generated from constructor `MR::CSharp::ConvCtorCopyButNoMove::ConvCtorCopyButNoMove`.
    ///
    /// Calls `MR_CSharp_ConvCtorCopyButNoMove_Construct()`.
    pub fn construct(_1: i32) -> crate::Owned<crate::mr::c_sharp::ConvCtorCopyButNoMove>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtorCopyButNoMove_Construct(_1)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtorCopyButNoMove)}
    }

    /// Generated from method `MR::CSharp::ConvCtorCopyButNoMove::operator=`.
    ///
    /// Calls `MR_CSharp_ConvCtorCopyButNoMove_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    /// The reference to this object might be preserved in the return value.
    pub fn assign_from_another<'a>(&'a mut self, _other: &crate::mr::c_sharp::ConvCtorCopyButNoMove) -> &'a mut crate::mr::c_sharp::ConvCtorCopyButNoMove
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtorCopyButNoMove_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_ConvCtorCopyButNoMove, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::ConvCtorCopyButNoMove as *mut crate::ffi::MR_CSharp_ConvCtorCopyButNoMove)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::ConvCtorCopyButNoMove)}
    }

}

unsafe impl crate::CppCopy for ConvCtorCopyButNoMove
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// A converting ctor in an exposed struct.
/// Generated from class `MR::CSharp::ConvCtorExposed`.
///
/// Generated from struct `MR::CSharp::ConvCtorExposed`. The fields are accessed directly.
pub use crate::ffi::MR_CSharp_ConvCtorExposed as ConvCtorExposed;

impl ConvCtorExposed
{
    /// Generated from constructor `MR::CSharp::ConvCtorExposed::ConvCtorExposed`.
    ///
    /// Calls `MR_CSharp_ConvCtorExposed_Construct()`.
    pub fn construct(_1: i32) -> crate::ffi::MR_CSharp_ConvCtorExposed
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtorExposed_Construct(_1)};
        __ret
    }

}

/// Test how a non-trivial class with a converting constructor gets the additional conversion operators in its parameter passing helpers.
/// Generated from class `MR::CSharp::ConvCtorNonTrivial`.
///
/// Generated from class `MR::CSharp::ConvCtorNonTrivial`. Heap-allocated instances are held in `Owned<ConvCtorNonTrivial>`.
#[repr(transparent)]
pub struct ConvCtorNonTrivial(crate::ffi::MR_CSharp_ConvCtorNonTrivial);

unsafe impl crate::CppClass for ConvCtorNonTrivial
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_ConvCtorNonTrivial_Destroy(ptr as *const crate::ffi::MR_CSharp_ConvCtorNonTrivial)}
}

impl ConvCtorNonTrivial
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_ConvCtorNonTrivial_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::ConvCtorNonTrivial>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtorNonTrivial_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtorNonTrivial)}
    }

    /// Generated from constructor `MR::CSharp::ConvCtorNonTrivial::ConvCtorNonTrivial`.
    ///
    /// Calls `MR_CSharp_ConvCtorNonTrivial_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::ConvCtorNonTrivial) -> crate::Owned<crate::mr::c_sharp::ConvCtorNonTrivial>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtorNonTrivial_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::ConvCtorNonTrivial as *mut crate::ffi::MR_CSharp_ConvCtorNonTrivial)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtorNonTrivial)}
    }

    /// Generated from constructor `MR::CSharp::ConvCtorNonTrivial::ConvCtorNonTrivial`.
    ///
    /// Calls `MR_CSharp_ConvCtorNonTrivial_Construct()`.
    pub fn construct(_1: i32) -> crate::Owned<crate::mr::c_sharp::ConvCtorNonTrivial>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtorNonTrivial_Construct(_1)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtorNonTrivial)}
    }

    /// Generated from method `MR::CSharp::ConvCtorNonTrivial::operator=`.
    ///
    /// Calls `MR_CSharp_ConvCtorNonTrivial_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::ConvCtorNonTrivial) -> &mut crate::mr::c_sharp::ConvCtorNonTrivial
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtorNonTrivial_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_ConvCtorNonTrivial, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::ConvCtorNonTrivial as *mut crate::ffi::MR_CSharp_ConvCtorNonTrivial)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::ConvCtorNonTrivial)}
    }

}

unsafe impl crate::CppCopy for ConvCtorNonTrivial
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// A non-trivial move-only class with a converting ctor.
/// Here we test that our converting constructors injected into `_ByValue_...` don't attempt to copy the class.
/// Generated from class `MR::CSharp::ConvCtorNonTrivialRestricted`.
///
/// Generated from class `MR::CSharp::ConvCtorNonTrivialRestricted`. Heap-allocated instances are held in `Owned<ConvCtorNonTrivialRestricted>`.
#[repr(transparent)]
pub struct ConvCtorNonTrivialRestricted(crate::ffi::MR_CSharp_ConvCtorNonTrivialRestricted);

unsafe impl crate::CppClass for ConvCtorNonTrivialRestricted
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_ConvCtorNonTrivialRestricted_Destroy(ptr as *const crate::ffi::MR_CSharp_ConvCtorNonTrivialRestricted)}
}

impl ConvCtorNonTrivialRestricted
{
    /// Generated from constructor `MR::CSharp::ConvCtorNonTrivialRestricted::ConvCtorNonTrivialRestricted`.
    ///
    /// Calls `MR_CSharp_ConvCtorNonTrivialRestricted_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: crate::Owned<crate::mr::c_sharp::ConvCtorNonTrivialRestricted>) -> crate::Owned<crate::mr::c_sharp::ConvCtorNonTrivialRestricted>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtorNonTrivialRestricted_ConstructFromAnother(crate::ffi::MR_C_PassBy_MoveAndDestroy, _other.into_raw() as *mut crate::ffi::MR_CSharp_ConvCtorNonTrivialRestricted)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtorNonTrivialRestricted)}
    }

    /// Generated from constructor `MR::CSharp::ConvCtorNonTrivialRestricted::ConvCtorNonTrivialRestricted`.
    ///
    /// Calls `MR_CSharp_ConvCtorNonTrivialRestricted_Construct()`.
    pub fn construct(_1: i32) -> crate::Owned<crate::mr::c_sharp::ConvCtorNonTrivialRestricted>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtorNonTrivialRestricted_Construct(_1)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtorNonTrivialRestricted)}
    }

    /// Generated from method `MR::CSharp::ConvCtorNonTrivialRestricted::operator=`.
    ///
    /// Calls `MR_CSharp_ConvCtorNonTrivialRestricted_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    /// The reference to this object might be preserved in the return value.
    pub fn assign_from_another<'a>(&'a mut self, _other: crate::Owned<crate::mr::c_sharp::ConvCtorNonTrivialRestricted>) -> &'a mut crate::mr::c_sharp::ConvCtorNonTrivialRestricted
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtorNonTrivialRestricted_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_ConvCtorNonTrivialRestricted, crate::ffi::MR_C_PassBy_MoveAndDestroy, _other.into_raw() as *mut crate::ffi::MR_CSharp_ConvCtorNonTrivialRestricted)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::ConvCtorNonTrivialRestricted)}
    }

}

/// Test how a trivial class with a converting constructor gets the additional conversion operators in its parameter passing helpers.
/// Generated from class `MR::CSharp::ConvCtorTrivial`.
///
/// Generated from class `MR::CSharp::ConvCtorTrivial`. Heap-allocated instances are held in `Owned<ConvCtorTrivial>`.
#[repr(transparent)]
pub struct ConvCtorTrivial(crate::ffi::MR_CSharp_ConvCtorTrivial);

unsafe impl crate::CppClass for ConvCtorTrivial
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_ConvCtorTrivial_Destroy(ptr as *const crate::ffi::MR_CSharp_ConvCtorTrivial)}
}

impl ConvCtorTrivial
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_ConvCtorTrivial_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::ConvCtorTrivial>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtorTrivial_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtorTrivial)}
    }

    /// Generated from constructor `MR::CSharp::ConvCtorTrivial::ConvCtorTrivial`.
    ///
    /// Calls `MR_CSharp_ConvCtorTrivial_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::ConvCtorTrivial) -> crate::Owned<crate::mr::c_sharp::ConvCtorTrivial>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtorTrivial_ConstructFromAnother(_other as *const crate::mr::c_sharp::ConvCtorTrivial as *const crate::ffi::MR_CSharp_ConvCtorTrivial)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtorTrivial)}
    }

    /// Generated from constructor `MR::CSharp::ConvCtorTrivial::ConvCtorTrivial`.
    ///
    /// Calls `MR_CSharp_ConvCtorTrivial_Construct()`.
    pub fn construct(_1: i32) -> crate::Owned<crate::mr::c_sharp::ConvCtorTrivial>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtorTrivial_Construct(_1)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtorTrivial)}
    }

    /// Generated from method `MR::CSharp::ConvCtorTrivial::operator=`.
    ///
    /// Calls `MR_CSharp_ConvCtorTrivial_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::ConvCtorTrivial) -> &mut crate::mr::c_sharp::ConvCtorTrivial
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtorTrivial_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_ConvCtorTrivial, _other as *const crate::mr::c_sharp::ConvCtorTrivial as *const crate::ffi::MR_CSharp_ConvCtorTrivial)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::ConvCtorTrivial)}
    }

}

unsafe impl crate::CppCopy for ConvCtorTrivial
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Test that the default argument of the parameter of a converting constructor is stripped when rewriting it as a conversion operator.
/// Generated from class `MR::CSharp::ConvCtorWithDefArg`.
///
/// Generated from class `MR::CSharp::ConvCtorWithDefArg`. Heap-allocated instances are held in `Owned<ConvCtorWithDefArg>`.
#[repr(transparent)]
pub struct ConvCtorWithDefArg(crate::ffi::MR_CSharp_ConvCtorWithDefArg);

unsafe impl crate::CppClass for ConvCtorWithDefArg
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_ConvCtorWithDefArg_Destroy(ptr as *const crate::ffi::MR_CSharp_ConvCtorWithDefArg)}
}

impl ConvCtorWithDefArg
{
    /// Generated from constructor `MR::CSharp::ConvCtorWithDefArg::ConvCtorWithDefArg`.
    ///
    /// Calls `MR_CSharp_ConvCtorWithDefArg_Construct()`.
    pub fn construct(_1: Option<i32>) -> crate::Owned<crate::mr::c_sharp::ConvCtorWithDefArg>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtorWithDefArg_Construct(_1.as_ref().map_or(core::ptr::null(), |r| r as *const i32 as *const i32))};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtorWithDefArg)}
    }

    /// Generated from constructor `MR::CSharp::ConvCtorWithDefArg::ConvCtorWithDefArg`.
    ///
    /// Calls `MR_CSharp_ConvCtorWithDefArg_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::ConvCtorWithDefArg) -> crate::Owned<crate::mr::c_sharp::ConvCtorWithDefArg>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtorWithDefArg_ConstructFromAnother(_other as *const crate::mr::c_sharp::ConvCtorWithDefArg as *const crate::ffi::MR_CSharp_ConvCtorWithDefArg)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtorWithDefArg)}
    }

    /// Generated from method `MR::CSharp::ConvCtorWithDefArg::operator=`.
    ///
    /// Calls `MR_CSharp_ConvCtorWithDefArg_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::ConvCtorWithDefArg) -> &mut crate::mr::c_sharp::ConvCtorWithDefArg
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvCtorWithDefArg_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_ConvCtorWithDefArg, _other as *const crate::mr::c_sharp::ConvCtorWithDefArg as *const crate::ffi::MR_CSharp_ConvCtorWithDefArg)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::ConvCtorWithDefArg)}
    }

}

unsafe impl crate::CppCopy for ConvCtorWithDefArg
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Conversion operators. We preserve explicit-ness.
/// Generated from class `MR::CSharp::ConvOp`.
///
/// Generated from class `MR::CSharp::ConvOp`. Heap-allocated instances are held in `Owned<ConvOp>`.
#[repr(transparent)]
pub struct ConvOp(crate::ffi::MR_CSharp_ConvOp);

unsafe impl crate::CppClass for ConvOp
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_ConvOp_Destroy(ptr as *const crate::ffi::MR_CSharp_ConvOp)}
}

impl ConvOp
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_ConvOp_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::ConvOp>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvOp_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvOp)}
    }

    /// Generated from constructor `MR::CSharp::ConvOp::ConvOp`.
    ///
    /// Calls `MR_CSharp_ConvOp_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::ConvOp) -> crate::Owned<crate::mr::c_sharp::ConvOp>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvOp_ConstructFromAnother(_other as *const crate::mr::c_sharp::ConvOp as *const crate::ffi::MR_CSharp_ConvOp)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvOp)}
    }

    /// Generated from conversion operator `MR::CSharp::ConvOp::operator int32_t`.
    ///
    /// Calls `MR_CSharp_ConvOp_ConvertTo_int32_t()`.
    pub fn convert_to_int32_t(&mut self) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvOp_ConvertTo_int32_t(self as *mut Self as *mut crate::ffi::MR_CSharp_ConvOp)};
        __ret
    }

    /// Generated from conversion operator `MR::CSharp::ConvOp::operator float`.
    ///
    /// Calls `MR_CSharp_ConvOp_ConvertTo_float()`.
    pub fn convert_to_float(&mut self) -> f32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvOp_ConvertTo_float(self as *mut Self as *mut crate::ffi::MR_CSharp_ConvOp)};
        __ret
    }

    /// Generated from method `MR::CSharp::ConvOp::operator=`.
    ///
    /// Calls `MR_CSharp_ConvOp_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::ConvOp) -> &mut crate::mr::c_sharp::ConvOp
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvOp_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_ConvOp, _other as *const crate::mr::c_sharp::ConvOp as *const crate::ffi::MR_CSharp_ConvOp)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::ConvOp)}
    }

}

unsafe impl crate::CppCopy for ConvOp
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Conversion operators to references.
/// Generated from class `MR::CSharp::ConvOpToRef`.
///
/// Generated from class `MR::CSharp::ConvOpToRef`. Heap-allocated instances are held in `Owned<ConvOpToRef>`.
#[repr(transparent)]
pub struct ConvOpToRef(crate::ffi::MR_CSharp_ConvOpToRef);

unsafe impl crate::CppClass for ConvOpToRef
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_ConvOpToRef_Destroy(ptr as *const crate::ffi::MR_CSharp_ConvOpToRef)}
}

impl ConvOpToRef
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_ConvOpToRef_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::ConvOpToRef>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvOpToRef_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvOpToRef)}
    }

    /// Generated from constructor `MR::CSharp::ConvOpToRef::ConvOpToRef`.
    ///
    /// Calls `MR_CSharp_ConvOpToRef_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::ConvOpToRef) -> crate::Owned<crate::mr::c_sharp::ConvOpToRef>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvOpToRef_ConstructFromAnother(_other as *const crate::mr::c_sharp::ConvOpToRef as *const crate::ffi::MR_CSharp_ConvOpToRef)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvOpToRef)}
    }

    /// Not to a reference.
    /// Generated from conversion operator `MR::CSharp::ConvOpToRef::operator int32_t`.
    ///
    /// Calls `MR_CSharp_ConvOpToRef_ConvertTo_int32_t()`.
    pub fn convert_to_int32_t(&mut self) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvOpToRef_ConvertTo_int32_t(self as *mut Self as *mut crate::ffi::MR_CSharp_ConvOpToRef)};
        __ret
    }

    /// To a reference.
    /// Generated from conversion operator `MR::CSharp::ConvOpToRef::operator float &`.
    ///
    /// Calls `MR_CSharp_ConvOpToRef_ConvertTo_float_ref()`.
    pub fn convert_to_float_ref(&mut self) -> &mut f32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvOpToRef_ConvertTo_float_ref(self as *mut Self as *mut crate::ffi::MR_CSharp_ConvOpToRef)};
        unsafe {&mut *(__ret as *mut f32)}
    }

    /// To a reference, explicit.
    /// Generated from conversion operator `MR::CSharp::ConvOpToRef::operator uint16_t &`.
    ///
    /// Calls `MR_CSharp_ConvOpToRef_ConvertTo_uint16_t_ref()`.
    pub fn convert_to_uint16_t_ref(&mut self) -> &mut u16
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvOpToRef_ConvertTo_uint16_t_ref(self as *mut Self as *mut crate::ffi::MR_CSharp_ConvOpToRef)};
        unsafe {&mut *(__ret as *mut u16)}
    }

    /// Generated from method `MR::CSharp::ConvOpToRef::operator=`.
    ///
    /// Calls `MR_CSharp_ConvOpToRef_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::ConvOpToRef) -> &mut crate::mr::c_sharp::ConvOpToRef
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ConvOpToRef_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_ConvOpToRef, _other as *const crate::mr::c_sharp::ConvOpToRef as *const crate::ffi::MR_CSharp_ConvOpToRef)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::ConvOpToRef)}
    }

}

unsafe impl crate::CppCopy for ConvOpToRef
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::D`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::CSharp::F`
///     `MR::CSharp::G`
///
/// Generated from class `MR::CSharp::D`. Heap-allocated instances are held in `Owned<D>`.
#[repr(transparent)]
pub struct D(crate::ffi::MR_CSharp_D);

unsafe impl crate::CppClass for D
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_D_Destroy(ptr as *const crate::ffi::MR_CSharp_D)}
}

impl D
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_D_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::D>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_D_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::D)}
    }

    /// Generated from constructor `MR::CSharp::D::D`.
    ///
    /// Calls `MR_CSharp_D_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::D) -> crate::Owned<crate::mr::c_sharp::D>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_D_ConstructFromAnother(_other as *const crate::mr::c_sharp::D as *const crate::ffi::MR_CSharp_D)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::D)}
    }

    /// Generated from method `MR::CSharp::D::operator=`.
    ///
    /// Calls `MR_CSharp_D_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::D) -> &mut crate::mr::c_sharp::D
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_D_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_D, _other as *const crate::mr::c_sharp::D as *const crate::ffi::MR_CSharp_D)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::D)}
    }

    /// Generated from method `MR::CSharp::D::d1`.
    ///
    /// Calls `MR_CSharp_D_d1()`.
    pub fn d1(&self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_D_d1(self as *const Self as *const crate::ffi::MR_CSharp_D)};
        __ret
    }

    /// Generated from method `MR::CSharp::D::d2`.
    ///
    /// Calls `MR_CSharp_D_d2()`.
    pub fn d2(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_D_d2(self as *mut Self as *mut crate::ffi::MR_CSharp_D)};
        __ret
    }

}

unsafe impl crate::CppCopy for D
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::E`.
/// Derived classes:
///   Virtual:
///     `MR::CSharp::G`
///   Direct: (non-virtual)
///     `MR::CSharp::F`
///
/// Generated from class `MR::CSharp::E`. Heap-allocated instances are held in `Owned<E>`.
#[repr(transparent)]
pub struct E(crate::ffi::MR_CSharp_E);

unsafe impl crate::CppClass for E
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_E_Destroy(ptr as *const crate::ffi::MR_CSharp_E)}
}

impl E
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_E_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::E>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_E_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::E)}
    }

    /// Generated from constructor `MR::CSharp::E::E`.
    ///
    /// Calls `MR_CSharp_E_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::E) -> crate::Owned<crate::mr::c_sharp::E>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_E_ConstructFromAnother(_other as *const crate::mr::c_sharp::E as *const crate::ffi::MR_CSharp_E)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::E)}
    }

    /// Generated from method `MR::CSharp::E::operator=`.
    ///
    /// Calls `MR_CSharp_E_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::E) -> &mut crate::mr::c_sharp::E
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_E_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_E, _other as *const crate::mr::c_sharp::E as *const crate::ffi::MR_CSharp_E)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::E)}
    }

    /// Generated from method `MR::CSharp::E::e1`.
    ///
    /// Calls `MR_CSharp_E_e1()`.
    pub fn e1(&self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_E_e1(self as *const Self as *const crate::ffi::MR_CSharp_E)};
        __ret
    }

    /// Generated from method `MR::CSharp::E::e2`.
    ///
    /// Calls `MR_CSharp_E_e2()`.
    pub fn e2(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_E_e2(self as *mut Self as *mut crate::ffi::MR_CSharp_E)};
        __ret
    }

}

unsafe impl crate::CppCopy for E
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Test equality comparison.
/// Generated from class `MR::CSharp::EqualityA`.
///
/// Generated from class `MR::CSharp::EqualityA`. Heap-allocated instances are held in `Owned<EqualityA>`.
#[repr(transparent)]
pub struct EqualityA(crate::ffi::MR_CSharp_EqualityA);

unsafe impl crate::CppClass for EqualityA
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_EqualityA_Destroy(ptr as *const crate::ffi::MR_CSharp_EqualityA)}
}

impl EqualityA
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_EqualityA_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::EqualityA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_EqualityA_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::EqualityA)}
    }

    /// Generated from constructor `MR::CSharp::EqualityA::EqualityA`.
    ///
    /// Calls `MR_CSharp_EqualityA_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::EqualityA) -> crate::Owned<crate::mr::c_sharp::EqualityA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_EqualityA_ConstructFromAnother(_other as *const crate::mr::c_sharp::EqualityA as *const crate::ffi::MR_CSharp_EqualityA)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::EqualityA)}
    }

    /// Generated from method `MR::CSharp::EqualityA::operator=`.
    ///
    /// Calls `MR_CSharp_EqualityA_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::EqualityA) -> &mut crate::mr::c_sharp::EqualityA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_EqualityA_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_EqualityA, _other as *const crate::mr::c_sharp::EqualityA as *const crate::ffi::MR_CSharp_EqualityA)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::EqualityA)}
    }

    /// Generated from method `MR::CSharp::EqualityA::operator==`.
    ///
    /// Calls `MR_C_equal_MR_CSharp_EqualityA_int32_t()`.
    pub fn op_equal_int32_t(&mut self, _1: i32) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_equal_MR_CSharp_EqualityA_int32_t(self as *mut Self as *mut crate::ffi::MR_CSharp_EqualityA, _1)};
        __ret
    }

    /// Generated from method `MR::CSharp::EqualityA::operator!=`.
    ///
    /// Calls `MR_C_not_equal_MR_CSharp_EqualityA_int32_t()`.
    pub fn op_not_equal_int32_t(&mut self, _1: i32) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_not_equal_MR_CSharp_EqualityA_int32_t(self as *mut Self as *mut crate::ffi::MR_CSharp_EqualityA, _1)};
        __ret
    }

    /// Generated from method `MR::CSharp::EqualityA::operator==`.
    ///
    /// Calls `MR_C_equal_MR_CSharp_EqualityA()`.
    pub fn op_equal(&self, _1: &crate::mr::c_sharp::EqualityA) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_equal_MR_CSharp_EqualityA(self as *const Self as *const crate::ffi::MR_CSharp_EqualityA, _1 as *const crate::mr::c_sharp::EqualityA as *const crate::ffi::MR_CSharp_EqualityA)};
        __ret
    }

}

unsafe impl crate::CppCopy for EqualityA
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Return type isn't `bool`.
/// Generated from class `MR::CSharp::EqualityB`.
///
/// Generated from class `MR::CSharp::EqualityB`. Heap-allocated instances are held in `Owned<EqualityB>`.
#[repr(transparent)]
pub struct EqualityB(crate::ffi::MR_CSharp_EqualityB);

unsafe impl crate::CppClass for EqualityB
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_EqualityB_Destroy(ptr as *const crate::ffi::MR_CSharp_EqualityB)}
}

impl EqualityB
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_EqualityB_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::EqualityB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_EqualityB_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::EqualityB)}
    }

    /// Generated from constructor `MR::CSharp::EqualityB::EqualityB`.
    ///
    /// Calls `MR_CSharp_EqualityB_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::EqualityB) -> crate::Owned<crate::mr::c_sharp::EqualityB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_EqualityB_ConstructFromAnother(_other as *const crate::mr::c_sharp::EqualityB as *const crate::ffi::MR_CSharp_EqualityB)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::EqualityB)}
    }

    /// Generated from method `MR::CSharp::EqualityB::operator=`.
    ///
    /// Calls `MR_CSharp_EqualityB_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::EqualityB) -> &mut crate::mr::c_sharp::EqualityB
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_EqualityB_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_EqualityB, _other as *const crate::mr::c_sharp::EqualityB as *const crate::ffi::MR_CSharp_EqualityB)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::EqualityB)}
    }

    /// Generated from method `MR::CSharp::EqualityB::operator==`.
    ///
    /// Calls `MR_C_equal_MR_CSharp_EqualityB_int32_t()`.
    pub fn op_equal_int32_t(&mut self, _1: i32) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_equal_MR_CSharp_EqualityB_int32_t(self as *mut Self as *mut crate::ffi::MR_CSharp_EqualityB, _1)};
        __ret
    }

    /// Generated from method `MR::CSharp::EqualityB::operator!=`.
    ///
    /// Calls `MR_C_not_equal_MR_CSharp_EqualityB_int32_t()`.
    pub fn op_not_equal_int32_t(&mut self, _1: i32) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_not_equal_MR_CSharp_EqualityB_int32_t(self as *mut Self as *mut crate::ffi::MR_CSharp_EqualityB, _1)};
        __ret
    }

    /// Generated from method `MR::CSharp::EqualityB::operator==`.
    ///
    /// Calls `MR_C_equal_MR_CSharp_EqualityB()`.
    pub fn op_equal(&self, _1: &crate::mr::c_sharp::EqualityB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_equal_MR_CSharp_EqualityB(self as *const Self as *const crate::ffi::MR_CSharp_EqualityB, _1 as *const crate::mr::c_sharp::EqualityB as *const crate::ffi::MR_CSharp_EqualityB)};
        __ret
    }

}

unsafe impl crate::CppCopy for EqualityB
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Return type is `void`.
/// Generated from class `MR::CSharp::EqualityC`.
///
/// Generated from class `MR::CSharp::EqualityC`. Heap-allocated instances are held in `Owned<EqualityC>`.
#[repr(transparent)]
pub struct EqualityC(crate::ffi::MR_CSharp_EqualityC);

unsafe impl crate::CppClass for EqualityC
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_EqualityC_Destroy(ptr as *const crate::ffi::MR_CSharp_EqualityC)}
}

impl EqualityC
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_EqualityC_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::EqualityC>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_EqualityC_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::EqualityC)}
    }

    /// Generated from constructor `MR::CSharp::EqualityC::EqualityC`.
    ///
    /// Calls `MR_CSharp_EqualityC_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::EqualityC) -> crate::Owned<crate::mr::c_sharp::EqualityC>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_EqualityC_ConstructFromAnother(_other as *const crate::mr::c_sharp::EqualityC as *const crate::ffi::MR_CSharp_EqualityC)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::EqualityC)}
    }

    /// Generated from method `MR::CSharp::EqualityC::operator=`.
    ///
    /// Calls `MR_CSharp_EqualityC_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::EqualityC) -> &mut crate::mr::c_sharp::EqualityC
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_EqualityC_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_EqualityC, _other as *const crate::mr::c_sharp::EqualityC as *const crate::ffi::MR_CSharp_EqualityC)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::EqualityC)}
    }

    /// Generated from method `MR::CSharp::EqualityC::operator==`.
    ///
    /// Calls `MR_C_equal_MR_CSharp_EqualityC_int32_t()`.
    pub fn op_equal_int32_t(&mut self, _1: i32)
    {
        let __ret = unsafe {crate::ffi::MR_C_equal_MR_CSharp_EqualityC_int32_t(self as *mut Self as *mut crate::ffi::MR_CSharp_EqualityC, _1)};
        __ret
    }

    /// Generated from method `MR::CSharp::EqualityC::operator!=`.
    ///
    /// Calls `MR_C_not_equal_MR_CSharp_EqualityC_int32_t()`.
    pub fn op_not_equal_int32_t(&mut self, _1: i32)
    {
        let __ret = unsafe {crate::ffi::MR_C_not_equal_MR_CSharp_EqualityC_int32_t(self as *mut Self as *mut crate::ffi::MR_CSharp_EqualityC, _1)};
        __ret
    }

    /// Generated from method `MR::CSharp::EqualityC::operator==`.
    ///
    /// Calls `MR_C_equal_MR_CSharp_EqualityC()`.
    pub fn op_equal(&self, _1: &crate::mr::c_sharp::EqualityC)
    {
        let __ret = unsafe {crate::ffi::MR_C_equal_MR_CSharp_EqualityC(self as *const Self as *const crate::ffi::MR_CSharp_EqualityC, _1 as *const crate::mr::c_sharp::EqualityC as *const crate::ffi::MR_CSharp_EqualityC)};
        __ret
    }

}

unsafe impl crate::CppCopy for EqualityC
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The C# parameter type ends with `?`, and isn't a managed type.
/// Generated from class `MR::CSharp::EqualityD`.
///
/// Generated from class `MR::CSharp::EqualityD`. Heap-allocated instances are held in `Owned<EqualityD>`.
#[repr(transparent)]
pub struct EqualityD(crate::ffi::MR_CSharp_EqualityD);

unsafe impl crate::CppClass for EqualityD
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_EqualityD_Destroy(ptr as *const crate::ffi::MR_CSharp_EqualityD)}
}

impl EqualityD
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_EqualityD_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::EqualityD>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_EqualityD_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::EqualityD)}
    }

    /// Generated from constructor `MR::CSharp::EqualityD::EqualityD`.
    ///
    /// Calls `MR_CSharp_EqualityD_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::EqualityD) -> crate::Owned<crate::mr::c_sharp::EqualityD>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_EqualityD_ConstructFromAnother(_other as *const crate::mr::c_sharp::EqualityD as *const crate::ffi::MR_CSharp_EqualityD)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::EqualityD)}
    }

    /// Generated from method `MR::CSharp::EqualityD::operator=`.
    ///
    /// Calls `MR_CSharp_EqualityD_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::EqualityD) -> &mut crate::mr::c_sharp::EqualityD
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_EqualityD_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_EqualityD, _other as *const crate::mr::c_sharp::EqualityD as *const crate::ffi::MR_CSharp_EqualityD)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::EqualityD)}
    }

    /// Generated from method `MR::CSharp::EqualityD::operator==`.
    ///
    /// Calls `MR_C_equal_MR_CSharp_EqualityD_const_int32_t_ptr()`.
    pub fn op_equal_const_int32_t_ptr(&mut self, _1: Option<&i32>) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_equal_MR_CSharp_EqualityD_const_int32_t_ptr(self as *mut Self as *mut crate::ffi::MR_CSharp_EqualityD, _1.map_or(core::ptr::null(), |r| r as *const i32 as *const i32))};
        __ret
    }

}

unsafe impl crate::CppCopy for EqualityD
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The C# parameter type ends with `?`, and is a managed type.
/// Generated from class `MR::CSharp::EqualityE`.
///
/// Generated from class `MR::CSharp::EqualityE`. Heap-allocated instances are held in `Owned<EqualityE>`.
#[repr(transparent)]
pub struct EqualityE(crate::ffi::MR_CSharp_EqualityE);

unsafe impl crate::CppClass for EqualityE
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_EqualityE_Destroy(ptr as *const crate::ffi::MR_CSharp_EqualityE)}
}

impl EqualityE
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_EqualityE_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::EqualityE>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_EqualityE_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::EqualityE)}
    }

    /// Generated from constructor `MR::CSharp::EqualityE::EqualityE`.
    ///
    /// Calls `MR_CSharp_EqualityE_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::EqualityE) -> crate::Owned<crate::mr::c_sharp::EqualityE>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_EqualityE_ConstructFromAnother(_other as *const crate::mr::c_sharp::EqualityE as *const crate::ffi::MR_CSharp_EqualityE)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::EqualityE)}
    }

    /// Generated from method `MR::CSharp::EqualityE::operator=`.
    ///
    /// Calls `MR_CSharp_EqualityE_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::EqualityE) -> &mut crate::mr::c_sharp::EqualityE
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_EqualityE_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_EqualityE, _other as *const crate::mr::c_sharp::EqualityE as *const crate::ffi::MR_CSharp_EqualityE)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::EqualityE)}
    }

    /// Generated from method `MR::CSharp::EqualityE::operator==`.
    ///
    /// Calls `MR_C_equal_MR_CSharp_EqualityE_MR_CSharp_EqualityD_ptr()`.
    pub fn op_equal_mr_c_sharp_equality_d_ptr(&mut self, _1: Option<&mut crate::mr::c_sharp::EqualityD>) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_equal_MR_CSharp_EqualityE_MR_CSharp_EqualityD_ptr(self as *mut Self as *mut crate::ffi::MR_CSharp_EqualityE, _1.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::EqualityD as *mut crate::ffi::MR_CSharp_EqualityD))};
        __ret
    }

}

unsafe impl crate::CppCopy for EqualityE
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Exposed structs:
/// Generated from class `MR::CSharp::ExposedLayout`.
///
/// Generated from struct `MR::CSharp::ExposedLayout`. The fields are accessed directly.
pub use crate::ffi::MR_CSharp_ExposedLayout as ExposedLayout;

impl ExposedLayout
{
    /// Generated from method `MR::CSharp::ExposedLayout::foo`.
    ///
    /// Calls `MR_CSharp_ExposedLayout_foo()`.
    pub fn foo(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ExposedLayout_foo(self as *mut Self as *mut crate::ffi::MR_CSharp_ExposedLayout)};
        __ret
    }

    /// Generated from method `MR::CSharp::ExposedLayout::bar`.
    ///
    /// Calls `MR_CSharp_ExposedLayout_bar()`.
    pub fn bar(&self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ExposedLayout_bar(self as *const Self as *const crate::ffi::MR_CSharp_ExposedLayout)};
        __ret
    }

    /// Generated from method `MR::CSharp::ExposedLayout::blah`.
    ///
    /// Calls `MR_CSharp_ExposedLayout_blah()`.
    pub fn blah()
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ExposedLayout_blah()};
        __ret
    }

    /// Try some jank operators.
    /// Generated from method `MR::CSharp::ExposedLayout::operator++`.
    ///
    /// Calls `MR_C_incr_MR_CSharp_ExposedLayout()`.
    pub fn op_incr(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_incr_MR_CSharp_ExposedLayout(self as *mut Self as *mut crate::ffi::MR_CSharp_ExposedLayout)};
        __ret
    }

    /// Generated from method `MR::CSharp::ExposedLayout::operator+`.
    ///
    /// Calls `MR_C_add_MR_CSharp_ExposedLayout_ref_int32_t()`.
    pub fn op_add_ref_int32_t(&mut self, _1: i32) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_add_MR_CSharp_ExposedLayout_ref_int32_t(self as *mut Self as *mut crate::ffi::MR_CSharp_ExposedLayout, _1)};
        __ret
    }

    /// Test how returning references to an exposed struct works, since C# overloaded operators can't return `ref`.
    /// Note that this operator must be `const` to test this correctly, since we turn non-const operators in exposed structs into functions.
    /// Generated from method `MR::CSharp::ExposedLayout::operator*`.
    ///
    /// Calls `MR_C_mul_MR_CSharp_ExposedLayout_int32_t()`.
    pub fn op_mul_int32_t(&self, _1: i32) -> &mut crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_C_mul_MR_CSharp_ExposedLayout_int32_t(self as *const Self as *const crate::ffi::MR_CSharp_ExposedLayout, _1)};
        unsafe {&mut *(__ret as *mut crate::ffi::MR_CSharp_ExposedLayout)}
    }

    /// Generated from method `MR::CSharp::ExposedLayout::operator+`.
    ///
    /// Calls `MR_C_add_const_MR_CSharp_ExposedLayout_ref_int32_t()`.
    pub fn op_add_const_ref_int32_t(&self, _1: i32) -> &crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_C_add_const_MR_CSharp_ExposedLayout_ref_int32_t(self as *const Self as *const crate::ffi::MR_CSharp_ExposedLayout, _1)};
        unsafe {&*(__ret as *const crate::ffi::MR_CSharp_ExposedLayout)}
    }

    /// Generated from method `MR::CSharp::ExposedLayout::operator<`.
    ///
    /// Calls `MR_C_less_MR_CSharp_ExposedLayout()`.
    pub fn op_less(&self, _1: &crate::ffi::MR_CSharp_ExposedLayout) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_less_MR_CSharp_ExposedLayout(self as *const Self as *const crate::ffi::MR_CSharp_ExposedLayout, _1 as *const crate::ffi::MR_CSharp_ExposedLayout as *const crate::ffi::MR_CSharp_ExposedLayout)};
        __ret
    }

    /// Generated from method `MR::CSharp::ExposedLayout::operator==`.
    ///
    /// Calls `MR_C_equal_MR_CSharp_ExposedLayout_float()`.
    pub fn op_equal_float(&mut self, _1: f32) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_equal_MR_CSharp_ExposedLayout_float(self as *mut Self as *mut crate::ffi::MR_CSharp_ExposedLayout, _1)};
        __ret
    }

    /// Generated from method `MR::CSharp::ExposedLayout::operator<`.
    ///
    /// Calls `MR_C_less_MR_CSharp_ExposedLayout_char()`.
    pub fn op_less_char(&mut self, _1: core::ffi::c_char) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_less_MR_CSharp_ExposedLayout_char(self as *mut Self as *mut crate::ffi::MR_CSharp_ExposedLayout, _1)};
        __ret
    }

}

/// Generated from class `MR::CSharp::ExposedLayoutB`.
///
/// Generated from struct `MR::CSharp::ExposedLayoutB`. The fields are accessed directly.
pub use crate::ffi::MR_CSharp_ExposedLayoutB as ExposedLayoutB;

impl ExposedLayoutB
{
    /// Some random ctor.
    /// Generated from constructor `MR::CSharp::ExposedLayoutB::ExposedLayoutB`.
    ///
    /// Calls `MR_CSharp_ExposedLayoutB_Construct_2()`.
    pub fn construct_2(_1: i32, _2: i32) -> crate::ffi::MR_CSharp_ExposedLayoutB
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ExposedLayoutB_Construct_2(_1, _2)};
        __ret
    }

    /// This gets a lifetime annotation from `--infer-lifetime-constructors`, but it should be a no-op in an exposed struct.
    /// Generated from constructor `MR::CSharp::ExposedLayoutB::ExposedLayoutB`.
    ///
    /// Calls `MR_CSharp_ExposedLayoutB_Construct_1()`.
    pub fn construct_1(_1: &crate::mr::c_sharp::A) -> crate::ffi::MR_CSharp_ExposedLayoutB
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ExposedLayoutB_Construct_1(_1 as *const crate::mr::c_sharp::A as *const crate::ffi::MR_CSharp_A)};
        __ret
    }

}

/// Just a simple exposed struct to test other things.
/// Generated from class `MR::CSharp::ExposedLayoutC`.
///
/// Generated from struct `MR::CSharp::ExposedLayoutC`. The fields are accessed directly.
pub use crate::ffi::MR_CSharp_ExposedLayoutC as ExposedLayoutC;

/// This one is backed by a shared pointer.
/// Generated from class `MR::CSharp::ExposedLayoutSh`.
///
/// Generated from struct `MR::CSharp::ExposedLayoutSh`. The fields are accessed directly.
pub use crate::ffi::MR_CSharp_ExposedLayoutSh as ExposedLayoutSh;

impl ExposedLayoutSh
{
    /// Generated from method `MR::CSharp::ExposedLayoutSh::foo`.
    ///
    /// Calls `MR_CSharp_ExposedLayoutSh_foo()`.
    pub fn foo(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ExposedLayoutSh_foo(self as *mut Self as *mut crate::ffi::MR_CSharp_ExposedLayoutSh)};
        __ret
    }

    /// Generated from method `MR::CSharp::ExposedLayoutSh::bar`.
    ///
    /// Calls `MR_CSharp_ExposedLayoutSh_bar()`.
    pub fn bar(&self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ExposedLayoutSh_bar(self as *const Self as *const crate::ffi::MR_CSharp_ExposedLayoutSh)};
        __ret
    }

    /// Generated from method `MR::CSharp::ExposedLayoutSh::blah`.
    ///
    /// Calls `MR_CSharp_ExposedLayoutSh_blah()`.
    pub fn blah()
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_ExposedLayoutSh_blah()};
        __ret
    }

    /// Try some jank operators.
    /// Generated from method `MR::CSharp::ExposedLayoutSh::operator++`.
    ///
    /// Calls `MR_C_incr_MR_CSharp_ExposedLayoutSh()`.
    pub fn op_incr(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_incr_MR_CSharp_ExposedLayoutSh(self as *mut Self as *mut crate::ffi::MR_CSharp_ExposedLayoutSh)};
        __ret
    }

    /// Generated from method `MR::CSharp::ExposedLayoutSh::operator+`.
    ///
    /// Calls `MR_C_add_MR_CSharp_ExposedLayoutSh_int32_t()`.
    pub fn op_add_int32_t(&mut self, _1: i32) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_add_MR_CSharp_ExposedLayoutSh_int32_t(self as *mut Self as *mut crate::ffi::MR_CSharp_ExposedLayoutSh, _1)};
        __ret
    }

    /// Generated from method `MR::CSharp::ExposedLayoutSh::operator*`.
    ///
    /// Calls `MR_C_mul_MR_CSharp_ExposedLayoutSh_int32_t()`.
    pub fn op_mul_int32_t(&self, _1: i32) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_mul_MR_CSharp_ExposedLayoutSh_int32_t(self as *const Self as *const crate::ffi::MR_CSharp_ExposedLayoutSh, _1)};
        __ret
    }

    /// Generated from method `MR::CSharp::ExposedLayoutSh::operator<`.
    ///
    /// Calls `MR_C_less_MR_CSharp_ExposedLayoutSh()`.
    pub fn op_less(&self, _1: &crate::ffi::MR_CSharp_ExposedLayoutSh) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_less_MR_CSharp_ExposedLayoutSh(self as *const Self as *const crate::ffi::MR_CSharp_ExposedLayoutSh, _1 as *const crate::ffi::MR_CSharp_ExposedLayoutSh as *const crate::ffi::MR_CSharp_ExposedLayoutSh)};
        __ret
    }

    /// Generated from method `MR::CSharp::ExposedLayoutSh::operator==`.
    ///
    /// Calls `MR_C_equal_MR_CSharp_ExposedLayoutSh_float()`.
    pub fn op_equal_float(&mut self, _1: f32) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_equal_MR_CSharp_ExposedLayoutSh_float(self as *mut Self as *mut crate::ffi::MR_CSharp_ExposedLayoutSh, _1)};
        __ret
    }

    /// Generated from method `MR::CSharp::ExposedLayoutSh::operator<`.
    ///
    /// Calls `MR_C_less_MR_CSharp_ExposedLayoutSh_char()`.
    pub fn op_less_char(&mut self, _1: core::ffi::c_char) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_less_MR_CSharp_ExposedLayoutSh_char(self as *mut Self as *mut crate::ffi::MR_CSharp_ExposedLayoutSh, _1)};
        __ret
    }

    /// While we're at it, test comparison against another exposed struct, since this is apparently non-trivial.
    /// Generated from method `MR::CSharp::ExposedLayoutSh::operator==`.
    ///
    /// Calls `MR_C_equal_MR_CSharp_ExposedLayoutSh_MR_CSharp_ExposedLayout()`.
    pub fn op_equal_mr_c_sharp_exposed_layout(&self, _1: &crate::ffi::MR_CSharp_ExposedLayout) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_equal_MR_CSharp_ExposedLayoutSh_MR_CSharp_ExposedLayout(self as *const Self as *const crate::ffi::MR_CSharp_ExposedLayoutSh, _1 as *const crate::ffi::MR_CSharp_ExposedLayout as *const crate::ffi::MR_CSharp_ExposedLayout)};
        __ret
    }

    /// And against itself, too.
    /// Generated from method `MR::CSharp::ExposedLayoutSh::operator==`.
    ///
    /// Calls `MR_C_equal_MR_CSharp_ExposedLayoutSh()`.
    pub fn op_equal(&self, _1: &crate::ffi::MR_CSharp_ExposedLayoutSh) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_equal_MR_CSharp_ExposedLayoutSh(self as *const Self as *const crate::ffi::MR_CSharp_ExposedLayoutSh, _1 as *const crate::ffi::MR_CSharp_ExposedLayoutSh as *const crate::ffi::MR_CSharp_ExposedLayoutSh)};
        __ret
    }

}

/// Generated from class `MR::CSharp::F`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::CSharp::A`
///     `MR::CSharp::D`
///     `MR::CSharp::E`
///
/// Generated from class `MR::CSharp::F`. Heap-allocated instances are held in `Owned<F>`.
#[repr(transparent)]
pub struct F(crate::ffi::MR_CSharp_F);

unsafe impl crate::CppClass for F
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_F_Destroy(ptr as *const crate::ffi::MR_CSharp_F)}
}

impl F
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_F_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::F>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_F_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::F)}
    }

    /// Generated from constructor `MR::CSharp::F::F`.
    ///
    /// Calls `MR_CSharp_F_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::F) -> crate::Owned<crate::mr::c_sharp::F>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_F_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::F as *mut crate::ffi::MR_CSharp_F)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::F)}
    }

    /// Generated from method `MR::CSharp::F::operator=`.
    ///
    /// Calls `MR_CSharp_F_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::F) -> &mut crate::mr::c_sharp::F
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_F_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_F, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::F as *mut crate::ffi::MR_CSharp_F)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::F)}
    }

    /// Upcasts to the base class `MR::CSharp::A`.
    ///
    /// Calls `MR_CSharp_F_UpcastTo_MR_CSharp_A()`.
    pub fn upcast_to_a(&self) -> &crate::mr::c_sharp::A
    {
        unsafe {&*(crate::ffi::MR_CSharp_F_UpcastTo_MR_CSharp_A(self as *const Self as *const crate::ffi::MR_CSharp_F) as *const crate::mr::c_sharp::A)}
    }

    /// Upcasts to the base class `MR::CSharp::A`.
    ///
    /// Calls `MR_CSharp_F_MutableUpcastTo_MR_CSharp_A()`.
    pub fn upcast_to_a_mut(&mut self) -> &mut crate::mr::c_sharp::A
    {
        unsafe {&mut *(crate::ffi::MR_CSharp_F_MutableUpcastTo_MR_CSharp_A(self as *mut Self as *mut crate::ffi::MR_CSharp_F) as *mut crate::mr::c_sharp::A)}
    }

    /// Static downcast from the base class `MR::CSharp::A`.
    ///
    /// Calls `MR_CSharp_F_StaticDowncastFrom_MR_CSharp_A()`. Undefined behavior if the object isn't actually a `F`.
    pub unsafe fn static_downcast_from_a(object: &crate::mr::c_sharp::A) -> &Self
    {
        &*(crate::ffi::MR_CSharp_F_StaticDowncastFrom_MR_CSharp_A(object as *const crate::mr::c_sharp::A as *const crate::ffi::MR_CSharp_A) as *const Self)
    }

    /// Static downcast from the base class `MR::CSharp::A`.
    ///
    /// Calls `MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_A()`. Undefined behavior if the object isn't actually a `F`.
    pub unsafe fn static_downcast_from_a_mut(object: &mut crate::mr::c_sharp::A) -> &mut Self
    {
        &mut *(crate::ffi::MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_A(object as *mut crate::mr::c_sharp::A as *mut crate::ffi::MR_CSharp_A) as *mut Self)
    }

    /// Dynamic downcast from the base class `MR::CSharp::A`. Returns `None` if the object isn't actually a `F`.
    ///
    /// Calls `MR_CSharp_F_DynamicDowncastFrom_MR_CSharp_A()`.
    pub fn dynamic_downcast_from_a(object: &crate::mr::c_sharp::A) -> Option<&Self>
    {
        unsafe {(crate::ffi::MR_CSharp_F_DynamicDowncastFrom_MR_CSharp_A(object as *const crate::mr::c_sharp::A as *const crate::ffi::MR_CSharp_A) as *const Self).as_ref()}
    }

    /// Dynamic downcast from the base class `MR::CSharp::A`. Returns `None` if the object isn't actually a `F`.
    ///
    /// Calls `MR_CSharp_F_MutableDynamicDowncastFrom_MR_CSharp_A()`.
    pub fn dynamic_downcast_from_a_mut(object: &mut crate::mr::c_sharp::A) -> Option<&mut Self>
    {
        unsafe {(crate::ffi::MR_CSharp_F_MutableDynamicDowncastFrom_MR_CSharp_A(object as *mut crate::mr::c_sharp::A as *mut crate::ffi::MR_CSharp_A) as *mut Self).as_mut()}
    }

    /// Upcasts to the base class `MR::CSharp::D`.
    ///
    /// Calls `MR_CSharp_F_UpcastTo_MR_CSharp_D()`.
    pub fn upcast_to_d(&self) -> &crate::mr::c_sharp::D
    {
        unsafe {&*(crate::ffi::MR_CSharp_F_UpcastTo_MR_CSharp_D(self as *const Self as *const crate::ffi::MR_CSharp_F) as *const crate::mr::c_sharp::D)}
    }

    /// Upcasts to the base class `MR::CSharp::D`.
    ///
    /// Calls `MR_CSharp_F_MutableUpcastTo_MR_CSharp_D()`.
    pub fn upcast_to_d_mut(&mut self) -> &mut crate::mr::c_sharp::D
    {
        unsafe {&mut *(crate::ffi::MR_CSharp_F_MutableUpcastTo_MR_CSharp_D(self as *mut Self as *mut crate::ffi::MR_CSharp_F) as *mut crate::mr::c_sharp::D)}
    }

    /// Static downcast from the base class `MR::CSharp::D`.
    ///
    /// Calls `MR_CSharp_F_StaticDowncastFrom_MR_CSharp_D()`. Undefined behavior if the object isn't actually a `F`.
    pub unsafe fn static_downcast_from_d(object: &crate::mr::c_sharp::D) -> &Self
    {
        &*(crate::ffi::MR_CSharp_F_StaticDowncastFrom_MR_CSharp_D(object as *const crate::mr::c_sharp::D as *const crate::ffi::MR_CSharp_D) as *const Self)
    }

    /// Static downcast from the base class `MR::CSharp::D`.
    ///
    /// Calls `MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_D()`. Undefined behavior if the object isn't actually a `F`.
    pub unsafe fn static_downcast_from_d_mut(object: &mut crate::mr::c_sharp::D) -> &mut Self
    {
        &mut *(crate::ffi::MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_D(object as *mut crate::mr::c_sharp::D as *mut crate::ffi::MR_CSharp_D) as *mut Self)
    }

    /// Upcasts to the base class `MR::CSharp::E`.
    ///
    /// Calls `MR_CSharp_F_UpcastTo_MR_CSharp_E()`.
    pub fn upcast_to_e(&self) -> &crate::mr::c_sharp::E
    {
        unsafe {&*(crate::ffi::MR_CSharp_F_UpcastTo_MR_CSharp_E(self as *const Self as *const crate::ffi::MR_CSharp_F) as *const crate::mr::c_sharp::E)}
    }

    /// Upcasts to the base class `MR::CSharp::E`.
    ///
    /// Calls `MR_CSharp_F_MutableUpcastTo_MR_CSharp_E()`.
    pub fn upcast_to_e_mut(&mut self) -> &mut crate::mr::c_sharp::E
    {
        unsafe {&mut *(crate::ffi::MR_CSharp_F_MutableUpcastTo_MR_CSharp_E(self as *mut Self as *mut crate::ffi::MR_CSharp_F) as *mut crate::mr::c_sharp::E)}
    }

    /// Static downcast from the base class `MR::CSharp::E`.
    ///
    /// Calls `MR_CSharp_F_StaticDowncastFrom_MR_CSharp_E()`. Undefined behavior if the object isn't actually a `F`.
    pub unsafe fn static_downcast_from_e(object: &crate::mr::c_sharp::E) -> &Self
    {
        &*(crate::ffi::MR_CSharp_F_StaticDowncastFrom_MR_CSharp_E(object as *const crate::mr::c_sharp::E as *const crate::ffi::MR_CSharp_E) as *const Self)
    }

    /// Static downcast from the base class `MR::CSharp::E`.
    ///
    /// Calls `MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_E()`. Undefined behavior if the object isn't actually a `F`.
    pub unsafe fn static_downcast_from_e_mut(object: &mut crate::mr::c_sharp::E) -> &mut Self
    {
        &mut *(crate::ffi::MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_E(object as *mut crate::mr::c_sharp::E as *mut crate::ffi::MR_CSharp_E) as *mut Self)
    }

}

impl AsRef<crate::mr::c_sharp::A> for F
{
    fn as_ref(&self) -> &crate::mr::c_sharp::A {self.upcast_to_a()}
}

impl AsMut<crate::mr::c_sharp::A> for F
{
    fn as_mut(&mut self) -> &mut crate::mr::c_sharp::A {self.upcast_to_a_mut()}
}

impl AsRef<crate::mr::c_sharp::D> for F
{
    fn as_ref(&self) -> &crate::mr::c_sharp::D {self.upcast_to_d()}
}

impl AsMut<crate::mr::c_sharp::D> for F
{
    fn as_mut(&mut self) -> &mut crate::mr::c_sharp::D {self.upcast_to_d_mut()}
}

impl AsRef<crate::mr::c_sharp::E> for F
{
    fn as_ref(&self) -> &crate::mr::c_sharp::E {self.upcast_to_e()}
}

impl AsMut<crate::mr::c_sharp::E> for F
{
    fn as_mut(&mut self) -> &mut crate::mr::c_sharp::E {self.upcast_to_e_mut()}
}

unsafe impl crate::CppCopy for F
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Even if the secondary bases are virtual, this doesn't affect anything.
/// Generated from class `MR::CSharp::G`.
/// Base classes:
///   Virtual:
///     `MR::CSharp::E`
///   Direct: (non-virtual)
///     `MR::CSharp::A`
///     `MR::CSharp::D`
///
/// Generated from class `MR::CSharp::G`. Heap-allocated instances are held in `Owned<G>`.
#[repr(transparent)]
pub struct G(crate::ffi::MR_CSharp_G);

unsafe impl crate::CppClass for G
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_G_Destroy(ptr as *const crate::ffi::MR_CSharp_G)}
}

impl G
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_G_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::G>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_G_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::G)}
    }

    /// Generated from constructor `MR::CSharp::G::G`.
    ///
    /// Calls `MR_CSharp_G_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::G) -> crate::Owned<crate::mr::c_sharp::G>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_G_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::G as *mut crate::ffi::MR_CSharp_G)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::G)}
    }

    /// Generated from method `MR::CSharp::G::operator=`.
    ///
    /// Calls `MR_CSharp_G_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::G) -> &mut crate::mr::c_sharp::G
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_G_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_G, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::G as *mut crate::ffi::MR_CSharp_G)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::G)}
    }

    /// Upcasts to the base class `MR::CSharp::A`.
    ///
    /// Calls `MR_CSharp_G_UpcastTo_MR_CSharp_A()`.
    pub fn upcast_to_a(&self) -> &crate::mr::c_sharp::A
    {
        unsafe {&*(crate::ffi::MR_CSharp_G_UpcastTo_MR_CSharp_A(self as *const Self as *const crate::ffi::MR_CSharp_G) as *const crate::mr::c_sharp::A)}
    }

    /// Upcasts to the base class `MR::CSharp::A`.
    ///
    /// Calls `MR_CSharp_G_MutableUpcastTo_MR_CSharp_A()`.
    pub fn upcast_to_a_mut(&mut self) -> &mut crate::mr::c_sharp::A
    {
        unsafe {&mut *(crate::ffi::MR_CSharp_G_MutableUpcastTo_MR_CSharp_A(self as *mut Self as *mut crate::ffi::MR_CSharp_G) as *mut crate::mr::c_sharp::A)}
    }

    /// Static downcast from the base class `MR::CSharp::A`.
    ///
    /// Calls `MR_CSharp_G_StaticDowncastFrom_MR_CSharp_A()`. Undefined behavior if the object isn't actually a `G`.
    pub unsafe fn static_downcast_from_a(object: &crate::mr::c_sharp::A) -> &Self
    {
        &*(crate::ffi::MR_CSharp_G_StaticDowncastFrom_MR_CSharp_A(object as *const crate::mr::c_sharp::A as *const crate::ffi::MR_CSharp_A) as *const Self)
    }

    /// Static downcast from the base class `MR::CSharp::A`.
    ///
    /// Calls `MR_CSharp_G_MutableStaticDowncastFrom_MR_CSharp_A()`. Undefined behavior if the object isn't actually a `G`.
    pub unsafe fn static_downcast_from_a_mut(object: &mut crate::mr::c_sharp::A) -> &mut Self
    {
        &mut *(crate::ffi::MR_CSharp_G_MutableStaticDowncastFrom_MR_CSharp_A(object as *mut crate::mr::c_sharp::A as *mut crate::ffi::MR_CSharp_A) as *mut Self)
    }

    /// Dynamic downcast from the base class `MR::CSharp::A`. Returns `None` if the object isn't actually a `G`.
    ///
    /// Calls `MR_CSharp_G_DynamicDowncastFrom_MR_CSharp_A()`.
    pub fn dynamic_downcast_from_a(object: &crate::mr::c_sharp::A) -> Option<&Self>
    {
        unsafe {(crate::ffi::MR_CSharp_G_DynamicDowncastFrom_MR_CSharp_A(object as *const crate::mr::c_sharp::A as *const crate::ffi::MR_CSharp_A) as *const Self).as_ref()}
    }

    /// Dynamic downcast from the base class `MR::CSharp::A`. Returns `None` if the object isn't actually a `G`.
    ///
    /// Calls `MR_CSharp_G_MutableDynamicDowncastFrom_MR_CSharp_A()`.
    pub fn dynamic_downcast_from_a_mut(object: &mut crate::mr::c_sharp::A) -> Option<&mut Self>
    {
        unsafe {(crate::ffi::MR_CSharp_G_MutableDynamicDowncastFrom_MR_CSharp_A(object as *mut crate::mr::c_sharp::A as *mut crate::ffi::MR_CSharp_A) as *mut Self).as_mut()}
    }

    /// Upcasts to the base class `MR::CSharp::D`.
    ///
    /// Calls `MR_CSharp_G_UpcastTo_MR_CSharp_D()`.
    pub fn upcast_to_d(&self) -> &crate::mr::c_sharp::D
    {
        unsafe {&*(crate::ffi::MR_CSharp_G_UpcastTo_MR_CSharp_D(self as *const Self as *const crate::ffi::MR_CSharp_G) as *const crate::mr::c_sharp::D)}
    }

    /// Upcasts to the base class `MR::CSharp::D`.
    ///
    /// Calls `MR_CSharp_G_MutableUpcastTo_MR_CSharp_D()`.
    pub fn upcast_to_d_mut(&mut self) -> &mut crate::mr::c_sharp::D
    {
        unsafe {&mut *(crate::ffi::MR_CSharp_G_MutableUpcastTo_MR_CSharp_D(self as *mut Self as *mut crate::ffi::MR_CSharp_G) as *mut crate::mr::c_sharp::D)}
    }

    /// Static downcast from the base class `MR::CSharp::D`.
    ///
    /// Calls `MR_CSharp_G_StaticDowncastFrom_MR_CSharp_D()`. Undefined behavior if the object isn't actually a `G`.
    pub unsafe fn static_downcast_from_d(object: &crate::mr::c_sharp::D) -> &Self
    {
        &*(crate::ffi::MR_CSharp_G_StaticDowncastFrom_MR_CSharp_D(object as *const crate::mr::c_sharp::D as *const crate::ffi::MR_CSharp_D) as *const Self)
    }

    /// Static downcast from the base class `MR::CSharp::D`.
    ///
    /// Calls `MR_CSharp_G_MutableStaticDowncastFrom_MR_CSharp_D()`. Undefined behavior if the object isn't actually a `G`.
    pub unsafe fn static_downcast_from_d_mut(object: &mut crate::mr::c_sharp::D) -> &mut Self
    {
        &mut *(crate::ffi::MR_CSharp_G_MutableStaticDowncastFrom_MR_CSharp_D(object as *mut crate::mr::c_sharp::D as *mut crate::ffi::MR_CSharp_D) as *mut Self)
    }

    /// Upcasts to the base class `MR::CSharp::E`.
    ///
    /// Calls `MR_CSharp_G_UpcastTo_MR_CSharp_E()`.
    pub fn upcast_to_e(&self) -> &crate::mr::c_sharp::E
    {
        unsafe {&*(crate::ffi::MR_CSharp_G_UpcastTo_MR_CSharp_E(self as *const Self as *const crate::ffi::MR_CSharp_G) as *const crate::mr::c_sharp::E)}
    }

    /// Upcasts to the base class `MR::CSharp::E`.
    ///
    /// Calls `MR_CSharp_G_MutableUpcastTo_MR_CSharp_E()`.
    pub fn upcast_to_e_mut(&mut self) -> &mut crate::mr::c_sharp::E
    {
        unsafe {&mut *(crate::ffi::MR_CSharp_G_MutableUpcastTo_MR_CSharp_E(self as *mut Self as *mut crate::ffi::MR_CSharp_G) as *mut crate::mr::c_sharp::E)}
    }

}

impl AsRef<crate::mr::c_sharp::A> for G
{
    fn as_ref(&self) -> &crate::mr::c_sharp::A {self.upcast_to_a()}
}

impl AsMut<crate::mr::c_sharp::A> for G
{
    fn as_mut(&mut self) -> &mut crate::mr::c_sharp::A {self.upcast_to_a_mut()}
}

impl AsRef<crate::mr::c_sharp::D> for G
{
    fn as_ref(&self) -> &crate::mr::c_sharp::D {self.upcast_to_d()}
}

impl AsMut<crate::mr::c_sharp::D> for G
{
    fn as_mut(&mut self) -> &mut crate::mr::c_sharp::D {self.upcast_to_d_mut()}
}

impl AsRef<crate::mr::c_sharp::E> for G
{
    fn as_ref(&self) -> &crate::mr::c_sharp::E {self.upcast_to_e()}
}

impl AsMut<crate::mr::c_sharp::E> for G
{
    fn as_mut(&mut self) -> &mut crate::mr::c_sharp::E {self.upcast_to_e_mut()}
}

unsafe impl crate::CppCopy for G
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// This is the happy path.
/// This emits static operators in the const half, and non-static operators (or functions pre C# 14) in the non-const half.
/// Generated from class `MR::CSharp::IncrDecrA`.
///
/// Generated from class `MR::CSharp::IncrDecrA`. Heap-allocated instances are held in `Owned<IncrDecrA>`.
#[repr(transparent)]
pub struct IncrDecrA(crate::ffi::MR_CSharp_IncrDecrA);

unsafe impl crate::CppClass for IncrDecrA
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IncrDecrA_Destroy(ptr as *const crate::ffi::MR_CSharp_IncrDecrA)}
}

impl IncrDecrA
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IncrDecrA_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IncrDecrA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrA_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrA)}
    }

    /// Generated from constructor `MR::CSharp::IncrDecrA::IncrDecrA`.
    ///
    /// Calls `MR_CSharp_IncrDecrA_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IncrDecrA) -> crate::Owned<crate::mr::c_sharp::IncrDecrA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrA_ConstructFromAnother(_other as *const crate::mr::c_sharp::IncrDecrA as *const crate::ffi::MR_CSharp_IncrDecrA)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrA)}
    }

    /// Generated from method `MR::CSharp::IncrDecrA::operator=`.
    ///
    /// Calls `MR_CSharp_IncrDecrA_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IncrDecrA) -> &mut crate::mr::c_sharp::IncrDecrA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrA_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrA, _other as *const crate::mr::c_sharp::IncrDecrA as *const crate::ffi::MR_CSharp_IncrDecrA)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IncrDecrA)}
    }

    /// Generated from method `MR::CSharp::IncrDecrA::operator++`.
    ///
    /// Calls `MR_C_incr_MR_CSharp_IncrDecrA()`.
    pub fn op_incr(&mut self) -> &mut crate::mr::c_sharp::IncrDecrA
    {
        let __ret = unsafe {crate::ffi::MR_C_incr_MR_CSharp_IncrDecrA(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrA)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IncrDecrA)}
    }

    /// Generated from method `MR::CSharp::IncrDecrA::operator++`.
    ///
    /// Calls `MR_C_post_incr_MR_CSharp_IncrDecrA()`.
    pub fn op_post_incr(&mut self) -> crate::Owned<crate::mr::c_sharp::IncrDecrA>
    {
        let __ret = unsafe {crate::ffi::MR_C_post_incr_MR_CSharp_IncrDecrA(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrA)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrA)}
    }

    /// Generated from method `MR::CSharp::IncrDecrA::operator--`.
    ///
    /// Calls `MR_C_decr_MR_CSharp_IncrDecrA()`.
    pub fn op_decr(&mut self) -> &mut crate::mr::c_sharp::IncrDecrA
    {
        let __ret = unsafe {crate::ffi::MR_C_decr_MR_CSharp_IncrDecrA(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrA)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IncrDecrA)}
    }

    /// Generated from method `MR::CSharp::IncrDecrA::operator--`.
    ///
    /// Calls `MR_C_post_decr_MR_CSharp_IncrDecrA()`.
    pub fn op_post_decr(&mut self) -> crate::Owned<crate::mr::c_sharp::IncrDecrA>
    {
        let __ret = unsafe {crate::ffi::MR_C_post_decr_MR_CSharp_IncrDecrA(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrA)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrA)}
    }

}

unsafe impl crate::CppCopy for IncrDecrA
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// This is a somewhat happy path. Same as above, but everything gets emitted in the const half.
/// Generated from class `MR::CSharp::IncrDecrB`.
///
/// Generated from class `MR::CSharp::IncrDecrB`. Heap-allocated instances are held in `Owned<IncrDecrB>`.
#[repr(transparent)]
pub struct IncrDecrB(crate::ffi::MR_CSharp_IncrDecrB);

unsafe impl crate::CppClass for IncrDecrB
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IncrDecrB_Destroy(ptr as *const crate::ffi::MR_CSharp_IncrDecrB)}
}

impl IncrDecrB
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IncrDecrB_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IncrDecrB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrB_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrB)}
    }

    /// Generated from constructor `MR::CSharp::IncrDecrB::IncrDecrB`.
    ///
    /// Calls `MR_CSharp_IncrDecrB_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IncrDecrB) -> crate::Owned<crate::mr::c_sharp::IncrDecrB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrB_ConstructFromAnother(_other as *const crate::mr::c_sharp::IncrDecrB as *const crate::ffi::MR_CSharp_IncrDecrB)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrB)}
    }

    /// Generated from method `MR::CSharp::IncrDecrB::operator=`.
    ///
    /// Calls `MR_CSharp_IncrDecrB_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IncrDecrB) -> &mut crate::mr::c_sharp::IncrDecrB
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrB_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrB, _other as *const crate::mr::c_sharp::IncrDecrB as *const crate::ffi::MR_CSharp_IncrDecrB)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IncrDecrB)}
    }

    /// Generated from method `MR::CSharp::IncrDecrB::operator++`.
    ///
    /// Calls `MR_C_incr_MR_CSharp_IncrDecrB()`.
    pub fn op_incr(&self) -> &crate::mr::c_sharp::IncrDecrB
    {
        let __ret = unsafe {crate::ffi::MR_C_incr_MR_CSharp_IncrDecrB(self as *const Self as *const crate::ffi::MR_CSharp_IncrDecrB)};
        unsafe {&*(__ret as *const crate::mr::c_sharp::IncrDecrB)}
    }

    /// Generated from method `MR::CSharp::IncrDecrB::operator++`.
    ///
    /// Calls `MR_C_post_incr_MR_CSharp_IncrDecrB()`.
    pub fn op_post_incr(&self) -> crate::Owned<crate::mr::c_sharp::IncrDecrB>
    {
        let __ret = unsafe {crate::ffi::MR_C_post_incr_MR_CSharp_IncrDecrB(self as *const Self as *const crate::ffi::MR_CSharp_IncrDecrB)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrB)}
    }

    /// Generated from method `MR::CSharp::IncrDecrB::operator--`.
    ///
    /// Calls `MR_C_decr_MR_CSharp_IncrDecrB()`.
    pub fn op_decr(&self) -> &crate::mr::c_sharp::IncrDecrB
    {
        let __ret = unsafe {crate::ffi::MR_C_decr_MR_CSharp_IncrDecrB(self as *const Self as *const crate::ffi::MR_CSharp_IncrDecrB)};
        unsafe {&*(__ret as *const crate::mr::c_sharp::IncrDecrB)}
    }

    /// Generated from method `MR::CSharp::IncrDecrB::operator--`.
    ///
    /// Calls `MR_C_post_decr_MR_CSharp_IncrDecrB()`.
    pub fn op_post_decr(&self) -> crate::Owned<crate::mr::c_sharp::IncrDecrB>
    {
        let __ret = unsafe {crate::ffi::MR_C_post_decr_MR_CSharp_IncrDecrB(self as *const Self as *const crate::ffi::MR_CSharp_IncrDecrB)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrB)}
    }

}

unsafe impl crate::CppCopy for IncrDecrB
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// This is a somewhat happy path. Since here the copy ctor takes a non-const reference, the static operators get added to the non-const half.
/// The non-static ones are not marked const, so they're also in the non-const half.
/// Generated from class `MR::CSharp::IncrDecrC`.
///
/// Generated from class `MR::CSharp::IncrDecrC`. Heap-allocated instances are held in `Owned<IncrDecrC>`.
#[repr(transparent)]
pub struct IncrDecrC(crate::ffi::MR_CSharp_IncrDecrC);

unsafe impl crate::CppClass for IncrDecrC
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IncrDecrC_Destroy(ptr as *const crate::ffi::MR_CSharp_IncrDecrC)}
}

impl IncrDecrC
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IncrDecrC_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IncrDecrC>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrC_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrC)}
    }

    /// Generated from constructor `MR::CSharp::IncrDecrC::IncrDecrC`.
    ///
    /// Calls `MR_CSharp_IncrDecrC_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IncrDecrC) -> crate::Owned<crate::mr::c_sharp::IncrDecrC>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrC_ConstructFromAnother(_other as *const crate::mr::c_sharp::IncrDecrC as *const crate::ffi::MR_CSharp_IncrDecrC)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrC)}
    }

    /// Generated from method `MR::CSharp::IncrDecrC::operator=`.
    ///
    /// Calls `MR_CSharp_IncrDecrC_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IncrDecrC) -> &mut crate::mr::c_sharp::IncrDecrC
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrC_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrC, _other as *const crate::mr::c_sharp::IncrDecrC as *const crate::ffi::MR_CSharp_IncrDecrC)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IncrDecrC)}
    }

    /// Generated from method `MR::CSharp::IncrDecrC::operator++`.
    ///
    /// Calls `MR_C_incr_MR_CSharp_IncrDecrC()`.
    pub fn op_incr(&mut self) -> &mut crate::mr::c_sharp::IncrDecrC
    {
        let __ret = unsafe {crate::ffi::MR_C_incr_MR_CSharp_IncrDecrC(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrC)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IncrDecrC)}
    }

    /// Generated from method `MR::CSharp::IncrDecrC::operator++`.
    ///
    /// Calls `MR_C_post_incr_MR_CSharp_IncrDecrC()`.
    pub fn op_post_incr(&mut self) -> crate::Owned<crate::mr::c_sharp::IncrDecrC>
    {
        let __ret = unsafe {crate::ffi::MR_C_post_incr_MR_CSharp_IncrDecrC(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrC)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrC)}
    }

    /// Generated from method `MR::CSharp::IncrDecrC::operator--`.
    ///
    /// Calls `MR_C_decr_MR_CSharp_IncrDecrC()`.
    pub fn op_decr(&mut self) -> &mut crate::mr::c_sharp::IncrDecrC
    {
        let __ret = unsafe {crate::ffi::MR_C_decr_MR_CSharp_IncrDecrC(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrC)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IncrDecrC)}
    }

    /// Generated from method `MR::CSharp::IncrDecrC::operator--`.
    ///
    /// Calls `MR_C_post_decr_MR_CSharp_IncrDecrC()`.
    pub fn op_post_decr(&mut self) -> crate::Owned<crate::mr::c_sharp::IncrDecrC>
    {
        let __ret = unsafe {crate::ffi::MR_C_post_decr_MR_CSharp_IncrDecrC(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrC)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrC)}
    }

}

unsafe impl crate::CppCopy for IncrDecrC
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// This is a somewhat happy path. Since here the copy ctor takes a non-const reference, the static operators get added to the non-const half.
/// The non-static ones are in the const half due to being marked const.
/// Generated from class `MR::CSharp::IncrDecrD`.
///
/// Generated from class `MR::CSharp::IncrDecrD`. Heap-allocated instances are held in `Owned<IncrDecrD>`.
#[repr(transparent)]
pub struct IncrDecrD(crate::ffi::MR_CSharp_IncrDecrD);

unsafe impl crate::CppClass for IncrDecrD
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IncrDecrD_Destroy(ptr as *const crate::ffi::MR_CSharp_IncrDecrD)}
}

impl IncrDecrD
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IncrDecrD_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IncrDecrD>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrD_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrD)}
    }

    /// Generated from constructor `MR::CSharp::IncrDecrD::IncrDecrD`.
    ///
    /// Calls `MR_CSharp_IncrDecrD_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IncrDecrD) -> crate::Owned<crate::mr::c_sharp::IncrDecrD>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrD_ConstructFromAnother(_other as *const crate::mr::c_sharp::IncrDecrD as *const crate::ffi::MR_CSharp_IncrDecrD)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrD)}
    }

    /// Generated from method `MR::CSharp::IncrDecrD::operator=`.
    ///
    /// Calls `MR_CSharp_IncrDecrD_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IncrDecrD) -> &mut crate::mr::c_sharp::IncrDecrD
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrD_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrD, _other as *const crate::mr::c_sharp::IncrDecrD as *const crate::ffi::MR_CSharp_IncrDecrD)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IncrDecrD)}
    }

    /// Generated from method `MR::CSharp::IncrDecrD::operator++`.
    ///
    /// Calls `MR_C_incr_MR_CSharp_IncrDecrD()`.
    pub fn op_incr(&self) -> &crate::mr::c_sharp::IncrDecrD
    {
        let __ret = unsafe {crate::ffi::MR_C_incr_MR_CSharp_IncrDecrD(self as *const Self as *const crate::ffi::MR_CSharp_IncrDecrD)};
        unsafe {&*(__ret as *const crate::mr::c_sharp::IncrDecrD)}
    }

    /// Generated from method `MR::CSharp::IncrDecrD::operator++`.
    ///
    /// Calls `MR_C_post_incr_MR_CSharp_IncrDecrD()`.
    pub fn op_post_incr(&self) -> crate::Owned<crate::mr::c_sharp::IncrDecrD>
    {
        let __ret = unsafe {crate::ffi::MR_C_post_incr_MR_CSharp_IncrDecrD(self as *const Self as *const crate::ffi::MR_CSharp_IncrDecrD)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrD)}
    }

    /// Generated from method `MR::CSharp::IncrDecrD::operator--`.
    ///
    /// Calls `MR_C_decr_MR_CSharp_IncrDecrD()`.
    pub fn op_decr(&self) -> &crate::mr::c_sharp::IncrDecrD
    {
        let __ret = unsafe {crate::ffi::MR_C_decr_MR_CSharp_IncrDecrD(self as *const Self as *const crate::ffi::MR_CSharp_IncrDecrD)};
        unsafe {&*(__ret as *const crate::mr::c_sharp::IncrDecrD)}
    }

    /// Generated from method `MR::CSharp::IncrDecrD::operator--`.
    ///
    /// Calls `MR_C_post_decr_MR_CSharp_IncrDecrD()`.
    pub fn op_post_decr(&self) -> crate::Owned<crate::mr::c_sharp::IncrDecrD>
    {
        let __ret = unsafe {crate::ffi::MR_C_post_decr_MR_CSharp_IncrDecrD(self as *const Self as *const crate::ffi::MR_CSharp_IncrDecrD)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrD)}
    }

}

unsafe impl crate::CppCopy for IncrDecrD
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Here we don't special-case those operators due to the class being non-copyable (and not trivially movable). They get spawned as functions as usual, in the non-const half.
/// Generated from class `MR::CSharp::IncrDecrE`.
///
/// Generated from class `MR::CSharp::IncrDecrE`. Heap-allocated instances are held in `Owned<IncrDecrE>`.
#[repr(transparent)]
pub struct IncrDecrE(crate::ffi::MR_CSharp_IncrDecrE);

unsafe impl crate::CppClass for IncrDecrE
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IncrDecrE_Destroy(ptr as *const crate::ffi::MR_CSharp_IncrDecrE)}
}

impl IncrDecrE
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IncrDecrE_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IncrDecrE>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrE_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrE)}
    }

    /// Generated from constructor `MR::CSharp::IncrDecrE::IncrDecrE`.
    ///
    /// Calls `MR_CSharp_IncrDecrE_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: crate::Owned<crate::mr::c_sharp::IncrDecrE>) -> crate::Owned<crate::mr::c_sharp::IncrDecrE>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrE_ConstructFromAnother(crate::ffi::MR_C_PassBy_MoveAndDestroy, _other.into_raw() as *mut crate::ffi::MR_CSharp_IncrDecrE)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrE)}
    }

    /// Generated from method `MR::CSharp::IncrDecrE::operator++`.
    ///
    /// Calls `MR_C_incr_MR_CSharp_IncrDecrE()`.
    pub fn op_incr(&mut self) -> &mut crate::mr::c_sharp::IncrDecrE
    {
        let __ret = unsafe {crate::ffi::MR_C_incr_MR_CSharp_IncrDecrE(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrE)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IncrDecrE)}
    }

    /// Generated from method `MR::CSharp::IncrDecrE::operator++`.
    ///
    /// Calls `MR_C_post_incr_MR_CSharp_IncrDecrE()`.
    pub fn op_post_incr(&mut self) -> crate::Owned<crate::mr::c_sharp::IncrDecrE>
    {
        let __ret = unsafe {crate::ffi::MR_C_post_incr_MR_CSharp_IncrDecrE(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrE)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrE)}
    }

    /// Generated from method `MR::CSharp::IncrDecrE::operator--`.
    ///
    /// Calls `MR_C_decr_MR_CSharp_IncrDecrE()`.
    pub fn op_decr(&mut self) -> &mut crate::mr::c_sharp::IncrDecrE
    {
        let __ret = unsafe {crate::ffi::MR_C_decr_MR_CSharp_IncrDecrE(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrE)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IncrDecrE)}
    }

    /// Generated from method `MR::CSharp::IncrDecrE::operator--`.
    ///
    /// Calls `MR_C_post_decr_MR_CSharp_IncrDecrE()`.
    pub fn op_post_decr(&mut self) -> crate::Owned<crate::mr::c_sharp::IncrDecrE>
    {
        let __ret = unsafe {crate::ffi::MR_C_post_decr_MR_CSharp_IncrDecrE(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrE)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrE)}
    }

}

/// Here we don't special-case those operators due to the class being non-copyable (and not trivially movable). They get spawned as functions as usual, in the const half.
/// Generated from class `MR::CSharp::IncrDecrF`.
///
/// Generated from class `MR::CSharp::IncrDecrF`. Heap-allocated instances are held in `Owned<IncrDecrF>`.
#[repr(transparent)]
pub struct IncrDecrF(crate::ffi::MR_CSharp_IncrDecrF);

unsafe impl crate::CppClass for IncrDecrF
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IncrDecrF_Destroy(ptr as *const crate::ffi::MR_CSharp_IncrDecrF)}
}

impl IncrDecrF
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IncrDecrF_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IncrDecrF>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrF_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrF)}
    }

    /// Generated from constructor `MR::CSharp::IncrDecrF::IncrDecrF`.
    ///
    /// Calls `MR_CSharp_IncrDecrF_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: crate::Owned<crate::mr::c_sharp::IncrDecrF>) -> crate::Owned<crate::mr::c_sharp::IncrDecrF>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrF_ConstructFromAnother(crate::ffi::MR_C_PassBy_MoveAndDestroy, _other.into_raw() as *mut crate::ffi::MR_CSharp_IncrDecrF)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrF)}
    }

    /// Generated from method `MR::CSharp::IncrDecrF::operator++`.
    ///
    /// Calls `MR_C_incr_MR_CSharp_IncrDecrF()`.
    pub fn op_incr(&self) -> &crate::mr::c_sharp::IncrDecrF
    {
        let __ret = unsafe {crate::ffi::MR_C_incr_MR_CSharp_IncrDecrF(self as *const Self as *const crate::ffi::MR_CSharp_IncrDecrF)};
        unsafe {&*(__ret as *const crate::mr::c_sharp::IncrDecrF)}
    }

    /// Generated from method `MR::CSharp::IncrDecrF::operator++`.
    ///
    /// Calls `MR_C_post_incr_MR_CSharp_IncrDecrF()`.
    pub fn op_post_incr(&self) -> crate::Owned<crate::mr::c_sharp::IncrDecrF>
    {
        let __ret = unsafe {crate::ffi::MR_C_post_incr_MR_CSharp_IncrDecrF(self as *const Self as *const crate::ffi::MR_CSharp_IncrDecrF)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrF)}
    }

    /// Generated from method `MR::CSharp::IncrDecrF::operator--`.
    ///
    /// Calls `MR_C_decr_MR_CSharp_IncrDecrF()`.
    pub fn op_decr(&self) -> &crate::mr::c_sharp::IncrDecrF
    {
        let __ret = unsafe {crate::ffi::MR_C_decr_MR_CSharp_IncrDecrF(self as *const Self as *const crate::ffi::MR_CSharp_IncrDecrF)};
        unsafe {&*(__ret as *const crate::mr::c_sharp::IncrDecrF)}
    }

    /// Generated from method `MR::CSharp::IncrDecrF::operator--`.
    ///
    /// Calls `MR_C_post_decr_MR_CSharp_IncrDecrF()`.
    pub fn op_post_decr(&self) -> crate::Owned<crate::mr::c_sharp::IncrDecrF>
    {
        let __ret = unsafe {crate::ffi::MR_C_post_decr_MR_CSharp_IncrDecrF(self as *const Self as *const crate::ffi::MR_CSharp_IncrDecrF)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrF)}
    }

}

/// This class is non-copyable, but is trivially movable, so we treat it as if it was copyable.
/// Generated from class `MR::CSharp::IncrDecrG`.
///
/// Generated from class `MR::CSharp::IncrDecrG`. Heap-allocated instances are held in `Owned<IncrDecrG>`.
#[repr(transparent)]
pub struct IncrDecrG(crate::ffi::MR_CSharp_IncrDecrG);

unsafe impl crate::CppClass for IncrDecrG
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IncrDecrG_Destroy(ptr as *const crate::ffi::MR_CSharp_IncrDecrG)}
}

impl IncrDecrG
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IncrDecrG_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IncrDecrG>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrG_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrG)}
    }

    /// Generated from constructor `MR::CSharp::IncrDecrG::IncrDecrG`.
    ///
    /// Calls `MR_CSharp_IncrDecrG_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IncrDecrG) -> crate::Owned<crate::mr::c_sharp::IncrDecrG>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrG_ConstructFromAnother(_other as *const crate::mr::c_sharp::IncrDecrG as *const crate::ffi::MR_CSharp_IncrDecrG)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrG)}
    }

    /// Generated from method `MR::CSharp::IncrDecrG::operator++`.
    ///
    /// Calls `MR_C_incr_MR_CSharp_IncrDecrG()`.
    pub fn op_incr(&mut self) -> &mut crate::mr::c_sharp::IncrDecrG
    {
        let __ret = unsafe {crate::ffi::MR_C_incr_MR_CSharp_IncrDecrG(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrG)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IncrDecrG)}
    }

    /// Generated from method `MR::CSharp::IncrDecrG::operator++`.
    ///
    /// Calls `MR_C_post_incr_MR_CSharp_IncrDecrG()`.
    pub fn op_post_incr(&mut self) -> crate::Owned<crate::mr::c_sharp::IncrDecrG>
    {
        let __ret = unsafe {crate::ffi::MR_C_post_incr_MR_CSharp_IncrDecrG(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrG)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrG)}
    }

    /// Generated from method `MR::CSharp::IncrDecrG::operator--`.
    ///
    /// Calls `MR_C_decr_MR_CSharp_IncrDecrG()`.
    pub fn op_decr(&mut self) -> &mut crate::mr::c_sharp::IncrDecrG
    {
        let __ret = unsafe {crate::ffi::MR_C_decr_MR_CSharp_IncrDecrG(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrG)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IncrDecrG)}
    }

    /// Generated from method `MR::CSharp::IncrDecrG::operator--`.
    ///
    /// Calls `MR_C_post_decr_MR_CSharp_IncrDecrG()`.
    pub fn op_post_decr(&mut self) -> crate::Owned<crate::mr::c_sharp::IncrDecrG>
    {
        let __ret = unsafe {crate::ffi::MR_C_post_decr_MR_CSharp_IncrDecrG(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrG)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrG)}
    }

}

unsafe impl crate::CppCopy for IncrDecrG
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// This class is non-copyable, but is trivially movable, so we treat it as if it was copyable.
/// Generated from class `MR::CSharp::IncrDecrH`.
///
/// Generated from class `MR::CSharp::IncrDecrH`. Heap-allocated instances are held in `Owned<IncrDecrH>`.
#[repr(transparent)]
pub struct IncrDecrH(crate::ffi::MR_CSharp_IncrDecrH);

unsafe impl crate::CppClass for IncrDecrH
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IncrDecrH_Destroy(ptr as *const crate::ffi::MR_CSharp_IncrDecrH)}
}

impl IncrDecrH
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IncrDecrH_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IncrDecrH>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrH_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrH)}
    }

    /// Generated from constructor `MR::CSharp::IncrDecrH::IncrDecrH`.
    ///
    /// Calls `MR_CSharp_IncrDecrH_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IncrDecrH) -> crate::Owned<crate::mr::c_sharp::IncrDecrH>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrH_ConstructFromAnother(_other as *const crate::mr::c_sharp::IncrDecrH as *const crate::ffi::MR_CSharp_IncrDecrH)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrH)}
    }

    /// Generated from method `MR::CSharp::IncrDecrH::operator++`.
    ///
    /// Calls `MR_C_incr_MR_CSharp_IncrDecrH()`.
    pub fn op_incr(&self) -> &crate::mr::c_sharp::IncrDecrH
    {
        let __ret = unsafe {crate::ffi::MR_C_incr_MR_CSharp_IncrDecrH(self as *const Self as *const crate::ffi::MR_CSharp_IncrDecrH)};
        unsafe {&*(__ret as *const crate::mr::c_sharp::IncrDecrH)}
    }

    /// Generated from method `MR::CSharp::IncrDecrH::operator++`.
    ///
    /// Calls `MR_C_post_incr_MR_CSharp_IncrDecrH()`.
    pub fn op_post_incr(&self) -> crate::Owned<crate::mr::c_sharp::IncrDecrH>
    {
        let __ret = unsafe {crate::ffi::MR_C_post_incr_MR_CSharp_IncrDecrH(self as *const Self as *const crate::ffi::MR_CSharp_IncrDecrH)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrH)}
    }

    /// Generated from method `MR::CSharp::IncrDecrH::operator--`.
    ///
    /// Calls `MR_C_decr_MR_CSharp_IncrDecrH()`.
    pub fn op_decr(&self) -> &crate::mr::c_sharp::IncrDecrH
    {
        let __ret = unsafe {crate::ffi::MR_C_decr_MR_CSharp_IncrDecrH(self as *const Self as *const crate::ffi::MR_CSharp_IncrDecrH)};
        unsafe {&*(__ret as *const crate::mr::c_sharp::IncrDecrH)}
    }

    /// Generated from method `MR::CSharp::IncrDecrH::operator--`.
    ///
    /// Calls `MR_C_post_decr_MR_CSharp_IncrDecrH()`.
    pub fn op_post_decr(&self) -> crate::Owned<crate::mr::c_sharp::IncrDecrH>
    {
        let __ret = unsafe {crate::ffi::MR_C_post_decr_MR_CSharp_IncrDecrH(self as *const Self as *const crate::ffi::MR_CSharp_IncrDecrH)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrH)}
    }

}

unsafe impl crate::CppCopy for IncrDecrH
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Friend functions.
/// Generated from class `MR::CSharp::IncrDecrI`.
///
/// Generated from class `MR::CSharp::IncrDecrI`. Heap-allocated instances are held in `Owned<IncrDecrI>`.
#[repr(transparent)]
pub struct IncrDecrI(crate::ffi::MR_CSharp_IncrDecrI);

unsafe impl crate::CppClass for IncrDecrI
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IncrDecrI_Destroy(ptr as *const crate::ffi::MR_CSharp_IncrDecrI)}
}

impl IncrDecrI
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IncrDecrI_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IncrDecrI>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrI_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrI)}
    }

    /// Generated from constructor `MR::CSharp::IncrDecrI::IncrDecrI`.
    ///
    /// Calls `MR_CSharp_IncrDecrI_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IncrDecrI) -> crate::Owned<crate::mr::c_sharp::IncrDecrI>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrI_ConstructFromAnother(_other as *const crate::mr::c_sharp::IncrDecrI as *const crate::ffi::MR_CSharp_IncrDecrI)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IncrDecrI)}
    }

    /// Generated from method `MR::CSharp::IncrDecrI::operator=`.
    ///
    /// Calls `MR_CSharp_IncrDecrI_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IncrDecrI) -> &mut crate::mr::c_sharp::IncrDecrI
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IncrDecrI_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IncrDecrI, _other as *const crate::mr::c_sharp::IncrDecrI as *const crate::ffi::MR_CSharp_IncrDecrI)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IncrDecrI)}
    }

}

unsafe impl crate::CppCopy for IncrDecrI
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Subscription operator.
/// Generated from class `MR::CSharp::IndexerA`.
///
/// Generated from class `MR::CSharp::IndexerA`. Heap-allocated instances are held in `Owned<IndexerA>`.
#[repr(transparent)]
pub struct IndexerA(crate::ffi::MR_CSharp_IndexerA);

unsafe impl crate::CppClass for IndexerA
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IndexerA_Destroy(ptr as *const crate::ffi::MR_CSharp_IndexerA)}
}

impl IndexerA
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IndexerA_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IndexerA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerA_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IndexerA)}
    }

    /// Constructs `MR::CSharp::IndexerA` elementwise.
    ///
    /// Calls `MR_CSharp_IndexerA_ConstructFrom()`.
    /// The reference to the parameter `x` might be preserved in the constructed object.
    pub fn construct_from(x: i32) -> crate::Owned<crate::mr::c_sharp::IndexerA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerA_ConstructFrom(x)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IndexerA)}
    }

    /// Generated from constructor `MR::CSharp::IndexerA::IndexerA`.
    ///
    /// Calls `MR_CSharp_IndexerA_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IndexerA) -> crate::Owned<crate::mr::c_sharp::IndexerA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerA_ConstructFromAnother(_other as *const crate::mr::c_sharp::IndexerA as *const crate::ffi::MR_CSharp_IndexerA)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IndexerA)}
    }

    /// Generated from method `MR::CSharp::IndexerA::operator=`.
    ///
    /// Calls `MR_CSharp_IndexerA_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IndexerA) -> &mut crate::mr::c_sharp::IndexerA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerA_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IndexerA, _other as *const crate::mr::c_sharp::IndexerA as *const crate::ffi::MR_CSharp_IndexerA)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IndexerA)}
    }

    /// Generated from method `MR::CSharp::IndexerA::operator[]`.
    ///
    /// Calls `MR_CSharp_IndexerA_index()`.
    pub fn index(&mut self, i: i32) -> &mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerA_index(self as *mut Self as *mut crate::ffi::MR_CSharp_IndexerA, i)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::IndexerA` named `x`.
    ///
    /// Calls `MR_CSharp_IndexerA_Get_x()`.
    /// The reference to this object might be preserved as the return value.
    pub fn x<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerA_Get_x(self as *const Self as *const crate::ffi::MR_CSharp_IndexerA)};
        unsafe {&*(__ret as *const i32)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::IndexerA` named `x`.
    ///
    /// Calls `MR_CSharp_IndexerA_GetMutable_x()`.
    /// The reference to this object might be preserved as the return value.
    pub fn x_mut<'a>(&'a mut self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerA_GetMutable_x(self as *mut Self as *mut crate::ffi::MR_CSharp_IndexerA)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// Modifies a member variable of class `MR::CSharp::IndexerA` named `x`.
    ///
    /// Calls `MR_CSharp_IndexerA_Set_x()`.
    /// The reference to the parameter `value` might be preserved in this object in element `x`.
    pub fn set_x(&mut self, value: i32)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerA_Set_x(self as *mut Self as *mut crate::ffi::MR_CSharp_IndexerA, value)};
        __ret
    }

}

unsafe impl crate::CppCopy for IndexerA
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::IndexerB`.
///
/// Generated from class `MR::CSharp::IndexerB`. Heap-allocated instances are held in `Owned<IndexerB>`.
#[repr(transparent)]
pub struct IndexerB(crate::ffi::MR_CSharp_IndexerB);

unsafe impl crate::CppClass for IndexerB
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IndexerB_Destroy(ptr as *const crate::ffi::MR_CSharp_IndexerB)}
}

impl IndexerB
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IndexerB_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IndexerB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerB_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IndexerB)}
    }

    /// Constructs `MR::CSharp::IndexerB` elementwise.
    ///
    /// Calls `MR_CSharp_IndexerB_ConstructFrom()`.
    /// The reference to the parameter `a` might be preserved in the constructed object.
    pub fn construct_from(a: &crate::mr::c_sharp::IndexerA) -> crate::Owned<crate::mr::c_sharp::IndexerB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerB_ConstructFrom(a as *const crate::mr::c_sharp::IndexerA as *const crate::ffi::MR_CSharp_IndexerA)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IndexerB)}
    }

    /// Generated from constructor `MR::CSharp::IndexerB::IndexerB`.
    ///
    /// Calls `MR_CSharp_IndexerB_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IndexerB) -> crate::Owned<crate::mr::c_sharp::IndexerB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerB_ConstructFromAnother(_other as *const crate::mr::c_sharp::IndexerB as *const crate::ffi::MR_CSharp_IndexerB)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IndexerB)}
    }

    /// Generated from method `MR::CSharp::IndexerB::operator=`.
    ///
    /// Calls `MR_CSharp_IndexerB_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IndexerB) -> &mut crate::mr::c_sharp::IndexerB
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerB_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IndexerB, _other as *const crate::mr::c_sharp::IndexerB as *const crate::ffi::MR_CSharp_IndexerB)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IndexerB)}
    }

    /// Generated from method `MR::CSharp::IndexerB::operator[]`.
    ///
    /// Calls `MR_CSharp_IndexerB_index_1()`.
    pub fn index_1(&self, i: i32) -> &crate::mr::c_sharp::IndexerA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerB_index_1(self as *const Self as *const crate::ffi::MR_CSharp_IndexerB, i)};
        unsafe {&*(__ret as *const crate::mr::c_sharp::IndexerA)}
    }

    /// Generated from method `MR::CSharp::IndexerB::operator[]`.
    ///
    /// Calls `MR_CSharp_IndexerB_index_2()`.
    pub fn index_2(&self, i: i32, j: i32) -> &crate::mr::c_sharp::IndexerA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerB_index_2(self as *const Self as *const crate::ffi::MR_CSharp_IndexerB, i, j)};
        unsafe {&*(__ret as *const crate::mr::c_sharp::IndexerA)}
    }

    /// Generated from method `MR::CSharp::IndexerB::operator[]`.
    ///
    /// Calls `MR_CSharp_IndexerB_index_0()`.
    pub fn index_0(&self) -> &crate::mr::c_sharp::IndexerA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerB_index_0(self as *const Self as *const crate::ffi::MR_CSharp_IndexerB)};
        unsafe {&*(__ret as *const crate::mr::c_sharp::IndexerA)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::IndexerB` named `a`.
    ///
    /// Calls `MR_CSharp_IndexerB_Get_a()`.
    /// The reference to this object might be preserved as the return value.
    pub fn a<'a>(&'a self) -> &'a crate::mr::c_sharp::IndexerA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerB_Get_a(self as *const Self as *const crate::ffi::MR_CSharp_IndexerB)};
        unsafe {&*(__ret as *const crate::mr::c_sharp::IndexerA)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::IndexerB` named `a`.
    ///
    /// Calls `MR_CSharp_IndexerB_GetMutable_a()`.
    /// The reference to this object might be preserved as the return value.
    pub fn a_mut<'a>(&'a mut self) -> &'a mut crate::mr::c_sharp::IndexerA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerB_GetMutable_a(self as *mut Self as *mut crate::ffi::MR_CSharp_IndexerB)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IndexerA)}
    }

    /// Modifies a member variable of class `MR::CSharp::IndexerB` named `a`.
    ///
    /// Calls `MR_CSharp_IndexerB_Set_a()`.
    /// The reference to the parameter `value` might be preserved in this object in element `a`.
    pub fn set_a(&mut self, value: &crate::mr::c_sharp::IndexerA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerB_Set_a(self as *mut Self as *mut crate::ffi::MR_CSharp_IndexerB, value as *const crate::mr::c_sharp::IndexerA as *const crate::ffi::MR_CSharp_IndexerA)};
        __ret
    }

}

unsafe impl crate::CppCopy for IndexerB
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::IndexerC`.
///
/// Generated from class `MR::CSharp::IndexerC`. Heap-allocated instances are held in `Owned<IndexerC>`.
#[repr(transparent)]
pub struct IndexerC(crate::ffi::MR_CSharp_IndexerC);

unsafe impl crate::CppClass for IndexerC
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IndexerC_Destroy(ptr as *const crate::ffi::MR_CSharp_IndexerC)}
}

impl IndexerC
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IndexerC_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IndexerC>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerC_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IndexerC)}
    }

    /// Generated from constructor `MR::CSharp::IndexerC::IndexerC`.
    ///
    /// Calls `MR_CSharp_IndexerC_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IndexerC) -> crate::Owned<crate::mr::c_sharp::IndexerC>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerC_ConstructFromAnother(_other as *const crate::mr::c_sharp::IndexerC as *const crate::ffi::MR_CSharp_IndexerC)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IndexerC)}
    }

    /// Generated from method `MR::CSharp::IndexerC::operator=`.
    ///
    /// Calls `MR_CSharp_IndexerC_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IndexerC) -> &mut crate::mr::c_sharp::IndexerC
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerC_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IndexerC, _other as *const crate::mr::c_sharp::IndexerC as *const crate::ffi::MR_CSharp_IndexerC)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IndexerC)}
    }

    /// Generated from method `MR::CSharp::IndexerC::operator[]`.
    ///
    /// Calls `MR_CSharp_IndexerC_index_mut()`.
    pub fn index_mut(&mut self, i: i32) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerC_index_mut(self as *mut Self as *mut crate::ffi::MR_CSharp_IndexerC, i)};
        __ret
    }

    /// Generated from method `MR::CSharp::IndexerC::operator[]`.
    ///
    /// Calls `MR_CSharp_IndexerC_index()`.
    pub fn index(&self, i: i32) -> f32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IndexerC_index(self as *const Self as *const crate::ffi::MR_CSharp_IndexerC, i)};
        __ret
    }

}

unsafe impl crate::CppCopy for IndexerC
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Const member functions.
/// Generated from class `MR::CSharp::IterableA`.
///
/// Generated from class `MR::CSharp::IterableA`. Heap-allocated instances are held in `Owned<IterableA>`.
#[repr(transparent)]
pub struct IterableA(crate::ffi::MR_CSharp_IterableA);

unsafe impl crate::CppClass for IterableA
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IterableA_Destroy(ptr as *const crate::ffi::MR_CSharp_IterableA)}
}

impl IterableA
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IterableA_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IterableA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableA_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableA)}
    }

    /// Generated from constructor `MR::CSharp::IterableA::IterableA`.
    ///
    /// Calls `MR_CSharp_IterableA_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IterableA) -> crate::Owned<crate::mr::c_sharp::IterableA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableA_ConstructFromAnother(_other as *const crate::mr::c_sharp::IterableA as *const crate::ffi::MR_CSharp_IterableA)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableA)}
    }

    /// Generated from method `MR::CSharp::IterableA::operator=`.
    ///
    /// Calls `MR_CSharp_IterableA_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IterableA) -> &mut crate::mr::c_sharp::IterableA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableA_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableA, _other as *const crate::mr::c_sharp::IterableA as *const crate::ffi::MR_CSharp_IterableA)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IterableA)}
    }

    /// Generated from method `MR::CSharp::IterableA::begin`.
    ///
    /// Calls `MR_CSharp_IterableA_begin()`.
    /// The reference to this object might be preserved in the return value.
    pub fn begin<'a>(&'a self) -> Option<&'a i32>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableA_begin(self as *const Self as *const crate::ffi::MR_CSharp_IterableA)};
        unsafe {(__ret as *const i32).as_ref()}
    }

    /// Generated from method `MR::CSharp::IterableA::end`.
    ///
    /// Calls `MR_CSharp_IterableA_end()`.
    /// The reference to this object might be preserved in the return value.
    pub fn end<'a>(&'a self) -> Option<&'a i32>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableA_end(self as *const Self as *const crate::ffi::MR_CSharp_IterableA)};
        unsafe {(__ret as *const i32).as_ref()}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::IterableA` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableA_Get_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableA_Get_arr(self as *const Self as *const crate::ffi::MR_CSharp_IterableA)};
        unsafe {&*(__ret as *const i32)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableA` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableA_GetMutable_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr_mut<'a>(&'a mut self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableA_GetMutable_arr(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableA)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// Returns the size of the array member of class `MR::CSharp::IterableA` named `arr`. The size is `3`.
    ///
    /// Calls `MR_CSharp_IterableA_GetSize_arr()`.
    pub fn arr_size() -> usize
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableA_GetSize_arr()};
        __ret
    }

}

unsafe impl crate::CppCopy for IterableA
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Mutable member functions.
/// Generated from class `MR::CSharp::IterableB`.
///
/// Generated from class `MR::CSharp::IterableB`. Heap-allocated instances are held in `Owned<IterableB>`.
#[repr(transparent)]
pub struct IterableB(crate::ffi::MR_CSharp_IterableB);

unsafe impl crate::CppClass for IterableB
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IterableB_Destroy(ptr as *const crate::ffi::MR_CSharp_IterableB)}
}

impl IterableB
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IterableB_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IterableB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableB_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableB)}
    }

    /// Generated from constructor `MR::CSharp::IterableB::IterableB`.
    ///
    /// Calls `MR_CSharp_IterableB_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IterableB) -> crate::Owned<crate::mr::c_sharp::IterableB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableB_ConstructFromAnother(_other as *const crate::mr::c_sharp::IterableB as *const crate::ffi::MR_CSharp_IterableB)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableB)}
    }

    /// Generated from method `MR::CSharp::IterableB::operator=`.
    ///
    /// Calls `MR_CSharp_IterableB_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IterableB) -> &mut crate::mr::c_sharp::IterableB
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableB_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableB, _other as *const crate::mr::c_sharp::IterableB as *const crate::ffi::MR_CSharp_IterableB)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IterableB)}
    }

    /// Generated from method `MR::CSharp::IterableB::begin`.
    ///
    /// Calls `MR_CSharp_IterableB_begin()`.
    /// The reference to this object might be preserved in the return value.
    pub fn begin<'a>(&'a mut self) -> Option<&'a mut i32>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableB_begin(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableB)};
        unsafe {(__ret as *mut i32).as_mut()}
    }

    /// Generated from method `MR::CSharp::IterableB::end`.
    ///
    /// Calls `MR_CSharp_IterableB_end()`.
    /// The reference to this object might be preserved in the return value.
    pub fn end<'a>(&'a mut self) -> Option<&'a mut i32>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableB_end(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableB)};
        unsafe {(__ret as *mut i32).as_mut()}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::IterableB` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableB_Get_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableB_Get_arr(self as *const Self as *const crate::ffi::MR_CSharp_IterableB)};
        unsafe {&*(__ret as *const i32)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableB` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableB_GetMutable_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr_mut<'a>(&'a mut self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableB_GetMutable_arr(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableB)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// Returns the size of the array member of class `MR::CSharp::IterableB` named `arr`. The size is `3`.
    ///
    /// Calls `MR_CSharp_IterableB_GetSize_arr()`.
    pub fn arr_size() -> usize
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableB_GetSize_arr()};
        __ret
    }

}

unsafe impl crate::CppCopy for IterableB
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Both const and mutable member functions.
/// Generated from class `MR::CSharp::IterableC`.
///
/// Generated from class `MR::CSharp::IterableC`. Heap-allocated instances are held in `Owned<IterableC>`.
#[repr(transparent)]
pub struct IterableC(crate::ffi::MR_CSharp_IterableC);

unsafe impl crate::CppClass for IterableC
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IterableC_Destroy(ptr as *const crate::ffi::MR_CSharp_IterableC)}
}

impl IterableC
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IterableC_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IterableC>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableC_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableC)}
    }

    /// Generated from constructor `MR::CSharp::IterableC::IterableC`.
    ///
    /// Calls `MR_CSharp_IterableC_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IterableC) -> crate::Owned<crate::mr::c_sharp::IterableC>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableC_ConstructFromAnother(_other as *const crate::mr::c_sharp::IterableC as *const crate::ffi::MR_CSharp_IterableC)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableC)}
    }

    /// Generated from method `MR::CSharp::IterableC::operator=`.
    ///
    /// Calls `MR_CSharp_IterableC_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IterableC) -> &mut crate::mr::c_sharp::IterableC
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableC_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableC, _other as *const crate::mr::c_sharp::IterableC as *const crate::ffi::MR_CSharp_IterableC)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IterableC)}
    }

    /// Generated from method `MR::CSharp::IterableC::begin`.
    ///
    /// Calls `MR_CSharp_IterableC_begin_mut()`.
    /// The reference to this object might be preserved in the return value.
    pub fn begin_mut<'a>(&'a mut self) -> Option<&'a mut i32>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableC_begin_mut(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableC)};
        unsafe {(__ret as *mut i32).as_mut()}
    }

    /// Generated from method `MR::CSharp::IterableC::end`.
    ///
    /// Calls `MR_CSharp_IterableC_end_mut()`.
    /// The reference to this object might be preserved in the return value.
    pub fn end_mut<'a>(&'a mut self) -> Option<&'a mut i32>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableC_end_mut(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableC)};
        unsafe {(__ret as *mut i32).as_mut()}
    }

    /// Generated from method `MR::CSharp::IterableC::begin`.
    ///
    /// Calls `MR_CSharp_IterableC_begin()`.
    /// The reference to this object might be preserved in the return value.
    pub fn begin<'a>(&'a self) -> Option<&'a i32>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableC_begin(self as *const Self as *const crate::ffi::MR_CSharp_IterableC)};
        unsafe {(__ret as *const i32).as_ref()}
    }

    /// Generated from method `MR::CSharp::IterableC::end`.
    ///
    /// Calls `MR_CSharp_IterableC_end()`.
    /// The reference to this object might be preserved in the return value.
    pub fn end<'a>(&'a self) -> Option<&'a i32>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableC_end(self as *const Self as *const crate::ffi::MR_CSharp_IterableC)};
        unsafe {(__ret as *const i32).as_ref()}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::IterableC` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableC_Get_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableC_Get_arr(self as *const Self as *const crate::ffi::MR_CSharp_IterableC)};
        unsafe {&*(__ret as *const i32)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableC` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableC_GetMutable_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr_mut<'a>(&'a mut self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableC_GetMutable_arr(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableC)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// Returns the size of the array member of class `MR::CSharp::IterableC` named `arr`. The size is `3`.
    ///
    /// Calls `MR_CSharp_IterableC_GetSize_arr()`.
    pub fn arr_size() -> usize
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableC_GetSize_arr()};
        __ret
    }

}

unsafe impl crate::CppCopy for IterableC
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Const free functions.
/// Generated from class `MR::CSharp::IterableD`.
///
/// Generated from class `MR::CSharp::IterableD`. Heap-allocated instances are held in `Owned<IterableD>`.
#[repr(transparent)]
pub struct IterableD(crate::ffi::MR_CSharp_IterableD);

unsafe impl crate::CppClass for IterableD
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IterableD_Destroy(ptr as *const crate::ffi::MR_CSharp_IterableD)}
}

impl IterableD
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IterableD_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IterableD>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableD_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableD)}
    }

    /// Generated from constructor `MR::CSharp::IterableD::IterableD`.
    ///
    /// Calls `MR_CSharp_IterableD_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IterableD) -> crate::Owned<crate::mr::c_sharp::IterableD>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableD_ConstructFromAnother(_other as *const crate::mr::c_sharp::IterableD as *const crate::ffi::MR_CSharp_IterableD)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableD)}
    }

    /// Generated from method `MR::CSharp::IterableD::operator=`.
    ///
    /// Calls `MR_CSharp_IterableD_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IterableD) -> &mut crate::mr::c_sharp::IterableD
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableD_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableD, _other as *const crate::mr::c_sharp::IterableD as *const crate::ffi::MR_CSharp_IterableD)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IterableD)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::IterableD` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableD_Get_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableD_Get_arr(self as *const Self as *const crate::ffi::MR_CSharp_IterableD)};
        unsafe {&*(__ret as *const i32)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableD` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableD_GetMutable_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr_mut<'a>(&'a mut self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableD_GetMutable_arr(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableD)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// Returns the size of the array member of class `MR::CSharp::IterableD` named `arr`. The size is `3`.
    ///
    /// Calls `MR_CSharp_IterableD_GetSize_arr()`.
    pub fn arr_size() -> usize
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableD_GetSize_arr()};
        __ret
    }

}

unsafe impl crate::CppCopy for IterableD
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Mutable free functions.
/// Generated from class `MR::CSharp::IterableE`.
///
/// Generated from class `MR::CSharp::IterableE`. Heap-allocated instances are held in `Owned<IterableE>`.
#[repr(transparent)]
pub struct IterableE(crate::ffi::MR_CSharp_IterableE);

unsafe impl crate::CppClass for IterableE
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IterableE_Destroy(ptr as *const crate::ffi::MR_CSharp_IterableE)}
}

impl IterableE
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IterableE_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IterableE>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableE_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableE)}
    }

    /// Generated from constructor `MR::CSharp::IterableE::IterableE`.
    ///
    /// Calls `MR_CSharp_IterableE_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IterableE) -> crate::Owned<crate::mr::c_sharp::IterableE>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableE_ConstructFromAnother(_other as *const crate::mr::c_sharp::IterableE as *const crate::ffi::MR_CSharp_IterableE)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableE)}
    }

    /// Generated from method `MR::CSharp::IterableE::operator=`.
    ///
    /// Calls `MR_CSharp_IterableE_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IterableE) -> &mut crate::mr::c_sharp::IterableE
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableE_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableE, _other as *const crate::mr::c_sharp::IterableE as *const crate::ffi::MR_CSharp_IterableE)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IterableE)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::IterableE` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableE_Get_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableE_Get_arr(self as *const Self as *const crate::ffi::MR_CSharp_IterableE)};
        unsafe {&*(__ret as *const i32)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableE` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableE_GetMutable_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr_mut<'a>(&'a mut self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableE_GetMutable_arr(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableE)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// Returns the size of the array member of class `MR::CSharp::IterableE` named `arr`. The size is `3`.
    ///
    /// Calls `MR_CSharp_IterableE_GetSize_arr()`.
    pub fn arr_size() -> usize
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableE_GetSize_arr()};
        __ret
    }

}

unsafe impl crate::CppCopy for IterableE
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Both const and mutable free functions.
/// Generated from class `MR::CSharp::IterableF`.
///
/// Generated from class `MR::CSharp::IterableF`. Heap-allocated instances are held in `Owned<IterableF>`.
#[repr(transparent)]
pub struct IterableF(crate::ffi::MR_CSharp_IterableF);

unsafe impl crate::CppClass for IterableF
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IterableF_Destroy(ptr as *const crate::ffi::MR_CSharp_IterableF)}
}

impl IterableF
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IterableF_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IterableF>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableF_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableF)}
    }

    /// Generated from constructor `MR::CSharp::IterableF::IterableF`.
    ///
    /// Calls `MR_CSharp_IterableF_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IterableF) -> crate::Owned<crate::mr::c_sharp::IterableF>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableF_ConstructFromAnother(_other as *const crate::mr::c_sharp::IterableF as *const crate::ffi::MR_CSharp_IterableF)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableF)}
    }

    /// Generated from method `MR::CSharp::IterableF::operator=`.
    ///
    /// Calls `MR_CSharp_IterableF_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IterableF) -> &mut crate::mr::c_sharp::IterableF
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableF_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableF, _other as *const crate::mr::c_sharp::IterableF as *const crate::ffi::MR_CSharp_IterableF)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IterableF)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::IterableF` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableF_Get_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableF_Get_arr(self as *const Self as *const crate::ffi::MR_CSharp_IterableF)};
        unsafe {&*(__ret as *const i32)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableF` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableF_GetMutable_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr_mut<'a>(&'a mut self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableF_GetMutable_arr(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableF)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// Returns the size of the array member of class `MR::CSharp::IterableF` named `arr`. The size is `3`.
    ///
    /// Calls `MR_CSharp_IterableF_GetSize_arr()`.
    pub fn arr_size() -> usize
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableF_GetSize_arr()};
        __ret
    }

}

unsafe impl crate::CppCopy for IterableF
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Returning mutable class instances.
/// Generated from class `MR::CSharp::IterableG`.
///
/// Generated from class `MR::CSharp::IterableG`. Heap-allocated instances are held in `Owned<IterableG>`.
#[repr(transparent)]
pub struct IterableG(crate::ffi::MR_CSharp_IterableG);

unsafe impl crate::CppClass for IterableG
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IterableG_Destroy(ptr as *const crate::ffi::MR_CSharp_IterableG)}
}

impl IterableG
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IterableG_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IterableG>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableG_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableG)}
    }

    /// Generated from constructor `MR::CSharp::IterableG::IterableG`.
    ///
    /// Calls `MR_CSharp_IterableG_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IterableG) -> crate::Owned<crate::mr::c_sharp::IterableG>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableG_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::IterableG as *mut crate::ffi::MR_CSharp_IterableG)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableG)}
    }

    /// Generated from method `MR::CSharp::IterableG::operator=`.
    ///
    /// Calls `MR_CSharp_IterableG_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IterableG) -> &mut crate::mr::c_sharp::IterableG
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableG_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableG, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::IterableG as *mut crate::ffi::MR_CSharp_IterableG)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IterableG)}
    }

    /// Generated from method `MR::CSharp::IterableG::begin`.
    ///
    /// Calls `MR_CSharp_IterableG_begin()`.
    /// The reference to this object might be preserved in the return value.
    pub fn begin<'a>(&'a mut self) -> Option<&'a mut crate::mr::cs::std_string>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableG_begin(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableG)};
        unsafe {(__ret as *mut crate::mr::cs::std_string).as_mut()}
    }

    /// Generated from method `MR::CSharp::IterableG::end`.
    ///
    /// Calls `MR_CSharp_IterableG_end()`.
    /// The reference to this object might be preserved in the return value.
    pub fn end<'a>(&'a mut self) -> Option<&'a mut crate::mr::cs::std_string>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableG_end(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableG)};
        unsafe {(__ret as *mut crate::mr::cs::std_string).as_mut()}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::IterableG` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableG_Get_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr<'a>(&'a self) -> &'a crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableG_Get_arr(self as *const Self as *const crate::ffi::MR_CSharp_IterableG)};
        unsafe {&*(__ret as *const crate::mr::cs::std_string)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableG` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableG_GetMutable_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr_mut<'a>(&'a mut self) -> &'a mut crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableG_GetMutable_arr(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableG)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_string)}
    }

    /// Returns the size of the array member of class `MR::CSharp::IterableG` named `arr`. The size is `3`.
    ///
    /// Calls `MR_CSharp_IterableG_GetSize_arr()`.
    pub fn arr_size() -> usize
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableG_GetSize_arr()};
        __ret
    }

}

unsafe impl crate::CppCopy for IterableG
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Returning const class instances.
/// Generated from class `MR::CSharp::IterableH`.
///
/// Generated from class `MR::CSharp::IterableH`. Heap-allocated instances are held in `Owned<IterableH>`.
#[repr(transparent)]
pub struct IterableH(crate::ffi::MR_CSharp_IterableH);

unsafe impl crate::CppClass for IterableH
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IterableH_Destroy(ptr as *const crate::ffi::MR_CSharp_IterableH)}
}

impl IterableH
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IterableH_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IterableH>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableH_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableH)}
    }

    /// Generated from constructor `MR::CSharp::IterableH::IterableH`.
    ///
    /// Calls `MR_CSharp_IterableH_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IterableH) -> crate::Owned<crate::mr::c_sharp::IterableH>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableH_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::IterableH as *mut crate::ffi::MR_CSharp_IterableH)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableH)}
    }

    /// Generated from method `MR::CSharp::IterableH::operator=`.
    ///
    /// Calls `MR_CSharp_IterableH_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IterableH) -> &mut crate::mr::c_sharp::IterableH
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableH_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableH, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::IterableH as *mut crate::ffi::MR_CSharp_IterableH)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IterableH)}
    }

    /// Not making those functions `const` for a change.
    /// Generated from method `MR::CSharp::IterableH::begin`.
    ///
    /// Calls `MR_CSharp_IterableH_begin()`.
    /// The reference to this object might be preserved in the return value.
    pub fn begin<'a>(&'a mut self) -> Option<&'a crate::mr::cs::std_string>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableH_begin(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableH)};
        unsafe {(__ret as *const crate::mr::cs::std_string).as_ref()}
    }

    /// Generated from method `MR::CSharp::IterableH::end`.
    ///
    /// Calls `MR_CSharp_IterableH_end()`.
    /// The reference to this object might be preserved in the return value.
    pub fn end<'a>(&'a mut self) -> Option<&'a crate::mr::cs::std_string>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableH_end(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableH)};
        unsafe {(__ret as *const crate::mr::cs::std_string).as_ref()}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::IterableH` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableH_Get_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr<'a>(&'a self) -> &'a crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableH_Get_arr(self as *const Self as *const crate::ffi::MR_CSharp_IterableH)};
        unsafe {&*(__ret as *const crate::mr::cs::std_string)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableH` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableH_GetMutable_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr_mut<'a>(&'a mut self) -> &'a mut crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableH_GetMutable_arr(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableH)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_string)}
    }

    /// Returns the size of the array member of class `MR::CSharp::IterableH` named `arr`. The size is `3`.
    ///
    /// Calls `MR_CSharp_IterableH_GetSize_arr()`.
    pub fn arr_size() -> usize
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableH_GetSize_arr()};
        __ret
    }

}

unsafe impl crate::CppCopy for IterableH
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Returning mutable exposed struct instances.
/// Generated from class `MR::CSharp::IterableI`.
///
/// Generated from class `MR::CSharp::IterableI`. Heap-allocated instances are held in `Owned<IterableI>`.
#[repr(transparent)]
pub struct IterableI(crate::ffi::MR_CSharp_IterableI);

unsafe impl crate::CppClass for IterableI
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IterableI_Destroy(ptr as *const crate::ffi::MR_CSharp_IterableI)}
}

impl IterableI
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IterableI_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IterableI>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableI_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableI)}
    }

    /// Generated from constructor `MR::CSharp::IterableI::IterableI`.
    ///
    /// Calls `MR_CSharp_IterableI_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IterableI) -> crate::Owned<crate::mr::c_sharp::IterableI>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableI_ConstructFromAnother(_other as *const crate::mr::c_sharp::IterableI as *const crate::ffi::MR_CSharp_IterableI)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableI)}
    }

    /// Generated from method `MR::CSharp::IterableI::operator=`.
    ///
    /// Calls `MR_CSharp_IterableI_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IterableI) -> &mut crate::mr::c_sharp::IterableI
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableI_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableI, _other as *const crate::mr::c_sharp::IterableI as *const crate::ffi::MR_CSharp_IterableI)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IterableI)}
    }

    /// Generated from method `MR::CSharp::IterableI::begin`.
    ///
    /// Calls `MR_CSharp_IterableI_begin()`.
    /// The reference to this object might be preserved in the return value.
    pub fn begin<'a>(&'a mut self) -> Option<&'a mut crate::ffi::MR_CSharp_ExposedLayout>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableI_begin(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableI)};
        unsafe {(__ret as *mut crate::ffi::MR_CSharp_ExposedLayout).as_mut()}
    }

    /// Generated from method `MR::CSharp::IterableI::end`.
    ///
    /// Calls `MR_CSharp_IterableI_end()`.
    /// The reference to this object might be preserved in the return value.
    pub fn end<'a>(&'a mut self) -> Option<&'a mut crate::ffi::MR_CSharp_ExposedLayout>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableI_end(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableI)};
        unsafe {(__ret as *mut crate::ffi::MR_CSharp_ExposedLayout).as_mut()}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::IterableI` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableI_Get_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr<'a>(&'a self) -> &'a crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableI_Get_arr(self as *const Self as *const crate::ffi::MR_CSharp_IterableI)};
        unsafe {&*(__ret as *const crate::ffi::MR_CSharp_ExposedLayout)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableI` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableI_GetMutable_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr_mut<'a>(&'a mut self) -> &'a mut crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableI_GetMutable_arr(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableI)};
        unsafe {&mut *(__ret as *mut crate::ffi::MR_CSharp_ExposedLayout)}
    }

    /// Returns the size of the array member of class `MR::CSharp::IterableI` named `arr`. The size is `3`.
    ///
    /// Calls `MR_CSharp_IterableI_GetSize_arr()`.
    pub fn arr_size() -> usize
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableI_GetSize_arr()};
        __ret
    }

}

unsafe impl crate::CppCopy for IterableI
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Returning const exposed struct instances.
/// Generated from class `MR::CSharp::IterableJ`.
///
/// Generated from class `MR::CSharp::IterableJ`. Heap-allocated instances are held in `Owned<IterableJ>`.
#[repr(transparent)]
pub struct IterableJ(crate::ffi::MR_CSharp_IterableJ);

unsafe impl crate::CppClass for IterableJ
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IterableJ_Destroy(ptr as *const crate::ffi::MR_CSharp_IterableJ)}
}

impl IterableJ
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IterableJ_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IterableJ>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableJ_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableJ)}
    }

    /// Generated from constructor `MR::CSharp::IterableJ::IterableJ`.
    ///
    /// Calls `MR_CSharp_IterableJ_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IterableJ) -> crate::Owned<crate::mr::c_sharp::IterableJ>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableJ_ConstructFromAnother(_other as *const crate::mr::c_sharp::IterableJ as *const crate::ffi::MR_CSharp_IterableJ)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableJ)}
    }

    /// Generated from method `MR::CSharp::IterableJ::operator=`.
    ///
    /// Calls `MR_CSharp_IterableJ_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IterableJ) -> &mut crate::mr::c_sharp::IterableJ
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableJ_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableJ, _other as *const crate::mr::c_sharp::IterableJ as *const crate::ffi::MR_CSharp_IterableJ)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IterableJ)}
    }

    /// Not making those functions `const` for a change.
    /// Generated from method `MR::CSharp::IterableJ::begin`.
    ///
    /// Calls `MR_CSharp_IterableJ_begin()`.
    /// The reference to this object might be preserved in the return value.
    pub fn begin<'a>(&'a mut self) -> Option<&'a crate::ffi::MR_CSharp_ExposedLayout>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableJ_begin(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableJ)};
        unsafe {(__ret as *const crate::ffi::MR_CSharp_ExposedLayout).as_ref()}
    }

    /// Generated from method `MR::CSharp::IterableJ::end`.
    ///
    /// Calls `MR_CSharp_IterableJ_end()`.
    /// The reference to this object might be preserved in the return value.
    pub fn end<'a>(&'a mut self) -> Option<&'a crate::ffi::MR_CSharp_ExposedLayout>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableJ_end(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableJ)};
        unsafe {(__ret as *const crate::ffi::MR_CSharp_ExposedLayout).as_ref()}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::IterableJ` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableJ_Get_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr<'a>(&'a self) -> &'a crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableJ_Get_arr(self as *const Self as *const crate::ffi::MR_CSharp_IterableJ)};
        unsafe {&*(__ret as *const crate::ffi::MR_CSharp_ExposedLayout)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableJ` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableJ_GetMutable_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr_mut<'a>(&'a mut self) -> &'a mut crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableJ_GetMutable_arr(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableJ)};
        unsafe {&mut *(__ret as *mut crate::ffi::MR_CSharp_ExposedLayout)}
    }

    /// Returns the size of the array member of class `MR::CSharp::IterableJ` named `arr`. The size is `3`.
    ///
    /// Calls `MR_CSharp_IterableJ_GetSize_arr()`.
    pub fn arr_size() -> usize
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableJ_GetSize_arr()};
        __ret
    }

}

unsafe impl crate::CppCopy for IterableJ
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The sentinel having a different type.
/// Generated from class `MR::CSharp::IterableK`.
///
/// Generated from class `MR::CSharp::IterableK`. Heap-allocated instances are held in `Owned<IterableK>`.
#[repr(transparent)]
pub struct IterableK(crate::ffi::MR_CSharp_IterableK);

unsafe impl crate::CppClass for IterableK
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IterableK_Destroy(ptr as *const crate::ffi::MR_CSharp_IterableK)}
}

impl IterableK
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IterableK_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IterableK>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableK)}
    }

    /// Generated from constructor `MR::CSharp::IterableK::IterableK`.
    ///
    /// Calls `MR_CSharp_IterableK_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IterableK) -> crate::Owned<crate::mr::c_sharp::IterableK>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_ConstructFromAnother(_other as *const crate::mr::c_sharp::IterableK as *const crate::ffi::MR_CSharp_IterableK)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableK)}
    }

    /// Generated from method `MR::CSharp::IterableK::operator=`.
    ///
    /// Calls `MR_CSharp_IterableK_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IterableK) -> &mut crate::mr::c_sharp::IterableK
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableK, _other as *const crate::mr::c_sharp::IterableK as *const crate::ffi::MR_CSharp_IterableK)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IterableK)}
    }

    /// Not making those functions `const` for a change.
    /// Generated from method `MR::CSharp::IterableK::begin`.
    ///
    /// Calls `MR_CSharp_IterableK_begin()`.
    /// The reference to this object might be preserved in the return value.
    pub fn begin(&mut self) -> crate::Owned<crate::mr::c_sharp::IterableK_Iter>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_begin(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableK)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableK_Iter)}
    }

    /// Generated from method `MR::CSharp::IterableK::end`.
    ///
    /// Calls `MR_CSharp_IterableK_end()`.
    /// The reference to this object might be preserved in the return value.
    pub fn end(&mut self) -> crate::Owned<crate::mr::c_sharp::IterableK_Sentinel>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_end(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableK)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableK_Sentinel)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::IterableK` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableK_Get_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_Get_arr(self as *const Self as *const crate::ffi::MR_CSharp_IterableK)};
        unsafe {&*(__ret as *const i32)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableK` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableK_GetMutable_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr_mut<'a>(&'a mut self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_GetMutable_arr(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableK)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// Returns the size of the array member of class `MR::CSharp::IterableK` named `arr`. The size is `3`.
    ///
    /// Calls `MR_CSharp_IterableK_GetSize_arr()`.
    pub fn arr_size() -> usize
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_GetSize_arr()};
        __ret
    }

}

unsafe impl crate::CppCopy for IterableK
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::IterableK::Iter`.
///
/// Generated from class `MR::CSharp::IterableK::Iter`. Heap-allocated instances are held in `Owned<IterableK_Iter>`.
#[repr(transparent)]
pub struct IterableK_Iter(crate::ffi::MR_CSharp_IterableK_Iter);

unsafe impl crate::CppClass for IterableK_Iter
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IterableK_Iter_Destroy(ptr as *const crate::ffi::MR_CSharp_IterableK_Iter)}
}

impl IterableK_Iter
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IterableK_Iter_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IterableK_Iter>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_Iter_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableK_Iter)}
    }

    /// Constructs `MR::CSharp::IterableK::Iter` elementwise.
    ///
    /// Calls `MR_CSharp_IterableK_Iter_ConstructFrom()`.
    /// The reference to the parameter `ptr` might be preserved in the constructed object.
    pub fn construct_from(ptr: Option<&mut i32>) -> crate::Owned<crate::mr::c_sharp::IterableK_Iter>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_Iter_ConstructFrom(ptr.map_or(core::ptr::null_mut(), |r| r as *mut i32 as *mut i32))};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableK_Iter)}
    }

    /// Generated from constructor `MR::CSharp::IterableK::Iter::Iter`.
    ///
    /// Calls `MR_CSharp_IterableK_Iter_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IterableK_Iter) -> crate::Owned<crate::mr::c_sharp::IterableK_Iter>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_Iter_ConstructFromAnother(_other as *const crate::mr::c_sharp::IterableK_Iter as *const crate::ffi::MR_CSharp_IterableK_Iter)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableK_Iter)}
    }

    /// Generated from method `MR::CSharp::IterableK::Iter::operator=`.
    ///
    /// Calls `MR_CSharp_IterableK_Iter_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IterableK_Iter) -> &mut crate::mr::c_sharp::IterableK_Iter
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_Iter_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableK_Iter, _other as *const crate::mr::c_sharp::IterableK_Iter as *const crate::ffi::MR_CSharp_IterableK_Iter)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IterableK_Iter)}
    }

    /// Generated from method `MR::CSharp::IterableK::Iter::operator*`.
    ///
    /// Calls `MR_C_deref_MR_CSharp_IterableK_Iter()`.
    /// The reference to this object might be preserved in the return value.
    pub fn op_deref(&self) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_deref_MR_CSharp_IterableK_Iter(self as *const Self as *const crate::ffi::MR_CSharp_IterableK_Iter)};
        __ret
    }

    /// Generated from method `MR::CSharp::IterableK::Iter::operator++`.
    ///
    /// Calls `MR_C_incr_MR_CSharp_IterableK_Iter()`.
    pub fn op_incr(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_incr_MR_CSharp_IterableK_Iter(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableK_Iter)};
        __ret
    }

    /// Generated from method `MR::CSharp::IterableK::Iter::operator==`.
    ///
    /// Calls `MR_C_equal_MR_CSharp_IterableK_Iter_MR_CSharp_IterableK_Sentinel()`.
    pub fn op_equal_mr_c_sharp_iterable_k_sentinel(&mut self, s: &crate::mr::c_sharp::IterableK_Sentinel) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_equal_MR_CSharp_IterableK_Iter_MR_CSharp_IterableK_Sentinel(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableK_Iter, s as *const crate::mr::c_sharp::IterableK_Sentinel as *const crate::ffi::MR_CSharp_IterableK_Sentinel)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::IterableK::Iter` named `ptr`.
    ///
    /// Calls `MR_CSharp_IterableK_Iter_Get_ptr()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn ptr(&self) -> *const *mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_Iter_Get_ptr(self as *const Self as *const crate::ffi::MR_CSharp_IterableK_Iter)};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableK::Iter` named `ptr`.
    ///
    /// Calls `MR_CSharp_IterableK_Iter_GetMutable_ptr()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn ptr_mut(&mut self) -> *mut *mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_Iter_GetMutable_ptr(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableK_Iter)};
        __ret
    }

    /// Modifies a member variable of class `MR::CSharp::IterableK::Iter` named `ptr`.
    ///
    /// Calls `MR_CSharp_IterableK_Iter_Set_ptr()`.
    /// The reference to the parameter `value` might be preserved in this object in element `ptr`.
    pub fn set_ptr(&mut self, value: Option<&mut i32>)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_Iter_Set_ptr(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableK_Iter, value.map_or(core::ptr::null_mut(), |r| r as *mut i32 as *mut i32))};
        __ret
    }

}

unsafe impl crate::CppCopy for IterableK_Iter
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::IterableK::Sentinel`.
///
/// Generated from class `MR::CSharp::IterableK::Sentinel`. Heap-allocated instances are held in `Owned<IterableK_Sentinel>`.
#[repr(transparent)]
pub struct IterableK_Sentinel(crate::ffi::MR_CSharp_IterableK_Sentinel);

unsafe impl crate::CppClass for IterableK_Sentinel
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IterableK_Sentinel_Destroy(ptr as *const crate::ffi::MR_CSharp_IterableK_Sentinel)}
}

impl IterableK_Sentinel
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IterableK_Sentinel_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IterableK_Sentinel>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_Sentinel_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableK_Sentinel)}
    }

    /// Constructs `MR::CSharp::IterableK::Sentinel` elementwise.
    ///
    /// Calls `MR_CSharp_IterableK_Sentinel_ConstructFrom()`.
    /// The reference to the parameter `ptr` might be preserved in the constructed object.
    pub fn construct_from(ptr: Option<&mut i32>) -> crate::Owned<crate::mr::c_sharp::IterableK_Sentinel>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_Sentinel_ConstructFrom(ptr.map_or(core::ptr::null_mut(), |r| r as *mut i32 as *mut i32))};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableK_Sentinel)}
    }

    /// Generated from constructor `MR::CSharp::IterableK::Sentinel::Sentinel`.
    ///
    /// Calls `MR_CSharp_IterableK_Sentinel_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IterableK_Sentinel) -> crate::Owned<crate::mr::c_sharp::IterableK_Sentinel>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_Sentinel_ConstructFromAnother(_other as *const crate::mr::c_sharp::IterableK_Sentinel as *const crate::ffi::MR_CSharp_IterableK_Sentinel)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableK_Sentinel)}
    }

    /// Generated from method `MR::CSharp::IterableK::Sentinel::operator=`.
    ///
    /// Calls `MR_CSharp_IterableK_Sentinel_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IterableK_Sentinel) -> &mut crate::mr::c_sharp::IterableK_Sentinel
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_Sentinel_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableK_Sentinel, _other as *const crate::mr::c_sharp::IterableK_Sentinel as *const crate::ffi::MR_CSharp_IterableK_Sentinel)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IterableK_Sentinel)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::IterableK::Sentinel` named `ptr`.
    ///
    /// Calls `MR_CSharp_IterableK_Sentinel_Get_ptr()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn ptr(&self) -> *const *mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_Sentinel_Get_ptr(self as *const Self as *const crate::ffi::MR_CSharp_IterableK_Sentinel)};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableK::Sentinel` named `ptr`.
    ///
    /// Calls `MR_CSharp_IterableK_Sentinel_GetMutable_ptr()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn ptr_mut(&mut self) -> *mut *mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_Sentinel_GetMutable_ptr(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableK_Sentinel)};
        __ret
    }

    /// Modifies a member variable of class `MR::CSharp::IterableK::Sentinel` named `ptr`.
    ///
    /// Calls `MR_CSharp_IterableK_Sentinel_Set_ptr()`.
    /// The reference to the parameter `value` might be preserved in this object in element `ptr`.
    pub fn set_ptr(&mut self, value: Option<&mut i32>)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableK_Sentinel_Set_ptr(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableK_Sentinel, value.map_or(core::ptr::null_mut(), |r| r as *mut i32 as *mut i32))};
        __ret
    }

}

unsafe impl crate::CppCopy for IterableK_Sentinel
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Templated free functions.
/// Generated from class `MR::CSharp::IterableL<int32_t>`.
///
/// Generated from class `MR::CSharp::IterableL<int32_t>`. Heap-allocated instances are held in `Owned<IterableL_int32_t>`.
#[repr(transparent)]
pub struct IterableL_int32_t(crate::ffi::MR_CSharp_IterableL_int32_t);

unsafe impl crate::CppClass for IterableL_int32_t
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_IterableL_int32_t_Destroy(ptr as *const crate::ffi::MR_CSharp_IterableL_int32_t)}
}

impl IterableL_int32_t
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_IterableL_int32_t_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::IterableL_int32_t>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableL_int32_t_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableL_int32_t)}
    }

    /// Generated from constructor `MR::CSharp::IterableL<int32_t>::IterableL`.
    ///
    /// Calls `MR_CSharp_IterableL_int32_t_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::IterableL_int32_t) -> crate::Owned<crate::mr::c_sharp::IterableL_int32_t>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableL_int32_t_ConstructFromAnother(_other as *const crate::mr::c_sharp::IterableL_int32_t as *const crate::ffi::MR_CSharp_IterableL_int32_t)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::IterableL_int32_t)}
    }

    /// Generated from method `MR::CSharp::IterableL<int32_t>::operator=`.
    ///
    /// Calls `MR_CSharp_IterableL_int32_t_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::IterableL_int32_t) -> &mut crate::mr::c_sharp::IterableL_int32_t
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableL_int32_t_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableL_int32_t, _other as *const crate::mr::c_sharp::IterableL_int32_t as *const crate::ffi::MR_CSharp_IterableL_int32_t)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::IterableL_int32_t)}
    }

    /// Generated from method `MR::CSharp::IterableL<int32_t>::begin`.
    ///
    /// Calls `MR_CSharp_IterableL_int32_t_begin()`.
    /// The reference to this object might be preserved in the return value.
    pub fn begin<'a>(&'a self) -> Option<&'a i32>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableL_int32_t_begin(self as *const Self as *const crate::ffi::MR_CSharp_IterableL_int32_t)};
        unsafe {(__ret as *const i32).as_ref()}
    }

    /// Generated from method `MR::CSharp::IterableL<int32_t>::end`.
    ///
    /// Calls `MR_CSharp_IterableL_int32_t_end()`.
    /// The reference to this object might be preserved in the return value.
    pub fn end<'a>(&'a self) -> Option<&'a i32>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableL_int32_t_end(self as *const Self as *const crate::ffi::MR_CSharp_IterableL_int32_t)};
        unsafe {(__ret as *const i32).as_ref()}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::IterableL<int32_t>` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableL_int32_t_Get_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableL_int32_t_Get_arr(self as *const Self as *const crate::ffi::MR_CSharp_IterableL_int32_t)};
        unsafe {&*(__ret as *const i32)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableL<int32_t>` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_CSharp_IterableL_int32_t_GetMutable_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr_mut<'a>(&'a mut self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableL_int32_t_GetMutable_arr(self as *mut Self as *mut crate::ffi::MR_CSharp_IterableL_int32_t)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// Returns the size of the array member of class `MR::CSharp::IterableL<int32_t>` named `arr`. The size is `3`.
    ///
    /// Calls `MR_CSharp_IterableL_int32_t_GetSize_arr()`.
    pub fn arr_size() -> usize
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_IterableL_int32_t_GetSize_arr()};
        __ret
    }

}

unsafe impl crate::CppCopy for IterableL_int32_t
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Keep-alive sorcery:
/// Generated from class `MR::CSharp::LifetimesA`.
///
/// Generated from class `MR::CSharp::LifetimesA`. Heap-allocated instances are held in `Owned<LifetimesA>`.
#[repr(transparent)]
pub struct LifetimesA(crate::ffi::MR_CSharp_LifetimesA);

unsafe impl crate::CppClass for LifetimesA
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_LifetimesA_Destroy(ptr as *const crate::ffi::MR_CSharp_LifetimesA)}
}

impl LifetimesA
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_LifetimesA_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::LifetimesA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesA_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::LifetimesA)}
    }

    /// Constructs `MR::CSharp::LifetimesA` elementwise.
    ///
    /// Calls `MR_CSharp_LifetimesA_ConstructFrom()`.
    /// The reference to the parameter `x` might be preserved in the constructed object.
    pub fn construct_from(x: i32) -> crate::Owned<crate::mr::c_sharp::LifetimesA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesA_ConstructFrom(x)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::LifetimesA)}
    }

    /// Generated from constructor `MR::CSharp::LifetimesA::LifetimesA`.
    ///
    /// Calls `MR_CSharp_LifetimesA_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::LifetimesA) -> crate::Owned<crate::mr::c_sharp::LifetimesA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesA_ConstructFromAnother(_other as *const crate::mr::c_sharp::LifetimesA as *const crate::ffi::MR_CSharp_LifetimesA)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::LifetimesA)}
    }

    /// Generated from method `MR::CSharp::LifetimesA::operator=`.
    ///
    /// Calls `MR_CSharp_LifetimesA_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::LifetimesA) -> &mut crate::mr::c_sharp::LifetimesA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesA_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesA, _other as *const crate::mr::c_sharp::LifetimesA as *const crate::ffi::MR_CSharp_LifetimesA)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::LifetimesA)}
    }

    /// Some degenerate cases that have to be ignored in C#, because we don't support the lifetime operations for those types.
    /// Generated from method `MR::CSharp::LifetimesA::foo`.
    ///
    /// Calls `MR_CSharp_LifetimesA_foo()`.
    /// The reference to this object might be preserved in the return value.
    pub fn foo<'a>(&'a mut self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesA_foo(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesA)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// Generated from method `MR::CSharp::LifetimesA::bar`.
    ///
    /// Calls `MR_CSharp_LifetimesA_bar()`.
    /// The reference to the parameter `ref` might be preserved in this object.
    pub fn bar(&mut self, r#ref: &mut i32)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesA_bar(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesA, r#ref as *mut i32 as *mut i32)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::LifetimesA` named `x`.
    ///
    /// Calls `MR_CSharp_LifetimesA_Get_x()`.
    /// The reference to this object might be preserved as the return value.
    pub fn x<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesA_Get_x(self as *const Self as *const crate::ffi::MR_CSharp_LifetimesA)};
        unsafe {&*(__ret as *const i32)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::LifetimesA` named `x`.
    ///
    /// Calls `MR_CSharp_LifetimesA_GetMutable_x()`.
    /// The reference to this object might be preserved as the return value.
    pub fn x_mut<'a>(&'a mut self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesA_GetMutable_x(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesA)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// Modifies a member variable of class `MR::CSharp::LifetimesA` named `x`.
    ///
    /// Calls `MR_CSharp_LifetimesA_Set_x()`.
    /// The reference to the parameter `value` might be preserved in this object in element `x`.
    pub fn set_x(&mut self, value: i32)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesA_Set_x(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesA, value)};
        __ret
    }

}

unsafe impl crate::CppCopy for LifetimesA
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::LifetimesB`.
///
/// Generated from class `MR::CSharp::LifetimesB`. Heap-allocated instances are held in `Owned<LifetimesB>`.
#[repr(transparent)]
pub struct LifetimesB(crate::ffi::MR_CSharp_LifetimesB);

unsafe impl crate::CppClass for LifetimesB
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_LifetimesB_Destroy(ptr as *const crate::ffi::MR_CSharp_LifetimesB)}
}

impl LifetimesB
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_LifetimesB_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::LifetimesB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesB_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::LifetimesB)}
    }

    /// Constructs `MR::CSharp::LifetimesB` elementwise.
    ///
    /// Calls `MR_CSharp_LifetimesB_ConstructFrom()`.
    /// The reference to the parameter `a` might be preserved in the constructed object.
    pub fn construct_from(a: &crate::mr::c_sharp::LifetimesA) -> crate::Owned<crate::mr::c_sharp::LifetimesB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesB_ConstructFrom(a as *const crate::mr::c_sharp::LifetimesA as *const crate::ffi::MR_CSharp_LifetimesA)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::LifetimesB)}
    }

    /// Generated from constructor `MR::CSharp::LifetimesB::LifetimesB`.
    ///
    /// Calls `MR_CSharp_LifetimesB_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::LifetimesB) -> crate::Owned<crate::mr::c_sharp::LifetimesB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesB_ConstructFromAnother(_other as *const crate::mr::c_sharp::LifetimesB as *const crate::ffi::MR_CSharp_LifetimesB)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::LifetimesB)}
    }

    /// Generated from method `MR::CSharp::LifetimesB::operator=`.
    ///
    /// Calls `MR_CSharp_LifetimesB_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::LifetimesB) -> &mut crate::mr::c_sharp::LifetimesB
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesB_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesB, _other as *const crate::mr::c_sharp::LifetimesB as *const crate::ffi::MR_CSharp_LifetimesB)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::LifetimesB)}
    }

    /// `--infer-lifetime-iterators` should act on those:
    /// Generated from method `MR::CSharp::LifetimesB::begin`.
    ///
    /// Calls `MR_CSharp_LifetimesB_begin()`.
    /// The reference to this object might be preserved in the return value.
    pub fn begin<'a>(&'a mut self) -> Option<&'a mut crate::mr::c_sharp::LifetimesA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesB_begin(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesB)};
        unsafe {(__ret as *mut crate::mr::c_sharp::LifetimesA).as_mut()}
    }

    /// Generated from method `MR::CSharp::LifetimesB::end`.
    ///
    /// Calls `MR_CSharp_LifetimesB_end()`.
    /// The reference to this object might be preserved in the return value.
    pub fn end<'a>(&'a mut self) -> Option<&'a mut crate::mr::c_sharp::LifetimesA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesB_end(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesB)};
        unsafe {(__ret as *mut crate::mr::c_sharp::LifetimesA).as_mut()}
    }

    /// Generated from method `MR::CSharp::LifetimesB::operator*`.
    ///
    /// Calls `MR_C_deref_MR_CSharp_LifetimesB_ref()`.
    /// The reference to this object might be preserved in the return value.
    pub fn op_deref_ref<'a>(&'a mut self) -> &'a mut crate::mr::c_sharp::LifetimesA
    {
        let __ret = unsafe {crate::ffi::MR_C_deref_MR_CSharp_LifetimesB_ref(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesB)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::LifetimesA)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::LifetimesB` named `a`.
    ///
    /// Calls `MR_CSharp_LifetimesB_Get_a()`.
    /// The reference to this object might be preserved as the return value.
    pub fn a<'a>(&'a self) -> &'a crate::mr::c_sharp::LifetimesA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesB_Get_a(self as *const Self as *const crate::ffi::MR_CSharp_LifetimesB)};
        unsafe {&*(__ret as *const crate::mr::c_sharp::LifetimesA)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::LifetimesB` named `a`.
    ///
    /// Calls `MR_CSharp_LifetimesB_GetMutable_a()`.
    /// The reference to this object might be preserved as the return value.
    pub fn a_mut<'a>(&'a mut self) -> &'a mut crate::mr::c_sharp::LifetimesA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesB_GetMutable_a(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesB)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::LifetimesA)}
    }

    /// Modifies a member variable of class `MR::CSharp::LifetimesB` named `a`.
    ///
    /// Calls `MR_CSharp_LifetimesB_Set_a()`.
    /// The reference to the parameter `value` might be preserved in this object in element `a`.
    pub fn set_a(&mut self, value: &crate::mr::c_sharp::LifetimesA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesB_Set_a(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesB, value as *const crate::mr::c_sharp::LifetimesA as *const crate::ffi::MR_CSharp_LifetimesA)};
        __ret
    }

}

unsafe impl crate::CppCopy for LifetimesB
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::LifetimesC`.
///
/// Generated from class `MR::CSharp::LifetimesC`. Heap-allocated instances are held in `Owned<LifetimesC>`.
#[repr(transparent)]
pub struct LifetimesC(crate::ffi::MR_CSharp_LifetimesC);

unsafe impl crate::CppClass for LifetimesC
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_LifetimesC_Destroy(ptr as *const crate::ffi::MR_CSharp_LifetimesC)}
}

impl LifetimesC
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_LifetimesC_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::LifetimesC>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesC_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::LifetimesC)}
    }

    /// Constructs `MR::CSharp::LifetimesC` elementwise.
    ///
    /// Calls `MR_CSharp_LifetimesC_ConstructFrom()`.
    /// The reference to the parameter `a` might be preserved in the constructed object.
    pub fn construct_from(a: &crate::mr::c_sharp::LifetimesA) -> crate::Owned<crate::mr::c_sharp::LifetimesC>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesC_ConstructFrom(a as *const crate::mr::c_sharp::LifetimesA as *const crate::ffi::MR_CSharp_LifetimesA)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::LifetimesC)}
    }

    /// Generated from constructor `MR::CSharp::LifetimesC::LifetimesC`.
    ///
    /// Calls `MR_CSharp_LifetimesC_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::LifetimesC) -> crate::Owned<crate::mr::c_sharp::LifetimesC>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesC_ConstructFromAnother(_other as *const crate::mr::c_sharp::LifetimesC as *const crate::ffi::MR_CSharp_LifetimesC)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::LifetimesC)}
    }

    /// Generated from method `MR::CSharp::LifetimesC::operator=`.
    ///
    /// Calls `MR_CSharp_LifetimesC_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::LifetimesC) -> &mut crate::mr::c_sharp::LifetimesC
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesC_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesC, _other as *const crate::mr::c_sharp::LifetimesC as *const crate::ffi::MR_CSharp_LifetimesC)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::LifetimesC)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::LifetimesC` named `a`.
    ///
    /// Calls `MR_CSharp_LifetimesC_Get_a()`.
    /// The reference to this object might be preserved as the return value.
    pub fn a<'a>(&'a self) -> &'a crate::mr::c_sharp::LifetimesA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesC_Get_a(self as *const Self as *const crate::ffi::MR_CSharp_LifetimesC)};
        unsafe {&*(__ret as *const crate::mr::c_sharp::LifetimesA)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::LifetimesC` named `a`.
    ///
    /// Calls `MR_CSharp_LifetimesC_GetMutable_a()`.
    /// The reference to this object might be preserved as the return value.
    pub fn a_mut<'a>(&'a mut self) -> &'a mut crate::mr::c_sharp::LifetimesA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesC_GetMutable_a(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesC)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::LifetimesA)}
    }

    /// Modifies a member variable of class `MR::CSharp::LifetimesC` named `a`.
    ///
    /// Calls `MR_CSharp_LifetimesC_Set_a()`.
    /// The reference to the parameter `value` might be preserved in this object in element `a`.
    pub fn set_a(&mut self, value: &crate::mr::c_sharp::LifetimesA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesC_Set_a(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesC, value as *const crate::mr::c_sharp::LifetimesA as *const crate::ffi::MR_CSharp_LifetimesA)};
        __ret
    }

}

unsafe impl crate::CppCopy for LifetimesC
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::LifetimesD`.
///
/// Generated from class `MR::CSharp::LifetimesD`. Heap-allocated instances are held in `Owned<LifetimesD>`.
#[repr(transparent)]
pub struct LifetimesD(crate::ffi::MR_CSharp_LifetimesD);

unsafe impl crate::CppClass for LifetimesD
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_LifetimesD_Destroy(ptr as *const crate::ffi::MR_CSharp_LifetimesD)}
}

impl LifetimesD
{
    /// Generated from constructor `MR::CSharp::LifetimesD::LifetimesD`.
    ///
    /// Calls `MR_CSharp_LifetimesD_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::LifetimesD) -> crate::Owned<crate::mr::c_sharp::LifetimesD>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesD_ConstructFromAnother(_other as *const crate::mr::c_sharp::LifetimesD as *const crate::ffi::MR_CSharp_LifetimesD)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::LifetimesD)}
    }

    /// Store param references in this. The two annotation styles are equivalent for constructors.
    /// Generated from constructor `MR::CSharp::LifetimesD::LifetimesD`.
    ///
    /// Calls `MR_CSharp_LifetimesD_Construct_2()`.
    /// The reference to the parameter `ref` might be preserved in the constructed object.
    /// The reference to the parameter `other_ref` might be preserved in the constructed object.
    pub fn construct_2(r#ref: &mut crate::mr::c_sharp::LifetimesA, other_ref: &mut crate::mr::c_sharp::LifetimesB) -> crate::Owned<crate::mr::c_sharp::LifetimesD>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesD_Construct_2(r#ref as *mut crate::mr::c_sharp::LifetimesA as *mut crate::ffi::MR_CSharp_LifetimesA, other_ref as *mut crate::mr::c_sharp::LifetimesB as *mut crate::ffi::MR_CSharp_LifetimesB)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::LifetimesD)}
    }

    /// `--infer-lifetime-constructors` should act on this.
    /// Generated from constructor `MR::CSharp::LifetimesD::LifetimesD`.
    ///
    /// Calls `MR_CSharp_LifetimesD_Construct_1_MR_CSharp_LifetimesA()`.
    pub fn construct_1_mr_c_sharp_lifetimes_a(r#ref: &mut crate::mr::c_sharp::LifetimesA) -> crate::Owned<crate::mr::c_sharp::LifetimesD>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesD_Construct_1_MR_CSharp_LifetimesA(r#ref as *mut crate::mr::c_sharp::LifetimesA as *mut crate::ffi::MR_CSharp_LifetimesA)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::LifetimesD)}
    }

    /// Store reference to this in param.
    /// `--infer-lifetime-constructors` skips this, because we already have custom attributes.
    /// Generated from constructor `MR::CSharp::LifetimesD::LifetimesD`.
    ///
    /// Calls `MR_CSharp_LifetimesD_Construct_1_MR_CSharp_LifetimesB()`.
    /// The reference to the constructed object might be preserved in the parameter `ref`.
    pub fn construct_1_mr_c_sharp_lifetimes_b(r#ref: &mut crate::mr::c_sharp::LifetimesB) -> crate::Owned<crate::mr::c_sharp::LifetimesD>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesD_Construct_1_MR_CSharp_LifetimesB(r#ref as *mut crate::mr::c_sharp::LifetimesB as *mut crate::ffi::MR_CSharp_LifetimesB)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::LifetimesD)}
    }

    /// Generated from method `MR::CSharp::LifetimesD::operator=`.
    ///
    /// Calls `MR_CSharp_LifetimesD_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::LifetimesD) -> &mut crate::mr::c_sharp::LifetimesD
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesD_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesD, _other as *const crate::mr::c_sharp::LifetimesD as *const crate::ffi::MR_CSharp_LifetimesD)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::LifetimesD)}
    }

    /// Generated from method `MR::CSharp::LifetimesD::get`.
    ///
    /// Calls `MR_CSharp_LifetimesD_get()`.
    /// The reference to this object might be preserved in the return value.
    pub fn get<'a>(&'a mut self) -> &'a mut crate::mr::c_sharp::LifetimesA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesD_get(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesD)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::LifetimesA)}
    }

    /// Generated from method `MR::CSharp::LifetimesD::return_ref`.
    ///
    /// Calls `MR_CSharp_LifetimesD_return_ref()`.
    /// The reference to the parameter `ref` might be preserved in the return value.
    pub fn return_ref<'a>(&mut self, r#ref: &'a mut crate::mr::c_sharp::LifetimesA) -> &'a mut crate::mr::c_sharp::LifetimesA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesD_return_ref(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesD, r#ref as *mut crate::mr::c_sharp::LifetimesA as *mut crate::ffi::MR_CSharp_LifetimesA)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::LifetimesA)}
    }

    /// Generated from method `MR::CSharp::LifetimesD::return_ref_static`.
    ///
    /// Calls `MR_CSharp_LifetimesD_return_ref_static()`.
    /// The reference to the parameter `ref` might be preserved in the return value.
    pub fn return_ref_static<'a>(r#ref: &'a mut crate::mr::c_sharp::LifetimesA) -> &'a mut crate::mr::c_sharp::LifetimesA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesD_return_ref_static(r#ref as *mut crate::mr::c_sharp::LifetimesA as *mut crate::ffi::MR_CSharp_LifetimesA)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::LifetimesA)}
    }

    /// Generated from method `MR::CSharp::LifetimesD::store_ref_in_this`.
    ///
    /// Calls `MR_CSharp_LifetimesD_store_ref_in_this()`.
    /// The reference to the parameter `ref` might be preserved in this object.
    pub fn store_ref_in_this(&mut self, r#ref: &mut crate::mr::c_sharp::LifetimesA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesD_store_ref_in_this(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesD, r#ref as *mut crate::mr::c_sharp::LifetimesA as *mut crate::ffi::MR_CSharp_LifetimesA)};
        __ret
    }

    /// Generated from method `MR::CSharp::LifetimesD::store_ref_in_param`.
    ///
    /// Calls `MR_CSharp_LifetimesD_store_ref_in_param()`.
    /// The reference to the parameter `ref` might be preserved in the parameter `other_ref`.
    pub fn store_ref_in_param(&mut self, r#ref: &mut crate::mr::c_sharp::LifetimesA, other_ref: &mut crate::mr::c_sharp::LifetimesB)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesD_store_ref_in_param(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesD, r#ref as *mut crate::mr::c_sharp::LifetimesA as *mut crate::ffi::MR_CSharp_LifetimesA, other_ref as *mut crate::mr::c_sharp::LifetimesB as *mut crate::ffi::MR_CSharp_LifetimesB)};
        __ret
    }

    /// Generated from method `MR::CSharp::LifetimesD::store_this_in_param`.
    ///
    /// Calls `MR_CSharp_LifetimesD_store_this_in_param()`.
    /// The reference to this object might be preserved in the parameter `ref`.
    pub fn store_this_in_param(&mut self, r#ref: &mut crate::mr::c_sharp::LifetimesA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesD_store_this_in_param(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesD, r#ref as *mut crate::mr::c_sharp::LifetimesA as *mut crate::ffi::MR_CSharp_LifetimesA)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::LifetimesD` named `a`.
    ///
    /// Calls `MR_CSharp_LifetimesD_Get_a()`.
    /// The reference to this object might be preserved as the return value.
    pub fn a<'a>(&'a self) -> &'a crate::mr::c_sharp::LifetimesA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesD_Get_a(self as *const Self as *const crate::ffi::MR_CSharp_LifetimesD)};
        unsafe {&*(__ret as *const crate::mr::c_sharp::LifetimesA)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::LifetimesD` named `a`.
    ///
    /// Calls `MR_CSharp_LifetimesD_GetMutable_a()`.
    /// The reference to this object might be preserved as the return value.
    pub fn a_mut<'a>(&'a mut self) -> &'a mut crate::mr::c_sharp::LifetimesA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesD_GetMutable_a(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesD)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::LifetimesA)}
    }

    /// Modifies a member variable of class `MR::CSharp::LifetimesD` named `a`.
    ///
    /// Calls `MR_CSharp_LifetimesD_Set_a()`.
    /// The reference to the parameter `value` might be preserved in this object in element `a`.
    pub fn set_a(&mut self, value: &crate::mr::c_sharp::LifetimesA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesD_Set_a(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesD, value as *const crate::mr::c_sharp::LifetimesA as *const crate::ffi::MR_CSharp_LifetimesA)};
        __ret
    }

}

unsafe impl crate::CppCopy for LifetimesD
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Nested attributes.
/// Generated from class `MR::CSharp::LifetimesE`.
///
/// Generated from class `MR::CSharp::LifetimesE`. Heap-allocated instances are held in `Owned<LifetimesE>`.
#[repr(transparent)]
pub struct LifetimesE(crate::ffi::MR_CSharp_LifetimesE);

unsafe impl crate::CppClass for LifetimesE
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_LifetimesE_Destroy(ptr as *const crate::ffi::MR_CSharp_LifetimesE)}
}

impl LifetimesE
{
    /// Generated from constructor `MR::CSharp::LifetimesE::LifetimesE`.
    ///
    /// Calls `MR_CSharp_LifetimesE_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::LifetimesE) -> crate::Owned<crate::mr::c_sharp::LifetimesE>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesE_ConstructFromAnother(_other as *const crate::mr::c_sharp::LifetimesE as *const crate::ffi::MR_CSharp_LifetimesE)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::LifetimesE)}
    }

    /// Generated from constructor `MR::CSharp::LifetimesE::LifetimesE`.
    ///
    /// Calls `MR_CSharp_LifetimesE_Construct()`.
    /// The reference to things referred to by the constructed object (if any) might be preserved in the parameter `ref`.
    pub fn construct(r#ref: &mut crate::mr::c_sharp::LifetimesB) -> crate::Owned<crate::mr::c_sharp::LifetimesE>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesE_Construct(r#ref as *mut crate::mr::c_sharp::LifetimesB as *mut crate::ffi::MR_CSharp_LifetimesB)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::LifetimesE)}
    }

    /// Generated from method `MR::CSharp::LifetimesE::operator=`.
    ///
    /// Calls `MR_CSharp_LifetimesE_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::LifetimesE) -> &mut crate::mr::c_sharp::LifetimesE
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesE_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesE, _other as *const crate::mr::c_sharp::LifetimesE as *const crate::ffi::MR_CSharp_LifetimesE)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::LifetimesE)}
    }

    /// Generated from method `MR::CSharp::LifetimesE::get`.
    ///
    /// Calls `MR_CSharp_LifetimesE_get()`.
    /// The reference to things referred to by this object (if any) might be preserved in the return value.
    pub fn get<'a>(&'a mut self) -> &'a mut crate::mr::c_sharp::LifetimesA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesE_get(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesE)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::LifetimesA)}
    }

    /// Generated from method `MR::CSharp::LifetimesE::return_ref`.
    ///
    /// Calls `MR_CSharp_LifetimesE_return_ref()`.
    /// The reference to things referred to by the parameter `ref` (if any) might be preserved in the return value.
    pub fn return_ref<'a>(&mut self, r#ref: &'a mut crate::mr::c_sharp::LifetimesA) -> &'a mut crate::mr::c_sharp::LifetimesA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesE_return_ref(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesE, r#ref as *mut crate::mr::c_sharp::LifetimesA as *mut crate::ffi::MR_CSharp_LifetimesA)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::LifetimesA)}
    }

    /// Generated from method `MR::CSharp::LifetimesE::store_ref_in_this`.
    ///
    /// Calls `MR_CSharp_LifetimesE_store_ref_in_this()`.
    /// The reference to things referred to by the parameter `ref` (if any) might be preserved in this object.
    pub fn store_ref_in_this(&mut self, r#ref: &mut crate::mr::c_sharp::LifetimesA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesE_store_ref_in_this(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesE, r#ref as *mut crate::mr::c_sharp::LifetimesA as *mut crate::ffi::MR_CSharp_LifetimesA)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::LifetimesE` named `a`.
    ///
    /// Calls `MR_CSharp_LifetimesE_Get_a()`.
    /// The reference to this object might be preserved as the return value.
    pub fn a<'a>(&'a self) -> &'a crate::mr::c_sharp::LifetimesA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesE_Get_a(self as *const Self as *const crate::ffi::MR_CSharp_LifetimesE)};
        unsafe {&*(__ret as *const crate::mr::c_sharp::LifetimesA)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::LifetimesE` named `a`.
    ///
    /// Calls `MR_CSharp_LifetimesE_GetMutable_a()`.
    /// The reference to this object might be preserved as the return value.
    pub fn a_mut<'a>(&'a mut self) -> &'a mut crate::mr::c_sharp::LifetimesA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesE_GetMutable_a(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesE)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::LifetimesA)}
    }

    /// Modifies a member variable of class `MR::CSharp::LifetimesE` named `a`.
    ///
    /// Calls `MR_CSharp_LifetimesE_Set_a()`.
    /// The reference to the parameter `value` might be preserved in this object in element `a`.
    pub fn set_a(&mut self, value: &crate::mr::c_sharp::LifetimesA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_LifetimesE_Set_a(self as *mut Self as *mut crate::ffi::MR_CSharp_LifetimesE, value as *const crate::mr::c_sharp::LifetimesA as *const crate::ffi::MR_CSharp_LifetimesA)};
        __ret
    }

}

unsafe impl crate::CppCopy for LifetimesE
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Members having the same name as the exposed class, after rewriting.
/// Generated from class `MR::CSharp::NameConflicts`.
///
/// Generated from class `MR::CSharp::NameConflicts`. Heap-allocated instances are held in `Owned<NameConflicts>`.
#[repr(transparent)]
pub struct NameConflicts(crate::ffi::MR_CSharp_NameConflicts);

unsafe impl crate::CppClass for NameConflicts
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_NameConflicts_Destroy(ptr as *const crate::ffi::MR_CSharp_NameConflicts)}
}

impl NameConflicts
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_NameConflicts_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::NameConflicts>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NameConflicts_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::NameConflicts)}
    }

    /// Constructs `MR::CSharp::NameConflicts` elementwise.
    ///
    /// Calls `MR_CSharp_NameConflicts_ConstructFrom()`.
    /// The reference to the parameter `name_conflicts` might be preserved in the constructed object.
    /// The reference to the parameter `a` might be preserved in the constructed object.
    pub fn construct_from(name_conflicts: i32, a: &crate::mr::c_sharp::NameConflicts_A) -> crate::Owned<crate::mr::c_sharp::NameConflicts>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NameConflicts_ConstructFrom(name_conflicts, a as *const crate::mr::c_sharp::NameConflicts_A as *const crate::ffi::MR_CSharp_NameConflicts_A)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::NameConflicts)}
    }

    /// Generated from constructor `MR::CSharp::NameConflicts::NameConflicts`.
    ///
    /// Calls `MR_CSharp_NameConflicts_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::NameConflicts) -> crate::Owned<crate::mr::c_sharp::NameConflicts>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NameConflicts_ConstructFromAnother(_other as *const crate::mr::c_sharp::NameConflicts as *const crate::ffi::MR_CSharp_NameConflicts)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::NameConflicts)}
    }

    /// Generated from method `MR::CSharp::NameConflicts::operator=`.
    ///
    /// Calls `MR_CSharp_NameConflicts_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::NameConflicts) -> &mut crate::mr::c_sharp::NameConflicts
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NameConflicts_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_NameConflicts, _other as *const crate::mr::c_sharp::NameConflicts as *const crate::ffi::MR_CSharp_NameConflicts)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::NameConflicts)}
    }

    /// Generated from method `MR::CSharp::NameConflicts::name_Conflicts`.
    ///
    /// Calls `MR_CSharp_NameConflicts_name_Conflicts()`.
    pub fn name_conflicts(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NameConflicts_name_Conflicts(self as *mut Self as *mut crate::ffi::MR_CSharp_NameConflicts)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::NameConflicts` named `name_conflicts`.
    ///
    /// Calls `MR_CSharp_NameConflicts_Get_name_conflicts()`.
    /// The reference to this object might be preserved as the return value.
    pub fn name_conflicts_2<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NameConflicts_Get_name_conflicts(self as *const Self as *const crate::ffi::MR_CSharp_NameConflicts)};
        unsafe {&*(__ret as *const i32)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::NameConflicts` named `name_conflicts`.
    ///
    /// Calls `MR_CSharp_NameConflicts_GetMutable_name_conflicts()`.
    /// The reference to this object might be preserved as the return value.
    pub fn name_conflicts_mut<'a>(&'a mut self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NameConflicts_GetMutable_name_conflicts(self as *mut Self as *mut crate::ffi::MR_CSharp_NameConflicts)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// Modifies a member variable of class `MR::CSharp::NameConflicts` named `name_conflicts`.
    ///
    /// Calls `MR_CSharp_NameConflicts_Set_name_conflicts()`.
    /// The reference to the parameter `value` might be preserved in this object in element `name_conflicts`.
    pub fn set_name_conflicts(&mut self, value: i32)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NameConflicts_Set_name_conflicts(self as *mut Self as *mut crate::ffi::MR_CSharp_NameConflicts, value)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::NameConflicts` named `a`.
    ///
    /// Calls `MR_CSharp_NameConflicts_Get_a()`.
    /// The reference to this object might be preserved as the return value.
    pub fn a<'a>(&'a self) -> &'a crate::mr::c_sharp::NameConflicts_A
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NameConflicts_Get_a(self as *const Self as *const crate::ffi::MR_CSharp_NameConflicts)};
        unsafe {&*(__ret as *const crate::mr::c_sharp::NameConflicts_A)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::NameConflicts` named `a`.
    ///
    /// Calls `MR_CSharp_NameConflicts_GetMutable_a()`.
    /// The reference to this object might be preserved as the return value.
    pub fn a_mut<'a>(&'a mut self) -> &'a mut crate::mr::c_sharp::NameConflicts_A
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NameConflicts_GetMutable_a(self as *mut Self as *mut crate::ffi::MR_CSharp_NameConflicts)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::NameConflicts_A)}
    }

    /// Modifies a member variable of class `MR::CSharp::NameConflicts` named `a`.
    ///
    /// Calls `MR_CSharp_NameConflicts_Set_a()`.
    /// The reference to the parameter `value` might be preserved in this object in element `a`.
    pub fn set_a(&mut self, value: &crate::mr::c_sharp::NameConflicts_A)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NameConflicts_Set_a(self as *mut Self as *mut crate::ffi::MR_CSharp_NameConflicts, value as *const crate::mr::c_sharp::NameConflicts_A as *const crate::ffi::MR_CSharp_NameConflicts_A)};
        __ret
    }

}

unsafe impl crate::CppCopy for NameConflicts
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::NameConflicts::A`.
///
/// Generated from class `MR::CSharp::NameConflicts::A`. Heap-allocated instances are held in `Owned<NameConflicts_A>`.
#[repr(transparent)]
pub struct NameConflicts_A(crate::ffi::MR_CSharp_NameConflicts_A);

unsafe impl crate::CppClass for NameConflicts_A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_NameConflicts_A_Destroy(ptr as *const crate::ffi::MR_CSharp_NameConflicts_A)}
}

impl NameConflicts_A
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_NameConflicts_A_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::NameConflicts_A>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NameConflicts_A_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::NameConflicts_A)}
    }

    /// Generated from constructor `MR::CSharp::NameConflicts::A::A`.
    ///
    /// Calls `MR_CSharp_NameConflicts_A_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::NameConflicts_A) -> crate::Owned<crate::mr::c_sharp::NameConflicts_A>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NameConflicts_A_ConstructFromAnother(_other as *const crate::mr::c_sharp::NameConflicts_A as *const crate::ffi::MR_CSharp_NameConflicts_A)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::NameConflicts_A)}
    }

    /// Generated from method `MR::CSharp::NameConflicts::A::operator=`.
    ///
    /// Calls `MR_CSharp_NameConflicts_A_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::NameConflicts_A) -> &mut crate::mr::c_sharp::NameConflicts_A
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NameConflicts_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_NameConflicts_A, _other as *const crate::mr::c_sharp::NameConflicts_A as *const crate::ffi::MR_CSharp_NameConflicts_A)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::NameConflicts_A)}
    }

}

unsafe impl crate::CppCopy for NameConflicts_A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::NameConflictsExposed`.
///
/// Generated from struct `MR::CSharp::NameConflictsExposed`. The fields are accessed directly.
pub use crate::ffi::MR_CSharp_NameConflictsExposed as NameConflictsExposed;

impl NameConflictsExposed
{
    /// Generated from method `MR::CSharp::NameConflictsExposed::name_Conflicts_exposed`.
    ///
    /// Calls `MR_CSharp_NameConflictsExposed_name_Conflicts_exposed()`.
    pub fn name_conflicts_exposed(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NameConflictsExposed_name_Conflicts_exposed(self as *mut Self as *mut crate::ffi::MR_CSharp_NameConflictsExposed)};
        __ret
    }

}

/// Generated from class `MR::CSharp::NameConflictsExposed::A`.
///
/// Generated from struct `MR::CSharp::NameConflictsExposed::A`. The fields are accessed directly.
pub use crate::ffi::MR_CSharp_NameConflictsExposed_A as NameConflictsExposed_A;

/// The class is non-copyable, so operators with by-value parameters fail to inject.
/// Generated from class `MR::CSharp::NonCopyableClassByValueOps`.
///
/// Generated from class `MR::CSharp::NonCopyableClassByValueOps`. Heap-allocated instances are held in `Owned<NonCopyableClassByValueOps>`.
#[repr(transparent)]
pub struct NonCopyableClassByValueOps(crate::ffi::MR_CSharp_NonCopyableClassByValueOps);

unsafe impl crate::CppClass for NonCopyableClassByValueOps
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_NonCopyableClassByValueOps_Destroy(ptr as *const crate::ffi::MR_CSharp_NonCopyableClassByValueOps)}
}

impl NonCopyableClassByValueOps
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_NonCopyableClassByValueOps_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::NonCopyableClassByValueOps>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NonCopyableClassByValueOps_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::NonCopyableClassByValueOps)}
    }

    /// Generated from constructor `MR::CSharp::NonCopyableClassByValueOps::NonCopyableClassByValueOps`.
    ///
    /// Calls `MR_CSharp_NonCopyableClassByValueOps_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::NonCopyableClassByValueOps) -> crate::Owned<crate::mr::c_sharp::NonCopyableClassByValueOps>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NonCopyableClassByValueOps_ConstructFromAnother(_other as *const crate::mr::c_sharp::NonCopyableClassByValueOps as *const crate::ffi::MR_CSharp_NonCopyableClassByValueOps)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::NonCopyableClassByValueOps)}
    }

    /// Generated from method `MR::CSharp::NonCopyableClassByValueOps::operator=`.
    ///
    /// Calls `MR_CSharp_NonCopyableClassByValueOps_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    /// The reference to this object might be preserved in the return value.
    pub fn assign_from_another<'a>(&'a mut self, _other: &crate::mr::c_sharp::NonCopyableClassByValueOps) -> &'a mut crate::mr::c_sharp::NonCopyableClassByValueOps
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NonCopyableClassByValueOps_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_NonCopyableClassByValueOps, _other as *const crate::mr::c_sharp::NonCopyableClassByValueOps as *const crate::ffi::MR_CSharp_NonCopyableClassByValueOps)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::NonCopyableClassByValueOps)}
    }

}

unsafe impl crate::CppCopy for NonCopyableClassByValueOps
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::NonTrivial`.
///
/// Generated from class `MR::CSharp::NonTrivial`. Heap-allocated instances are held in `Owned<NonTrivial>`.
#[repr(transparent)]
pub struct NonTrivial(crate::ffi::MR_CSharp_NonTrivial);

unsafe impl crate::CppClass for NonTrivial
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_NonTrivial_Destroy(ptr as *const crate::ffi::MR_CSharp_NonTrivial)}
}

impl NonTrivial
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_NonTrivial_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::NonTrivial>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NonTrivial_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::NonTrivial)}
    }

    /// Generated from constructor `MR::CSharp::NonTrivial::NonTrivial`.
    ///
    /// Calls `MR_CSharp_NonTrivial_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::NonTrivial) -> crate::Owned<crate::mr::c_sharp::NonTrivial>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NonTrivial_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::NonTrivial as *mut crate::ffi::MR_CSharp_NonTrivial)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::NonTrivial)}
    }

    /// Generated from method `MR::CSharp::NonTrivial::operator=`.
    ///
    /// Calls `MR_CSharp_NonTrivial_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::NonTrivial) -> &mut crate::mr::c_sharp::NonTrivial
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NonTrivial_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_NonTrivial, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::NonTrivial as *mut crate::ffi::MR_CSharp_NonTrivial)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::NonTrivial)}
    }

}

unsafe impl crate::CppCopy for NonTrivial
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Check how non-trivial class types are passed by value into operators.
/// Generated from class `MR::CSharp::NonTrivialClassOps`.
///
/// Generated from class `MR::CSharp::NonTrivialClassOps`. Heap-allocated instances are held in `Owned<NonTrivialClassOps>`.
#[repr(transparent)]
pub struct NonTrivialClassOps(crate::ffi::MR_CSharp_NonTrivialClassOps);

unsafe impl crate::CppClass for NonTrivialClassOps
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_NonTrivialClassOps_Destroy(ptr as *const crate::ffi::MR_CSharp_NonTrivialClassOps)}
}

impl NonTrivialClassOps
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_NonTrivialClassOps_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::NonTrivialClassOps>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NonTrivialClassOps_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::NonTrivialClassOps)}
    }

    /// Generated from constructor `MR::CSharp::NonTrivialClassOps::NonTrivialClassOps`.
    ///
    /// Calls `MR_CSharp_NonTrivialClassOps_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::NonTrivialClassOps) -> crate::Owned<crate::mr::c_sharp::NonTrivialClassOps>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NonTrivialClassOps_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::NonTrivialClassOps as *mut crate::ffi::MR_CSharp_NonTrivialClassOps)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::NonTrivialClassOps)}
    }

    /// Generated from method `MR::CSharp::NonTrivialClassOps::operator=`.
    ///
    /// Calls `MR_CSharp_NonTrivialClassOps_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::NonTrivialClassOps) -> &mut crate::mr::c_sharp::NonTrivialClassOps
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NonTrivialClassOps_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_NonTrivialClassOps, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::NonTrivialClassOps as *mut crate::ffi::MR_CSharp_NonTrivialClassOps)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::NonTrivialClassOps)}
    }

    /// Generated from method `MR::CSharp::NonTrivialClassOps::operator+`.
    ///
    /// Calls `MR_C_add_MR_CSharp_NonTrivialClassOps_int32_t()`.
    pub fn op_add_int32_t(&mut self, _1: i32) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_add_MR_CSharp_NonTrivialClassOps_int32_t(self as *mut Self as *mut crate::ffi::MR_CSharp_NonTrivialClassOps, _1)};
        __ret
    }

}

unsafe impl crate::CppCopy for NonTrivialClassOps
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::NonTrivialDerived`.
///
/// Generated from class `MR::CSharp::NonTrivialDerived`. Heap-allocated instances are held in `Owned<NonTrivialDerived>`.
#[repr(transparent)]
pub struct NonTrivialDerived(crate::ffi::MR_CSharp_NonTrivialDerived);

unsafe impl crate::CppClass for NonTrivialDerived
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_NonTrivialDerived_Destroy(ptr as *const crate::ffi::MR_CSharp_NonTrivialDerived)}
}

impl NonTrivialDerived
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_NonTrivialDerived_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::NonTrivialDerived>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NonTrivialDerived_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::NonTrivialDerived)}
    }

    /// Generated from constructor `MR::CSharp::NonTrivialDerived::NonTrivialDerived`.
    ///
    /// Calls `MR_CSharp_NonTrivialDerived_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::NonTrivialDerived) -> crate::Owned<crate::mr::c_sharp::NonTrivialDerived>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NonTrivialDerived_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::NonTrivialDerived as *mut crate::ffi::MR_CSharp_NonTrivialDerived)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::NonTrivialDerived)}
    }

    /// Generated from method `MR::CSharp::NonTrivialDerived::operator=`.
    ///
    /// Calls `MR_CSharp_NonTrivialDerived_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::NonTrivialDerived) -> &mut crate::mr::c_sharp::NonTrivialDerived
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_NonTrivialDerived_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_NonTrivialDerived, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::NonTrivialDerived as *mut crate::ffi::MR_CSharp_NonTrivialDerived)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::NonTrivialDerived)}
    }

}

unsafe impl crate::CppCopy for NonTrivialDerived
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Nested classes.
/// Generated from class `MR::CSharp::Outer`.
///
/// Generated from class `MR::CSharp::Outer`. Heap-allocated instances are held in `Owned<Outer>`.
#[repr(transparent)]
pub struct Outer(crate::ffi::MR_CSharp_Outer);

unsafe impl crate::CppClass for Outer
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_Outer_Destroy(ptr as *const crate::ffi::MR_CSharp_Outer)}
}

impl Outer
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_Outer_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::Outer>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_Outer_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::Outer)}
    }

    /// Generated from constructor `MR::CSharp::Outer::Outer`.
    ///
    /// Calls `MR_CSharp_Outer_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::Outer) -> crate::Owned<crate::mr::c_sharp::Outer>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_Outer_ConstructFromAnother(_other as *const crate::mr::c_sharp::Outer as *const crate::ffi::MR_CSharp_Outer)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::Outer)}
    }

    /// Generated from method `MR::CSharp::Outer::operator=`.
    ///
    /// Calls `MR_CSharp_Outer_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::Outer) -> &mut crate::mr::c_sharp::Outer
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_Outer_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_Outer, _other as *const crate::mr::c_sharp::Outer as *const crate::ffi::MR_CSharp_Outer)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::Outer)}
    }

    /// Generated from method `MR::CSharp::Outer::foo`.
    ///
    /// Calls `MR_CSharp_Outer_foo()`.
    pub fn foo(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_Outer_foo(self as *mut Self as *mut crate::ffi::MR_CSharp_Outer)};
        __ret
    }

}

unsafe impl crate::CppCopy for Outer
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::Outer::Inner`.
///
/// Generated from class `MR::CSharp::Outer::Inner`. Heap-allocated instances are held in `Owned<Outer_Inner>`.
#[repr(transparent)]
pub struct Outer_Inner(crate::ffi::MR_CSharp_Outer_Inner);

unsafe impl crate::CppClass for Outer_Inner
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_Outer_Inner_Destroy(ptr as *const crate::ffi::MR_CSharp_Outer_Inner)}
}

impl Outer_Inner
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_Outer_Inner_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::Outer_Inner>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_Outer_Inner_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::Outer_Inner)}
    }

    /// Generated from constructor `MR::CSharp::Outer::Inner::Inner`.
    ///
    /// Calls `MR_CSharp_Outer_Inner_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::Outer_Inner) -> crate::Owned<crate::mr::c_sharp::Outer_Inner>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_Outer_Inner_ConstructFromAnother(_other as *const crate::mr::c_sharp::Outer_Inner as *const crate::ffi::MR_CSharp_Outer_Inner)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::Outer_Inner)}
    }

    /// Generated from method `MR::CSharp::Outer::Inner::operator=`.
    ///
    /// Calls `MR_CSharp_Outer_Inner_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::Outer_Inner) -> &mut crate::mr::c_sharp::Outer_Inner
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_Outer_Inner_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_Outer_Inner, _other as *const crate::mr::c_sharp::Outer_Inner as *const crate::ffi::MR_CSharp_Outer_Inner)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::Outer_Inner)}
    }

    /// Generated from method `MR::CSharp::Outer::Inner::bar`.
    ///
    /// Calls `MR_CSharp_Outer_Inner_bar()`.
    pub fn bar(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_Outer_Inner_bar(self as *mut Self as *mut crate::ffi::MR_CSharp_Outer_Inner)};
        __ret
    }

}

unsafe impl crate::CppCopy for Outer_Inner
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The happy path, the operator is const.
/// Generated from class `MR::CSharp::RelationalA`.
///
/// Generated from class `MR::CSharp::RelationalA`. Heap-allocated instances are held in `Owned<RelationalA>`.
#[repr(transparent)]
pub struct RelationalA(crate::ffi::MR_CSharp_RelationalA);

unsafe impl crate::CppClass for RelationalA
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_RelationalA_Destroy(ptr as *const crate::ffi::MR_CSharp_RelationalA)}
}

impl RelationalA
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_RelationalA_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::RelationalA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_RelationalA_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::RelationalA)}
    }

    /// Generated from constructor `MR::CSharp::RelationalA::RelationalA`.
    ///
    /// Calls `MR_CSharp_RelationalA_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::RelationalA) -> crate::Owned<crate::mr::c_sharp::RelationalA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_RelationalA_ConstructFromAnother(_other as *const crate::mr::c_sharp::RelationalA as *const crate::ffi::MR_CSharp_RelationalA)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::RelationalA)}
    }

    /// Generated from method `MR::CSharp::RelationalA::operator=`.
    ///
    /// Calls `MR_CSharp_RelationalA_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::RelationalA) -> &mut crate::mr::c_sharp::RelationalA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_RelationalA_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_RelationalA, _other as *const crate::mr::c_sharp::RelationalA as *const crate::ffi::MR_CSharp_RelationalA)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::RelationalA)}
    }

    /// Generated from method `MR::CSharp::RelationalA::operator<`.
    ///
    /// Calls `MR_C_less_MR_CSharp_RelationalA()`.
    pub fn op_less(&self, _1: &crate::mr::c_sharp::RelationalA) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_less_MR_CSharp_RelationalA(self as *const Self as *const crate::ffi::MR_CSharp_RelationalA, _1 as *const crate::mr::c_sharp::RelationalA as *const crate::ffi::MR_CSharp_RelationalA)};
        __ret
    }

    /// Generated from method `MR::CSharp::RelationalA::operator>`.
    ///
    /// Calls `MR_C_greater_MR_CSharp_RelationalA()`.
    pub fn op_greater(&self, _1: &crate::mr::c_sharp::RelationalA) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_greater_MR_CSharp_RelationalA(self as *const Self as *const crate::ffi::MR_CSharp_RelationalA, _1 as *const crate::mr::c_sharp::RelationalA as *const crate::ffi::MR_CSharp_RelationalA)};
        __ret
    }

    /// Generated from method `MR::CSharp::RelationalA::operator<=`.
    ///
    /// Calls `MR_C_less_equal_MR_CSharp_RelationalA()`.
    pub fn op_less_equal(&self, _1: &crate::mr::c_sharp::RelationalA) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_less_equal_MR_CSharp_RelationalA(self as *const Self as *const crate::ffi::MR_CSharp_RelationalA, _1 as *const crate::mr::c_sharp::RelationalA as *const crate::ffi::MR_CSharp_RelationalA)};
        __ret
    }

    /// Generated from method `MR::CSharp::RelationalA::operator>=`.
    ///
    /// Calls `MR_C_greater_equal_MR_CSharp_RelationalA()`.
    pub fn op_greater_equal(&self, _1: &crate::mr::c_sharp::RelationalA) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_greater_equal_MR_CSharp_RelationalA(self as *const Self as *const crate::ffi::MR_CSharp_RelationalA, _1 as *const crate::mr::c_sharp::RelationalA as *const crate::ffi::MR_CSharp_RelationalA)};
        __ret
    }

}

unsafe impl crate::CppCopy for RelationalA
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The happy path, the operator is non-const.
/// Generated from class `MR::CSharp::RelationalB`.
///
/// Generated from class `MR::CSharp::RelationalB`. Heap-allocated instances are held in `Owned<RelationalB>`.
#[repr(transparent)]
pub struct RelationalB(crate::ffi::MR_CSharp_RelationalB);

unsafe impl crate::CppClass for RelationalB
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_RelationalB_Destroy(ptr as *const crate::ffi::MR_CSharp_RelationalB)}
}

impl RelationalB
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_RelationalB_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::RelationalB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_RelationalB_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::RelationalB)}
    }

    /// Generated from constructor `MR::CSharp::RelationalB::RelationalB`.
    ///
    /// Calls `MR_CSharp_RelationalB_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::RelationalB) -> crate::Owned<crate::mr::c_sharp::RelationalB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_RelationalB_ConstructFromAnother(_other as *const crate::mr::c_sharp::RelationalB as *const crate::ffi::MR_CSharp_RelationalB)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::RelationalB)}
    }

    /// Generated from method `MR::CSharp::RelationalB::operator=`.
    ///
    /// Calls `MR_CSharp_RelationalB_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::RelationalB) -> &mut crate::mr::c_sharp::RelationalB
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_RelationalB_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_RelationalB, _other as *const crate::mr::c_sharp::RelationalB as *const crate::ffi::MR_CSharp_RelationalB)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::RelationalB)}
    }

    /// Generated from method `MR::CSharp::RelationalB::operator<`.
    ///
    /// Calls `MR_C_less_MR_CSharp_RelationalB()`.
    pub fn op_less(&mut self, _1: &mut crate::mr::c_sharp::RelationalB) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_less_MR_CSharp_RelationalB(self as *mut Self as *mut crate::ffi::MR_CSharp_RelationalB, _1 as *mut crate::mr::c_sharp::RelationalB as *mut crate::ffi::MR_CSharp_RelationalB)};
        __ret
    }

    /// Generated from method `MR::CSharp::RelationalB::operator>`.
    ///
    /// Calls `MR_C_greater_MR_CSharp_RelationalB()`.
    pub fn op_greater(&mut self, _1: &mut crate::mr::c_sharp::RelationalB) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_greater_MR_CSharp_RelationalB(self as *mut Self as *mut crate::ffi::MR_CSharp_RelationalB, _1 as *mut crate::mr::c_sharp::RelationalB as *mut crate::ffi::MR_CSharp_RelationalB)};
        __ret
    }

    /// Generated from method `MR::CSharp::RelationalB::operator<=`.
    ///
    /// Calls `MR_C_less_equal_MR_CSharp_RelationalB()`.
    pub fn op_less_equal(&mut self, _1: &mut crate::mr::c_sharp::RelationalB) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_less_equal_MR_CSharp_RelationalB(self as *mut Self as *mut crate::ffi::MR_CSharp_RelationalB, _1 as *mut crate::mr::c_sharp::RelationalB as *mut crate::ffi::MR_CSharp_RelationalB)};
        __ret
    }

    /// Generated from method `MR::CSharp::RelationalB::operator>=`.
    ///
    /// Calls `MR_C_greater_equal_MR_CSharp_RelationalB()`.
    pub fn op_greater_equal(&mut self, _1: &mut crate::mr::c_sharp::RelationalB) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_greater_equal_MR_CSharp_RelationalB(self as *mut Self as *mut crate::ffi::MR_CSharp_RelationalB, _1 as *mut crate::mr::c_sharp::RelationalB as *mut crate::ffi::MR_CSharp_RelationalB)};
        __ret
    }

}

unsafe impl crate::CppCopy for RelationalB
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The operators have mixed constness, which causes them to be demoted to functions.
/// Generated from class `MR::CSharp::RelationalC`.
///
/// Generated from class `MR::CSharp::RelationalC`. Heap-allocated instances are held in `Owned<RelationalC>`.
#[repr(transparent)]
pub struct RelationalC(crate::ffi::MR_CSharp_RelationalC);

unsafe impl crate::CppClass for RelationalC
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_RelationalC_Destroy(ptr as *const crate::ffi::MR_CSharp_RelationalC)}
}

impl RelationalC
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_RelationalC_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::RelationalC>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_RelationalC_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::RelationalC)}
    }

    /// Generated from constructor `MR::CSharp::RelationalC::RelationalC`.
    ///
    /// Calls `MR_CSharp_RelationalC_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::RelationalC) -> crate::Owned<crate::mr::c_sharp::RelationalC>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_RelationalC_ConstructFromAnother(_other as *const crate::mr::c_sharp::RelationalC as *const crate::ffi::MR_CSharp_RelationalC)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::RelationalC)}
    }

    /// Generated from method `MR::CSharp::RelationalC::operator=`.
    ///
    /// Calls `MR_CSharp_RelationalC_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::RelationalC) -> &mut crate::mr::c_sharp::RelationalC
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_RelationalC_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_RelationalC, _other as *const crate::mr::c_sharp::RelationalC as *const crate::ffi::MR_CSharp_RelationalC)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::RelationalC)}
    }

    /// Generated from method `MR::CSharp::RelationalC::operator<`.
    ///
    /// Calls `MR_C_less_MR_CSharp_RelationalC()`.
    pub fn op_less(&self, _1: &mut crate::mr::c_sharp::RelationalC) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_less_MR_CSharp_RelationalC(self as *const Self as *const crate::ffi::MR_CSharp_RelationalC, _1 as *mut crate::mr::c_sharp::RelationalC as *mut crate::ffi::MR_CSharp_RelationalC)};
        __ret
    }

    /// Generated from method `MR::CSharp::RelationalC::operator>`.
    ///
    /// Calls `MR_C_greater_MR_CSharp_RelationalC()`.
    pub fn op_greater(&self, _1: &mut crate::mr::c_sharp::RelationalC) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_greater_MR_CSharp_RelationalC(self as *const Self as *const crate::ffi::MR_CSharp_RelationalC, _1 as *mut crate::mr::c_sharp::RelationalC as *mut crate::ffi::MR_CSharp_RelationalC)};
        __ret
    }

    /// bool operator<=(RelationalC &) const {return false;} // Skip one operator to observe the function missing.
    /// Generated from method `MR::CSharp::RelationalC::operator>=`.
    ///
    /// Calls `MR_C_greater_equal_MR_CSharp_RelationalC()`.
    pub fn op_greater_equal(&self, _1: &mut crate::mr::c_sharp::RelationalC) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_greater_equal_MR_CSharp_RelationalC(self as *const Self as *const crate::ffi::MR_CSharp_RelationalC, _1 as *mut crate::mr::c_sharp::RelationalC as *mut crate::ffi::MR_CSharp_RelationalC)};
        __ret
    }

}

unsafe impl crate::CppCopy for RelationalC
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The operators have operands of different types, causing them to be demoted to functions.
/// Generated from class `MR::CSharp::RelationalD`.
///
/// Generated from class `MR::CSharp::RelationalD`. Heap-allocated instances are held in `Owned<RelationalD>`.
#[repr(transparent)]
pub struct RelationalD(crate::ffi::MR_CSharp_RelationalD);

unsafe impl crate::CppClass for RelationalD
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_RelationalD_Destroy(ptr as *const crate::ffi::MR_CSharp_RelationalD)}
}

impl RelationalD
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_RelationalD_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::RelationalD>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_RelationalD_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::RelationalD)}
    }

    /// Generated from constructor `MR::CSharp::RelationalD::RelationalD`.
    ///
    /// Calls `MR_CSharp_RelationalD_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::RelationalD) -> crate::Owned<crate::mr::c_sharp::RelationalD>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_RelationalD_ConstructFromAnother(_other as *const crate::mr::c_sharp::RelationalD as *const crate::ffi::MR_CSharp_RelationalD)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::RelationalD)}
    }

    /// Generated from method `MR::CSharp::RelationalD::operator=`.
    ///
    /// Calls `MR_CSharp_RelationalD_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::RelationalD) -> &mut crate::mr::c_sharp::RelationalD
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_RelationalD_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_RelationalD, _other as *const crate::mr::c_sharp::RelationalD as *const crate::ffi::MR_CSharp_RelationalD)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::RelationalD)}
    }

    /// Generated from method `MR::CSharp::RelationalD::operator<`.
    ///
    /// Calls `MR_C_less_MR_CSharp_RelationalD_MR_CSharp_RelationalC()`.
    pub fn op_less_mr_c_sharp_relational_c(&self, _1: &mut crate::mr::c_sharp::RelationalC) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_less_MR_CSharp_RelationalD_MR_CSharp_RelationalC(self as *const Self as *const crate::ffi::MR_CSharp_RelationalD, _1 as *mut crate::mr::c_sharp::RelationalC as *mut crate::ffi::MR_CSharp_RelationalC)};
        __ret
    }

    /// Generated from method `MR::CSharp::RelationalD::operator>`.
    ///
    /// Calls `MR_C_greater_MR_CSharp_RelationalD_MR_CSharp_RelationalC()`.
    pub fn op_greater_mr_c_sharp_relational_c(&self, _1: &mut crate::mr::c_sharp::RelationalC) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_greater_MR_CSharp_RelationalD_MR_CSharp_RelationalC(self as *const Self as *const crate::ffi::MR_CSharp_RelationalD, _1 as *mut crate::mr::c_sharp::RelationalC as *mut crate::ffi::MR_CSharp_RelationalC)};
        __ret
    }

    /// Generated from method `MR::CSharp::RelationalD::operator<=`.
    ///
    /// Calls `MR_C_less_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC()`.
    pub fn op_less_equal_mr_c_sharp_relational_c(&self, _1: &mut crate::mr::c_sharp::RelationalC) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_less_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC(self as *const Self as *const crate::ffi::MR_CSharp_RelationalD, _1 as *mut crate::mr::c_sharp::RelationalC as *mut crate::ffi::MR_CSharp_RelationalC)};
        __ret
    }

    /// Generated from method `MR::CSharp::RelationalD::operator>=`.
    ///
    /// Calls `MR_C_greater_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC()`.
    pub fn op_greater_equal_mr_c_sharp_relational_c(&self, _1: &mut crate::mr::c_sharp::RelationalC) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_greater_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC(self as *const Self as *const crate::ffi::MR_CSharp_RelationalD, _1 as *mut crate::mr::c_sharp::RelationalC as *mut crate::ffi::MR_CSharp_RelationalC)};
        __ret
    }

}

unsafe impl crate::CppCopy for RelationalD
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The operators have a weird return type.
/// Generated from class `MR::CSharp::RelationalE`.
///
/// Generated from class `MR::CSharp::RelationalE`. Heap-allocated instances are held in `Owned<RelationalE>`.
#[repr(transparent)]
pub struct RelationalE(crate::ffi::MR_CSharp_RelationalE);

unsafe impl crate::CppClass for RelationalE
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_RelationalE_Destroy(ptr as *const crate::ffi::MR_CSharp_RelationalE)}
}

impl RelationalE
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_RelationalE_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::RelationalE>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_RelationalE_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::RelationalE)}
    }

    /// Generated from constructor `MR::CSharp::RelationalE::RelationalE`.
    ///
    /// Calls `MR_CSharp_RelationalE_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::RelationalE) -> crate::Owned<crate::mr::c_sharp::RelationalE>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_RelationalE_ConstructFromAnother(_other as *const crate::mr::c_sharp::RelationalE as *const crate::ffi::MR_CSharp_RelationalE)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::RelationalE)}
    }

    /// Generated from method `MR::CSharp::RelationalE::operator=`.
    ///
    /// Calls `MR_CSharp_RelationalE_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::RelationalE) -> &mut crate::mr::c_sharp::RelationalE
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_RelationalE_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_RelationalE, _other as *const crate::mr::c_sharp::RelationalE as *const crate::ffi::MR_CSharp_RelationalE)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::RelationalE)}
    }

    /// Generated from method `MR::CSharp::RelationalE::operator<`.
    ///
    /// Calls `MR_C_less_MR_CSharp_RelationalE_MR_CSharp_RelationalC()`.
    pub fn op_less_mr_c_sharp_relational_c(&self, _1: &mut crate::mr::c_sharp::RelationalC) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_less_MR_CSharp_RelationalE_MR_CSharp_RelationalC(self as *const Self as *const crate::ffi::MR_CSharp_RelationalE, _1 as *mut crate::mr::c_sharp::RelationalC as *mut crate::ffi::MR_CSharp_RelationalC)};
        __ret
    }

    /// Generated from method `MR::CSharp::RelationalE::operator>`.
    ///
    /// Calls `MR_C_greater_MR_CSharp_RelationalE_MR_CSharp_RelationalC()`.
    pub fn op_greater_mr_c_sharp_relational_c(&self, _1: &mut crate::mr::c_sharp::RelationalC) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_greater_MR_CSharp_RelationalE_MR_CSharp_RelationalC(self as *const Self as *const crate::ffi::MR_CSharp_RelationalE, _1 as *mut crate::mr::c_sharp::RelationalC as *mut crate::ffi::MR_CSharp_RelationalC)};
        __ret
    }

    /// Generated from method `MR::CSharp::RelationalE::operator<=`.
    ///
    /// Calls `MR_C_less_equal_MR_CSharp_RelationalE_MR_CSharp_RelationalC()`.
    pub fn op_less_equal_mr_c_sharp_relational_c(&self, _1: &mut crate::mr::c_sharp::RelationalC) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_less_equal_MR_CSharp_RelationalE_MR_CSharp_RelationalC(self as *const Self as *const crate::ffi::MR_CSharp_RelationalE, _1 as *mut crate::mr::c_sharp::RelationalC as *mut crate::ffi::MR_CSharp_RelationalC)};
        __ret
    }

    /// Generated from method `MR::CSharp::RelationalE::operator>=`.
    ///
    /// Calls `MR_C_greater_equal_MR_CSharp_RelationalE_MR_CSharp_RelationalC()`.
    pub fn op_greater_equal_mr_c_sharp_relational_c(&self, _1: &mut crate::mr::c_sharp::RelationalC) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_greater_equal_MR_CSharp_RelationalE_MR_CSharp_RelationalC(self as *const Self as *const crate::ffi::MR_CSharp_RelationalE, _1 as *mut crate::mr::c_sharp::RelationalC as *mut crate::ffi::MR_CSharp_RelationalC)};
        __ret
    }

}

unsafe impl crate::CppCopy for RelationalE
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The operators return void.
/// Generated from class `MR::CSharp::RelationalF`.
///
/// Generated from class `MR::CSharp::RelationalF`. Heap-allocated instances are held in `Owned<RelationalF>`.
#[repr(transparent)]
pub struct RelationalF(crate::ffi::MR_CSharp_RelationalF);

unsafe impl crate::CppClass for RelationalF
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_RelationalF_Destroy(ptr as *const crate::ffi::MR_CSharp_RelationalF)}
}

impl RelationalF
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_RelationalF_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::RelationalF>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_RelationalF_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::RelationalF)}
    }

    /// Generated from constructor `MR::CSharp::RelationalF::RelationalF`.
    ///
    /// Calls `MR_CSharp_RelationalF_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::RelationalF) -> crate::Owned<crate::mr::c_sharp::RelationalF>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_RelationalF_ConstructFromAnother(_other as *const crate::mr::c_sharp::RelationalF as *const crate::ffi::MR_CSharp_RelationalF)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::RelationalF)}
    }

    /// Generated from method `MR::CSharp::RelationalF::operator=`.
    ///
    /// Calls `MR_CSharp_RelationalF_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::RelationalF) -> &mut crate::mr::c_sharp::RelationalF
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_RelationalF_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_RelationalF, _other as *const crate::mr::c_sharp::RelationalF as *const crate::ffi::MR_CSharp_RelationalF)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::RelationalF)}
    }

    /// Generated from method `MR::CSharp::RelationalF::operator<`.
    ///
    /// Calls `MR_C_less_MR_CSharp_RelationalF_MR_CSharp_RelationalC()`.
    pub fn op_less_mr_c_sharp_relational_c(&self, _1: &mut crate::mr::c_sharp::RelationalC)
    {
        let __ret = unsafe {crate::ffi::MR_C_less_MR_CSharp_RelationalF_MR_CSharp_RelationalC(self as *const Self as *const crate::ffi::MR_CSharp_RelationalF, _1 as *mut crate::mr::c_sharp::RelationalC as *mut crate::ffi::MR_CSharp_RelationalC)};
        __ret
    }

    /// Generated from method `MR::CSharp::RelationalF::operator>`.
    ///
    /// Calls `MR_C_greater_MR_CSharp_RelationalF_MR_CSharp_RelationalC()`.
    pub fn op_greater_mr_c_sharp_relational_c(&self, _1: &mut crate::mr::c_sharp::RelationalC)
    {
        let __ret = unsafe {crate::ffi::MR_C_greater_MR_CSharp_RelationalF_MR_CSharp_RelationalC(self as *const Self as *const crate::ffi::MR_CSharp_RelationalF, _1 as *mut crate::mr::c_sharp::RelationalC as *mut crate::ffi::MR_CSharp_RelationalC)};
        __ret
    }

    /// Generated from method `MR::CSharp::RelationalF::operator<=`.
    ///
    /// Calls `MR_C_less_equal_MR_CSharp_RelationalF_MR_CSharp_RelationalC()`.
    pub fn op_less_equal_mr_c_sharp_relational_c(&self, _1: &mut crate::mr::c_sharp::RelationalC)
    {
        let __ret = unsafe {crate::ffi::MR_C_less_equal_MR_CSharp_RelationalF_MR_CSharp_RelationalC(self as *const Self as *const crate::ffi::MR_CSharp_RelationalF, _1 as *mut crate::mr::c_sharp::RelationalC as *mut crate::ffi::MR_CSharp_RelationalC)};
        __ret
    }

    /// Generated from method `MR::CSharp::RelationalF::operator>=`.
    ///
    /// Calls `MR_C_greater_equal_MR_CSharp_RelationalF_MR_CSharp_RelationalC()`.
    pub fn op_greater_equal_mr_c_sharp_relational_c(&self, _1: &mut crate::mr::c_sharp::RelationalC)
    {
        let __ret = unsafe {crate::ffi::MR_C_greater_equal_MR_CSharp_RelationalF_MR_CSharp_RelationalC(self as *const Self as *const crate::ffi::MR_CSharp_RelationalF, _1 as *mut crate::mr::c_sharp::RelationalC as *mut crate::ffi::MR_CSharp_RelationalC)};
        __ret
    }

}

unsafe impl crate::CppCopy for RelationalF
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::SA`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::CSharp::SC`
///
/// Generated from class `MR::CSharp::SA`. Heap-allocated instances are held in `Owned<SA>`.
#[repr(transparent)]
pub struct SA(crate::ffi::MR_CSharp_SA);

unsafe impl crate::CppClass for SA
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_SA_Destroy(ptr as *const crate::ffi::MR_CSharp_SA)}
}

impl SA
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_SA_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::SA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SA_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::SA)}
    }

    /// Generated from constructor `MR::CSharp::SA::SA`.
    ///
    /// Calls `MR_CSharp_SA_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::SA) -> crate::Owned<crate::mr::c_sharp::SA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SA_ConstructFromAnother(_other as *const crate::mr::c_sharp::SA as *const crate::ffi::MR_CSharp_SA)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::SA)}
    }

    /// Generated from method `MR::CSharp::SA::operator=`.
    ///
    /// Calls `MR_CSharp_SA_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::SA) -> &mut crate::mr::c_sharp::SA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SA_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_SA, _other as *const crate::mr::c_sharp::SA as *const crate::ffi::MR_CSharp_SA)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::SA)}
    }

}

unsafe impl crate::CppCopy for SA
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::SB`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::CSharp::SC`
///
/// Generated from class `MR::CSharp::SB`. Heap-allocated instances are held in `Owned<SB>`.
#[repr(transparent)]
pub struct SB(crate::ffi::MR_CSharp_SB);

unsafe impl crate::CppClass for SB
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_SB_Destroy(ptr as *const crate::ffi::MR_CSharp_SB)}
}

impl SB
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_SB_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::SB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SB_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::SB)}
    }

    /// Constructs `MR::CSharp::SB` elementwise.
    ///
    /// Calls `MR_CSharp_SB_ConstructFrom()`.
    /// The reference to the parameter `s` might be preserved in the constructed object.
    pub fn construct_from(s: &str) -> crate::Owned<crate::mr::c_sharp::SB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SB_ConstructFrom(s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::SB)}
    }

    /// Generated from constructor `MR::CSharp::SB::SB`.
    ///
    /// Calls `MR_CSharp_SB_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::SB) -> crate::Owned<crate::mr::c_sharp::SB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SB_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::SB as *mut crate::ffi::MR_CSharp_SB)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::SB)}
    }

    /// Generated from method `MR::CSharp::SB::operator=`.
    ///
    /// Calls `MR_CSharp_SB_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::SB) -> &mut crate::mr::c_sharp::SB
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SB_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_SB, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::SB as *mut crate::ffi::MR_CSharp_SB)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::SB)}
    }

    /// Make this non-trivial for a change.
    /// Returns a pointer to a member variable of class `MR::CSharp::SB` named `s`.
    ///
    /// Calls `MR_CSharp_SB_Get_s()`.
    /// The reference to this object might be preserved as the return value.
    pub fn s<'a>(&'a self) -> &'a crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SB_Get_s(self as *const Self as *const crate::ffi::MR_CSharp_SB)};
        unsafe {&*(__ret as *const crate::mr::cs::std_string)}
    }

    /// Make this non-trivial for a change.
    /// Returns a mutable pointer to a member variable of class `MR::CSharp::SB` named `s`.
    ///
    /// Calls `MR_CSharp_SB_GetMutable_s()`.
    /// The reference to this object might be preserved as the return value.
    pub fn s_mut<'a>(&'a mut self) -> &'a mut crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SB_GetMutable_s(self as *mut Self as *mut crate::ffi::MR_CSharp_SB)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_string)}
    }

    /// Make this non-trivial for a change.
    /// Modifies a member variable of class `MR::CSharp::SB` named `s`.
    ///
    /// Calls `MR_CSharp_SB_Set_s()`.
    /// The reference to the parameter `value` might be preserved in this object in element `s`.
    pub fn set_s(&mut self, value: &str)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SB_Set_s(self as *mut Self as *mut crate::ffi::MR_CSharp_SB, value.as_ptr() as *const core::ffi::c_char, value.as_ptr().wrapping_add(value.len()) as *const core::ffi::c_char)};
        __ret
    }

}

unsafe impl crate::CppCopy for SB
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::SC`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::CSharp::SA`
///     `MR::CSharp::SB`
///
/// Generated from class `MR::CSharp::SC`. Heap-allocated instances are held in `Owned<SC>`.
#[repr(transparent)]
pub struct SC(crate::ffi::MR_CSharp_SC);

unsafe impl crate::CppClass for SC
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_SC_Destroy(ptr as *const crate::ffi::MR_CSharp_SC)}
}

impl SC
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_SC_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::SC>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SC_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::SC)}
    }

    /// Generated from constructor `MR::CSharp::SC::SC`.
    ///
    /// Calls `MR_CSharp_SC_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::SC) -> crate::Owned<crate::mr::c_sharp::SC>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SC_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::SC as *mut crate::ffi::MR_CSharp_SC)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::SC)}
    }

    /// Generated from method `MR::CSharp::SC::operator=`.
    ///
    /// Calls `MR_CSharp_SC_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::SC) -> &mut crate::mr::c_sharp::SC
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SC_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_SC, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::SC as *mut crate::ffi::MR_CSharp_SC)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::SC)}
    }

    /// Upcasts to the base class `MR::CSharp::SA`.
    ///
    /// Calls `MR_CSharp_SC_UpcastTo_MR_CSharp_SA()`.
    pub fn upcast_to_sa(&self) -> &crate::mr::c_sharp::SA
    {
        unsafe {&*(crate::ffi::MR_CSharp_SC_UpcastTo_MR_CSharp_SA(self as *const Self as *const crate::ffi::MR_CSharp_SC) as *const crate::mr::c_sharp::SA)}
    }

    /// Upcasts to the base class `MR::CSharp::SA`.
    ///
    /// Calls `MR_CSharp_SC_MutableUpcastTo_MR_CSharp_SA()`.
    pub fn upcast_to_sa_mut(&mut self) -> &mut crate::mr::c_sharp::SA
    {
        unsafe {&mut *(crate::ffi::MR_CSharp_SC_MutableUpcastTo_MR_CSharp_SA(self as *mut Self as *mut crate::ffi::MR_CSharp_SC) as *mut crate::mr::c_sharp::SA)}
    }

    /// Static downcast from the base class `MR::CSharp::SA`.
    ///
    /// Calls `MR_CSharp_SC_StaticDowncastFrom_MR_CSharp_SA()`. Undefined behavior if the object isn't actually a `SC`.
    pub unsafe fn static_downcast_from_sa(object: &crate::mr::c_sharp::SA) -> &Self
    {
        &*(crate::ffi::MR_CSharp_SC_StaticDowncastFrom_MR_CSharp_SA(object as *const crate::mr::c_sharp::SA as *const crate::ffi::MR_CSharp_SA) as *const Self)
    }

    /// Static downcast from the base class `MR::CSharp::SA`.
    ///
    /// Calls `MR_CSharp_SC_MutableStaticDowncastFrom_MR_CSharp_SA()`. Undefined behavior if the object isn't actually a `SC`.
    pub unsafe fn static_downcast_from_sa_mut(object: &mut crate::mr::c_sharp::SA) -> &mut Self
    {
        &mut *(crate::ffi::MR_CSharp_SC_MutableStaticDowncastFrom_MR_CSharp_SA(object as *mut crate::mr::c_sharp::SA as *mut crate::ffi::MR_CSharp_SA) as *mut Self)
    }

    /// Upcasts to the base class `MR::CSharp::SB`.
    ///
    /// Calls `MR_CSharp_SC_UpcastTo_MR_CSharp_SB()`.
    pub fn upcast_to_sb(&self) -> &crate::mr::c_sharp::SB
    {
        unsafe {&*(crate::ffi::MR_CSharp_SC_UpcastTo_MR_CSharp_SB(self as *const Self as *const crate::ffi::MR_CSharp_SC) as *const crate::mr::c_sharp::SB)}
    }

    /// Upcasts to the base class `MR::CSharp::SB`.
    ///
    /// Calls `MR_CSharp_SC_MutableUpcastTo_MR_CSharp_SB()`.
    pub fn upcast_to_sb_mut(&mut self) -> &mut crate::mr::c_sharp::SB
    {
        unsafe {&mut *(crate::ffi::MR_CSharp_SC_MutableUpcastTo_MR_CSharp_SB(self as *mut Self as *mut crate::ffi::MR_CSharp_SC) as *mut crate::mr::c_sharp::SB)}
    }

    /// Static downcast from the base class `MR::CSharp::SB`.
    ///
    /// Calls `MR_CSharp_SC_StaticDowncastFrom_MR_CSharp_SB()`. Undefined behavior if the object isn't actually a `SC`.
    pub unsafe fn static_downcast_from_sb(object: &crate::mr::c_sharp::SB) -> &Self
    {
        &*(crate::ffi::MR_CSharp_SC_StaticDowncastFrom_MR_CSharp_SB(object as *const crate::mr::c_sharp::SB as *const crate::ffi::MR_CSharp_SB) as *const Self)
    }

    /// Static downcast from the base class `MR::CSharp::SB`.
    ///
    /// Calls `MR_CSharp_SC_MutableStaticDowncastFrom_MR_CSharp_SB()`. Undefined behavior if the object isn't actually a `SC`.
    pub unsafe fn static_downcast_from_sb_mut(object: &mut crate::mr::c_sharp::SB) -> &mut Self
    {
        &mut *(crate::ffi::MR_CSharp_SC_MutableStaticDowncastFrom_MR_CSharp_SB(object as *mut crate::mr::c_sharp::SB as *mut crate::ffi::MR_CSharp_SB) as *mut Self)
    }

}

impl AsRef<crate::mr::c_sharp::SA> for SC
{
    fn as_ref(&self) -> &crate::mr::c_sharp::SA {self.upcast_to_sa()}
}

impl AsMut<crate::mr::c_sharp::SA> for SC
{
    fn as_mut(&mut self) -> &mut crate::mr::c_sharp::SA {self.upcast_to_sa_mut()}
}

impl AsRef<crate::mr::c_sharp::SB> for SC
{
    fn as_ref(&self) -> &crate::mr::c_sharp::SB {self.upcast_to_sb()}
}

impl AsMut<crate::mr::c_sharp::SB> for SC
{
    fn as_mut(&mut self) -> &mut crate::mr::c_sharp::SB {self.upcast_to_sb_mut()}
}

unsafe impl crate::CppCopy for SC
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::SD`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::CSharp::SF`
///
/// Generated from class `MR::CSharp::SD`. Heap-allocated instances are held in `Owned<SD>`.
#[repr(transparent)]
pub struct SD(crate::ffi::MR_CSharp_SD);

unsafe impl crate::CppClass for SD
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_SD_Destroy(ptr as *const crate::ffi::MR_CSharp_SD)}
}

impl SD
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_SD_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::SD>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SD_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::SD)}
    }

    /// Generated from constructor `MR::CSharp::SD::SD`.
    ///
    /// Calls `MR_CSharp_SD_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::SD) -> crate::Owned<crate::mr::c_sharp::SD>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SD_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::SD as *mut crate::ffi::MR_CSharp_SD)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::SD)}
    }

    /// Generated from method `MR::CSharp::SD::operator=`.
    ///
    /// Calls `MR_CSharp_SD_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    /// The reference to this object might be preserved in the return value.
    pub fn assign_from_another<'a>(&'a mut self, _other: &crate::mr::c_sharp::SD) -> &'a mut crate::mr::c_sharp::SD
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SD_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_SD, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::SD as *mut crate::ffi::MR_CSharp_SD)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::SD)}
    }

}

unsafe impl crate::CppCopy for SD
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::SE`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::CSharp::SF`
///
/// Generated from class `MR::CSharp::SE`. Heap-allocated instances are held in `Owned<SE>`.
#[repr(transparent)]
pub struct SE(crate::ffi::MR_CSharp_SE);

unsafe impl crate::CppClass for SE
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_SE_Destroy(ptr as *const crate::ffi::MR_CSharp_SE)}
}

impl SE
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_SE_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::SE>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SE_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::SE)}
    }

    /// Constructs `MR::CSharp::SE` elementwise.
    ///
    /// Calls `MR_CSharp_SE_ConstructFrom()`.
    /// The reference to the parameter `s` might be preserved in the constructed object.
    pub fn construct_from(s: &str) -> crate::Owned<crate::mr::c_sharp::SE>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SE_ConstructFrom(s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::SE)}
    }

    /// Generated from constructor `MR::CSharp::SE::SE`.
    ///
    /// Calls `MR_CSharp_SE_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::SE) -> crate::Owned<crate::mr::c_sharp::SE>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SE_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::SE as *mut crate::ffi::MR_CSharp_SE)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::SE)}
    }

    /// Generated from method `MR::CSharp::SE::operator=`.
    ///
    /// Calls `MR_CSharp_SE_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::SE) -> &mut crate::mr::c_sharp::SE
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SE_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_SE, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::SE as *mut crate::ffi::MR_CSharp_SE)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::SE)}
    }

    /// Make this non-trivial for a change.
    /// Returns a pointer to a member variable of class `MR::CSharp::SE` named `s`.
    ///
    /// Calls `MR_CSharp_SE_Get_s()`.
    /// The reference to this object might be preserved as the return value.
    pub fn s<'a>(&'a self) -> &'a crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SE_Get_s(self as *const Self as *const crate::ffi::MR_CSharp_SE)};
        unsafe {&*(__ret as *const crate::mr::cs::std_string)}
    }

    /// Make this non-trivial for a change.
    /// Returns a mutable pointer to a member variable of class `MR::CSharp::SE` named `s`.
    ///
    /// Calls `MR_CSharp_SE_GetMutable_s()`.
    /// The reference to this object might be preserved as the return value.
    pub fn s_mut<'a>(&'a mut self) -> &'a mut crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SE_GetMutable_s(self as *mut Self as *mut crate::ffi::MR_CSharp_SE)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_string)}
    }

    /// Make this non-trivial for a change.
    /// Modifies a member variable of class `MR::CSharp::SE` named `s`.
    ///
    /// Calls `MR_CSharp_SE_Set_s()`.
    /// The reference to the parameter `value` might be preserved in this object in element `s`.
    pub fn set_s(&mut self, value: &str)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SE_Set_s(self as *mut Self as *mut crate::ffi::MR_CSharp_SE, value.as_ptr() as *const core::ffi::c_char, value.as_ptr().wrapping_add(value.len()) as *const core::ffi::c_char)};
        __ret
    }

}

unsafe impl crate::CppCopy for SE
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::SF`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::CSharp::SD`
///     `MR::CSharp::SE`
///
/// Generated from class `MR::CSharp::SF`. Heap-allocated instances are held in `Owned<SF>`.
#[repr(transparent)]
pub struct SF(crate::ffi::MR_CSharp_SF);

unsafe impl crate::CppClass for SF
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_SF_Destroy(ptr as *const crate::ffi::MR_CSharp_SF)}
}

impl SF
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_SF_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::SF>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SF_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::SF)}
    }

    /// Generated from constructor `MR::CSharp::SF::SF`.
    ///
    /// Calls `MR_CSharp_SF_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::SF) -> crate::Owned<crate::mr::c_sharp::SF>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SF_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::SF as *mut crate::ffi::MR_CSharp_SF)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::SF)}
    }

    /// Generated from method `MR::CSharp::SF::operator=`.
    ///
    /// Calls `MR_CSharp_SF_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::SF) -> &mut crate::mr::c_sharp::SF
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_SF_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_SF, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::SF as *mut crate::ffi::MR_CSharp_SF)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::SF)}
    }

    /// Upcasts to the base class `MR::CSharp::SD`.
    ///
    /// Calls `MR_CSharp_SF_UpcastTo_MR_CSharp_SD()`.
    pub fn upcast_to_sd(&self) -> &crate::mr::c_sharp::SD
    {
        unsafe {&*(crate::ffi::MR_CSharp_SF_UpcastTo_MR_CSharp_SD(self as *const Self as *const crate::ffi::MR_CSharp_SF) as *const crate::mr::c_sharp::SD)}
    }

    /// Upcasts to the base class `MR::CSharp::SD`.
    ///
    /// Calls `MR_CSharp_SF_MutableUpcastTo_MR_CSharp_SD()`.
    pub fn upcast_to_sd_mut(&mut self) -> &mut crate::mr::c_sharp::SD
    {
        unsafe {&mut *(crate::ffi::MR_CSharp_SF_MutableUpcastTo_MR_CSharp_SD(self as *mut Self as *mut crate::ffi::MR_CSharp_SF) as *mut crate::mr::c_sharp::SD)}
    }

    /// Static downcast from the base class `MR::CSharp::SD`.
    ///
    /// Calls `MR_CSharp_SF_StaticDowncastFrom_MR_CSharp_SD()`. Undefined behavior if the object isn't actually a `SF`.
    pub unsafe fn static_downcast_from_sd(object: &crate::mr::c_sharp::SD) -> &Self
    {
        &*(crate::ffi::MR_CSharp_SF_StaticDowncastFrom_MR_CSharp_SD(object as *const crate::mr::c_sharp::SD as *const crate::ffi::MR_CSharp_SD) as *const Self)
    }

    /// Static downcast from the base class `MR::CSharp::SD`.
    ///
    /// Calls `MR_CSharp_SF_MutableStaticDowncastFrom_MR_CSharp_SD()`. Undefined behavior if the object isn't actually a `SF`.
    pub unsafe fn static_downcast_from_sd_mut(object: &mut crate::mr::c_sharp::SD) -> &mut Self
    {
        &mut *(crate::ffi::MR_CSharp_SF_MutableStaticDowncastFrom_MR_CSharp_SD(object as *mut crate::mr::c_sharp::SD as *mut crate::ffi::MR_CSharp_SD) as *mut Self)
    }

    /// Dynamic downcast from the base class `MR::CSharp::SD`. Returns `None` if the object isn't actually a `SF`.
    ///
    /// Calls `MR_CSharp_SF_DynamicDowncastFrom_MR_CSharp_SD()`.
    pub fn dynamic_downcast_from_sd(object: &crate::mr::c_sharp::SD) -> Option<&Self>
    {
        unsafe {(crate::ffi::MR_CSharp_SF_DynamicDowncastFrom_MR_CSharp_SD(object as *const crate::mr::c_sharp::SD as *const crate::ffi::MR_CSharp_SD) as *const Self).as_ref()}
    }

    /// Dynamic downcast from the base class `MR::CSharp::SD`. Returns `None` if the object isn't actually a `SF`.
    ///
    /// Calls `MR_CSharp_SF_MutableDynamicDowncastFrom_MR_CSharp_SD()`.
    pub fn dynamic_downcast_from_sd_mut(object: &mut crate::mr::c_sharp::SD) -> Option<&mut Self>
    {
        unsafe {(crate::ffi::MR_CSharp_SF_MutableDynamicDowncastFrom_MR_CSharp_SD(object as *mut crate::mr::c_sharp::SD as *mut crate::ffi::MR_CSharp_SD) as *mut Self).as_mut()}
    }

    /// Upcasts to the base class `MR::CSharp::SE`.
    ///
    /// Calls `MR_CSharp_SF_UpcastTo_MR_CSharp_SE()`.
    pub fn upcast_to_se(&self) -> &crate::mr::c_sharp::SE
    {
        unsafe {&*(crate::ffi::MR_CSharp_SF_UpcastTo_MR_CSharp_SE(self as *const Self as *const crate::ffi::MR_CSharp_SF) as *const crate::mr::c_sharp::SE)}
    }

    /// Upcasts to the base class `MR::CSharp::SE`.
    ///
    /// Calls `MR_CSharp_SF_MutableUpcastTo_MR_CSharp_SE()`.
    pub fn upcast_to_se_mut(&mut self) -> &mut crate::mr::c_sharp::SE
    {
        unsafe {&mut *(crate::ffi::MR_CSharp_SF_MutableUpcastTo_MR_CSharp_SE(self as *mut Self as *mut crate::ffi::MR_CSharp_SF) as *mut crate::mr::c_sharp::SE)}
    }

    /// Static downcast from the base class `MR::CSharp::SE`.
    ///
    /// Calls `MR_CSharp_SF_StaticDowncastFrom_MR_CSharp_SE()`. Undefined behavior if the object isn't actually a `SF`.
    pub unsafe fn static_downcast_from_se(object: &crate::mr::c_sharp::SE) -> &Self
    {
        &*(crate::ffi::MR_CSharp_SF_StaticDowncastFrom_MR_CSharp_SE(object as *const crate::mr::c_sharp::SE as *const crate::ffi::MR_CSharp_SE) as *const Self)
    }

    /// Static downcast from the base class `MR::CSharp::SE`.
    ///
    /// Calls `MR_CSharp_SF_MutableStaticDowncastFrom_MR_CSharp_SE()`. Undefined behavior if the object isn't actually a `SF`.
    pub unsafe fn static_downcast_from_se_mut(object: &mut crate::mr::c_sharp::SE) -> &mut Self
    {
        &mut *(crate::ffi::MR_CSharp_SF_MutableStaticDowncastFrom_MR_CSharp_SE(object as *mut crate::mr::c_sharp::SE as *mut crate::ffi::MR_CSharp_SE) as *mut Self)
    }

}

impl AsRef<crate::mr::c_sharp::SD> for SF
{
    fn as_ref(&self) -> &crate::mr::c_sharp::SD {self.upcast_to_sd()}
}

impl AsMut<crate::mr::c_sharp::SD> for SF
{
    fn as_mut(&mut self) -> &mut crate::mr::c_sharp::SD {self.upcast_to_sd_mut()}
}

impl AsRef<crate::mr::c_sharp::SE> for SF
{
    fn as_ref(&self) -> &crate::mr::c_sharp::SE {self.upcast_to_se()}
}

impl AsMut<crate::mr::c_sharp::SE> for SF
{
    fn as_mut(&mut self) -> &mut crate::mr::c_sharp::SE {self.upcast_to_se_mut()}
}

unsafe impl crate::CppCopy for SF
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Make sure non-passable classes work fine as `std::shared_ptr` template arguments.
/// Generated from class `MR::CSharp::SG`.
///
/// Generated from class `MR::CSharp::SG`. Heap-allocated instances are held in `Owned<SG>`.
#[repr(transparent)]
pub struct SG(crate::ffi::MR_CSharp_SG);

unsafe impl crate::CppClass for SG
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_SG_Destroy(ptr as *const crate::ffi::MR_CSharp_SG)}
}

/// The operator is injected correctly.
/// Generated from class `MR::CSharp::StaticOpsLhsA`.
///
/// Generated from class `MR::CSharp::StaticOpsLhsA`. Heap-allocated instances are held in `Owned<StaticOpsLhsA>`.
#[repr(transparent)]
pub struct StaticOpsLhsA(crate::ffi::MR_CSharp_StaticOpsLhsA);

unsafe impl crate::CppClass for StaticOpsLhsA
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StaticOpsLhsA_Destroy(ptr as *const crate::ffi::MR_CSharp_StaticOpsLhsA)}
}

impl StaticOpsLhsA
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsA_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StaticOpsLhsA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsA_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsLhsA)}
    }

    /// Generated from constructor `MR::CSharp::StaticOpsLhsA::StaticOpsLhsA`.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsA_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::StaticOpsLhsA) -> crate::Owned<crate::mr::c_sharp::StaticOpsLhsA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsA_ConstructFromAnother(_other as *const crate::mr::c_sharp::StaticOpsLhsA as *const crate::ffi::MR_CSharp_StaticOpsLhsA)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsLhsA)}
    }

    /// Generated from method `MR::CSharp::StaticOpsLhsA::operator=`.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsA_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::StaticOpsLhsA) -> &mut crate::mr::c_sharp::StaticOpsLhsA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsA_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_StaticOpsLhsA, _other as *const crate::mr::c_sharp::StaticOpsLhsA as *const crate::ffi::MR_CSharp_StaticOpsLhsA)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::StaticOpsLhsA)}
    }

}

unsafe impl crate::CppCopy for StaticOpsLhsA
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The operator injects but becomes a function, because it returns void.
/// Generated from class `MR::CSharp::StaticOpsLhsB`.
///
/// Generated from class `MR::CSharp::StaticOpsLhsB`. Heap-allocated instances are held in `Owned<StaticOpsLhsB>`.
#[repr(transparent)]
pub struct StaticOpsLhsB(crate::ffi::MR_CSharp_StaticOpsLhsB);

unsafe impl crate::CppClass for StaticOpsLhsB
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StaticOpsLhsB_Destroy(ptr as *const crate::ffi::MR_CSharp_StaticOpsLhsB)}
}

impl StaticOpsLhsB
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsB_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StaticOpsLhsB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsB_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsLhsB)}
    }

    /// Generated from constructor `MR::CSharp::StaticOpsLhsB::StaticOpsLhsB`.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsB_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::StaticOpsLhsB) -> crate::Owned<crate::mr::c_sharp::StaticOpsLhsB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsB_ConstructFromAnother(_other as *const crate::mr::c_sharp::StaticOpsLhsB as *const crate::ffi::MR_CSharp_StaticOpsLhsB)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsLhsB)}
    }

    /// Generated from method `MR::CSharp::StaticOpsLhsB::operator=`.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsB_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::StaticOpsLhsB) -> &mut crate::mr::c_sharp::StaticOpsLhsB
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsB_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_StaticOpsLhsB, _other as *const crate::mr::c_sharp::StaticOpsLhsB as *const crate::ffi::MR_CSharp_StaticOpsLhsB)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::StaticOpsLhsB)}
    }

}

unsafe impl crate::CppCopy for StaticOpsLhsB
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The operator fails to inject because the class isn't copyable (and isn't trivially movable), and the operator takes it by value.
/// Generated from class `MR::CSharp::StaticOpsLhsC`.
///
/// Generated from class `MR::CSharp::StaticOpsLhsC`. Heap-allocated instances are held in `Owned<StaticOpsLhsC>`.
#[repr(transparent)]
pub struct StaticOpsLhsC(crate::ffi::MR_CSharp_StaticOpsLhsC);

unsafe impl crate::CppClass for StaticOpsLhsC
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StaticOpsLhsC_Destroy(ptr as *const crate::ffi::MR_CSharp_StaticOpsLhsC)}
}

impl StaticOpsLhsC
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsC_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StaticOpsLhsC>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsC_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsLhsC)}
    }

    /// Generated from constructor `MR::CSharp::StaticOpsLhsC::StaticOpsLhsC`.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsC_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: crate::Owned<crate::mr::c_sharp::StaticOpsLhsC>) -> crate::Owned<crate::mr::c_sharp::StaticOpsLhsC>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsC_ConstructFromAnother(crate::ffi::MR_C_PassBy_MoveAndDestroy, _other.into_raw() as *mut crate::ffi::MR_CSharp_StaticOpsLhsC)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsLhsC)}
    }

}

/// The class is non-copyable, but is trivially movable, so the by-value operator injects fine.
/// Generated from class `MR::CSharp::StaticOpsLhsD`.
///
/// Generated from class `MR::CSharp::StaticOpsLhsD`. Heap-allocated instances are held in `Owned<StaticOpsLhsD>`.
#[repr(transparent)]
pub struct StaticOpsLhsD(crate::ffi::MR_CSharp_StaticOpsLhsD);

unsafe impl crate::CppClass for StaticOpsLhsD
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StaticOpsLhsD_Destroy(ptr as *const crate::ffi::MR_CSharp_StaticOpsLhsD)}
}

impl StaticOpsLhsD
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsD_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StaticOpsLhsD>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsD_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsLhsD)}
    }

    /// Generated from constructor `MR::CSharp::StaticOpsLhsD::StaticOpsLhsD`.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsD_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::StaticOpsLhsD) -> crate::Owned<crate::mr::c_sharp::StaticOpsLhsD>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsD_ConstructFromAnother(_other as *const crate::mr::c_sharp::StaticOpsLhsD as *const crate::ffi::MR_CSharp_StaticOpsLhsD)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsLhsD)}
    }

}

unsafe impl crate::CppCopy for StaticOpsLhsD
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The class isn't copyable, but the operator takes it by reference, so it injects fine.
/// Generated from class `MR::CSharp::StaticOpsLhsE`.
///
/// Generated from class `MR::CSharp::StaticOpsLhsE`. Heap-allocated instances are held in `Owned<StaticOpsLhsE>`.
#[repr(transparent)]
pub struct StaticOpsLhsE(crate::ffi::MR_CSharp_StaticOpsLhsE);

unsafe impl crate::CppClass for StaticOpsLhsE
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StaticOpsLhsE_Destroy(ptr as *const crate::ffi::MR_CSharp_StaticOpsLhsE)}
}

impl StaticOpsLhsE
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsE_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StaticOpsLhsE>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsE_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsLhsE)}
    }

    /// Generated from constructor `MR::CSharp::StaticOpsLhsE::StaticOpsLhsE`.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsE_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::StaticOpsLhsE) -> crate::Owned<crate::mr::c_sharp::StaticOpsLhsE>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsE_ConstructFromAnother(_other as *const crate::mr::c_sharp::StaticOpsLhsE as *const crate::ffi::MR_CSharp_StaticOpsLhsE)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsLhsE)}
    }

    /// Generated from method `MR::CSharp::StaticOpsLhsE::operator=`.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsE_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    /// The reference to this object might be preserved in the return value.
    pub fn assign_from_another<'a>(&'a mut self, _other: &crate::mr::c_sharp::StaticOpsLhsE) -> &'a mut crate::mr::c_sharp::StaticOpsLhsE
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsE_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_StaticOpsLhsE, _other as *const crate::mr::c_sharp::StaticOpsLhsE as *const crate::ffi::MR_CSharp_StaticOpsLhsE)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::StaticOpsLhsE)}
    }

}

unsafe impl crate::CppCopy for StaticOpsLhsE
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The class isn't copyable, but the operator takes it by const reference, so it injects fine.
/// Generated from class `MR::CSharp::StaticOpsLhsF`.
///
/// Generated from class `MR::CSharp::StaticOpsLhsF`. Heap-allocated instances are held in `Owned<StaticOpsLhsF>`.
#[repr(transparent)]
pub struct StaticOpsLhsF(crate::ffi::MR_CSharp_StaticOpsLhsF);

unsafe impl crate::CppClass for StaticOpsLhsF
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StaticOpsLhsF_Destroy(ptr as *const crate::ffi::MR_CSharp_StaticOpsLhsF)}
}

impl StaticOpsLhsF
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsF_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StaticOpsLhsF>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsF_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsLhsF)}
    }

    /// Generated from constructor `MR::CSharp::StaticOpsLhsF::StaticOpsLhsF`.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsF_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::StaticOpsLhsF) -> crate::Owned<crate::mr::c_sharp::StaticOpsLhsF>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsF_ConstructFromAnother(_other as *const crate::mr::c_sharp::StaticOpsLhsF as *const crate::ffi::MR_CSharp_StaticOpsLhsF)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsLhsF)}
    }

    /// Generated from method `MR::CSharp::StaticOpsLhsF::operator=`.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsF_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    /// The reference to this object might be preserved in the return value.
    pub fn assign_from_another<'a>(&'a mut self, _other: &crate::mr::c_sharp::StaticOpsLhsF) -> &'a mut crate::mr::c_sharp::StaticOpsLhsF
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsF_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_StaticOpsLhsF, _other as *const crate::mr::c_sharp::StaticOpsLhsF as *const crate::ffi::MR_CSharp_StaticOpsLhsF)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::StaticOpsLhsF)}
    }

}

unsafe impl crate::CppCopy for StaticOpsLhsF
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The copy ctor uses a non-const reference, so an operator with a by-value parameter gets injected into the non-const half.
/// Generated from class `MR::CSharp::StaticOpsLhsG`.
///
/// Generated from class `MR::CSharp::StaticOpsLhsG`. Heap-allocated instances are held in `Owned<StaticOpsLhsG>`.
#[repr(transparent)]
pub struct StaticOpsLhsG(crate::ffi::MR_CSharp_StaticOpsLhsG);

unsafe impl crate::CppClass for StaticOpsLhsG
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StaticOpsLhsG_Destroy(ptr as *const crate::ffi::MR_CSharp_StaticOpsLhsG)}
}

impl StaticOpsLhsG
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsG_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StaticOpsLhsG>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsG_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsLhsG)}
    }

    /// Generated from constructor `MR::CSharp::StaticOpsLhsG::StaticOpsLhsG`.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsG_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::StaticOpsLhsG) -> crate::Owned<crate::mr::c_sharp::StaticOpsLhsG>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsG_ConstructFromAnother(_other as *const crate::mr::c_sharp::StaticOpsLhsG as *const crate::ffi::MR_CSharp_StaticOpsLhsG)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsLhsG)}
    }

    /// Generated from method `MR::CSharp::StaticOpsLhsG::operator=`.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsG_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::StaticOpsLhsG) -> &mut crate::mr::c_sharp::StaticOpsLhsG
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsG_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_StaticOpsLhsG, _other as *const crate::mr::c_sharp::StaticOpsLhsG as *const crate::ffi::MR_CSharp_StaticOpsLhsG)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::StaticOpsLhsG)}
    }

}

unsafe impl crate::CppCopy for StaticOpsLhsG
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The copy ctor uses a non-const reference, but it doesn't matter because the operator takes the parameter by const reference,
///   so the operator gets injected into the const half.
/// Generated from class `MR::CSharp::StaticOpsLhsH`.
///
/// Generated from class `MR::CSharp::StaticOpsLhsH`. Heap-allocated instances are held in `Owned<StaticOpsLhsH>`.
#[repr(transparent)]
pub struct StaticOpsLhsH(crate::ffi::MR_CSharp_StaticOpsLhsH);

unsafe impl crate::CppClass for StaticOpsLhsH
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StaticOpsLhsH_Destroy(ptr as *const crate::ffi::MR_CSharp_StaticOpsLhsH)}
}

impl StaticOpsLhsH
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsH_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StaticOpsLhsH>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsH_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsLhsH)}
    }

    /// Generated from constructor `MR::CSharp::StaticOpsLhsH::StaticOpsLhsH`.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsH_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::StaticOpsLhsH) -> crate::Owned<crate::mr::c_sharp::StaticOpsLhsH>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsH_ConstructFromAnother(_other as *const crate::mr::c_sharp::StaticOpsLhsH as *const crate::ffi::MR_CSharp_StaticOpsLhsH)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsLhsH)}
    }

    /// Generated from method `MR::CSharp::StaticOpsLhsH::operator=`.
    ///
    /// Calls `MR_CSharp_StaticOpsLhsH_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::StaticOpsLhsH) -> &mut crate::mr::c_sharp::StaticOpsLhsH
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsLhsH_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_StaticOpsLhsH, _other as *const crate::mr::c_sharp::StaticOpsLhsH as *const crate::ffi::MR_CSharp_StaticOpsLhsH)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::StaticOpsLhsH)}
    }

}

unsafe impl crate::CppCopy for StaticOpsLhsH
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::StaticOpsMixedLhs`.
///
/// Generated from class `MR::CSharp::StaticOpsMixedLhs`. Heap-allocated instances are held in `Owned<StaticOpsMixedLhs>`.
#[repr(transparent)]
pub struct StaticOpsMixedLhs(crate::ffi::MR_CSharp_StaticOpsMixedLhs);

unsafe impl crate::CppClass for StaticOpsMixedLhs
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StaticOpsMixedLhs_Destroy(ptr as *const crate::ffi::MR_CSharp_StaticOpsMixedLhs)}
}

impl StaticOpsMixedLhs
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StaticOpsMixedLhs_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StaticOpsMixedLhs>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsMixedLhs_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsMixedLhs)}
    }

    /// Generated from constructor `MR::CSharp::StaticOpsMixedLhs::StaticOpsMixedLhs`.
    ///
    /// Calls `MR_CSharp_StaticOpsMixedLhs_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::StaticOpsMixedLhs) -> crate::Owned<crate::mr::c_sharp::StaticOpsMixedLhs>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsMixedLhs_ConstructFromAnother(_other as *const crate::mr::c_sharp::StaticOpsMixedLhs as *const crate::ffi::MR_CSharp_StaticOpsMixedLhs)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsMixedLhs)}
    }

    /// Generated from method `MR::CSharp::StaticOpsMixedLhs::operator=`.
    ///
    /// Calls `MR_CSharp_StaticOpsMixedLhs_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::StaticOpsMixedLhs) -> &mut crate::mr::c_sharp::StaticOpsMixedLhs
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsMixedLhs_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_StaticOpsMixedLhs, _other as *const crate::mr::c_sharp::StaticOpsMixedLhs as *const crate::ffi::MR_CSharp_StaticOpsMixedLhs)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::StaticOpsMixedLhs)}
    }

}

unsafe impl crate::CppCopy for StaticOpsMixedLhs
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::StaticOpsMixedRhs`.
///
/// Generated from class `MR::CSharp::StaticOpsMixedRhs`. Heap-allocated instances are held in `Owned<StaticOpsMixedRhs>`.
#[repr(transparent)]
pub struct StaticOpsMixedRhs(crate::ffi::MR_CSharp_StaticOpsMixedRhs);

unsafe impl crate::CppClass for StaticOpsMixedRhs
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StaticOpsMixedRhs_Destroy(ptr as *const crate::ffi::MR_CSharp_StaticOpsMixedRhs)}
}

impl StaticOpsMixedRhs
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StaticOpsMixedRhs_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StaticOpsMixedRhs>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsMixedRhs_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsMixedRhs)}
    }

    /// Generated from constructor `MR::CSharp::StaticOpsMixedRhs::StaticOpsMixedRhs`.
    ///
    /// Calls `MR_CSharp_StaticOpsMixedRhs_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::StaticOpsMixedRhs) -> crate::Owned<crate::mr::c_sharp::StaticOpsMixedRhs>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsMixedRhs_ConstructFromAnother(_other as *const crate::mr::c_sharp::StaticOpsMixedRhs as *const crate::ffi::MR_CSharp_StaticOpsMixedRhs)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsMixedRhs)}
    }

    /// Generated from method `MR::CSharp::StaticOpsMixedRhs::operator=`.
    ///
    /// Calls `MR_CSharp_StaticOpsMixedRhs_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::StaticOpsMixedRhs) -> &mut crate::mr::c_sharp::StaticOpsMixedRhs
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsMixedRhs_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_StaticOpsMixedRhs, _other as *const crate::mr::c_sharp::StaticOpsMixedRhs as *const crate::ffi::MR_CSharp_StaticOpsMixedRhs)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::StaticOpsMixedRhs)}
    }

}

unsafe impl crate::CppCopy for StaticOpsMixedRhs
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The operator is injected correctly.
/// Generated from class `MR::CSharp::StaticOpsRhsA`.
///
/// Generated from class `MR::CSharp::StaticOpsRhsA`. Heap-allocated instances are held in `Owned<StaticOpsRhsA>`.
#[repr(transparent)]
pub struct StaticOpsRhsA(crate::ffi::MR_CSharp_StaticOpsRhsA);

unsafe impl crate::CppClass for StaticOpsRhsA
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StaticOpsRhsA_Destroy(ptr as *const crate::ffi::MR_CSharp_StaticOpsRhsA)}
}

impl StaticOpsRhsA
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsA_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StaticOpsRhsA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsA_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsRhsA)}
    }

    /// Generated from constructor `MR::CSharp::StaticOpsRhsA::StaticOpsRhsA`.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsA_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::StaticOpsRhsA) -> crate::Owned<crate::mr::c_sharp::StaticOpsRhsA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsA_ConstructFromAnother(_other as *const crate::mr::c_sharp::StaticOpsRhsA as *const crate::ffi::MR_CSharp_StaticOpsRhsA)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsRhsA)}
    }

    /// Generated from method `MR::CSharp::StaticOpsRhsA::operator=`.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsA_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::StaticOpsRhsA) -> &mut crate::mr::c_sharp::StaticOpsRhsA
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsA_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_StaticOpsRhsA, _other as *const crate::mr::c_sharp::StaticOpsRhsA as *const crate::ffi::MR_CSharp_StaticOpsRhsA)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::StaticOpsRhsA)}
    }

}

unsafe impl crate::CppCopy for StaticOpsRhsA
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The operator injects but becomes a function, because it returns void.
/// Generated from class `MR::CSharp::StaticOpsRhsB`.
///
/// Generated from class `MR::CSharp::StaticOpsRhsB`. Heap-allocated instances are held in `Owned<StaticOpsRhsB>`.
#[repr(transparent)]
pub struct StaticOpsRhsB(crate::ffi::MR_CSharp_StaticOpsRhsB);

unsafe impl crate::CppClass for StaticOpsRhsB
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StaticOpsRhsB_Destroy(ptr as *const crate::ffi::MR_CSharp_StaticOpsRhsB)}
}

impl StaticOpsRhsB
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsB_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StaticOpsRhsB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsB_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsRhsB)}
    }

    /// Generated from constructor `MR::CSharp::StaticOpsRhsB::StaticOpsRhsB`.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsB_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::StaticOpsRhsB) -> crate::Owned<crate::mr::c_sharp::StaticOpsRhsB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsB_ConstructFromAnother(_other as *const crate::mr::c_sharp::StaticOpsRhsB as *const crate::ffi::MR_CSharp_StaticOpsRhsB)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsRhsB)}
    }

    /// Generated from method `MR::CSharp::StaticOpsRhsB::operator=`.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsB_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::StaticOpsRhsB) -> &mut crate::mr::c_sharp::StaticOpsRhsB
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsB_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_StaticOpsRhsB, _other as *const crate::mr::c_sharp::StaticOpsRhsB as *const crate::ffi::MR_CSharp_StaticOpsRhsB)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::StaticOpsRhsB)}
    }

}

unsafe impl crate::CppCopy for StaticOpsRhsB
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The operator fails to inject because the class isn't copyable (and isn't trivially movable), and the operator takes it by value.
/// Generated from class `MR::CSharp::StaticOpsRhsC`.
///
/// Generated from class `MR::CSharp::StaticOpsRhsC`. Heap-allocated instances are held in `Owned<StaticOpsRhsC>`.
#[repr(transparent)]
pub struct StaticOpsRhsC(crate::ffi::MR_CSharp_StaticOpsRhsC);

unsafe impl crate::CppClass for StaticOpsRhsC
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StaticOpsRhsC_Destroy(ptr as *const crate::ffi::MR_CSharp_StaticOpsRhsC)}
}

impl StaticOpsRhsC
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsC_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StaticOpsRhsC>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsC_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsRhsC)}
    }

    /// Generated from constructor `MR::CSharp::StaticOpsRhsC::StaticOpsRhsC`.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsC_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: crate::Owned<crate::mr::c_sharp::StaticOpsRhsC>) -> crate::Owned<crate::mr::c_sharp::StaticOpsRhsC>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsC_ConstructFromAnother(crate::ffi::MR_C_PassBy_MoveAndDestroy, _other.into_raw() as *mut crate::ffi::MR_CSharp_StaticOpsRhsC)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsRhsC)}
    }

}

/// The class is non-copyable, but is trivially movable, so the by-value operator injects fine.
/// Generated from class `MR::CSharp::StaticOpsRhsD`.
///
/// Generated from class `MR::CSharp::StaticOpsRhsD`. Heap-allocated instances are held in `Owned<StaticOpsRhsD>`.
#[repr(transparent)]
pub struct StaticOpsRhsD(crate::ffi::MR_CSharp_StaticOpsRhsD);

unsafe impl crate::CppClass for StaticOpsRhsD
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StaticOpsRhsD_Destroy(ptr as *const crate::ffi::MR_CSharp_StaticOpsRhsD)}
}

impl StaticOpsRhsD
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsD_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StaticOpsRhsD>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsD_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsRhsD)}
    }

    /// Generated from constructor `MR::CSharp::StaticOpsRhsD::StaticOpsRhsD`.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsD_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::StaticOpsRhsD) -> crate::Owned<crate::mr::c_sharp::StaticOpsRhsD>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsD_ConstructFromAnother(_other as *const crate::mr::c_sharp::StaticOpsRhsD as *const crate::ffi::MR_CSharp_StaticOpsRhsD)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsRhsD)}
    }

}

unsafe impl crate::CppCopy for StaticOpsRhsD
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The class isn't copyable, but the operator takes it by reference, so it injects fine.
/// Generated from class `MR::CSharp::StaticOpsRhsE`.
///
/// Generated from class `MR::CSharp::StaticOpsRhsE`. Heap-allocated instances are held in `Owned<StaticOpsRhsE>`.
#[repr(transparent)]
pub struct StaticOpsRhsE(crate::ffi::MR_CSharp_StaticOpsRhsE);

unsafe impl crate::CppClass for StaticOpsRhsE
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StaticOpsRhsE_Destroy(ptr as *const crate::ffi::MR_CSharp_StaticOpsRhsE)}
}

impl StaticOpsRhsE
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsE_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StaticOpsRhsE>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsE_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsRhsE)}
    }

    /// Generated from constructor `MR::CSharp::StaticOpsRhsE::StaticOpsRhsE`.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsE_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::StaticOpsRhsE) -> crate::Owned<crate::mr::c_sharp::StaticOpsRhsE>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsE_ConstructFromAnother(_other as *const crate::mr::c_sharp::StaticOpsRhsE as *const crate::ffi::MR_CSharp_StaticOpsRhsE)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsRhsE)}
    }

    /// Generated from method `MR::CSharp::StaticOpsRhsE::operator=`.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsE_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    /// The reference to this object might be preserved in the return value.
    pub fn assign_from_another<'a>(&'a mut self, _other: &crate::mr::c_sharp::StaticOpsRhsE) -> &'a mut crate::mr::c_sharp::StaticOpsRhsE
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsE_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_StaticOpsRhsE, _other as *const crate::mr::c_sharp::StaticOpsRhsE as *const crate::ffi::MR_CSharp_StaticOpsRhsE)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::StaticOpsRhsE)}
    }

}

unsafe impl crate::CppCopy for StaticOpsRhsE
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The class isn't copyable, but the operator takes it by const reference, so it injects fine.
/// Generated from class `MR::CSharp::StaticOpsRhsF`.
///
/// Generated from class `MR::CSharp::StaticOpsRhsF`. Heap-allocated instances are held in `Owned<StaticOpsRhsF>`.
#[repr(transparent)]
pub struct StaticOpsRhsF(crate::ffi::MR_CSharp_StaticOpsRhsF);

unsafe impl crate::CppClass for StaticOpsRhsF
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StaticOpsRhsF_Destroy(ptr as *const crate::ffi::MR_CSharp_StaticOpsRhsF)}
}

impl StaticOpsRhsF
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsF_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StaticOpsRhsF>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsF_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsRhsF)}
    }

    /// Generated from constructor `MR::CSharp::StaticOpsRhsF::StaticOpsRhsF`.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsF_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::StaticOpsRhsF) -> crate::Owned<crate::mr::c_sharp::StaticOpsRhsF>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsF_ConstructFromAnother(_other as *const crate::mr::c_sharp::StaticOpsRhsF as *const crate::ffi::MR_CSharp_StaticOpsRhsF)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsRhsF)}
    }

    /// Generated from method `MR::CSharp::StaticOpsRhsF::operator=`.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsF_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    /// The reference to this object might be preserved in the return value.
    pub fn assign_from_another<'a>(&'a mut self, _other: &crate::mr::c_sharp::StaticOpsRhsF) -> &'a mut crate::mr::c_sharp::StaticOpsRhsF
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsF_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_StaticOpsRhsF, _other as *const crate::mr::c_sharp::StaticOpsRhsF as *const crate::ffi::MR_CSharp_StaticOpsRhsF)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::StaticOpsRhsF)}
    }

}

unsafe impl crate::CppCopy for StaticOpsRhsF
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The copy ctor uses a non-const reference, so an operator with a by-value parameter gets injected into the non-const half.
/// Generated from class `MR::CSharp::StaticOpsRhsG`.
///
/// Generated from class `MR::CSharp::StaticOpsRhsG`. Heap-allocated instances are held in `Owned<StaticOpsRhsG>`.
#[repr(transparent)]
pub struct StaticOpsRhsG(crate::ffi::MR_CSharp_StaticOpsRhsG);

unsafe impl crate::CppClass for StaticOpsRhsG
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StaticOpsRhsG_Destroy(ptr as *const crate::ffi::MR_CSharp_StaticOpsRhsG)}
}

impl StaticOpsRhsG
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsG_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StaticOpsRhsG>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsG_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsRhsG)}
    }

    /// Generated from constructor `MR::CSharp::StaticOpsRhsG::StaticOpsRhsG`.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsG_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::StaticOpsRhsG) -> crate::Owned<crate::mr::c_sharp::StaticOpsRhsG>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsG_ConstructFromAnother(_other as *const crate::mr::c_sharp::StaticOpsRhsG as *const crate::ffi::MR_CSharp_StaticOpsRhsG)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsRhsG)}
    }

    /// Generated from method `MR::CSharp::StaticOpsRhsG::operator=`.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsG_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::StaticOpsRhsG) -> &mut crate::mr::c_sharp::StaticOpsRhsG
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsG_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_StaticOpsRhsG, _other as *const crate::mr::c_sharp::StaticOpsRhsG as *const crate::ffi::MR_CSharp_StaticOpsRhsG)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::StaticOpsRhsG)}
    }

}

unsafe impl crate::CppCopy for StaticOpsRhsG
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// The copy ctor uses a non-const reference, but it doesn't matter because the operator takes the parameter by const reference,
///   so the operator gets injected into the const half.
/// Generated from class `MR::CSharp::StaticOpsRhsH`.
///
/// Generated from class `MR::CSharp::StaticOpsRhsH`. Heap-allocated instances are held in `Owned<StaticOpsRhsH>`.
#[repr(transparent)]
pub struct StaticOpsRhsH(crate::ffi::MR_CSharp_StaticOpsRhsH);

unsafe impl crate::CppClass for StaticOpsRhsH
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StaticOpsRhsH_Destroy(ptr as *const crate::ffi::MR_CSharp_StaticOpsRhsH)}
}

impl StaticOpsRhsH
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsH_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StaticOpsRhsH>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsH_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsRhsH)}
    }

    /// Generated from constructor `MR::CSharp::StaticOpsRhsH::StaticOpsRhsH`.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsH_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::StaticOpsRhsH) -> crate::Owned<crate::mr::c_sharp::StaticOpsRhsH>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsH_ConstructFromAnother(_other as *const crate::mr::c_sharp::StaticOpsRhsH as *const crate::ffi::MR_CSharp_StaticOpsRhsH)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StaticOpsRhsH)}
    }

    /// Generated from method `MR::CSharp::StaticOpsRhsH::operator=`.
    ///
    /// Calls `MR_CSharp_StaticOpsRhsH_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::StaticOpsRhsH) -> &mut crate::mr::c_sharp::StaticOpsRhsH
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StaticOpsRhsH_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_StaticOpsRhsH, _other as *const crate::mr::c_sharp::StaticOpsRhsH as *const crate::ffi::MR_CSharp_StaticOpsRhsH)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::StaticOpsRhsH)}
    }

}

unsafe impl crate::CppCopy for StaticOpsRhsH
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::StringConvFsPath`.
///
/// Generated from class `MR::CSharp::StringConvFsPath`. Heap-allocated instances are held in `Owned<StringConvFsPath>`.
#[repr(transparent)]
pub struct StringConvFsPath(crate::ffi::MR_CSharp_StringConvFsPath);

unsafe impl crate::CppClass for StringConvFsPath
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StringConvFsPath_Destroy(ptr as *const crate::ffi::MR_CSharp_StringConvFsPath)}
}

impl StringConvFsPath
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StringConvFsPath_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StringConvFsPath>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StringConvFsPath_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StringConvFsPath)}
    }

    /// Generated from constructor `MR::CSharp::StringConvFsPath::StringConvFsPath`.
    ///
    /// Calls `MR_CSharp_StringConvFsPath_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::StringConvFsPath) -> crate::Owned<crate::mr::c_sharp::StringConvFsPath>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StringConvFsPath_ConstructFromAnother(_other as *const crate::mr::c_sharp::StringConvFsPath as *const crate::ffi::MR_CSharp_StringConvFsPath)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StringConvFsPath)}
    }

    /// Generated from conversion operator `MR::CSharp::StringConvFsPath::operator std::filesystem::path`.
    ///
    /// Calls `MR_CSharp_StringConvFsPath_ConvertTo_std_filesystem_path()`.
    pub fn convert_to_std_filesystem_path(&mut self) -> crate::Owned<crate::mr::cs::std_filesystem_path>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StringConvFsPath_ConvertTo_std_filesystem_path(self as *mut Self as *mut crate::ffi::MR_CSharp_StringConvFsPath)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_filesystem_path)}
    }

    /// Generated from method `MR::CSharp::StringConvFsPath::operator=`.
    ///
    /// Calls `MR_CSharp_StringConvFsPath_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::StringConvFsPath) -> &mut crate::mr::c_sharp::StringConvFsPath
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StringConvFsPath_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_StringConvFsPath, _other as *const crate::mr::c_sharp::StringConvFsPath as *const crate::ffi::MR_CSharp_StringConvFsPath)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::StringConvFsPath)}
    }

}

unsafe impl crate::CppCopy for StringConvFsPath
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Conversions to string-like types.
/// Those create the additional `operator string` to convert directly to a C# string, and `override string ToString()` to override the method of the implicit base `object`.
/// Generated from class `MR::CSharp::StringConvString`.
///
/// Generated from class `MR::CSharp::StringConvString`. Heap-allocated instances are held in `Owned<StringConvString>`.
#[repr(transparent)]
pub struct StringConvString(crate::ffi::MR_CSharp_StringConvString);

unsafe impl crate::CppClass for StringConvString
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StringConvString_Destroy(ptr as *const crate::ffi::MR_CSharp_StringConvString)}
}

impl StringConvString
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StringConvString_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StringConvString>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StringConvString_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StringConvString)}
    }

    /// Generated from constructor `MR::CSharp::StringConvString::StringConvString`.
    ///
    /// Calls `MR_CSharp_StringConvString_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::StringConvString) -> crate::Owned<crate::mr::c_sharp::StringConvString>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StringConvString_ConstructFromAnother(_other as *const crate::mr::c_sharp::StringConvString as *const crate::ffi::MR_CSharp_StringConvString)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StringConvString)}
    }

    /// Generated from conversion operator `MR::CSharp::StringConvString::operator std::string`.
    ///
    /// Calls `MR_CSharp_StringConvString_ConvertTo_std_string()`.
    pub fn convert_to_std_string(&mut self) -> crate::Owned<crate::mr::cs::std_string>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StringConvString_ConvertTo_std_string(self as *mut Self as *mut crate::ffi::MR_CSharp_StringConvString)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_string)}
    }

    /// Generated from method `MR::CSharp::StringConvString::operator=`.
    ///
    /// Calls `MR_CSharp_StringConvString_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::StringConvString) -> &mut crate::mr::c_sharp::StringConvString
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StringConvString_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_StringConvString, _other as *const crate::mr::c_sharp::StringConvString as *const crate::ffi::MR_CSharp_StringConvString)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::StringConvString)}
    }

}

unsafe impl crate::CppCopy for StringConvString
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::StringConvStringView`.
///
/// Generated from class `MR::CSharp::StringConvStringView`. Heap-allocated instances are held in `Owned<StringConvStringView>`.
#[repr(transparent)]
pub struct StringConvStringView(crate::ffi::MR_CSharp_StringConvStringView);

unsafe impl crate::CppClass for StringConvStringView
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_StringConvStringView_Destroy(ptr as *const crate::ffi::MR_CSharp_StringConvStringView)}
}

impl StringConvStringView
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_StringConvStringView_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::StringConvStringView>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StringConvStringView_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StringConvStringView)}
    }

    /// Generated from constructor `MR::CSharp::StringConvStringView::StringConvStringView`.
    ///
    /// Calls `MR_CSharp_StringConvStringView_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::StringConvStringView) -> crate::Owned<crate::mr::c_sharp::StringConvStringView>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StringConvStringView_ConstructFromAnother(_other as *const crate::mr::c_sharp::StringConvStringView as *const crate::ffi::MR_CSharp_StringConvStringView)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::StringConvStringView)}
    }

    /// Mark this `explicit` and `const` for a change.
    /// Generated from conversion operator `MR::CSharp::StringConvStringView::operator std::string_view`.
    ///
    /// Calls `MR_CSharp_StringConvStringView_ConvertTo_std_string_view()`.
    pub fn convert_to_std_string_view(&self) -> crate::Owned<crate::mr::cs::std_string_view>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StringConvStringView_ConvertTo_std_string_view(self as *const Self as *const crate::ffi::MR_CSharp_StringConvStringView)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_string_view)}
    }

    /// Generated from method `MR::CSharp::StringConvStringView::operator=`.
    ///
    /// Calls `MR_CSharp_StringConvStringView_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::StringConvStringView) -> &mut crate::mr::c_sharp::StringConvStringView
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_StringConvStringView_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_StringConvStringView, _other as *const crate::mr::c_sharp::StringConvStringView as *const crate::ffi::MR_CSharp_StringConvStringView)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::StringConvStringView)}
    }

}

unsafe impl crate::CppCopy for StringConvStringView
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::TestConstness`.
///
/// Generated from class `MR::CSharp::TestConstness`. Heap-allocated instances are held in `Owned<TestConstness>`.
#[repr(transparent)]
pub struct TestConstness(crate::ffi::MR_CSharp_TestConstness);

unsafe impl crate::CppClass for TestConstness
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_TestConstness_Destroy(ptr as *const crate::ffi::MR_CSharp_TestConstness)}
}

impl TestConstness
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_TestConstness_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::TestConstness>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestConstness_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::TestConstness)}
    }

    /// Generated from constructor `MR::CSharp::TestConstness::TestConstness`.
    ///
    /// Calls `MR_CSharp_TestConstness_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::TestConstness) -> crate::Owned<crate::mr::c_sharp::TestConstness>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestConstness_ConstructFromAnother(_other as *const crate::mr::c_sharp::TestConstness as *const crate::ffi::MR_CSharp_TestConstness)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::TestConstness)}
    }

    /// Generated from method `MR::CSharp::TestConstness::operator=`.
    ///
    /// Calls `MR_CSharp_TestConstness_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::TestConstness) -> &mut crate::mr::c_sharp::TestConstness
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestConstness_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_TestConstness, _other as *const crate::mr::c_sharp::TestConstness as *const crate::ffi::MR_CSharp_TestConstness)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::TestConstness)}
    }

    /// Generated from method `MR::CSharp::TestConstness::foo`.
    ///
    /// Calls `MR_CSharp_TestConstness_foo_mut()`.
    pub fn foo_mut(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestConstness_foo_mut(self as *mut Self as *mut crate::ffi::MR_CSharp_TestConstness)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestConstness::foo`.
    ///
    /// Calls `MR_CSharp_TestConstness_foo()`.
    pub fn foo(&self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestConstness_foo(self as *const Self as *const crate::ffi::MR_CSharp_TestConstness)};
        __ret
    }

}

unsafe impl crate::CppCopy for TestConstness
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::TestFields`.
///
/// Generated from class `MR::CSharp::TestFields`. Heap-allocated instances are held in `Owned<TestFields>`.
#[repr(transparent)]
pub struct TestFields(crate::ffi::MR_CSharp_TestFields);

unsafe impl crate::CppClass for TestFields
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_TestFields_Destroy(ptr as *const crate::ffi::MR_CSharp_TestFields)}
}

impl TestFields
{
    /// Generated from constructor `MR::CSharp::TestFields::TestFields`.
    ///
    /// Calls `MR_CSharp_TestFields_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::TestFields) -> crate::Owned<crate::mr::c_sharp::TestFields>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::TestFields as *mut crate::ffi::MR_CSharp_TestFields)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::TestFields)}
    }

    /// Constructs `MR::CSharp::TestFields` elementwise.
    ///
    /// Calls `MR_CSharp_TestFields_ConstructFrom()`.
    /// The reference to the parameter `i` might be preserved in the constructed object.
    /// The reference to the parameter `const_i` might be preserved in the constructed object.
    /// The reference to the parameter `i_ref` might be preserved in the constructed object.
    /// The reference to the parameter `const_i_ref` might be preserved in the constructed object.
    /// The reference to the parameter `s` might be preserved in the constructed object.
    /// The reference to the parameter `const_s` might be preserved in the constructed object.
    /// The reference to the parameter `s_ref` might be preserved in the constructed object.
    /// The reference to the parameter `const_s_ref` might be preserved in the constructed object.
    pub fn construct_from(i: i32, const_i: i32, i_ref: &mut i32, const_i_ref: &i32, s: &str, const_s: &str, s_ref: &mut crate::mr::cs::std_string, const_s_ref: &str) -> crate::Owned<crate::mr::c_sharp::TestFields>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_ConstructFrom(i, const_i, i_ref as *mut i32 as *mut i32, const_i_ref as *const i32 as *const i32, s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char, const_s.as_ptr() as *const core::ffi::c_char, const_s.as_ptr().wrapping_add(const_s.len()) as *const core::ffi::c_char, s_ref as *mut crate::mr::cs::std_string as *mut crate::ffi::MR_C_std_string, const_s_ref.as_ptr() as *const core::ffi::c_char, const_s_ref.as_ptr().wrapping_add(const_s_ref.len()) as *const core::ffi::c_char)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::TestFields)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_i`.
    ///
    /// Calls `MR_CSharp_TestFields_Get_static_i()`.
    pub fn static_i() -> *const i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_Get_static_i()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::TestFields` named `static_i`.
    ///
    /// Calls `MR_CSharp_TestFields_GetMutable_static_i()`.
    pub fn static_i_mut() -> *mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_GetMutable_static_i()};
        __ret
    }

    /// Modifies a member variable of class `MR::CSharp::TestFields` named `static_i`.
    ///
    /// Calls `MR_CSharp_TestFields_Set_static_i()`.
    /// The reference to the parameter `value` might be preserved in this object in element `static_i`.
    pub fn set_static_i(value: i32)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_Set_static_i(value)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_const_i`.
    ///
    /// Calls `MR_CSharp_TestFields_Get_static_const_i()`.
    pub fn static_const_i() -> *const i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_Get_static_const_i()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_i_ref`.
    ///
    /// Calls `MR_CSharp_TestFields_Get_static_i_ref()`.
    pub fn static_i_ref() -> *mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_Get_static_i_ref()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_const_i_ref`.
    ///
    /// Calls `MR_CSharp_TestFields_Get_static_const_i_ref()`.
    pub fn static_const_i_ref() -> *const i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_Get_static_const_i_ref()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_s`.
    ///
    /// Calls `MR_CSharp_TestFields_Get_static_s()`.
    pub fn static_s() -> *const crate::ffi::MR_C_std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_Get_static_s()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::TestFields` named `static_s`.
    ///
    /// Calls `MR_CSharp_TestFields_GetMutable_static_s()`.
    pub fn static_s_mut() -> *mut crate::ffi::MR_C_std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_GetMutable_static_s()};
        __ret
    }

    /// Modifies a member variable of class `MR::CSharp::TestFields` named `static_s`.
    ///
    /// Calls `MR_CSharp_TestFields_Set_static_s()`.
    /// The reference to the parameter `value` might be preserved in this object in element `static_s`.
    pub fn set_static_s(value: &str)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_Set_static_s(value.as_ptr() as *const core::ffi::c_char, value.as_ptr().wrapping_add(value.len()) as *const core::ffi::c_char)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_const_s`.
    ///
    /// Calls `MR_CSharp_TestFields_Get_static_const_s()`.
    pub fn static_const_s() -> *const crate::ffi::MR_C_std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_Get_static_const_s()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_s_ref`.
    ///
    /// Calls `MR_CSharp_TestFields_Get_static_s_ref()`.
    pub fn static_s_ref() -> *mut crate::ffi::MR_C_std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_Get_static_s_ref()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_const_s_ref`.
    ///
    /// Calls `MR_CSharp_TestFields_Get_static_const_s_ref()`.
    pub fn static_const_s_ref() -> *const crate::ffi::MR_C_std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_Get_static_const_s_ref()};
        __ret
    }

    /// < Test same-line documentation comment.
    /// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `i`.
    ///
    /// Calls `MR_CSharp_TestFields_Get_i()`.
    /// The reference to this object might be preserved as the return value.
    pub fn i<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_Get_i(self as *const Self as *const crate::ffi::MR_CSharp_TestFields)};
        unsafe {&*(__ret as *const i32)}
    }

    /// < Test same-line documentation comment.
    /// Returns a mutable pointer to a member variable of class `MR::CSharp::TestFields` named `i`.
    ///
    /// Calls `MR_CSharp_TestFields_GetMutable_i()`.
    /// The reference to this object might be preserved as the return value.
    pub fn i_mut<'a>(&'a mut self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_GetMutable_i(self as *mut Self as *mut crate::ffi::MR_CSharp_TestFields)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// < Test same-line documentation comment.
    /// Modifies a member variable of class `MR::CSharp::TestFields` named `i`.
    ///
    /// Calls `MR_CSharp_TestFields_Set_i()`.
    /// The reference to the parameter `value` might be preserved in this object in element `i`.
    pub fn set_i(&mut self, value: i32)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_Set_i(self as *mut Self as *mut crate::ffi::MR_CSharp_TestFields, value)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `const_i`.
    ///
    /// Calls `MR_CSharp_TestFields_Get_const_i()`.
    /// The reference to this object might be preserved as the return value.
    pub fn const_i<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_Get_const_i(self as *const Self as *const crate::ffi::MR_CSharp_TestFields)};
        unsafe {&*(__ret as *const i32)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `i_ref`.
    ///
    /// Calls `MR_CSharp_TestFields_Get_i_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn i_ref<'a>(&'a self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_Get_i_ref(self as *const Self as *const crate::ffi::MR_CSharp_TestFields)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `const_i_ref`.
    ///
    /// Calls `MR_CSharp_TestFields_Get_const_i_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn const_i_ref<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_Get_const_i_ref(self as *const Self as *const crate::ffi::MR_CSharp_TestFields)};
        unsafe {&*(__ret as *const i32)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `s`.
    ///
    /// Calls `MR_CSharp_TestFields_Get_s()`.
    /// The reference to this object might be preserved as the return value.
    pub fn s<'a>(&'a self) -> &'a crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_Get_s(self as *const Self as *const crate::ffi::MR_CSharp_TestFields)};
        unsafe {&*(__ret as *const crate::mr::cs::std_string)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::TestFields` named `s`.
    ///
    /// Calls `MR_CSharp_TestFields_GetMutable_s()`.
    /// The reference to this object might be preserved as the return value.
    pub fn s_mut<'a>(&'a mut self) -> &'a mut crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_GetMutable_s(self as *mut Self as *mut crate::ffi::MR_CSharp_TestFields)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_string)}
    }

    /// Modifies a member variable of class `MR::CSharp::TestFields` named `s`.
    ///
    /// Calls `MR_CSharp_TestFields_Set_s()`.
    /// The reference to the parameter `value` might be preserved in this object in element `s`.
    pub fn set_s(&mut self, value: &str)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_Set_s(self as *mut Self as *mut crate::ffi::MR_CSharp_TestFields, value.as_ptr() as *const core::ffi::c_char, value.as_ptr().wrapping_add(value.len()) as *const core::ffi::c_char)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `const_s`.
    ///
    /// Calls `MR_CSharp_TestFields_Get_const_s()`.
    /// The reference to this object might be preserved as the return value.
    pub fn const_s<'a>(&'a self) -> &'a crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_Get_const_s(self as *const Self as *const crate::ffi::MR_CSharp_TestFields)};
        unsafe {&*(__ret as *const crate::mr::cs::std_string)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `s_ref`.
    ///
    /// Calls `MR_CSharp_TestFields_Get_s_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn s_ref<'a>(&'a self) -> &'a mut crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_Get_s_ref(self as *const Self as *const crate::ffi::MR_CSharp_TestFields)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_string)}
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `const_s_ref`.
    ///
    /// Calls `MR_CSharp_TestFields_Get_const_s_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn const_s_ref<'a>(&'a self) -> &'a crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestFields_Get_const_s_ref(self as *const Self as *const crate::ffi::MR_CSharp_TestFields)};
        unsafe {&*(__ret as *const crate::mr::cs::std_string)}
    }

}

unsafe impl crate::CppCopy for TestFields
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::TestOpsA`.
///
/// Generated from class `MR::CSharp::TestOpsA`. Heap-allocated instances are held in `Owned<TestOpsA>`.
#[repr(transparent)]
pub struct TestOpsA(crate::ffi::MR_CSharp_TestOpsA);

unsafe impl crate::CppClass for TestOpsA
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_TestOpsA_Destroy(ptr as *const crate::ffi::MR_CSharp_TestOpsA)}
}

impl TestOpsA
{
    /// Generated from constructor `MR::CSharp::TestOpsA::TestOpsA`.
    ///
    /// Calls `MR_CSharp_TestOpsA_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::TestOpsA) -> crate::Owned<crate::mr::c_sharp::TestOpsA>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsA_ConstructFromAnother(_other as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::TestOpsA)}
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator=`.
    ///
    /// Calls `MR_CSharp_TestOpsA_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsA_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _other as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator+`.
    ///
    /// Calls `MR_C_pos_MR_CSharp_TestOpsA()`.
    pub fn op_pos(&mut self) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_pos_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator+`.
    ///
    /// Calls `MR_C_add_MR_CSharp_TestOpsA()`.
    pub fn op_add(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_add_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator-`.
    ///
    /// Calls `MR_C_neg_MR_CSharp_TestOpsA()`.
    pub fn op_neg(&mut self) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_neg_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator-`.
    ///
    /// Calls `MR_C_sub_MR_CSharp_TestOpsA()`.
    pub fn op_sub(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_sub_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator*`.
    ///
    /// Calls `MR_C_deref_MR_CSharp_TestOpsA()`.
    /// The reference to this object might be preserved in the return value.
    pub fn op_deref(&mut self) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_deref_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator*`.
    ///
    /// Calls `MR_C_mul_MR_CSharp_TestOpsA()`.
    pub fn op_mul(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_mul_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator/`.
    ///
    /// Calls `MR_C_div_MR_CSharp_TestOpsA()`.
    pub fn op_div(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_div_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator%`.
    ///
    /// Calls `MR_C_mod_MR_CSharp_TestOpsA()`.
    pub fn op_mod(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_mod_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator^`.
    ///
    /// Calls `MR_C_xor_MR_CSharp_TestOpsA()`.
    pub fn op_xor(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_xor_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator&`.
    ///
    /// Calls `MR_C_addressof_MR_CSharp_TestOpsA()`.
    pub fn op_addressof(&mut self) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_addressof_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator&`.
    ///
    /// Calls `MR_C_bitand_MR_CSharp_TestOpsA()`.
    pub fn op_bitand(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_bitand_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator|`.
    ///
    /// Calls `MR_C_bitor_MR_CSharp_TestOpsA()`.
    pub fn op_bitor(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_bitor_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator~`.
    ///
    /// Calls `MR_C_compl_MR_CSharp_TestOpsA()`.
    pub fn op_compl(&mut self) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_compl_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator!`.
    ///
    /// Calls `MR_C_not_MR_CSharp_TestOpsA()`.
    pub fn op_not(&mut self) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_not_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator+=`.
    ///
    /// Calls `MR_CSharp_TestOpsA_add_assign()`.
    pub fn add_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsA_add_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator-=`.
    ///
    /// Calls `MR_CSharp_TestOpsA_sub_assign()`.
    pub fn sub_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsA_sub_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator*=`.
    ///
    /// Calls `MR_CSharp_TestOpsA_mul_assign()`.
    pub fn mul_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsA_mul_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator/=`.
    ///
    /// Calls `MR_CSharp_TestOpsA_div_assign()`.
    pub fn div_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsA_div_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator%=`.
    ///
    /// Calls `MR_CSharp_TestOpsA_mod_assign()`.
    pub fn mod_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsA_mod_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator^=`.
    ///
    /// Calls `MR_CSharp_TestOpsA_xor_assign()`.
    pub fn xor_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsA_xor_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator&=`.
    ///
    /// Calls `MR_CSharp_TestOpsA_bitand_assign()`.
    pub fn bitand_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsA_bitand_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator|=`.
    ///
    /// Calls `MR_CSharp_TestOpsA_bitor_assign()`.
    pub fn bitor_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsA_bitor_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator<<`.
    ///
    /// Calls `MR_C_lshift_MR_CSharp_TestOpsA()`.
    pub fn op_lshift(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_lshift_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator>>`.
    ///
    /// Calls `MR_C_rshift_MR_CSharp_TestOpsA()`.
    pub fn op_rshift(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_rshift_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator<<=`.
    ///
    /// Calls `MR_CSharp_TestOpsA_lshift_assign()`.
    pub fn lshift_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsA_lshift_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator>>=`.
    ///
    /// Calls `MR_CSharp_TestOpsA_rshift_assign()`.
    pub fn rshift_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsA_rshift_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator<=>`.
    ///
    /// Calls `MR_C_compare_three_way_MR_CSharp_TestOpsA()`.
    pub fn op_compare_three_way(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_compare_three_way_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator&&`.
    ///
    /// Calls `MR_C_and_MR_CSharp_TestOpsA()`.
    pub fn op_and(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_and_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator||`.
    ///
    /// Calls `MR_C_or_MR_CSharp_TestOpsA()`.
    pub fn op_or(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_or_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator,`.
    ///
    /// Calls `MR_C_comma_MR_CSharp_TestOpsA()`.
    pub fn op_comma(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_comma_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator->*`.
    ///
    /// Calls `MR_CSharp_TestOpsA_arrow_star()`.
    pub fn arrow_star(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsA_arrow_star(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator->`.
    ///
    /// Calls `MR_CSharp_TestOpsA_arrow()`.
    pub fn arrow(&mut self) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsA_arrow(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator()`.
    ///
    /// Calls `MR_CSharp_TestOpsA_call()`.
    pub fn call(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsA_call(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsA::operator[]`.
    ///
    /// Calls `MR_CSharp_TestOpsA_index()`.
    pub fn index(&mut self, _1: &crate::mr::c_sharp::TestOpsA) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsA_index(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsA, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

}

unsafe impl crate::CppCopy for TestOpsA
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::TestOpsB`.
///
/// Generated from class `MR::CSharp::TestOpsB`. Heap-allocated instances are held in `Owned<TestOpsB>`.
#[repr(transparent)]
pub struct TestOpsB(crate::ffi::MR_CSharp_TestOpsB);

unsafe impl crate::CppClass for TestOpsB
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_TestOpsB_Destroy(ptr as *const crate::ffi::MR_CSharp_TestOpsB)}
}

impl TestOpsB
{
    /// Generated from constructor `MR::CSharp::TestOpsB::TestOpsB`.
    ///
    /// Calls `MR_CSharp_TestOpsB_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::TestOpsB) -> crate::Owned<crate::mr::c_sharp::TestOpsB>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsB_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::TestOpsB)}
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator=`.
    ///
    /// Calls `MR_CSharp_TestOpsB_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsB_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator+`.
    ///
    /// Calls `MR_C_pos_MR_CSharp_TestOpsB()`.
    pub fn op_pos(&mut self) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_pos_MR_CSharp_TestOpsB(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator+`.
    ///
    /// Calls `MR_C_add_MR_CSharp_TestOpsB()`.
    pub fn op_add(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_add_MR_CSharp_TestOpsB(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator-`.
    ///
    /// Calls `MR_C_neg_MR_CSharp_TestOpsB()`.
    pub fn op_neg(&mut self) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_neg_MR_CSharp_TestOpsB(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator-`.
    ///
    /// Calls `MR_C_sub_MR_CSharp_TestOpsB()`.
    pub fn op_sub(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_sub_MR_CSharp_TestOpsB(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator*`.
    ///
    /// Calls `MR_C_deref_MR_CSharp_TestOpsB()`.
    /// The reference to this object might be preserved in the return value.
    pub fn op_deref(&mut self) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_deref_MR_CSharp_TestOpsB(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator*`.
    ///
    /// Calls `MR_C_mul_MR_CSharp_TestOpsB()`.
    pub fn op_mul(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_mul_MR_CSharp_TestOpsB(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator/`.
    ///
    /// Calls `MR_C_div_MR_CSharp_TestOpsB()`.
    pub fn op_div(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_div_MR_CSharp_TestOpsB(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator%`.
    ///
    /// Calls `MR_C_mod_MR_CSharp_TestOpsB()`.
    pub fn op_mod(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_mod_MR_CSharp_TestOpsB(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator^`.
    ///
    /// Calls `MR_C_xor_MR_CSharp_TestOpsB()`.
    pub fn op_xor(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_xor_MR_CSharp_TestOpsB(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator&`.
    ///
    /// Calls `MR_C_addressof_MR_CSharp_TestOpsB()`.
    pub fn op_addressof(&mut self) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_addressof_MR_CSharp_TestOpsB(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator&`.
    ///
    /// Calls `MR_C_bitand_MR_CSharp_TestOpsB()`.
    pub fn op_bitand(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_bitand_MR_CSharp_TestOpsB(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator|`.
    ///
    /// Calls `MR_C_bitor_MR_CSharp_TestOpsB()`.
    pub fn op_bitor(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_bitor_MR_CSharp_TestOpsB(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator~`.
    ///
    /// Calls `MR_C_compl_MR_CSharp_TestOpsB()`.
    pub fn op_compl(&mut self) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_compl_MR_CSharp_TestOpsB(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator!`.
    ///
    /// Calls `MR_C_not_MR_CSharp_TestOpsB()`.
    pub fn op_not(&mut self) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_not_MR_CSharp_TestOpsB(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator+=`.
    ///
    /// Calls `MR_CSharp_TestOpsB_add_assign()`.
    pub fn add_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsB_add_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator-=`.
    ///
    /// Calls `MR_CSharp_TestOpsB_sub_assign()`.
    pub fn sub_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsB_sub_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator*=`.
    ///
    /// Calls `MR_CSharp_TestOpsB_mul_assign()`.
    pub fn mul_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsB_mul_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator/=`.
    ///
    /// Calls `MR_CSharp_TestOpsB_div_assign()`.
    pub fn div_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsB_div_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator%=`.
    ///
    /// Calls `MR_CSharp_TestOpsB_mod_assign()`.
    pub fn mod_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsB_mod_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator^=`.
    ///
    /// Calls `MR_CSharp_TestOpsB_xor_assign()`.
    pub fn xor_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsB_xor_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator&=`.
    ///
    /// Calls `MR_CSharp_TestOpsB_bitand_assign()`.
    pub fn bitand_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsB_bitand_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator|=`.
    ///
    /// Calls `MR_CSharp_TestOpsB_bitor_assign()`.
    pub fn bitor_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsB_bitor_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator<<`.
    ///
    /// Calls `MR_C_lshift_MR_CSharp_TestOpsB()`.
    pub fn op_lshift(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_lshift_MR_CSharp_TestOpsB(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator>>`.
    ///
    /// Calls `MR_C_rshift_MR_CSharp_TestOpsB()`.
    pub fn op_rshift(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_rshift_MR_CSharp_TestOpsB(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator<<=`.
    ///
    /// Calls `MR_CSharp_TestOpsB_lshift_assign()`.
    pub fn lshift_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsB_lshift_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator>>=`.
    ///
    /// Calls `MR_CSharp_TestOpsB_rshift_assign()`.
    pub fn rshift_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsB_rshift_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator<=>`.
    ///
    /// Calls `MR_C_compare_three_way_MR_CSharp_TestOpsB()`.
    pub fn op_compare_three_way(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_compare_three_way_MR_CSharp_TestOpsB(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator&&`.
    ///
    /// Calls `MR_C_and_MR_CSharp_TestOpsB()`.
    pub fn op_and(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_and_MR_CSharp_TestOpsB(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator||`.
    ///
    /// Calls `MR_C_or_MR_CSharp_TestOpsB()`.
    pub fn op_or(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_or_MR_CSharp_TestOpsB(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator,`.
    ///
    /// Calls `MR_C_comma_MR_CSharp_TestOpsB()`.
    pub fn op_comma(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_C_comma_MR_CSharp_TestOpsB(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator->*`.
    ///
    /// Calls `MR_CSharp_TestOpsB_arrow_star()`.
    pub fn arrow_star(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsB_arrow_star(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator->`.
    ///
    /// Calls `MR_CSharp_TestOpsB_arrow()`.
    pub fn arrow(&mut self) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsB_arrow(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator()`.
    ///
    /// Calls `MR_CSharp_TestOpsB_call()`.
    pub fn call(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsB_call(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsB::operator[]`.
    ///
    /// Calls `MR_CSharp_TestOpsB_index()`.
    pub fn index(&mut self, _1: &crate::mr::c_sharp::TestOpsB) -> i32
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsB_index(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsB, crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::TestOpsB as *mut crate::ffi::MR_CSharp_TestOpsB)};
        __ret
    }

}

unsafe impl crate::CppCopy for TestOpsB
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::TestOpsC`.
///
/// Generated from class `MR::CSharp::TestOpsC`. Heap-allocated instances are held in `Owned<TestOpsC>`.
#[repr(transparent)]
pub struct TestOpsC(crate::ffi::MR_CSharp_TestOpsC);

unsafe impl crate::CppClass for TestOpsC
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_TestOpsC_Destroy(ptr as *const crate::ffi::MR_CSharp_TestOpsC)}
}

impl TestOpsC
{
    /// Generated from constructor `MR::CSharp::TestOpsC::TestOpsC`.
    ///
    /// Calls `MR_CSharp_TestOpsC_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::TestOpsC) -> crate::Owned<crate::mr::c_sharp::TestOpsC>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsC_ConstructFromAnother(_other as *const crate::mr::c_sharp::TestOpsC as *const crate::ffi::MR_CSharp_TestOpsC)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::TestOpsC)}
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator=`.
    ///
    /// Calls `MR_CSharp_TestOpsC_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::TestOpsC) -> &mut crate::mr::c_sharp::TestOpsC
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsC_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _other as *const crate::mr::c_sharp::TestOpsC as *const crate::ffi::MR_CSharp_TestOpsC)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::TestOpsC)}
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator+`.
    ///
    /// Calls `MR_C_pos_MR_CSharp_TestOpsC()`.
    pub fn op_pos(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_pos_MR_CSharp_TestOpsC(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator+`.
    ///
    /// Calls `MR_C_add_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
    pub fn op_add_mr_c_sharp_test_ops_a(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_C_add_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator-`.
    ///
    /// Calls `MR_C_neg_MR_CSharp_TestOpsC()`.
    pub fn op_neg(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_neg_MR_CSharp_TestOpsC(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator-`.
    ///
    /// Calls `MR_C_sub_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
    pub fn op_sub_mr_c_sharp_test_ops_a(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_C_sub_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator*`.
    ///
    /// Calls `MR_C_deref_MR_CSharp_TestOpsC()`.
    pub fn op_deref(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_deref_MR_CSharp_TestOpsC(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator*`.
    ///
    /// Calls `MR_C_mul_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
    pub fn op_mul_mr_c_sharp_test_ops_a(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_C_mul_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator/`.
    ///
    /// Calls `MR_C_div_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
    pub fn op_div_mr_c_sharp_test_ops_a(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_C_div_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator%`.
    ///
    /// Calls `MR_C_mod_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
    pub fn op_mod_mr_c_sharp_test_ops_a(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_C_mod_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator^`.
    ///
    /// Calls `MR_C_xor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
    pub fn op_xor_mr_c_sharp_test_ops_a(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_C_xor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator&`.
    ///
    /// Calls `MR_C_addressof_MR_CSharp_TestOpsC()`.
    pub fn op_addressof(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_addressof_MR_CSharp_TestOpsC(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator&`.
    ///
    /// Calls `MR_C_bitand_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
    pub fn op_bitand_mr_c_sharp_test_ops_a(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_C_bitand_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator|`.
    ///
    /// Calls `MR_C_bitor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
    pub fn op_bitor_mr_c_sharp_test_ops_a(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_C_bitor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator~`.
    ///
    /// Calls `MR_C_compl_MR_CSharp_TestOpsC()`.
    pub fn op_compl(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_compl_MR_CSharp_TestOpsC(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator!`.
    ///
    /// Calls `MR_C_not_MR_CSharp_TestOpsC()`.
    pub fn op_not(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_not_MR_CSharp_TestOpsC(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator=`.
    ///
    /// Calls `MR_CSharp_TestOpsC_assign()`.
    pub fn assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsC_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator+=`.
    ///
    /// Calls `MR_CSharp_TestOpsC_add_assign()`.
    pub fn add_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsC_add_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator-=`.
    ///
    /// Calls `MR_CSharp_TestOpsC_sub_assign()`.
    pub fn sub_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsC_sub_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator*=`.
    ///
    /// Calls `MR_CSharp_TestOpsC_mul_assign()`.
    pub fn mul_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsC_mul_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator/=`.
    ///
    /// Calls `MR_CSharp_TestOpsC_div_assign()`.
    pub fn div_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsC_div_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator%=`.
    ///
    /// Calls `MR_CSharp_TestOpsC_mod_assign()`.
    pub fn mod_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsC_mod_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator^=`.
    ///
    /// Calls `MR_CSharp_TestOpsC_xor_assign()`.
    pub fn xor_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsC_xor_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator&=`.
    ///
    /// Calls `MR_CSharp_TestOpsC_bitand_assign()`.
    pub fn bitand_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsC_bitand_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator|=`.
    ///
    /// Calls `MR_CSharp_TestOpsC_bitor_assign()`.
    pub fn bitor_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsC_bitor_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator<<`.
    ///
    /// Calls `MR_C_lshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
    pub fn op_lshift_mr_c_sharp_test_ops_a(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_C_lshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator>>`.
    ///
    /// Calls `MR_C_rshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
    pub fn op_rshift_mr_c_sharp_test_ops_a(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_C_rshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator<<=`.
    ///
    /// Calls `MR_CSharp_TestOpsC_lshift_assign()`.
    pub fn lshift_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsC_lshift_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator>>=`.
    ///
    /// Calls `MR_CSharp_TestOpsC_rshift_assign()`.
    pub fn rshift_assign(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsC_rshift_assign(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator<=>`.
    ///
    /// Calls `MR_C_compare_three_way_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
    pub fn op_compare_three_way_mr_c_sharp_test_ops_a(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_C_compare_three_way_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator&&`.
    ///
    /// Calls `MR_C_and_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
    pub fn op_and_mr_c_sharp_test_ops_a(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_C_and_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator||`.
    ///
    /// Calls `MR_C_or_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
    pub fn op_or_mr_c_sharp_test_ops_a(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_C_or_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator,`.
    ///
    /// Calls `MR_C_comma_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
    pub fn op_comma_mr_c_sharp_test_ops_a(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_C_comma_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator->*`.
    ///
    /// Calls `MR_CSharp_TestOpsC_arrow_star()`.
    pub fn arrow_star(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsC_arrow_star(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator->`.
    ///
    /// Calls `MR_CSharp_TestOpsC_arrow()`.
    pub fn arrow(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsC_arrow(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator()`.
    ///
    /// Calls `MR_CSharp_TestOpsC_call()`.
    pub fn call(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsC_call(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

    /// Generated from method `MR::CSharp::TestOpsC::operator[]`.
    ///
    /// Calls `MR_CSharp_TestOpsC_index()`.
    pub fn index(&mut self, _1: &crate::mr::c_sharp::TestOpsA)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestOpsC_index(self as *mut Self as *mut crate::ffi::MR_CSharp_TestOpsC, _1 as *const crate::mr::c_sharp::TestOpsA as *const crate::ffi::MR_CSharp_TestOpsA)};
        __ret
    }

}

unsafe impl crate::CppCopy for TestOpsC
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Test `std::function`.
/// Generated from class `MR::CSharp::TestStdFunction`.
///
/// Generated from class `MR::CSharp::TestStdFunction`. Heap-allocated instances are held in `Owned<TestStdFunction>`.
#[repr(transparent)]
pub struct TestStdFunction(crate::ffi::MR_CSharp_TestStdFunction);

unsafe impl crate::CppClass for TestStdFunction
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_TestStdFunction_Destroy(ptr as *const crate::ffi::MR_CSharp_TestStdFunction)}
}

impl TestStdFunction
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_TestStdFunction_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::TestStdFunction>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::TestStdFunction)}
    }

    /// Constructs `MR::CSharp::TestStdFunction` elementwise.
    ///
    /// Calls `MR_CSharp_TestStdFunction_ConstructFrom()`.
    /// The reference to the parameter `f1` might be preserved in the constructed object.
    /// The reference to the parameter `f2` might be preserved in the constructed object.
    /// The reference to the parameter `f3` might be preserved in the constructed object.
    /// The reference to the parameter `f4` might be preserved in the constructed object.
    /// The reference to the parameter `f5` might be preserved in the constructed object.
    /// The reference to the parameter `f6` might be preserved in the constructed object.
    /// The reference to the parameter `f7` might be preserved in the constructed object.
    pub fn construct_from(f1: &crate::mr::cs::std_function_int32_t_from_std_string, f2: &crate::mr::cs::std_function_std_string_from_int32_t_int32_t, f3: &crate::mr::cs::std_function_MR_CSharp_E1_from_MR_CSharp_E1, f4: &crate::mr::cs::std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC, f5: &crate::mr::cs::std_function_int32_t_ref_from_int32_t_ref_int32_t_rvalue_ref, f6: &crate::mr::cs::std_function_int32_t_rvalue_ref, f7: &crate::mr::cs::std_function_void) -> crate::Owned<crate::mr::c_sharp::TestStdFunction>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_ConstructFrom(crate::ffi::MR_C_PassBy_Copy, f1 as *const crate::mr::cs::std_function_int32_t_from_std_string as *mut crate::ffi::MR_C_std_function_int32_t_from_std_string, crate::ffi::MR_C_PassBy_Copy, f2 as *const crate::mr::cs::std_function_std_string_from_int32_t_int32_t as *mut crate::ffi::MR_C_std_function_std_string_from_int32_t_int32_t, crate::ffi::MR_C_PassBy_Copy, f3 as *const crate::mr::cs::std_function_MR_CSharp_E1_from_MR_CSharp_E1 as *mut crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1, crate::ffi::MR_C_PassBy_Copy, f4 as *const crate::mr::cs::std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC as *mut crate::ffi::MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC, crate::ffi::MR_C_PassBy_Copy, f5 as *const crate::mr::cs::std_function_int32_t_ref_from_int32_t_ref_int32_t_rvalue_ref as *mut crate::ffi::MR_C_std_function_int32_t_ref_from_int32_t_ref_int32_t_rvalue_ref, crate::ffi::MR_C_PassBy_Copy, f6 as *const crate::mr::cs::std_function_int32_t_rvalue_ref as *mut crate::ffi::MR_C_std_function_int32_t_rvalue_ref, crate::ffi::MR_C_PassBy_Copy, f7 as *const crate::mr::cs::std_function_void as *mut crate::ffi::MR_C_std_function_void)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::TestStdFunction)}
    }

    /// Generated from constructor `MR::CSharp::TestStdFunction::TestStdFunction`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::TestStdFunction) -> crate::Owned<crate::mr::c_sharp::TestStdFunction>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::TestStdFunction as *mut crate::ffi::MR_CSharp_TestStdFunction)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::TestStdFunction)}
    }

    /// Generated from method `MR::CSharp::TestStdFunction::operator=`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::TestStdFunction) -> &mut crate::mr::c_sharp::TestStdFunction
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_TestStdFunction, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::c_sharp::TestStdFunction as *mut crate::ffi::MR_CSharp_TestStdFunction)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::TestStdFunction)}
    }

    /// Generated from method `MR::CSharp::TestStdFunction::Call`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_Call()`.
    pub fn call(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_Call(self as *mut Self as *mut crate::ffi::MR_CSharp_TestStdFunction)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f1`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_Get_f1()`.
    /// The reference to this object might be preserved as the return value.
    pub fn f1<'a>(&'a self) -> &'a crate::mr::cs::std_function_int32_t_from_std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_Get_f1(self as *const Self as *const crate::ffi::MR_CSharp_TestStdFunction)};
        unsafe {&*(__ret as *const crate::mr::cs::std_function_int32_t_from_std_string)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f1`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_GetMutable_f1()`.
    /// The reference to this object might be preserved as the return value.
    pub fn f1_mut<'a>(&'a mut self) -> &'a mut crate::mr::cs::std_function_int32_t_from_std_string
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_GetMutable_f1(self as *mut Self as *mut crate::ffi::MR_CSharp_TestStdFunction)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_function_int32_t_from_std_string)}
    }

    /// Modifies a member variable of class `MR::CSharp::TestStdFunction` named `f1`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_Set_f1()`.
    /// The reference to the parameter `value` might be preserved in this object in element `f1`.
    pub fn set_f1(&mut self, value: &crate::mr::cs::std_function_int32_t_from_std_string)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_Set_f1(self as *mut Self as *mut crate::ffi::MR_CSharp_TestStdFunction, crate::ffi::MR_C_PassBy_Copy, value as *const crate::mr::cs::std_function_int32_t_from_std_string as *mut crate::ffi::MR_C_std_function_int32_t_from_std_string)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f2`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_Get_f2()`.
    /// The reference to this object might be preserved as the return value.
    pub fn f2<'a>(&'a self) -> &'a crate::mr::cs::std_function_std_string_from_int32_t_int32_t
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_Get_f2(self as *const Self as *const crate::ffi::MR_CSharp_TestStdFunction)};
        unsafe {&*(__ret as *const crate::mr::cs::std_function_std_string_from_int32_t_int32_t)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f2`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_GetMutable_f2()`.
    /// The reference to this object might be preserved as the return value.
    pub fn f2_mut<'a>(&'a mut self) -> &'a mut crate::mr::cs::std_function_std_string_from_int32_t_int32_t
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_GetMutable_f2(self as *mut Self as *mut crate::ffi::MR_CSharp_TestStdFunction)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_function_std_string_from_int32_t_int32_t)}
    }

    /// Modifies a member variable of class `MR::CSharp::TestStdFunction` named `f2`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_Set_f2()`.
    /// The reference to the parameter `value` might be preserved in this object in element `f2`.
    pub fn set_f2(&mut self, value: &crate::mr::cs::std_function_std_string_from_int32_t_int32_t)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_Set_f2(self as *mut Self as *mut crate::ffi::MR_CSharp_TestStdFunction, crate::ffi::MR_C_PassBy_Copy, value as *const crate::mr::cs::std_function_std_string_from_int32_t_int32_t as *mut crate::ffi::MR_C_std_function_std_string_from_int32_t_int32_t)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f3`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_Get_f3()`.
    /// The reference to this object might be preserved as the return value.
    pub fn f3<'a>(&'a self) -> &'a crate::mr::cs::std_function_MR_CSharp_E1_from_MR_CSharp_E1
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_Get_f3(self as *const Self as *const crate::ffi::MR_CSharp_TestStdFunction)};
        unsafe {&*(__ret as *const crate::mr::cs::std_function_MR_CSharp_E1_from_MR_CSharp_E1)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f3`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_GetMutable_f3()`.
    /// The reference to this object might be preserved as the return value.
    pub fn f3_mut<'a>(&'a mut self) -> &'a mut crate::mr::cs::std_function_MR_CSharp_E1_from_MR_CSharp_E1
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_GetMutable_f3(self as *mut Self as *mut crate::ffi::MR_CSharp_TestStdFunction)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_function_MR_CSharp_E1_from_MR_CSharp_E1)}
    }

    /// Modifies a member variable of class `MR::CSharp::TestStdFunction` named `f3`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_Set_f3()`.
    /// The reference to the parameter `value` might be preserved in this object in element `f3`.
    pub fn set_f3(&mut self, value: &crate::mr::cs::std_function_MR_CSharp_E1_from_MR_CSharp_E1)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_Set_f3(self as *mut Self as *mut crate::ffi::MR_CSharp_TestStdFunction, crate::ffi::MR_C_PassBy_Copy, value as *const crate::mr::cs::std_function_MR_CSharp_E1_from_MR_CSharp_E1 as *mut crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f4`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_Get_f4()`.
    /// The reference to this object might be preserved as the return value.
    pub fn f4<'a>(&'a self) -> &'a crate::mr::cs::std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_Get_f4(self as *const Self as *const crate::ffi::MR_CSharp_TestStdFunction)};
        unsafe {&*(__ret as *const crate::mr::cs::std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f4`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_GetMutable_f4()`.
    /// The reference to this object might be preserved as the return value.
    pub fn f4_mut<'a>(&'a mut self) -> &'a mut crate::mr::cs::std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_GetMutable_f4(self as *mut Self as *mut crate::ffi::MR_CSharp_TestStdFunction)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC)}
    }

    /// Modifies a member variable of class `MR::CSharp::TestStdFunction` named `f4`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_Set_f4()`.
    /// The reference to the parameter `value` might be preserved in this object in element `f4`.
    pub fn set_f4(&mut self, value: &crate::mr::cs::std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_Set_f4(self as *mut Self as *mut crate::ffi::MR_CSharp_TestStdFunction, crate::ffi::MR_C_PassBy_Copy, value as *const crate::mr::cs::std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC as *mut crate::ffi::MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f5`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_Get_f5()`.
    /// The reference to this object might be preserved as the return value.
    pub fn f5<'a>(&'a self) -> &'a crate::mr::cs::std_function_int32_t_ref_from_int32_t_ref_int32_t_rvalue_ref
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_Get_f5(self as *const Self as *const crate::ffi::MR_CSharp_TestStdFunction)};
        unsafe {&*(__ret as *const crate::mr::cs::std_function_int32_t_ref_from_int32_t_ref_int32_t_rvalue_ref)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f5`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_GetMutable_f5()`.
    /// The reference to this object might be preserved as the return value.
    pub fn f5_mut<'a>(&'a mut self) -> &'a mut crate::mr::cs::std_function_int32_t_ref_from_int32_t_ref_int32_t_rvalue_ref
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_GetMutable_f5(self as *mut Self as *mut crate::ffi::MR_CSharp_TestStdFunction)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_function_int32_t_ref_from_int32_t_ref_int32_t_rvalue_ref)}
    }

    /// Modifies a member variable of class `MR::CSharp::TestStdFunction` named `f5`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_Set_f5()`.
    /// The reference to the parameter `value` might be preserved in this object in element `f5`.
    pub fn set_f5(&mut self, value: &crate::mr::cs::std_function_int32_t_ref_from_int32_t_ref_int32_t_rvalue_ref)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_Set_f5(self as *mut Self as *mut crate::ffi::MR_CSharp_TestStdFunction, crate::ffi::MR_C_PassBy_Copy, value as *const crate::mr::cs::std_function_int32_t_ref_from_int32_t_ref_int32_t_rvalue_ref as *mut crate::ffi::MR_C_std_function_int32_t_ref_from_int32_t_ref_int32_t_rvalue_ref)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f6`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_Get_f6()`.
    /// The reference to this object might be preserved as the return value.
    pub fn f6<'a>(&'a self) -> &'a crate::mr::cs::std_function_int32_t_rvalue_ref
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_Get_f6(self as *const Self as *const crate::ffi::MR_CSharp_TestStdFunction)};
        unsafe {&*(__ret as *const crate::mr::cs::std_function_int32_t_rvalue_ref)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f6`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_GetMutable_f6()`.
    /// The reference to this object might be preserved as the return value.
    pub fn f6_mut<'a>(&'a mut self) -> &'a mut crate::mr::cs::std_function_int32_t_rvalue_ref
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_GetMutable_f6(self as *mut Self as *mut crate::ffi::MR_CSharp_TestStdFunction)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_function_int32_t_rvalue_ref)}
    }

    /// Modifies a member variable of class `MR::CSharp::TestStdFunction` named `f6`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_Set_f6()`.
    /// The reference to the parameter `value` might be preserved in this object in element `f6`.
    pub fn set_f6(&mut self, value: &crate::mr::cs::std_function_int32_t_rvalue_ref)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_Set_f6(self as *mut Self as *mut crate::ffi::MR_CSharp_TestStdFunction, crate::ffi::MR_C_PassBy_Copy, value as *const crate::mr::cs::std_function_int32_t_rvalue_ref as *mut crate::ffi::MR_C_std_function_int32_t_rvalue_ref)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f7`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_Get_f7()`.
    /// The reference to this object might be preserved as the return value.
    pub fn f7<'a>(&'a self) -> &'a crate::mr::cs::std_function_void
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_Get_f7(self as *const Self as *const crate::ffi::MR_CSharp_TestStdFunction)};
        unsafe {&*(__ret as *const crate::mr::cs::std_function_void)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f7`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_GetMutable_f7()`.
    /// The reference to this object might be preserved as the return value.
    pub fn f7_mut<'a>(&'a mut self) -> &'a mut crate::mr::cs::std_function_void
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_GetMutable_f7(self as *mut Self as *mut crate::ffi::MR_CSharp_TestStdFunction)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_function_void)}
    }

    /// Modifies a member variable of class `MR::CSharp::TestStdFunction` named `f7`.
    ///
    /// Calls `MR_CSharp_TestStdFunction_Set_f7()`.
    /// The reference to the parameter `value` might be preserved in this object in element `f7`.
    pub fn set_f7(&mut self, value: &crate::mr::cs::std_function_void)
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TestStdFunction_Set_f7(self as *mut Self as *mut crate::ffi::MR_CSharp_TestStdFunction, crate::ffi::MR_C_PassBy_Copy, value as *const crate::mr::cs::std_function_void as *mut crate::ffi::MR_C_std_function_void)};
        __ret
    }

}

unsafe impl crate::CppCopy for TestStdFunction
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::Trivial`.
///
/// Generated from class `MR::CSharp::Trivial`. Heap-allocated instances are held in `Owned<Trivial>`.
#[repr(transparent)]
pub struct Trivial(crate::ffi::MR_CSharp_Trivial);

unsafe impl crate::CppClass for Trivial
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_Trivial_Destroy(ptr as *const crate::ffi::MR_CSharp_Trivial)}
}

impl Trivial
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_Trivial_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::Trivial>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_Trivial_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::Trivial)}
    }

    /// Generated from constructor `MR::CSharp::Trivial::Trivial`.
    ///
    /// Calls `MR_CSharp_Trivial_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::Trivial) -> crate::Owned<crate::mr::c_sharp::Trivial>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_Trivial_ConstructFromAnother(_other as *const crate::mr::c_sharp::Trivial as *const crate::ffi::MR_CSharp_Trivial)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::Trivial)}
    }

    /// Generated from method `MR::CSharp::Trivial::operator=`.
    ///
    /// Calls `MR_CSharp_Trivial_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::Trivial) -> &mut crate::mr::c_sharp::Trivial
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_Trivial_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_Trivial, _other as *const crate::mr::c_sharp::Trivial as *const crate::ffi::MR_CSharp_Trivial)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::Trivial)}
    }

}

unsafe impl crate::CppCopy for Trivial
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CSharp::TrivialDerived`.
///
/// Generated from class `MR::CSharp::TrivialDerived`. Heap-allocated instances are held in `Owned<TrivialDerived>`.
#[repr(transparent)]
pub struct TrivialDerived(crate::ffi::MR_CSharp_TrivialDerived);

unsafe impl crate::CppClass for TrivialDerived
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CSharp_TrivialDerived_Destroy(ptr as *const crate::ffi::MR_CSharp_TrivialDerived)}
}

impl TrivialDerived
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CSharp_TrivialDerived_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::c_sharp::TrivialDerived>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TrivialDerived_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::TrivialDerived)}
    }

    /// Generated from constructor `MR::CSharp::TrivialDerived::TrivialDerived`.
    ///
    /// Calls `MR_CSharp_TrivialDerived_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::c_sharp::TrivialDerived) -> crate::Owned<crate::mr::c_sharp::TrivialDerived>
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TrivialDerived_ConstructFromAnother(_other as *const crate::mr::c_sharp::TrivialDerived as *const crate::ffi::MR_CSharp_TrivialDerived)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::TrivialDerived)}
    }

    /// Generated from method `MR::CSharp::TrivialDerived::operator=`.
    ///
    /// Calls `MR_CSharp_TrivialDerived_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::c_sharp::TrivialDerived) -> &mut crate::mr::c_sharp::TrivialDerived
    {
        let __ret = unsafe {crate::ffi::MR_CSharp_TrivialDerived_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CSharp_TrivialDerived, _other as *const crate::mr::c_sharp::TrivialDerived as *const crate::ffi::MR_CSharp_TrivialDerived)};
        unsafe {&mut *(__ret as *mut crate::mr::c_sharp::TrivialDerived)}
    }

}

unsafe impl crate::CppCopy for TrivialDerived
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from function `MR::CSharp::foo`.
///
/// Calls `MR_CSharp_foo()`.
pub fn foo()
{
    let __ret = unsafe {crate::ffi::MR_CSharp_foo()};
    __ret
}

/// Generated from function `MR::CSharp::test_int`.
///
/// Calls `MR_CSharp_test_int()`.
pub fn test_int(a: i32, b: Option<i32>) -> i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_int(a, b.as_ref().map_or(core::ptr::null(), |r| r as *const i32 as *const i32))};
    __ret
}

/// Marking this `noexcept` for testing.
/// Generated from function `MR::CSharp::test_bool`.
///
/// Calls `MR_CSharp_test_bool()`.
pub fn test_bool(a: bool, b: Option<bool>) -> bool
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_bool(a, b.as_ref().map_or(core::ptr::null(), |r| r as *const bool as *const bool))};
    __ret
}

/// Generated from function `MR::CSharp::test_bool_ref`.
///
/// Calls `MR_CSharp_test_bool_ref()`.
pub fn test_bool_ref(a: &mut bool, b: Option<&mut bool>)
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_bool_ref(a as *mut bool as *mut bool, b.map_or(core::ptr::null_mut(), |r| r as *mut bool as *mut bool))};
    __ret
}

/// Generated from function `MR::CSharp::test_bool_ref2`.
///
/// Calls `MR_CSharp_test_bool_ref2()`.
pub fn test_bool_ref2(a: &mut bool, b: Option<&mut bool>) -> i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_bool_ref2(a as *mut bool as *mut bool, b.map_or(core::ptr::null_mut(), |r| r as *mut bool as *mut bool))};
    __ret
}

/// Generated from function `MR::CSharp::get_bool_ref`.
///
/// Calls `MR_CSharp_get_bool_ref()`.
pub fn get_bool_ref() -> *mut bool
{
    let __ret = unsafe {crate::ffi::MR_CSharp_get_bool_ref()};
    __ret
}

/// Generated from function `MR::CSharp::print_bool_ref`.
///
/// Calls `MR_CSharp_print_bool_ref()`.
pub fn print_bool_ref()
{
    let __ret = unsafe {crate::ffi::MR_CSharp_print_bool_ref()};
    __ret
}

/// Generated from function `MR::CSharp::test_bool_cref`.
///
/// Calls `MR_CSharp_test_bool_cref()`.
pub fn test_bool_cref(_1: &bool, _2: Option<&bool>) -> *const bool
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_bool_cref(_1 as *const bool as *const bool, _2.map_or(core::ptr::null(), |r| r as *const bool as *const bool))};
    __ret
}

/// Generated from function `MR::CSharp::test_int_ref`.
///
/// Calls `MR_CSharp_test_int_ref()`.
pub fn test_int_ref(a: &mut i32, b: Option<&mut i32>) -> *mut i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_int_ref(a as *mut i32 as *mut i32, b.map_or(core::ptr::null_mut(), |r| r as *mut i32 as *mut i32))};
    __ret
}

/// Generated from function `MR::CSharp::test_int_cref`.
///
/// Calls `MR_CSharp_test_int_cref()`.
pub fn test_int_cref(a: &i32, b: Option<&i32>) -> *const i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_int_cref(a as *const i32 as *const i32, b.map_or(core::ptr::null(), |r| r as *const i32 as *const i32))};
    __ret
}

/// Generated from function `MR::CSharp::test_int_rref`.
///
/// Calls `MR_CSharp_test_int_rref()`.
pub fn test_int_rref(a: &mut i32, b: Option<&mut i32>) -> *mut i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_int_rref(a as *mut i32 as *mut i32, b.map_or(core::ptr::null_mut(), |r| r as *mut i32 as *mut i32))};
    __ret
}

/// Generated from function `MR::CSharp::test_int_crref`.
///
/// Calls `MR_CSharp_test_int_crref()`.
pub fn test_int_crref(a: &i32, b: Option<&i32>) -> *const i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_int_crref(a as *const i32 as *const i32, b.map_or(core::ptr::null(), |r| r as *const i32 as *const i32))};
    __ret
}

/// Generated from function `MR::CSharp::test_int_ptr`.
///
/// Calls `MR_CSharp_test_int_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_int_ptr(a: Option<&mut i32>, b: Option<&mut i32>, c: *const *mut i32) -> *mut i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_int_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut i32 as *mut i32), b.map_or(core::ptr::null_mut(), |r| r as *mut i32 as *mut i32), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_int_cptr`.
///
/// Calls `MR_CSharp_test_int_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_int_cptr(a: Option<&i32>, b: Option<&i32>, c: *const *const i32) -> *const i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_int_cptr(a.map_or(core::ptr::null(), |r| r as *const i32 as *const i32), b.map_or(core::ptr::null(), |r| r as *const i32 as *const i32), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_ushort`.
///
/// Calls `MR_CSharp_test_ushort()`.
pub fn test_ushort(a: u16, b: Option<u16>) -> u16
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_ushort(a, b.as_ref().map_or(core::ptr::null(), |r| r as *const u16 as *const u16))};
    __ret
}

/// Generated from function `MR::CSharp::test_ushort_ref`.
///
/// Calls `MR_CSharp_test_ushort_ref()`.
pub fn test_ushort_ref(a: &mut u16, b: Option<&mut u16>) -> *mut u16
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_ushort_ref(a as *mut u16 as *mut u16, b.map_or(core::ptr::null_mut(), |r| r as *mut u16 as *mut u16))};
    __ret
}

/// Generated from function `MR::CSharp::test_ushort_cref`.
///
/// Calls `MR_CSharp_test_ushort_cref()`.
pub fn test_ushort_cref(a: &u16, b: Option<&u16>) -> *const u16
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_ushort_cref(a as *const u16 as *const u16, b.map_or(core::ptr::null(), |r| r as *const u16 as *const u16))};
    __ret
}

/// Generated from function `MR::CSharp::test_ushort_rref`.
///
/// Calls `MR_CSharp_test_ushort_rref()`.
pub fn test_ushort_rref(a: &mut u16, b: Option<&mut u16>) -> *mut u16
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_ushort_rref(a as *mut u16 as *mut u16, b.map_or(core::ptr::null_mut(), |r| r as *mut u16 as *mut u16))};
    __ret
}

/// Generated from function `MR::CSharp::test_ushort_crref`.
///
/// Calls `MR_CSharp_test_ushort_crref()`.
pub fn test_ushort_crref(a: &u16, b: Option<&u16>) -> *const u16
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_ushort_crref(a as *const u16 as *const u16, b.map_or(core::ptr::null(), |r| r as *const u16 as *const u16))};
    __ret
}

/// Generated from function `MR::CSharp::test_ushort_ptr`.
///
/// Calls `MR_CSharp_test_ushort_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_ushort_ptr(a: Option<&mut u16>, b: Option<&mut u16>, c: *const *mut u16) -> *mut u16
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_ushort_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut u16 as *mut u16), b.map_or(core::ptr::null_mut(), |r| r as *mut u16 as *mut u16), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_ushort_cptr`.
///
/// Calls `MR_CSharp_test_ushort_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_ushort_cptr(a: Option<&u16>, b: Option<&u16>, c: *const *const u16) -> *const u16
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_ushort_cptr(a.map_or(core::ptr::null(), |r| r as *const u16 as *const u16), b.map_or(core::ptr::null(), |r| r as *const u16 as *const u16), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_constness_int`.
///
/// Calls `MR_CSharp_test_constness_int()`.
pub fn test_constness_int(_1: i32, _2: Option<i32>) -> i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_constness_int(_1, _2.as_ref().map_or(core::ptr::null(), |r| r as *const i32 as *const i32))};
    __ret
}

/// Generated from function `MR::CSharp::test_constness_str`.
///
/// Calls `MR_CSharp_test_constness_str()`.
pub fn test_constness_str(_1: &str, _2: Option<&str>) -> crate::Owned<crate::mr::cs::std_string>
{
    let (__begin__2, __end__2) = match _2 {Some(s) => (s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char), None => (core::ptr::null(), core::ptr::null())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_constness_str(_1.as_ptr() as *const core::ffi::c_char, _1.as_ptr().wrapping_add(_1.len()) as *const core::ffi::c_char, __begin__2, __end__2)};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_string)}
}

/// Test how we adjust keywords in parameter names.
/// \param params blah
/// @param params blah
/// `params` 'params' "params" params huhparams paramshuh \p params \c params @p params @c params \A params @A params
/// In this comment, only quoted and `\param ...` uses are adjusted, and not standalone occurences of the word (even if it's a separate word, let alone if it's just a part of a word).
/// `\c ...` and `\p ...` are handled, but unknown tags like `\A ...` are not.
/// <param name="params">This is also handled, naturally, because we handle quotes.</param>
/// Generated from function `MR::CSharp::test_keyword_in_param_name`.
///
/// Calls `MR_CSharp_test_keyword_in_param_name()`.
pub fn test_keyword_in_param_name(params: i32)
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_keyword_in_param_name(params)};
    __ret
}

/// Generated from function `MR::CSharp::test_enum`.
///
/// Calls `MR_CSharp_test_enum_MR_CSharp_E1()`.
pub fn test_enum_mr_c_sharp_e1(a: crate::ffi::MR_CSharp_E1, b: Option<crate::ffi::MR_CSharp_E1>) -> crate::ffi::MR_CSharp_E1
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_enum_MR_CSharp_E1(a, b.as_ref().map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_E1 as *const crate::ffi::MR_CSharp_E1))};
    __ret
}

/// Generated from function `MR::CSharp::test_enum_ref`.
///
/// Calls `MR_CSharp_test_enum_ref_MR_CSharp_E1()`.
pub fn test_enum_ref_mr_c_sharp_e1(a: &mut crate::ffi::MR_CSharp_E1, b: Option<&mut crate::ffi::MR_CSharp_E1>) -> *mut crate::ffi::MR_CSharp_E1
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_enum_ref_MR_CSharp_E1(a as *mut crate::ffi::MR_CSharp_E1 as *mut crate::ffi::MR_CSharp_E1, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_CSharp_E1 as *mut crate::ffi::MR_CSharp_E1))};
    __ret
}

/// Generated from function `MR::CSharp::test_enum_cref`.
///
/// Calls `MR_CSharp_test_enum_cref_MR_CSharp_E1()`.
pub fn test_enum_cref_mr_c_sharp_e1(a: &crate::ffi::MR_CSharp_E1, b: Option<&crate::ffi::MR_CSharp_E1>) -> *const crate::ffi::MR_CSharp_E1
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_enum_cref_MR_CSharp_E1(a as *const crate::ffi::MR_CSharp_E1 as *const crate::ffi::MR_CSharp_E1, b.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_E1 as *const crate::ffi::MR_CSharp_E1))};
    __ret
}

/// Generated from function `MR::CSharp::test_enum_rref`.
///
/// Calls `MR_CSharp_test_enum_rref_MR_CSharp_E1()`.
pub fn test_enum_rref_mr_c_sharp_e1(a: &mut crate::ffi::MR_CSharp_E1, b: Option<&mut crate::ffi::MR_CSharp_E1>) -> *mut crate::ffi::MR_CSharp_E1
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_enum_rref_MR_CSharp_E1(a as *mut crate::ffi::MR_CSharp_E1 as *mut crate::ffi::MR_CSharp_E1, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_CSharp_E1 as *mut crate::ffi::MR_CSharp_E1))};
    __ret
}

/// Generated from function `MR::CSharp::test_enum_crref`.
///
/// Calls `MR_CSharp_test_enum_crref_MR_CSharp_E1()`.
pub fn test_enum_crref_mr_c_sharp_e1(a: &crate::ffi::MR_CSharp_E1, b: Option<&crate::ffi::MR_CSharp_E1>) -> *const crate::ffi::MR_CSharp_E1
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_enum_crref_MR_CSharp_E1(a as *const crate::ffi::MR_CSharp_E1 as *const crate::ffi::MR_CSharp_E1, b.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_E1 as *const crate::ffi::MR_CSharp_E1))};
    __ret
}

/// Generated from function `MR::CSharp::test_enum_ptr`.
///
/// Calls `MR_CSharp_test_enum_ptr_MR_CSharp_E1_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_enum_ptr_mr_c_sharp_e1_ptr(a: Option<&mut crate::ffi::MR_CSharp_E1>, b: Option<&mut crate::ffi::MR_CSharp_E1>, c: *const *mut crate::ffi::MR_CSharp_E1) -> *mut crate::ffi::MR_CSharp_E1
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_enum_ptr_MR_CSharp_E1_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_CSharp_E1 as *mut crate::ffi::MR_CSharp_E1), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_CSharp_E1 as *mut crate::ffi::MR_CSharp_E1), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_enum_cptr`.
///
/// Calls `MR_CSharp_test_enum_cptr_const_MR_CSharp_E1_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_enum_cptr_const_mr_c_sharp_e1_ptr(a: Option<&crate::ffi::MR_CSharp_E1>, b: Option<&crate::ffi::MR_CSharp_E1>, c: *const *const crate::ffi::MR_CSharp_E1) -> *const crate::ffi::MR_CSharp_E1
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_enum_cptr_const_MR_CSharp_E1_ptr(a.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_E1 as *const crate::ffi::MR_CSharp_E1), b.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_E1 as *const crate::ffi::MR_CSharp_E1), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_enum`.
///
/// Calls `MR_CSharp_test_enum_MR_CSharp_E2()`.
pub fn test_enum_mr_c_sharp_e2(a: crate::ffi::MR_CSharp_E2, b: Option<crate::ffi::MR_CSharp_E2>) -> crate::ffi::MR_CSharp_E2
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_enum_MR_CSharp_E2(a, b.as_ref().map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_E2 as *const crate::ffi::MR_CSharp_E2))};
    __ret
}

/// Generated from function `MR::CSharp::test_enum_ref`.
///
/// Calls `MR_CSharp_test_enum_ref_MR_CSharp_E2()`.
pub fn test_enum_ref_mr_c_sharp_e2(a: &mut crate::ffi::MR_CSharp_E2, b: Option<&mut crate::ffi::MR_CSharp_E2>) -> *mut crate::ffi::MR_CSharp_E2
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_enum_ref_MR_CSharp_E2(a as *mut crate::ffi::MR_CSharp_E2 as *mut crate::ffi::MR_CSharp_E2, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_CSharp_E2 as *mut crate::ffi::MR_CSharp_E2))};
    __ret
}

/// Generated from function `MR::CSharp::test_enum_cref`.
///
/// Calls `MR_CSharp_test_enum_cref_MR_CSharp_E2()`.
pub fn test_enum_cref_mr_c_sharp_e2(a: &crate::ffi::MR_CSharp_E2, b: Option<&crate::ffi::MR_CSharp_E2>) -> *const crate::ffi::MR_CSharp_E2
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_enum_cref_MR_CSharp_E2(a as *const crate::ffi::MR_CSharp_E2 as *const crate::ffi::MR_CSharp_E2, b.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_E2 as *const crate::ffi::MR_CSharp_E2))};
    __ret
}

/// Generated from function `MR::CSharp::test_enum_rref`.
///
/// Calls `MR_CSharp_test_enum_rref_MR_CSharp_E2()`.
pub fn test_enum_rref_mr_c_sharp_e2(a: &mut crate::ffi::MR_CSharp_E2, b: Option<&mut crate::ffi::MR_CSharp_E2>) -> *mut crate::ffi::MR_CSharp_E2
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_enum_rref_MR_CSharp_E2(a as *mut crate::ffi::MR_CSharp_E2 as *mut crate::ffi::MR_CSharp_E2, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_CSharp_E2 as *mut crate::ffi::MR_CSharp_E2))};
    __ret
}

/// Generated from function `MR::CSharp::test_enum_crref`.
///
/// Calls `MR_CSharp_test_enum_crref_MR_CSharp_E2()`.
pub fn test_enum_crref_mr_c_sharp_e2(a: &crate::ffi::MR_CSharp_E2, b: Option<&crate::ffi::MR_CSharp_E2>) -> *const crate::ffi::MR_CSharp_E2
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_enum_crref_MR_CSharp_E2(a as *const crate::ffi::MR_CSharp_E2 as *const crate::ffi::MR_CSharp_E2, b.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_E2 as *const crate::ffi::MR_CSharp_E2))};
    __ret
}

/// Generated from function `MR::CSharp::test_enum_ptr`.
///
/// Calls `MR_CSharp_test_enum_ptr_MR_CSharp_E2_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_enum_ptr_mr_c_sharp_e2_ptr(a: Option<&mut crate::ffi::MR_CSharp_E2>, b: Option<&mut crate::ffi::MR_CSharp_E2>, c: *const *mut crate::ffi::MR_CSharp_E2) -> *mut crate::ffi::MR_CSharp_E2
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_enum_ptr_MR_CSharp_E2_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_CSharp_E2 as *mut crate::ffi::MR_CSharp_E2), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_CSharp_E2 as *mut crate::ffi::MR_CSharp_E2), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_enum_cptr`.
///
/// Calls `MR_CSharp_test_enum_cptr_const_MR_CSharp_E2_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_enum_cptr_const_mr_c_sharp_e2_ptr(a: Option<&crate::ffi::MR_CSharp_E2>, b: Option<&crate::ffi::MR_CSharp_E2>, c: *const *const crate::ffi::MR_CSharp_E2) -> *const crate::ffi::MR_CSharp_E2
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_enum_cptr_const_MR_CSharp_E2_ptr(a.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_E2 as *const crate::ffi::MR_CSharp_E2), b.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_E2 as *const crate::ffi::MR_CSharp_E2), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_class_trivial`.
///
/// Calls `MR_CSharp_test_class_trivial()`.
pub fn test_class_trivial(a: &crate::mr::c_sharp::Trivial, b: Option<&crate::mr::c_sharp::Trivial>) -> crate::Owned<crate::mr::c_sharp::Trivial>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_trivial(a as *const crate::mr::c_sharp::Trivial as *const crate::ffi::MR_CSharp_Trivial, b.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::Trivial as *const crate::ffi::MR_CSharp_Trivial))};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::Trivial)}
}

/// Generated from function `MR::CSharp::test_class_trivial_ref`.
///
/// Calls `MR_CSharp_test_class_trivial_ref()`.
pub fn test_class_trivial_ref(a: &mut crate::mr::c_sharp::Trivial, b: Option<&mut crate::mr::c_sharp::Trivial>) -> *mut crate::ffi::MR_CSharp_Trivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_trivial_ref(a as *mut crate::mr::c_sharp::Trivial as *mut crate::ffi::MR_CSharp_Trivial, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::Trivial as *mut crate::ffi::MR_CSharp_Trivial))};
    __ret
}

/// Generated from function `MR::CSharp::test_class_trivial_cref`.
///
/// Calls `MR_CSharp_test_class_trivial_cref()`.
pub fn test_class_trivial_cref(a: &crate::mr::c_sharp::Trivial, b: Option<&crate::mr::c_sharp::Trivial>) -> *const crate::ffi::MR_CSharp_Trivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_trivial_cref(a as *const crate::mr::c_sharp::Trivial as *const crate::ffi::MR_CSharp_Trivial, b.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::Trivial as *const crate::ffi::MR_CSharp_Trivial))};
    __ret
}

/// Generated from function `MR::CSharp::test_class_trivial_rref`.
///
/// Calls `MR_CSharp_test_class_trivial_rref()`.
pub fn test_class_trivial_rref(a: &mut crate::mr::c_sharp::Trivial, b: Option<&mut crate::mr::c_sharp::Trivial>) -> *mut crate::ffi::MR_CSharp_Trivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_trivial_rref(a as *mut crate::mr::c_sharp::Trivial as *mut crate::ffi::MR_CSharp_Trivial, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::Trivial as *mut crate::ffi::MR_CSharp_Trivial))};
    __ret
}

/// Generated from function `MR::CSharp::test_class_trivial_crref`.
///
/// Calls `MR_CSharp_test_class_trivial_crref()`.
pub fn test_class_trivial_crref(a: &crate::mr::c_sharp::Trivial, b: Option<&crate::mr::c_sharp::Trivial>) -> *const crate::ffi::MR_CSharp_Trivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_trivial_crref(a as *const crate::mr::c_sharp::Trivial as *const crate::ffi::MR_CSharp_Trivial, b.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::Trivial as *const crate::ffi::MR_CSharp_Trivial))};
    __ret
}

/// Generated from function `MR::CSharp::test_class_trivial_ptr`.
///
/// Calls `MR_CSharp_test_class_trivial_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_class_trivial_ptr(a: Option<&mut crate::mr::c_sharp::Trivial>, b: Option<&mut crate::mr::c_sharp::Trivial>, c: *const *mut crate::ffi::MR_CSharp_Trivial) -> *mut crate::ffi::MR_CSharp_Trivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_trivial_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::Trivial as *mut crate::ffi::MR_CSharp_Trivial), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::Trivial as *mut crate::ffi::MR_CSharp_Trivial), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_class_trivial_cptr`.
///
/// Calls `MR_CSharp_test_class_trivial_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_class_trivial_cptr(a: Option<&crate::mr::c_sharp::Trivial>, b: Option<&crate::mr::c_sharp::Trivial>, c: *const *const crate::ffi::MR_CSharp_Trivial) -> *const crate::ffi::MR_CSharp_Trivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_trivial_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::Trivial as *const crate::ffi::MR_CSharp_Trivial), b.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::Trivial as *const crate::ffi::MR_CSharp_Trivial), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_class_nontrivial`.
///
/// Calls `MR_CSharp_test_class_nontrivial()`.
pub fn test_class_nontrivial(a: &crate::mr::c_sharp::NonTrivial, b: Option<&crate::mr::c_sharp::NonTrivial>) -> crate::Owned<crate::mr::c_sharp::NonTrivial>
{
    let (__pb_b, __ptr_b) = match b {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::c_sharp::NonTrivial as *mut crate::ffi::MR_CSharp_NonTrivial), None => (crate::ffi::MR_C_PassBy_DefaultArgument, core::ptr::null_mut())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_nontrivial(crate::ffi::MR_C_PassBy_Copy, a as *const crate::mr::c_sharp::NonTrivial as *mut crate::ffi::MR_CSharp_NonTrivial, __pb_b, __ptr_b)};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::NonTrivial)}
}

/// Generated from function `MR::CSharp::test_class_nontrivial_ref`.
///
/// Calls `MR_CSharp_test_class_nontrivial_ref()`.
pub fn test_class_nontrivial_ref(a: &mut crate::mr::c_sharp::NonTrivial, b: Option<&mut crate::mr::c_sharp::NonTrivial>) -> *mut crate::ffi::MR_CSharp_NonTrivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_nontrivial_ref(a as *mut crate::mr::c_sharp::NonTrivial as *mut crate::ffi::MR_CSharp_NonTrivial, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::NonTrivial as *mut crate::ffi::MR_CSharp_NonTrivial))};
    __ret
}

/// Generated from function `MR::CSharp::test_class_nontrivial_cref`.
///
/// Calls `MR_CSharp_test_class_nontrivial_cref()`.
pub fn test_class_nontrivial_cref(a: &crate::mr::c_sharp::NonTrivial, b: Option<&crate::mr::c_sharp::NonTrivial>) -> *const crate::ffi::MR_CSharp_NonTrivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_nontrivial_cref(a as *const crate::mr::c_sharp::NonTrivial as *const crate::ffi::MR_CSharp_NonTrivial, b.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::NonTrivial as *const crate::ffi::MR_CSharp_NonTrivial))};
    __ret
}

/// Generated from function `MR::CSharp::test_class_nontrivial_rref`.
///
/// Calls `MR_CSharp_test_class_nontrivial_rref()`.
pub fn test_class_nontrivial_rref(a: &mut crate::mr::c_sharp::NonTrivial, b: Option<&mut crate::mr::c_sharp::NonTrivial>) -> *mut crate::ffi::MR_CSharp_NonTrivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_nontrivial_rref(a as *mut crate::mr::c_sharp::NonTrivial as *mut crate::ffi::MR_CSharp_NonTrivial, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::NonTrivial as *mut crate::ffi::MR_CSharp_NonTrivial))};
    __ret
}

/// Generated from function `MR::CSharp::test_class_nontrivial_crref`.
///
/// Calls `MR_CSharp_test_class_nontrivial_crref()`.
pub fn test_class_nontrivial_crref(a: &crate::mr::c_sharp::NonTrivial, b: Option<&crate::mr::c_sharp::NonTrivial>) -> *const crate::ffi::MR_CSharp_NonTrivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_nontrivial_crref(a as *const crate::mr::c_sharp::NonTrivial as *const crate::ffi::MR_CSharp_NonTrivial, b.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::NonTrivial as *const crate::ffi::MR_CSharp_NonTrivial))};
    __ret
}

/// Generated from function `MR::CSharp::test_class_nontrivial_ptr`.
///
/// Calls `MR_CSharp_test_class_nontrivial_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_class_nontrivial_ptr(a: Option<&mut crate::mr::c_sharp::NonTrivial>, b: Option<&mut crate::mr::c_sharp::NonTrivial>, c: *const *mut crate::ffi::MR_CSharp_NonTrivial) -> *mut crate::ffi::MR_CSharp_NonTrivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_nontrivial_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::NonTrivial as *mut crate::ffi::MR_CSharp_NonTrivial), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::NonTrivial as *mut crate::ffi::MR_CSharp_NonTrivial), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_class_nontrivial_cptr`.
///
/// Calls `MR_CSharp_test_class_nontrivial_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_class_nontrivial_cptr(a: Option<&crate::mr::c_sharp::NonTrivial>, b: Option<&crate::mr::c_sharp::NonTrivial>, c: *const *const crate::ffi::MR_CSharp_NonTrivial) -> *const crate::ffi::MR_CSharp_NonTrivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_nontrivial_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::NonTrivial as *const crate::ffi::MR_CSharp_NonTrivial), b.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::NonTrivial as *const crate::ffi::MR_CSharp_NonTrivial), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_void_ptr`.
///
/// Calls `MR_CSharp_test_void_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_void_ptr(a: *mut core::ffi::c_void, b: *mut core::ffi::c_void, c: *const *mut core::ffi::c_void) -> *mut core::ffi::c_void
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_void_ptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_void_cptr`.
///
/// Calls `MR_CSharp_test_void_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_void_cptr(a: *const core::ffi::c_void, b: *const core::ffi::c_void, c: *const *const core::ffi::c_void) -> *const core::ffi::c_void
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_void_cptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::mark_se_as_shared`.
///
/// Calls `MR_CSharp_mark_se_as_shared()`.
pub fn mark_se_as_shared() -> crate::Owned<crate::mr::cs::std_shared_ptr_MR_CSharp_SE>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_mark_se_as_shared()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_shared_ptr_MR_CSharp_SE)}
}

/// Poking a shared pointer type for a single class causes `std::shared_ptr` to be instantiated for the entire hierarchy (when `--bind-shared-ptr-virally`, which is required for `C#`).
/// Generated from function `MR::CSharp::test_shptr`.
///
/// Calls `MR_CSharp_test_shptr()`.
pub fn test_shptr(a: &crate::mr::cs::std_shared_ptr_MR_CSharp_SA, b: Option<&crate::mr::cs::std_shared_ptr_MR_CSharp_SA>) -> crate::Owned<crate::mr::cs::std_shared_ptr_MR_CSharp_SA>
{
    let (__pb_b, __ptr_b) = match b {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::cs::std_shared_ptr_MR_CSharp_SA as *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SA), None => (crate::ffi::MR_C_PassBy_DefaultArgument, core::ptr::null_mut())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_shptr(crate::ffi::MR_C_PassBy_Copy, a as *const crate::mr::cs::std_shared_ptr_MR_CSharp_SA as *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SA, __pb_b, __ptr_b)};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_shared_ptr_MR_CSharp_SA)}
}

/// Generated from function `MR::CSharp::test_shptr_ref`.
///
/// Calls `MR_CSharp_test_shptr_ref()`.
pub fn test_shptr_ref(a: &mut crate::mr::cs::std_shared_ptr_MR_CSharp_SA, b: Option<&mut crate::mr::cs::std_shared_ptr_MR_CSharp_SA>) -> *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SA
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_shptr_ref(a as *mut crate::mr::cs::std_shared_ptr_MR_CSharp_SA as *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SA, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_shared_ptr_MR_CSharp_SA as *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SA))};
    __ret
}

/// Generated from function `MR::CSharp::test_shptr_cref`.
///
/// Calls `MR_CSharp_test_shptr_cref()`.
pub fn test_shptr_cref(a: &crate::mr::cs::std_shared_ptr_MR_CSharp_SA, b: Option<&crate::mr::cs::std_shared_ptr_MR_CSharp_SA>) -> *const crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SA
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_shptr_cref(a as *const crate::mr::cs::std_shared_ptr_MR_CSharp_SA as *const crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SA, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_shared_ptr_MR_CSharp_SA as *const crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SA))};
    __ret
}

/// Generated from function `MR::CSharp::test_shptr_rref`.
///
/// Calls `MR_CSharp_test_shptr_rref()`.
pub fn test_shptr_rref(a: &mut crate::mr::cs::std_shared_ptr_MR_CSharp_SA, b: Option<&mut crate::mr::cs::std_shared_ptr_MR_CSharp_SA>) -> *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SA
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_shptr_rref(a as *mut crate::mr::cs::std_shared_ptr_MR_CSharp_SA as *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SA, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_shared_ptr_MR_CSharp_SA as *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SA))};
    __ret
}

/// Generated from function `MR::CSharp::test_shptr_crref`.
///
/// Calls `MR_CSharp_test_shptr_crref()`.
pub fn test_shptr_crref(a: &crate::mr::cs::std_shared_ptr_MR_CSharp_SA, b: Option<&crate::mr::cs::std_shared_ptr_MR_CSharp_SA>) -> *const crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SA
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_shptr_crref(a as *const crate::mr::cs::std_shared_ptr_MR_CSharp_SA as *const crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SA, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_shared_ptr_MR_CSharp_SA as *const crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SA))};
    __ret
}

/// Generated from function `MR::CSharp::test_shptr_ptr`.
///
/// Calls `MR_CSharp_test_shptr_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_shptr_ptr(a: Option<&mut crate::mr::cs::std_shared_ptr_MR_CSharp_SA>, b: *const *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SA) -> Option<&mut crate::mr::cs::std_shared_ptr_MR_CSharp_SA>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_shptr_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_shared_ptr_MR_CSharp_SA as *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SA), b)};
    unsafe {(__ret as *mut crate::mr::cs::std_shared_ptr_MR_CSharp_SA).as_mut()}
}

/// Generated from function `MR::CSharp::test_shptr_cptr`.
///
/// Calls `MR_CSharp_test_shptr_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_shptr_cptr(a: Option<&crate::mr::cs::std_shared_ptr_MR_CSharp_SA>, b: *const *const crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SA) -> Option<&crate::mr::cs::std_shared_ptr_MR_CSharp_SA>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_shptr_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_shared_ptr_MR_CSharp_SA as *const crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SA), b)};
    unsafe {(__ret as *const crate::mr::cs::std_shared_ptr_MR_CSharp_SA).as_ref()}
}

/// Generated from function `MR::CSharp::test_shcptr`.
///
/// Calls `MR_CSharp_test_shcptr()`.
pub fn test_shcptr(a: &crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA, b: Option<&crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA>) -> crate::Owned<crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA>
{
    let (__pb_b, __ptr_b) = match b {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA as *mut crate::ffi::MR_C_std_shared_ptr_const_MR_CSharp_SA), None => (crate::ffi::MR_C_PassBy_DefaultArgument, core::ptr::null_mut())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_shcptr(crate::ffi::MR_C_PassBy_Copy, a as *const crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA as *mut crate::ffi::MR_C_std_shared_ptr_const_MR_CSharp_SA, __pb_b, __ptr_b)};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA)}
}

/// Generated from function `MR::CSharp::test_shcptr_ref`.
///
/// Calls `MR_CSharp_test_shcptr_ref()`.
pub fn test_shcptr_ref(a: &mut crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA, b: Option<&mut crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA>) -> *mut crate::ffi::MR_C_std_shared_ptr_const_MR_CSharp_SA
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_shcptr_ref(a as *mut crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA as *mut crate::ffi::MR_C_std_shared_ptr_const_MR_CSharp_SA, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA as *mut crate::ffi::MR_C_std_shared_ptr_const_MR_CSharp_SA))};
    __ret
}

/// Generated from function `MR::CSharp::test_shcptr_cref`.
///
/// Calls `MR_CSharp_test_shcptr_cref()`.
pub fn test_shcptr_cref(a: &crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA, b: Option<&crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA>) -> *const crate::ffi::MR_C_std_shared_ptr_const_MR_CSharp_SA
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_shcptr_cref(a as *const crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA as *const crate::ffi::MR_C_std_shared_ptr_const_MR_CSharp_SA, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA as *const crate::ffi::MR_C_std_shared_ptr_const_MR_CSharp_SA))};
    __ret
}

/// Generated from function `MR::CSharp::test_shcptr_rref`.
///
/// Calls `MR_CSharp_test_shcptr_rref()`.
pub fn test_shcptr_rref(a: &mut crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA, b: Option<&mut crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA>) -> *mut crate::ffi::MR_C_std_shared_ptr_const_MR_CSharp_SA
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_shcptr_rref(a as *mut crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA as *mut crate::ffi::MR_C_std_shared_ptr_const_MR_CSharp_SA, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA as *mut crate::ffi::MR_C_std_shared_ptr_const_MR_CSharp_SA))};
    __ret
}

/// Generated from function `MR::CSharp::test_shcptr_crref`.
///
/// Calls `MR_CSharp_test_shcptr_crref()`.
pub fn test_shcptr_crref(a: &crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA, b: Option<&crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA>) -> *const crate::ffi::MR_C_std_shared_ptr_const_MR_CSharp_SA
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_shcptr_crref(a as *const crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA as *const crate::ffi::MR_C_std_shared_ptr_const_MR_CSharp_SA, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA as *const crate::ffi::MR_C_std_shared_ptr_const_MR_CSharp_SA))};
    __ret
}

/// Generated from function `MR::CSharp::test_shcptr_ptr`.
///
/// Calls `MR_CSharp_test_shcptr_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_shcptr_ptr(a: Option<&mut crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA>, b: *const *mut crate::ffi::MR_C_std_shared_ptr_const_MR_CSharp_SA) -> Option<&mut crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_shcptr_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA as *mut crate::ffi::MR_C_std_shared_ptr_const_MR_CSharp_SA), b)};
    unsafe {(__ret as *mut crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA).as_mut()}
}

/// Generated from function `MR::CSharp::test_shcptr_cptr`.
///
/// Calls `MR_CSharp_test_shcptr_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_shcptr_cptr(a: Option<&crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA>, b: *const *const crate::ffi::MR_C_std_shared_ptr_const_MR_CSharp_SA) -> Option<&crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_shcptr_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA as *const crate::ffi::MR_C_std_shared_ptr_const_MR_CSharp_SA), b)};
    unsafe {(__ret as *const crate::mr::cs::std_shared_ptr_const_MR_CSharp_SA).as_ref()}
}

/// Generated from function `MR::CSharp::mark_sg_as_shared`.
///
/// Calls `MR_CSharp_mark_sg_as_shared()`.
pub fn mark_sg_as_shared() -> crate::Owned<crate::mr::cs::std_shared_ptr_MR_CSharp_SG>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_mark_sg_as_shared()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_shared_ptr_MR_CSharp_SG)}
}

/// Generated from function `MR::CSharp::test_string`.
///
/// Calls `MR_CSharp_test_string()`.
pub fn test_string(a: &str, b: Option<&str>) -> crate::Owned<crate::mr::cs::std_string>
{
    let (__begin_b, __end_b) = match b {Some(s) => (s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char), None => (core::ptr::null(), core::ptr::null())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_string(a.as_ptr() as *const core::ffi::c_char, a.as_ptr().wrapping_add(a.len()) as *const core::ffi::c_char, __begin_b, __end_b)};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_string)}
}

/// Generated from function `MR::CSharp::test_string_ref`.
///
/// Calls `MR_CSharp_test_string_ref()`.
pub fn test_string_ref(a: &mut crate::mr::cs::std_string, b: Option<&mut crate::mr::cs::std_string>) -> *mut crate::ffi::MR_C_std_string
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_string_ref(a as *mut crate::mr::cs::std_string as *mut crate::ffi::MR_C_std_string, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_string as *mut crate::ffi::MR_C_std_string))};
    __ret
}

/// Generated from function `MR::CSharp::test_string_cref`.
///
/// Calls `MR_CSharp_test_string_cref()`.
pub fn test_string_cref(a: &str, b: Option<&str>) -> *const crate::ffi::MR_C_std_string
{
    let (__begin_b, __end_b) = match b {Some(s) => (s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char), None => (core::ptr::null(), core::ptr::null())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_string_cref(a.as_ptr() as *const core::ffi::c_char, a.as_ptr().wrapping_add(a.len()) as *const core::ffi::c_char, __begin_b, __end_b)};
    __ret
}

/// Generated from function `MR::CSharp::test_string_rref`.
///
/// Calls `MR_CSharp_test_string_rref()`.
pub fn test_string_rref(a: &str, b: Option<&str>) -> *mut crate::ffi::MR_C_std_string
{
    let (__begin_b, __end_b) = match b {Some(s) => (s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char), None => (core::ptr::null(), core::ptr::null())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_string_rref(a.as_ptr() as *const core::ffi::c_char, a.as_ptr().wrapping_add(a.len()) as *const core::ffi::c_char, __begin_b, __end_b)};
    __ret
}

/// Generated from function `MR::CSharp::test_string_crref`.
///
/// Calls `MR_CSharp_test_string_crref()`.
pub fn test_string_crref(a: &str, b: Option<&str>) -> *const crate::ffi::MR_C_std_string
{
    let (__begin_b, __end_b) = match b {Some(s) => (s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char), None => (core::ptr::null(), core::ptr::null())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_string_crref(a.as_ptr() as *const core::ffi::c_char, a.as_ptr().wrapping_add(a.len()) as *const core::ffi::c_char, __begin_b, __end_b)};
    __ret
}

/// Generated from function `MR::CSharp::test_string_ptr`.
///
/// Calls `MR_CSharp_test_string_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_string_ptr(a: Option<&mut crate::mr::cs::std_string>, b: *const *mut crate::ffi::MR_C_std_string) -> Option<&mut crate::mr::cs::std_string>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_string_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_string as *mut crate::ffi::MR_C_std_string), b)};
    unsafe {(__ret as *mut crate::mr::cs::std_string).as_mut()}
}

/// Generated from function `MR::CSharp::test_string_cptr`.
///
/// Calls `MR_CSharp_test_string_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_string_cptr(a: Option<&crate::mr::cs::std_string>, b: *const *const crate::ffi::MR_C_std_string) -> Option<&crate::mr::cs::std_string>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_string_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_string as *const crate::ffi::MR_C_std_string), b)};
    unsafe {(__ret as *const crate::mr::cs::std_string).as_ref()}
}

/// Generated from function `MR::CSharp::test_stringview`.
///
/// Calls `MR_CSharp_test_stringview()`.
pub fn test_stringview(a: &str, b: Option<&str>) -> crate::Owned<crate::mr::cs::std_string_view>
{
    let (__begin_b, __end_b) = match b {Some(s) => (s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char), None => (core::ptr::null(), core::ptr::null())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_stringview(a.as_ptr() as *const core::ffi::c_char, a.as_ptr().wrapping_add(a.len()) as *const core::ffi::c_char, __begin_b, __end_b)};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_string_view)}
}

/// Generated from function `MR::CSharp::test_stringview_ref`.
///
/// Calls `MR_CSharp_test_stringview_ref()`.
pub fn test_stringview_ref(a: &mut crate::mr::cs::std_string_view, b: Option<&mut crate::mr::cs::std_string_view>) -> *mut crate::ffi::MR_C_std_string_view
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_stringview_ref(a as *mut crate::mr::cs::std_string_view as *mut crate::ffi::MR_C_std_string_view, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_string_view as *mut crate::ffi::MR_C_std_string_view))};
    __ret
}

/// Generated from function `MR::CSharp::test_stringview_cref`.
///
/// Calls `MR_CSharp_test_stringview_cref()`.
pub fn test_stringview_cref(a: &str, b: Option<&str>) -> *const crate::ffi::MR_C_std_string_view
{
    let (__begin_b, __end_b) = match b {Some(s) => (s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char), None => (core::ptr::null(), core::ptr::null())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_stringview_cref(a.as_ptr() as *const core::ffi::c_char, a.as_ptr().wrapping_add(a.len()) as *const core::ffi::c_char, __begin_b, __end_b)};
    __ret
}

/// Generated from function `MR::CSharp::test_stringview_rref`.
///
/// Calls `MR_CSharp_test_stringview_rref()`.
pub fn test_stringview_rref(a: &str, b: Option<&str>) -> *mut crate::ffi::MR_C_std_string_view
{
    let (__begin_b, __end_b) = match b {Some(s) => (s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char), None => (core::ptr::null(), core::ptr::null())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_stringview_rref(a.as_ptr() as *const core::ffi::c_char, a.as_ptr().wrapping_add(a.len()) as *const core::ffi::c_char, __begin_b, __end_b)};
    __ret
}

/// Generated from function `MR::CSharp::test_stringview_crref`.
///
/// Calls `MR_CSharp_test_stringview_crref()`.
pub fn test_stringview_crref(a: &str, b: Option<&str>) -> *const crate::ffi::MR_C_std_string_view
{
    let (__begin_b, __end_b) = match b {Some(s) => (s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char), None => (core::ptr::null(), core::ptr::null())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_stringview_crref(a.as_ptr() as *const core::ffi::c_char, a.as_ptr().wrapping_add(a.len()) as *const core::ffi::c_char, __begin_b, __end_b)};
    __ret
}

/// Generated from function `MR::CSharp::test_stringview_ptr`.
///
/// Calls `MR_CSharp_test_stringview_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_stringview_ptr(a: Option<&mut crate::mr::cs::std_string_view>, b: *const *mut crate::ffi::MR_C_std_string_view) -> Option<&mut crate::mr::cs::std_string_view>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_stringview_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_string_view as *mut crate::ffi::MR_C_std_string_view), b)};
    unsafe {(__ret as *mut crate::mr::cs::std_string_view).as_mut()}
}

/// Generated from function `MR::CSharp::test_stringview_cptr`.
///
/// Calls `MR_CSharp_test_stringview_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_stringview_cptr(a: Option<&crate::mr::cs::std_string_view>, b: *const *const crate::ffi::MR_C_std_string_view) -> Option<&crate::mr::cs::std_string_view>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_stringview_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_string_view as *const crate::ffi::MR_C_std_string_view), b)};
    unsafe {(__ret as *const crate::mr::cs::std_string_view).as_ref()}
}

/// Generated from function `MR::CSharp::test_fspath`.
///
/// Calls `MR_CSharp_test_fspath()`.
pub fn test_fspath(a: &str, b: Option<&str>) -> crate::Owned<crate::mr::cs::std_filesystem_path>
{
    let (__begin_b, __end_b) = match b {Some(s) => (s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char), None => (core::ptr::null(), core::ptr::null())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_fspath(a.as_ptr() as *const core::ffi::c_char, a.as_ptr().wrapping_add(a.len()) as *const core::ffi::c_char, __begin_b, __end_b)};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_filesystem_path)}
}

/// Generated from function `MR::CSharp::test_fspath_ref`.
///
/// Calls `MR_CSharp_test_fspath_ref()`.
pub fn test_fspath_ref(a: &mut crate::mr::cs::std_filesystem_path, b: Option<&mut crate::mr::cs::std_filesystem_path>) -> *mut crate::ffi::MR_C_std_filesystem_path
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_fspath_ref(a as *mut crate::mr::cs::std_filesystem_path as *mut crate::ffi::MR_C_std_filesystem_path, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_filesystem_path as *mut crate::ffi::MR_C_std_filesystem_path))};
    __ret
}

/// Generated from function `MR::CSharp::test_fspath_cref`.
///
/// Calls `MR_CSharp_test_fspath_cref()`.
pub fn test_fspath_cref(a: &str, b: Option<&str>) -> *const crate::ffi::MR_C_std_filesystem_path
{
    let (__begin_b, __end_b) = match b {Some(s) => (s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char), None => (core::ptr::null(), core::ptr::null())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_fspath_cref(a.as_ptr() as *const core::ffi::c_char, a.as_ptr().wrapping_add(a.len()) as *const core::ffi::c_char, __begin_b, __end_b)};
    __ret
}

/// Generated from function `MR::CSharp::test_fspath_rref`.
///
/// Calls `MR_CSharp_test_fspath_rref()`.
pub fn test_fspath_rref(a: &str, b: Option<&str>) -> *mut crate::ffi::MR_C_std_filesystem_path
{
    let (__begin_b, __end_b) = match b {Some(s) => (s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char), None => (core::ptr::null(), core::ptr::null())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_fspath_rref(a.as_ptr() as *const core::ffi::c_char, a.as_ptr().wrapping_add(a.len()) as *const core::ffi::c_char, __begin_b, __end_b)};
    __ret
}

/// Generated from function `MR::CSharp::test_fspath_crref`.
///
/// Calls `MR_CSharp_test_fspath_crref()`.
pub fn test_fspath_crref(a: &str, b: Option<&str>) -> *const crate::ffi::MR_C_std_filesystem_path
{
    let (__begin_b, __end_b) = match b {Some(s) => (s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char), None => (core::ptr::null(), core::ptr::null())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_fspath_crref(a.as_ptr() as *const core::ffi::c_char, a.as_ptr().wrapping_add(a.len()) as *const core::ffi::c_char, __begin_b, __end_b)};
    __ret
}

/// Generated from function `MR::CSharp::test_fspath_ptr`.
///
/// Calls `MR_CSharp_test_fspath_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_fspath_ptr(a: Option<&mut crate::mr::cs::std_filesystem_path>, b: *const *mut crate::ffi::MR_C_std_filesystem_path) -> Option<&mut crate::mr::cs::std_filesystem_path>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_fspath_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_filesystem_path as *mut crate::ffi::MR_C_std_filesystem_path), b)};
    unsafe {(__ret as *mut crate::mr::cs::std_filesystem_path).as_mut()}
}

/// Generated from function `MR::CSharp::test_fspath_cptr`.
///
/// Calls `MR_CSharp_test_fspath_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_fspath_cptr(a: Option<&crate::mr::cs::std_filesystem_path>, b: *const *const crate::ffi::MR_C_std_filesystem_path) -> Option<&crate::mr::cs::std_filesystem_path>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_fspath_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_filesystem_path as *const crate::ffi::MR_C_std_filesystem_path), b)};
    unsafe {(__ret as *const crate::mr::cs::std_filesystem_path).as_ref()}
}

/// Generated from function `MR::CSharp::operator++`.
///
/// Calls `MR_C_incr_MR_CSharp_IncrDecrI()`.
pub fn op_incr_mr_c_sharp_incr_decr_i(_1: &crate::mr::c_sharp::IncrDecrI) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_incr_MR_CSharp_IncrDecrI(_1 as *const crate::mr::c_sharp::IncrDecrI as *const crate::ffi::MR_CSharp_IncrDecrI)};
    __ret
}

/// Generated from function `MR::CSharp::operator++`.
///
/// Calls `MR_C_post_incr_MR_CSharp_IncrDecrI()`.
pub fn op_post_incr_mr_c_sharp_incr_decr_i(_1: &crate::mr::c_sharp::IncrDecrI) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_post_incr_MR_CSharp_IncrDecrI(_1 as *const crate::mr::c_sharp::IncrDecrI as *const crate::ffi::MR_CSharp_IncrDecrI)};
    __ret
}

/// Generated from function `MR::CSharp::operator--`.
///
/// Calls `MR_C_decr_MR_CSharp_IncrDecrI()`.
pub fn op_decr_mr_c_sharp_incr_decr_i(_1: &crate::mr::c_sharp::IncrDecrI) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_decr_MR_CSharp_IncrDecrI(_1 as *const crate::mr::c_sharp::IncrDecrI as *const crate::ffi::MR_CSharp_IncrDecrI)};
    __ret
}

/// Generated from function `MR::CSharp::operator--`.
///
/// Calls `MR_C_post_decr_MR_CSharp_IncrDecrI()`.
pub fn op_post_decr_mr_c_sharp_incr_decr_i(_1: &crate::mr::c_sharp::IncrDecrI) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_post_decr_MR_CSharp_IncrDecrI(_1 as *const crate::mr::c_sharp::IncrDecrI as *const crate::ffi::MR_CSharp_IncrDecrI)};
    __ret
}

/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_MR_CSharp_StaticOpsLhsA_int32_t()`.
pub fn op_add_mr_c_sharp_static_ops_lhs_a_int32_t(_1: &crate::mr::c_sharp::StaticOpsLhsA, _2: i32) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_add_MR_CSharp_StaticOpsLhsA_int32_t(_1 as *const crate::mr::c_sharp::StaticOpsLhsA as *const crate::ffi::MR_CSharp_StaticOpsLhsA, _2)};
    __ret
}

/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_MR_CSharp_StaticOpsLhsB_int32_t()`.
pub fn op_add_mr_c_sharp_static_ops_lhs_b_int32_t(_1: &crate::mr::c_sharp::StaticOpsLhsB, _2: i32)
{
    let __ret = unsafe {crate::ffi::MR_C_add_MR_CSharp_StaticOpsLhsB_int32_t(_1 as *const crate::mr::c_sharp::StaticOpsLhsB as *const crate::ffi::MR_CSharp_StaticOpsLhsB, _2)};
    __ret
}

/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_MR_CSharp_StaticOpsLhsC_int32_t()`.
pub fn op_add_mr_c_sharp_static_ops_lhs_c_int32_t(_1: crate::Owned<crate::mr::c_sharp::StaticOpsLhsC>, _2: i32) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_add_MR_CSharp_StaticOpsLhsC_int32_t(crate::ffi::MR_C_PassBy_MoveAndDestroy, _1.into_raw() as *mut crate::ffi::MR_CSharp_StaticOpsLhsC, _2)};
    __ret
}

/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_MR_CSharp_StaticOpsLhsD_int32_t()`.
pub fn op_add_mr_c_sharp_static_ops_lhs_d_int32_t(_1: &crate::mr::c_sharp::StaticOpsLhsD, _2: i32) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_add_MR_CSharp_StaticOpsLhsD_int32_t(_1 as *const crate::mr::c_sharp::StaticOpsLhsD as *const crate::ffi::MR_CSharp_StaticOpsLhsD, _2)};
    __ret
}

/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_MR_CSharp_StaticOpsLhsE_int32_t()`.
pub fn op_add_mr_c_sharp_static_ops_lhs_e_int32_t(_1: &mut crate::mr::c_sharp::StaticOpsLhsE, _2: i32) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_add_MR_CSharp_StaticOpsLhsE_int32_t(_1 as *mut crate::mr::c_sharp::StaticOpsLhsE as *mut crate::ffi::MR_CSharp_StaticOpsLhsE, _2)};
    __ret
}

/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_MR_CSharp_StaticOpsLhsF_int32_t()`.
pub fn op_add_mr_c_sharp_static_ops_lhs_f_int32_t(_1: &crate::mr::c_sharp::StaticOpsLhsF, _2: i32) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_add_MR_CSharp_StaticOpsLhsF_int32_t(_1 as *const crate::mr::c_sharp::StaticOpsLhsF as *const crate::ffi::MR_CSharp_StaticOpsLhsF, _2)};
    __ret
}

/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_MR_CSharp_StaticOpsLhsG_int32_t()`.
pub fn op_add_mr_c_sharp_static_ops_lhs_g_int32_t(_1: &crate::mr::c_sharp::StaticOpsLhsG, _2: i32) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_add_MR_CSharp_StaticOpsLhsG_int32_t(_1 as *const crate::mr::c_sharp::StaticOpsLhsG as *const crate::ffi::MR_CSharp_StaticOpsLhsG, _2)};
    __ret
}

/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_MR_CSharp_StaticOpsLhsH_int32_t()`.
pub fn op_add_mr_c_sharp_static_ops_lhs_h_int32_t(_1: &crate::mr::c_sharp::StaticOpsLhsH, _2: i32) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_add_MR_CSharp_StaticOpsLhsH_int32_t(_1 as *const crate::mr::c_sharp::StaticOpsLhsH as *const crate::ffi::MR_CSharp_StaticOpsLhsH, _2)};
    __ret
}

/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_int32_t_MR_CSharp_StaticOpsRhsA()`.
pub fn op_add_int32_t_mr_c_sharp_static_ops_rhs_a(_1: i32, _2: &crate::mr::c_sharp::StaticOpsRhsA) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_add_int32_t_MR_CSharp_StaticOpsRhsA(_1, _2 as *const crate::mr::c_sharp::StaticOpsRhsA as *const crate::ffi::MR_CSharp_StaticOpsRhsA)};
    __ret
}

/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_int32_t_MR_CSharp_StaticOpsRhsB()`.
pub fn op_add_int32_t_mr_c_sharp_static_ops_rhs_b(_1: i32, _2: &crate::mr::c_sharp::StaticOpsRhsB)
{
    let __ret = unsafe {crate::ffi::MR_C_add_int32_t_MR_CSharp_StaticOpsRhsB(_1, _2 as *const crate::mr::c_sharp::StaticOpsRhsB as *const crate::ffi::MR_CSharp_StaticOpsRhsB)};
    __ret
}

/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_int32_t_MR_CSharp_StaticOpsRhsC()`.
pub fn op_add_int32_t_mr_c_sharp_static_ops_rhs_c(_1: i32, _2: crate::Owned<crate::mr::c_sharp::StaticOpsRhsC>) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_add_int32_t_MR_CSharp_StaticOpsRhsC(_1, crate::ffi::MR_C_PassBy_MoveAndDestroy, _2.into_raw() as *mut crate::ffi::MR_CSharp_StaticOpsRhsC)};
    __ret
}

/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_int32_t_MR_CSharp_StaticOpsRhsD()`.
pub fn op_add_int32_t_mr_c_sharp_static_ops_rhs_d(_1: i32, _2: &crate::mr::c_sharp::StaticOpsRhsD) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_add_int32_t_MR_CSharp_StaticOpsRhsD(_1, _2 as *const crate::mr::c_sharp::StaticOpsRhsD as *const crate::ffi::MR_CSharp_StaticOpsRhsD)};
    __ret
}

/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_int32_t_MR_CSharp_StaticOpsRhsE()`.
pub fn op_add_int32_t_mr_c_sharp_static_ops_rhs_e(_1: i32, _2: &mut crate::mr::c_sharp::StaticOpsRhsE) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_add_int32_t_MR_CSharp_StaticOpsRhsE(_1, _2 as *mut crate::mr::c_sharp::StaticOpsRhsE as *mut crate::ffi::MR_CSharp_StaticOpsRhsE)};
    __ret
}

/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_int32_t_MR_CSharp_StaticOpsRhsF()`.
pub fn op_add_int32_t_mr_c_sharp_static_ops_rhs_f(_1: i32, _2: &crate::mr::c_sharp::StaticOpsRhsF) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_add_int32_t_MR_CSharp_StaticOpsRhsF(_1, _2 as *const crate::mr::c_sharp::StaticOpsRhsF as *const crate::ffi::MR_CSharp_StaticOpsRhsF)};
    __ret
}

/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_int32_t_MR_CSharp_StaticOpsRhsG()`.
pub fn op_add_int32_t_mr_c_sharp_static_ops_rhs_g(_1: i32, _2: &crate::mr::c_sharp::StaticOpsRhsG) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_add_int32_t_MR_CSharp_StaticOpsRhsG(_1, _2 as *const crate::mr::c_sharp::StaticOpsRhsG as *const crate::ffi::MR_CSharp_StaticOpsRhsG)};
    __ret
}

/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_int32_t_MR_CSharp_StaticOpsRhsH()`.
pub fn op_add_int32_t_mr_c_sharp_static_ops_rhs_h(_1: i32, _2: &crate::mr::c_sharp::StaticOpsRhsH) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_add_int32_t_MR_CSharp_StaticOpsRhsH(_1, _2 as *const crate::mr::c_sharp::StaticOpsRhsH as *const crate::ffi::MR_CSharp_StaticOpsRhsH)};
    __ret
}

/// Fails to inject, becomes a free function.
/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_MR_CSharp_StaticOpsEnum_int32_t()`.
pub fn op_add_mr_c_sharp_static_ops_enum_int32_t(_1: crate::ffi::MR_CSharp_StaticOpsEnum, _2: i32) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_add_MR_CSharp_StaticOpsEnum_int32_t(_1, _2)};
    __ret
}

/// Gets injected into the lhs by default.
/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_MR_CSharp_StaticOpsMixedLhs_MR_CSharp_StaticOpsMixedRhs()`.
pub fn op_add_mr_c_sharp_static_ops_mixed_lhs_mr_c_sharp_static_ops_mixed_rhs(_1: &crate::mr::c_sharp::StaticOpsMixedLhs, _2: &crate::mr::c_sharp::StaticOpsMixedRhs) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_add_MR_CSharp_StaticOpsMixedLhs_MR_CSharp_StaticOpsMixedRhs(_1 as *const crate::mr::c_sharp::StaticOpsMixedLhs as *const crate::ffi::MR_CSharp_StaticOpsMixedLhs, _2 as *const crate::mr::c_sharp::StaticOpsMixedRhs as *const crate::ffi::MR_CSharp_StaticOpsMixedRhs)};
    __ret
}

/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_MR_CSharp_NonTrivialClassOps_float()`.
pub fn op_add_mr_c_sharp_non_trivial_class_ops_float(_1: &crate::mr::c_sharp::NonTrivialClassOps, _2: f32) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_add_MR_CSharp_NonTrivialClassOps_float(crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::c_sharp::NonTrivialClassOps as *mut crate::ffi::MR_CSharp_NonTrivialClassOps, _2)};
    __ret
}

/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_float_MR_CSharp_NonTrivialClassOps()`.
pub fn op_add_float_mr_c_sharp_non_trivial_class_ops(_1: f32, _2: &crate::mr::c_sharp::NonTrivialClassOps) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_add_float_MR_CSharp_NonTrivialClassOps(_1, crate::ffi::MR_C_PassBy_Copy, _2 as *const crate::mr::c_sharp::NonTrivialClassOps as *mut crate::ffi::MR_CSharp_NonTrivialClassOps)};
    __ret
}

/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_MR_CSharp_NonCopyableClassByValueOps_int32_t()`.
pub fn op_add_mr_c_sharp_non_copyable_class_by_value_ops_int32_t(_1: &crate::mr::c_sharp::NonCopyableClassByValueOps, _2: i32) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_add_MR_CSharp_NonCopyableClassByValueOps_int32_t(_1 as *const crate::mr::c_sharp::NonCopyableClassByValueOps as *const crate::ffi::MR_CSharp_NonCopyableClassByValueOps, _2)};
    __ret
}

/// Generated from function `MR::CSharp::operator+`.
///
/// Calls `MR_C_add_int32_t_MR_CSharp_NonCopyableClassByValueOps()`.
pub fn op_add_int32_t_mr_c_sharp_non_copyable_class_by_value_ops(_1: i32, _2: &crate::mr::c_sharp::NonCopyableClassByValueOps) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_add_int32_t_MR_CSharp_NonCopyableClassByValueOps(_1, _2 as *const crate::mr::c_sharp::NonCopyableClassByValueOps as *const crate::ffi::MR_CSharp_NonCopyableClassByValueOps)};
    __ret
}

/// Generated from function `MR::CSharp::test_class_convtrivial`.
///
/// Calls `MR_CSharp_test_class_convtrivial()`.
pub fn test_class_convtrivial(a: &crate::mr::c_sharp::ConvCtorTrivial, b: Option<&crate::mr::c_sharp::ConvCtorTrivial>) -> crate::Owned<crate::mr::c_sharp::ConvCtorTrivial>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_convtrivial(a as *const crate::mr::c_sharp::ConvCtorTrivial as *const crate::ffi::MR_CSharp_ConvCtorTrivial, b.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::ConvCtorTrivial as *const crate::ffi::MR_CSharp_ConvCtorTrivial))};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtorTrivial)}
}

/// Generated from function `MR::CSharp::test_class_convtrivial_ref`.
///
/// Calls `MR_CSharp_test_class_convtrivial_ref()`.
pub fn test_class_convtrivial_ref(a: &mut crate::mr::c_sharp::ConvCtorTrivial, b: Option<&mut crate::mr::c_sharp::ConvCtorTrivial>) -> *mut crate::ffi::MR_CSharp_ConvCtorTrivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_convtrivial_ref(a as *mut crate::mr::c_sharp::ConvCtorTrivial as *mut crate::ffi::MR_CSharp_ConvCtorTrivial, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::ConvCtorTrivial as *mut crate::ffi::MR_CSharp_ConvCtorTrivial))};
    __ret
}

/// Generated from function `MR::CSharp::test_class_convtrivial_cref`.
///
/// Calls `MR_CSharp_test_class_convtrivial_cref()`.
pub fn test_class_convtrivial_cref(a: &crate::mr::c_sharp::ConvCtorTrivial, b: Option<&crate::mr::c_sharp::ConvCtorTrivial>) -> *const crate::ffi::MR_CSharp_ConvCtorTrivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_convtrivial_cref(a as *const crate::mr::c_sharp::ConvCtorTrivial as *const crate::ffi::MR_CSharp_ConvCtorTrivial, b.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::ConvCtorTrivial as *const crate::ffi::MR_CSharp_ConvCtorTrivial))};
    __ret
}

/// Generated from function `MR::CSharp::test_class_convtrivial_ptr`.
///
/// Calls `MR_CSharp_test_class_convtrivial_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_class_convtrivial_ptr(a: Option<&mut crate::mr::c_sharp::ConvCtorTrivial>, b: Option<&mut crate::mr::c_sharp::ConvCtorTrivial>, c: *const *mut crate::ffi::MR_CSharp_ConvCtorTrivial) -> *mut crate::ffi::MR_CSharp_ConvCtorTrivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_convtrivial_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::ConvCtorTrivial as *mut crate::ffi::MR_CSharp_ConvCtorTrivial), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::ConvCtorTrivial as *mut crate::ffi::MR_CSharp_ConvCtorTrivial), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_class_convtrivial_cptr`.
///
/// Calls `MR_CSharp_test_class_convtrivial_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_class_convtrivial_cptr(a: Option<&crate::mr::c_sharp::ConvCtorTrivial>, b: Option<&crate::mr::c_sharp::ConvCtorTrivial>, c: *const *const crate::ffi::MR_CSharp_ConvCtorTrivial) -> *const crate::ffi::MR_CSharp_ConvCtorTrivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_convtrivial_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::ConvCtorTrivial as *const crate::ffi::MR_CSharp_ConvCtorTrivial), b.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::ConvCtorTrivial as *const crate::ffi::MR_CSharp_ConvCtorTrivial), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_class_convnontrivial`.
///
/// Calls `MR_CSharp_test_class_convnontrivial()`.
pub fn test_class_convnontrivial(a: &crate::mr::c_sharp::ConvCtorNonTrivial, b: Option<&crate::mr::c_sharp::ConvCtorNonTrivial>) -> crate::Owned<crate::mr::c_sharp::ConvCtorNonTrivial>
{
    let (__pb_b, __ptr_b) = match b {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::c_sharp::ConvCtorNonTrivial as *mut crate::ffi::MR_CSharp_ConvCtorNonTrivial), None => (crate::ffi::MR_C_PassBy_DefaultArgument, core::ptr::null_mut())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_convnontrivial(crate::ffi::MR_C_PassBy_Copy, a as *const crate::mr::c_sharp::ConvCtorNonTrivial as *mut crate::ffi::MR_CSharp_ConvCtorNonTrivial, __pb_b, __ptr_b)};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::c_sharp::ConvCtorNonTrivial)}
}

/// Generated from function `MR::CSharp::test_class_convnontrivial_ref`.
///
/// Calls `MR_CSharp_test_class_convnontrivial_ref()`.
pub fn test_class_convnontrivial_ref(a: &mut crate::mr::c_sharp::ConvCtorNonTrivial, b: Option<&mut crate::mr::c_sharp::ConvCtorNonTrivial>) -> *mut crate::ffi::MR_CSharp_ConvCtorNonTrivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_convnontrivial_ref(a as *mut crate::mr::c_sharp::ConvCtorNonTrivial as *mut crate::ffi::MR_CSharp_ConvCtorNonTrivial, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::ConvCtorNonTrivial as *mut crate::ffi::MR_CSharp_ConvCtorNonTrivial))};
    __ret
}

/// Generated from function `MR::CSharp::test_class_convnontrivial_cref`.
///
/// Calls `MR_CSharp_test_class_convnontrivial_cref()`.
pub fn test_class_convnontrivial_cref(a: &crate::mr::c_sharp::ConvCtorNonTrivial, b: Option<&crate::mr::c_sharp::ConvCtorNonTrivial>) -> *const crate::ffi::MR_CSharp_ConvCtorNonTrivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_convnontrivial_cref(a as *const crate::mr::c_sharp::ConvCtorNonTrivial as *const crate::ffi::MR_CSharp_ConvCtorNonTrivial, b.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::ConvCtorNonTrivial as *const crate::ffi::MR_CSharp_ConvCtorNonTrivial))};
    __ret
}

/// Generated from function `MR::CSharp::test_class_convnontrivial_ptr`.
///
/// Calls `MR_CSharp_test_class_convnontrivial_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_class_convnontrivial_ptr(a: Option<&mut crate::mr::c_sharp::ConvCtorNonTrivial>, b: Option<&mut crate::mr::c_sharp::ConvCtorNonTrivial>, c: *const *mut crate::ffi::MR_CSharp_ConvCtorNonTrivial) -> *mut crate::ffi::MR_CSharp_ConvCtorNonTrivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_convnontrivial_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::ConvCtorNonTrivial as *mut crate::ffi::MR_CSharp_ConvCtorNonTrivial), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::ConvCtorNonTrivial as *mut crate::ffi::MR_CSharp_ConvCtorNonTrivial), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_class_convnontrivial_cptr`.
///
/// Calls `MR_CSharp_test_class_convnontrivial_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_class_convnontrivial_cptr(a: Option<&crate::mr::c_sharp::ConvCtorNonTrivial>, b: Option<&crate::mr::c_sharp::ConvCtorNonTrivial>, c: *const *const crate::ffi::MR_CSharp_ConvCtorNonTrivial) -> *const crate::ffi::MR_CSharp_ConvCtorNonTrivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_class_convnontrivial_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::ConvCtorNonTrivial as *const crate::ffi::MR_CSharp_ConvCtorNonTrivial), b.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::ConvCtorNonTrivial as *const crate::ffi::MR_CSharp_ConvCtorNonTrivial), c)};
    __ret
}

/// Generated from function `MR::CSharp::operator-`.
///
/// Calls `MR_C_sub_int32_t_MR_CSharp_ExposedLayout()`.
pub fn op_sub_int32_t_mr_c_sharp_exposed_layout(_1: i32, _2: crate::ffi::MR_CSharp_ExposedLayout) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_sub_int32_t_MR_CSharp_ExposedLayout(_1, _2)};
    __ret
}

/// Generated from function `MR::CSharp::operator/`.
///
/// Calls `MR_C_div_int32_t_MR_CSharp_ExposedLayout()`.
pub fn op_div_int32_t_mr_c_sharp_exposed_layout(_1: i32, _2: &mut crate::ffi::MR_CSharp_ExposedLayout) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_div_int32_t_MR_CSharp_ExposedLayout(_1, _2 as *mut crate::ffi::MR_CSharp_ExposedLayout as *mut crate::ffi::MR_CSharp_ExposedLayout)};
    __ret
}

/// Generated from function `MR::CSharp::operator%`.
///
/// Calls `MR_C_mod_int32_t_MR_CSharp_ExposedLayout()`.
pub fn op_mod_int32_t_mr_c_sharp_exposed_layout(_1: i32, _2: &crate::ffi::MR_CSharp_ExposedLayout) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_mod_int32_t_MR_CSharp_ExposedLayout(_1, _2 as *const crate::ffi::MR_CSharp_ExposedLayout as *const crate::ffi::MR_CSharp_ExposedLayout)};
    __ret
}

/// Generated from function `MR::CSharp::operator--`.
///
/// Calls `MR_C_decr_MR_CSharp_ExposedLayout()`.
pub fn op_decr_mr_c_sharp_exposed_layout(_1: crate::ffi::MR_CSharp_ExposedLayout)
{
    let __ret = unsafe {crate::ffi::MR_C_decr_MR_CSharp_ExposedLayout(_1)};
    __ret
}

/// Generated from function `MR::CSharp::test_exposed`.
///
/// Calls `MR_CSharp_test_exposed_MR_CSharp_ExposedLayout()`.
pub fn test_exposed_mr_c_sharp_exposed_layout(a: crate::ffi::MR_CSharp_ExposedLayout, b: Option<&crate::ffi::MR_CSharp_ExposedLayout>) -> crate::ffi::MR_CSharp_ExposedLayout
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_exposed_MR_CSharp_ExposedLayout(a, b.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_ExposedLayout as *const crate::ffi::MR_CSharp_ExposedLayout))};
    __ret
}

/// Generated from function `MR::CSharp::test_exposed_ref`.
///
/// Calls `MR_CSharp_test_exposed_ref_MR_CSharp_ExposedLayout()`.
pub fn test_exposed_ref_mr_c_sharp_exposed_layout(a: &mut crate::ffi::MR_CSharp_ExposedLayout, b: Option<&mut crate::ffi::MR_CSharp_ExposedLayout>) -> *mut crate::ffi::MR_CSharp_ExposedLayout
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_exposed_ref_MR_CSharp_ExposedLayout(a as *mut crate::ffi::MR_CSharp_ExposedLayout as *mut crate::ffi::MR_CSharp_ExposedLayout, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_CSharp_ExposedLayout as *mut crate::ffi::MR_CSharp_ExposedLayout))};
    __ret
}

/// Generated from function `MR::CSharp::test_exposed_cref`.
///
/// Calls `MR_CSharp_test_exposed_cref_MR_CSharp_ExposedLayout()`.
pub fn test_exposed_cref_mr_c_sharp_exposed_layout(a: &crate::ffi::MR_CSharp_ExposedLayout, b: Option<&crate::ffi::MR_CSharp_ExposedLayout>) -> *const crate::ffi::MR_CSharp_ExposedLayout
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_exposed_cref_MR_CSharp_ExposedLayout(a as *const crate::ffi::MR_CSharp_ExposedLayout as *const crate::ffi::MR_CSharp_ExposedLayout, b.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_ExposedLayout as *const crate::ffi::MR_CSharp_ExposedLayout))};
    __ret
}

/// Generated from function `MR::CSharp::test_exposed_rref`.
///
/// Calls `MR_CSharp_test_exposed_rref()`.
pub fn test_exposed_rref(a: &mut crate::ffi::MR_CSharp_ExposedLayout, b: Option<&mut crate::ffi::MR_CSharp_ExposedLayout>) -> *mut crate::ffi::MR_CSharp_ExposedLayout
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_exposed_rref(a as *mut crate::ffi::MR_CSharp_ExposedLayout as *mut crate::ffi::MR_CSharp_ExposedLayout, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_CSharp_ExposedLayout as *mut crate::ffi::MR_CSharp_ExposedLayout))};
    __ret
}

/// Generated from function `MR::CSharp::test_exposed_crref`.
///
/// Calls `MR_CSharp_test_exposed_crref()`.
pub fn test_exposed_crref(a: &crate::ffi::MR_CSharp_ExposedLayout, b: Option<&crate::ffi::MR_CSharp_ExposedLayout>) -> *const crate::ffi::MR_CSharp_ExposedLayout
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_exposed_crref(a as *const crate::ffi::MR_CSharp_ExposedLayout as *const crate::ffi::MR_CSharp_ExposedLayout, b.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_ExposedLayout as *const crate::ffi::MR_CSharp_ExposedLayout))};
    __ret
}

/// Generated from function `MR::CSharp::test_exposed_ptr`.
///
/// Calls `MR_CSharp_test_exposed_ptr_MR_CSharp_ExposedLayout_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_exposed_ptr_mr_c_sharp_exposed_layout_ptr(a: Option<&mut crate::ffi::MR_CSharp_ExposedLayout>, b: Option<&mut crate::ffi::MR_CSharp_ExposedLayout>, c: *const *mut crate::ffi::MR_CSharp_ExposedLayout) -> *mut crate::ffi::MR_CSharp_ExposedLayout
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_exposed_ptr_MR_CSharp_ExposedLayout_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_CSharp_ExposedLayout as *mut crate::ffi::MR_CSharp_ExposedLayout), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_CSharp_ExposedLayout as *mut crate::ffi::MR_CSharp_ExposedLayout), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_exposed_cptr`.
///
/// Calls `MR_CSharp_test_exposed_cptr_const_MR_CSharp_ExposedLayout_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_exposed_cptr_const_mr_c_sharp_exposed_layout_ptr(a: Option<&crate::ffi::MR_CSharp_ExposedLayout>, b: Option<&crate::ffi::MR_CSharp_ExposedLayout>, c: *const *const crate::ffi::MR_CSharp_ExposedLayout) -> *const crate::ffi::MR_CSharp_ExposedLayout
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_exposed_cptr_const_MR_CSharp_ExposedLayout_ptr(a.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_ExposedLayout as *const crate::ffi::MR_CSharp_ExposedLayout), b.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_ExposedLayout as *const crate::ffi::MR_CSharp_ExposedLayout), c)};
    __ret
}

/// This broke at one point, so testing it too.
/// Generated from function `MR::CSharp::test_exposed_vec`.
///
/// Calls `MR_CSharp_test_exposed_vec()`.
pub fn test_exposed_vec() -> crate::Owned<crate::mr::cs::std_vector_MR_CSharp_ExposedLayout>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_exposed_vec()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_CSharp_ExposedLayout)}
}

/// Test that capturing lifetime of an exposed struct is a no-op.
/// Generated from function `MR::CSharp::asave_ref_in_exposed_layout`.
///
/// Calls `MR_CSharp_asave_ref_in_exposed_layout()`.
/// The reference to the parameter `ref` might be preserved in the return value.
pub fn asave_ref_in_exposed_layout<'a>(r#ref: &'a mut crate::ffi::MR_CSharp_ExposedLayout) -> &'a mut crate::mr::c_sharp::NonTrivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_asave_ref_in_exposed_layout(r#ref as *mut crate::ffi::MR_CSharp_ExposedLayout as *mut crate::ffi::MR_CSharp_ExposedLayout)};
    unsafe {&mut *(__ret as *mut crate::mr::c_sharp::NonTrivial)}
}

/// Generated from function `MR::CSharp::operator-`.
///
/// Calls `MR_C_sub_int32_t_MR_CSharp_ExposedLayoutSh()`.
pub fn op_sub_int32_t_mr_c_sharp_exposed_layout_sh(_1: i32, _2: crate::ffi::MR_CSharp_ExposedLayoutSh) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_sub_int32_t_MR_CSharp_ExposedLayoutSh(_1, _2)};
    __ret
}

/// Generated from function `MR::CSharp::operator/`.
///
/// Calls `MR_C_div_int32_t_MR_CSharp_ExposedLayoutSh()`.
pub fn op_div_int32_t_mr_c_sharp_exposed_layout_sh(_1: i32, _2: &mut crate::ffi::MR_CSharp_ExposedLayoutSh) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_div_int32_t_MR_CSharp_ExposedLayoutSh(_1, _2 as *mut crate::ffi::MR_CSharp_ExposedLayoutSh as *mut crate::ffi::MR_CSharp_ExposedLayoutSh)};
    __ret
}

/// Generated from function `MR::CSharp::operator%`.
///
/// Calls `MR_C_mod_int32_t_MR_CSharp_ExposedLayoutSh()`.
pub fn op_mod_int32_t_mr_c_sharp_exposed_layout_sh(_1: i32, _2: &crate::ffi::MR_CSharp_ExposedLayoutSh) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_mod_int32_t_MR_CSharp_ExposedLayoutSh(_1, _2 as *const crate::ffi::MR_CSharp_ExposedLayoutSh as *const crate::ffi::MR_CSharp_ExposedLayoutSh)};
    __ret
}

/// Generated from function `MR::CSharp::operator--`.
///
/// Calls `MR_C_decr_MR_CSharp_ExposedLayoutSh()`.
pub fn op_decr_mr_c_sharp_exposed_layout_sh(_1: crate::ffi::MR_CSharp_ExposedLayoutSh)
{
    let __ret = unsafe {crate::ffi::MR_C_decr_MR_CSharp_ExposedLayoutSh(_1)};
    __ret
}

/// Generated from function `MR::CSharp::make_exposed_sh`.
///
/// Calls `MR_CSharp_make_exposed_sh()`.
pub fn make_exposed_sh() -> crate::Owned<crate::mr::cs::std_shared_ptr_MR_CSharp_ExposedLayoutSh>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_make_exposed_sh()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_shared_ptr_MR_CSharp_ExposedLayoutSh)}
}

/// Generated from function `MR::CSharp::test_exposed`.
///
/// Calls `MR_CSharp_test_exposed_MR_CSharp_ExposedLayoutSh()`.
pub fn test_exposed_mr_c_sharp_exposed_layout_sh(a: crate::ffi::MR_CSharp_ExposedLayoutSh, b: Option<&crate::ffi::MR_CSharp_ExposedLayoutSh>) -> crate::ffi::MR_CSharp_ExposedLayoutSh
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_exposed_MR_CSharp_ExposedLayoutSh(a, b.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_ExposedLayoutSh as *const crate::ffi::MR_CSharp_ExposedLayoutSh))};
    __ret
}

/// Generated from function `MR::CSharp::test_exposed_ref`.
///
/// Calls `MR_CSharp_test_exposed_ref_MR_CSharp_ExposedLayoutSh()`.
pub fn test_exposed_ref_mr_c_sharp_exposed_layout_sh(a: &mut crate::ffi::MR_CSharp_ExposedLayoutSh, b: Option<&mut crate::ffi::MR_CSharp_ExposedLayoutSh>) -> *mut crate::ffi::MR_CSharp_ExposedLayoutSh
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_exposed_ref_MR_CSharp_ExposedLayoutSh(a as *mut crate::ffi::MR_CSharp_ExposedLayoutSh as *mut crate::ffi::MR_CSharp_ExposedLayoutSh, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_CSharp_ExposedLayoutSh as *mut crate::ffi::MR_CSharp_ExposedLayoutSh))};
    __ret
}

/// Generated from function `MR::CSharp::test_exposed_cref`.
///
/// Calls `MR_CSharp_test_exposed_cref_MR_CSharp_ExposedLayoutSh()`.
pub fn test_exposed_cref_mr_c_sharp_exposed_layout_sh(a: &crate::ffi::MR_CSharp_ExposedLayoutSh, b: Option<&crate::ffi::MR_CSharp_ExposedLayoutSh>) -> *const crate::ffi::MR_CSharp_ExposedLayoutSh
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_exposed_cref_MR_CSharp_ExposedLayoutSh(a as *const crate::ffi::MR_CSharp_ExposedLayoutSh as *const crate::ffi::MR_CSharp_ExposedLayoutSh, b.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_ExposedLayoutSh as *const crate::ffi::MR_CSharp_ExposedLayoutSh))};
    __ret
}

/// Generated from function `MR::CSharp::test_exposed_ptr`.
///
/// Calls `MR_CSharp_test_exposed_ptr_MR_CSharp_ExposedLayoutSh_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_exposed_ptr_mr_c_sharp_exposed_layout_sh_ptr(a: Option<&mut crate::ffi::MR_CSharp_ExposedLayoutSh>, b: Option<&mut crate::ffi::MR_CSharp_ExposedLayoutSh>, c: *const *mut crate::ffi::MR_CSharp_ExposedLayoutSh) -> *mut crate::ffi::MR_CSharp_ExposedLayoutSh
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_exposed_ptr_MR_CSharp_ExposedLayoutSh_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_CSharp_ExposedLayoutSh as *mut crate::ffi::MR_CSharp_ExposedLayoutSh), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_CSharp_ExposedLayoutSh as *mut crate::ffi::MR_CSharp_ExposedLayoutSh), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_exposed_cptr`.
///
/// Calls `MR_CSharp_test_exposed_cptr_const_MR_CSharp_ExposedLayoutSh_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_exposed_cptr_const_mr_c_sharp_exposed_layout_sh_ptr(a: Option<&crate::ffi::MR_CSharp_ExposedLayoutSh>, b: Option<&crate::ffi::MR_CSharp_ExposedLayoutSh>, c: *const *const crate::ffi::MR_CSharp_ExposedLayoutSh) -> *const crate::ffi::MR_CSharp_ExposedLayoutSh
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_exposed_cptr_const_MR_CSharp_ExposedLayoutSh_ptr(a.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_ExposedLayoutSh as *const crate::ffi::MR_CSharp_ExposedLayoutSh), b.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_ExposedLayoutSh as *const crate::ffi::MR_CSharp_ExposedLayoutSh), c)};
    __ret
}

/// And try an equality comparison!
/// Generated from function `MR::CSharp::operator==`.
///
/// Calls `MR_C_equal_MR_CSharp_ExposedLayoutB()`.
pub fn op_equal_mr_c_sharp_exposed_layout_b(_1: &crate::ffi::MR_CSharp_ExposedLayoutB, _2: &crate::ffi::MR_CSharp_ExposedLayoutB) -> bool
{
    let __ret = unsafe {crate::ffi::MR_C_equal_MR_CSharp_ExposedLayoutB(_1 as *const crate::ffi::MR_CSharp_ExposedLayoutB as *const crate::ffi::MR_CSharp_ExposedLayoutB, _2 as *const crate::ffi::MR_CSharp_ExposedLayoutB as *const crate::ffi::MR_CSharp_ExposedLayoutB)};
    __ret
}

/// Generated from function `MR::CSharp::test_optint`.
///
/// Calls `MR_CSharp_test_optint()`.
pub fn test_optint(a: &i32, b: Option<&crate::mr::cs::std_optional_int32_t>, c: Option<&crate::mr::cs::std_optional_int32_t>) -> crate::Owned<crate::mr::cs::std_optional_int32_t>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optint(a as *const i32 as *const i32, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_int32_t as *const crate::ffi::MR_C_std_optional_int32_t), c.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_int32_t as *const crate::ffi::MR_C_std_optional_int32_t))};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_int32_t)}
}

/// Generated from function `MR::CSharp::test_optint_ref`.
///
/// Calls `MR_CSharp_test_optint_ref()`.
pub fn test_optint_ref(a: &mut crate::mr::cs::std_optional_int32_t, b: Option<&mut crate::mr::cs::std_optional_int32_t>) -> *mut crate::ffi::MR_C_std_optional_int32_t
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optint_ref(a as *mut crate::mr::cs::std_optional_int32_t as *mut crate::ffi::MR_C_std_optional_int32_t, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_optional_int32_t as *mut crate::ffi::MR_C_std_optional_int32_t))};
    __ret
}

/// Generated from function `MR::CSharp::test_optint_cref`.
///
/// Calls `MR_CSharp_test_optint_cref()`.
pub fn test_optint_cref(a: &i32, b: Option<&crate::mr::cs::std_optional_int32_t>) -> *const crate::ffi::MR_C_std_optional_int32_t
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optint_cref(a as *const i32 as *const i32, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_int32_t as *const crate::ffi::MR_C_std_optional_int32_t))};
    __ret
}

/// Generated from function `MR::CSharp::test_optint_ptr`.
///
/// Calls `MR_CSharp_test_optint_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_optint_ptr(a: Option<&mut crate::mr::cs::std_optional_int32_t>, b: Option<&mut crate::mr::cs::std_optional_int32_t>, c: *const *mut crate::ffi::MR_C_std_optional_int32_t) -> *mut crate::ffi::MR_C_std_optional_int32_t
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optint_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_optional_int32_t as *mut crate::ffi::MR_C_std_optional_int32_t), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_optional_int32_t as *mut crate::ffi::MR_C_std_optional_int32_t), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_optint_cptr`.
///
/// Calls `MR_CSharp_test_optint_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_optint_cptr(a: Option<&crate::mr::cs::std_optional_int32_t>, b: Option<&crate::mr::cs::std_optional_int32_t>, c: *const *const crate::ffi::MR_C_std_optional_int32_t) -> *const crate::ffi::MR_C_std_optional_int32_t
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optint_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_int32_t as *const crate::ffi::MR_C_std_optional_int32_t), b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_int32_t as *const crate::ffi::MR_C_std_optional_int32_t), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_optstr`.
///
/// Calls `MR_CSharp_test_optstr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_optstr(a: *const core::ffi::c_char, a_end: *const core::ffi::c_char, b: Option<&crate::mr::cs::std_optional_std_string>, c: Option<&crate::mr::cs::std_optional_std_string>) -> crate::Owned<crate::mr::cs::std_optional_std_string>
{
    let (__pb_b, __ptr_b) = match b {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::cs::std_optional_std_string as *mut crate::ffi::MR_C_std_optional_std_string), None => (crate::ffi::MR_C_PassBy_NoObject, core::ptr::null_mut())};
    let (__pb_c, __ptr_c) = match c {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::cs::std_optional_std_string as *mut crate::ffi::MR_C_std_optional_std_string), None => (crate::ffi::MR_C_PassBy_NoObject, core::ptr::null_mut())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optstr(a, a_end, __pb_b, __ptr_b, __pb_c, __ptr_c)};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_std_string)}
}

/// Generated from function `MR::CSharp::test_optstr_ref`.
///
/// Calls `MR_CSharp_test_optstr_ref()`.
pub fn test_optstr_ref(a: &mut crate::mr::cs::std_optional_std_string, b: Option<&mut crate::mr::cs::std_optional_std_string>) -> *mut crate::ffi::MR_C_std_optional_std_string
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optstr_ref(a as *mut crate::mr::cs::std_optional_std_string as *mut crate::ffi::MR_C_std_optional_std_string, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_optional_std_string as *mut crate::ffi::MR_C_std_optional_std_string))};
    __ret
}

/// Generated from function `MR::CSharp::test_optstr_cref`.
///
/// Calls `MR_CSharp_test_optstr_cref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_optstr_cref(a: *const core::ffi::c_char, a_end: *const core::ffi::c_char, b: Option<&crate::mr::cs::std_optional_std_string>) -> &crate::mr::cs::std_optional_std_string
{
    let (__pb_b, __ptr_b) = match b {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::cs::std_optional_std_string as *mut crate::ffi::MR_C_std_optional_std_string), None => (crate::ffi::MR_C_PassBy_NoObject, core::ptr::null_mut())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optstr_cref(a, a_end, __pb_b, __ptr_b)};
    unsafe {&*(__ret as *const crate::mr::cs::std_optional_std_string)}
}

/// Generated from function `MR::CSharp::test_optstr_ptr`.
///
/// Calls `MR_CSharp_test_optstr_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_optstr_ptr(a: Option<&mut crate::mr::cs::std_optional_std_string>, b: Option<&mut crate::mr::cs::std_optional_std_string>, c: *const *mut crate::ffi::MR_C_std_optional_std_string) -> *mut crate::ffi::MR_C_std_optional_std_string
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optstr_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_optional_std_string as *mut crate::ffi::MR_C_std_optional_std_string), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_optional_std_string as *mut crate::ffi::MR_C_std_optional_std_string), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_optstr_cptr`.
///
/// Calls `MR_CSharp_test_optstr_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_optstr_cptr(a: Option<&crate::mr::cs::std_optional_std_string>, b: Option<&crate::mr::cs::std_optional_std_string>, c: *const *const crate::ffi::MR_C_std_optional_std_string) -> *const crate::ffi::MR_C_std_optional_std_string
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optstr_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_std_string as *const crate::ffi::MR_C_std_optional_std_string), b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_std_string as *const crate::ffi::MR_C_std_optional_std_string), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_opttriv`.
///
/// Calls `MR_CSharp_test_opttriv()`.
pub fn test_opttriv(a: &crate::mr::c_sharp::Trivial, b: Option<&crate::mr::cs::std_optional_MR_CSharp_Trivial>, c: Option<&crate::mr::cs::std_optional_MR_CSharp_Trivial>) -> crate::Owned<crate::mr::cs::std_optional_MR_CSharp_Trivial>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_opttriv(a as *const crate::mr::c_sharp::Trivial as *const crate::ffi::MR_CSharp_Trivial, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_MR_CSharp_Trivial as *const crate::ffi::MR_C_std_optional_MR_CSharp_Trivial), c.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_MR_CSharp_Trivial as *const crate::ffi::MR_C_std_optional_MR_CSharp_Trivial))};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_CSharp_Trivial)}
}

/// Generated from function `MR::CSharp::test_opttriv_ref`.
///
/// Calls `MR_CSharp_test_opttriv_ref()`.
pub fn test_opttriv_ref(a: &mut crate::mr::cs::std_optional_MR_CSharp_Trivial, b: Option<&mut crate::mr::cs::std_optional_MR_CSharp_Trivial>) -> *mut crate::ffi::MR_C_std_optional_MR_CSharp_Trivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_opttriv_ref(a as *mut crate::mr::cs::std_optional_MR_CSharp_Trivial as *mut crate::ffi::MR_C_std_optional_MR_CSharp_Trivial, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_optional_MR_CSharp_Trivial as *mut crate::ffi::MR_C_std_optional_MR_CSharp_Trivial))};
    __ret
}

/// Generated from function `MR::CSharp::test_opttriv_cref`.
///
/// Calls `MR_CSharp_test_opttriv_cref()`.
pub fn test_opttriv_cref(a: &crate::mr::c_sharp::Trivial, b: Option<&crate::mr::cs::std_optional_MR_CSharp_Trivial>) -> *const crate::ffi::MR_C_std_optional_MR_CSharp_Trivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_opttriv_cref(a as *const crate::mr::c_sharp::Trivial as *const crate::ffi::MR_CSharp_Trivial, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_MR_CSharp_Trivial as *const crate::ffi::MR_C_std_optional_MR_CSharp_Trivial))};
    __ret
}

/// Generated from function `MR::CSharp::test_opttriv_ptr`.
///
/// Calls `MR_CSharp_test_opttriv_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_opttriv_ptr(a: Option<&mut crate::mr::cs::std_optional_MR_CSharp_Trivial>, b: Option<&mut crate::mr::cs::std_optional_MR_CSharp_Trivial>, c: *const *mut crate::ffi::MR_C_std_optional_MR_CSharp_Trivial) -> *mut crate::ffi::MR_C_std_optional_MR_CSharp_Trivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_opttriv_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_optional_MR_CSharp_Trivial as *mut crate::ffi::MR_C_std_optional_MR_CSharp_Trivial), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_optional_MR_CSharp_Trivial as *mut crate::ffi::MR_C_std_optional_MR_CSharp_Trivial), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_opttriv_cptr`.
///
/// Calls `MR_CSharp_test_opttriv_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_opttriv_cptr(a: Option<&crate::mr::cs::std_optional_MR_CSharp_Trivial>, b: Option<&crate::mr::cs::std_optional_MR_CSharp_Trivial>, c: *const *const crate::ffi::MR_C_std_optional_MR_CSharp_Trivial) -> *const crate::ffi::MR_C_std_optional_MR_CSharp_Trivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_opttriv_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_MR_CSharp_Trivial as *const crate::ffi::MR_C_std_optional_MR_CSharp_Trivial), b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_MR_CSharp_Trivial as *const crate::ffi::MR_C_std_optional_MR_CSharp_Trivial), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_optnontriv`.
///
/// Calls `MR_CSharp_test_optnontriv()`.
pub fn test_optnontriv(a: Option<&crate::mr::c_sharp::NonTrivial>, b: Option<&crate::mr::c_sharp::NonTrivial>, c: Option<&crate::mr::c_sharp::NonTrivial>) -> crate::Owned<crate::mr::cs::std_optional_MR_CSharp_NonTrivial>
{
    let (__pb_a, __ptr_a) = match a {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::c_sharp::NonTrivial as *mut crate::ffi::MR_CSharp_NonTrivial), None => (crate::ffi::MR_C_PassBy_NoObject, core::ptr::null_mut())};
    let (__pb_b, __ptr_b) = match b {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::c_sharp::NonTrivial as *mut crate::ffi::MR_CSharp_NonTrivial), None => (crate::ffi::MR_C_PassBy_NoObject, core::ptr::null_mut())};
    let (__pb_c, __ptr_c) = match c {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::c_sharp::NonTrivial as *mut crate::ffi::MR_CSharp_NonTrivial), None => (crate::ffi::MR_C_PassBy_NoObject, core::ptr::null_mut())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optnontriv(__pb_a, __ptr_a, __pb_b, __ptr_b, __pb_c, __ptr_c)};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_CSharp_NonTrivial)}
}

/// Generated from function `MR::CSharp::test_optnontriv_ref`.
///
/// Calls `MR_CSharp_test_optnontriv_ref()`.
pub fn test_optnontriv_ref(a: &mut crate::mr::cs::std_optional_MR_CSharp_NonTrivial, b: Option<&mut crate::mr::cs::std_optional_MR_CSharp_NonTrivial>) -> *mut crate::ffi::MR_C_std_optional_MR_CSharp_NonTrivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optnontriv_ref(a as *mut crate::mr::cs::std_optional_MR_CSharp_NonTrivial as *mut crate::ffi::MR_C_std_optional_MR_CSharp_NonTrivial, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_optional_MR_CSharp_NonTrivial as *mut crate::ffi::MR_C_std_optional_MR_CSharp_NonTrivial))};
    __ret
}

/// Generated from function `MR::CSharp::test_optnontriv_cref`.
///
/// Calls `MR_CSharp_test_optnontriv_cref()`.
pub fn test_optnontriv_cref(a: Option<&crate::mr::c_sharp::NonTrivial>, b: Option<&crate::mr::c_sharp::NonTrivial>) -> *const crate::ffi::MR_C_std_optional_MR_CSharp_NonTrivial
{
    let (__pb_a, __ptr_a) = match a {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::c_sharp::NonTrivial as *mut crate::ffi::MR_CSharp_NonTrivial), None => (crate::ffi::MR_C_PassBy_NoObject, core::ptr::null_mut())};
    let (__pb_b, __ptr_b) = match b {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::c_sharp::NonTrivial as *mut crate::ffi::MR_CSharp_NonTrivial), None => (crate::ffi::MR_C_PassBy_NoObject, core::ptr::null_mut())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optnontriv_cref(__pb_a, __ptr_a, __pb_b, __ptr_b)};
    __ret
}

/// Generated from function `MR::CSharp::test_optnontriv_ptr`.
///
/// Calls `MR_CSharp_test_optnontriv_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_optnontriv_ptr(a: Option<&mut crate::mr::cs::std_optional_MR_CSharp_NonTrivial>, b: Option<&mut crate::mr::cs::std_optional_MR_CSharp_NonTrivial>, c: *const *mut crate::ffi::MR_C_std_optional_MR_CSharp_NonTrivial) -> *mut crate::ffi::MR_C_std_optional_MR_CSharp_NonTrivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optnontriv_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_optional_MR_CSharp_NonTrivial as *mut crate::ffi::MR_C_std_optional_MR_CSharp_NonTrivial), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_optional_MR_CSharp_NonTrivial as *mut crate::ffi::MR_C_std_optional_MR_CSharp_NonTrivial), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_optnontriv_cptr`.
///
/// Calls `MR_CSharp_test_optnontriv_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_optnontriv_cptr(a: Option<&crate::mr::cs::std_optional_MR_CSharp_NonTrivial>, b: Option<&crate::mr::cs::std_optional_MR_CSharp_NonTrivial>, c: *const *const crate::ffi::MR_C_std_optional_MR_CSharp_NonTrivial) -> *const crate::ffi::MR_C_std_optional_MR_CSharp_NonTrivial
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optnontriv_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_MR_CSharp_NonTrivial as *const crate::ffi::MR_C_std_optional_MR_CSharp_NonTrivial), b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_MR_CSharp_NonTrivial as *const crate::ffi::MR_C_std_optional_MR_CSharp_NonTrivial), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_optshexp`.
///
/// Calls `MR_CSharp_test_optshexp()`.
pub fn test_optshexp(a: &crate::ffi::MR_CSharp_ExposedLayoutSh, b: Option<&crate::mr::cs::std_optional_MR_CSharp_ExposedLayoutSh>, c: Option<&crate::mr::cs::std_optional_MR_CSharp_ExposedLayoutSh>) -> crate::Owned<crate::mr::cs::std_optional_MR_CSharp_ExposedLayoutSh>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optshexp(a as *const crate::ffi::MR_CSharp_ExposedLayoutSh as *const crate::ffi::MR_CSharp_ExposedLayoutSh, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_MR_CSharp_ExposedLayoutSh as *const crate::ffi::MR_C_std_optional_MR_CSharp_ExposedLayoutSh), c.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_MR_CSharp_ExposedLayoutSh as *const crate::ffi::MR_C_std_optional_MR_CSharp_ExposedLayoutSh))};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_CSharp_ExposedLayoutSh)}
}

/// Generated from function `MR::CSharp::test_optshexp_ref`.
///
/// Calls `MR_CSharp_test_optshexp_ref()`.
pub fn test_optshexp_ref(a: &mut crate::mr::cs::std_optional_MR_CSharp_ExposedLayoutSh, b: Option<&mut crate::mr::cs::std_optional_MR_CSharp_ExposedLayoutSh>) -> *mut crate::ffi::MR_C_std_optional_MR_CSharp_ExposedLayoutSh
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optshexp_ref(a as *mut crate::mr::cs::std_optional_MR_CSharp_ExposedLayoutSh as *mut crate::ffi::MR_C_std_optional_MR_CSharp_ExposedLayoutSh, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_optional_MR_CSharp_ExposedLayoutSh as *mut crate::ffi::MR_C_std_optional_MR_CSharp_ExposedLayoutSh))};
    __ret
}

/// Generated from function `MR::CSharp::test_optshexp_cref`.
///
/// Calls `MR_CSharp_test_optshexp_cref()`.
pub fn test_optshexp_cref(a: &crate::ffi::MR_CSharp_ExposedLayoutSh, b: Option<&crate::mr::cs::std_optional_MR_CSharp_ExposedLayoutSh>) -> *const crate::ffi::MR_C_std_optional_MR_CSharp_ExposedLayoutSh
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optshexp_cref(a as *const crate::ffi::MR_CSharp_ExposedLayoutSh as *const crate::ffi::MR_CSharp_ExposedLayoutSh, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_MR_CSharp_ExposedLayoutSh as *const crate::ffi::MR_C_std_optional_MR_CSharp_ExposedLayoutSh))};
    __ret
}

/// Generated from function `MR::CSharp::test_optshexp_ptr`.
///
/// Calls `MR_CSharp_test_optshexp_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_optshexp_ptr(a: Option<&mut crate::mr::cs::std_optional_MR_CSharp_ExposedLayoutSh>, b: Option<&mut crate::mr::cs::std_optional_MR_CSharp_ExposedLayoutSh>, c: *const *mut crate::ffi::MR_C_std_optional_MR_CSharp_ExposedLayoutSh) -> *mut crate::ffi::MR_C_std_optional_MR_CSharp_ExposedLayoutSh
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optshexp_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_optional_MR_CSharp_ExposedLayoutSh as *mut crate::ffi::MR_C_std_optional_MR_CSharp_ExposedLayoutSh), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_optional_MR_CSharp_ExposedLayoutSh as *mut crate::ffi::MR_C_std_optional_MR_CSharp_ExposedLayoutSh), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_optshexp_cptr`.
///
/// Calls `MR_CSharp_test_optshexp_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_optshexp_cptr(a: Option<&crate::mr::cs::std_optional_MR_CSharp_ExposedLayoutSh>, b: Option<&crate::mr::cs::std_optional_MR_CSharp_ExposedLayoutSh>, c: *const *const crate::ffi::MR_C_std_optional_MR_CSharp_ExposedLayoutSh) -> *const crate::ffi::MR_C_std_optional_MR_CSharp_ExposedLayoutSh
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optshexp_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_MR_CSharp_ExposedLayoutSh as *const crate::ffi::MR_C_std_optional_MR_CSharp_ExposedLayoutSh), b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_MR_CSharp_ExposedLayoutSh as *const crate::ffi::MR_C_std_optional_MR_CSharp_ExposedLayoutSh), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_optshtriv`.
///
/// Calls `MR_CSharp_test_optshtriv()`.
pub fn test_optshtriv(a: &crate::mr::c_sharp::SA, b: Option<&crate::mr::cs::std_optional_MR_CSharp_SA>, c: Option<&crate::mr::cs::std_optional_MR_CSharp_SA>) -> crate::Owned<crate::mr::cs::std_optional_MR_CSharp_SA>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optshtriv(a as *const crate::mr::c_sharp::SA as *const crate::ffi::MR_CSharp_SA, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_MR_CSharp_SA as *const crate::ffi::MR_C_std_optional_MR_CSharp_SA), c.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_MR_CSharp_SA as *const crate::ffi::MR_C_std_optional_MR_CSharp_SA))};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_CSharp_SA)}
}

/// Generated from function `MR::CSharp::test_optshtriv_ref`.
///
/// Calls `MR_CSharp_test_optshtriv_ref()`.
pub fn test_optshtriv_ref(a: &mut crate::mr::cs::std_optional_MR_CSharp_SA, b: Option<&mut crate::mr::cs::std_optional_MR_CSharp_SA>) -> *mut crate::ffi::MR_C_std_optional_MR_CSharp_SA
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optshtriv_ref(a as *mut crate::mr::cs::std_optional_MR_CSharp_SA as *mut crate::ffi::MR_C_std_optional_MR_CSharp_SA, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_optional_MR_CSharp_SA as *mut crate::ffi::MR_C_std_optional_MR_CSharp_SA))};
    __ret
}

/// Generated from function `MR::CSharp::test_optshtriv_cref`.
///
/// Calls `MR_CSharp_test_optshtriv_cref()`.
pub fn test_optshtriv_cref(a: &crate::mr::c_sharp::SA, b: Option<&crate::mr::cs::std_optional_MR_CSharp_SA>) -> *const crate::ffi::MR_C_std_optional_MR_CSharp_SA
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optshtriv_cref(a as *const crate::mr::c_sharp::SA as *const crate::ffi::MR_CSharp_SA, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_MR_CSharp_SA as *const crate::ffi::MR_C_std_optional_MR_CSharp_SA))};
    __ret
}

/// Generated from function `MR::CSharp::test_optshtriv_ptr`.
///
/// Calls `MR_CSharp_test_optshtriv_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_optshtriv_ptr(a: Option<&mut crate::mr::cs::std_optional_MR_CSharp_SA>, b: Option<&mut crate::mr::cs::std_optional_MR_CSharp_SA>, c: *const *mut crate::ffi::MR_C_std_optional_MR_CSharp_SA) -> *mut crate::ffi::MR_C_std_optional_MR_CSharp_SA
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optshtriv_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_optional_MR_CSharp_SA as *mut crate::ffi::MR_C_std_optional_MR_CSharp_SA), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_optional_MR_CSharp_SA as *mut crate::ffi::MR_C_std_optional_MR_CSharp_SA), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_optshtriv_cptr`.
///
/// Calls `MR_CSharp_test_optshtriv_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_optshtriv_cptr(a: Option<&crate::mr::cs::std_optional_MR_CSharp_SA>, b: Option<&crate::mr::cs::std_optional_MR_CSharp_SA>, c: *const *const crate::ffi::MR_C_std_optional_MR_CSharp_SA) -> *const crate::ffi::MR_C_std_optional_MR_CSharp_SA
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_optshtriv_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_MR_CSharp_SA as *const crate::ffi::MR_C_std_optional_MR_CSharp_SA), b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_MR_CSharp_SA as *const crate::ffi::MR_C_std_optional_MR_CSharp_SA), c)};
    __ret
}

/// Tag types:
/// Generated from function `MR::CSharp::test_tag`.
///
/// Calls `MR_CSharp_test_tag()`.
pub fn test_tag()
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_tag()};
    __ret
}

/// Generated from function `MR::CSharp::test_tag_cref`.
///
/// Calls `MR_CSharp_test_tag_cref()`.
pub fn test_tag_cref()
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_tag_cref()};
    __ret
}

/// Generated from function `MR::CSharp::test_tag_ptr`.
///
/// Calls `MR_CSharp_test_tag_ptr()`.
pub fn test_tag_ptr() -> bool
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_tag_ptr()};
    __ret
}

/// Generated from function `MR::CSharp::test_tag_cptr`.
///
/// Calls `MR_CSharp_test_tag_cptr()`.
pub fn test_tag_cptr() -> bool
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_tag_cptr()};
    __ret
}

/// Generated from function `MR::CSharp::test_variant`.
///
/// Calls `MR_CSharp_test_variant()`.
pub fn test_variant(a: &crate::mr::cs::std_variant_std_monostate_int32_t_float, b: Option<&crate::mr::cs::std_variant_std_monostate_int32_t_float>) -> crate::Owned<crate::mr::cs::std_variant_std_monostate_int32_t_float>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_variant(a as *const crate::mr::cs::std_variant_std_monostate_int32_t_float as *const crate::ffi::MR_C_std_variant_std_monostate_int32_t_float, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_variant_std_monostate_int32_t_float as *const crate::ffi::MR_C_std_variant_std_monostate_int32_t_float))};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_variant_std_monostate_int32_t_float)}
}

/// Generated from function `MR::CSharp::test_variant_ref`.
///
/// Calls `MR_CSharp_test_variant_ref()`.
pub fn test_variant_ref(a: &mut crate::mr::cs::std_variant_std_monostate_int32_t_float, b: Option<&mut crate::mr::cs::std_variant_std_monostate_int32_t_float>) -> *mut crate::ffi::MR_C_std_variant_std_monostate_int32_t_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_variant_ref(a as *mut crate::mr::cs::std_variant_std_monostate_int32_t_float as *mut crate::ffi::MR_C_std_variant_std_monostate_int32_t_float, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_variant_std_monostate_int32_t_float as *mut crate::ffi::MR_C_std_variant_std_monostate_int32_t_float))};
    __ret
}

/// Generated from function `MR::CSharp::test_variant_cref`.
///
/// Calls `MR_CSharp_test_variant_cref()`.
pub fn test_variant_cref(a: &crate::mr::cs::std_variant_std_monostate_int32_t_float, b: Option<&crate::mr::cs::std_variant_std_monostate_int32_t_float>) -> *const crate::ffi::MR_C_std_variant_std_monostate_int32_t_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_variant_cref(a as *const crate::mr::cs::std_variant_std_monostate_int32_t_float as *const crate::ffi::MR_C_std_variant_std_monostate_int32_t_float, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_variant_std_monostate_int32_t_float as *const crate::ffi::MR_C_std_variant_std_monostate_int32_t_float))};
    __ret
}

/// Generated from function `MR::CSharp::test_variant_ptr`.
///
/// Calls `MR_CSharp_test_variant_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_variant_ptr(a: Option<&mut crate::mr::cs::std_variant_std_monostate_int32_t_float>, b: *const *mut crate::ffi::MR_C_std_variant_std_monostate_int32_t_float) -> Option<&mut crate::mr::cs::std_variant_std_monostate_int32_t_float>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_variant_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_variant_std_monostate_int32_t_float as *mut crate::ffi::MR_C_std_variant_std_monostate_int32_t_float), b)};
    unsafe {(__ret as *mut crate::mr::cs::std_variant_std_monostate_int32_t_float).as_mut()}
}

/// Generated from function `MR::CSharp::test_variant_cptr`.
///
/// Calls `MR_CSharp_test_variant_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_variant_cptr(a: Option<&crate::mr::cs::std_variant_std_monostate_int32_t_float>, b: *const *const crate::ffi::MR_C_std_variant_std_monostate_int32_t_float) -> Option<&crate::mr::cs::std_variant_std_monostate_int32_t_float>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_variant_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_variant_std_monostate_int32_t_float as *const crate::ffi::MR_C_std_variant_std_monostate_int32_t_float), b)};
    unsafe {(__ret as *const crate::mr::cs::std_variant_std_monostate_int32_t_float).as_ref()}
}

/// Test a variant that has duplicate element types.
/// Generated from function `MR::CSharp::test_variant_with_repeated_types`.
///
/// Calls `MR_CSharp_test_variant_with_repeated_types()`.
pub fn test_variant_with_repeated_types() -> crate::Owned<crate::mr::cs::std_variant_std_monostate_int32_t_float_float>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_variant_with_repeated_types()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_variant_std_monostate_int32_t_float_float)}
}

/// Input and output streams:
/// Generated from function `MR::CSharp::test_iostreams_ref`.
///
/// Calls `MR_CSharp_test_iostreams_ref()`.
pub fn test_iostreams_ref(_1: &mut crate::mr::cs::std_istream) -> &mut crate::mr::cs::std_ostream
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_iostreams_ref(_1 as *mut crate::mr::cs::std_istream as *mut crate::ffi::MR_C_std_istream)};
    unsafe {&mut *(__ret as *mut crate::mr::cs::std_ostream)}
}

/// Generated from function `MR::CSharp::test_iostreams_ptr`.
///
/// Calls `MR_CSharp_test_iostreams_ptr()`.
pub fn test_iostreams_ptr(_1: Option<&mut crate::mr::cs::std_istream>) -> Option<&mut crate::mr::cs::std_ostream>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_iostreams_ptr(_1.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_istream as *mut crate::ffi::MR_C_std_istream))};
    unsafe {(__ret as *mut crate::mr::cs::std_ostream).as_mut()}
}

/// Generated from function `MR::CSharp::test_iostreams_cref`.
///
/// Calls `MR_CSharp_test_iostreams_cref()`.
pub fn test_iostreams_cref(_1: &crate::mr::cs::std_istream) -> &crate::mr::cs::std_ostream
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_iostreams_cref(_1 as *const crate::mr::cs::std_istream as *const crate::ffi::MR_C_std_istream)};
    unsafe {&*(__ret as *const crate::mr::cs::std_ostream)}
}

/// Generated from function `MR::CSharp::test_iostreams_cptr`.
///
/// Calls `MR_CSharp_test_iostreams_cptr()`.
pub fn test_iostreams_cptr(_1: Option<&crate::mr::cs::std_istream>) -> Option<&crate::mr::cs::std_ostream>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_iostreams_cptr(_1.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_istream as *const crate::ffi::MR_C_std_istream))};
    unsafe {(__ret as *const crate::mr::cs::std_ostream).as_ref()}
}

/// Generated from function `MR::CSharp::test_uniqueptr`.
///
/// Calls `MR_CSharp_test_uniqueptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_uniqueptr(a: &mut i32, b: *const *mut i32) -> *mut i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_uniqueptr(a as *mut i32 as *mut i32, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_uniqueptr_ref`.
///
/// Calls `MR_CSharp_test_uniqueptr_ref()`.
pub fn test_uniqueptr_ref(a: crate::Owned<crate::mr::cs::std_unique_ptr_int32_t>, b: crate::Owned<crate::mr::cs::std_unique_ptr_int32_t>) -> crate::Owned<crate::mr::cs::std_unique_ptr_int32_t>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_uniqueptr_ref(a.into_raw() as *mut crate::ffi::MR_C_std_unique_ptr_int32_t, b.into_raw() as *mut crate::ffi::MR_C_std_unique_ptr_int32_t)};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_unique_ptr_int32_t)}
}

/// Generated from function `MR::CSharp::test_uniqueptr_cref`.
///
/// Calls `MR_CSharp_test_uniqueptr_cref()`.
pub fn test_uniqueptr_cref(a: &crate::mr::cs::std_unique_ptr_int32_t, b: Option<&crate::mr::cs::std_unique_ptr_int32_t>) -> *const crate::ffi::MR_C_std_unique_ptr_int32_t
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_uniqueptr_cref(a as *const crate::mr::cs::std_unique_ptr_int32_t as *const crate::ffi::MR_C_std_unique_ptr_int32_t, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_unique_ptr_int32_t as *const crate::ffi::MR_C_std_unique_ptr_int32_t))};
    __ret
}

/// Generated from function `MR::CSharp::test_uniqueptr_ptr`.
///
/// Calls `MR_CSharp_test_uniqueptr_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_uniqueptr_ptr(a: crate::Owned<crate::mr::cs::std_unique_ptr_int32_t>, b: crate::Owned<crate::mr::cs::std_unique_ptr_int32_t>, c: *const *mut crate::ffi::MR_C_std_unique_ptr_int32_t) -> crate::Owned<crate::mr::cs::std_unique_ptr_int32_t>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_uniqueptr_ptr(a.into_raw() as *mut crate::ffi::MR_C_std_unique_ptr_int32_t, b.into_raw() as *mut crate::ffi::MR_C_std_unique_ptr_int32_t, c)};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_unique_ptr_int32_t)}
}

/// Generated from function `MR::CSharp::test_uniqueptr_cptr`.
///
/// Calls `MR_CSharp_test_uniqueptr_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_uniqueptr_cptr(a: Option<&crate::mr::cs::std_unique_ptr_int32_t>, b: Option<&crate::mr::cs::std_unique_ptr_int32_t>, c: *const *const crate::ffi::MR_C_std_unique_ptr_int32_t) -> *const crate::ffi::MR_C_std_unique_ptr_int32_t
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_uniqueptr_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_unique_ptr_int32_t as *const crate::ffi::MR_C_std_unique_ptr_int32_t), b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_unique_ptr_int32_t as *const crate::ffi::MR_C_std_unique_ptr_int32_t), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_plainarr_ref`.
///
/// Calls `MR_CSharp_test_plainarr_ref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_plainarr_ref(a: *mut [i32; 42], b: *mut [i32; 42]) -> *mut [i32; 42]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_plainarr_ref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_plainarr_cref`.
///
/// Calls `MR_CSharp_test_plainarr_cref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_plainarr_cref(a: *const [i32; 42], b: *const [i32; 42]) -> *const [i32; 42]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_plainarr_cref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_plainarr_rref`.
///
/// Calls `MR_CSharp_test_plainarr_rref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_plainarr_rref(a: *mut [i32; 42], b: *mut [i32; 42]) -> *mut [i32; 42]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_plainarr_rref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_plainarr_crref`.
///
/// Calls `MR_CSharp_test_plainarr_crref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_plainarr_crref(a: *const [i32; 42], b: *const [i32; 42]) -> *const [i32; 42]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_plainarr_crref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_plainarr_ptr`.
///
/// Calls `MR_CSharp_test_plainarr_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_plainarr_ptr(a: *mut [i32; 42], b: *mut [i32; 42], c: *const *mut [i32; 42]) -> *mut [i32; 42]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_plainarr_ptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_plainarr_cptr`.
///
/// Calls `MR_CSharp_test_plainarr_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_plainarr_cptr(a: *const [i32; 42], b: *const [i32; 42], c: *const *const [i32; 42]) -> *const [i32; 42]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_plainarr_cptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_plainarr2_ref`.
///
/// Calls `MR_CSharp_test_plainarr2_ref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_plainarr2_ref(a: *mut [[i32; 20]; 10], b: *mut [[i32; 20]; 10]) -> *mut [[i32; 20]; 10]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_plainarr2_ref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_plainarr2_cref`.
///
/// Calls `MR_CSharp_test_plainarr2_cref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_plainarr2_cref(a: *const [[i32; 20]; 10], b: *const [[i32; 20]; 10]) -> *const [[i32; 20]; 10]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_plainarr2_cref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_plainarr2_rref`.
///
/// Calls `MR_CSharp_test_plainarr2_rref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_plainarr2_rref(a: *mut [[i32; 20]; 10], b: *mut [[i32; 20]; 10]) -> *mut [[i32; 20]; 10]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_plainarr2_rref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_plainarr2_crref`.
///
/// Calls `MR_CSharp_test_plainarr2_crref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_plainarr2_crref(a: *const [[i32; 20]; 10], b: *const [[i32; 20]; 10]) -> *const [[i32; 20]; 10]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_plainarr2_crref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_plainarr2_ptr`.
///
/// Calls `MR_CSharp_test_plainarr2_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_plainarr2_ptr(a: *mut [[i32; 20]; 10], b: *mut [[i32; 20]; 10], c: *const *mut [[i32; 20]; 10]) -> *mut [[i32; 20]; 10]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_plainarr2_ptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_plainarr2_cptr`.
///
/// Calls `MR_CSharp_test_plainarr2_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_plainarr2_cptr(a: *const [[i32; 20]; 10], b: *const [[i32; 20]; 10], c: *const *const [[i32; 20]; 10]) -> *const [[i32; 20]; 10]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_plainarr2_cptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_plainarrenum_ref`.
///
/// Calls `MR_CSharp_test_plainarrenum_ref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_plainarrenum_ref(a: *mut [crate::ffi::MR_CSharp_E1; 42], b: *mut [crate::ffi::MR_CSharp_E1; 42]) -> *mut [crate::ffi::MR_CSharp_E1; 42]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_plainarrenum_ref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_plainarrenum_cref`.
///
/// Calls `MR_CSharp_test_plainarrenum_cref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_plainarrenum_cref(a: *const [crate::ffi::MR_CSharp_E1; 42], b: *const [crate::ffi::MR_CSharp_E1; 42]) -> *const [crate::ffi::MR_CSharp_E1; 42]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_plainarrenum_cref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_plainarrenum_ptr`.
///
/// Calls `MR_CSharp_test_plainarrenum_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_plainarrenum_ptr(a: *mut [crate::ffi::MR_CSharp_E1; 42], b: *mut [crate::ffi::MR_CSharp_E1; 42], c: *const *mut [crate::ffi::MR_CSharp_E1; 42]) -> *mut [crate::ffi::MR_CSharp_E1; 42]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_plainarrenum_ptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_plainarrenum_cptr`.
///
/// Calls `MR_CSharp_test_plainarrenum_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_plainarrenum_cptr(a: *const [crate::ffi::MR_CSharp_E1; 42], b: *const [crate::ffi::MR_CSharp_E1; 42], c: *const *const [crate::ffi::MR_CSharp_E1; 42]) -> *const [crate::ffi::MR_CSharp_E1; 42]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_plainarrenum_cptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_plainarrenum2_ref`.
///
/// Calls `MR_CSharp_test_plainarrenum2_ref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_plainarrenum2_ref(a: *mut [[crate::ffi::MR_CSharp_E1; 20]; 10], b: *mut [[crate::ffi::MR_CSharp_E1; 20]; 10]) -> *mut [[crate::ffi::MR_CSharp_E1; 20]; 10]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_plainarrenum2_ref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_plainarrenum2_cref`.
///
/// Calls `MR_CSharp_test_plainarrenum2_cref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_plainarrenum2_cref(a: *const [[crate::ffi::MR_CSharp_E1; 20]; 10], b: *const [[crate::ffi::MR_CSharp_E1; 20]; 10]) -> *const [[crate::ffi::MR_CSharp_E1; 20]; 10]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_plainarrenum2_cref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_plainarrenum2_ptr`.
///
/// Calls `MR_CSharp_test_plainarrenum2_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_plainarrenum2_ptr(a: *mut [[crate::ffi::MR_CSharp_E1; 20]; 10], b: *mut [[crate::ffi::MR_CSharp_E1; 20]; 10], c: *const *mut [[crate::ffi::MR_CSharp_E1; 20]; 10]) -> *mut [[crate::ffi::MR_CSharp_E1; 20]; 10]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_plainarrenum2_ptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_plainarrenum2_cptr`.
///
/// Calls `MR_CSharp_test_plainarrenum2_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_plainarrenum2_cptr(a: *const [[crate::ffi::MR_CSharp_E1; 20]; 10], b: *const [[crate::ffi::MR_CSharp_E1; 20]; 10], c: *const *const [[crate::ffi::MR_CSharp_E1; 20]; 10]) -> *const [[crate::ffi::MR_CSharp_E1; 20]; 10]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_plainarrenum2_cptr(a, b, c)};
    __ret
}

/// Some multi-level pointer madness:
/// Generated from function `MR::CSharp::test_ptrs1`.
///
/// Calls `MR_CSharp_test_ptrs1()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_ptrs1(ptr: *mut *mut [i32; 42], r#ref: *mut *mut [i32; 42]) -> *mut *mut [i32; 42]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_ptrs1(ptr, r#ref)};
    __ret
}

/// Generated from function `MR::CSharp::test_ptrs2`.
///
/// Calls `MR_CSharp_test_ptrs2()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_ptrs2(ptr: *mut *mut *mut [i32; 42], r#ref: *mut *mut *mut [i32; 42]) -> *mut *mut *mut [i32; 42]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_ptrs2(ptr, r#ref)};
    __ret
}

/// Generated from function `MR::CSharp::test_intptr_ref`.
///
/// Calls `MR_CSharp_test_intptr_ref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_intptr_ref(a: *mut *mut i32, b: *mut *mut i32) -> *mut *mut i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_intptr_ref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_intptr_cref`.
///
/// Calls `MR_CSharp_test_intptr_cref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_intptr_cref(a: *const *mut i32, b: *const *mut i32) -> *const *mut i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_intptr_cref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_intptr_ptr`.
///
/// Calls `MR_CSharp_test_intptr_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_intptr_ptr(a: *mut *mut i32, b: *mut *mut i32, c: *const *mut *mut i32) -> *mut *mut i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_intptr_ptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_intptr_cptr`.
///
/// Calls `MR_CSharp_test_intptr_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_intptr_cptr(a: *const *mut i32, b: *const *mut i32, c: *const *const *mut i32) -> *const *mut i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_intptr_cptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_intcptr_ref`.
///
/// Calls `MR_CSharp_test_intcptr_ref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_intcptr_ref(a: *mut *const i32, b: *mut *const i32) -> *mut *const i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_intcptr_ref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_intcptr_cref`.
///
/// Calls `MR_CSharp_test_intcptr_cref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_intcptr_cref(a: *const *const i32, b: *const *const i32) -> *const *const i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_intcptr_cref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_intcptr_ptr`.
///
/// Calls `MR_CSharp_test_intcptr_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_intcptr_ptr(a: *mut *const i32, b: *mut *const i32, c: *const *mut *const i32) -> *mut *const i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_intcptr_ptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_intcptr_cptr`.
///
/// Calls `MR_CSharp_test_intcptr_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_intcptr_cptr(a: *const *const i32, b: *const *const i32, c: *const *const *const i32) -> *const *const i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_intcptr_cptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_intptrptr_ref`.
///
/// Calls `MR_CSharp_test_intptrptr_ref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_intptrptr_ref(a: *mut *mut *mut i32, b: *mut *mut *mut i32) -> *mut *mut *mut i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_intptrptr_ref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_intptrptr_cref`.
///
/// Calls `MR_CSharp_test_intptrptr_cref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_intptrptr_cref(a: *const *mut *mut i32, b: *const *mut *mut i32) -> *const *mut *mut i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_intptrptr_cref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_intptrptr_ptr`.
///
/// Calls `MR_CSharp_test_intptrptr_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_intptrptr_ptr(a: *mut *mut *mut i32, b: *mut *mut *mut i32, c: *const *mut *mut *mut i32) -> *mut *mut *mut i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_intptrptr_ptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_intptrptr_cptr`.
///
/// Calls `MR_CSharp_test_intptrptr_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_intptrptr_cptr(a: *const *mut *mut i32, b: *const *mut *mut i32, c: *const *const *mut *mut i32) -> *const *mut *mut i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_intptrptr_cptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_voidptr_ref`.
///
/// Calls `MR_CSharp_test_voidptr_ref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_voidptr_ref(a: *mut *mut core::ffi::c_void, b: *mut *mut core::ffi::c_void) -> *mut *mut core::ffi::c_void
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_voidptr_ref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_voidptr_cref`.
///
/// Calls `MR_CSharp_test_voidptr_cref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_voidptr_cref(a: *const *mut core::ffi::c_void, b: *const *mut core::ffi::c_void) -> *const *mut core::ffi::c_void
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_voidptr_cref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_voidptr_ptr`.
///
/// Calls `MR_CSharp_test_voidptr_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_voidptr_ptr(a: *mut *mut core::ffi::c_void, b: *mut *mut core::ffi::c_void, c: *const *mut *mut core::ffi::c_void) -> *mut *mut core::ffi::c_void
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_voidptr_ptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_voidptr_cptr`.
///
/// Calls `MR_CSharp_test_voidptr_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_voidptr_cptr(a: *const *mut core::ffi::c_void, b: *const *mut core::ffi::c_void, c: *const *const *mut core::ffi::c_void) -> *const *mut core::ffi::c_void
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_voidptr_cptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_voidptrptr_ref`.
///
/// Calls `MR_CSharp_test_voidptrptr_ref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_voidptrptr_ref(a: *mut *mut *mut core::ffi::c_void, b: *mut *mut *mut core::ffi::c_void) -> *mut *mut *mut core::ffi::c_void
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_voidptrptr_ref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_voidptrptr_cref`.
///
/// Calls `MR_CSharp_test_voidptrptr_cref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_voidptrptr_cref(a: *const *mut *mut core::ffi::c_void, b: *const *mut *mut core::ffi::c_void) -> *const *mut *mut core::ffi::c_void
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_voidptrptr_cref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_voidptrptr_ptr`.
///
/// Calls `MR_CSharp_test_voidptrptr_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_voidptrptr_ptr(a: *mut *mut *mut core::ffi::c_void, b: *mut *mut *mut core::ffi::c_void, c: *const *mut *mut *mut core::ffi::c_void) -> *mut *mut *mut core::ffi::c_void
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_voidptrptr_ptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_voidptrptr_cptr`.
///
/// Calls `MR_CSharp_test_voidptrptr_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_voidptrptr_cptr(a: *const *mut *mut core::ffi::c_void, b: *const *mut *mut core::ffi::c_void, c: *const *const *mut *mut core::ffi::c_void) -> *const *mut *mut core::ffi::c_void
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_voidptrptr_cptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_arrptr_ref`.
///
/// Calls `MR_CSharp_test_arrptr_ref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_arrptr_ref(a: *mut *mut [i32; 42], b: *mut *mut [i32; 42]) -> *mut *mut [i32; 42]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_arrptr_ref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_arrptr_cref`.
///
/// Calls `MR_CSharp_test_arrptr_cref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_arrptr_cref(a: *const *mut [i32; 42], b: *const *mut [i32; 42]) -> *const *mut [i32; 42]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_arrptr_cref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_arrptr_ptr`.
///
/// Calls `MR_CSharp_test_arrptr_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_arrptr_ptr(a: *mut *mut [i32; 42], b: *mut *mut [i32; 42], c: *const *mut *mut [i32; 42]) -> *mut *mut [i32; 42]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_arrptr_ptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_arrptr_cptr`.
///
/// Calls `MR_CSharp_test_arrptr_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_arrptr_cptr(a: *const *mut [i32; 42], b: *const *mut [i32; 42], c: *const *const *mut [i32; 42]) -> *const *mut [i32; 42]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_arrptr_cptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_arrcptr_ref`.
///
/// Calls `MR_CSharp_test_arrcptr_ref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_arrcptr_ref(a: *mut *const [i32; 42], b: *mut *const [i32; 42]) -> *mut *const [i32; 42]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_arrcptr_ref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_arrcptr_cref`.
///
/// Calls `MR_CSharp_test_arrcptr_cref()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_arrcptr_cref(a: *const *const [i32; 42], b: *const *const [i32; 42]) -> *const *const [i32; 42]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_arrcptr_cref(a, b)};
    __ret
}

/// Generated from function `MR::CSharp::test_arrcptr_ptr`.
///
/// Calls `MR_CSharp_test_arrcptr_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_arrcptr_ptr(a: *mut *const [i32; 42], b: *mut *const [i32; 42], c: *const *mut *const [i32; 42]) -> *mut *const [i32; 42]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_arrcptr_ptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::test_arrcptr_cptr`.
///
/// Calls `MR_CSharp_test_arrcptr_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_arrcptr_cptr(a: *const *const [i32; 42], b: *const *const [i32; 42], c: *const *const *const [i32; 42]) -> *const *const [i32; 42]
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_arrcptr_cptr(a, b, c)};
    __ret
}

/// Generated from function `MR::CSharp::nameConflicts`.
///
/// Calls `MR_CSharp_nameConflicts()`.
pub fn name_conflicts()
{
    let __ret = unsafe {crate::ffi::MR_CSharp_nameConflicts()};
    __ret
}

/// Generated from function `MR::CSharp::nameConflictsExposed`.
///
/// Calls `MR_CSharp_nameConflictsExposed()`.
pub fn name_conflicts_exposed()
{
    let __ret = unsafe {crate::ffi::MR_CSharp_nameConflictsExposed()};
    __ret
}

/// Test how template arguments are added to function names when needed to avoid ambiguities.
/// Generated from function `MR::CSharp::template_a<int32_t>`.
///
/// Calls `MR_CSharp_template_a_int32_t()`.
pub fn template_a_int32_t(_1: i32)
{
    let __ret = unsafe {crate::ffi::MR_CSharp_template_a_int32_t(_1)};
    __ret
}

/// Test how template arguments are added to function names when needed to avoid ambiguities.
/// Generated from function `MR::CSharp::template_a<float>`.
///
/// Calls `MR_CSharp_template_a_float()`.
pub fn template_a_float(_1: f32)
{
    let __ret = unsafe {crate::ffi::MR_CSharp_template_a_float(_1)};
    __ret
}

/// Generated from function `MR::CSharp::template_b<int32_t>`.
///
/// Calls `MR_CSharp_template_b_int32_t()`.
pub fn template_b_int32_t() -> i32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_template_b_int32_t()};
    __ret
}

/// Generated from function `MR::CSharp::template_b<float>`.
///
/// Calls `MR_CSharp_template_b_float()`.
pub fn template_b_float() -> f32
{
    let __ret = unsafe {crate::ffi::MR_CSharp_template_b_float()};
    __ret
}

/// Generated from function `MR::CSharp::template_c<int32_t>`.
///
/// Calls `MR_CSharp_template_c_int32_t()`.
pub fn template_c_int32_t()
{
    let __ret = unsafe {crate::ffi::MR_CSharp_template_c_int32_t()};
    __ret
}

/// Generated from function `MR::CSharp::template_c<float>`.
///
/// Calls `MR_CSharp_template_c_float()`.
pub fn template_c_float()
{
    let __ret = unsafe {crate::ffi::MR_CSharp_template_c_float()};
    __ret
}

/// Generated from function `MR::CSharp::instantiate`.
///
/// Calls `MR_CSharp_instantiate()`.
pub fn instantiate()
{
    let __ret = unsafe {crate::ffi::MR_CSharp_instantiate()};
    __ret
}

/// Generated from function `MR::CSharp::operator-`.
///
/// Calls `MR_C_neg_MR_CSharp_ConstNonconstConflicts_ref()`.
pub fn op_neg_mr_c_sharp_const_nonconst_conflicts_ref(_1: &mut crate::ffi::MR_CSharp_ConstNonconstConflicts) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_neg_MR_CSharp_ConstNonconstConflicts_ref(_1 as *mut crate::ffi::MR_CSharp_ConstNonconstConflicts as *mut crate::ffi::MR_CSharp_ConstNonconstConflicts)};
    __ret
}

/// Generated from function `MR::CSharp::operator-`.
///
/// Calls `MR_C_neg_const_MR_CSharp_ConstNonconstConflicts_ref()`.
pub fn op_neg_const_mr_c_sharp_const_nonconst_conflicts_ref(_1: &crate::ffi::MR_CSharp_ConstNonconstConflicts) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_neg_const_MR_CSharp_ConstNonconstConflicts_ref(_1 as *const crate::ffi::MR_CSharp_ConstNonconstConflicts as *const crate::ffi::MR_CSharp_ConstNonconstConflicts)};
    __ret
}

/// Since this returns void, it gets rewritten into a method.
/// Generated from function `MR::CSharp::operator!`.
///
/// Calls `MR_C_not_MR_CSharp_ConstNonconstConflicts_ref()`.
pub fn op_not_mr_c_sharp_const_nonconst_conflicts_ref(_1: &mut crate::ffi::MR_CSharp_ConstNonconstConflicts)
{
    let __ret = unsafe {crate::ffi::MR_C_not_MR_CSharp_ConstNonconstConflicts_ref(_1 as *mut crate::ffi::MR_CSharp_ConstNonconstConflicts as *mut crate::ffi::MR_CSharp_ConstNonconstConflicts)};
    __ret
}

/// Generated from function `MR::CSharp::operator!`.
///
/// Calls `MR_C_not_const_MR_CSharp_ConstNonconstConflicts_ref()`.
pub fn op_not_const_mr_c_sharp_const_nonconst_conflicts_ref(_1: &crate::ffi::MR_CSharp_ConstNonconstConflicts)
{
    let __ret = unsafe {crate::ffi::MR_C_not_const_MR_CSharp_ConstNonconstConflicts_ref(_1 as *const crate::ffi::MR_CSharp_ConstNonconstConflicts as *const crate::ffi::MR_CSharp_ConstNonconstConflicts)};
    __ret
}

/// Generated from function `MR::CSharp::operator&`.
///
/// Calls `MR_C_bitand_int32_t_MR_CSharp_ConstNonconstConflicts_ref()`.
pub fn op_bitand_int32_t_mr_c_sharp_const_nonconst_conflicts_ref(_1: i32, _2: &mut crate::ffi::MR_CSharp_ConstNonconstConflicts) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_bitand_int32_t_MR_CSharp_ConstNonconstConflicts_ref(_1, _2 as *mut crate::ffi::MR_CSharp_ConstNonconstConflicts as *mut crate::ffi::MR_CSharp_ConstNonconstConflicts)};
    __ret
}

/// Generated from function `MR::CSharp::operator&`.
///
/// Calls `MR_C_bitand_int32_t_const_MR_CSharp_ConstNonconstConflicts_ref()`.
pub fn op_bitand_int32_t_const_mr_c_sharp_const_nonconst_conflicts_ref(_1: i32, _2: &crate::ffi::MR_CSharp_ConstNonconstConflicts) -> i32
{
    let __ret = unsafe {crate::ffi::MR_C_bitand_int32_t_const_MR_CSharp_ConstNonconstConflicts_ref(_1, _2 as *const crate::ffi::MR_CSharp_ConstNonconstConflicts as *const crate::ffi::MR_CSharp_ConstNonconstConflicts)};
    __ret
}

/// `--infer-lifetime-iterators` should act on those:
/// Generated from function `MR::CSharp::begin`.
///
/// Calls `MR_CSharp_begin_const_MR_CSharp_LifetimesB_ref()`.
/// The reference to the parameter `b` might be preserved in the return value.
pub fn begin_const_mr_c_sharp_lifetimes_b_ref<'a>(b: &'a crate::mr::c_sharp::LifetimesB) -> Option<&'a crate::mr::c_sharp::LifetimesA>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_begin_const_MR_CSharp_LifetimesB_ref(b as *const crate::mr::c_sharp::LifetimesB as *const crate::ffi::MR_CSharp_LifetimesB)};
    unsafe {(__ret as *const crate::mr::c_sharp::LifetimesA).as_ref()}
}

/// Generated from function `MR::CSharp::end`.
///
/// Calls `MR_CSharp_end_const_MR_CSharp_LifetimesB_ref()`.
/// The reference to the parameter `b` might be preserved in the return value.
pub fn end_const_mr_c_sharp_lifetimes_b_ref<'a>(b: &'a crate::mr::c_sharp::LifetimesB) -> Option<&'a crate::mr::c_sharp::LifetimesA>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_end_const_MR_CSharp_LifetimesB_ref(b as *const crate::mr::c_sharp::LifetimesB as *const crate::ffi::MR_CSharp_LifetimesB)};
    unsafe {(__ret as *const crate::mr::c_sharp::LifetimesA).as_ref()}
}

/// Generated from function `MR::CSharp::operator*`.
///
/// Calls `MR_C_deref_const_MR_CSharp_LifetimesB_ref()`.
/// The reference to the parameter `b` might be preserved in the return value.
pub fn op_deref_const_mr_c_sharp_lifetimes_b_ref<'a>(b: &'a crate::mr::c_sharp::LifetimesB) -> &'a crate::mr::c_sharp::LifetimesA
{
    let __ret = unsafe {crate::ffi::MR_C_deref_const_MR_CSharp_LifetimesB_ref(b as *const crate::mr::c_sharp::LifetimesB as *const crate::ffi::MR_CSharp_LifetimesB)};
    unsafe {&*(__ret as *const crate::mr::c_sharp::LifetimesA)}
}

/// `--infer-lifetime-iterators` should act on those:
/// Generated from function `MR::CSharp::begin`.
///
/// Calls `MR_CSharp_begin_const_MR_CSharp_LifetimesC_ref()`.
/// The reference to the parameter `c` might be preserved in the return value.
pub fn begin_const_mr_c_sharp_lifetimes_c_ref<'a>(c: &'a crate::mr::c_sharp::LifetimesC) -> Option<&'a crate::mr::c_sharp::LifetimesA>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_begin_const_MR_CSharp_LifetimesC_ref(c as *const crate::mr::c_sharp::LifetimesC as *const crate::ffi::MR_CSharp_LifetimesC)};
    unsafe {(__ret as *const crate::mr::c_sharp::LifetimesA).as_ref()}
}

/// Generated from function `MR::CSharp::end`.
///
/// Calls `MR_CSharp_end_const_MR_CSharp_LifetimesC_ref()`.
/// The reference to the parameter `c` might be preserved in the return value.
pub fn end_const_mr_c_sharp_lifetimes_c_ref<'a>(c: &'a crate::mr::c_sharp::LifetimesC) -> Option<&'a crate::mr::c_sharp::LifetimesA>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_end_const_MR_CSharp_LifetimesC_ref(c as *const crate::mr::c_sharp::LifetimesC as *const crate::ffi::MR_CSharp_LifetimesC)};
    unsafe {(__ret as *const crate::mr::c_sharp::LifetimesA).as_ref()}
}

/// Generated from function `MR::CSharp::operator*`.
///
/// Calls `MR_C_deref_MR_CSharp_LifetimesC()`.
/// The reference to the parameter `c` might be preserved in the return value.
pub fn op_deref_mr_c_sharp_lifetimes_c<'a>(c: &'a crate::mr::c_sharp::LifetimesC) -> &'a crate::mr::c_sharp::LifetimesA
{
    let __ret = unsafe {crate::ffi::MR_C_deref_MR_CSharp_LifetimesC(c as *const crate::mr::c_sharp::LifetimesC as *const crate::ffi::MR_CSharp_LifetimesC)};
    unsafe {&*(__ret as *const crate::mr::c_sharp::LifetimesA)}
}

/// Generated from function `MR::CSharp::begin`.
///
/// Calls `MR_CSharp_begin_const_MR_CSharp_IterableD_ref()`.
/// The reference to the parameter `self` might be preserved in the return value.
pub fn begin_const_mr_c_sharp_iterable_d_ref<'a>(self_: &'a crate::mr::c_sharp::IterableD) -> Option<&'a i32>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_begin_const_MR_CSharp_IterableD_ref(self_ as *const crate::mr::c_sharp::IterableD as *const crate::ffi::MR_CSharp_IterableD)};
    unsafe {(__ret as *const i32).as_ref()}
}

/// Generated from function `MR::CSharp::end`.
///
/// Calls `MR_CSharp_end_const_MR_CSharp_IterableD_ref()`.
/// The reference to the parameter `self` might be preserved in the return value.
pub fn end_const_mr_c_sharp_iterable_d_ref<'a>(self_: &'a crate::mr::c_sharp::IterableD) -> Option<&'a i32>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_end_const_MR_CSharp_IterableD_ref(self_ as *const crate::mr::c_sharp::IterableD as *const crate::ffi::MR_CSharp_IterableD)};
    unsafe {(__ret as *const i32).as_ref()}
}

/// Generated from function `MR::CSharp::begin`.
///
/// Calls `MR_CSharp_begin_MR_CSharp_IterableE_ref()`.
/// The reference to the parameter `self` might be preserved in the return value.
pub fn begin_mr_c_sharp_iterable_e_ref<'a>(self_: &'a mut crate::mr::c_sharp::IterableE) -> Option<&'a mut i32>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_begin_MR_CSharp_IterableE_ref(self_ as *mut crate::mr::c_sharp::IterableE as *mut crate::ffi::MR_CSharp_IterableE)};
    unsafe {(__ret as *mut i32).as_mut()}
}

/// Generated from function `MR::CSharp::end`.
///
/// Calls `MR_CSharp_end_MR_CSharp_IterableE_ref()`.
/// The reference to the parameter `self` might be preserved in the return value.
pub fn end_mr_c_sharp_iterable_e_ref<'a>(self_: &'a mut crate::mr::c_sharp::IterableE) -> Option<&'a mut i32>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_end_MR_CSharp_IterableE_ref(self_ as *mut crate::mr::c_sharp::IterableE as *mut crate::ffi::MR_CSharp_IterableE)};
    unsafe {(__ret as *mut i32).as_mut()}
}

/// Generated from function `MR::CSharp::begin`.
///
/// Calls `MR_CSharp_begin_const_MR_CSharp_IterableF_ref()`.
/// The reference to the parameter `self` might be preserved in the return value.
pub fn begin_const_mr_c_sharp_iterable_f_ref<'a>(self_: &'a crate::mr::c_sharp::IterableF) -> Option<&'a i32>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_begin_const_MR_CSharp_IterableF_ref(self_ as *const crate::mr::c_sharp::IterableF as *const crate::ffi::MR_CSharp_IterableF)};
    unsafe {(__ret as *const i32).as_ref()}
}

/// Generated from function `MR::CSharp::end`.
///
/// Calls `MR_CSharp_end_const_MR_CSharp_IterableF_ref()`.
/// The reference to the parameter `self` might be preserved in the return value.
pub fn end_const_mr_c_sharp_iterable_f_ref<'a>(self_: &'a crate::mr::c_sharp::IterableF) -> Option<&'a i32>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_end_const_MR_CSharp_IterableF_ref(self_ as *const crate::mr::c_sharp::IterableF as *const crate::ffi::MR_CSharp_IterableF)};
    unsafe {(__ret as *const i32).as_ref()}
}

/// Generated from function `MR::CSharp::begin`.
///
/// Calls `MR_CSharp_begin_MR_CSharp_IterableF_ref()`.
/// The reference to the parameter `self` might be preserved in the return value.
pub fn begin_mr_c_sharp_iterable_f_ref<'a>(self_: &'a mut crate::mr::c_sharp::IterableF) -> Option<&'a mut i32>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_begin_MR_CSharp_IterableF_ref(self_ as *mut crate::mr::c_sharp::IterableF as *mut crate::ffi::MR_CSharp_IterableF)};
    unsafe {(__ret as *mut i32).as_mut()}
}

/// Generated from function `MR::CSharp::end`.
///
/// Calls `MR_CSharp_end_MR_CSharp_IterableF_ref()`.
/// The reference to the parameter `self` might be preserved in the return value.
pub fn end_mr_c_sharp_iterable_f_ref<'a>(self_: &'a mut crate::mr::c_sharp::IterableF) -> Option<&'a mut i32>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_end_MR_CSharp_IterableF_ref(self_ as *mut crate::mr::c_sharp::IterableF as *mut crate::ffi::MR_CSharp_IterableF)};
    unsafe {(__ret as *mut i32).as_mut()}
}

/// Generated from function `MR::CSharp::begin<int32_t>`.
///
/// Calls `MR_CSharp_begin_int32_t()`.
/// The reference to the parameter `self` might be preserved in the return value.
pub fn begin_int32_t<'a>(self_: &'a crate::mr::c_sharp::IterableL_int32_t) -> Option<&'a i32>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_begin_int32_t(self_ as *const crate::mr::c_sharp::IterableL_int32_t as *const crate::ffi::MR_CSharp_IterableL_int32_t)};
    unsafe {(__ret as *const i32).as_ref()}
}

/// Generated from function `MR::CSharp::end<int32_t>`.
///
/// Calls `MR_CSharp_end_int32_t()`.
/// The reference to the parameter `self` might be preserved in the return value.
pub fn end_int32_t<'a>(self_: &'a crate::mr::c_sharp::IterableL_int32_t) -> Option<&'a i32>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_end_int32_t(self_ as *const crate::mr::c_sharp::IterableL_int32_t as *const crate::ffi::MR_CSharp_IterableL_int32_t)};
    unsafe {(__ret as *const i32).as_ref()}
}

/// Vectors of pointers to a class.
/// Currently `IEnumerable` is disabled for those, it needs to be fixed.
/// Generated from function `MR::CSharp::test_vec_of_mut_ptr_to_class`.
///
/// Calls `MR_CSharp_test_vec_of_mut_ptr_to_class()`.
pub fn test_vec_of_mut_ptr_to_class() -> crate::Owned<crate::mr::cs::std_vector_MR_CSharp_A_ptr>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_vec_of_mut_ptr_to_class()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_CSharp_A_ptr)}
}

/// Generated from function `MR::CSharp::test_vec_of_const_ptr_to_class`.
///
/// Calls `MR_CSharp_test_vec_of_const_ptr_to_class()`.
pub fn test_vec_of_const_ptr_to_class() -> crate::Owned<crate::mr::cs::std_vector_const_MR_CSharp_A_ptr>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_vec_of_const_ptr_to_class()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_const_MR_CSharp_A_ptr)}
}

/// Test decomposition for certain whitelisted standard tuple-like types: (tuples and pairs)
/// Generated from function `MR::CSharp::get_tuple0`.
///
/// Calls `MR_CSharp_get_tuple0()`.
pub fn get_tuple0() -> crate::Owned<crate::mr::cs::std_tuple>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_get_tuple0()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple)}
}

/// Generated from function `MR::CSharp::get_tuple1`.
///
/// Calls `MR_CSharp_get_tuple1()`.
pub fn get_tuple1() -> crate::Owned<crate::mr::cs::std_tuple_int32_t>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_get_tuple1()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_int32_t)}
}

/// Generated from function `MR::CSharp::get_tuple2`.
///
/// Calls `MR_CSharp_get_tuple2()`.
pub fn get_tuple2() -> crate::Owned<crate::mr::cs::std_tuple_int32_t_std_string>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_get_tuple2()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_int32_t_std_string)}
}

/// Generated from function `MR::CSharp::get_pair2`.
///
/// Calls `MR_CSharp_get_pair2()`.
pub fn get_pair2() -> crate::Owned<crate::mr::cs::std_pair_int32_t_std_string>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_get_pair2()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_pair_int32_t_std_string)}
}

/// Generated from function `MR::CSharp::get_tuple_const`.
///
/// Calls `MR_CSharp_get_tuple_const()`.
pub fn get_tuple_const() -> crate::Owned<crate::mr::cs::std_tuple_const_int32_t_std_string>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_get_tuple_const()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_const_int32_t_std_string)}
}

/// Generated from function `MR::CSharp::get_tuple_refs`.
///
/// Calls `MR_CSharp_get_tuple_refs()`.
pub fn get_tuple_refs() -> crate::Owned<crate::mr::cs::std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_get_tuple_refs()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref)}
}

/// Generated from function `MR::CSharp::get_tuple_crefs`.
///
/// Calls `MR_CSharp_get_tuple_crefs()`.
pub fn get_tuple_crefs() -> crate::Owned<crate::mr::cs::std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_get_tuple_crefs()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref)}
}

/// Generated from function `MR::CSharp::get_tuple_exposed_value`.
///
/// Calls `MR_CSharp_get_tuple_exposed_value()`.
pub fn get_tuple_exposed_value() -> crate::Owned<crate::mr::cs::std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_get_tuple_exposed_value()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout)}
}

/// Generated from function `MR::CSharp::get_tuple_exposed_lvalue_ref`.
///
/// Calls `MR_CSharp_get_tuple_exposed_lvalue_ref()`.
pub fn get_tuple_exposed_lvalue_ref() -> crate::Owned<crate::mr::cs::std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_get_tuple_exposed_lvalue_ref()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref)}
}

/// Generated from function `MR::CSharp::get_tuple_exposed_rvalue_ref`.
///
/// Calls `MR_CSharp_get_tuple_exposed_rvalue_ref()`.
pub fn get_tuple_exposed_rvalue_ref() -> crate::Owned<crate::mr::cs::std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_get_tuple_exposed_rvalue_ref()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref)}
}

/// Generated from function `MR::CSharp::test_expected_int`.
///
/// Calls `MR_CSharp_test_expected_int()`.
pub fn test_expected_int(a: &crate::mr::cs::expected_int32_t_float, b: Option<&crate::mr::cs::expected_int32_t_float>) -> crate::Owned<crate::mr::cs::expected_int32_t_float>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_int(a as *const crate::mr::cs::expected_int32_t_float as *const crate::ffi::MR_C_expected_int32_t_float, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_int32_t_float as *const crate::ffi::MR_C_expected_int32_t_float))};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::expected_int32_t_float)}
}

/// Generated from function `MR::CSharp::test_expected_int_ref`.
///
/// Calls `MR_CSharp_test_expected_int_ref()`.
pub fn test_expected_int_ref(a: &mut crate::mr::cs::expected_int32_t_float, b: Option<&mut crate::mr::cs::expected_int32_t_float>) -> *mut crate::ffi::MR_C_expected_int32_t_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_int_ref(a as *mut crate::mr::cs::expected_int32_t_float as *mut crate::ffi::MR_C_expected_int32_t_float, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_int32_t_float as *mut crate::ffi::MR_C_expected_int32_t_float))};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_int_cref`.
///
/// Calls `MR_CSharp_test_expected_int_cref()`.
pub fn test_expected_int_cref(a: &crate::mr::cs::expected_int32_t_float, b: Option<&crate::mr::cs::expected_int32_t_float>) -> *const crate::ffi::MR_C_expected_int32_t_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_int_cref(a as *const crate::mr::cs::expected_int32_t_float as *const crate::ffi::MR_C_expected_int32_t_float, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_int32_t_float as *const crate::ffi::MR_C_expected_int32_t_float))};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_int_ptr`.
///
/// Calls `MR_CSharp_test_expected_int_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_expected_int_ptr(a: Option<&mut crate::mr::cs::expected_int32_t_float>, b: Option<&mut crate::mr::cs::expected_int32_t_float>, c: *const *mut crate::ffi::MR_C_expected_int32_t_float) -> *mut crate::ffi::MR_C_expected_int32_t_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_int_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_int32_t_float as *mut crate::ffi::MR_C_expected_int32_t_float), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_int32_t_float as *mut crate::ffi::MR_C_expected_int32_t_float), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_int_cptr`.
///
/// Calls `MR_CSharp_test_expected_int_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_expected_int_cptr(a: Option<&crate::mr::cs::expected_int32_t_float>, b: Option<&crate::mr::cs::expected_int32_t_float>, c: *const *const crate::ffi::MR_C_expected_int32_t_float) -> *const crate::ffi::MR_C_expected_int32_t_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_int_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_int32_t_float as *const crate::ffi::MR_C_expected_int32_t_float), b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_int32_t_float as *const crate::ffi::MR_C_expected_int32_t_float), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_void`.
///
/// Calls `MR_CSharp_test_expected_void()`.
pub fn test_expected_void(a: &crate::mr::cs::expected_void_float, b: Option<&crate::mr::cs::expected_void_float>) -> crate::Owned<crate::mr::cs::expected_void_float>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_void(a as *const crate::mr::cs::expected_void_float as *const crate::ffi::MR_C_expected_void_float, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_void_float as *const crate::ffi::MR_C_expected_void_float))};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::expected_void_float)}
}

/// Generated from function `MR::CSharp::test_expected_void_ref`.
///
/// Calls `MR_CSharp_test_expected_void_ref()`.
pub fn test_expected_void_ref(a: &mut crate::mr::cs::expected_void_float, b: Option<&mut crate::mr::cs::expected_void_float>) -> *mut crate::ffi::MR_C_expected_void_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_void_ref(a as *mut crate::mr::cs::expected_void_float as *mut crate::ffi::MR_C_expected_void_float, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_void_float as *mut crate::ffi::MR_C_expected_void_float))};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_void_cref`.
///
/// Calls `MR_CSharp_test_expected_void_cref()`.
pub fn test_expected_void_cref(a: &crate::mr::cs::expected_void_float, b: Option<&crate::mr::cs::expected_void_float>) -> *const crate::ffi::MR_C_expected_void_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_void_cref(a as *const crate::mr::cs::expected_void_float as *const crate::ffi::MR_C_expected_void_float, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_void_float as *const crate::ffi::MR_C_expected_void_float))};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_void_ptr`.
///
/// Calls `MR_CSharp_test_expected_void_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_expected_void_ptr(a: Option<&mut crate::mr::cs::expected_void_float>, b: Option<&mut crate::mr::cs::expected_void_float>, c: *const *mut crate::ffi::MR_C_expected_void_float) -> *mut crate::ffi::MR_C_expected_void_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_void_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_void_float as *mut crate::ffi::MR_C_expected_void_float), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_void_float as *mut crate::ffi::MR_C_expected_void_float), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_void_cptr`.
///
/// Calls `MR_CSharp_test_expected_void_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_expected_void_cptr(a: Option<&crate::mr::cs::expected_void_float>, b: Option<&crate::mr::cs::expected_void_float>, c: *const *const crate::ffi::MR_C_expected_void_float) -> *const crate::ffi::MR_C_expected_void_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_void_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_void_float as *const crate::ffi::MR_C_expected_void_float), b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_void_float as *const crate::ffi::MR_C_expected_void_float), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_enum`.
///
/// Calls `MR_CSharp_test_expected_enum()`.
pub fn test_expected_enum(a: &crate::mr::cs::expected_MR_CSharp_E1_float, b: Option<&crate::mr::cs::expected_MR_CSharp_E1_float>) -> crate::Owned<crate::mr::cs::expected_MR_CSharp_E1_float>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_enum(a as *const crate::mr::cs::expected_MR_CSharp_E1_float as *const crate::ffi::MR_C_expected_MR_CSharp_E1_float, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_E1_float as *const crate::ffi::MR_C_expected_MR_CSharp_E1_float))};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::expected_MR_CSharp_E1_float)}
}

/// Generated from function `MR::CSharp::test_expected_enum_ref`.
///
/// Calls `MR_CSharp_test_expected_enum_ref()`.
pub fn test_expected_enum_ref(a: &mut crate::mr::cs::expected_MR_CSharp_E1_float, b: Option<&mut crate::mr::cs::expected_MR_CSharp_E1_float>) -> *mut crate::ffi::MR_C_expected_MR_CSharp_E1_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_enum_ref(a as *mut crate::mr::cs::expected_MR_CSharp_E1_float as *mut crate::ffi::MR_C_expected_MR_CSharp_E1_float, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_MR_CSharp_E1_float as *mut crate::ffi::MR_C_expected_MR_CSharp_E1_float))};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_enum_cref`.
///
/// Calls `MR_CSharp_test_expected_enum_cref()`.
pub fn test_expected_enum_cref(a: &crate::mr::cs::expected_MR_CSharp_E1_float, b: Option<&crate::mr::cs::expected_MR_CSharp_E1_float>) -> *const crate::ffi::MR_C_expected_MR_CSharp_E1_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_enum_cref(a as *const crate::mr::cs::expected_MR_CSharp_E1_float as *const crate::ffi::MR_C_expected_MR_CSharp_E1_float, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_E1_float as *const crate::ffi::MR_C_expected_MR_CSharp_E1_float))};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_enum_ptr`.
///
/// Calls `MR_CSharp_test_expected_enum_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_expected_enum_ptr(a: Option<&mut crate::mr::cs::expected_MR_CSharp_E1_float>, b: Option<&mut crate::mr::cs::expected_MR_CSharp_E1_float>, c: *const *mut crate::ffi::MR_C_expected_MR_CSharp_E1_float) -> *mut crate::ffi::MR_C_expected_MR_CSharp_E1_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_enum_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_MR_CSharp_E1_float as *mut crate::ffi::MR_C_expected_MR_CSharp_E1_float), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_MR_CSharp_E1_float as *mut crate::ffi::MR_C_expected_MR_CSharp_E1_float), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_enum_cptr`.
///
/// Calls `MR_CSharp_test_expected_enum_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_expected_enum_cptr(a: Option<&crate::mr::cs::expected_MR_CSharp_E1_float>, b: Option<&crate::mr::cs::expected_MR_CSharp_E1_float>, c: *const *const crate::ffi::MR_C_expected_MR_CSharp_E1_float) -> *const crate::ffi::MR_C_expected_MR_CSharp_E1_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_enum_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_E1_float as *const crate::ffi::MR_C_expected_MR_CSharp_E1_float), b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_E1_float as *const crate::ffi::MR_C_expected_MR_CSharp_E1_float), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_triv`.
///
/// Calls `MR_CSharp_test_expected_triv()`.
pub fn test_expected_triv(a: &crate::mr::cs::expected_MR_CSharp_Trivial_float, b: Option<&crate::mr::cs::expected_MR_CSharp_Trivial_float>) -> crate::Owned<crate::mr::cs::expected_MR_CSharp_Trivial_float>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_triv(a as *const crate::mr::cs::expected_MR_CSharp_Trivial_float as *const crate::ffi::MR_C_expected_MR_CSharp_Trivial_float, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_Trivial_float as *const crate::ffi::MR_C_expected_MR_CSharp_Trivial_float))};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::expected_MR_CSharp_Trivial_float)}
}

/// Generated from function `MR::CSharp::test_expected_triv_ref`.
///
/// Calls `MR_CSharp_test_expected_triv_ref()`.
pub fn test_expected_triv_ref(a: &mut crate::mr::cs::expected_MR_CSharp_Trivial_float, b: Option<&mut crate::mr::cs::expected_MR_CSharp_Trivial_float>) -> *mut crate::ffi::MR_C_expected_MR_CSharp_Trivial_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_triv_ref(a as *mut crate::mr::cs::expected_MR_CSharp_Trivial_float as *mut crate::ffi::MR_C_expected_MR_CSharp_Trivial_float, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_MR_CSharp_Trivial_float as *mut crate::ffi::MR_C_expected_MR_CSharp_Trivial_float))};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_triv_cref`.
///
/// Calls `MR_CSharp_test_expected_triv_cref()`.
pub fn test_expected_triv_cref(a: &crate::mr::cs::expected_MR_CSharp_Trivial_float, b: Option<&crate::mr::cs::expected_MR_CSharp_Trivial_float>) -> *const crate::ffi::MR_C_expected_MR_CSharp_Trivial_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_triv_cref(a as *const crate::mr::cs::expected_MR_CSharp_Trivial_float as *const crate::ffi::MR_C_expected_MR_CSharp_Trivial_float, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_Trivial_float as *const crate::ffi::MR_C_expected_MR_CSharp_Trivial_float))};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_triv_ptr`.
///
/// Calls `MR_CSharp_test_expected_triv_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_expected_triv_ptr(a: Option<&mut crate::mr::cs::expected_MR_CSharp_Trivial_float>, b: Option<&mut crate::mr::cs::expected_MR_CSharp_Trivial_float>, c: *const *mut crate::ffi::MR_C_expected_MR_CSharp_Trivial_float) -> *mut crate::ffi::MR_C_expected_MR_CSharp_Trivial_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_triv_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_MR_CSharp_Trivial_float as *mut crate::ffi::MR_C_expected_MR_CSharp_Trivial_float), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_MR_CSharp_Trivial_float as *mut crate::ffi::MR_C_expected_MR_CSharp_Trivial_float), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_triv_cptr`.
///
/// Calls `MR_CSharp_test_expected_triv_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_expected_triv_cptr(a: Option<&crate::mr::cs::expected_MR_CSharp_Trivial_float>, b: Option<&crate::mr::cs::expected_MR_CSharp_Trivial_float>, c: *const *const crate::ffi::MR_C_expected_MR_CSharp_Trivial_float) -> *const crate::ffi::MR_C_expected_MR_CSharp_Trivial_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_triv_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_Trivial_float as *const crate::ffi::MR_C_expected_MR_CSharp_Trivial_float), b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_Trivial_float as *const crate::ffi::MR_C_expected_MR_CSharp_Trivial_float), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_nontriv`.
///
/// Calls `MR_CSharp_test_expected_nontriv()`.
pub fn test_expected_nontriv(a: &crate::mr::cs::expected_MR_CSharp_NonTrivial_float, b: Option<&crate::mr::cs::expected_MR_CSharp_NonTrivial_float>) -> crate::Owned<crate::mr::cs::expected_MR_CSharp_NonTrivial_float>
{
    let (__pb_b, __ptr_b) = match b {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::cs::expected_MR_CSharp_NonTrivial_float as *mut crate::ffi::MR_C_expected_MR_CSharp_NonTrivial_float), None => (crate::ffi::MR_C_PassBy_DefaultArgument, core::ptr::null_mut())};
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_nontriv(crate::ffi::MR_C_PassBy_Copy, a as *const crate::mr::cs::expected_MR_CSharp_NonTrivial_float as *mut crate::ffi::MR_C_expected_MR_CSharp_NonTrivial_float, __pb_b, __ptr_b)};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::expected_MR_CSharp_NonTrivial_float)}
}

/// Generated from function `MR::CSharp::test_expected_nontriv_ref`.
///
/// Calls `MR_CSharp_test_expected_nontriv_ref()`.
pub fn test_expected_nontriv_ref(a: &mut crate::mr::cs::expected_MR_CSharp_NonTrivial_float, b: Option<&mut crate::mr::cs::expected_MR_CSharp_NonTrivial_float>) -> *mut crate::ffi::MR_C_expected_MR_CSharp_NonTrivial_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_nontriv_ref(a as *mut crate::mr::cs::expected_MR_CSharp_NonTrivial_float as *mut crate::ffi::MR_C_expected_MR_CSharp_NonTrivial_float, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_MR_CSharp_NonTrivial_float as *mut crate::ffi::MR_C_expected_MR_CSharp_NonTrivial_float))};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_nontriv_cref`.
///
/// Calls `MR_CSharp_test_expected_nontriv_cref()`.
pub fn test_expected_nontriv_cref(a: &crate::mr::cs::expected_MR_CSharp_NonTrivial_float, b: Option<&crate::mr::cs::expected_MR_CSharp_NonTrivial_float>) -> *const crate::ffi::MR_C_expected_MR_CSharp_NonTrivial_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_nontriv_cref(a as *const crate::mr::cs::expected_MR_CSharp_NonTrivial_float as *const crate::ffi::MR_C_expected_MR_CSharp_NonTrivial_float, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_NonTrivial_float as *const crate::ffi::MR_C_expected_MR_CSharp_NonTrivial_float))};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_nontriv_ptr`.
///
/// Calls `MR_CSharp_test_expected_nontriv_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_expected_nontriv_ptr(a: Option<&mut crate::mr::cs::expected_MR_CSharp_NonTrivial_float>, b: Option<&mut crate::mr::cs::expected_MR_CSharp_NonTrivial_float>, c: *const *mut crate::ffi::MR_C_expected_MR_CSharp_NonTrivial_float) -> *mut crate::ffi::MR_C_expected_MR_CSharp_NonTrivial_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_nontriv_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_MR_CSharp_NonTrivial_float as *mut crate::ffi::MR_C_expected_MR_CSharp_NonTrivial_float), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_MR_CSharp_NonTrivial_float as *mut crate::ffi::MR_C_expected_MR_CSharp_NonTrivial_float), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_nontriv_cptr`.
///
/// Calls `MR_CSharp_test_expected_nontriv_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_expected_nontriv_cptr(a: Option<&crate::mr::cs::expected_MR_CSharp_NonTrivial_float>, b: Option<&crate::mr::cs::expected_MR_CSharp_NonTrivial_float>, c: *const *const crate::ffi::MR_C_expected_MR_CSharp_NonTrivial_float) -> *const crate::ffi::MR_C_expected_MR_CSharp_NonTrivial_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_nontriv_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_NonTrivial_float as *const crate::ffi::MR_C_expected_MR_CSharp_NonTrivial_float), b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_NonTrivial_float as *const crate::ffi::MR_C_expected_MR_CSharp_NonTrivial_float), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_shared`.
///
/// Calls `MR_CSharp_test_expected_shared()`.
pub fn test_expected_shared(a: &crate::mr::cs::expected_MR_CSharp_SA_float, b: Option<&crate::mr::cs::expected_MR_CSharp_SA_float>) -> crate::Owned<crate::mr::cs::expected_MR_CSharp_SA_float>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_shared(a as *const crate::mr::cs::expected_MR_CSharp_SA_float as *const crate::ffi::MR_C_expected_MR_CSharp_SA_float, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_SA_float as *const crate::ffi::MR_C_expected_MR_CSharp_SA_float))};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::expected_MR_CSharp_SA_float)}
}

/// Generated from function `MR::CSharp::test_expected_shared_ref`.
///
/// Calls `MR_CSharp_test_expected_shared_ref()`.
pub fn test_expected_shared_ref(a: &mut crate::mr::cs::expected_MR_CSharp_SA_float, b: Option<&mut crate::mr::cs::expected_MR_CSharp_SA_float>) -> *mut crate::ffi::MR_C_expected_MR_CSharp_SA_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_shared_ref(a as *mut crate::mr::cs::expected_MR_CSharp_SA_float as *mut crate::ffi::MR_C_expected_MR_CSharp_SA_float, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_MR_CSharp_SA_float as *mut crate::ffi::MR_C_expected_MR_CSharp_SA_float))};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_shared_cref`.
///
/// Calls `MR_CSharp_test_expected_shared_cref()`.
pub fn test_expected_shared_cref(a: &crate::mr::cs::expected_MR_CSharp_SA_float, b: Option<&crate::mr::cs::expected_MR_CSharp_SA_float>) -> *const crate::ffi::MR_C_expected_MR_CSharp_SA_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_shared_cref(a as *const crate::mr::cs::expected_MR_CSharp_SA_float as *const crate::ffi::MR_C_expected_MR_CSharp_SA_float, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_SA_float as *const crate::ffi::MR_C_expected_MR_CSharp_SA_float))};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_shared_ptr`.
///
/// Calls `MR_CSharp_test_expected_shared_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_expected_shared_ptr(a: Option<&mut crate::mr::cs::expected_MR_CSharp_SA_float>, b: Option<&mut crate::mr::cs::expected_MR_CSharp_SA_float>, c: *const *mut crate::ffi::MR_C_expected_MR_CSharp_SA_float) -> *mut crate::ffi::MR_C_expected_MR_CSharp_SA_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_shared_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_MR_CSharp_SA_float as *mut crate::ffi::MR_C_expected_MR_CSharp_SA_float), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_MR_CSharp_SA_float as *mut crate::ffi::MR_C_expected_MR_CSharp_SA_float), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_shared_cptr`.
///
/// Calls `MR_CSharp_test_expected_shared_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_expected_shared_cptr(a: Option<&crate::mr::cs::expected_MR_CSharp_SA_float>, b: Option<&crate::mr::cs::expected_MR_CSharp_SA_float>, c: *const *const crate::ffi::MR_C_expected_MR_CSharp_SA_float) -> *const crate::ffi::MR_C_expected_MR_CSharp_SA_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_shared_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_SA_float as *const crate::ffi::MR_C_expected_MR_CSharp_SA_float), b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_SA_float as *const crate::ffi::MR_C_expected_MR_CSharp_SA_float), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_exposed`.
///
/// Calls `MR_CSharp_test_expected_exposed()`.
pub fn test_expected_exposed(a: &crate::mr::cs::expected_MR_CSharp_ExposedLayout_float, b: Option<&crate::mr::cs::expected_MR_CSharp_ExposedLayout_float>) -> crate::Owned<crate::mr::cs::expected_MR_CSharp_ExposedLayout_float>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_exposed(a as *const crate::mr::cs::expected_MR_CSharp_ExposedLayout_float as *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayout_float, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_ExposedLayout_float as *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayout_float))};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::expected_MR_CSharp_ExposedLayout_float)}
}

/// Generated from function `MR::CSharp::test_expected_exposed_ref`.
///
/// Calls `MR_CSharp_test_expected_exposed_ref()`.
pub fn test_expected_exposed_ref(a: &mut crate::mr::cs::expected_MR_CSharp_ExposedLayout_float, b: Option<&mut crate::mr::cs::expected_MR_CSharp_ExposedLayout_float>) -> *mut crate::ffi::MR_C_expected_MR_CSharp_ExposedLayout_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_exposed_ref(a as *mut crate::mr::cs::expected_MR_CSharp_ExposedLayout_float as *mut crate::ffi::MR_C_expected_MR_CSharp_ExposedLayout_float, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_MR_CSharp_ExposedLayout_float as *mut crate::ffi::MR_C_expected_MR_CSharp_ExposedLayout_float))};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_exposed_cref`.
///
/// Calls `MR_CSharp_test_expected_exposed_cref()`.
pub fn test_expected_exposed_cref(a: &crate::mr::cs::expected_MR_CSharp_ExposedLayout_float, b: Option<&crate::mr::cs::expected_MR_CSharp_ExposedLayout_float>) -> *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayout_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_exposed_cref(a as *const crate::mr::cs::expected_MR_CSharp_ExposedLayout_float as *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayout_float, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_ExposedLayout_float as *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayout_float))};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_exposed_ptr`.
///
/// Calls `MR_CSharp_test_expected_exposed_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_expected_exposed_ptr(a: Option<&mut crate::mr::cs::expected_MR_CSharp_ExposedLayout_float>, b: Option<&mut crate::mr::cs::expected_MR_CSharp_ExposedLayout_float>, c: *const *mut crate::ffi::MR_C_expected_MR_CSharp_ExposedLayout_float) -> *mut crate::ffi::MR_C_expected_MR_CSharp_ExposedLayout_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_exposed_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_MR_CSharp_ExposedLayout_float as *mut crate::ffi::MR_C_expected_MR_CSharp_ExposedLayout_float), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_MR_CSharp_ExposedLayout_float as *mut crate::ffi::MR_C_expected_MR_CSharp_ExposedLayout_float), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_exposed_cptr`.
///
/// Calls `MR_CSharp_test_expected_exposed_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_expected_exposed_cptr(a: Option<&crate::mr::cs::expected_MR_CSharp_ExposedLayout_float>, b: Option<&crate::mr::cs::expected_MR_CSharp_ExposedLayout_float>, c: *const *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayout_float) -> *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayout_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_exposed_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_ExposedLayout_float as *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayout_float), b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_ExposedLayout_float as *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayout_float), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_exposed_shared`.
///
/// Calls `MR_CSharp_test_expected_exposed_shared()`.
pub fn test_expected_exposed_shared(a: &crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float, b: Option<&crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float>) -> crate::Owned<crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float>
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_exposed_shared(a as *const crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float as *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float as *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float))};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float)}
}

/// Generated from function `MR::CSharp::test_expected_exposed_shared_ref`.
///
/// Calls `MR_CSharp_test_expected_exposed_shared_ref()`.
pub fn test_expected_exposed_shared_ref(a: &mut crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float, b: Option<&mut crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float>) -> *mut crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_exposed_shared_ref(a as *mut crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float as *mut crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float, b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float as *mut crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float))};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_exposed_shared_cref`.
///
/// Calls `MR_CSharp_test_expected_exposed_shared_cref()`.
pub fn test_expected_exposed_shared_cref(a: &crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float, b: Option<&crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float>) -> *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_exposed_shared_cref(a as *const crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float as *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float, b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float as *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float))};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_exposed_shared_ptr`.
///
/// Calls `MR_CSharp_test_expected_exposed_shared_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_expected_exposed_shared_ptr(a: Option<&mut crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float>, b: Option<&mut crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float>, c: *const *mut crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float) -> *mut crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_exposed_shared_ptr(a.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float as *mut crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float), b.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float as *mut crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float), c)};
    __ret
}

/// Generated from function `MR::CSharp::test_expected_exposed_shared_cptr`.
///
/// Calls `MR_CSharp_test_expected_exposed_shared_cptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn test_expected_exposed_shared_cptr(a: Option<&crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float>, b: Option<&crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float>, c: *const *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float) -> *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float
{
    let __ret = unsafe {crate::ffi::MR_CSharp_test_expected_exposed_shared_cptr(a.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float as *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float), b.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float as *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float), c)};
    __ret
}

