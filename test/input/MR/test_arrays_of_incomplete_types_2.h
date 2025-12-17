#pragma once

namespace MR::IncompleteArrayElemType
{
    // Can't use an opaque struct as an array element, because, well, it's opaque. But a enum should work.
    enum class E {};

    void bar(E (*)[4]);
}
