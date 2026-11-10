/// Generated from class `MR::StdContainers::A`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_StdContainers_A
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::StdContainers::NonAssignable`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_StdContainers_NonAssignable
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::StdContainers::NonDefaultConstructible`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_StdContainers_NonDefaultConstructible
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_StdContainers_Set(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_vector_int);
    pub fn MR_StdContainers_SetWithDefault(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_vector_int);
    pub fn MR_StdContainers_Get() -> *mut crate::ffi::MR_C_std_vector_int;
    pub fn MR_StdContainers_WriteToRef(_1: *mut crate::ffi::MR_C_std_vector_int);
    pub fn MR_StdContainers_WriteToPtr(_1: *mut crate::ffi::MR_C_std_vector_int);
    pub fn MR_StdContainers_ConstRef(_1: *const crate::ffi::MR_C_std_vector_int);
    pub fn MR_StdContainers_RvalueRef(_1: *mut crate::ffi::MR_C_std_vector_int);
    pub fn MR_StdContainers_ConstRvalueRef(_1: *const crate::ffi::MR_C_std_vector_int);
    pub fn MR_StdContainers_GetDeque() -> *mut crate::ffi::MR_C_std_deque_int;
    pub fn MR_StdContainers_GetList() -> *mut crate::ffi::MR_C_std_list_int;
    pub fn MR_StdContainers_GetSet() -> *mut crate::ffi::MR_C_std_set_int;
    pub fn MR_StdContainers_GetMultiSet() -> *mut crate::ffi::MR_C_std_multiset_int;
    pub fn MR_StdContainers_GetUnorderedSet() -> *mut crate::ffi::MR_C_std_unordered_set_int;
    pub fn MR_StdContainers_GetUnorderedMultiSet() -> *mut crate::ffi::MR_C_std_unordered_multiset_int;
    pub fn MR_StdContainers_GetMap() -> *mut crate::ffi::MR_C_std_map_int_float;
    pub fn MR_StdContainers_GetMultiMap() -> *mut crate::ffi::MR_C_std_multimap_int_float;
    pub fn MR_StdContainers_GetUnorderedMap() -> *mut crate::ffi::MR_C_std_unordered_map_int_float;
    pub fn MR_StdContainers_GetUnorderedMultiMap() -> *mut crate::ffi::MR_C_std_unordered_multimap_int_float;
    pub fn MR_StdContainers_GetStdArray() -> *mut crate::ffi::MR_C_std_array_MR_StdContainers_A_42;
    pub fn MR_StdContainers_GetStdArraySimple() -> crate::ffi::MR_C_std_array_int_43;
    pub fn MR_StdContainers_StdArraySimpleParam(_1: crate::ffi::MR_C_std_array_int_43);
    pub fn MR_StdContainers_StdArraySimplePtr(param: *mut crate::ffi::MR_C_std_array_int_43) -> *mut crate::ffi::MR_C_std_array_int_43;
    pub fn MR_StdContainers_GetMultiSetWithMergedIters() -> *mut crate::ffi::MR_C_std_multiset_float;
    pub fn MR_StdContainers_GetMergedIter() -> *mut crate::ffi::MR_C_std_set_float_const_iterator;
    pub fn MR_StdContainers_GetMergedIterConst() -> *mut crate::ffi::MR_C_std_set_float_const_iterator;
    pub fn MR_StdContainers_NonDefCon() -> *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible;
    pub fn MR_StdContainers_GetVectorNA() -> *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable;
    pub fn MR_StdContainers_GetDequeNA() -> *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable;
    pub fn MR_StdContainers_GetListNA() -> *mut crate::ffi::MR_C_std_list_MR_StdContainers_NonAssignable;
    pub fn MR_StdContainers_GetSetNA() -> *mut crate::ffi::MR_C_std_set_MR_StdContainers_NonAssignable;
    pub fn MR_StdContainers_GetMultiSetNA() -> *mut crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable;
    pub fn MR_StdContainers_GetUnorderedSetNA() -> *mut crate::ffi::MR_C_std_unordered_set_MR_StdContainers_NonAssignable;
    pub fn MR_StdContainers_GetUnorderedMultiSetNA() -> *mut crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable;
    pub fn MR_StdContainers_GetMapNA() -> *mut crate::ffi::MR_C_std_map_MR_StdContainers_NonAssignable_float;
    pub fn MR_StdContainers_GetMultiMapNA() -> *mut crate::ffi::MR_C_std_multimap_MR_StdContainers_NonAssignable_float;
    pub fn MR_StdContainers_GetUnorderedMapNA() -> *mut crate::ffi::MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float;
    pub fn MR_StdContainers_GetUnorderedMultiMapNA() -> *mut crate::ffi::MR_C_std_unordered_multimap_MR_StdContainers_NonAssignable_float;
    pub fn MR_StdContainers_GetStdArrayNA() -> *mut crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42;
    pub fn MR_StdContainers_GetStdArrayOfPlainArray() -> crate::ffi::MR_C_std_array_int_array_4_array_3_5;
    pub fn MR_StdContainers_A_DefaultConstruct() -> *mut crate::ffi::MR_StdContainers_A;
    pub fn MR_StdContainers_A_ConstructFromAnother(_other: *const crate::ffi::MR_StdContainers_A) -> *mut crate::ffi::MR_StdContainers_A;
    pub fn MR_StdContainers_A_AssignFromAnother(_this: *mut crate::ffi::MR_StdContainers_A, _other: *const crate::ffi::MR_StdContainers_A) -> *mut crate::ffi::MR_StdContainers_A;
    pub fn MR_StdContainers_A_Destroy(_this: *const MR_StdContainers_A);
    pub fn MR_StdContainers_NonAssignable_DefaultConstruct() -> *mut crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_StdContainers_NonAssignable_ConstructFromAnother(_other_pass_by: crate::ffi::MR_C_PassBy, _other: *mut crate::ffi::MR_StdContainers_NonAssignable) -> *mut crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_less_MR_StdContainers_NonAssignable(_this: *const crate::ffi::MR_StdContainers_NonAssignable, _1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_StdContainers_NonAssignable) -> bool;
    pub fn MR_C_equal_MR_StdContainers_NonAssignable(_this: *const crate::ffi::MR_StdContainers_NonAssignable, _1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_StdContainers_NonAssignable) -> bool;
    pub fn MR_StdContainers_NonAssignable_Destroy(_this: *const MR_StdContainers_NonAssignable);
    pub fn MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(_other: *const crate::ffi::MR_StdContainers_NonDefaultConstructible) -> *mut crate::ffi::MR_StdContainers_NonDefaultConstructible;
    pub fn MR_StdContainers_NonDefaultConstructible_Construct(_1: core::ffi::c_int) -> *mut crate::ffi::MR_StdContainers_NonDefaultConstructible;
    pub fn MR_StdContainers_NonDefaultConstructible_AssignFromAnother(_this: *mut crate::ffi::MR_StdContainers_NonDefaultConstructible, _other: *const crate::ffi::MR_StdContainers_NonDefaultConstructible) -> *mut crate::ffi::MR_StdContainers_NonDefaultConstructible;
    pub fn MR_StdContainers_NonDefaultConstructible_Destroy(_this: *const MR_StdContainers_NonDefaultConstructible);
}
