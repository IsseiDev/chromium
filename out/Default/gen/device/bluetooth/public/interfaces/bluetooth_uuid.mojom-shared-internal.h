// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_BLUETOOTH_PUBLIC_INTERFACES_BLUETOOTH_UUID_MOJOM_SHARED_INTERNAL_H_
#define DEVICE_BLUETOOTH_PUBLIC_INTERFACES_BLUETOOTH_UUID_MOJOM_SHARED_INTERNAL_H_

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
namespace device {
namespace mojom {
namespace internal {
class BluetoothUUID_Data;

#pragma pack(push, 1)
class BluetoothUUID_Data {
 public:
  static BluetoothUUID_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(BluetoothUUID_Data))) BluetoothUUID_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> uuid;

 private:
  BluetoothUUID_Data() : header_({sizeof(*this), 0}) {
  }
  ~BluetoothUUID_Data() = delete;
};
static_assert(sizeof(BluetoothUUID_Data) == 16,
              "Bad sizeof(BluetoothUUID_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_BLUETOOTH_PUBLIC_INTERFACES_BLUETOOTH_UUID_MOJOM_SHARED_INTERNAL_H_