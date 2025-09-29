#pragma once

#include <vector>
#include <deque>
#include <list>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <array>

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
}
