// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_SHARED_INTERNAL_H_
#define CHROME_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_SHARED_INTERNAL_H_

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
class ResourceTypeStat_Data;
class ResourceTypeStats_Data;
class ResourceUsageData_Data;

#pragma pack(push, 1)
class ResourceTypeStat_Data {
 public:
  static ResourceTypeStat_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(ResourceTypeStat_Data))) ResourceTypeStat_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t count;
  uint64_t size;
  uint64_t live_size;
  uint64_t decoded_size;

 private:
  ResourceTypeStat_Data() : header_({sizeof(*this), 0}) {
  }
  ~ResourceTypeStat_Data() = delete;
};
static_assert(sizeof(ResourceTypeStat_Data) == 40,
              "Bad sizeof(ResourceTypeStat_Data)");
class ResourceTypeStats_Data {
 public:
  static ResourceTypeStats_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(ResourceTypeStats_Data))) ResourceTypeStats_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ResourceTypeStat_Data> images;
  mojo::internal::Pointer<internal::ResourceTypeStat_Data> css_style_sheets;
  mojo::internal::Pointer<internal::ResourceTypeStat_Data> scripts;
  mojo::internal::Pointer<internal::ResourceTypeStat_Data> xsl_style_sheets;
  mojo::internal::Pointer<internal::ResourceTypeStat_Data> fonts;
  mojo::internal::Pointer<internal::ResourceTypeStat_Data> other;

 private:
  ResourceTypeStats_Data() : header_({sizeof(*this), 0}) {
  }
  ~ResourceTypeStats_Data() = delete;
};
static_assert(sizeof(ResourceTypeStats_Data) == 56,
              "Bad sizeof(ResourceTypeStats_Data)");
class ResourceUsageData_Data {
 public:
  static ResourceUsageData_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(ResourceUsageData_Data))) ResourceUsageData_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t reports_v8_stats : 1;
  uint8_t pad0_[7];
  uint64_t v8_bytes_allocated;
  uint64_t v8_bytes_used;
  mojo::internal::Pointer<internal::ResourceTypeStats_Data> web_cache_stats;

 private:
  ResourceUsageData_Data() : header_({sizeof(*this), 0}) {
  }
  ~ResourceUsageData_Data() = delete;
};
static_assert(sizeof(ResourceUsageData_Data) == 40,
              "Bad sizeof(ResourceUsageData_Data)");
const uint32_t kResourceUsageReporter_GetUsageData_Name = 0;
class ResourceUsageReporter_GetUsageData_Params_Data {
 public:
  static ResourceUsageReporter_GetUsageData_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(ResourceUsageReporter_GetUsageData_Params_Data))) ResourceUsageReporter_GetUsageData_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ResourceUsageReporter_GetUsageData_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~ResourceUsageReporter_GetUsageData_Params_Data() = delete;
};
static_assert(sizeof(ResourceUsageReporter_GetUsageData_Params_Data) == 8,
              "Bad sizeof(ResourceUsageReporter_GetUsageData_Params_Data)");
class ResourceUsageReporter_GetUsageData_ResponseParams_Data {
 public:
  static ResourceUsageReporter_GetUsageData_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(ResourceUsageReporter_GetUsageData_ResponseParams_Data))) ResourceUsageReporter_GetUsageData_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ResourceUsageData_Data> data;

 private:
  ResourceUsageReporter_GetUsageData_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~ResourceUsageReporter_GetUsageData_ResponseParams_Data() = delete;
};
static_assert(sizeof(ResourceUsageReporter_GetUsageData_ResponseParams_Data) == 16,
              "Bad sizeof(ResourceUsageReporter_GetUsageData_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom

#endif  // CHROME_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_SHARED_INTERNAL_H_