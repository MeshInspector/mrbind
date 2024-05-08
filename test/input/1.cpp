int foo(int x, int y);

template <typename T> int tfoo(int x, int y) requires true;

namespace NS
{
    namespace X::Y
    {
        inline namespace Inl
        {
            namespace
            {
                struct A
                {
                    int a;
                };
            }
        }
    }
}

class B
{
    int b1;

  private:
    int b2 = 42;

  public:
    B() {}
    B(int, float) {}

    int blah() const {return b1;}
};
