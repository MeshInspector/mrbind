// A smoke test for the generated Java bindings. Needs the C bindings library `bleh` to be loadable, see `make_java.sh`.

import mrbind_test.CppException;
import mrbind_test.mr.A;
import mrbind_test.mr.cs.std_string;
import mrbind_test.mr.cs.std_function_MR_StdFunction_A;
import mrbind_test.mr.cs.std_function_int_from_int_int;
import mrbind_test.mr.cs.std_function_void;
import mrbind_test.mr.cs.std_function_void_from_MR_StdFunction_A;
import mrbind_test.mr.cs.std_vector_int;
import mrbind_test.mr.csharp.E1;
import mrbind_test.mr.csharp.ExposedLayout;

public class Main
{
    static void check(boolean condition, String what)
    {
        if (!condition)
            throw new AssertionError(what);
    }

    public static void main(String[] args)
    {
        // An opaque class with a `std::string` field.
        try (A a = new A())
        {
            check(a.x().toString().equals(""), "default x");
            a.setX("hello");
            check(a.x().toString().equals("hello"), "set x");
            A a2 = new A(a); // The copy constructor.
            a.x().assignFrom("changed");
            check(a.x().toString().equals("changed"), "assign through the reference");
            check(a2.x().toString().equals("hello"), "the copy is independent");
            check(a.isOwned() && !a.x().isOwned(), "ownership");
        }

        // Free functions, `std::string` parameters become `String`.
        mrbind_test.mr.stdstring.Functions.Set("from java");
        mrbind_test.mr.stdstring.Functions.SetWithDefault(null);
        std_string s = mrbind_test.mr.stdstring.Functions.Get();
        check(s.toString().equals("Hello!"), "get");
        std_string s2 = new std_string();
        mrbind_test.mr.stdstring.Functions.WriteToRef(s2);
        check(s2.toString().equals("Hello!"), "write to ref");
        mrbind_test.mr.stdstring.Functions.WriteToPtr(s2);

        // `std::vector<int>`.
        std_vector_int v = new std_vector_int();
        check(v.empty(), "empty");
        v.resize(3);
        check(v.size() == 3, "size");
        check(v.at(1) == 0, "at");
        check(v.front() == 0 && v.back() == 0, "front and back");
        v.push_back(7);
        check(v.at(3) == 7, "push_back");
        mrbind_test.mr.stdcontainers.Functions.Set(v);
        mrbind_test.mr.stdcontainers.Functions.ConstRef(v);
        std_vector_int v2 = mrbind_test.mr.stdcontainers.Functions.Get();
        check(v2.empty(), "get");
        std_vector_int v3 = new std_vector_int(v);
        check(v3.size() == 4, "copy");

        // Enums are classes with constants.
        check(mrbind_test.mr.csharp.Functions.test_enum(E1.a, null).equals(E1.b), "enum default");
        check(mrbind_test.mr.csharp.Functions.test_enum(E1.a, E1.a).equals(E1.a), "enum");
        check(E1.of(20) == E1.b, "enum of");

        // Exposed structs are views over native memory with the C++ layout.
        ExposedLayout ex = new ExposedLayout();
        ex.setX((short)1);
        ex.setY(2);
        ex.setZ(3);
        ex.setArr(2, 3);
        ex.setB(true);
        ex.setBa(1, 2, true);
        check(ex.x() == 1 && ex.y() == 2 && ex.z() == 3 && ex.arr(2) == 3 && ex.b() && ex.ba(1, 2) && !ex.ba(0, 0), "fields");
        ex.foo();
        ex.bar();
        ExposedLayout.blah();
        ExposedLayout ex2 = ex.copy();
        ex.setX((short)10);
        check(ex2.x() == 1, "struct copy");

        // A C++ exception becomes a `CppException`.
        boolean caught = false;
        try
        {
            new std_vector_int().at(100); // `std::vector::at()` throws `std::out_of_range`.
        }
        catch (CppException e)
        {
            caught = true;
        }
        check(caught, "exception");

        // `std::function` from a Java lambda. The copies of the `std::function` share it.
        int[] counter = {0};
        std_function_int_from_int_int f = std_function_int_from_int_int.of((x, y) -> {counter[0]++; return x + y;});
        check(f.has_value(), "has_value");
        check(f.call(2, 3) == 5, "call");
        std_function_int_from_int_int f2 = new std_function_int_from_int_int(f);
        check(f2.call(10, 20) == 30, "call the copy");
        check(counter[0] == 2, "shared lambda");
        mrbind_test.mr.stdfunction.Functions.foo(f);
        std_function_void e = new std_function_void();
        check(!e.has_value(), "empty");
        e.assignFn(() -> {});
        check(e.has_value(), "assigned");
        // Classes passed and returned by value.
        std_function_MR_StdFunction_A g = std_function_MR_StdFunction_A.of(() ->
        {
            mrbind_test.mr.stdfunction.A a = new mrbind_test.mr.stdfunction.A();
            a.setA("made in java");
            return a;
        });
        check(g.call().a().toString().equals("made in java"), "class returned by value");
        std_function_void_from_MR_StdFunction_A h = std_function_void_from_MR_StdFunction_A.of(a -> check(a.a().toString().equals("made in java"), "class passed by reference"));
        h.call(g.call());
        // An exception thrown by the lambda is rethrown by the wrapper that called into C.
        std_function_void bad = std_function_void.of(() -> {throw new IllegalStateException("from the lambda");});
        caught = false;
        try
        {
            bad.call();
        }
        catch (IllegalStateException error)
        {
            caught = error.getMessage().equals("from the lambda");
        }
        check(caught, "lambda exception");

        // Casts between a class and its bases.
        mrbind_test.mr.bases.B b = new mrbind_test.mr.bases.B();
        mrbind_test.mr.bases.A aBase = b.upcastToA();
        mrbind_test.mr.bases.B back = mrbind_test.mr.bases.B.staticDowncastFromA(aBase);
        check(back.rawPointer().address() == b.rawPointer().address(), "downcast gives the same object");
        check(!aBase.isOwned() && b.isOwned(), "the cast result is a reference");

        System.out.println("All Java binding tests passed.");

        // `expected<T, E>` returned by value is unwrapped: the value, or `UnexpectedResultException`.
        check(mrbind_test.mr.stdexpected.Functions.GetExp() == 0, "expected<int> unwrapped");
        mrbind_test.mr.stdexpected.Functions.GetExpVoid();
        check(new mrbind_test.mr.cs.std_expected_int_std_string().valueOrThrow() == 0, "valueOrThrow");
    }
}
