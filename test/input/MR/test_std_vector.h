#pragma once

#include <vector>

namespace MR::StdVector
{
    inline void Set(std::vector<int>) {}
    inline void SetWithDefault(std::vector<int> = {1, 2, 3}) {}
    inline std::vector<int> Get() {return {};}

    inline void WriteToRef(std::vector<int> &) {}
    inline void WriteToPtr(std::vector<int> *) {}

    inline void ConstRef(const std::vector<int> &) {}
    inline void RvalueRef(std::vector<int> &&) {}
    inline void ConstRvalueRef(const std::vector<int> &&) {}
}
