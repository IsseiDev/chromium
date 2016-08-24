// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_EMBEDDED_WORKER_SETUP_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_SERVICE_WORKER_EMBEDDED_WORKER_SETUP_MOJOM_SHARED_INTERNAL_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/cpp/bindings/lib/native_struct_data.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/shell/public/interfaces/interface_provider.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace content {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
const uint32_t kEmbeddedWorkerSetup_ExchangeInterfaceProviders_Name = 0;
class EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params_Data {
 public:
  static EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params_Data))) EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t thread_id;
  mojo::internal::Handle_Data remote_interfaces;
  mojo::internal::Interface_Data local_interfaces;

 private:
  EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params_Data) == 24,
              "Bad sizeof(EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_EMBEDDED_WORKER_SETUP_MOJOM_SHARED_INTERNAL_H_