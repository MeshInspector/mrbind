#pragma once

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
