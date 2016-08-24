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

#include "third_party/WebKit/public/platform/mime_registry.mojom-blink.h"

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
#include "cc/ipc/surface_sequence_struct_traits.h"
#include "cc/ipc/surface_id_struct_traits.h"
#include "third_party/WebKit/Source/platform/mojo/KURLStructTraits.h"
#include "third_party/WebKit/Source/platform/mojo/SecurityOriginStructTraits.h"
namespace blink {
namespace mojom {
namespace blink {

namespace {

class MimeRegistry_GetMimeTypeFromExtension_ParamsDataView {
 public:
  MimeRegistry_GetMimeTypeFromExtension_ParamsDataView() {}

  MimeRegistry_GetMimeTypeFromExtension_ParamsDataView(
      internal::MimeRegistry_GetMimeTypeFromExtension_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetExtensionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadExtension(UserType* output) {
    auto pointer = data_->extension.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::MimeRegistry_GetMimeTypeFromExtension_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void MimeRegistry_GetMimeTypeFromExtension_ParamsDataView::GetExtensionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->extension.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class MimeRegistry_GetMimeTypeFromExtension_ResponseParamsDataView {
 public:
  MimeRegistry_GetMimeTypeFromExtension_ResponseParamsDataView() {}

  MimeRegistry_GetMimeTypeFromExtension_ResponseParamsDataView(
      internal::MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMimeTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadMimeType(UserType* output) {
    auto pointer = data_->mime_type.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void MimeRegistry_GetMimeTypeFromExtension_ResponseParamsDataView::GetMimeTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->mime_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}


}  // namespace
const char MimeRegistry::Name_[] = "blink::mojom::MimeRegistry";
const uint32_t MimeRegistry::Version_;
bool MimeRegistry::GetMimeTypeFromExtension(const WTF::String& extension, WTF::String* mime_type) {
  NOTREACHED();
  return false;
}
class MimeRegistry_GetMimeTypeFromExtension_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  MimeRegistry_GetMimeTypeFromExtension_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, WTF::String* out_mime_type)
      : serialization_context_(std::move(group_controller)), result_(result), out_mime_type_(out_mime_type) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  WTF::String* out_mime_type_;DISALLOW_COPY_AND_ASSIGN(MimeRegistry_GetMimeTypeFromExtension_HandleSyncResponse);
};
bool MimeRegistry_GetMimeTypeFromExtension_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data* params =
      reinterpret_cast<internal::MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  WTF::String p_mime_type{};
  MimeRegistry_GetMimeTypeFromExtension_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadMimeType(&p_mime_type))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MimeRegistry::GetMimeTypeFromExtension response deserializer");
    return false;
  }
  *out_mime_type_ = std::move(p_mime_type);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class MimeRegistry_GetMimeTypeFromExtension_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MimeRegistry_GetMimeTypeFromExtension_ForwardToCallback(
      const MimeRegistry::GetMimeTypeFromExtensionCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MimeRegistry::GetMimeTypeFromExtensionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(MimeRegistry_GetMimeTypeFromExtension_ForwardToCallback);
};
bool MimeRegistry_GetMimeTypeFromExtension_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data* params =
      reinterpret_cast<internal::MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  WTF::String p_mime_type{};
  MimeRegistry_GetMimeTypeFromExtension_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadMimeType(&p_mime_type))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MimeRegistry::GetMimeTypeFromExtension response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_mime_type));
  }
  return true;
}

