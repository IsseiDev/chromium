// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_JAVASCRIPT_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_JAVASCRIPT_SERVICE_MOJOM_SHARED_INTERNAL_H_

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
namespace dom_distiller {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
const uint32_t kDistillerJavaScriptService_HandleDistillerEchoCall_Name = 0;
class DistillerJavaScriptService_HandleDistillerEchoCall_Params_Data {
 public:
  static DistillerJavaScriptService_HandleDistillerEchoCall_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(DistillerJavaScriptService_HandleDistillerEchoCall_Params_Data))) DistillerJavaScriptService_HandleDistillerEchoCall_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> message;

 private:
  DistillerJavaScriptService_HandleDistillerEchoCall_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~DistillerJavaScriptService_HandleDistillerEchoCall_Params_Data() = delete;
};
static_assert(sizeof(DistillerJavaScriptService_HandleDistillerEchoCall_Params_Data) == 16,
              "Bad sizeof(DistillerJavaScriptService_HandleDistillerEchoCall_Params_Data)");
const uint32_t kDistillerJavaScriptService_HandleDistillerFeedbackCall_Name = 1;
class DistillerJavaScriptService_HandleDistillerFeedbackCall_Params_Data {
 public:
  static DistillerJavaScriptService_HandleDistillerFeedbackCall_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(DistillerJavaScriptService_HandleDistillerFeedbackCall_Params_Data))) DistillerJavaScriptService_HandleDistillerFeedbackCall_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t good : 1;
  uint8_t padfinal_[7];

 private:
  DistillerJavaScriptService_HandleDistillerFeedbackCall_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~DistillerJavaScriptService_HandleDistillerFeedbackCall_Params_Data() = delete;
};
static_assert(sizeof(DistillerJavaScriptService_HandleDistillerFeedbackCall_Params_Data) == 16,
              "Bad sizeof(DistillerJavaScriptService_HandleDistillerFeedbackCall_Params_Data)");
const uint32_t kDistillerJavaScriptService_HandleDistillerClosePanelCall_Name = 2;
class DistillerJavaScriptService_HandleDistillerClosePanelCall_Params_Data {
 public:
  static DistillerJavaScriptService_HandleDistillerClosePanelCall_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(DistillerJavaScriptService_HandleDistillerClosePanelCall_Params_Data))) DistillerJavaScriptService_HandleDistillerClosePanelCall_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t animate : 1;
  uint8_t padfinal_[7];

 private:
  DistillerJavaScriptService_HandleDistillerClosePanelCall_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~DistillerJavaScriptService_HandleDistillerClosePanelCall_Params_Data() = delete;
};
static_assert(sizeof(DistillerJavaScriptService_HandleDistillerClosePanelCall_Params_Data) == 16,
              "Bad sizeof(DistillerJavaScriptService_HandleDistillerClosePanelCall_Params_Data)");
const uint32_t kDistillerJavaScriptService_HandleDistillerOpenSettingsCall_Name = 3;
class DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data {
 public:
  static DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data))) DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data() = delete;
};
static_assert(sizeof(DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data) == 8,
              "Bad sizeof(DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace dom_distiller

#endif  // COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_JAVASCRIPT_SERVICE_MOJOM_SHARED_INTERNAL_H_