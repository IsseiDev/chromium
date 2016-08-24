// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_CONTEXTUAL_SEARCH_COMMON_CONTEXTUAL_SEARCH_JS_API_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_CONTEXTUAL_SEARCH_COMMON_CONTEXTUAL_SEARCH_JS_API_SERVICE_MOJOM_SHARED_INTERNAL_H_

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
namespace contextual_search {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
const uint32_t kContextualSearchJsApiService_HandleSetCaption_Name = 0;
class ContextualSearchJsApiService_HandleSetCaption_Params_Data {
 public:
  static ContextualSearchJsApiService_HandleSetCaption_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(ContextualSearchJsApiService_HandleSetCaption_Params_Data))) ContextualSearchJsApiService_HandleSetCaption_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> message;
  uint8_t does_answer : 1;
  uint8_t padfinal_[7];

 private:
  ContextualSearchJsApiService_HandleSetCaption_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~ContextualSearchJsApiService_HandleSetCaption_Params_Data() = delete;
};
static_assert(sizeof(ContextualSearchJsApiService_HandleSetCaption_Params_Data) == 24,
              "Bad sizeof(ContextualSearchJsApiService_HandleSetCaption_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace contextual_search

#endif  // COMPONENTS_CONTEXTUAL_SEARCH_COMMON_CONTEXTUAL_SEARCH_JS_API_SERVICE_MOJOM_SHARED_INTERNAL_H_