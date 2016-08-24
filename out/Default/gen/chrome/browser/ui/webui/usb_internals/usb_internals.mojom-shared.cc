// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "chrome/browser/ui/webui/usb_internals/usb_internals.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace mojom {

namespace internal {


// static
bool TestDeviceInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TestDeviceInfo_Data* object = static_cast<const TestDeviceInfo_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 48 }};

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
          object->guid, "null guid field in TestDeviceInfo",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams guid_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->guid, validation_context,
                                         &guid_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->name, "null name field in TestDeviceInfo",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->serial_number, "null serial_number field in TestDeviceInfo",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams serial_number_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->serial_number, validation_context,
                                         &serial_number_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->landing_page, "null landing_page field in TestDeviceInfo",
          validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->landing_page, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->allowed_origin, "null allowed_origin field in TestDeviceInfo",
          validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->allowed_origin, validation_context))
    return false;

  return true;
}



// static
bool UsbInternalsPageHandler_AddDeviceForTesting_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UsbInternalsPageHandler_AddDeviceForTesting_Params_Data* object = static_cast<const UsbInternalsPageHandler_AddDeviceForTesting_Params_Data*>(data);

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
          object->name, "null name field in UsbInternalsPageHandler_AddDeviceForTesting_Params",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->serial_number, "null serial_number field in UsbInternalsPageHandler_AddDeviceForTesting_Params",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams serial_number_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->serial_number, validation_context,
                                         &serial_number_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->landing_page, "null landing_page field in UsbInternalsPageHandler_AddDeviceForTesting_Params",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams landing_page_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->landing_page, validation_context,
                                         &landing_page_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->allowed_origin, "null allowed_origin field in UsbInternalsPageHandler_AddDeviceForTesting_Params",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams allowed_origin_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->allowed_origin, validation_context,
                                         &allowed_origin_validate_params)) {
    return false;
  }

  return true;
}



// static
bool UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data* object = static_cast<const UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data*>(data);

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
          object->message, "null message field in UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->message, validation_context,
                                         &message_validate_params)) {
    return false;
  }

  return true;
}



// static
bool UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data* object = static_cast<const UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data*>(data);

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
          object->guid, "null guid field in UsbInternalsPageHandler_RemoveDeviceForTesting_Params",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams guid_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->guid, validation_context,
                                         &guid_validate_params)) {
    return false;
  }

  return true;
}



// static
bool UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data* object = static_cast<const UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data*>(data);

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
bool UsbInternalsPageHandler_GetTestDevices_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UsbInternalsPageHandler_GetTestDevices_Params_Data* object = static_cast<const UsbInternalsPageHandler_GetTestDevices_Params_Data*>(data);

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
bool UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data* object = static_cast<const UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data*>(data);

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
          object->devices, "null devices field in UsbInternalsPageHandler_GetTestDevices_ResponseParams",
          validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams devices_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->devices, validation_context,
                                         &devices_validate_params)) {
    return false;
  }

  return true;
}


}  // namespace internal
}  // namespace mojom

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
