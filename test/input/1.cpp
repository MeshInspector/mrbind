#include <iostream>

template <typename T> int tfoo(int x, int y) requires true;

// Namespace comment.
namespace MR
{
    /// Namespace docstring.
    namespace X::Y
    {
        inline namespace Inl
        {
            namespace
            {
                /// Class A docstring
                struct A
                {
                    int a; ///< Member A docstring
                    float *b; // Member B comment.
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

    void private_func();

  public:
    B() {}
    B(int, float) {}

    int blah() const {return b1;}
};
