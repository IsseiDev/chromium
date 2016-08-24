// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_URL_LOADER_FACTORY_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_URL_LOADER_FACTORY_MOJOM_SHARED_INTERNAL_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/cpp/bindings/lib/native_struct_data.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "content/common/url_loader.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace content {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
const uint32_t kURLLoaderFactory_CreateLoaderAndStart_Name = 0;
class URLLoaderFactory_CreateLoaderAndStart_Params_Data {
 public:
  static URLLoaderFactory_CreateLoaderAndStart_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(URLLoaderFactory_CreateLoaderAndStart_Params_Data))) URLLoaderFactory_CreateLoaderAndStart_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data loader;
  int32_t request_id;
  mojo::internal::Pointer<::content::mojom::internal::URLRequest_Data> request;
  mojo::internal::Interface_Data client;

 private:
  URLLoaderFactory_CreateLoaderAndStart_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~URLLoaderFactory_CreateLoaderAndStart_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderFactory_CreateLoaderAndStart_Params_Data) == 32,
              "Bad sizeof(URLLoaderFactory_CreateLoaderAndStart_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_URL_LOADER_FACTORY_MOJOM_SHARED_INTERNAL_H_