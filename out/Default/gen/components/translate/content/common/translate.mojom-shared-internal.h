// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_SHARED_INTERNAL_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/cpp/bindings/lib/native_struct_data.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/common/common_custom_types.mojom-shared-internal.h"
#include "url/mojo/url.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace translate {
namespace mojom {
namespace internal {
class LanguageDetectionDetails_Data;

struct TranslateError_Data {
 public:
  static bool const kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
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
class LanguageDetectionDetails_Data {
 public:
  static LanguageDetectionDetails_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(LanguageDetectionDetails_Data))) LanguageDetectionDetails_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo::common::mojom::internal::Time_Data> time;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> content_language;
  mojo::internal::Pointer<mojo::internal::String_Data> cld_language;
  uint8_t is_cld_reliable : 1;
  uint8_t has_notranslate : 1;
  uint8_t pad5_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> html_root_language;
  mojo::internal::Pointer<mojo::internal::String_Data> adopted_language;
  mojo::internal::Pointer<mojo::internal::String_Data> contents;

 private:
  LanguageDetectionDetails_Data() : header_({sizeof(*this), 0}) {
  }
  ~LanguageDetectionDetails_Data() = delete;
};
static_assert(sizeof(LanguageDetectionDetails_Data) == 72,
              "Bad sizeof(LanguageDetectionDetails_Data)");
const uint32_t kPage_Translate_Name = 0;
class Page_Translate_Params_Data {
 public:
  static Page_Translate_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(Page_Translate_Params_Data))) Page_Translate_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> translate_script;
  mojo::internal::Pointer<mojo::internal::String_Data> source_lang;
  mojo::internal::Pointer<mojo::internal::String_Data> target_lang;

 private:
  Page_Translate_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~Page_Translate_Params_Data() = delete;
};
static_assert(sizeof(Page_Translate_Params_Data) == 32,
              "Bad sizeof(Page_Translate_Params_Data)");
class Page_Translate_ResponseParams_Data {
 public:
  static Page_Translate_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(Page_Translate_ResponseParams_Data))) Page_Translate_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t cancelled : 1;
  uint8_t pad0_[3];
  int32_t error;
  mojo::internal::Pointer<mojo::internal::String_Data> original_lang;
  mojo::internal::Pointer<mojo::internal::String_Data> translated_lang;

 private:
  Page_Translate_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~Page_Translate_ResponseParams_Data() = delete;
};
static_assert(sizeof(Page_Translate_ResponseParams_Data) == 32,
              "Bad sizeof(Page_Translate_ResponseParams_Data)");
const uint32_t kPage_RevertTranslation_Name = 1;
class Page_RevertTranslation_Params_Data {
 public:
  static Page_RevertTranslation_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(Page_RevertTranslation_Params_Data))) Page_RevertTranslation_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Page_RevertTranslation_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~Page_RevertTranslation_Params_Data() = delete;
};
static_assert(sizeof(Page_RevertTranslation_Params_Data) == 8,
              "Bad sizeof(Page_RevertTranslation_Params_Data)");
const uint32_t kContentTranslateDriver_RegisterPage_Name = 0;
class ContentTranslateDriver_RegisterPage_Params_Data {
 public:
  static ContentTranslateDriver_RegisterPage_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(ContentTranslateDriver_RegisterPage_Params_Data))) ContentTranslateDriver_RegisterPage_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data page;
  mojo::internal::Pointer<internal::LanguageDetectionDetails_Data> details;
  uint8_t page_needs_translation : 1;
  uint8_t padfinal_[7];

 private:
  ContentTranslateDriver_RegisterPage_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~ContentTranslateDriver_RegisterPage_Params_Data() = delete;
};
static_assert(sizeof(ContentTranslateDriver_RegisterPage_Params_Data) == 32,
              "Bad sizeof(ContentTranslateDriver_RegisterPage_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace translate

#endif  // COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_SHARED_INTERNAL_H_