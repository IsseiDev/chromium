// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_VR_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define DEVICE_VR_VR_SERVICE_MOJOM_SHARED_INTERNAL_H_

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
namespace internal {
class VRFieldOfView_Data;
class VRPose_Data;
class VRDisplayCapabilities_Data;
class VREyeParameters_Data;
class VRStageParameters_Data;
class VRDisplay_Data;

#pragma pack(push, 1)
class VRFieldOfView_Data {
 public:
  static VRFieldOfView_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(VRFieldOfView_Data))) VRFieldOfView_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float upDegrees;
  float downDegrees;
  float leftDegrees;
  float rightDegrees;

 private:
  VRFieldOfView_Data() : header_({sizeof(*this), 0}) {
  }
  ~VRFieldOfView_Data() = delete;
};
static_assert(sizeof(VRFieldOfView_Data) == 24,
              "Bad sizeof(VRFieldOfView_Data)");
class VRPose_Data {
 public:
  static VRPose_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(VRPose_Data))) VRPose_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double timestamp;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> orientation;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> position;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> angularVelocity;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> linearVelocity;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> angularAcceleration;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> linearAcceleration;

 private:
  VRPose_Data() : header_({sizeof(*this), 0}) {
  }
  ~VRPose_Data() = delete;
};
static_assert(sizeof(VRPose_Data) == 64,
              "Bad sizeof(VRPose_Data)");
class VRDisplayCapabilities_Data {
 public:
  static VRDisplayCapabilities_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(VRDisplayCapabilities_Data))) VRDisplayCapabilities_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t hasOrientation : 1;
  uint8_t hasPosition : 1;
  uint8_t hasExternalDisplay : 1;
  uint8_t canPresent : 1;
  uint8_t padfinal_[7];

 private:
  VRDisplayCapabilities_Data() : header_({sizeof(*this), 0}) {
  }
  ~VRDisplayCapabilities_Data() = delete;
};
static_assert(sizeof(VRDisplayCapabilities_Data) == 16,
              "Bad sizeof(VRDisplayCapabilities_Data)");
class VREyeParameters_Data {
 public:
  static VREyeParameters_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(VREyeParameters_Data))) VREyeParameters_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VRFieldOfView_Data> fieldOfView;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> offset;
  uint32_t renderWidth;
  uint32_t renderHeight;

 private:
  VREyeParameters_Data() : header_({sizeof(*this), 0}) {
  }
  ~VREyeParameters_Data() = delete;
};
static_assert(sizeof(VREyeParameters_Data) == 32,
              "Bad sizeof(VREyeParameters_Data)");
class VRStageParameters_Data {
 public:
  static VRStageParameters_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(VRStageParameters_Data))) VRStageParameters_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> standingTransform;
  float sizeX;
  float sizeZ;

 private:
  VRStageParameters_Data() : header_({sizeof(*this), 0}) {
  }
  ~VRStageParameters_Data() = delete;
};
static_assert(sizeof(VRStageParameters_Data) == 24,
              "Bad sizeof(VRStageParameters_Data)");
class VRDisplay_Data {
 public:
  static VRDisplay_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(VRDisplay_Data))) VRDisplay_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t index;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> displayName;
  mojo::internal::Pointer<internal::VRDisplayCapabilities_Data> capabilities;
  mojo::internal::Pointer<internal::VRStageParameters_Data> stageParameters;
  mojo::internal::Pointer<internal::VREyeParameters_Data> leftEye;
  mojo::internal::Pointer<internal::VREyeParameters_Data> rightEye;

 private:
  VRDisplay_Data() : header_({sizeof(*this), 0}) {
  }
  ~VRDisplay_Data() = delete;
};
static_assert(sizeof(VRDisplay_Data) == 56,
              "Bad sizeof(VRDisplay_Data)");
const uint32_t kVRService_SetClient_Name = 0;
class VRService_SetClient_Params_Data {
 public:
  static VRService_SetClient_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(VRService_SetClient_Params_Data))) VRService_SetClient_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  VRService_SetClient_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~VRService_SetClient_Params_Data() = delete;
};
static_assert(sizeof(VRService_SetClient_Params_Data) == 16,
              "Bad sizeof(VRService_SetClient_Params_Data)");
const uint32_t kVRService_GetDisplays_Name = 1;
class VRService_GetDisplays_Params_Data {
 public:
  static VRService_GetDisplays_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(VRService_GetDisplays_Params_Data))) VRService_GetDisplays_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VRService_GetDisplays_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~VRService_GetDisplays_Params_Data() = delete;
};
static_assert(sizeof(VRService_GetDisplays_Params_Data) == 8,
              "Bad sizeof(VRService_GetDisplays_Params_Data)");
class VRService_GetDisplays_ResponseParams_Data {
 public:
  static VRService_GetDisplays_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(VRService_GetDisplays_ResponseParams_Data))) VRService_GetDisplays_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::VRDisplay_Data>>> displays;

 private:
  VRService_GetDisplays_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~VRService_GetDisplays_ResponseParams_Data() = delete;
};
static_assert(sizeof(VRService_GetDisplays_ResponseParams_Data) == 16,
              "Bad sizeof(VRService_GetDisplays_ResponseParams_Data)");
const uint32_t kVRService_GetPose_Name = 2;
class VRService_GetPose_Params_Data {
 public:
  static VRService_GetPose_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(VRService_GetPose_Params_Data))) VRService_GetPose_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t index;
  uint8_t padfinal_[4];

 private:
  VRService_GetPose_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~VRService_GetPose_Params_Data() = delete;
};
static_assert(sizeof(VRService_GetPose_Params_Data) == 16,
              "Bad sizeof(VRService_GetPose_Params_Data)");
class VRService_GetPose_ResponseParams_Data {
 public:
  static VRService_GetPose_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(VRService_GetPose_ResponseParams_Data))) VRService_GetPose_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VRPose_Data> pose;

 private:
  VRService_GetPose_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~VRService_GetPose_ResponseParams_Data() = delete;
};
static_assert(sizeof(VRService_GetPose_ResponseParams_Data) == 16,
              "Bad sizeof(VRService_GetPose_ResponseParams_Data)");
const uint32_t kVRService_ResetPose_Name = 3;
class VRService_ResetPose_Params_Data {
 public:
  static VRService_ResetPose_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(VRService_ResetPose_Params_Data))) VRService_ResetPose_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t index;
  uint8_t padfinal_[4];

 private:
  VRService_ResetPose_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~VRService_ResetPose_Params_Data() = delete;
};
static_assert(sizeof(VRService_ResetPose_Params_Data) == 16,
              "Bad sizeof(VRService_ResetPose_Params_Data)");
const uint32_t kVRServiceClient_OnDisplayChanged_Name = 0;
class VRServiceClient_OnDisplayChanged_Params_Data {
 public:
  static VRServiceClient_OnDisplayChanged_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(VRServiceClient_OnDisplayChanged_Params_Data))) VRServiceClient_OnDisplayChanged_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VRDisplay_Data> display;

 private:
  VRServiceClient_OnDisplayChanged_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~VRServiceClient_OnDisplayChanged_Params_Data() = delete;
};
static_assert(sizeof(VRServiceClient_OnDisplayChanged_Params_Data) == 16,
              "Bad sizeof(VRServiceClient_OnDisplayChanged_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace device

#endif  // DEVICE_VR_VR_SERVICE_MOJOM_SHARED_INTERNAL_H_