// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHELL_PUBLIC_INTERFACES_CAPABILITIES_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_SHELL_PUBLIC_INTERFACES_CAPABILITIES_MOJOM_SHARED_INTERNAL_H_

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
namespace shell {
namespace mojom {
namespace internal {
class CapabilityRequest_Data;
class CapabilitySpec_Data;

#pragma pack(push, 1)
class CapabilityRequest_Data {
 public:
  static CapabilityRequest_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(CapabilityRequest_Data))) CapabilityRequest_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> classes;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> interfaces;

 private:
  CapabilityRequest_Data() : header_({sizeof(*this), 0}) {
  }
  ~CapabilityRequest_Data() = delete;
};
static_assert(sizeof(CapabilityRequest_Data) == 24,
              "Bad sizeof(CapabilityRequest_Data)");
class CapabilitySpec_Data {
 public:
  static CapabilitySpec_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(CapabilitySpec_Data))) CapabilitySpec_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>>>> provided;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<internal::CapabilityRequest_Data>>> required;

 private:
  CapabilitySpec_Data() : header_({sizeof(*this), 0}) {
  }
  ~CapabilitySpec_Data() = delete;
};
static_assert(sizeof(CapabilitySpec_Data) == 24,
              "Bad sizeof(CapabilitySpec_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace shell

#endif  // SERVICES_SHELL_PUBLIC_INTERFACES_CAPABILITIES_MOJOM_SHARED_INTERNAL_H_