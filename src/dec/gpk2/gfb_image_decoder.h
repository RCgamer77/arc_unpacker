#pragma once

#include "dec/base_image_decoder.h"

namespace au {
namespace dec {
namespace gpk2 {

    class GfbImageDecoder final : public BaseImageDecoder
    {
    protected:
        bool is_recognized_impl(io::File &input_file) const override;
        res::Image decode_impl(
            const Logger &logger, io::File &input_file) const override;
    };

} } }