MimeRegistryProxy::MimeRegistryProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
bool MimeRegistryProxy::GetMimeTypeFromExtension(
    const WTF::String& param_extension, WTF::String* param_mime_type) {
  size_t size = sizeof(::blink::mojom::internal::MimeRegistry_GetMimeTypeFromExtension_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      param_extension, &serialization_context_);

  mojo::internal::RequestMessageBuilder builder(internal::kMimeRegistry_GetMimeTypeFromExtension_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::blink::mojom::internal::MimeRegistry_GetMimeTypeFromExtension_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->extension)::BaseType* extension_ptr;
  mojo::internal::Serialize<mojo::String>(
      param_extension, builder.buffer(), &extension_ptr, &serialization_context_);
  params->extension.Set(extension_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->extension.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null extension in MimeRegistry.GetMimeTypeFromExtension request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new MimeRegistry_GetMimeTypeFromExtension_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_mime_type);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void MimeRegistryProxy::GetMimeTypeFromExtension(
    const WTF::String& in_extension, const GetMimeTypeFromExtensionCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::MimeRegistry_GetMimeTypeFromExtension_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_extension, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kMimeRegistry_GetMimeTypeFromExtension_Name, size);

  auto params =
      ::blink::mojom::internal::MimeRegistry_GetMimeTypeFromExtension_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->extension)::BaseType* extension_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_extension, builder.buffer(), &extension_ptr, &serialization_context_);
  params->extension.Set(extension_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->extension.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null extension in MimeRegistry.GetMimeTypeFromExtension request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new MimeRegistry_GetMimeTypeFromExtension_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class MimeRegistry_GetMimeTypeFromExtension_ProxyToResponder {
 public:
  static MimeRegistry::GetMimeTypeFromExtensionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<MimeRegistry_GetMimeTypeFromExtension_ProxyToResponder> proxy(
        new MimeRegistry_GetMimeTypeFromExtension_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&MimeRegistry_GetMimeTypeFromExtension_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~MimeRegistry_GetMimeTypeFromExtension_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "MimeRegistry::GetMimeTypeFromExtension() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  MimeRegistry_GetMimeTypeFromExtension_ProxyToResponder(
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
      const WTF::String& in_mime_type);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(MimeRegistry_GetMimeTypeFromExtension_ProxyToResponder);
};

void MimeRegistry_GetMimeTypeFromExtension_ProxyToResponder::Run(
    const WTF::String& in_mime_type) {
  size_t size = sizeof(::blink::mojom::internal::MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_mime_type, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kMimeRegistry_GetMimeTypeFromExtension_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->mime_type)::BaseType* mime_type_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_mime_type, builder.buffer(), &mime_type_ptr, &serialization_context_);
  params->mime_type.Set(mime_type_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->mime_type.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null mime_type in MimeRegistry.GetMimeTypeFromExtension response");
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

MimeRegistryStub::MimeRegistryStub()
    : sink_(nullptr),
      control_message_handler_(MimeRegistry::Version_) {
}

MimeRegistryStub::~MimeRegistryStub() {}

bool MimeRegistryStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kMimeRegistry_GetMimeTypeFromExtension_Name: {
      break;
    }
  }
  return false;
}

bool MimeRegistryStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kMimeRegistry_GetMimeTypeFromExtension_Name: {
      internal::MimeRegistry_GetMimeTypeFromExtension_Params_Data* params =
          reinterpret_cast<internal::MimeRegistry_GetMimeTypeFromExtension_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WTF::String p_extension{};
      MimeRegistry_GetMimeTypeFromExtension_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadExtension(&p_extension))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MimeRegistry::GetMimeTypeFromExtension deserializer");
        return false;
      }
      MimeRegistry::GetMimeTypeFromExtensionCallback callback =
          MimeRegistry_GetMimeTypeFromExtension_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MimeRegistry::GetMimeTypeFromExtension");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetMimeTypeFromExtension(
std::move(p_extension), callback);
      return true;
    }
  }
  return false;
}

MimeRegistryRequestValidator::MimeRegistryRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool MimeRegistryRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "MimeRegistry RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kMimeRegistry_GetMimeTypeFromExtension_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MimeRegistry_GetMimeTypeFromExtension_Params_Data>(
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

MimeRegistryResponseValidator::MimeRegistryResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool MimeRegistryResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "MimeRegistry ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kMimeRegistry_GetMimeTypeFromExtension_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data>(
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
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif