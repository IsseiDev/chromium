// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "device/vr/vr_service.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/trace_event/trace_event.h"
#include "mojo/public/cpp/bindings/lib/message_builder.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace device {
namespace blink {

namespace {

class VRService_SetClient_ParamsDataView {
 public:
  VRService_SetClient_ParamsDataView() {}

  VRService_SetClient_ParamsDataView(
      internal::VRService_SetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  VRServiceClientPtr TakeClient() {
    VRServiceClientPtr result;
    bool ret =
        mojo::internal::Deserialize<::device::blink::VRServiceClientPtr>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VRService_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class VRService_GetDisplays_ParamsDataView {
 public:
  VRService_GetDisplays_ParamsDataView() {}

  VRService_GetDisplays_ParamsDataView(
      internal::VRService_GetDisplays_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VRService_GetDisplays_Params_Data* data_ = nullptr;
};



class VRService_GetDisplays_ResponseParamsDataView {
 public:
  VRService_GetDisplays_ResponseParamsDataView() {}

  VRService_GetDisplays_ResponseParamsDataView(
      internal::VRService_GetDisplays_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDisplaysDataView(
      mojo::ArrayDataView<VRDisplayDataView>* output);

  template <typename UserType>
  bool ReadDisplays(UserType* output) {
    auto pointer = data_->displays.Get();
    return mojo::internal::Deserialize<mojo::Array<::device::blink::VRDisplayPtr>>(
        pointer, output, context_);
  }
 private:
  internal::VRService_GetDisplays_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void VRService_GetDisplays_ResponseParamsDataView::GetDisplaysDataView(
    mojo::ArrayDataView<VRDisplayDataView>* output) {
  auto pointer = data_->displays.Get();
  *output = mojo::ArrayDataView<VRDisplayDataView>(pointer, context_);
}


class VRService_GetPose_ParamsDataView {
 public:
  VRService_GetPose_ParamsDataView() {}

  VRService_GetPose_ParamsDataView(
      internal::VRService_GetPose_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t index() const {
    return data_->index;
  }
 private:
  internal::VRService_GetPose_Params_Data* data_ = nullptr;
};



class VRService_GetPose_ResponseParamsDataView {
 public:
  VRService_GetPose_ResponseParamsDataView() {}

  VRService_GetPose_ResponseParamsDataView(
      internal::VRService_GetPose_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPoseDataView(
      VRPoseDataView* output);

  template <typename UserType>
  bool ReadPose(UserType* output) {
    auto pointer = data_->pose.Get();
    return mojo::internal::Deserialize<::device::blink::VRPosePtr>(
        pointer, output, context_);
  }
 private:
  internal::VRService_GetPose_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void VRService_GetPose_ResponseParamsDataView::GetPoseDataView(
    VRPoseDataView* output) {
  auto pointer = data_->pose.Get();
  *output = VRPoseDataView(pointer, context_);
}


class VRService_ResetPose_ParamsDataView {
 public:
  VRService_ResetPose_ParamsDataView() {}

  VRService_ResetPose_ParamsDataView(
      internal::VRService_ResetPose_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t index() const {
    return data_->index;
  }
 private:
  internal::VRService_ResetPose_Params_Data* data_ = nullptr;
};




class VRServiceClient_OnDisplayChanged_ParamsDataView {
 public:
  VRServiceClient_OnDisplayChanged_ParamsDataView() {}

  VRServiceClient_OnDisplayChanged_ParamsDataView(
      internal::VRServiceClient_OnDisplayChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDisplayDataView(
      VRDisplayDataView* output);

  template <typename UserType>
  bool ReadDisplay(UserType* output) {
    auto pointer = data_->display.Get();
    return mojo::internal::Deserialize<::device::blink::VRDisplayPtr>(
        pointer, output, context_);
  }
 private:
  internal::VRServiceClient_OnDisplayChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void VRServiceClient_OnDisplayChanged_ParamsDataView::GetDisplayDataView(
    VRDisplayDataView* output) {
  auto pointer = data_->display.Get();
  *output = VRDisplayDataView(pointer, context_);
}


}  // namespace// static
VRFieldOfViewPtr VRFieldOfView::New() {
  VRFieldOfViewPtr rv;
  mojo::internal::StructHelper<VRFieldOfView>::Initialize(&rv);
  return rv;
}

VRFieldOfView::VRFieldOfView()
    : upDegrees(),
      downDegrees(),
      leftDegrees(),
      rightDegrees() {
}

VRFieldOfView::~VRFieldOfView() {
}// static
VRPosePtr VRPose::New() {
  VRPosePtr rv;
  mojo::internal::StructHelper<VRPose>::Initialize(&rv);
  return rv;
}

VRPose::VRPose()
    : timestamp(),
      orientation(nullptr),
      position(nullptr),
      angularVelocity(nullptr),
      linearVelocity(nullptr),
      angularAcceleration(nullptr),
      linearAcceleration(nullptr) {
}

VRPose::~VRPose() {
}// static
VRDisplayCapabilitiesPtr VRDisplayCapabilities::New() {
  VRDisplayCapabilitiesPtr rv;
  mojo::internal::StructHelper<VRDisplayCapabilities>::Initialize(&rv);
  return rv;
}

VRDisplayCapabilities::VRDisplayCapabilities()
    : hasOrientation(),
      hasPosition(),
      hasExternalDisplay(),
      canPresent() {
}

VRDisplayCapabilities::~VRDisplayCapabilities() {
}// static
VREyeParametersPtr VREyeParameters::New() {
  VREyeParametersPtr rv;
  mojo::internal::StructHelper<VREyeParameters>::Initialize(&rv);
  return rv;
}

VREyeParameters::VREyeParameters()
    : fieldOfView(),
      offset(nullptr),
      renderWidth(),
      renderHeight() {
}

VREyeParameters::~VREyeParameters() {
}// static
VRStageParametersPtr VRStageParameters::New() {
  VRStageParametersPtr rv;
  mojo::internal::StructHelper<VRStageParameters>::Initialize(&rv);
  return rv;
}

VRStageParameters::VRStageParameters()
    : standingTransform(nullptr),
      sizeX(),
      sizeZ() {
}

VRStageParameters::~VRStageParameters() {
}// static
VRDisplayPtr VRDisplay::New() {
  VRDisplayPtr rv;
  mojo::internal::StructHelper<VRDisplay>::Initialize(&rv);
  return rv;
}

VRDisplay::VRDisplay()
    : index(),
      displayName(),
      capabilities(),
      stageParameters(),
      leftEye(),
      rightEye() {
}

VRDisplay::~VRDisplay() {
}
const char VRService::Name_[] = "device::VRService";
const uint32_t VRService::Version_;
bool VRService::GetPose(uint32_t index, VRPosePtr* pose) {
  NOTREACHED();
  return false;
}

class VRService_GetDisplays_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VRService_GetDisplays_ForwardToCallback(
      const VRService::GetDisplaysCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VRService::GetDisplaysCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(VRService_GetDisplays_ForwardToCallback);
};
bool VRService_GetDisplays_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::VRService_GetDisplays_ResponseParams_Data* params =
      reinterpret_cast<internal::VRService_GetDisplays_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  mojo::WTFArray<VRDisplayPtr> p_displays{};
  VRService_GetDisplays_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadDisplays(&p_displays))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VRService::GetDisplays response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_displays));
  }
  return true;
}
class VRService_GetPose_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  VRService_GetPose_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, VRPosePtr* out_pose)
      : serialization_context_(std::move(group_controller)), result_(result), out_pose_(out_pose) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  VRPosePtr* out_pose_;DISALLOW_COPY_AND_ASSIGN(VRService_GetPose_HandleSyncResponse);
};
bool VRService_GetPose_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::VRService_GetPose_ResponseParams_Data* params =
      reinterpret_cast<internal::VRService_GetPose_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  VRPosePtr p_pose{};
  VRService_GetPose_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadPose(&p_pose))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VRService::GetPose response deserializer");
    return false;
  }
  *out_pose_ = std::move(p_pose);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class VRService_GetPose_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VRService_GetPose_ForwardToCallback(
      const VRService::GetPoseCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VRService::GetPoseCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(VRService_GetPose_ForwardToCallback);
};
bool VRService_GetPose_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::VRService_GetPose_ResponseParams_Data* params =
      reinterpret_cast<internal::VRService_GetPose_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  VRPosePtr p_pose{};
  VRService_GetPose_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadPose(&p_pose))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VRService::GetPose response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_pose));
  }
  return true;
}

