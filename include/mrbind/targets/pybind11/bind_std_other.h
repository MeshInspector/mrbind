#pragma once

#include <functional>

// Standard comparators.
template <typename T> struct MRBind::pb11::CustomTypeBinding<std::less<T>> : DefaultCustomTypeBinding<std::less<T>> {};
template <typename T> struct MRBind::pb11::CustomTypeBinding<std::greater<T>> : DefaultCustomTypeBinding<std::greater<T>> {};
