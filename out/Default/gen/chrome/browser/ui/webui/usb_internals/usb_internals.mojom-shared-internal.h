// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_SHARED_INTERNAL_H_
#define CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_SHARED_INTERNAL_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/cpp/bindings/lib/native_struct_data.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "url/mojo/origin.mojom-shared-internal.h"
#include "url/mojo/url.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace mojom {
namespace internal {
class TestDeviceInfo_Data;

#pragma pack(push, 1)
class TestDeviceInfo_Data {
 public:
  static TestDeviceInfo_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(TestDeviceInfo_Data))) TestDeviceInfo_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> guid;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::String_Data> serial_number;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> landing_page;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> allowed_origin;

 private:
  TestDeviceInfo_Data() : header_({sizeof(*this), 0}) {
  }
  ~TestDeviceInfo_Data() = delete;
};
static_assert(sizeof(TestDeviceInfo_Data) == 48,
              "Bad sizeof(TestDeviceInfo_Data)");
const uint32_t kUsbInternalsPageHandler_AddDeviceForTesting_Name = 0;
class UsbInternalsPageHandler_AddDeviceForTesting_Params_Data {
 public:
  static UsbInternalsPageHandler_AddDeviceForTesting_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(UsbInternalsPageHandler_AddDeviceForTesting_Params_Data))) UsbInternalsPageHandler_AddDeviceForTesting_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::String_Data> serial_number;
  mojo::internal::Pointer<mojo::internal::String_Data> landing_page;
  mojo::internal::Pointer<mojo::internal::String_Data> allowed_origin;

 private:
  UsbInternalsPageHandler_AddDeviceForTesting_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~UsbInternalsPageHandler_AddDeviceForTesting_Params_Data() = delete;
};
static_assert(sizeof(UsbInternalsPageHandler_AddDeviceForTesting_Params_Data) == 40,
              "Bad sizeof(UsbInternalsPageHandler_AddDeviceForTesting_Params_Data)");
class UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data {
 public:
  static UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data))) UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> message;

 private:
  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data) == 24,
              "Bad sizeof(UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data)");
const uint32_t kUsbInternalsPageHandler_RemoveDeviceForTesting_Name = 1;
class UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data {
 public:
  static UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data))) UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> guid;

 private:
  UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data() = delete;
};
static_assert(sizeof(UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data) == 16,
              "Bad sizeof(UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data)");
class UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data {
 public:
  static UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data))) UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data) == 8,
              "Bad sizeof(UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data)");
const uint32_t kUsbInternalsPageHandler_GetTestDevices_Name = 2;
class UsbInternalsPageHandler_GetTestDevices_Params_Data {
 public:
  static UsbInternalsPageHandler_GetTestDevices_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(UsbInternalsPageHandler_GetTestDevices_Params_Data))) UsbInternalsPageHandler_GetTestDevices_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  UsbInternalsPageHandler_GetTestDevices_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~UsbInternalsPageHandler_GetTestDevices_Params_Data() = delete;
};
static_assert(sizeof(UsbInternalsPageHandler_GetTestDevices_Params_Data) == 8,
              "Bad sizeof(UsbInternalsPageHandler_GetTestDevices_Params_Data)");
class UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data {
 public:
  static UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data))) UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::TestDeviceInfo_Data>>> devices;

 private:
  UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data) == 16,
              "Bad sizeof(UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_SHARED_INTERNAL_H_