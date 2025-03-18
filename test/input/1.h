namespace MR
{
    inline int foo(int x, float, double z = {}) {}

    enum E
    {
        e1,
        // I'm e2!
        e2 = 42,
    };

    namespace
    {
        inline namespace I
        {
            struct A {};
        }
    }
}
