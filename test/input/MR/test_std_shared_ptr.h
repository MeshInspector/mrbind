#pragma once

#include <memory>

namespace MR::StdSharedPtr
{
    inline std::shared_ptr<int> GetInt() {return {};}
    inline void SetInt(std::shared_ptr<int>) {}
    inline void SetIntConstRef(const std::shared_ptr<int> &) {}
    inline void SetIntDefTrivial(std::shared_ptr<int> = {}) {}
    inline void SetIntDef(std::shared_ptr<int> = std::make_unique<int>(42)) {}

    inline void SetIntLvalueRef(std::shared_ptr<int> &) {}
    inline void SetIntLvalueConstRef(const std::shared_ptr<int> &) {}
    inline void SetIntRvalueRef(std::shared_ptr<int> &&) {}
    inline void SetIntRvalueConstRef(const std::shared_ptr<int> &&) {}

    inline std::shared_ptr<int[]> GetIntArr() {return {};}
    inline void SetIntArr(std::shared_ptr<int[]>) {}
    inline void SetIntArrDefTrivial(std::shared_ptr<int[]> = {}) {}
    inline void SetIntArrDef(std::shared_ptr<int[]> = std::make_unique<int[]>(42)) {}

    inline std::shared_ptr<int[42]> GetIntArr42() {return {};}
    inline void SetIntArr42(std::shared_ptr<int[42]>) {}
    inline void SetIntArr42DefTrivial(std::shared_ptr<int[42]> = {}) {}
    inline void SetIntArr42Def(std::shared_ptr<int[42]> = std::make_shared<int[42]>()) {}

    // Not testing `std::shared_ptr<int[42]>()` for now, because this is a rare variant.
    // While it does kinda work in the standard library, it doesn't have any custom support, and operates on the ugly `int (*)[42]` pointers.


    // Now with a class:

    struct A {};
    inline std::shared_ptr<A> GetClass() {return {};}
    inline void SetClass(std::shared_ptr<A>) {}
    inline void SetClassConstRef(const std::shared_ptr<A> &) {}
    inline void SetClassDefTrivial(std::shared_ptr<A> = {}) {}
    inline void SetClassDef(std::shared_ptr<A> = std::make_unique<A>(A{})) {}

    inline void SetClassLvalueRef(std::shared_ptr<A> &) {}
    inline void SetClassLvalueConstRef(const std::shared_ptr<A> &) {}
    inline void SetClassRvalueRef(std::shared_ptr<A> &&) {}
    inline void SetClassRvalueConstRef(const std::shared_ptr<A> &&) {}

    inline std::shared_ptr<A[]> GetClassArr() {return {};}
    inline void SetClassArr(std::shared_ptr<A[]>) {}
    inline void SetClassArrDefTrivial(std::shared_ptr<A[]> = {}) {}
    inline void SetClassArrDef(std::shared_ptr<A[]> = std::make_unique<A[]>(42)) {}

    inline std::shared_ptr<A[42]> GetClassArr42() {return {};}
    inline void SetClassArr42(std::shared_ptr<A[42]>) {}
    inline void SetClassArr42DefTrivial(std::shared_ptr<A[42]> = {}) {}
    inline void SetClassArr42Def(std::shared_ptr<A[42]> = std::make_shared<A[42]>()) {}


    // With constness:
    // Try const element types:
    inline std::shared_ptr<const int> GetConstInt() {return {};}
    inline std::shared_ptr<const int[]> GetConstIntArr() {return {};}
    inline std::shared_ptr<const int[42]> GetConstIntArr42() {return {};}
    inline std::shared_ptr<const A> GetConstClass() {return {};}
    inline std::shared_ptr<const A[]> GetConstClassArr() {return {};}
    inline std::shared_ptr<const A[42]> GetConstClassArr42() {return {};}
}
