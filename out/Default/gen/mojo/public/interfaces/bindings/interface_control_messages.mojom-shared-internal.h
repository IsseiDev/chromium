// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_SHARED_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_SHARED_INTERNAL_H_

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
namespace mojo {
namespace internal {
class RunMessageParams_Data;
class RunResponseMessageParams_Data;
class QueryVersion_Data;
class QueryVersionResult_Data;
class RunOrClosePipeMessageParams_Data;
class RequireVersion_Data;

#pragma pack(push, 1)
class RunMessageParams_Data {
 public:
  static RunMessageParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(RunMessageParams_Data))) RunMessageParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t reserved0;
  uint32_t reserved1;
  mojo::internal::Pointer<internal::QueryVersion_Data> query_version;

 private:
  RunMessageParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~RunMessageParams_Data() = delete;
};
static_assert(sizeof(RunMessageParams_Data) == 24,
              "Bad sizeof(RunMessageParams_Data)");
class RunResponseMessageParams_Data {
 public:
  static RunResponseMessageParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(RunResponseMessageParams_Data))) RunResponseMessageParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t reserved0;
  uint32_t reserved1;
  mojo::internal::Pointer<internal::QueryVersionResult_Data> query_version_result;

 private:
  RunResponseMessageParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~RunResponseMessageParams_Data() = delete;
};
static_assert(sizeof(RunResponseMessageParams_Data) == 24,
              "Bad sizeof(RunResponseMessageParams_Data)");
class QueryVersion_Data {
 public:
  static QueryVersion_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(QueryVersion_Data))) QueryVersion_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  QueryVersion_Data() : header_({sizeof(*this), 0}) {
  }
  ~QueryVersion_Data() = delete;
};
static_assert(sizeof(QueryVersion_Data) == 8,
              "Bad sizeof(QueryVersion_Data)");
class QueryVersionResult_Data {
 public:
  static QueryVersionResult_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(QueryVersionResult_Data))) QueryVersionResult_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t version;
  uint8_t padfinal_[4];

 private:
  QueryVersionResult_Data() : header_({sizeof(*this), 0}) {
  }
  ~QueryVersionResult_Data() = delete;
};
static_assert(sizeof(QueryVersionResult_Data) == 16,
              "Bad sizeof(QueryVersionResult_Data)");
class RunOrClosePipeMessageParams_Data {
 public:
  static RunOrClosePipeMessageParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(RunOrClosePipeMessageParams_Data))) RunOrClosePipeMessageParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t reserved0;
  uint32_t reserved1;
  mojo::internal::Pointer<internal::RequireVersion_Data> require_version;

 private:
  RunOrClosePipeMessageParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~RunOrClosePipeMessageParams_Data() = delete;
};
static_assert(sizeof(RunOrClosePipeMessageParams_Data) == 24,
              "Bad sizeof(RunOrClosePipeMessageParams_Data)");
class RequireVersion_Data {
 public:
  static RequireVersion_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(RequireVersion_Data))) RequireVersion_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t version;
  uint8_t padfinal_[4];

 private:
  RequireVersion_Data() : header_({sizeof(*this), 0}) {
  }
  ~RequireVersion_Data() = delete;
};
static_assert(sizeof(RequireVersion_Data) == 16,
              "Bad sizeof(RequireVersion_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_SHARED_INTERNAL_H_