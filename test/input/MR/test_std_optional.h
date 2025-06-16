#pragma once

#include <optional>
#include <string>

namespace MR::StdOptional
{
    inline std::optional<int> GetInt() {return {};}
    inline void SetInt(std::optional<int>) {}
    inline void SetIntDefTrivial(std::optional<int> = {}) {}
    inline void SetIntDef(std::optional<int> = 42) {}

    enum class E {e1};
    inline std::optional<E> GetEnum() {return {};}
    inline void SetEnum(std::optional<E>) {}
    inline void SetEnumDefTrivial(std::optional<E> = {}) {}
    inline void SetEnumDef(std::optional<E> = E::e1) {}

    struct A {int x;};
    inline std::optional<A> GetClass() {return {};}
    inline void SetClass(std::optional<A>) {}
    inline void SetClassDefTrivial(std::optional<A> = {}) {}
    inline void SetClassDef(std::optional<A> = A{42}) {}

    struct B {std::string s;};
    inline std::optional<B> GetClass2() {return {};}
    inline void SetClass2(std::optional<B>) {}
    inline void SetClass2DefTrivial(std::optional<B> = {}) {}
    inline void SetClass2Def(std::optional<B> = B{"blah"}) {}
}
