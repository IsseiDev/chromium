// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_IMAGE_CAPTURE_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_IMAGE_CAPTURE_MOJOM_SHARED_INTERNAL_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/cpp/bindings/lib/native_struct_data.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace media {
namespace mojom {
namespace internal {
class Range_Data;
class PhotoCapabilities_Data;
class Point2D_Data;
class PhotoSettings_Data;
class Blob_Data;

struct FocusMode_Data {
 public:
  static bool const kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
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
class Range_Data {
 public:
  static Range_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(Range_Data))) Range_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t max;
  uint32_t min;
  uint32_t current;
  uint8_t padfinal_[4];

 private:
  Range_Data() : header_({sizeof(*this), 0}) {
  }
  ~Range_Data() = delete;
};
static_assert(sizeof(Range_Data) == 24,
              "Bad sizeof(Range_Data)");
class PhotoCapabilities_Data {
 public:
  static PhotoCapabilities_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(PhotoCapabilities_Data))) PhotoCapabilities_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Range_Data> iso;
  mojo::internal::Pointer<internal::Range_Data> height;
  mojo::internal::Pointer<internal::Range_Data> width;
  mojo::internal::Pointer<internal::Range_Data> zoom;
  int32_t focus_mode;
  uint8_t padfinal_[4];

 private:
  PhotoCapabilities_Data() : header_({sizeof(*this), 0}) {
  }
  ~PhotoCapabilities_Data() = delete;
};
static_assert(sizeof(PhotoCapabilities_Data) == 48,
              "Bad sizeof(PhotoCapabilities_Data)");
class Point2D_Data {
 public:
  static Point2D_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(Point2D_Data))) Point2D_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float x;
  float y;

 private:
  Point2D_Data() : header_({sizeof(*this), 0}) {
  }
  ~Point2D_Data() = delete;
};
static_assert(sizeof(Point2D_Data) == 16,
              "Bad sizeof(Point2D_Data)");
class PhotoSettings_Data {
 public:
  static PhotoSettings_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(PhotoSettings_Data))) PhotoSettings_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t has_zoom : 1;
  uint8_t has_width : 1;
  uint8_t has_height : 1;
  uint8_t has_focus_mode : 1;
  uint8_t pad3_[3];
  uint32_t zoom;
  uint32_t width;
  uint32_t height;
  int32_t focus_mode;
  uint8_t pad7_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::Point2D_Data>>> points_of_interest;

 private:
  PhotoSettings_Data() : header_({sizeof(*this), 0}) {
  }
  ~PhotoSettings_Data() = delete;
};
static_assert(sizeof(PhotoSettings_Data) == 40,
              "Bad sizeof(PhotoSettings_Data)");
class Blob_Data {
 public:
  static Blob_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(Blob_Data))) Blob_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> mime_type;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  Blob_Data() : header_({sizeof(*this), 0}) {
  }
  ~Blob_Data() = delete;
};
static_assert(sizeof(Blob_Data) == 24,
              "Bad sizeof(Blob_Data)");
const uint32_t kImageCapture_GetCapabilities_Name = 0;
class ImageCapture_GetCapabilities_Params_Data {
 public:
  static ImageCapture_GetCapabilities_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(ImageCapture_GetCapabilities_Params_Data))) ImageCapture_GetCapabilities_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> source_id;

 private:
  ImageCapture_GetCapabilities_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~ImageCapture_GetCapabilities_Params_Data() = delete;
};
static_assert(sizeof(ImageCapture_GetCapabilities_Params_Data) == 16,
              "Bad sizeof(ImageCapture_GetCapabilities_Params_Data)");
class ImageCapture_GetCapabilities_ResponseParams_Data {
 public:
  static ImageCapture_GetCapabilities_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(ImageCapture_GetCapabilities_ResponseParams_Data))) ImageCapture_GetCapabilities_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PhotoCapabilities_Data> capabilities;

 private:
  ImageCapture_GetCapabilities_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~ImageCapture_GetCapabilities_ResponseParams_Data() = delete;
};
static_assert(sizeof(ImageCapture_GetCapabilities_ResponseParams_Data) == 16,
              "Bad sizeof(ImageCapture_GetCapabilities_ResponseParams_Data)");
const uint32_t kImageCapture_SetOptions_Name = 1;
class ImageCapture_SetOptions_Params_Data {
 public:
  static ImageCapture_SetOptions_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(ImageCapture_SetOptions_Params_Data))) ImageCapture_SetOptions_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> source_id;
  mojo::internal::Pointer<internal::PhotoSettings_Data> settings;

 private:
  ImageCapture_SetOptions_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~ImageCapture_SetOptions_Params_Data() = delete;
};
static_assert(sizeof(ImageCapture_SetOptions_Params_Data) == 24,
              "Bad sizeof(ImageCapture_SetOptions_Params_Data)");
class ImageCapture_SetOptions_ResponseParams_Data {
 public:
  static ImageCapture_SetOptions_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(ImageCapture_SetOptions_ResponseParams_Data))) ImageCapture_SetOptions_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  ImageCapture_SetOptions_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~ImageCapture_SetOptions_ResponseParams_Data() = delete;
};
static_assert(sizeof(ImageCapture_SetOptions_ResponseParams_Data) == 16,
              "Bad sizeof(ImageCapture_SetOptions_ResponseParams_Data)");
const uint32_t kImageCapture_TakePhoto_Name = 2;
class ImageCapture_TakePhoto_Params_Data {
 public:
  static ImageCapture_TakePhoto_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(ImageCapture_TakePhoto_Params_Data))) ImageCapture_TakePhoto_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> source_id;

 private:
  ImageCapture_TakePhoto_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~ImageCapture_TakePhoto_Params_Data() = delete;
};
static_assert(sizeof(ImageCapture_TakePhoto_Params_Data) == 16,
              "Bad sizeof(ImageCapture_TakePhoto_Params_Data)");
class ImageCapture_TakePhoto_ResponseParams_Data {
 public:
  static ImageCapture_TakePhoto_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(ImageCapture_TakePhoto_ResponseParams_Data))) ImageCapture_TakePhoto_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Blob_Data> blob;

 private:
  ImageCapture_TakePhoto_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~ImageCapture_TakePhoto_ResponseParams_Data() = delete;
};
static_assert(sizeof(ImageCapture_TakePhoto_ResponseParams_Data) == 16,
              "Bad sizeof(ImageCapture_TakePhoto_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_IMAGE_CAPTURE_MOJOM_SHARED_INTERNAL_H_