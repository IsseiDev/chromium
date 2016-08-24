// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHELL_PUBLIC_INTERFACES_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_SHELL_PUBLIC_INTERFACES_SERVICE_MOJOM_SHARED_INTERNAL_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/cpp/bindings/lib/native_struct_data.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/shell/public/interfaces/capabilities.mojom-shared-internal.h"
#include "services/shell/public/interfaces/connector.mojom-shared-internal.h"
#include "services/shell/public/interfaces/interface_provider.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace shell {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
const uint32_t kService_OnStart_Name = 0;
class Service_OnStart_Params_Data {
 public:
  static Service_OnStart_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(Service_OnStart_Params_Data))) Service_OnStart_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::shell::mojom::internal::Identity_Data> identity;

 private:
  Service_OnStart_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~Service_OnStart_Params_Data() = delete;
};
static_assert(sizeof(Service_OnStart_Params_Data) == 16,
              "Bad sizeof(Service_OnStart_Params_Data)");
class Service_OnStart_ResponseParams_Data {
 public:
  static Service_OnStart_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(Service_OnStart_ResponseParams_Data))) Service_OnStart_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data connector_request;
  uint8_t padfinal_[4];

 private:
  Service_OnStart_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~Service_OnStart_ResponseParams_Data() = delete;
};
static_assert(sizeof(Service_OnStart_ResponseParams_Data) == 16,
              "Bad sizeof(Service_OnStart_ResponseParams_Data)");
const uint32_t kService_OnConnect_Name = 1;
class Service_OnConnect_Params_Data {
 public:
  static Service_OnConnect_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(Service_OnConnect_Params_Data))) Service_OnConnect_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::shell::mojom::internal::Identity_Data> source;
  mojo::internal::Handle_Data interfaces;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::shell::mojom::internal::CapabilityRequest_Data> allowed_capabilities;

 private:
  Service_OnConnect_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~Service_OnConnect_Params_Data() = delete;
};
static_assert(sizeof(Service_OnConnect_Params_Data) == 32,
              "Bad sizeof(Service_OnConnect_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace shell

#endif  // SERVICES_SHELL_PUBLIC_INTERFACES_SERVICE_MOJOM_SHARED_INTERNAL_H_