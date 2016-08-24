// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_VR_SERVICE_MOJOM_H_
#define DEVICE_VR_VR_SERVICE_MOJOM_H_

#include <stdint.h>

#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/optional.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/lib/control_message_proxy.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/message_filter.h"
#include "mojo/public/cpp/bindings/native_struct.h"
#include "mojo/public/cpp/bindings/native_struct_data_view.h"
#include "mojo/public/cpp/bindings/no_interface.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "device/vr/vr_service.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace device {
class VRService;
using VRServicePtr = mojo::InterfacePtr<VRService>;
using VRServicePtrInfo = mojo::InterfacePtrInfo<VRService>;
using VRServiceRequest = mojo::InterfaceRequest<VRService>;
using VRServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<VRService>;
using VRServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VRService>;
using VRServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VRService>;

class VRServiceClient;
using VRServiceClientPtr = mojo::InterfacePtr<VRServiceClient>;
using VRServiceClientPtrInfo = mojo::InterfacePtrInfo<VRServiceClient>;
using VRServiceClientRequest = mojo::InterfaceRequest<VRServiceClient>;
using VRServiceClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<VRServiceClient>;
using VRServiceClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VRServiceClient>;
using VRServiceClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VRServiceClient>;

class VRFieldOfView;
class VRFieldOfViewDataView;
using VRFieldOfViewPtr = mojo::InlinedStructPtr<VRFieldOfView>;

class VRPose;
class VRPoseDataView;
using VRPosePtr = mojo::StructPtr<VRPose>;

class VRDisplayCapabilities;
class VRDisplayCapabilitiesDataView;
using VRDisplayCapabilitiesPtr = mojo::InlinedStructPtr<VRDisplayCapabilities>;

class VREyeParameters;
class VREyeParametersDataView;
using VREyeParametersPtr = mojo::StructPtr<VREyeParameters>;

class VRStageParameters;
class VRStageParametersDataView;
using VRStageParametersPtr = mojo::StructPtr<VRStageParameters>;

class VRDisplay;
class VRDisplayDataView;
using VRDisplayPtr = mojo::StructPtr<VRDisplay>;


class VRServiceProxy;
class VRServiceStub;

class VRServiceRequestValidator;
class VRServiceResponseValidator;

class  VRService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = true;

  using Proxy_ = VRServiceProxy;
  using Stub_ = VRServiceStub;

  using RequestValidator_ = VRServiceRequestValidator;
  using ResponseValidator_ = VRServiceResponseValidator;
  virtual ~VRService() {}

  virtual void SetClient(VRServiceClientPtr client) = 0;


  using GetDisplaysCallback = base::Callback<void(mojo::Array<VRDisplayPtr>)>;
  virtual void GetDisplays(const GetDisplaysCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetPose(uint32_t index, VRPosePtr* pose);

  using GetPoseCallback = base::Callback<void(VRPosePtr)>;
  virtual void GetPose(uint32_t index, const GetPoseCallback& callback) = 0;

  virtual void ResetPose(uint32_t index) = 0;
};

class VRServiceClientProxy;
class VRServiceClientStub;

class VRServiceClientRequestValidator;

class  VRServiceClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = VRServiceClientProxy;
  using Stub_ = VRServiceClientStub;

  using RequestValidator_ = VRServiceClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~VRServiceClient() {}

  virtual void OnDisplayChanged(VRDisplayPtr display) = 0;
};

class  VRServiceProxy
    : public VRService,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit VRServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClient(VRServiceClientPtr client) override;
  void GetDisplays(const GetDisplaysCallback& callback) override;
  bool GetPose(uint32_t index, VRPosePtr* pose) override;
  void GetPose(uint32_t index, const GetPoseCallback& callback) override;
  void ResetPose(uint32_t index) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  VRServiceClientProxy
    : public VRServiceClient,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit VRServiceClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnDisplayChanged(VRDisplayPtr display) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  VRServiceStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  VRServiceStub();
  ~VRServiceStub() override;
  void set_sink(VRService* sink) { sink_ = sink; }
  VRService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  VRService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  VRServiceClientStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  VRServiceClientStub();
  ~VRServiceClientStub() override;
  void set_sink(VRServiceClient* sink) { sink_ = sink; }
  VRServiceClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  VRServiceClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  VRServiceRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit VRServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  VRServiceClientRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit VRServiceClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  VRServiceResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit VRServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};


class  VRFieldOfView {
 public:
  using DataView = VRFieldOfViewDataView;
  using Data_ = internal::VRFieldOfView_Data;

  static VRFieldOfViewPtr New();

  template <typename U>
  static VRFieldOfViewPtr From(const U& u) {
    return mojo::TypeConverter<VRFieldOfViewPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRFieldOfView>::Convert(*this);
  }

  VRFieldOfView();
  ~VRFieldOfView();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VRFieldOfViewPtr>
  VRFieldOfViewPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VRFieldOfView>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        VRFieldOfViewPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        VRFieldOfViewPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  float upDegrees;
  float downDegrees;
  float leftDegrees;
  float rightDegrees;
};

