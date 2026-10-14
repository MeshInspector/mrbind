#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_Tags_foo_1_std_less_int32_t();
    pub fn MR_Tags_foo_1_std_less_void();
    pub fn MR_Tags_foo_1_std_greater_int32_t();
    pub fn MR_Tags_foo_1_std_greater_void();
    pub fn MR_Tags_foo_0();
}
