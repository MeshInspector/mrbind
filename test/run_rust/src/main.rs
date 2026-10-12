// A smoke test for the generated Rust bindings. Needs the C bindings library `bleh` to be loadable at runtime.

use mrbind_test_bindings as b;
use b::mr;

fn main()
{
    // An opaque class with a `std::string` field.
    let mut a = mr::A::new();
    assert_eq!(a.x().to_str().unwrap(), "");
    a.set_x("hello");
    assert_eq!(a.x().to_str().unwrap(), "hello");
    let a2 = a.clone(); // `Owned<A>` is `Clone` because `MR::A` is copy-constructible.
    a.x_mut().assign_from("changed");
    assert_eq!(a.x().to_string(), "changed");
    assert_eq!(a2.x().to_string(), "hello");

    // Free functions, `std::string` parameters become `&str`.
    mr::std_string::set("from rust");
    mr::std_string::set_with_default(None);
    let s = mr::std_string::get();
    assert_eq!(s.to_str().unwrap(), "Hello!");
    let mut s2 = b::std_string::new();
    mr::std_string::write_to_ref(&mut s2);
    assert_eq!(s2.to_string(), "Hello!");
    mr::std_string::write_to_ptr(Some(&mut s2));

    // `std::vector<int>`.
    let mut v = b::std_vector_int::new();
    assert!(v.empty());
    v.resize(3);
    *v.at_mut(1) = 7;
    assert_eq!(*v.at(1), 7);
    assert_eq!(v.size(), 3);
    assert_eq!(v.front().copied(), Some(0));
    assert_eq!(v.back().copied(), Some(0));
    mr::std_containers::set(&v);
    mr::std_containers::const_ref(&v);
    let v2 = mr::std_containers::get();
    assert!(v2.empty());
    let v3 = v.clone();
    assert_eq!(v3.size(), 3);

    // Enums are newtypes with associated constants.
    use mr::c_sharp::E1;
    assert_eq!(mr::c_sharp::test_enum_mr_c_sharp_e1(E1::a, None), E1::b);
    assert_eq!(mr::c_sharp::test_enum_mr_c_sharp_e1(E1::a, Some(&E1::a)), E1::a);

    // Exposed structs have the same layout as in C++ and are used directly.
    let mut ex = mr::c_sharp::ExposedLayout {x: 1, y: 2, z: 3.0, arr: [1, 2, 3], b: true, ba: [[false; 5]; 4]};
    ex.foo();
    ex.bar();
    mr::c_sharp::ExposedLayout::blah();
    assert_eq!(ex.arr[2], 3);

    // A C++ exception becomes a panic.
    let result = std::panic::catch_unwind(||
    {
        let v = b::std_vector_int::new();
        let _ = v.at(100); // `std::vector::at()` throws `std::out_of_range`.
    });
    assert!(result.is_err());

    println!("All Rust binding tests passed.");
}
