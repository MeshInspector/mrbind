#include <iostream>

template <typename T> int tfoo(int x, int y) requires true;


// Namespace comment.
namespace MR
{
    int FreeFunc();
    // Comment!
    void FreeFunc2(int x, float y = 42);

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
                    double c;

                    struct SubA
                    {

                    };

                    struct
                    {
                        int x;
                    };
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

    B(int private_ctor);

  public:
    B() {}
    B(int, float) {}

    // Comment!
    int blah() const {return b1;}
    void bleh(int x, float y = 12.3f + 1) {}
};
