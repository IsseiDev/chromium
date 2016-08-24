// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_PASSWORD_MANAGER_CONTENT_PUBLIC_INTERFACES_CREDENTIAL_MANAGER_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_PASSWORD_MANAGER_CONTENT_PUBLIC_INTERFACES_CREDENTIAL_MANAGER_MOJOM_SHARED_INTERNAL_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/cpp/bindings/lib/native_struct_data.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "url/mojo/origin.mojom-shared-internal.h"
#include "url/mojo/url.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace password_manager {
namespace mojom {
namespace internal {
class CredentialInfo_Data;

struct CredentialType_Data {
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

struct CredentialManagerError_Data {
 public:
  static bool const kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
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
class CredentialInfo_Data {
 public:
  static CredentialInfo_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(CredentialInfo_Data))) CredentialInfo_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> id;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> icon;
  mojo::internal::Pointer<mojo::internal::String_Data> password;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> federation;

 private:
  CredentialInfo_Data() : header_({sizeof(*this), 0}) {
  }
  ~CredentialInfo_Data() = delete;
};
static_assert(sizeof(CredentialInfo_Data) == 56,
              "Bad sizeof(CredentialInfo_Data)");
const uint32_t kCredentialManager_Store_Name = 0;
class CredentialManager_Store_Params_Data {
 public:
  static CredentialManager_Store_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(CredentialManager_Store_Params_Data))) CredentialManager_Store_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CredentialInfo_Data> credential;

 private:
  CredentialManager_Store_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~CredentialManager_Store_Params_Data() = delete;
};
static_assert(sizeof(CredentialManager_Store_Params_Data) == 16,
              "Bad sizeof(CredentialManager_Store_Params_Data)");
class CredentialManager_Store_ResponseParams_Data {
 public:
  static CredentialManager_Store_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(CredentialManager_Store_ResponseParams_Data))) CredentialManager_Store_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CredentialManager_Store_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~CredentialManager_Store_ResponseParams_Data() = delete;
};
static_assert(sizeof(CredentialManager_Store_ResponseParams_Data) == 8,
              "Bad sizeof(CredentialManager_Store_ResponseParams_Data)");
const uint32_t kCredentialManager_RequireUserMediation_Name = 1;
class CredentialManager_RequireUserMediation_Params_Data {
 public:
  static CredentialManager_RequireUserMediation_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(CredentialManager_RequireUserMediation_Params_Data))) CredentialManager_RequireUserMediation_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CredentialManager_RequireUserMediation_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~CredentialManager_RequireUserMediation_Params_Data() = delete;
};
static_assert(sizeof(CredentialManager_RequireUserMediation_Params_Data) == 8,
              "Bad sizeof(CredentialManager_RequireUserMediation_Params_Data)");
class CredentialManager_RequireUserMediation_ResponseParams_Data {
 public:
  static CredentialManager_RequireUserMediation_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(CredentialManager_RequireUserMediation_ResponseParams_Data))) CredentialManager_RequireUserMediation_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CredentialManager_RequireUserMediation_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~CredentialManager_RequireUserMediation_ResponseParams_Data() = delete;
};
static_assert(sizeof(CredentialManager_RequireUserMediation_ResponseParams_Data) == 8,
              "Bad sizeof(CredentialManager_RequireUserMediation_ResponseParams_Data)");
const uint32_t kCredentialManager_Get_Name = 2;
class CredentialManager_Get_Params_Data {
 public:
  static CredentialManager_Get_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(CredentialManager_Get_Params_Data))) CredentialManager_Get_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t zero_click_only : 1;
  uint8_t include_passwords : 1;
  uint8_t pad1_[7];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::url::mojom::internal::Url_Data>>> federations;

 private:
  CredentialManager_Get_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~CredentialManager_Get_Params_Data() = delete;
};
static_assert(sizeof(CredentialManager_Get_Params_Data) == 24,
              "Bad sizeof(CredentialManager_Get_Params_Data)");
class CredentialManager_Get_ResponseParams_Data {
 public:
  static CredentialManager_Get_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(CredentialManager_Get_ResponseParams_Data))) CredentialManager_Get_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::CredentialInfo_Data> credential;

 private:
  CredentialManager_Get_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~CredentialManager_Get_ResponseParams_Data() = delete;
};
static_assert(sizeof(CredentialManager_Get_ResponseParams_Data) == 24,
              "Bad sizeof(CredentialManager_Get_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace password_manager

#endif  // COMPONENTS_PASSWORD_MANAGER_CONTENT_PUBLIC_INTERFACES_CREDENTIAL_MANAGER_MOJOM_SHARED_INTERNAL_H_