class VRFieldOfViewDataView {
 public:
  VRFieldOfViewDataView() {}

  VRFieldOfViewDataView(
      internal::VRFieldOfView_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float upDegrees() const {
    return data_->upDegrees;
  }
  float downDegrees() const {
    return data_->downDegrees;
  }
  float leftDegrees() const {
    return data_->leftDegrees;
  }
  float rightDegrees() const {
    return data_->rightDegrees;
  }
 private:
  internal::VRFieldOfView_Data* data_ = nullptr;
};



}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::VRFieldOfViewDataView> {
  using MojomType = ::device::VRFieldOfViewPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {




class  VRDisplayCapabilities {
 public:
  using DataView = VRDisplayCapabilitiesDataView;
  using Data_ = internal::VRDisplayCapabilities_Data;

  static VRDisplayCapabilitiesPtr New();

  template <typename U>
  static VRDisplayCapabilitiesPtr From(const U& u) {
    return mojo::TypeConverter<VRDisplayCapabilitiesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRDisplayCapabilities>::Convert(*this);
  }

  VRDisplayCapabilities();
  ~VRDisplayCapabilities();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VRDisplayCapabilitiesPtr>
  VRDisplayCapabilitiesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VRDisplayCapabilities>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        VRDisplayCapabilitiesPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        VRDisplayCapabilitiesPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  bool hasOrientation;
  bool hasPosition;
  bool hasExternalDisplay;
  bool canPresent;
};

class VRDisplayCapabilitiesDataView {
 public:
  VRDisplayCapabilitiesDataView() {}

  VRDisplayCapabilitiesDataView(
      internal::VRDisplayCapabilities_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool hasOrientation() const {
    return data_->hasOrientation;
  }
  bool hasPosition() const {
    return data_->hasPosition;
  }
  bool hasExternalDisplay() const {
    return data_->hasExternalDisplay;
  }
  bool canPresent() const {
    return data_->canPresent;
  }
 private:
  internal::VRDisplayCapabilities_Data* data_ = nullptr;
};



}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::VRDisplayCapabilitiesDataView> {
  using MojomType = ::device::VRDisplayCapabilitiesPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {









class  VRPose {
 public:
  using DataView = VRPoseDataView;
  using Data_ = internal::VRPose_Data;

  static VRPosePtr New();

  template <typename U>
  static VRPosePtr From(const U& u) {
    return mojo::TypeConverter<VRPosePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRPose>::Convert(*this);
  }

  VRPose();
  ~VRPose();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VRPosePtr>
  VRPosePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VRPose>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        VRPosePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        VRPosePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  double timestamp;
  mojo::Array<float> orientation;
  mojo::Array<float> position;
  mojo::Array<float> angularVelocity;
  mojo::Array<float> linearVelocity;
  mojo::Array<float> angularAcceleration;
  mojo::Array<float> linearAcceleration;
 private:
  DISALLOW_COPY_AND_ASSIGN(VRPose);
};

class VRPoseDataView {
 public:
  VRPoseDataView() {}

  VRPoseDataView(
      internal::VRPose_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  double timestamp() const {
    return data_->timestamp;
  }
  inline void GetOrientationDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  bool ReadOrientation(UserType* output) {
    auto pointer = data_->orientation.Get();
    return mojo::internal::Deserialize<mojo::Array<float>>(
        pointer, output, context_);
  }
  inline void GetPositionDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  bool ReadPosition(UserType* output) {
    auto pointer = data_->position.Get();
    return mojo::internal::Deserialize<mojo::Array<float>>(
        pointer, output, context_);
  }
  inline void GetAngularvelocityDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  bool ReadAngularvelocity(UserType* output) {
    auto pointer = data_->angularVelocity.Get();
    return mojo::internal::Deserialize<mojo::Array<float>>(
        pointer, output, context_);
  }
  inline void GetLinearvelocityDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  bool ReadLinearvelocity(UserType* output) {
    auto pointer = data_->linearVelocity.Get();
    return mojo::internal::Deserialize<mojo::Array<float>>(
        pointer, output, context_);
  }
  inline void GetAngularaccelerationDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  bool ReadAngularacceleration(UserType* output) {
    auto pointer = data_->angularAcceleration.Get();
    return mojo::internal::Deserialize<mojo::Array<float>>(
        pointer, output, context_);
  }
  inline void GetLinearaccelerationDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  bool ReadLinearacceleration(UserType* output) {
    auto pointer = data_->linearAcceleration.Get();
    return mojo::internal::Deserialize<mojo::Array<float>>(
        pointer, output, context_);
  }
 private:
  internal::VRPose_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::VRPoseDataView> {
  using MojomType = ::device::VRPosePtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {




class  VREyeParameters {
 public:
  using DataView = VREyeParametersDataView;
  using Data_ = internal::VREyeParameters_Data;

  static VREyeParametersPtr New();

  template <typename U>
  static VREyeParametersPtr From(const U& u) {
    return mojo::TypeConverter<VREyeParametersPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VREyeParameters>::Convert(*this);
  }

  VREyeParameters();
  ~VREyeParameters();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VREyeParametersPtr>
  VREyeParametersPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VREyeParameters>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        VREyeParametersPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        VREyeParametersPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  VRFieldOfViewPtr fieldOfView;
  mojo::Array<float> offset;
  uint32_t renderWidth;
  uint32_t renderHeight;
 private:
  DISALLOW_COPY_AND_ASSIGN(VREyeParameters);
};

class VREyeParametersDataView {
 public:
  VREyeParametersDataView() {}

  VREyeParametersDataView(
      internal::VREyeParameters_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFieldofviewDataView(
      VRFieldOfViewDataView* output);

  template <typename UserType>
  bool ReadFieldofview(UserType* output) {
    auto pointer = data_->fieldOfView.Get();
    return mojo::internal::Deserialize<::device::VRFieldOfViewPtr>(
        pointer, output, context_);
  }
  inline void GetOffsetDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  bool ReadOffset(UserType* output) {
    auto pointer = data_->offset.Get();
    return mojo::internal::Deserialize<mojo::Array<float>>(
        pointer, output, context_);
  }
  uint32_t renderWidth() const {
    return data_->renderWidth;
  }
  uint32_t renderHeight() const {
    return data_->renderHeight;
  }
 private:
  internal::VREyeParameters_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::VREyeParametersDataView> {
  using MojomType = ::device::VREyeParametersPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {



class  VRStageParameters {
 public:
  using DataView = VRStageParametersDataView;
  using Data_ = internal::VRStageParameters_Data;

  static VRStageParametersPtr New();

  template <typename U>
  static VRStageParametersPtr From(const U& u) {
    return mojo::TypeConverter<VRStageParametersPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRStageParameters>::Convert(*this);
  }

  VRStageParameters();
  ~VRStageParameters();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VRStageParametersPtr>
  VRStageParametersPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VRStageParameters>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        VRStageParametersPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        VRStageParametersPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::Array<float> standingTransform;
  float sizeX;
  float sizeZ;
 private:
  DISALLOW_COPY_AND_ASSIGN(VRStageParameters);
};

class VRStageParametersDataView {
 public:
  VRStageParametersDataView() {}

  VRStageParametersDataView(
      internal::VRStageParameters_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStandingtransformDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  bool ReadStandingtransform(UserType* output) {
    auto pointer = data_->standingTransform.Get();
    return mojo::internal::Deserialize<mojo::Array<float>>(
        pointer, output, context_);
  }
  float sizeX() const {
    return data_->sizeX;
  }
  float sizeZ() const {
    return data_->sizeZ;
  }
 private:
  internal::VRStageParameters_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::VRStageParametersDataView> {
  using MojomType = ::device::VRStageParametersPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {



class  VRDisplay {
 public:
  using DataView = VRDisplayDataView;
  using Data_ = internal::VRDisplay_Data;

  static VRDisplayPtr New();

  template <typename U>
  static VRDisplayPtr From(const U& u) {
    return mojo::TypeConverter<VRDisplayPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRDisplay>::Convert(*this);
  }

  VRDisplay();
  ~VRDisplay();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VRDisplayPtr>
  VRDisplayPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VRDisplay>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        VRDisplayPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        VRDisplayPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t index;
  mojo::String displayName;
  VRDisplayCapabilitiesPtr capabilities;
  VRStageParametersPtr stageParameters;
  VREyeParametersPtr leftEye;
  VREyeParametersPtr rightEye;
 private:
  DISALLOW_COPY_AND_ASSIGN(VRDisplay);
};

class VRDisplayDataView {
 public:
  VRDisplayDataView() {}

  VRDisplayDataView(
      internal::VRDisplay_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t index() const {
    return data_->index;
  }
  inline void GetDisplaynameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadDisplayname(UserType* output) {
    auto pointer = data_->displayName.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetCapabilitiesDataView(
      VRDisplayCapabilitiesDataView* output);

  template <typename UserType>
  bool ReadCapabilities(UserType* output) {
    auto pointer = data_->capabilities.Get();
    return mojo::internal::Deserialize<::device::VRDisplayCapabilitiesPtr>(
        pointer, output, context_);
  }
  inline void GetStageparametersDataView(
      VRStageParametersDataView* output);

  template <typename UserType>
  bool ReadStageparameters(UserType* output) {
    auto pointer = data_->stageParameters.Get();
    return mojo::internal::Deserialize<::device::VRStageParametersPtr>(
        pointer, output, context_);
  }
  inline void GetLefteyeDataView(
      VREyeParametersDataView* output);

  template <typename UserType>
  bool ReadLefteye(UserType* output) {
    auto pointer = data_->leftEye.Get();
    return mojo::internal::Deserialize<::device::VREyeParametersPtr>(
        pointer, output, context_);
  }
  inline void GetRighteyeDataView(
      VREyeParametersDataView* output);

  template <typename UserType>
  bool ReadRighteye(UserType* output) {
    auto pointer = data_->rightEye.Get();
    return mojo::internal::Deserialize<::device::VREyeParametersPtr>(
        pointer, output, context_);
  }
 private:
  internal::VRDisplay_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::VRDisplayDataView> {
  using MojomType = ::device::VRDisplayPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {


template <typename StructPtrType>
VRFieldOfViewPtr VRFieldOfView::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->upDegrees = mojo::internal::Clone(upDegrees);
  rv->downDegrees = mojo::internal::Clone(downDegrees);
  rv->leftDegrees = mojo::internal::Clone(leftDegrees);
  rv->rightDegrees = mojo::internal::Clone(rightDegrees);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VRFieldOfView>::value>::type*>
bool VRFieldOfView::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->upDegrees, other.upDegrees))
    return false;
  if (!mojo::internal::Equals(this->downDegrees, other.downDegrees))
    return false;
  if (!mojo::internal::Equals(this->leftDegrees, other.leftDegrees))
    return false;
  if (!mojo::internal::Equals(this->rightDegrees, other.rightDegrees))
    return false;
  return true;
}


template <typename StructPtrType>
VRPosePtr VRPose::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->timestamp = mojo::internal::Clone(timestamp);
  rv->orientation = mojo::internal::Clone(orientation);
  rv->position = mojo::internal::Clone(position);
  rv->angularVelocity = mojo::internal::Clone(angularVelocity);
  rv->linearVelocity = mojo::internal::Clone(linearVelocity);
  rv->angularAcceleration = mojo::internal::Clone(angularAcceleration);
  rv->linearAcceleration = mojo::internal::Clone(linearAcceleration);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VRPose>::value>::type*>
bool VRPose::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->timestamp, other.timestamp))
    return false;
  if (!mojo::internal::Equals(this->orientation, other.orientation))
    return false;
  if (!mojo::internal::Equals(this->position, other.position))
    return false;
  if (!mojo::internal::Equals(this->angularVelocity, other.angularVelocity))
    return false;
  if (!mojo::internal::Equals(this->linearVelocity, other.linearVelocity))
    return false;
  if (!mojo::internal::Equals(this->angularAcceleration, other.angularAcceleration))
    return false;
  if (!mojo::internal::Equals(this->linearAcceleration, other.linearAcceleration))
    return false;
  return true;
}

inline void VRPoseDataView::GetOrientationDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->orientation.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void VRPoseDataView::GetPositionDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->position.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void VRPoseDataView::GetAngularvelocityDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->angularVelocity.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void VRPoseDataView::GetLinearvelocityDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->linearVelocity.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void VRPoseDataView::GetAngularaccelerationDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->angularAcceleration.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void VRPoseDataView::GetLinearaccelerationDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->linearAcceleration.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}

template <typename StructPtrType>
VRDisplayCapabilitiesPtr VRDisplayCapabilities::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->hasOrientation = mojo::internal::Clone(hasOrientation);
  rv->hasPosition = mojo::internal::Clone(hasPosition);
  rv->hasExternalDisplay = mojo::internal::Clone(hasExternalDisplay);
  rv->canPresent = mojo::internal::Clone(canPresent);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VRDisplayCapabilities>::value>::type*>
bool VRDisplayCapabilities::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->hasOrientation, other.hasOrientation))
    return false;
  if (!mojo::internal::Equals(this->hasPosition, other.hasPosition))
    return false;
  if (!mojo::internal::Equals(this->hasExternalDisplay, other.hasExternalDisplay))
    return false;
  if (!mojo::internal::Equals(this->canPresent, other.canPresent))
    return false;
  return true;
}


template <typename StructPtrType>
VREyeParametersPtr VREyeParameters::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->fieldOfView = mojo::internal::Clone(fieldOfView);
  rv->offset = mojo::internal::Clone(offset);
  rv->renderWidth = mojo::internal::Clone(renderWidth);
  rv->renderHeight = mojo::internal::Clone(renderHeight);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VREyeParameters>::value>::type*>
bool VREyeParameters::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->fieldOfView, other.fieldOfView))
    return false;
  if (!mojo::internal::Equals(this->offset, other.offset))
    return false;
  if (!mojo::internal::Equals(this->renderWidth, other.renderWidth))
    return false;
  if (!mojo::internal::Equals(this->renderHeight, other.renderHeight))
    return false;
  return true;
}

inline void VREyeParametersDataView::GetFieldofviewDataView(
    VRFieldOfViewDataView* output) {
  auto pointer = data_->fieldOfView.Get();
  *output = VRFieldOfViewDataView(pointer, context_);
}
inline void VREyeParametersDataView::GetOffsetDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->offset.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}

template <typename StructPtrType>
VRStageParametersPtr VRStageParameters::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->standingTransform = mojo::internal::Clone(standingTransform);
  rv->sizeX = mojo::internal::Clone(sizeX);
  rv->sizeZ = mojo::internal::Clone(sizeZ);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VRStageParameters>::value>::type*>
bool VRStageParameters::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->standingTransform, other.standingTransform))
    return false;
  if (!mojo::internal::Equals(this->sizeX, other.sizeX))
    return false;
  if (!mojo::internal::Equals(this->sizeZ, other.sizeZ))
    return false;
  return true;
}

inline void VRStageParametersDataView::GetStandingtransformDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->standingTransform.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}

template <typename StructPtrType>
VRDisplayPtr VRDisplay::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->index = mojo::internal::Clone(index);
  rv->displayName = mojo::internal::Clone(displayName);
  rv->capabilities = mojo::internal::Clone(capabilities);
  rv->stageParameters = mojo::internal::Clone(stageParameters);
  rv->leftEye = mojo::internal::Clone(leftEye);
  rv->rightEye = mojo::internal::Clone(rightEye);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VRDisplay>::value>::type*>
bool VRDisplay::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->index, other.index))
    return false;
  if (!mojo::internal::Equals(this->displayName, other.displayName))
    return false;
  if (!mojo::internal::Equals(this->capabilities, other.capabilities))
    return false;
  if (!mojo::internal::Equals(this->stageParameters, other.stageParameters))
    return false;
  if (!mojo::internal::Equals(this->leftEye, other.leftEye))
    return false;
  if (!mojo::internal::Equals(this->rightEye, other.rightEye))
    return false;
  return true;
}

