#include <vector>

struct C0
{
    struct CC0 {};
};

using C00 = C0;

namespace MR
{
    inline std::vector<int> v1() {return {1,2,3};}

    inline void f1() {}
    enum class E1 {e1};
    template <typename T>
    struct C1
    {
        struct CC1 {};
    };
    using C1_ = C1<int>;
    using U1 = int;

    template <typename T> T t1() {return {};}
    template int t1();
    template float t1();

    template <typename T> T t2() {return {};}
    template int t2();

    namespace N1
    {
        template <typename T> T t2() {return {};}
        template float t2();


        inline void f2() {}
        enum class E2 {e2};
        struct C2
        {
            struct CC2 {};
            friend void cc2(C2) {}
        };
        using U2 = int;

        namespace N2
        {
            inline void f3() {}
            enum class E3 {e3};
            struct C3 {};
            using U3 = int;
        }
    }
}

namespace MR
{
    inline void another() {}
}
