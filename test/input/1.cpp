int foo(int x, int y);

template <typename T> int tfoo(int x, int y) requires true;

/// This is the comment for namespace NS
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
                    float *b;
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
