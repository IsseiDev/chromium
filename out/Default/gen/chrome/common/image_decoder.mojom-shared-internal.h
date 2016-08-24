// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_IMAGE_DECODER_MOJOM_SHARED_INTERNAL_H_
#define CHROME_COMMON_IMAGE_DECODER_MOJOM_SHARED_INTERNAL_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/cpp/bindings/lib/native_struct_data.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "skia/public/interfaces/bitmap.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace mojom {
namespace internal {

struct ImageCodec_Data {
 public:
  static bool const kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
const uint32_t kImageDecoder_DecodeImage_Name = 0;
class ImageDecoder_DecodeImage_Params_Data {
 public:
  static ImageDecoder_DecodeImage_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(ImageDecoder_DecodeImage_Params_Data))) ImageDecoder_DecodeImage_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> encoded_data;
  int32_t codec;
  uint8_t shrink_to_fit : 1;
  uint8_t padfinal_[3];

 private:
  ImageDecoder_DecodeImage_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~ImageDecoder_DecodeImage_Params_Data() = delete;
};
static_assert(sizeof(ImageDecoder_DecodeImage_Params_Data) == 24,
              "Bad sizeof(ImageDecoder_DecodeImage_Params_Data)");
class ImageDecoder_DecodeImage_ResponseParams_Data {
 public:
  static ImageDecoder_DecodeImage_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(ImageDecoder_DecodeImage_ResponseParams_Data))) ImageDecoder_DecodeImage_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::skia::mojom::internal::Bitmap_Data> decoded_image;

 private:
  ImageDecoder_DecodeImage_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~ImageDecoder_DecodeImage_ResponseParams_Data() = delete;
};
static_assert(sizeof(ImageDecoder_DecodeImage_ResponseParams_Data) == 16,
              "Bad sizeof(ImageDecoder_DecodeImage_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom

#endif  // CHROME_COMMON_IMAGE_DECODER_MOJOM_SHARED_INTERNAL_H_