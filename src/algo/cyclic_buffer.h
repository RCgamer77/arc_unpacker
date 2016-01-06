#pragma once

#include <array>
#include <memory>

namespace au {
namespace algo {

    template<typename T, const size_t n> class CyclicBuffer final
    {
    public:
        CyclicBuffer(const size_t start_pos = 0) :
            start_pos(start_pos),
            current_pos(start_pos),
            written((start_pos % n) - n),
            a {0}
        {
        }

        constexpr size_t size() const
        {
            return n;
        }

        constexpr size_t start() const
        {
            return written < 0 ? start_pos : written % n;
        }

        constexpr size_t pos() const
        {
            return current_pos;
        }

        inline void operator <<(const T c)
        {
            a[current_pos++] = c;
            current_pos %= n;
            written++;
        }

        inline T &operator [](const size_t i)
        {
            if (i < n)
                return a[i];
            return a[i % n];
        }

        inline const T &operator [](const size_t i) const
        {
            if (i < n)
                return a[i];
            return a[i % n];
        }

    private:
        size_t start_pos;
        size_t current_pos;
        int written;
        std::array<T, n> a;
    };

} }
