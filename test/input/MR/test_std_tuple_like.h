#pragma once

#include <tuple>
#include <utility>

namespace MR::StdTupleLike
{
    inline void SetPair(std::pair<int, float>) {}
    inline std::pair<int, float> GetPair() {return {};}
    inline std::pair<const int, float> GetPair2() {return {};}
    inline std::pair<int &, float &> GetPair3() {static int a; static float b; return {a, b};}
    inline std::pair<const int &, const float &> GetPair4() {static int a; static float b; return {a, b};}
    inline std::pair<int &&, float &&> GetPair5() {static int a; static float b; return {std::move(a), std::move(b)};}
    inline std::pair<const int &&, const float &&> GetPair6() {static int a; static float b; return {std::move(a), std::move(b)};}

    inline void SetTuple(std::tuple<int, float>) {}
    inline std::tuple<int, float> GetTuple() {return {};}
    inline std::tuple<const int, const float, int &, float &, const int &, const float &, int &&, float &&, const int &&, const float &&> GetTuple2() {static int a; static float b; return {a, b, a, b, a, b, std::move(a), std::move(b), std::move(a), std::move(b)};}

    inline std::tuple<> GetTuple7() {return {};}
    inline std::tuple<float, double, int, int> GetTuple8() {return {};}
}
