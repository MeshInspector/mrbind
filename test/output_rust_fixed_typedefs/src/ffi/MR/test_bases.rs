/// Generated from class `MR::Bases::A`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_Bases_A
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::Bases::B`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_Bases_B
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::Bases::B2`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_Bases_B2
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::Bases::C`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_Bases_C
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::Bases::D`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_Bases_D
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::Bases::D2`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_Bases_D2
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::Bases::D3`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_Bases_D3
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::Bases::E`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_Bases_E
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::Bases::F`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_Bases_F
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::Bases::G`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_Bases_G
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::Bases::H`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_Bases_H
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::Bases::I`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_Bases_I
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_Bases_A_DefaultConstruct() -> *mut crate::ffi::MR_Bases_A;
    pub fn MR_Bases_A_ConstructFromAnother(_other: *const crate::ffi::MR_Bases_A) -> *mut crate::ffi::MR_Bases_A;
    pub fn MR_Bases_A_AssignFromAnother(_this: *mut crate::ffi::MR_Bases_A, _other: *const crate::ffi::MR_Bases_A) -> *mut crate::ffi::MR_Bases_A;
    pub fn MR_Bases_A_Destroy(_this: *const MR_Bases_A);
    pub fn MR_Bases_B_DefaultConstruct() -> *mut crate::ffi::MR_Bases_B;
    pub fn MR_Bases_B_ConstructFromAnother(_other: *const crate::ffi::MR_Bases_B) -> *mut crate::ffi::MR_Bases_B;
    pub fn MR_Bases_B_AssignFromAnother(_this: *mut crate::ffi::MR_Bases_B, _other: *const crate::ffi::MR_Bases_B) -> *mut crate::ffi::MR_Bases_B;
    pub fn MR_Bases_B_Destroy(_this: *const MR_Bases_B);
    pub fn MR_Bases_B2_DefaultConstruct() -> *mut crate::ffi::MR_Bases_B2;
    pub fn MR_Bases_B2_ConstructFromAnother(_other: *const crate::ffi::MR_Bases_B2) -> *mut crate::ffi::MR_Bases_B2;
    pub fn MR_Bases_B2_AssignFromAnother(_this: *mut crate::ffi::MR_Bases_B2, _other: *const crate::ffi::MR_Bases_B2) -> *mut crate::ffi::MR_Bases_B2;
    pub fn MR_Bases_B2_Destroy(_this: *const MR_Bases_B2);
    pub fn MR_Bases_C_DefaultConstruct() -> *mut crate::ffi::MR_Bases_C;
    pub fn MR_Bases_C_ConstructFromAnother(_other: *const crate::ffi::MR_Bases_C) -> *mut crate::ffi::MR_Bases_C;
    pub fn MR_Bases_C_AssignFromAnother(_this: *mut crate::ffi::MR_Bases_C, _other: *const crate::ffi::MR_Bases_C) -> *mut crate::ffi::MR_Bases_C;
    pub fn MR_Bases_C_Destroy(_this: *const MR_Bases_C);
    pub fn MR_Bases_D_DefaultConstruct() -> *mut crate::ffi::MR_Bases_D;
    pub fn MR_Bases_D_ConstructFromAnother(_other: *const crate::ffi::MR_Bases_D) -> *mut crate::ffi::MR_Bases_D;
    pub fn MR_Bases_D_AssignFromAnother(_this: *mut crate::ffi::MR_Bases_D, _other: *const crate::ffi::MR_Bases_D) -> *mut crate::ffi::MR_Bases_D;
    pub fn MR_Bases_D_Destroy(_this: *const MR_Bases_D);
    pub fn MR_Bases_D2_DefaultConstruct() -> *mut crate::ffi::MR_Bases_D2;
    pub fn MR_Bases_D2_ConstructFromAnother(_other: *const crate::ffi::MR_Bases_D2) -> *mut crate::ffi::MR_Bases_D2;
    pub fn MR_Bases_D2_AssignFromAnother(_this: *mut crate::ffi::MR_Bases_D2, _other: *const crate::ffi::MR_Bases_D2) -> *mut crate::ffi::MR_Bases_D2;
    pub fn MR_Bases_D2_Destroy(_this: *const MR_Bases_D2);
    pub fn MR_Bases_D3_DefaultConstruct() -> *mut crate::ffi::MR_Bases_D3;
    pub fn MR_Bases_D3_ConstructFromAnother(_other: *const crate::ffi::MR_Bases_D3) -> *mut crate::ffi::MR_Bases_D3;
    pub fn MR_Bases_D3_AssignFromAnother(_this: *mut crate::ffi::MR_Bases_D3, _other: *const crate::ffi::MR_Bases_D3) -> *mut crate::ffi::MR_Bases_D3;
    pub fn MR_Bases_D3_Destroy(_this: *const MR_Bases_D3);
    pub fn MR_Bases_E_DefaultConstruct() -> *mut crate::ffi::MR_Bases_E;
    pub fn MR_Bases_E_ConstructFromAnother(_other: *const crate::ffi::MR_Bases_E) -> *mut crate::ffi::MR_Bases_E;
    pub fn MR_Bases_E_AssignFromAnother(_this: *mut crate::ffi::MR_Bases_E, _other: *const crate::ffi::MR_Bases_E) -> *mut crate::ffi::MR_Bases_E;
    pub fn MR_Bases_E_Destroy(_this: *const MR_Bases_E);
    pub fn MR_Bases_F_DefaultConstruct() -> *mut crate::ffi::MR_Bases_F;
    pub fn MR_Bases_F_ConstructFromAnother(_other: *const crate::ffi::MR_Bases_F) -> *mut crate::ffi::MR_Bases_F;
    pub fn MR_Bases_F_AssignFromAnother(_this: *mut crate::ffi::MR_Bases_F, _other: *const crate::ffi::MR_Bases_F) -> *mut crate::ffi::MR_Bases_F;
    pub fn MR_Bases_F_Destroy(_this: *const MR_Bases_F);
    pub fn MR_Bases_G_DefaultConstruct() -> *mut crate::ffi::MR_Bases_G;
    pub fn MR_Bases_G_ConstructFromAnother(_other_pass_by: crate::ffi::MR_C_PassBy, _other: *mut crate::ffi::MR_Bases_G) -> *mut crate::ffi::MR_Bases_G;
    pub fn MR_Bases_G_AssignFromAnother(_this: *mut crate::ffi::MR_Bases_G, _other_pass_by: crate::ffi::MR_C_PassBy, _other: *mut crate::ffi::MR_Bases_G) -> *mut crate::ffi::MR_Bases_G;
    pub fn MR_Bases_G_Destroy(_this: *const MR_Bases_G);
    pub fn MR_Bases_H_DefaultConstruct() -> *mut crate::ffi::MR_Bases_H;
    pub fn MR_Bases_H_ConstructFromAnother(_other_pass_by: crate::ffi::MR_C_PassBy, _other: *mut crate::ffi::MR_Bases_H) -> *mut crate::ffi::MR_Bases_H;
    pub fn MR_Bases_H_AssignFromAnother(_this: *mut crate::ffi::MR_Bases_H, _other_pass_by: crate::ffi::MR_C_PassBy, _other: *mut crate::ffi::MR_Bases_H) -> *mut crate::ffi::MR_Bases_H;
    pub fn MR_Bases_H_Destroy(_this: *const MR_Bases_H);
    pub fn MR_Bases_I_DefaultConstruct() -> *mut crate::ffi::MR_Bases_I;
    pub fn MR_Bases_I_ConstructFromAnother(_other_pass_by: crate::ffi::MR_C_PassBy, _other: *mut crate::ffi::MR_Bases_I) -> *mut crate::ffi::MR_Bases_I;
    pub fn MR_Bases_I_AssignFromAnother(_this: *mut crate::ffi::MR_Bases_I, _other_pass_by: crate::ffi::MR_C_PassBy, _other: *mut crate::ffi::MR_Bases_I) -> *mut crate::ffi::MR_Bases_I;
    pub fn MR_Bases_I_Destroy(_this: *const MR_Bases_I);
    pub fn MR_Bases_B_UpcastTo_MR_Bases_A(object: *const crate::ffi::MR_Bases_B) -> *const crate::ffi::MR_Bases_A;
    pub fn MR_Bases_B_MutableUpcastTo_MR_Bases_A(object: *mut crate::ffi::MR_Bases_B) -> *mut crate::ffi::MR_Bases_A;
    pub fn MR_Bases_B_StaticDowncastFrom_MR_Bases_A(object: *const crate::ffi::MR_Bases_A) -> *const crate::ffi::MR_Bases_B;
    pub fn MR_Bases_B_MutableStaticDowncastFrom_MR_Bases_A(object: *mut crate::ffi::MR_Bases_A) -> *mut crate::ffi::MR_Bases_B;
    pub fn MR_Bases_B2_UpcastTo_MR_Bases_A(object: *const crate::ffi::MR_Bases_B2) -> *const crate::ffi::MR_Bases_A;
    pub fn MR_Bases_B2_MutableUpcastTo_MR_Bases_A(object: *mut crate::ffi::MR_Bases_B2) -> *mut crate::ffi::MR_Bases_A;
    pub fn MR_Bases_B2_StaticDowncastFrom_MR_Bases_A(object: *const crate::ffi::MR_Bases_A) -> *const crate::ffi::MR_Bases_B2;
    pub fn MR_Bases_B2_MutableStaticDowncastFrom_MR_Bases_A(object: *mut crate::ffi::MR_Bases_A) -> *mut crate::ffi::MR_Bases_B2;
    pub fn MR_Bases_B2_UpcastTo_MR_Bases_B(object: *const crate::ffi::MR_Bases_B2) -> *const crate::ffi::MR_Bases_B;
    pub fn MR_Bases_B2_MutableUpcastTo_MR_Bases_B(object: *mut crate::ffi::MR_Bases_B2) -> *mut crate::ffi::MR_Bases_B;
    pub fn MR_Bases_B2_StaticDowncastFrom_MR_Bases_B(object: *const crate::ffi::MR_Bases_B) -> *const crate::ffi::MR_Bases_B2;
    pub fn MR_Bases_B2_MutableStaticDowncastFrom_MR_Bases_B(object: *mut crate::ffi::MR_Bases_B) -> *mut crate::ffi::MR_Bases_B2;
    pub fn MR_Bases_C_UpcastTo_MR_Bases_A(object: *const crate::ffi::MR_Bases_C) -> *const crate::ffi::MR_Bases_A;
    pub fn MR_Bases_C_MutableUpcastTo_MR_Bases_A(object: *mut crate::ffi::MR_Bases_C) -> *mut crate::ffi::MR_Bases_A;
    pub fn MR_Bases_C_StaticDowncastFrom_MR_Bases_A(object: *const crate::ffi::MR_Bases_A) -> *const crate::ffi::MR_Bases_C;
    pub fn MR_Bases_C_MutableStaticDowncastFrom_MR_Bases_A(object: *mut crate::ffi::MR_Bases_A) -> *mut crate::ffi::MR_Bases_C;
    pub fn MR_Bases_F_UpcastTo_MR_Bases_E(object: *const crate::ffi::MR_Bases_F) -> *const crate::ffi::MR_Bases_E;
    pub fn MR_Bases_F_MutableUpcastTo_MR_Bases_E(object: *mut crate::ffi::MR_Bases_F) -> *mut crate::ffi::MR_Bases_E;
    pub fn MR_Bases_F_StaticDowncastFrom_MR_Bases_E(object: *const crate::ffi::MR_Bases_E) -> *const crate::ffi::MR_Bases_F;
    pub fn MR_Bases_F_MutableStaticDowncastFrom_MR_Bases_E(object: *mut crate::ffi::MR_Bases_E) -> *mut crate::ffi::MR_Bases_F;
    pub fn MR_Bases_G_UpcastTo_MR_Bases_E(object: *const crate::ffi::MR_Bases_G) -> *const crate::ffi::MR_Bases_E;
    pub fn MR_Bases_G_MutableUpcastTo_MR_Bases_E(object: *mut crate::ffi::MR_Bases_G) -> *mut crate::ffi::MR_Bases_E;
    pub fn MR_Bases_G_UpcastTo_MR_Bases_F(object: *const crate::ffi::MR_Bases_G) -> *const crate::ffi::MR_Bases_F;
    pub fn MR_Bases_G_MutableUpcastTo_MR_Bases_F(object: *mut crate::ffi::MR_Bases_G) -> *mut crate::ffi::MR_Bases_F;
    pub fn MR_Bases_H_UpcastTo_MR_Bases_E(object: *const crate::ffi::MR_Bases_H) -> *const crate::ffi::MR_Bases_E;
    pub fn MR_Bases_H_MutableUpcastTo_MR_Bases_E(object: *mut crate::ffi::MR_Bases_H) -> *mut crate::ffi::MR_Bases_E;
    pub fn MR_Bases_H_UpcastTo_MR_Bases_F(object: *const crate::ffi::MR_Bases_H) -> *const crate::ffi::MR_Bases_F;
    pub fn MR_Bases_H_MutableUpcastTo_MR_Bases_F(object: *mut crate::ffi::MR_Bases_H) -> *mut crate::ffi::MR_Bases_F;
    pub fn MR_Bases_H_UpcastTo_MR_Bases_A(object: *const crate::ffi::MR_Bases_H) -> *const crate::ffi::MR_Bases_A;
    pub fn MR_Bases_H_MutableUpcastTo_MR_Bases_A(object: *mut crate::ffi::MR_Bases_H) -> *mut crate::ffi::MR_Bases_A;
    pub fn MR_Bases_H_StaticDowncastFrom_MR_Bases_A(object: *const crate::ffi::MR_Bases_A) -> *const crate::ffi::MR_Bases_H;
    pub fn MR_Bases_H_MutableStaticDowncastFrom_MR_Bases_A(object: *mut crate::ffi::MR_Bases_A) -> *mut crate::ffi::MR_Bases_H;
    pub fn MR_Bases_I_UpcastTo_MR_Bases_E(object: *const crate::ffi::MR_Bases_I) -> *const crate::ffi::MR_Bases_E;
    pub fn MR_Bases_I_MutableUpcastTo_MR_Bases_E(object: *mut crate::ffi::MR_Bases_I) -> *mut crate::ffi::MR_Bases_E;
    pub fn MR_Bases_I_UpcastTo_MR_Bases_F(object: *const crate::ffi::MR_Bases_I) -> *const crate::ffi::MR_Bases_F;
    pub fn MR_Bases_I_MutableUpcastTo_MR_Bases_F(object: *mut crate::ffi::MR_Bases_I) -> *mut crate::ffi::MR_Bases_F;
    pub fn MR_Bases_I_UpcastTo_MR_Bases_A(object: *const crate::ffi::MR_Bases_I) -> *const crate::ffi::MR_Bases_A;
    pub fn MR_Bases_I_MutableUpcastTo_MR_Bases_A(object: *mut crate::ffi::MR_Bases_I) -> *mut crate::ffi::MR_Bases_A;
}
