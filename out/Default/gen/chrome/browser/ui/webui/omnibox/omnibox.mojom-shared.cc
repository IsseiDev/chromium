// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "chrome/browser/ui/webui/omnibox/omnibox.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace mojom {

namespace internal {


// static
bool AutocompleteAdditionalInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AutocompleteAdditionalInfo_Data* object = static_cast<const AutocompleteAdditionalInfo_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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
          object->key, "null key field in AutocompleteAdditionalInfo",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key, validation_context,
                                         &key_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->value, "null value field in AutocompleteAdditionalInfo",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->value, validation_context,
                                         &value_validate_params)) {
    return false;
  }

  return true;
}



// static
bool AutocompleteMatch_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AutocompleteMatch_Data* object = static_cast<const AutocompleteMatch_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 104 }};

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

  const mojo::internal::ContainerValidateParams provider_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->provider_name, validation_context,
                                         &provider_name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->fill_into_edit, "null fill_into_edit field in AutocompleteMatch",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams fill_into_edit_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->fill_into_edit, validation_context,
                                         &fill_into_edit_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->inline_autocompletion, "null inline_autocompletion field in AutocompleteMatch",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams inline_autocompletion_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->inline_autocompletion, validation_context,
                                         &inline_autocompletion_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->destination_url, "null destination_url field in AutocompleteMatch",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams destination_url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->destination_url, validation_context,
                                         &destination_url_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->contents, "null contents field in AutocompleteMatch",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams contents_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->contents, validation_context,
                                         &contents_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->description, "null description field in AutocompleteMatch",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams description_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->description, validation_context,
                                         &description_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->type, "null type field in AutocompleteMatch",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams type_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->type, validation_context,
                                         &type_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams associated_keyword_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->associated_keyword, validation_context,
                                         &associated_keyword_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->keyword, "null keyword field in AutocompleteMatch",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams keyword_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->keyword, validation_context,
                                         &keyword_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->additional_info, "null additional_info field in AutocompleteMatch",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams additional_info_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->additional_info, validation_context,
                                         &additional_info_validate_params)) {
    return false;
  }

  return true;
}



// static
bool AutocompleteResultsForProvider_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AutocompleteResultsForProvider_Data* object = static_cast<const AutocompleteResultsForProvider_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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
          object->provider_name, "null provider_name field in AutocompleteResultsForProvider",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams provider_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->provider_name, validation_context,
                                         &provider_name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->results, "null results field in AutocompleteResultsForProvider",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams results_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->results, validation_context,
                                         &results_validate_params)) {
    return false;
  }

  return true;
}



// static
bool OmniboxResult_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const OmniboxResult_Data* object = static_cast<const OmniboxResult_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 40 }};

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
          object->host, "null host field in OmniboxResult",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams host_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->host, validation_context,
                                         &host_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->combined_results, "null combined_results field in OmniboxResult",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams combined_results_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->combined_results, validation_context,
                                         &combined_results_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->results_by_provider, "null results_by_provider field in OmniboxResult",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams results_by_provider_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->results_by_provider, validation_context,
                                         &results_by_provider_validate_params)) {
    return false;
  }

  return true;
}



// static
bool OmniboxPageHandler_SetClientPage_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const OmniboxPageHandler_SetClientPage_Params_Data* object = static_cast<const OmniboxPageHandler_SetClientPage_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

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
          "invalid page field in OmniboxPageHandler_SetClientPage_Params", validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->page,
                                                 validation_context)) {
    return false;
  }

  return true;
}



// static
bool OmniboxPageHandler_StartOmniboxQuery_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const OmniboxPageHandler_StartOmniboxQuery_Params_Data* object = static_cast<const OmniboxPageHandler_StartOmniboxQuery_Params_Data*>(data);

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
          object->input_string, "null input_string field in OmniboxPageHandler_StartOmniboxQuery_Params",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams input_string_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->input_string, validation_context,
                                         &input_string_validate_params)) {
    return false;
  }

  return true;
}



// static
bool OmniboxPage_HandleNewAutocompleteResult_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const OmniboxPage_HandleNewAutocompleteResult_Params_Data* object = static_cast<const OmniboxPage_HandleNewAutocompleteResult_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

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
          object->result, "null result field in OmniboxPage_HandleNewAutocompleteResult_Params",
          validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, validation_context))
    return false;

  return true;
}


}  // namespace internal
}  // namespace mojom

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
