// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_SHELL_HANDLER_WIN_MOJOM_SHARED_INTERNAL_H_
#define CHROME_COMMON_SHELL_HANDLER_WIN_MOJOM_SHARED_INTERNAL_H_

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
namespace mojom {
namespace internal {

#pragma pack(push, 1)
const uint32_t kShellHandler_IsPinnedToTaskbar_Name = 0;
class ShellHandler_IsPinnedToTaskbar_Params_Data {
 public:
  static ShellHandler_IsPinnedToTaskbar_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(ShellHandler_IsPinnedToTaskbar_Params_Data))) ShellHandler_IsPinnedToTaskbar_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ShellHandler_IsPinnedToTaskbar_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~ShellHandler_IsPinnedToTaskbar_Params_Data() = delete;
};
static_assert(sizeof(ShellHandler_IsPinnedToTaskbar_Params_Data) == 8,
              "Bad sizeof(ShellHandler_IsPinnedToTaskbar_Params_Data)");
class ShellHandler_IsPinnedToTaskbar_ResponseParams_Data {
 public:
  static ShellHandler_IsPinnedToTaskbar_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(ShellHandler_IsPinnedToTaskbar_ResponseParams_Data))) ShellHandler_IsPinnedToTaskbar_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t succeeded : 1;
  uint8_t is_pinned_to_taskbar : 1;
  uint8_t padfinal_[7];

 private:
  ShellHandler_IsPinnedToTaskbar_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~ShellHandler_IsPinnedToTaskbar_ResponseParams_Data() = delete;
};
static_assert(sizeof(ShellHandler_IsPinnedToTaskbar_ResponseParams_Data) == 16,
              "Bad sizeof(ShellHandler_IsPinnedToTaskbar_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom

#endif  // CHROME_COMMON_SHELL_HANDLER_WIN_MOJOM_SHARED_INTERNAL_H_