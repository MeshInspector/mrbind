#pragma once

#include <array>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace MR::StdContainers
{
    inline void Set(std::vector<int>) {}
    inline void SetWithDefault(std::vector<int> = {1, 2, 3}) {}
    inline std::vector<int> Get() {return {};}

    inline void WriteToRef(std::vector<int> &) {}
    inline void WriteToPtr(std::vector<int> *) {}

    inline void ConstRef(const std::vector<int> &) {}
    inline void RvalueRef(std::vector<int> &&) {}
    inline void ConstRvalueRef(const std::vector<int> &&) {}

    // Just the list of other containers.
    inline std::deque<int> GetDeque() {return {};}
    inline std::list<int> GetList() {return {};}
    inline std::set<int> GetSet() {return {};}
    inline std::multiset<int> GetMultiSet() {return {};}
    inline std::unordered_set<int> GetUnorderedSet() {return {};}
    inline std::unordered_multiset<int> GetUnorderedMultiSet() {return {};}
    inline std::map<int, float> GetMap() {return {};}
    inline std::multimap<int, float> GetMultiMap() {return {};}
    inline std::unordered_map<int, float> GetUnorderedMap() {return {};}
    inline std::unordered_multimap<int, float> GetUnorderedMultiMap() {return {};}
    inline std::array<int, 42> GetStdArray() {return {};}

    // For this `std::multiset` specialization, mention all iterators so that they get merged.
    inline std::multiset<float> GetMultiSetWithMergedIters() {return {};}
    inline std::multiset<float>::iterator GetMergedIter() {return {};}
    inline std::multiset<float>::const_iterator GetMergedIterConst() {return {};}
}