inline void VRDisplayDataView::GetDisplaynameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->displayName.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void VRDisplayDataView::GetCapabilitiesDataView(
    VRDisplayCapabilitiesDataView* output) {
  auto pointer = data_->capabilities.Get();
  *output = VRDisplayCapabilitiesDataView(pointer, context_);
}
inline void VRDisplayDataView::GetStageparametersDataView(
    VRStageParametersDataView* output) {
  auto pointer = data_->stageParameters.Get();
  *output = VRStageParametersDataView(pointer, context_);
}
inline void VRDisplayDataView::GetLefteyeDataView(
    VREyeParametersDataView* output) {
  auto pointer = data_->leftEye.Get();
  *output = VREyeParametersDataView(pointer, context_);
}
inline void VRDisplayDataView::GetRighteyeDataView(
    VREyeParametersDataView* output) {
  auto pointer = data_->rightEye.Get();
  *output = VREyeParametersDataView(pointer, context_);
}



}  // namespace device

namespace mojo {


template <>
struct  StructTraits<::device::VRFieldOfView, ::device::VRFieldOfViewPtr> {
  static bool IsNull(const ::device::VRFieldOfViewPtr& input) { return !input; }
  static void SetToNull(::device::VRFieldOfViewPtr* output) { output->reset(); }
  static decltype(::device::VRFieldOfView::upDegrees) upDegrees(
      const ::device::VRFieldOfViewPtr& input) {
    return input->upDegrees;
  }
  static decltype(::device::VRFieldOfView::downDegrees) downDegrees(
      const ::device::VRFieldOfViewPtr& input) {
    return input->downDegrees;
  }
  static decltype(::device::VRFieldOfView::leftDegrees) leftDegrees(
      const ::device::VRFieldOfViewPtr& input) {
    return input->leftDegrees;
  }
  static decltype(::device::VRFieldOfView::rightDegrees) rightDegrees(
      const ::device::VRFieldOfViewPtr& input) {
    return input->rightDegrees;
  }

