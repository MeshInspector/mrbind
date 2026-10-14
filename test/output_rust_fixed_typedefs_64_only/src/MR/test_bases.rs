/// Generated from class `MR::Bases::A`.
/// Derived classes:
///   Virtual:
///     `MR::Bases::I`
///   Direct: (non-virtual)
///     `MR::Bases::B`
///     `MR::Bases::C`
///     `MR::Bases::H`
///   Indirect: (non-virtual)
///     `MR::Bases::B2`
///   Ambiguous:
///     `MR::Bases::D`
///     `MR::Bases::D2`
///     `MR::Bases::D3`
///
/// Generated from class `MR::Bases::A`. Heap-allocated instances are held in `Owned<A>`.
#[repr(transparent)]
pub struct A(crate::ffi::MR_Bases_A);

unsafe impl crate::CppClass for A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_Bases_A_Destroy(ptr as *const crate::ffi::MR_Bases_A)}
}

impl A
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_Bases_A_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::bases::A>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_A_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::A)}
    }

    /// Generated from constructor `MR::Bases::A::A`.
    ///
    /// Calls `MR_Bases_A_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::bases::A) -> crate::Owned<crate::mr::bases::A>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_A_ConstructFromAnother(_other as *const crate::mr::bases::A as *const crate::ffi::MR_Bases_A)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::A)}
    }

    /// Generated from method `MR::Bases::A::operator=`.
    ///
    /// Calls `MR_Bases_A_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::bases::A) -> &mut crate::mr::bases::A
    {
        let __ret = unsafe {crate::ffi::MR_Bases_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_Bases_A, _other as *const crate::mr::bases::A as *const crate::ffi::MR_Bases_A)};
        unsafe {&mut *(__ret as *mut crate::mr::bases::A)}
    }

}

unsafe impl crate::CppCopy for A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::Bases::B`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::Bases::A`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::Bases::B2`
///     `MR::Bases::D`
///     `MR::Bases::D2`
///     `MR::Bases::D3`
///
/// Generated from class `MR::Bases::B`. Heap-allocated instances are held in `Owned<B>`.
#[repr(transparent)]
pub struct B(crate::ffi::MR_Bases_B);

unsafe impl crate::CppClass for B
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_Bases_B_Destroy(ptr as *const crate::ffi::MR_Bases_B)}
}

impl B
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_Bases_B_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::bases::B>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_B_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::B)}
    }

    /// Generated from constructor `MR::Bases::B::B`.
    ///
    /// Calls `MR_Bases_B_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::bases::B) -> crate::Owned<crate::mr::bases::B>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_B_ConstructFromAnother(_other as *const crate::mr::bases::B as *const crate::ffi::MR_Bases_B)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::B)}
    }

    /// Generated from method `MR::Bases::B::operator=`.
    ///
    /// Calls `MR_Bases_B_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::bases::B) -> &mut crate::mr::bases::B
    {
        let __ret = unsafe {crate::ffi::MR_Bases_B_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_Bases_B, _other as *const crate::mr::bases::B as *const crate::ffi::MR_Bases_B)};
        unsafe {&mut *(__ret as *mut crate::mr::bases::B)}
    }

    /// Upcasts to the base class `MR::Bases::A`.
    ///
    /// Calls `MR_Bases_B_UpcastTo_MR_Bases_A()`.
    pub fn upcast_to_a(&self) -> &crate::mr::bases::A
    {
        unsafe {&*(crate::ffi::MR_Bases_B_UpcastTo_MR_Bases_A(self as *const Self as *const crate::ffi::MR_Bases_B) as *const crate::mr::bases::A)}
    }

    /// Upcasts to the base class `MR::Bases::A`.
    ///
    /// Calls `MR_Bases_B_MutableUpcastTo_MR_Bases_A()`.
    pub fn upcast_to_a_mut(&mut self) -> &mut crate::mr::bases::A
    {
        unsafe {&mut *(crate::ffi::MR_Bases_B_MutableUpcastTo_MR_Bases_A(self as *mut Self as *mut crate::ffi::MR_Bases_B) as *mut crate::mr::bases::A)}
    }

    /// Static downcast from the base class `MR::Bases::A`.
    ///
    /// Calls `MR_Bases_B_StaticDowncastFrom_MR_Bases_A()`. Undefined behavior if the object isn't actually a `B`.
    pub unsafe fn static_downcast_from_a(object: &crate::mr::bases::A) -> &Self
    {
        &*(crate::ffi::MR_Bases_B_StaticDowncastFrom_MR_Bases_A(object as *const crate::mr::bases::A as *const crate::ffi::MR_Bases_A) as *const Self)
    }

    /// Static downcast from the base class `MR::Bases::A`.
    ///
    /// Calls `MR_Bases_B_MutableStaticDowncastFrom_MR_Bases_A()`. Undefined behavior if the object isn't actually a `B`.
    pub unsafe fn static_downcast_from_a_mut(object: &mut crate::mr::bases::A) -> &mut Self
    {
        &mut *(crate::ffi::MR_Bases_B_MutableStaticDowncastFrom_MR_Bases_A(object as *mut crate::mr::bases::A as *mut crate::ffi::MR_Bases_A) as *mut Self)
    }

}

