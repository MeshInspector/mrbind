#pragma once

#include <functional>
#include <map>
#include <set>
#include <utility>
#include <vector>

namespace mrbind
{
    // A simple `set`-like class that doesn't support erasing elements (except all at once), and keeps track of the original insertion order.
    template <typename T>
    class OrderedSet
    {
      public:
        using VecType = std::vector<T>;
        using SetType = std::set<T, std::less<>>;

      private:
        VecType vec;
        SetType set;

      public:
        OrderedSet() {}

        [[nodiscard]] const VecType &Vec() const {return vec;}
        [[nodiscard]] const SetType &Set() const {return set;}

        // Returns true if the element is new/
        template <typename TT = T>
        bool Insert(TT &&value)
        {
            auto ret = set.insert(std::forward<TT>(value));
            if (ret.second)
                vec.push_back(*ret.first);
            return ret.second;
        }
    };

    // A simple `map`-like class that doesn't support erasing elements (except all at once), and keeps track of the original insertion order of the keys.
    template <typename T, typename U>
    class OrderedMap
    {
      public:
        using VecType = std::vector<T>;
        using MapType = std::map<T, U, std::less<>>;

      private:
        VecType vec;
        MapType map;

      public:
        OrderedMap() {}

        [[nodiscard]] const VecType &Vec() const {return vec;}
        [[nodiscard]] const MapType &Map() const {return map;}

        // Returns a reference to the value, and whether the insertion was successful.
        template <typename TT = T, typename ...P>
        std::pair<U &, bool> TryEmplace(TT &&key, P &&... args)
        {
            auto ret = map.try_emplace(std::forward<TT>(key), std::forward<P>(args)...);
            if (ret.second)
                vec.push_back(ret.first->first);
            return {ret.first->second, ret.second};
        }
        // Insert an entire pair. This is used in container deserialization.
        template <typename Pair>
        bool Insert(Pair &&pair)
        {
            return TryEmplace(std::forward<Pair>(pair).first, std::forward<Pair>(pair).second).second;
        }

        [[nodiscard]] MapType::iterator FindMutable(const auto &key)
        {
            return map.find(key);
        }
    };
}
