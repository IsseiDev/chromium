// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_ACCELERATOR_REGISTRAR_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_UI_PUBLIC_INTERFACES_ACCELERATOR_REGISTRAR_MOJOM_SHARED_INTERNAL_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/cpp/bindings/lib/native_struct_data.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/ui/public/interfaces/event_matcher.mojom-shared-internal.h"
#include "ui/events/mojo/event.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace ui {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
const uint32_t kAcceleratorHandler_OnAccelerator_Name = 0;
class AcceleratorHandler_OnAccelerator_Params_Data {
 public:
  static AcceleratorHandler_OnAccelerator_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(AcceleratorHandler_OnAccelerator_Params_Data))) AcceleratorHandler_OnAccelerator_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::ui::mojom::internal::Event_Data> event;

 private:
  AcceleratorHandler_OnAccelerator_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~AcceleratorHandler_OnAccelerator_Params_Data() = delete;
};
static_assert(sizeof(AcceleratorHandler_OnAccelerator_Params_Data) == 24,
              "Bad sizeof(AcceleratorHandler_OnAccelerator_Params_Data)");
const uint32_t kAcceleratorRegistrar_SetHandler_Name = 0;
class AcceleratorRegistrar_SetHandler_Params_Data {
 public:
  static AcceleratorRegistrar_SetHandler_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(AcceleratorRegistrar_SetHandler_Params_Data))) AcceleratorRegistrar_SetHandler_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data handler;

 private:
  AcceleratorRegistrar_SetHandler_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~AcceleratorRegistrar_SetHandler_Params_Data() = delete;
};
static_assert(sizeof(AcceleratorRegistrar_SetHandler_Params_Data) == 16,
              "Bad sizeof(AcceleratorRegistrar_SetHandler_Params_Data)");
const uint32_t kAcceleratorRegistrar_AddAccelerator_Name = 1;
class AcceleratorRegistrar_AddAccelerator_Params_Data {
 public:
  static AcceleratorRegistrar_AddAccelerator_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(AcceleratorRegistrar_AddAccelerator_Params_Data))) AcceleratorRegistrar_AddAccelerator_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::ui::mojom::internal::EventMatcher_Data> matcher;

 private:
  AcceleratorRegistrar_AddAccelerator_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~AcceleratorRegistrar_AddAccelerator_Params_Data() = delete;
};
static_assert(sizeof(AcceleratorRegistrar_AddAccelerator_Params_Data) == 24,
              "Bad sizeof(AcceleratorRegistrar_AddAccelerator_Params_Data)");
class AcceleratorRegistrar_AddAccelerator_ResponseParams_Data {
 public:
  static AcceleratorRegistrar_AddAccelerator_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(AcceleratorRegistrar_AddAccelerator_ResponseParams_Data))) AcceleratorRegistrar_AddAccelerator_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  AcceleratorRegistrar_AddAccelerator_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~AcceleratorRegistrar_AddAccelerator_ResponseParams_Data() = delete;
};
static_assert(sizeof(AcceleratorRegistrar_AddAccelerator_ResponseParams_Data) == 16,
              "Bad sizeof(AcceleratorRegistrar_AddAccelerator_ResponseParams_Data)");
const uint32_t kAcceleratorRegistrar_RemoveAccelerator_Name = 2;
class AcceleratorRegistrar_RemoveAccelerator_Params_Data {
 public:
  static AcceleratorRegistrar_RemoveAccelerator_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(AcceleratorRegistrar_RemoveAccelerator_Params_Data))) AcceleratorRegistrar_RemoveAccelerator_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t id;
  uint8_t padfinal_[4];

 private:
  AcceleratorRegistrar_RemoveAccelerator_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~AcceleratorRegistrar_RemoveAccelerator_Params_Data() = delete;
};
static_assert(sizeof(AcceleratorRegistrar_RemoveAccelerator_Params_Data) == 16,
              "Bad sizeof(AcceleratorRegistrar_RemoveAccelerator_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_ACCELERATOR_REGISTRAR_MOJOM_SHARED_INTERNAL_H_