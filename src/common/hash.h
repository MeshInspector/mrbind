#pragma once

#include <cstdint>
#include <string_view>

namespace mrbind
{
    // An implementation of MurmurHash3, adapted from `https://github.com/aappleby/smhasher/blob/master/src/MurmurHash3.cpp`.
    // This is just some random hashing function that's stable across compilers.
    [[nodiscard]] constexpr std::uint32_t Hash(std::string_view data, std::uint32_t seed = 0)
    {
        const std::size_t nblocks = data.size() / 4;

        std::uint32_t h1 = seed;

        constexpr std::uint32_t c1 = 0xcc9e2d51;
        constexpr std::uint32_t c2 = 0x1b873593;

        for (std::size_t i = 0; i < nblocks; i++)
        {
            std::uint32_t k1 = (std::uint32_t)(std::uint8_t)data[i*4+0] << 0
                             | (std::uint32_t)(std::uint8_t)data[i*4+1] << 8
                             | (std::uint32_t)(std::uint8_t)data[i*4+2] << 16
                             | (std::uint32_t)(std::uint8_t)data[i*4+3] << 24;

            k1 *= c1;
            k1 = (k1 << 15) | (k1 >> (32 - 15));
            k1 *= c2;

            h1 ^= k1;
            h1 = (h1 << 13) | (h1 >> (32 - 13));
            h1 = h1 * 5 + 0xe6546b64;
        }

        const char *tail = data.data() + nblocks * 4;

        std::uint32_t k1 = 0;

        switch (data.size() & 3)
        {
          case 3:
            k1 ^= (std::uint32_t)(std::uint8_t)tail[2] << 16;
            [[fallthrough]];
          case 2:
            k1 ^= (std::uint32_t)(std::uint8_t)tail[1] << 8;
            [[fallthrough]];
          case 1:
            k1 ^= (std::uint32_t)(std::uint8_t)tail[0];
            k1 *= c1;
            k1 = (k1 << 15) | (k1 >> (32 - 15));
            k1 *= c2; h1 ^= k1;
        };

        h1 ^= std::uint32_t(data.size());

        h1 ^= h1 >> 16;
        h1 *= 0x85ebca6b;
        h1 ^= h1 >> 13;
        h1 *= 0xc2b2ae35;
        h1 ^= h1 >> 16;
        return h1;
    }
}
