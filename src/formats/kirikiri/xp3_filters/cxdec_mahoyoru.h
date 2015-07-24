#ifndef FORMATS_KIRIKIRI_XP3_FILTERS_MAHOYORU_H
#define FORMATS_KIRIKIRI_XP3_FILTERS_MAHOYORU_H
#include "formats/kirikiri/xp3_filter.h"

namespace Formats
{
    namespace Kirikiri
    {
        namespace Xp3Filters
        {
            class CxdecMahoYoru final : public Xp3Filter
            {
            public:
                virtual void decode(File &file, u32 key) const override;
            };
        }
    }
}

#endif