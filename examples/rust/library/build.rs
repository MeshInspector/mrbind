// Points the linker to the C bindings library, if `EXAMPLE_LIB_DIR` is set.
fn main()
{
    println!("cargo:rerun-if-env-changed=EXAMPLE_LIB_DIR");
    if let Ok(dir) = std::env::var("EXAMPLE_LIB_DIR")
    {
        if !dir.is_empty()
        {
            println!("cargo:rustc-link-search=native={dir}");
        }
    }
}
