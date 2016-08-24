// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "components/translate/content/common/translate.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace translate {
namespace mojom {

namespace internal {


// static
bool LanguageDetectionDetails_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const LanguageDetectionDetails_Data* object = static_cast<const LanguageDetectionDetails_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 72 }};

  if (object->header_.version <=
          kVersionSizes[arraysize(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = arraysize(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[arraysize(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->time, "null time field in LanguageDetectionDetails",
          validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->time, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->url, "null url field in LanguageDetectionDetails",
          validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->content_language, "null content_language field in LanguageDetectionDetails",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams content_language_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->content_language, validation_context,
                                         &content_language_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->cld_language, "null cld_language field in LanguageDetectionDetails",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams cld_language_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->cld_language, validation_context,
                                         &cld_language_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->html_root_language, "null html_root_language field in LanguageDetectionDetails",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams html_root_language_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->html_root_language, validation_context,
                                         &html_root_language_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->adopted_language, "null adopted_language field in LanguageDetectionDetails",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams adopted_language_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->adopted_language, validation_context,
                                         &adopted_language_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->contents, "null contents field in LanguageDetectionDetails",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams contents_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->contents, validation_context,
                                         &contents_validate_params)) {
    return false;
  }

  return true;
}



// static
bool Page_Translate_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Page_Translate_Params_Data* object = static_cast<const Page_Translate_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

  if (object->header_.version <=
          kVersionSizes[arraysize(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = arraysize(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[arraysize(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->translate_script, "null translate_script field in Page_Translate_Params",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams translate_script_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->translate_script, validation_context,
                                         &translate_script_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->source_lang, "null source_lang field in Page_Translate_Params",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams source_lang_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->source_lang, validation_context,
                                         &source_lang_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->target_lang, "null target_lang field in Page_Translate_Params",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams target_lang_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->target_lang, validation_context,
                                         &target_lang_validate_params)) {
    return false;
  }

  return true;
}



// static
bool Page_Translate_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Page_Translate_ResponseParams_Data* object = static_cast<const Page_Translate_ResponseParams_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

  if (object->header_.version <=
          kVersionSizes[arraysize(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = arraysize(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[arraysize(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->original_lang, "null original_lang field in Page_Translate_ResponseParams",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams original_lang_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->original_lang, validation_context,
                                         &original_lang_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->translated_lang, "null translated_lang field in Page_Translate_ResponseParams",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams translated_lang_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->translated_lang, validation_context,
                                         &translated_lang_validate_params)) {
    return false;
  }


  if (!::translate::mojom::internal::TranslateError_Data
        ::Validate(object->error, validation_context))
    return false;

  return true;
}



// static
bool Page_RevertTranslation_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Page_RevertTranslation_Params_Data* object = static_cast<const Page_RevertTranslation_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

  if (object->header_.version <=
          kVersionSizes[arraysize(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = arraysize(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[arraysize(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  return true;
}



// static
bool ContentTranslateDriver_RegisterPage_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentTranslateDriver_RegisterPage_Params_Data* object = static_cast<const ContentTranslateDriver_RegisterPage_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

  if (object->header_.version <=
          kVersionSizes[arraysize(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = arraysize(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[arraysize(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->page,
          "invalid page field in ContentTranslateDriver_RegisterPage_Params", validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->page,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->details, "null details field in ContentTranslateDriver_RegisterPage_Params",
          validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->details, validation_context))
    return false;

  return true;
}


}  // namespace internal
}  // namespace mojom
}  // namespace translate

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
