// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SAFE_JSON_PUBLIC_INTERFACES_SAFE_JSON_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_SAFE_JSON_PUBLIC_INTERFACES_SAFE_JSON_MOJOM_SHARED_INTERNAL_H_

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
namespace safe_json {
namespace mojom {
namespace internal {
using ListValue_Data = mojo::internal::NativeStruct_Data;

#pragma pack(push, 1)
const uint32_t kSafeJsonParser_Parse_Name = 0;
class SafeJsonParser_Parse_Params_Data {
 public:
  static SafeJsonParser_Parse_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(SafeJsonParser_Parse_Params_Data))) SafeJsonParser_Parse_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> json;

 private:
  SafeJsonParser_Parse_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~SafeJsonParser_Parse_Params_Data() = delete;
};
static_assert(sizeof(SafeJsonParser_Parse_Params_Data) == 16,
              "Bad sizeof(SafeJsonParser_Parse_Params_Data)");
class SafeJsonParser_Parse_ResponseParams_Data {
 public:
  static SafeJsonParser_Parse_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(SafeJsonParser_Parse_ResponseParams_Data))) SafeJsonParser_Parse_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ListValue_Data> result;
  mojo::internal::Pointer<mojo::internal::String_Data> error;

 private:
  SafeJsonParser_Parse_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~SafeJsonParser_Parse_ResponseParams_Data() = delete;
};
static_assert(sizeof(SafeJsonParser_Parse_ResponseParams_Data) == 24,
              "Bad sizeof(SafeJsonParser_Parse_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace safe_json

#endif  // COMPONENTS_SAFE_JSON_PUBLIC_INTERFACES_SAFE_JSON_MOJOM_SHARED_INTERNAL_H_