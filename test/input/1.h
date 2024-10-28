#include <functional>
#include <future>
#include <map>

#include <tl/expected.hpp>

namespace MR
{
    inline std::future<int> a() {return std::async(std::launch::async, []{std::this_thread::sleep_for(std::chrono::seconds(2)); return 42;});}
    inline std::shared_future<int> b() {return a();}

    inline std::vector<std::future<int>> c() {std::vector<std::future<int>> ret; ret.push_back(a()); return ret;}
    inline std::map<std::string, std::future<int>> d() {std::map<std::string, std::future<int>> ret; ret.try_emplace("foo", a()); return ret;}

    inline std::vector<std::future<tl::expected<int, std::string>>> e()
    {
        std::vector<std::future<tl::expected<int, std::string>>> ret;
        ret.push_back(std::async(std::launch::async, []{std::this_thread::sleep_for(std::chrono::seconds(2)); return tl::expected<int, std::string>(42);}));
        return ret;
    }
    inline std::vector<std::future<tl::expected<int, std::string>>> e2() // This version returns a `tl::expected` in an error state.
    {
        std::vector<std::future<tl::expected<int, std::string>>> ret;
        ret.push_back(std::async(std::launch::async, []{std::this_thread::sleep_for(std::chrono::seconds(2)); return tl::expected<int, std::string>(tl::unexpect, "Blah!");}));
        return ret;
    }

    inline tl::expected<int, std::string> foo() {return tl::expected<int, std::string>(tl::unexpect, "foo");}
}
