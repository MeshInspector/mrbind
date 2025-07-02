#pragma once

// Libstdc++'s `<expected>` header checks `__cpp_concepts` and disables the class if the value is too small.
// This makes their `std::expected` unusable on Clang 18. Works on Clang 20 though.
#if __has_include(<expected>) && __cplusplus > 202002L && (!defined(_GLIBCXX_RELEASE) || __cpp_concepts >= 202002L)

#include <expected>
#include <string>

namespace MR::StdExpected
{
    inline std::expected<int, std::string> GetExp() {return {};}
    inline void SetExp(std::expected<int, std::string>) {}
    inline void SetExpConstRef(const std::expected<int, std::string> &) {}
    inline void SetExpDefTrivial(std::expected<int, std::string> = {}) {}
    inline void SetExpDef(std::expected<int, std::string> = 42) {}

    inline std::expected<void, float> GetExpVoid() {return {};}
    inline void SetExpVoid(std::expected<void, float>) {}
    inline void SetExpVoidConstRef(const std::expected<void, float> &) {}
    inline void SetExpVoidDefTrivial(std::expected<void, float> = {}) {}
    inline void SetExpVoidDef(std::expected<void, float> = std::expected<void, float>{}) {}
}

#endif