VRServiceProxy::VRServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void VRServiceProxy::SetClient(
    VRServiceClientPtr in_client) {
  size_t size = sizeof(::device::internal::VRService_SetClient_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kVRService_SetClient_Name, size);

  auto params =
      ::device::internal::VRService_SetClient_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::device::blink::VRServiceClientPtr>(
      in_client, &params->client, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in VRService.SetClient request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void VRServiceProxy::GetDisplays(
    const GetDisplaysCallback& callback) {
  size_t size = sizeof(::device::internal::VRService_GetDisplays_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kVRService_GetDisplays_Name, size);

  auto params =
      ::device::internal::VRService_GetDisplays_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new VRService_GetDisplays_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
bool VRServiceProxy::GetPose(
    uint32_t param_index, VRPosePtr* param_pose) {
  size_t size = sizeof(::device::internal::VRService_GetPose_Params_Data);

  mojo::internal::RequestMessageBuilder builder(internal::kVRService_GetPose_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::device::internal::VRService_GetPose_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->index = param_index;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new VRService_GetPose_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_pose);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void VRServiceProxy::GetPose(
    uint32_t in_index, const GetPoseCallback& callback) {
  size_t size = sizeof(::device::internal::VRService_GetPose_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kVRService_GetPose_Name, size);

  auto params =
      ::device::internal::VRService_GetPose_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->index = in_index;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new VRService_GetPose_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void VRServiceProxy::ResetPose(
    uint32_t in_index) {
  size_t size = sizeof(::device::internal::VRService_ResetPose_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kVRService_ResetPose_Name, size);

  auto params =
      ::device::internal::VRService_ResetPose_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->index = in_index;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}
class VRService_GetDisplays_ProxyToResponder {
 public:
  static VRService::GetDisplaysCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<VRService_GetDisplays_ProxyToResponder> proxy(
        new VRService_GetDisplays_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&VRService_GetDisplays_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~VRService_GetDisplays_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "VRService::GetDisplays() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  VRService_GetDisplays_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      mojo::WTFArray<VRDisplayPtr> in_displays);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(VRService_GetDisplays_ProxyToResponder);
};

void VRService_GetDisplays_ProxyToResponder::Run(
    mojo::WTFArray<VRDisplayPtr> in_displays) {
  size_t size = sizeof(::device::internal::VRService_GetDisplays_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::device::blink::VRDisplayPtr>>(
      in_displays, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kVRService_GetDisplays_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::device::internal::VRService_GetDisplays_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->displays)::BaseType* displays_ptr;
  const mojo::internal::ContainerValidateParams displays_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::device::blink::VRDisplayPtr>>(
      in_displays, builder.buffer(), &displays_ptr, &displays_validate_params,
      &serialization_context_);
  params->displays.Set(displays_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->displays.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null displays in VRService.GetDisplays response");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class VRService_GetPose_ProxyToResponder {
 public:
  static VRService::GetPoseCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<VRService_GetPose_ProxyToResponder> proxy(
        new VRService_GetPose_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&VRService_GetPose_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~VRService_GetPose_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "VRService::GetPose() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  VRService_GetPose_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      VRPosePtr in_pose);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(VRService_GetPose_ProxyToResponder);
};

void VRService_GetPose_ProxyToResponder::Run(
    VRPosePtr in_pose) {
  size_t size = sizeof(::device::internal::VRService_GetPose_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::device::blink::VRPosePtr>(
      in_pose, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kVRService_GetPose_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::device::internal::VRService_GetPose_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->pose)::BaseType* pose_ptr;
  mojo::internal::Serialize<::device::blink::VRPosePtr>(
      in_pose, builder.buffer(), &pose_ptr, &serialization_context_);
  params->pose.Set(pose_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pose.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pose in VRService.GetPose response");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

VRServiceStub::VRServiceStub()
    : sink_(nullptr),
      control_message_handler_(VRService::Version_) {
}

VRServiceStub::~VRServiceStub() {}

bool VRServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kVRService_SetClient_Name: {
      internal::VRService_SetClient_Params_Data* params =
          reinterpret_cast<internal::VRService_SetClient_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      VRServiceClientPtr p_client{};
      VRService_SetClient_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_client = input_data_view.TakeClient();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRService::SetClient deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "VRService::SetClient");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetClient(
std::move(p_client));
      return true;
    }
    case internal::kVRService_GetDisplays_Name: {
      break;
    }
    case internal::kVRService_GetPose_Name: {
      break;
    }
    case internal::kVRService_ResetPose_Name: {
      internal::VRService_ResetPose_Params_Data* params =
          reinterpret_cast<internal::VRService_ResetPose_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_index{};
      VRService_ResetPose_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_index = input_data_view.index();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRService::ResetPose deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "VRService::ResetPose");
      mojo::internal::MessageDispatchContext context(message);
      sink_->ResetPose(
std::move(p_index));
      return true;
    }
  }
  return false;
}

bool VRServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kVRService_SetClient_Name: {
      break;
    }
    case internal::kVRService_GetDisplays_Name: {
      internal::VRService_GetDisplays_Params_Data* params =
          reinterpret_cast<internal::VRService_GetDisplays_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      VRService_GetDisplays_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRService::GetDisplays deserializer");
        return false;
      }
      VRService::GetDisplaysCallback callback =
          VRService_GetDisplays_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "VRService::GetDisplays");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetDisplays(callback);
      return true;
    }
    case internal::kVRService_GetPose_Name: {
      internal::VRService_GetPose_Params_Data* params =
          reinterpret_cast<internal::VRService_GetPose_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_index{};
      VRService_GetPose_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_index = input_data_view.index();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRService::GetPose deserializer");
        return false;
      }
      VRService::GetPoseCallback callback =
          VRService_GetPose_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "VRService::GetPose");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetPose(
std::move(p_index), callback);
      return true;
    }
    case internal::kVRService_ResetPose_Name: {
      break;
    }
  }
  return false;
}

VRServiceRequestValidator::VRServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool VRServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "VRService RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kVRService_SetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRService_SetClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kVRService_GetDisplays_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRService_GetDisplays_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kVRService_GetPose_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRService_GetPose_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kVRService_ResetPose_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRService_ResetPose_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

VRServiceResponseValidator::VRServiceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool VRServiceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "VRService ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kVRService_GetDisplays_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRService_GetDisplays_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kVRService_GetPose_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRService_GetPose_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
const char VRServiceClient::Name_[] = "device::VRServiceClient";
const uint32_t VRServiceClient::Version_;

VRServiceClientProxy::VRServiceClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void VRServiceClientProxy::OnDisplayChanged(
    VRDisplayPtr in_display) {
  size_t size = sizeof(::device::internal::VRServiceClient_OnDisplayChanged_Params_Data);
  size += mojo::internal::PrepareToSerialize<::device::blink::VRDisplayPtr>(
      in_display, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kVRServiceClient_OnDisplayChanged_Name, size);

  auto params =
      ::device::internal::VRServiceClient_OnDisplayChanged_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->display)::BaseType* display_ptr;
  mojo::internal::Serialize<::device::blink::VRDisplayPtr>(
      in_display, builder.buffer(), &display_ptr, &serialization_context_);
  params->display.Set(display_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->display.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null display in VRServiceClient.OnDisplayChanged request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

VRServiceClientStub::VRServiceClientStub()
    : sink_(nullptr),
      control_message_handler_(VRServiceClient::Version_) {
}

VRServiceClientStub::~VRServiceClientStub() {}

bool VRServiceClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kVRServiceClient_OnDisplayChanged_Name: {
      internal::VRServiceClient_OnDisplayChanged_Params_Data* params =
          reinterpret_cast<internal::VRServiceClient_OnDisplayChanged_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      VRDisplayPtr p_display{};
      VRServiceClient_OnDisplayChanged_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadDisplay(&p_display))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRServiceClient::OnDisplayChanged deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "VRServiceClient::OnDisplayChanged");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnDisplayChanged(
std::move(p_display));
      return true;
    }
  }
  return false;
}