impl AsRef<crate::mr::bases::A> for B
{
    fn as_ref(&self) -> &crate::mr::bases::A {self.upcast_to_a()}
}

impl AsMut<crate::mr::bases::A> for B
{
    fn as_mut(&mut self) -> &mut crate::mr::bases::A {self.upcast_to_a_mut()}
}

unsafe impl crate::CppCopy for B
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::Bases::B2`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::Bases::B`
///   Indirect: (non-virtual)
///     `MR::Bases::A`
///
/// Generated from class `MR::Bases::B2`. Heap-allocated instances are held in `Owned<B2>`.
#[repr(transparent)]
pub struct B2(crate::ffi::MR_Bases_B2);

unsafe impl crate::CppClass for B2
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_Bases_B2_Destroy(ptr as *const crate::ffi::MR_Bases_B2)}
}

impl B2
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_Bases_B2_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::bases::B2>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_B2_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::B2)}
    }

    /// Generated from constructor `MR::Bases::B2::B2`.
    ///
    /// Calls `MR_Bases_B2_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::bases::B2) -> crate::Owned<crate::mr::bases::B2>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_B2_ConstructFromAnother(_other as *const crate::mr::bases::B2 as *const crate::ffi::MR_Bases_B2)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::B2)}
    }

    /// Generated from method `MR::Bases::B2::operator=`.
    ///
    /// Calls `MR_Bases_B2_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::bases::B2) -> &mut crate::mr::bases::B2
    {
        let __ret = unsafe {crate::ffi::MR_Bases_B2_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_Bases_B2, _other as *const crate::mr::bases::B2 as *const crate::ffi::MR_Bases_B2)};
        unsafe {&mut *(__ret as *mut crate::mr::bases::B2)}
    }

    /// Upcasts to the base class `MR::Bases::A`.
    ///
    /// Calls `MR_Bases_B2_UpcastTo_MR_Bases_A()`.
    pub fn upcast_to_a(&self) -> &crate::mr::bases::A
    {
        unsafe {&*(crate::ffi::MR_Bases_B2_UpcastTo_MR_Bases_A(self as *const Self as *const crate::ffi::MR_Bases_B2) as *const crate::mr::bases::A)}
    }

    /// Upcasts to the base class `MR::Bases::A`.
    ///
    /// Calls `MR_Bases_B2_MutableUpcastTo_MR_Bases_A()`.
    pub fn upcast_to_a_mut(&mut self) -> &mut crate::mr::bases::A
    {
        unsafe {&mut *(crate::ffi::MR_Bases_B2_MutableUpcastTo_MR_Bases_A(self as *mut Self as *mut crate::ffi::MR_Bases_B2) as *mut crate::mr::bases::A)}
    }

    /// Static downcast from the base class `MR::Bases::A`.
    ///
    /// Calls `MR_Bases_B2_StaticDowncastFrom_MR_Bases_A()`. Undefined behavior if the object isn't actually a `B2`.
    pub unsafe fn static_downcast_from_a(object: &crate::mr::bases::A) -> &Self
    {
        &*(crate::ffi::MR_Bases_B2_StaticDowncastFrom_MR_Bases_A(object as *const crate::mr::bases::A as *const crate::ffi::MR_Bases_A) as *const Self)
    }

    /// Static downcast from the base class `MR::Bases::A`.
    ///
    /// Calls `MR_Bases_B2_MutableStaticDowncastFrom_MR_Bases_A()`. Undefined behavior if the object isn't actually a `B2`.
    pub unsafe fn static_downcast_from_a_mut(object: &mut crate::mr::bases::A) -> &mut Self
    {
        &mut *(crate::ffi::MR_Bases_B2_MutableStaticDowncastFrom_MR_Bases_A(object as *mut crate::mr::bases::A as *mut crate::ffi::MR_Bases_A) as *mut Self)
    }

    /// Upcasts to the base class `MR::Bases::B`.
    ///
    /// Calls `MR_Bases_B2_UpcastTo_MR_Bases_B()`.
    pub fn upcast_to_b(&self) -> &crate::mr::bases::B
    {
        unsafe {&*(crate::ffi::MR_Bases_B2_UpcastTo_MR_Bases_B(self as *const Self as *const crate::ffi::MR_Bases_B2) as *const crate::mr::bases::B)}
    }

    /// Upcasts to the base class `MR::Bases::B`.
    ///
    /// Calls `MR_Bases_B2_MutableUpcastTo_MR_Bases_B()`.
    pub fn upcast_to_b_mut(&mut self) -> &mut crate::mr::bases::B
    {
        unsafe {&mut *(crate::ffi::MR_Bases_B2_MutableUpcastTo_MR_Bases_B(self as *mut Self as *mut crate::ffi::MR_Bases_B2) as *mut crate::mr::bases::B)}
    }

    /// Static downcast from the base class `MR::Bases::B`.
    ///
    /// Calls `MR_Bases_B2_StaticDowncastFrom_MR_Bases_B()`. Undefined behavior if the object isn't actually a `B2`.
    pub unsafe fn static_downcast_from_b(object: &crate::mr::bases::B) -> &Self
    {
        &*(crate::ffi::MR_Bases_B2_StaticDowncastFrom_MR_Bases_B(object as *const crate::mr::bases::B as *const crate::ffi::MR_Bases_B) as *const Self)
    }

    /// Static downcast from the base class `MR::Bases::B`.
    ///
    /// Calls `MR_Bases_B2_MutableStaticDowncastFrom_MR_Bases_B()`. Undefined behavior if the object isn't actually a `B2`.
    pub unsafe fn static_downcast_from_b_mut(object: &mut crate::mr::bases::B) -> &mut Self
    {
        &mut *(crate::ffi::MR_Bases_B2_MutableStaticDowncastFrom_MR_Bases_B(object as *mut crate::mr::bases::B as *mut crate::ffi::MR_Bases_B) as *mut Self)
    }

}

