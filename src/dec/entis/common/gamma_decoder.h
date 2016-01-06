#pragma once

#include "dec/entis/common/base_decoder.h"
#include "io/ibit_reader.h"

namespace au {
namespace dec {
namespace entis {
namespace common {

    int get_gamma_code(io::IBitReader &bit_reader);

    class GammaDecoder final : public BaseDecoder
    {
    public:
        GammaDecoder();
        ~GammaDecoder();

        void reset() override;
        void decode(u8 *output, const size_t output_size) override;

    private:
        struct Priv;
        std::unique_ptr<Priv> p;
    };

} } } }
