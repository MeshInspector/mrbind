
namespace MR
{
    enum class E
    {
        e1,
        e2,
        // I'm e3.
        e3
    };

    int foo() {return 42;}
    // Sums two numbers.
    int sum(int x, int y = 100) {return x + y;}

    class Vec2
    {
      public:
        float x = 0;
        float y = 0;

        Vec2() {}
        Vec2(float x, float y) : x(x), y(y) {}

        float sum() const {return x + y;}
    };
}