impl AsRef<crate::mr::bases::A> for B2
{
    fn as_ref(&self) -> &crate::mr::bases::A {self.upcast_to_a()}
}

impl AsMut<crate::mr::bases::A> for B2
{
    fn as_mut(&mut self) -> &mut crate::mr::bases::A {self.upcast_to_a_mut()}
}

impl AsRef<crate::mr::bases::B> for B2
{
    fn as_ref(&self) -> &crate::mr::bases::B {self.upcast_to_b()}
}

impl AsMut<crate::mr::bases::B> for B2
{
    fn as_mut(&mut self) -> &mut crate::mr::bases::B {self.upcast_to_b_mut()}
}

unsafe impl crate::CppCopy for B2
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::Bases::C`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::Bases::A`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::Bases::D`
///
/// Generated from class `MR::Bases::C`. Heap-allocated instances are held in `Owned<C>`.
#[repr(transparent)]
pub struct C(crate::ffi::MR_Bases_C);

unsafe impl crate::CppClass for C
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_Bases_C_Destroy(ptr as *const crate::ffi::MR_Bases_C)}
}

impl C
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_Bases_C_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::bases::C>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_C_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::C)}
    }

    /// Generated from constructor `MR::Bases::C::C`.
    ///
    /// Calls `MR_Bases_C_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::bases::C) -> crate::Owned<crate::mr::bases::C>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_C_ConstructFromAnother(_other as *const crate::mr::bases::C as *const crate::ffi::MR_Bases_C)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::C)}
    }

    /// Generated from method `MR::Bases::C::operator=`.
    ///
    /// Calls `MR_Bases_C_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::bases::C) -> &mut crate::mr::bases::C
    {
        let __ret = unsafe {crate::ffi::MR_Bases_C_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_Bases_C, _other as *const crate::mr::bases::C as *const crate::ffi::MR_Bases_C)};
        unsafe {&mut *(__ret as *mut crate::mr::bases::C)}
    }

    /// Upcasts to the base class `MR::Bases::A`.
    ///
    /// Calls `MR_Bases_C_UpcastTo_MR_Bases_A()`.
    pub fn upcast_to_a(&self) -> &crate::mr::bases::A
    {
        unsafe {&*(crate::ffi::MR_Bases_C_UpcastTo_MR_Bases_A(self as *const Self as *const crate::ffi::MR_Bases_C) as *const crate::mr::bases::A)}
    }

    /// Upcasts to the base class `MR::Bases::A`.
    ///
    /// Calls `MR_Bases_C_MutableUpcastTo_MR_Bases_A()`.
    pub fn upcast_to_a_mut(&mut self) -> &mut crate::mr::bases::A
    {
        unsafe {&mut *(crate::ffi::MR_Bases_C_MutableUpcastTo_MR_Bases_A(self as *mut Self as *mut crate::ffi::MR_Bases_C) as *mut crate::mr::bases::A)}
    }

    /// Static downcast from the base class `MR::Bases::A`.
    ///
    /// Calls `MR_Bases_C_StaticDowncastFrom_MR_Bases_A()`. Undefined behavior if the object isn't actually a `C`.
    pub unsafe fn static_downcast_from_a(object: &crate::mr::bases::A) -> &Self
    {
        &*(crate::ffi::MR_Bases_C_StaticDowncastFrom_MR_Bases_A(object as *const crate::mr::bases::A as *const crate::ffi::MR_Bases_A) as *const Self)
    }

    /// Static downcast from the base class `MR::Bases::A`.
    ///
    /// Calls `MR_Bases_C_MutableStaticDowncastFrom_MR_Bases_A()`. Undefined behavior if the object isn't actually a `C`.
    pub unsafe fn static_downcast_from_a_mut(object: &mut crate::mr::bases::A) -> &mut Self
    {
        &mut *(crate::ffi::MR_Bases_C_MutableStaticDowncastFrom_MR_Bases_A(object as *mut crate::mr::bases::A as *mut crate::ffi::MR_Bases_A) as *mut Self)
    }

}

impl AsRef<crate::mr::bases::A> for C
{
    fn as_ref(&self) -> &crate::mr::bases::A {self.upcast_to_a()}
}

impl AsMut<crate::mr::bases::A> for C
{
    fn as_mut(&mut self) -> &mut crate::mr::bases::A {self.upcast_to_a_mut()}
}

unsafe impl crate::CppCopy for C
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::Bases::D`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::Bases::B`
///     `MR::Bases::C`
///   Ambiguous:
///     `MR::Bases::A`
///
/// Generated from class `MR::Bases::D`. Heap-allocated instances are held in `Owned<D>`.
#[repr(transparent)]
pub struct D(crate::ffi::MR_Bases_D);

unsafe impl crate::CppClass for D
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_Bases_D_Destroy(ptr as *const crate::ffi::MR_Bases_D)}
}

impl D
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_Bases_D_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::bases::D>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_D_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::D)}
    }

    /// Generated from constructor `MR::Bases::D::D`.
    ///
    /// Calls `MR_Bases_D_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::bases::D) -> crate::Owned<crate::mr::bases::D>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_D_ConstructFromAnother(_other as *const crate::mr::bases::D as *const crate::ffi::MR_Bases_D)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::D)}
    }

    /// Generated from method `MR::Bases::D::operator=`.
    ///
    /// Calls `MR_Bases_D_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::bases::D) -> &mut crate::mr::bases::D
    {
        let __ret = unsafe {crate::ffi::MR_Bases_D_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_Bases_D, _other as *const crate::mr::bases::D as *const crate::ffi::MR_Bases_D)};
        unsafe {&mut *(__ret as *mut crate::mr::bases::D)}
    }

}

unsafe impl crate::CppCopy for D
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::Bases::D2`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::Bases::B`
///   Ambiguous:
///     `MR::Bases::A`
///
/// Generated from class `MR::Bases::D2`. Heap-allocated instances are held in `Owned<D2>`.
#[repr(transparent)]
pub struct D2(crate::ffi::MR_Bases_D2);

unsafe impl crate::CppClass for D2
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_Bases_D2_Destroy(ptr as *const crate::ffi::MR_Bases_D2)}
}

impl D2
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_Bases_D2_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::bases::D2>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_D2_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::D2)}
    }

    /// Generated from constructor `MR::Bases::D2::D2`.
    ///
    /// Calls `MR_Bases_D2_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::bases::D2) -> crate::Owned<crate::mr::bases::D2>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_D2_ConstructFromAnother(_other as *const crate::mr::bases::D2 as *const crate::ffi::MR_Bases_D2)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::D2)}
    }

    /// Generated from method `MR::Bases::D2::operator=`.
    ///
    /// Calls `MR_Bases_D2_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::bases::D2) -> &mut crate::mr::bases::D2
    {
        let __ret = unsafe {crate::ffi::MR_Bases_D2_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_Bases_D2, _other as *const crate::mr::bases::D2 as *const crate::ffi::MR_Bases_D2)};
        unsafe {&mut *(__ret as *mut crate::mr::bases::D2)}
    }

}

unsafe impl crate::CppCopy for D2
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::Bases::D3`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::Bases::B`
///   Ambiguous:
///     `MR::Bases::A`
///
/// Generated from class `MR::Bases::D3`. Heap-allocated instances are held in `Owned<D3>`.
#[repr(transparent)]
pub struct D3(crate::ffi::MR_Bases_D3);

unsafe impl crate::CppClass for D3
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_Bases_D3_Destroy(ptr as *const crate::ffi::MR_Bases_D3)}
}

impl D3
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_Bases_D3_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::bases::D3>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_D3_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::D3)}
    }

    /// Generated from constructor `MR::Bases::D3::D3`.
    ///
    /// Calls `MR_Bases_D3_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::bases::D3) -> crate::Owned<crate::mr::bases::D3>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_D3_ConstructFromAnother(_other as *const crate::mr::bases::D3 as *const crate::ffi::MR_Bases_D3)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::D3)}
    }

    /// Generated from method `MR::Bases::D3::operator=`.
    ///
    /// Calls `MR_Bases_D3_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::bases::D3) -> &mut crate::mr::bases::D3
    {
        let __ret = unsafe {crate::ffi::MR_Bases_D3_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_Bases_D3, _other as *const crate::mr::bases::D3 as *const crate::ffi::MR_Bases_D3)};
        unsafe {&mut *(__ret as *mut crate::mr::bases::D3)}
    }

}

unsafe impl crate::CppCopy for D3
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::Bases::E`.
/// Derived classes:
///   Non-virtual along a virtual path:
///     `MR::Bases::G`
///     `MR::Bases::H`
///     `MR::Bases::I`
///   Direct: (non-virtual)
///     `MR::Bases::F`
///
/// Generated from class `MR::Bases::E`. Heap-allocated instances are held in `Owned<E>`.
#[repr(transparent)]
pub struct E(crate::ffi::MR_Bases_E);

unsafe impl crate::CppClass for E
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_Bases_E_Destroy(ptr as *const crate::ffi::MR_Bases_E)}
}

impl E
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_Bases_E_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::bases::E>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_E_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::E)}
    }

    /// Generated from constructor `MR::Bases::E::E`.
    ///
    /// Calls `MR_Bases_E_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::bases::E) -> crate::Owned<crate::mr::bases::E>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_E_ConstructFromAnother(_other as *const crate::mr::bases::E as *const crate::ffi::MR_Bases_E)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::E)}
    }

    /// Generated from method `MR::Bases::E::operator=`.
    ///
    /// Calls `MR_Bases_E_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::bases::E) -> &mut crate::mr::bases::E
    {
        let __ret = unsafe {crate::ffi::MR_Bases_E_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_Bases_E, _other as *const crate::mr::bases::E as *const crate::ffi::MR_Bases_E)};
        unsafe {&mut *(__ret as *mut crate::mr::bases::E)}
    }

}

unsafe impl crate::CppCopy for E
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::Bases::F`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::Bases::E`
/// Derived classes:
///   Virtual:
///     `MR::Bases::G`
///     `MR::Bases::H`
///     `MR::Bases::I`
///
/// Generated from class `MR::Bases::F`. Heap-allocated instances are held in `Owned<F>`.
#[repr(transparent)]
pub struct F(crate::ffi::MR_Bases_F);

unsafe impl crate::CppClass for F
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_Bases_F_Destroy(ptr as *const crate::ffi::MR_Bases_F)}
}

impl F
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_Bases_F_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::bases::F>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_F_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::F)}
    }

    /// Generated from constructor `MR::Bases::F::F`.
    ///
    /// Calls `MR_Bases_F_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::bases::F) -> crate::Owned<crate::mr::bases::F>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_F_ConstructFromAnother(_other as *const crate::mr::bases::F as *const crate::ffi::MR_Bases_F)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::F)}
    }

    /// Generated from method `MR::Bases::F::operator=`.
    ///
    /// Calls `MR_Bases_F_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::bases::F) -> &mut crate::mr::bases::F
    {
        let __ret = unsafe {crate::ffi::MR_Bases_F_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_Bases_F, _other as *const crate::mr::bases::F as *const crate::ffi::MR_Bases_F)};
        unsafe {&mut *(__ret as *mut crate::mr::bases::F)}
    }

    /// Upcasts to the base class `MR::Bases::E`.
    ///
    /// Calls `MR_Bases_F_UpcastTo_MR_Bases_E()`.
    pub fn upcast_to_e(&self) -> &crate::mr::bases::E
    {
        unsafe {&*(crate::ffi::MR_Bases_F_UpcastTo_MR_Bases_E(self as *const Self as *const crate::ffi::MR_Bases_F) as *const crate::mr::bases::E)}
    }

    /// Upcasts to the base class `MR::Bases::E`.
    ///
    /// Calls `MR_Bases_F_MutableUpcastTo_MR_Bases_E()`.
    pub fn upcast_to_e_mut(&mut self) -> &mut crate::mr::bases::E
    {
        unsafe {&mut *(crate::ffi::MR_Bases_F_MutableUpcastTo_MR_Bases_E(self as *mut Self as *mut crate::ffi::MR_Bases_F) as *mut crate::mr::bases::E)}
    }

    /// Static downcast from the base class `MR::Bases::E`.
    ///
    /// Calls `MR_Bases_F_StaticDowncastFrom_MR_Bases_E()`. Undefined behavior if the object isn't actually a `F`.
    pub unsafe fn static_downcast_from_e(object: &crate::mr::bases::E) -> &Self
    {
        &*(crate::ffi::MR_Bases_F_StaticDowncastFrom_MR_Bases_E(object as *const crate::mr::bases::E as *const crate::ffi::MR_Bases_E) as *const Self)
    }

    /// Static downcast from the base class `MR::Bases::E`.
    ///
    /// Calls `MR_Bases_F_MutableStaticDowncastFrom_MR_Bases_E()`. Undefined behavior if the object isn't actually a `F`.
    pub unsafe fn static_downcast_from_e_mut(object: &mut crate::mr::bases::E) -> &mut Self
    {
        &mut *(crate::ffi::MR_Bases_F_MutableStaticDowncastFrom_MR_Bases_E(object as *mut crate::mr::bases::E as *mut crate::ffi::MR_Bases_E) as *mut Self)
    }

}

impl AsRef<crate::mr::bases::E> for F
{
    fn as_ref(&self) -> &crate::mr::bases::E {self.upcast_to_e()}
}

impl AsMut<crate::mr::bases::E> for F
{
    fn as_mut(&mut self) -> &mut crate::mr::bases::E {self.upcast_to_e_mut()}
}

unsafe impl crate::CppCopy for F
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::Bases::G`.
/// Base classes:
///   Virtual:
///     `MR::Bases::F`
///   Non-virtual along a virtual path:
///     `MR::Bases::E`
///
/// Generated from class `MR::Bases::G`. Heap-allocated instances are held in `Owned<G>`.
#[repr(transparent)]
pub struct G(crate::ffi::MR_Bases_G);

unsafe impl crate::CppClass for G
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_Bases_G_Destroy(ptr as *const crate::ffi::MR_Bases_G)}
}

impl G
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_Bases_G_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::bases::G>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_G_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::G)}
    }

    /// Generated from constructor `MR::Bases::G::G`.
    ///
    /// Calls `MR_Bases_G_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::bases::G) -> crate::Owned<crate::mr::bases::G>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_G_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::bases::G as *mut crate::ffi::MR_Bases_G)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::G)}
    }

    /// Generated from method `MR::Bases::G::operator=`.
    ///
    /// Calls `MR_Bases_G_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::bases::G) -> &mut crate::mr::bases::G
    {
        let __ret = unsafe {crate::ffi::MR_Bases_G_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_Bases_G, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::bases::G as *mut crate::ffi::MR_Bases_G)};
        unsafe {&mut *(__ret as *mut crate::mr::bases::G)}
    }

    /// Upcasts to the base class `MR::Bases::E`.
    ///
    /// Calls `MR_Bases_G_UpcastTo_MR_Bases_E()`.
    pub fn upcast_to_e(&self) -> &crate::mr::bases::E
    {
        unsafe {&*(crate::ffi::MR_Bases_G_UpcastTo_MR_Bases_E(self as *const Self as *const crate::ffi::MR_Bases_G) as *const crate::mr::bases::E)}
    }

    /// Upcasts to the base class `MR::Bases::E`.
    ///
    /// Calls `MR_Bases_G_MutableUpcastTo_MR_Bases_E()`.
    pub fn upcast_to_e_mut(&mut self) -> &mut crate::mr::bases::E
    {
        unsafe {&mut *(crate::ffi::MR_Bases_G_MutableUpcastTo_MR_Bases_E(self as *mut Self as *mut crate::ffi::MR_Bases_G) as *mut crate::mr::bases::E)}
    }

    /// Upcasts to the base class `MR::Bases::F`.
    ///
    /// Calls `MR_Bases_G_UpcastTo_MR_Bases_F()`.
    pub fn upcast_to_f(&self) -> &crate::mr::bases::F
    {
        unsafe {&*(crate::ffi::MR_Bases_G_UpcastTo_MR_Bases_F(self as *const Self as *const crate::ffi::MR_Bases_G) as *const crate::mr::bases::F)}
    }

    /// Upcasts to the base class `MR::Bases::F`.
    ///
    /// Calls `MR_Bases_G_MutableUpcastTo_MR_Bases_F()`.
    pub fn upcast_to_f_mut(&mut self) -> &mut crate::mr::bases::F
    {
        unsafe {&mut *(crate::ffi::MR_Bases_G_MutableUpcastTo_MR_Bases_F(self as *mut Self as *mut crate::ffi::MR_Bases_G) as *mut crate::mr::bases::F)}
    }

}

impl AsRef<crate::mr::bases::E> for G
{
    fn as_ref(&self) -> &crate::mr::bases::E {self.upcast_to_e()}
}

impl AsMut<crate::mr::bases::E> for G
{
    fn as_mut(&mut self) -> &mut crate::mr::bases::E {self.upcast_to_e_mut()}
}

impl AsRef<crate::mr::bases::F> for G
{
    fn as_ref(&self) -> &crate::mr::bases::F {self.upcast_to_f()}
}

impl AsMut<crate::mr::bases::F> for G
{
    fn as_mut(&mut self) -> &mut crate::mr::bases::F {self.upcast_to_f_mut()}
}

unsafe impl crate::CppCopy for G
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::Bases::H`.
/// Base classes:
///   Virtual:
///     `MR::Bases::F`
///   Non-virtual along a virtual path:
///     `MR::Bases::E`
///   Direct: (non-virtual)
///     `MR::Bases::A`
///
/// Generated from class `MR::Bases::H`. Heap-allocated instances are held in `Owned<H>`.
#[repr(transparent)]
pub struct H(crate::ffi::MR_Bases_H);

unsafe impl crate::CppClass for H
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_Bases_H_Destroy(ptr as *const crate::ffi::MR_Bases_H)}
}

impl H
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_Bases_H_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::bases::H>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_H_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::H)}
    }

    /// Generated from constructor `MR::Bases::H::H`.
    ///
    /// Calls `MR_Bases_H_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::bases::H) -> crate::Owned<crate::mr::bases::H>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_H_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::bases::H as *mut crate::ffi::MR_Bases_H)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::H)}
    }

    /// Generated from method `MR::Bases::H::operator=`.
    ///
    /// Calls `MR_Bases_H_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::bases::H) -> &mut crate::mr::bases::H
    {
        let __ret = unsafe {crate::ffi::MR_Bases_H_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_Bases_H, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::bases::H as *mut crate::ffi::MR_Bases_H)};
        unsafe {&mut *(__ret as *mut crate::mr::bases::H)}
    }

    /// Upcasts to the base class `MR::Bases::E`.
    ///
    /// Calls `MR_Bases_H_UpcastTo_MR_Bases_E()`.
    pub fn upcast_to_e(&self) -> &crate::mr::bases::E
    {
        unsafe {&*(crate::ffi::MR_Bases_H_UpcastTo_MR_Bases_E(self as *const Self as *const crate::ffi::MR_Bases_H) as *const crate::mr::bases::E)}
    }

    /// Upcasts to the base class `MR::Bases::E`.
    ///
    /// Calls `MR_Bases_H_MutableUpcastTo_MR_Bases_E()`.
    pub fn upcast_to_e_mut(&mut self) -> &mut crate::mr::bases::E
    {
        unsafe {&mut *(crate::ffi::MR_Bases_H_MutableUpcastTo_MR_Bases_E(self as *mut Self as *mut crate::ffi::MR_Bases_H) as *mut crate::mr::bases::E)}
    }

    /// Upcasts to the base class `MR::Bases::F`.
    ///
    /// Calls `MR_Bases_H_UpcastTo_MR_Bases_F()`.
    pub fn upcast_to_f(&self) -> &crate::mr::bases::F
    {
        unsafe {&*(crate::ffi::MR_Bases_H_UpcastTo_MR_Bases_F(self as *const Self as *const crate::ffi::MR_Bases_H) as *const crate::mr::bases::F)}
    }

    /// Upcasts to the base class `MR::Bases::F`.
    ///
    /// Calls `MR_Bases_H_MutableUpcastTo_MR_Bases_F()`.
    pub fn upcast_to_f_mut(&mut self) -> &mut crate::mr::bases::F
    {
        unsafe {&mut *(crate::ffi::MR_Bases_H_MutableUpcastTo_MR_Bases_F(self as *mut Self as *mut crate::ffi::MR_Bases_H) as *mut crate::mr::bases::F)}
    }

    /// Upcasts to the base class `MR::Bases::A`.
    ///
    /// Calls `MR_Bases_H_UpcastTo_MR_Bases_A()`.
    pub fn upcast_to_a(&self) -> &crate::mr::bases::A
    {
        unsafe {&*(crate::ffi::MR_Bases_H_UpcastTo_MR_Bases_A(self as *const Self as *const crate::ffi::MR_Bases_H) as *const crate::mr::bases::A)}
    }

    /// Upcasts to the base class `MR::Bases::A`.
    ///
    /// Calls `MR_Bases_H_MutableUpcastTo_MR_Bases_A()`.
    pub fn upcast_to_a_mut(&mut self) -> &mut crate::mr::bases::A
    {
        unsafe {&mut *(crate::ffi::MR_Bases_H_MutableUpcastTo_MR_Bases_A(self as *mut Self as *mut crate::ffi::MR_Bases_H) as *mut crate::mr::bases::A)}
    }

    /// Static downcast from the base class `MR::Bases::A`.
    ///
    /// Calls `MR_Bases_H_StaticDowncastFrom_MR_Bases_A()`. Undefined behavior if the object isn't actually a `H`.
    pub unsafe fn static_downcast_from_a(object: &crate::mr::bases::A) -> &Self
    {
        &*(crate::ffi::MR_Bases_H_StaticDowncastFrom_MR_Bases_A(object as *const crate::mr::bases::A as *const crate::ffi::MR_Bases_A) as *const Self)
    }

    /// Static downcast from the base class `MR::Bases::A`.
    ///
    /// Calls `MR_Bases_H_MutableStaticDowncastFrom_MR_Bases_A()`. Undefined behavior if the object isn't actually a `H`.
    pub unsafe fn static_downcast_from_a_mut(object: &mut crate::mr::bases::A) -> &mut Self
    {
        &mut *(crate::ffi::MR_Bases_H_MutableStaticDowncastFrom_MR_Bases_A(object as *mut crate::mr::bases::A as *mut crate::ffi::MR_Bases_A) as *mut Self)
    }

}

impl AsRef<crate::mr::bases::E> for H
{
    fn as_ref(&self) -> &crate::mr::bases::E {self.upcast_to_e()}
}

impl AsMut<crate::mr::bases::E> for H
{
    fn as_mut(&mut self) -> &mut crate::mr::bases::E {self.upcast_to_e_mut()}
}

impl AsRef<crate::mr::bases::F> for H
{
    fn as_ref(&self) -> &crate::mr::bases::F {self.upcast_to_f()}
}

impl AsMut<crate::mr::bases::F> for H
{
    fn as_mut(&mut self) -> &mut crate::mr::bases::F {self.upcast_to_f_mut()}
}

impl AsRef<crate::mr::bases::A> for H
{
    fn as_ref(&self) -> &crate::mr::bases::A {self.upcast_to_a()}
}

impl AsMut<crate::mr::bases::A> for H
{
    fn as_mut(&mut self) -> &mut crate::mr::bases::A {self.upcast_to_a_mut()}
}

unsafe impl crate::CppCopy for H
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::Bases::I`.
/// Base classes:
///   Virtual:
///     `MR::Bases::F`
///     `MR::Bases::A`
///   Non-virtual along a virtual path:
///     `MR::Bases::E`
///
/// Generated from class `MR::Bases::I`. Heap-allocated instances are held in `Owned<I>`.
#[repr(transparent)]
pub struct I(crate::ffi::MR_Bases_I);

unsafe impl crate::CppClass for I
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_Bases_I_Destroy(ptr as *const crate::ffi::MR_Bases_I)}
}

impl I
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_Bases_I_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::bases::I>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_I_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::I)}
    }

    /// Generated from constructor `MR::Bases::I::I`.
    ///
    /// Calls `MR_Bases_I_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::bases::I) -> crate::Owned<crate::mr::bases::I>
    {
        let __ret = unsafe {crate::ffi::MR_Bases_I_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::bases::I as *mut crate::ffi::MR_Bases_I)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::bases::I)}
    }

    /// Generated from method `MR::Bases::I::operator=`.
    ///
    /// Calls `MR_Bases_I_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::bases::I) -> &mut crate::mr::bases::I
    {
        let __ret = unsafe {crate::ffi::MR_Bases_I_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_Bases_I, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::bases::I as *mut crate::ffi::MR_Bases_I)};
        unsafe {&mut *(__ret as *mut crate::mr::bases::I)}
    }

    /// Upcasts to the base class `MR::Bases::E`.
    ///
    /// Calls `MR_Bases_I_UpcastTo_MR_Bases_E()`.
    pub fn upcast_to_e(&self) -> &crate::mr::bases::E
    {
        unsafe {&*(crate::ffi::MR_Bases_I_UpcastTo_MR_Bases_E(self as *const Self as *const crate::ffi::MR_Bases_I) as *const crate::mr::bases::E)}
    }

    /// Upcasts to the base class `MR::Bases::E`.
    ///
    /// Calls `MR_Bases_I_MutableUpcastTo_MR_Bases_E()`.
    pub fn upcast_to_e_mut(&mut self) -> &mut crate::mr::bases::E
    {
        unsafe {&mut *(crate::ffi::MR_Bases_I_MutableUpcastTo_MR_Bases_E(self as *mut Self as *mut crate::ffi::MR_Bases_I) as *mut crate::mr::bases::E)}
    }

    /// Upcasts to the base class `MR::Bases::F`.
    ///
    /// Calls `MR_Bases_I_UpcastTo_MR_Bases_F()`.
    pub fn upcast_to_f(&self) -> &crate::mr::bases::F
    {
        unsafe {&*(crate::ffi::MR_Bases_I_UpcastTo_MR_Bases_F(self as *const Self as *const crate::ffi::MR_Bases_I) as *const crate::mr::bases::F)}
    }

    /// Upcasts to the base class `MR::Bases::F`.
    ///
    /// Calls `MR_Bases_I_MutableUpcastTo_MR_Bases_F()`.
    pub fn upcast_to_f_mut(&mut self) -> &mut crate::mr::bases::F
    {
        unsafe {&mut *(crate::ffi::MR_Bases_I_MutableUpcastTo_MR_Bases_F(self as *mut Self as *mut crate::ffi::MR_Bases_I) as *mut crate::mr::bases::F)}
    }

    /// Upcasts to the base class `MR::Bases::A`.
    ///
    /// Calls `MR_Bases_I_UpcastTo_MR_Bases_A()`.
    pub fn upcast_to_a(&self) -> &crate::mr::bases::A
    {
        unsafe {&*(crate::ffi::MR_Bases_I_UpcastTo_MR_Bases_A(self as *const Self as *const crate::ffi::MR_Bases_I) as *const crate::mr::bases::A)}
    }

    /// Upcasts to the base class `MR::Bases::A`.
    ///
    /// Calls `MR_Bases_I_MutableUpcastTo_MR_Bases_A()`.
    pub fn upcast_to_a_mut(&mut self) -> &mut crate::mr::bases::A
    {
        unsafe {&mut *(crate::ffi::MR_Bases_I_MutableUpcastTo_MR_Bases_A(self as *mut Self as *mut crate::ffi::MR_Bases_I) as *mut crate::mr::bases::A)}
    }

}

impl AsRef<crate::mr::bases::E> for I
{
    fn as_ref(&self) -> &crate::mr::bases::E {self.upcast_to_e()}
}

impl AsMut<crate::mr::bases::E> for I
{
    fn as_mut(&mut self) -> &mut crate::mr::bases::E {self.upcast_to_e_mut()}
}

impl AsRef<crate::mr::bases::F> for I
{
    fn as_ref(&self) -> &crate::mr::bases::F {self.upcast_to_f()}
}

impl AsMut<crate::mr::bases::F> for I
{
    fn as_mut(&mut self) -> &mut crate::mr::bases::F {self.upcast_to_f_mut()}
}

impl AsRef<crate::mr::bases::A> for I
{
    fn as_ref(&self) -> &crate::mr::bases::A {self.upcast_to_a()}
}

impl AsMut<crate::mr::bases::A> for I
{
    fn as_mut(&mut self) -> &mut crate::mr::bases::A {self.upcast_to_a_mut()}
}

unsafe impl crate::CppCopy for I
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