bool VRServiceClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kVRServiceClient_OnDisplayChanged_Name: {
      break;
    }
  }
  return false;
}

VRServiceClientRequestValidator::VRServiceClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool VRServiceClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "VRServiceClient RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kVRServiceClient_OnDisplayChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRServiceClient_OnDisplayChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

}  // namespace blink
}  // namespace device

namespace mojo {


// static
bool StructTraits<::device::blink::VRFieldOfView, ::device::blink::VRFieldOfViewPtr>::Read(
    ::device::blink::VRFieldOfViewDataView input,
    ::device::blink::VRFieldOfViewPtr* output) {
  bool success = true;
  ::device::blink::VRFieldOfViewPtr result(::device::blink::VRFieldOfView::New());
  
      result->upDegrees = input.upDegrees();
      result->downDegrees = input.downDegrees();
      result->leftDegrees = input.leftDegrees();
      result->rightDegrees = input.rightDegrees();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::blink::VRPose, ::device::blink::VRPosePtr>::Read(
    ::device::blink::VRPoseDataView input,
    ::device::blink::VRPosePtr* output) {
  bool success = true;
  ::device::blink::VRPosePtr result(::device::blink::VRPose::New());
  
      result->timestamp = input.timestamp();
      if (!input.ReadOrientation(&result->orientation))
        success = false;
      if (!input.ReadPosition(&result->position))
        success = false;
      if (!input.ReadAngularvelocity(&result->angularVelocity))
        success = false;
      if (!input.ReadLinearvelocity(&result->linearVelocity))
        success = false;
      if (!input.ReadAngularacceleration(&result->angularAcceleration))
        success = false;
      if (!input.ReadLinearacceleration(&result->linearAcceleration))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::blink::VRDisplayCapabilities, ::device::blink::VRDisplayCapabilitiesPtr>::Read(
    ::device::blink::VRDisplayCapabilitiesDataView input,
    ::device::blink::VRDisplayCapabilitiesPtr* output) {
  bool success = true;
  ::device::blink::VRDisplayCapabilitiesPtr result(::device::blink::VRDisplayCapabilities::New());
  
      result->hasOrientation = input.hasOrientation();
      result->hasPosition = input.hasPosition();
      result->hasExternalDisplay = input.hasExternalDisplay();
      result->canPresent = input.canPresent();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::blink::VREyeParameters, ::device::blink::VREyeParametersPtr>::Read(
    ::device::blink::VREyeParametersDataView input,
    ::device::blink::VREyeParametersPtr* output) {
  bool success = true;
  ::device::blink::VREyeParametersPtr result(::device::blink::VREyeParameters::New());
  
      if (!input.ReadFieldofview(&result->fieldOfView))
        success = false;
      if (!input.ReadOffset(&result->offset))
        success = false;
      result->renderWidth = input.renderWidth();
      result->renderHeight = input.renderHeight();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::blink::VRStageParameters, ::device::blink::VRStageParametersPtr>::Read(
    ::device::blink::VRStageParametersDataView input,
    ::device::blink::VRStageParametersPtr* output) {
  bool success = true;
  ::device::blink::VRStageParametersPtr result(::device::blink::VRStageParameters::New());
  
      if (!input.ReadStandingtransform(&result->standingTransform))
        success = false;
      result->sizeX = input.sizeX();
      result->sizeZ = input.sizeZ();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::blink::VRDisplay, ::device::blink::VRDisplayPtr>::Read(
    ::device::blink::VRDisplayDataView input,
    ::device::blink::VRDisplayPtr* output) {
  bool success = true;
  ::device::blink::VRDisplayPtr result(::device::blink::VRDisplay::New());
  
      result->index = input.index();
      if (!input.ReadDisplayname(&result->displayName))
        success = false;
      if (!input.ReadCapabilities(&result->capabilities))
        success = false;
      if (!input.ReadStageparameters(&result->stageParameters))
        success = false;
      if (!input.ReadLefteye(&result->leftEye))
        success = false;
      if (!input.ReadRighteye(&result->rightEye))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif