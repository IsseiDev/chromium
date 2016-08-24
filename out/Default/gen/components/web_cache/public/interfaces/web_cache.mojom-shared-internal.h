// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_WEB_CACHE_PUBLIC_INTERFACES_WEB_CACHE_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_WEB_CACHE_PUBLIC_INTERFACES_WEB_CACHE_MOJOM_SHARED_INTERNAL_H_

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
namespace web_cache {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
const uint32_t kWebCache_SetCacheCapacities_Name = 0;
class WebCache_SetCacheCapacities_Params_Data {
 public:
  static WebCache_SetCacheCapacities_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(WebCache_SetCacheCapacities_Params_Data))) WebCache_SetCacheCapacities_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t min_dead_capacity;
  uint64_t max_dead_capacity;
  uint64_t capacity;

 private:
  WebCache_SetCacheCapacities_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~WebCache_SetCacheCapacities_Params_Data() = delete;
};
static_assert(sizeof(WebCache_SetCacheCapacities_Params_Data) == 32,
              "Bad sizeof(WebCache_SetCacheCapacities_Params_Data)");
const uint32_t kWebCache_ClearCache_Name = 1;
class WebCache_ClearCache_Params_Data {
 public:
  static WebCache_ClearCache_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(WebCache_ClearCache_Params_Data))) WebCache_ClearCache_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t on_navigation : 1;
  uint8_t padfinal_[7];

 private:
  WebCache_ClearCache_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~WebCache_ClearCache_Params_Data() = delete;
};
static_assert(sizeof(WebCache_ClearCache_Params_Data) == 16,
              "Bad sizeof(WebCache_ClearCache_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace web_cache

#endif  // COMPONENTS_WEB_CACHE_PUBLIC_INTERFACES_WEB_CACHE_MOJOM_SHARED_INTERNAL_H_