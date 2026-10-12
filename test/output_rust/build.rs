// Points the linker to the C bindings library, if `BLEH_LIB_DIR` is set.
fn main()
{
    println!("cargo:rerun-if-env-changed=BLEH_LIB_DIR");
    if let Ok(dir) = std::env::var("BLEH_LIB_DIR")
    {
        if !dir.is_empty()
        {
            println!("cargo:rustc-link-search=native={dir}");
        }
    }
}
