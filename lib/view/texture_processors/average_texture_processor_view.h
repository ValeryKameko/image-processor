#ifndef IMAGEPROCESSOR_AVERAGE_TEXTURE_PROCESSOR_VIEW_H
#define IMAGEPROCESSOR_AVERAGE_TEXTURE_PROCESSOR_VIEW_H

#include <image_processor_model.h>

#include "texture_processor_view.h"

namespace image_processor::view::texture_processors {

class AverageTextureProcessorView final : public TextureProcessorView {
  public:
    explicit AverageTextureProcessorView(Factory& factory);

  protected:
    void RenderParameters() override;
    auto GetTitle() -> std::string override;
    auto CreateTextureProcessor() -> std::unique_ptr<TextureProcessor> override;

  private:
    int half_width_{0};
    int half_height_{0};
};

}  // namespace image_processor::view::texture_processors

#endif  // IMAGEPROCESSOR_AVERAGE_TEXTURE_PROCESSOR_VIEW_H