  static bool Read(::device::VRFieldOfViewDataView input, ::device::VRFieldOfViewPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::VRFieldOfViewPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::VRFieldOfView, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::internal::VRFieldOfView_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::internal::VRFieldOfView_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::internal::VRFieldOfView_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->upDegrees = CallWithContext(Traits::upDegrees, input, custom_context);
      result->downDegrees = CallWithContext(Traits::downDegrees, input, custom_context);
      result->leftDegrees = CallWithContext(Traits::leftDegrees, input, custom_context);
      result->rightDegrees = CallWithContext(Traits::rightDegrees, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::internal::VRFieldOfView_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::VRFieldOfViewDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::device::VRPose, ::device::VRPosePtr> {
  static bool IsNull(const ::device::VRPosePtr& input) { return !input; }
  static void SetToNull(::device::VRPosePtr* output) { output->reset(); }
  static decltype(::device::VRPose::timestamp) timestamp(
      const ::device::VRPosePtr& input) {
    return input->timestamp;
  }
  static decltype(::device::VRPose::orientation)& orientation(
      ::device::VRPosePtr& input) {
    return input->orientation;
  }
  static decltype(::device::VRPose::position)& position(
      ::device::VRPosePtr& input) {
    return input->position;
  }
  static decltype(::device::VRPose::angularVelocity)& angularVelocity(
      ::device::VRPosePtr& input) {
    return input->angularVelocity;
  }
  static decltype(::device::VRPose::linearVelocity)& linearVelocity(
      ::device::VRPosePtr& input) {
    return input->linearVelocity;
  }
  static decltype(::device::VRPose::angularAcceleration)& angularAcceleration(
      ::device::VRPosePtr& input) {
    return input->angularAcceleration;
  }
  static decltype(::device::VRPose::linearAcceleration)& linearAcceleration(
      ::device::VRPosePtr& input) {
    return input->linearAcceleration;
  }

  static bool Read(::device::VRPoseDataView input, ::device::VRPosePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::VRPosePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::VRPose, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::internal::VRPose_Data);
    decltype(CallWithContext(Traits::orientation, input, custom_context)) in_orientation = CallWithContext(Traits::orientation, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<float>>(
        in_orientation, context);
    decltype(CallWithContext(Traits::position, input, custom_context)) in_position = CallWithContext(Traits::position, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<float>>(
        in_position, context);
    decltype(CallWithContext(Traits::angularVelocity, input, custom_context)) in_angularVelocity = CallWithContext(Traits::angularVelocity, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<float>>(
        in_angularVelocity, context);
    decltype(CallWithContext(Traits::linearVelocity, input, custom_context)) in_linearVelocity = CallWithContext(Traits::linearVelocity, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<float>>(
        in_linearVelocity, context);
    decltype(CallWithContext(Traits::angularAcceleration, input, custom_context)) in_angularAcceleration = CallWithContext(Traits::angularAcceleration, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<float>>(
        in_angularAcceleration, context);
    decltype(CallWithContext(Traits::linearAcceleration, input, custom_context)) in_linearAcceleration = CallWithContext(Traits::linearAcceleration, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<float>>(
        in_linearAcceleration, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::internal::VRPose_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::internal::VRPose_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->timestamp = CallWithContext(Traits::timestamp, input, custom_context);
      decltype(CallWithContext(Traits::orientation, input, custom_context)) in_orientation = CallWithContext(Traits::orientation, input, custom_context);
      typename decltype(result->orientation)::BaseType* orientation_ptr;
      const mojo::internal::ContainerValidateParams orientation_validate_params(
          4, false, nullptr);
      mojo::internal::Serialize<mojo::Array<float>>(
          in_orientation, buffer, &orientation_ptr, &orientation_validate_params,
          context);
      result->orientation.Set(orientation_ptr);
      decltype(CallWithContext(Traits::position, input, custom_context)) in_position = CallWithContext(Traits::position, input, custom_context);
      typename decltype(result->position)::BaseType* position_ptr;
      const mojo::internal::ContainerValidateParams position_validate_params(
          3, false, nullptr);
      mojo::internal::Serialize<mojo::Array<float>>(
          in_position, buffer, &position_ptr, &position_validate_params,
          context);
      result->position.Set(position_ptr);
      decltype(CallWithContext(Traits::angularVelocity, input, custom_context)) in_angularVelocity = CallWithContext(Traits::angularVelocity, input, custom_context);
      typename decltype(result->angularVelocity)::BaseType* angularVelocity_ptr;
      const mojo::internal::ContainerValidateParams angularVelocity_validate_params(
          3, false, nullptr);
      mojo::internal::Serialize<mojo::Array<float>>(
          in_angularVelocity, buffer, &angularVelocity_ptr, &angularVelocity_validate_params,
          context);
      result->angularVelocity.Set(angularVelocity_ptr);
      decltype(CallWithContext(Traits::linearVelocity, input, custom_context)) in_linearVelocity = CallWithContext(Traits::linearVelocity, input, custom_context);
      typename decltype(result->linearVelocity)::BaseType* linearVelocity_ptr;
      const mojo::internal::ContainerValidateParams linearVelocity_validate_params(
          3, false, nullptr);
      mojo::internal::Serialize<mojo::Array<float>>(
          in_linearVelocity, buffer, &linearVelocity_ptr, &linearVelocity_validate_params,
          context);
      result->linearVelocity.Set(linearVelocity_ptr);
      decltype(CallWithContext(Traits::angularAcceleration, input, custom_context)) in_angularAcceleration = CallWithContext(Traits::angularAcceleration, input, custom_context);
      typename decltype(result->angularAcceleration)::BaseType* angularAcceleration_ptr;
      const mojo::internal::ContainerValidateParams angularAcceleration_validate_params(
          3, false, nullptr);
      mojo::internal::Serialize<mojo::Array<float>>(
          in_angularAcceleration, buffer, &angularAcceleration_ptr, &angularAcceleration_validate_params,
          context);
      result->angularAcceleration.Set(angularAcceleration_ptr);
      decltype(CallWithContext(Traits::linearAcceleration, input, custom_context)) in_linearAcceleration = CallWithContext(Traits::linearAcceleration, input, custom_context);
      typename decltype(result->linearAcceleration)::BaseType* linearAcceleration_ptr;
      const mojo::internal::ContainerValidateParams linearAcceleration_validate_params(
          3, false, nullptr);
      mojo::internal::Serialize<mojo::Array<float>>(
          in_linearAcceleration, buffer, &linearAcceleration_ptr, &linearAcceleration_validate_params,
          context);
      result->linearAcceleration.Set(linearAcceleration_ptr);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::internal::VRPose_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::VRPoseDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::device::VRDisplayCapabilities, ::device::VRDisplayCapabilitiesPtr> {
  static bool IsNull(const ::device::VRDisplayCapabilitiesPtr& input) { return !input; }
  static void SetToNull(::device::VRDisplayCapabilitiesPtr* output) { output->reset(); }
  static decltype(::device::VRDisplayCapabilities::hasOrientation) hasOrientation(
      const ::device::VRDisplayCapabilitiesPtr& input) {
    return input->hasOrientation;
  }
  static decltype(::device::VRDisplayCapabilities::hasPosition) hasPosition(
      const ::device::VRDisplayCapabilitiesPtr& input) {
    return input->hasPosition;
  }
  static decltype(::device::VRDisplayCapabilities::hasExternalDisplay) hasExternalDisplay(
      const ::device::VRDisplayCapabilitiesPtr& input) {
    return input->hasExternalDisplay;
  }
  static decltype(::device::VRDisplayCapabilities::canPresent) canPresent(
      const ::device::VRDisplayCapabilitiesPtr& input) {
    return input->canPresent;
  }

  static bool Read(::device::VRDisplayCapabilitiesDataView input, ::device::VRDisplayCapabilitiesPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::VRDisplayCapabilitiesPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::VRDisplayCapabilities, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::internal::VRDisplayCapabilities_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::internal::VRDisplayCapabilities_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::internal::VRDisplayCapabilities_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->hasOrientation = CallWithContext(Traits::hasOrientation, input, custom_context);
      result->hasPosition = CallWithContext(Traits::hasPosition, input, custom_context);
      result->hasExternalDisplay = CallWithContext(Traits::hasExternalDisplay, input, custom_context);
      result->canPresent = CallWithContext(Traits::canPresent, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::internal::VRDisplayCapabilities_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::VRDisplayCapabilitiesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::device::VREyeParameters, ::device::VREyeParametersPtr> {
  static bool IsNull(const ::device::VREyeParametersPtr& input) { return !input; }
  static void SetToNull(::device::VREyeParametersPtr* output) { output->reset(); }
  static decltype(::device::VREyeParameters::fieldOfView)& fieldOfView(
      ::device::VREyeParametersPtr& input) {
    return input->fieldOfView;
  }
  static decltype(::device::VREyeParameters::offset)& offset(
      ::device::VREyeParametersPtr& input) {
    return input->offset;
  }
  static decltype(::device::VREyeParameters::renderWidth) renderWidth(
      const ::device::VREyeParametersPtr& input) {
    return input->renderWidth;
  }
  static decltype(::device::VREyeParameters::renderHeight) renderHeight(
      const ::device::VREyeParametersPtr& input) {
    return input->renderHeight;
  }

  static bool Read(::device::VREyeParametersDataView input, ::device::VREyeParametersPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::VREyeParametersPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::VREyeParameters, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::internal::VREyeParameters_Data);
    decltype(CallWithContext(Traits::fieldOfView, input, custom_context)) in_fieldOfView = CallWithContext(Traits::fieldOfView, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::device::VRFieldOfViewPtr>(
        in_fieldOfView, context);
    decltype(CallWithContext(Traits::offset, input, custom_context)) in_offset = CallWithContext(Traits::offset, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<float>>(
        in_offset, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::internal::VREyeParameters_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::internal::VREyeParameters_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::fieldOfView, input, custom_context)) in_fieldOfView = CallWithContext(Traits::fieldOfView, input, custom_context);
      typename decltype(result->fieldOfView)::BaseType* fieldOfView_ptr;
      mojo::internal::Serialize<::device::VRFieldOfViewPtr>(
          in_fieldOfView, buffer, &fieldOfView_ptr, context);
      result->fieldOfView.Set(fieldOfView_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->fieldOfView.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null fieldOfView in VREyeParameters struct");
      decltype(CallWithContext(Traits::offset, input, custom_context)) in_offset = CallWithContext(Traits::offset, input, custom_context);
      typename decltype(result->offset)::BaseType* offset_ptr;
      const mojo::internal::ContainerValidateParams offset_validate_params(
          3, false, nullptr);
      mojo::internal::Serialize<mojo::Array<float>>(
          in_offset, buffer, &offset_ptr, &offset_validate_params,
          context);
      result->offset.Set(offset_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->offset.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null offset in VREyeParameters struct");
      result->renderWidth = CallWithContext(Traits::renderWidth, input, custom_context);
      result->renderHeight = CallWithContext(Traits::renderHeight, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::internal::VREyeParameters_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::VREyeParametersDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::device::VRStageParameters, ::device::VRStageParametersPtr> {
  static bool IsNull(const ::device::VRStageParametersPtr& input) { return !input; }
  static void SetToNull(::device::VRStageParametersPtr* output) { output->reset(); }
  static decltype(::device::VRStageParameters::standingTransform)& standingTransform(
      ::device::VRStageParametersPtr& input) {
    return input->standingTransform;
  }
  static decltype(::device::VRStageParameters::sizeX) sizeX(
      const ::device::VRStageParametersPtr& input) {
    return input->sizeX;
  }
  static decltype(::device::VRStageParameters::sizeZ) sizeZ(
      const ::device::VRStageParametersPtr& input) {
    return input->sizeZ;
  }

  static bool Read(::device::VRStageParametersDataView input, ::device::VRStageParametersPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::VRStageParametersPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::VRStageParameters, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::internal::VRStageParameters_Data);
    decltype(CallWithContext(Traits::standingTransform, input, custom_context)) in_standingTransform = CallWithContext(Traits::standingTransform, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<float>>(
        in_standingTransform, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::internal::VRStageParameters_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::internal::VRStageParameters_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::standingTransform, input, custom_context)) in_standingTransform = CallWithContext(Traits::standingTransform, input, custom_context);
      typename decltype(result->standingTransform)::BaseType* standingTransform_ptr;
      const mojo::internal::ContainerValidateParams standingTransform_validate_params(
          16, false, nullptr);
      mojo::internal::Serialize<mojo::Array<float>>(
          in_standingTransform, buffer, &standingTransform_ptr, &standingTransform_validate_params,
          context);
      result->standingTransform.Set(standingTransform_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->standingTransform.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null standingTransform in VRStageParameters struct");
      result->sizeX = CallWithContext(Traits::sizeX, input, custom_context);
      result->sizeZ = CallWithContext(Traits::sizeZ, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::internal::VRStageParameters_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::VRStageParametersDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::device::VRDisplay, ::device::VRDisplayPtr> {
  static bool IsNull(const ::device::VRDisplayPtr& input) { return !input; }
  static void SetToNull(::device::VRDisplayPtr* output) { output->reset(); }
  static decltype(::device::VRDisplay::index) index(
      const ::device::VRDisplayPtr& input) {
    return input->index;
  }
  static decltype(::device::VRDisplay::displayName)& displayName(
      ::device::VRDisplayPtr& input) {
    return input->displayName;
  }
  static decltype(::device::VRDisplay::capabilities)& capabilities(
      ::device::VRDisplayPtr& input) {
    return input->capabilities;
  }
  static decltype(::device::VRDisplay::stageParameters)& stageParameters(
      ::device::VRDisplayPtr& input) {
    return input->stageParameters;
  }
  static decltype(::device::VRDisplay::leftEye)& leftEye(
      ::device::VRDisplayPtr& input) {
    return input->leftEye;
  }
  static decltype(::device::VRDisplay::rightEye)& rightEye(
      ::device::VRDisplayPtr& input) {
    return input->rightEye;
  }

  static bool Read(::device::VRDisplayDataView input, ::device::VRDisplayPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::VRDisplayPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::VRDisplay, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::internal::VRDisplay_Data);
    decltype(CallWithContext(Traits::displayName, input, custom_context)) in_displayName = CallWithContext(Traits::displayName, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_displayName, context);
    decltype(CallWithContext(Traits::capabilities, input, custom_context)) in_capabilities = CallWithContext(Traits::capabilities, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::device::VRDisplayCapabilitiesPtr>(
        in_capabilities, context);
    decltype(CallWithContext(Traits::stageParameters, input, custom_context)) in_stageParameters = CallWithContext(Traits::stageParameters, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::device::VRStageParametersPtr>(
        in_stageParameters, context);
    decltype(CallWithContext(Traits::leftEye, input, custom_context)) in_leftEye = CallWithContext(Traits::leftEye, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::device::VREyeParametersPtr>(
        in_leftEye, context);
    decltype(CallWithContext(Traits::rightEye, input, custom_context)) in_rightEye = CallWithContext(Traits::rightEye, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::device::VREyeParametersPtr>(
        in_rightEye, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::internal::VRDisplay_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::internal::VRDisplay_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->index = CallWithContext(Traits::index, input, custom_context);
      decltype(CallWithContext(Traits::displayName, input, custom_context)) in_displayName = CallWithContext(Traits::displayName, input, custom_context);
      typename decltype(result->displayName)::BaseType* displayName_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_displayName, buffer, &displayName_ptr, context);
      result->displayName.Set(displayName_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->displayName.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null displayName in VRDisplay struct");
      decltype(CallWithContext(Traits::capabilities, input, custom_context)) in_capabilities = CallWithContext(Traits::capabilities, input, custom_context);
      typename decltype(result->capabilities)::BaseType* capabilities_ptr;
      mojo::internal::Serialize<::device::VRDisplayCapabilitiesPtr>(
          in_capabilities, buffer, &capabilities_ptr, context);
      result->capabilities.Set(capabilities_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->capabilities.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null capabilities in VRDisplay struct");
      decltype(CallWithContext(Traits::stageParameters, input, custom_context)) in_stageParameters = CallWithContext(Traits::stageParameters, input, custom_context);
      typename decltype(result->stageParameters)::BaseType* stageParameters_ptr;
      mojo::internal::Serialize<::device::VRStageParametersPtr>(
          in_stageParameters, buffer, &stageParameters_ptr, context);
      result->stageParameters.Set(stageParameters_ptr);
      decltype(CallWithContext(Traits::leftEye, input, custom_context)) in_leftEye = CallWithContext(Traits::leftEye, input, custom_context);
      typename decltype(result->leftEye)::BaseType* leftEye_ptr;
      mojo::internal::Serialize<::device::VREyeParametersPtr>(
          in_leftEye, buffer, &leftEye_ptr, context);
      result->leftEye.Set(leftEye_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->leftEye.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null leftEye in VRDisplay struct");
      decltype(CallWithContext(Traits::rightEye, input, custom_context)) in_rightEye = CallWithContext(Traits::rightEye, input, custom_context);
      typename decltype(result->rightEye)::BaseType* rightEye_ptr;
      mojo::internal::Serialize<::device::VREyeParametersPtr>(
          in_rightEye, buffer, &rightEye_ptr, context);
      result->rightEye.Set(rightEye_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->rightEye.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null rightEye in VRDisplay struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::internal::VRDisplay_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::VRDisplayDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // DEVICE_VR_VR_SERVICE_MOJOM_H_