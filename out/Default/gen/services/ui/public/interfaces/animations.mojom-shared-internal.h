// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_ANIMATIONS_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_UI_PUBLIC_INTERFACES_ANIMATIONS_MOJOM_SHARED_INTERNAL_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/cpp/bindings/lib/native_struct_data.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "ui/gfx/mojo/transform.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace ui {
namespace mojom {
namespace internal {
class AnimationValue_Data;
class AnimationElement_Data;
class AnimationSequence_Data;
class AnimationGroup_Data;

struct AnimationTweenType_Data {
 public:
  static bool const kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct AnimationProperty_Data {
 public:
  static bool const kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class AnimationValue_Data {
 public:
  static AnimationValue_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(AnimationValue_Data))) AnimationValue_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float float_value;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::gfx::mojom::internal::Transform_Data> transform;

 private:
  AnimationValue_Data() : header_({sizeof(*this), 0}) {
  }
  ~AnimationValue_Data() = delete;
};
static_assert(sizeof(AnimationValue_Data) == 24,
              "Bad sizeof(AnimationValue_Data)");
class AnimationElement_Data {
 public:
  static AnimationElement_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(AnimationElement_Data))) AnimationElement_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t property;
  int32_t tween_type;
  int64_t duration;
  mojo::internal::Pointer<internal::AnimationValue_Data> start_value;
  mojo::internal::Pointer<internal::AnimationValue_Data> target_value;

 private:
  AnimationElement_Data() : header_({sizeof(*this), 0}) {
  }
  ~AnimationElement_Data() = delete;
};
static_assert(sizeof(AnimationElement_Data) == 40,
              "Bad sizeof(AnimationElement_Data)");
class AnimationSequence_Data {
 public:
  static AnimationSequence_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(AnimationSequence_Data))) AnimationSequence_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t cycle_count;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AnimationElement_Data>>> elements;

 private:
  AnimationSequence_Data() : header_({sizeof(*this), 0}) {
  }
  ~AnimationSequence_Data() = delete;
};
static_assert(sizeof(AnimationSequence_Data) == 24,
              "Bad sizeof(AnimationSequence_Data)");
class AnimationGroup_Data {
 public:
  static AnimationGroup_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(AnimationGroup_Data))) AnimationGroup_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t window_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AnimationSequence_Data>>> sequences;

 private:
  AnimationGroup_Data() : header_({sizeof(*this), 0}) {
  }
  ~AnimationGroup_Data() = delete;
};
static_assert(sizeof(AnimationGroup_Data) == 24,
              "Bad sizeof(AnimationGroup_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_ANIMATIONS_MOJOM_SHARED_INTERNAL_H_