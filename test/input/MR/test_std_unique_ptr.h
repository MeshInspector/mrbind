#pragma once

#include <memory>

namespace MR::StdUniquePtr
{
    inline std::unique_ptr<int> GetInt() {return {};}
    inline void SetInt(std::unique_ptr<int>) {}
    inline void SetIntConstRef(const std::unique_ptr<int> &) {}
    inline void SetIntDefTrivial(std::unique_ptr<int> = {}) {}
    inline void SetIntDef(std::unique_ptr<int> = std::make_unique<int>(42)) {}

    inline void SetIntLvalueRef(std::unique_ptr<int> &) {}
    inline void SetIntLvalueConstRef(const std::unique_ptr<int> &) {}
    inline void SetIntRvalueRef(std::unique_ptr<int> &&) {}
    inline void SetIntRvalueConstRef(const std::unique_ptr<int> &&) {}

    inline std::unique_ptr<int[]> GetIntArr() {return {};}
    inline void SetIntArr(std::unique_ptr<int[]>) {}
    inline void SetIntArrDefTrivial(std::unique_ptr<int[]> = {}) {}
    inline void SetIntArrDef(std::unique_ptr<int[]> = std::make_unique<int[]>(42)) {}

    // Not testing `std::unique_ptr<int[42]>()` for now, because this is a rare variant.
    // While it does kinda work in the standard library, it doesn't have any custom support, and operates on the ugly `int (*)[42]` pointers.


    // Now with a class:

    struct A {};
    inline std::unique_ptr<A> GetClass() {return {};}
    inline void SetClass(std::unique_ptr<A>) {}
    inline void SetClassConstRef(const std::unique_ptr<A> &) {}
    inline void SetClassDefTrivial(std::unique_ptr<A> = {}) {}
    inline void SetClassDef(std::unique_ptr<A> = std::make_unique<A>(A{})) {}

    inline void SetClassLvalueRef(std::unique_ptr<A> &) {}
    inline void SetClassLvalueConstRef(const std::unique_ptr<A> &) {}
    inline void SetClassRvalueRef(std::unique_ptr<A> &&) {}
    inline void SetClassRvalueConstRef(const std::unique_ptr<A> &&) {}

    inline std::unique_ptr<A[]> GetClassArr() {return {};}
    inline void SetClassArr(std::unique_ptr<A[]>) {}
    inline void SetClassArrDefTrivial(std::unique_ptr<A[]> = {}) {}
    inline void SetClassArrDef(std::unique_ptr<A[]> = std::make_unique<A[]>(42)) {}


    // Here `std::unique_ptr<float>` never gets emitted as an actual type (since we don't have non-null default arguments), so its header should not be emitted.
    inline std::unique_ptr<float> GetFloat() {return {};}
    inline void SetFloat(std::unique_ptr<float>) {}
    inline void SetFloatDefTrivial(std::unique_ptr<float> = {}) {}
}
