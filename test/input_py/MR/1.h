#pragma once

#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <array>

#include <deque>
#include <list>

#include <memory>

namespace MR
{
    inline std::vector            <int>        GetVector           () {return std::vector            <int>{};}
    inline std::set               <int>        GetSet              () {return std::set               <int>{};}
    inline std::multiset          <int>        GetMultiSet         () {return std::multiset          <int>{};}
    inline std::unordered_set     <int>        GetUnorderedSet     () {return std::unordered_set     <int>{};}
    inline std::unordered_multiset<int>        GetUnorderedMultiSet() {return std::unordered_multiset<int>{};}
    inline std::map               <int, float> GetMap              () {return std::map               <int, float>{};}
    inline std::multimap          <int, float> GetMultiMap         () {return std::multimap          <int, float>{};}
    inline std::unordered_map     <int, float> GetUnorderedMap     () {return std::unordered_map     <int, float>{};}
    inline std::unordered_multimap<int, float> GetUnorderedMultiMap() {return std::unordered_multimap<int, float>{};}
    inline std::array             <int, 42>    GetStdArray         () {return std::array             <int, 42>{};}

    // Those are missing still!
    // inline std::deque             <int>        GetDeque            () {return std::deque             <int>{};}
    // inline std::list              <int>        GetList             () {return std::list              <int>{};}

    // Pybind doesn't like shared pointers to built-in types.
    // inline std::shared_ptr<int> GetSharedPtrInt() {return std::make_shared<int>();}
    inline std::unique_ptr<int> GetUniquePtrInt() {return std::make_unique<int>();}
    // No weak pointers yet.
    // inline std::weak_ptr<int> GetWeakPtrInt() {return std::make_shared<int>();}

    struct A {};

    inline std::shared_ptr<A> GetSharedPtrClass() {return std::make_shared<A>();}
    inline std::unique_ptr<A> GetUniquePtrClass() {return std::make_unique<A>();}
    // No weak pointers yet.
    // inline std::weak_ptr<A> GetWeakPtrClass() {return std::make_shared<A>();}

    // Weak pointers in parameters disable the entire function.
    inline void PassUniquePtr(std::unique_ptr<A>) {}
    inline void PassUniquePtrLref(std::unique_ptr<A> &) {}
    inline void PassUniquePtrRref(std::unique_ptr<A> &&) {}

    struct B : virtual A {};

    struct C : B {};
}
