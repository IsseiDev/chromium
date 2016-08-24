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

#include "chrome/browser/ui/webui/plugins/plugins.mojom.h"

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
namespace mojom {

namespace {

class PluginsPageHandler_GetPluginsData_ParamsDataView {
 public:
  PluginsPageHandler_GetPluginsData_ParamsDataView() {}

  PluginsPageHandler_GetPluginsData_ParamsDataView(
      internal::PluginsPageHandler_GetPluginsData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PluginsPageHandler_GetPluginsData_Params_Data* data_ = nullptr;
};



class PluginsPageHandler_GetPluginsData_ResponseParamsDataView {
 public:
  PluginsPageHandler_GetPluginsData_ResponseParamsDataView() {}

  PluginsPageHandler_GetPluginsData_ResponseParamsDataView(
      internal::PluginsPageHandler_GetPluginsData_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPluginsDataView(
      mojo::ArrayDataView<PluginDataDataView>* output);

  template <typename UserType>
  bool ReadPlugins(UserType* output) {
    auto pointer = data_->plugins.Get();
    return mojo::internal::Deserialize<mojo::Array<::mojom::PluginDataPtr>>(
        pointer, output, context_);
  }
 private:
  internal::PluginsPageHandler_GetPluginsData_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PluginsPageHandler_GetPluginsData_ResponseParamsDataView::GetPluginsDataView(
    mojo::ArrayDataView<PluginDataDataView>* output) {
  auto pointer = data_->plugins.Get();
  *output = mojo::ArrayDataView<PluginDataDataView>(pointer, context_);
}


class PluginsPageHandler_GetShowDetails_ParamsDataView {
 public:
  PluginsPageHandler_GetShowDetails_ParamsDataView() {}

  PluginsPageHandler_GetShowDetails_ParamsDataView(
      internal::PluginsPageHandler_GetShowDetails_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PluginsPageHandler_GetShowDetails_Params_Data* data_ = nullptr;
};



class PluginsPageHandler_GetShowDetails_ResponseParamsDataView {
 public:
  PluginsPageHandler_GetShowDetails_ResponseParamsDataView() {}

  PluginsPageHandler_GetShowDetails_ResponseParamsDataView(
      internal::PluginsPageHandler_GetShowDetails_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool show_details() const {
    return data_->show_details;
  }
 private:
  internal::PluginsPageHandler_GetShowDetails_ResponseParams_Data* data_ = nullptr;
};




class PluginsPageHandler_SaveShowDetailsToPrefs_ParamsDataView {
 public:
  PluginsPageHandler_SaveShowDetailsToPrefs_ParamsDataView() {}

  PluginsPageHandler_SaveShowDetailsToPrefs_ParamsDataView(
      internal::PluginsPageHandler_SaveShowDetailsToPrefs_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool details_mode() const {
    return data_->details_mode;
  }
 private:
  internal::PluginsPageHandler_SaveShowDetailsToPrefs_Params_Data* data_ = nullptr;
};




class PluginsPageHandler_SetPluginAlwaysAllowed_ParamsDataView {
 public:
  PluginsPageHandler_SetPluginAlwaysAllowed_ParamsDataView() {}

  PluginsPageHandler_SetPluginAlwaysAllowed_ParamsDataView(
      internal::PluginsPageHandler_SetPluginAlwaysAllowed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPluginDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPlugin(UserType* output) {
    auto pointer = data_->plugin.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  bool allowed() const {
    return data_->allowed;
  }
 private:
  internal::PluginsPageHandler_SetPluginAlwaysAllowed_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PluginsPageHandler_SetPluginAlwaysAllowed_ParamsDataView::GetPluginDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->plugin.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class PluginsPageHandler_SetPluginEnabled_ParamsDataView {
 public:
  PluginsPageHandler_SetPluginEnabled_ParamsDataView() {}

  PluginsPageHandler_SetPluginEnabled_ParamsDataView(
      internal::PluginsPageHandler_SetPluginEnabled_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPluginPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPluginPath(UserType* output) {
    auto pointer = data_->plugin_path.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  bool enable() const {
    return data_->enable;
  }
 private:
  internal::PluginsPageHandler_SetPluginEnabled_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PluginsPageHandler_SetPluginEnabled_ParamsDataView::GetPluginPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->plugin_path.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class PluginsPageHandler_SetPluginGroupEnabled_ParamsDataView {
 public:
  PluginsPageHandler_SetPluginGroupEnabled_ParamsDataView() {}

  PluginsPageHandler_SetPluginGroupEnabled_ParamsDataView(
      internal::PluginsPageHandler_SetPluginGroupEnabled_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGroupNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadGroupName(UserType* output) {
    auto pointer = data_->group_name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  bool enable() const {
    return data_->enable;
  }
 private:
  internal::PluginsPageHandler_SetPluginGroupEnabled_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PluginsPageHandler_SetPluginGroupEnabled_ParamsDataView::GetGroupNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->group_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class PluginsPageHandler_SetClientPage_ParamsDataView {
 public:
  PluginsPageHandler_SetClientPage_ParamsDataView() {}

  PluginsPageHandler_SetClientPage_ParamsDataView(
      internal::PluginsPageHandler_SetClientPage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  PluginsPagePtr TakePage() {
    PluginsPagePtr result;
    bool ret =
        mojo::internal::Deserialize<::mojom::PluginsPagePtr>(
            &data_->page, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PluginsPageHandler_SetClientPage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class PluginsPage_OnPluginsUpdated_ParamsDataView {
 public:
  PluginsPage_OnPluginsUpdated_ParamsDataView() {}

  PluginsPage_OnPluginsUpdated_ParamsDataView(
      internal::PluginsPage_OnPluginsUpdated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPluginsDataView(
      mojo::ArrayDataView<PluginDataDataView>* output);

  template <typename UserType>
  bool ReadPlugins(UserType* output) {
    auto pointer = data_->plugins.Get();
    return mojo::internal::Deserialize<mojo::Array<::mojom::PluginDataPtr>>(
        pointer, output, context_);
  }
 private:
  internal::PluginsPage_OnPluginsUpdated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PluginsPage_OnPluginsUpdated_ParamsDataView::GetPluginsDataView(
    mojo::ArrayDataView<PluginDataDataView>* output) {
  auto pointer = data_->plugins.Get();
  *output = mojo::ArrayDataView<PluginDataDataView>(pointer, context_);
}


}  // namespace// static
MimeTypePtr MimeType::New() {
  MimeTypePtr rv;
  mojo::internal::StructHelper<MimeType>::Initialize(&rv);
  return rv;
}

MimeType::MimeType()
    : description(nullptr),
      file_extensions(nullptr),
      mime_type(nullptr) {
}

MimeType::~MimeType() {
}// static
PluginFilePtr PluginFile::New() {
  PluginFilePtr rv;
  mojo::internal::StructHelper<PluginFile>::Initialize(&rv);
  return rv;
}

PluginFile::PluginFile()
    : description(nullptr),
      enabled_mode(nullptr),
      mime_types(nullptr),
      name(nullptr),
      path(nullptr),
      type(nullptr),
      version(nullptr) {
}

PluginFile::~PluginFile() {
}// static
PluginDataPtr PluginData::New() {
  PluginDataPtr rv;
  mojo::internal::StructHelper<PluginData>::Initialize(&rv);
  return rv;
}

PluginData::PluginData()
    : always_allowed(),
      trusted(),
      policy_click_to_play(),
      description(nullptr),
      critical(),
      enabled_mode(nullptr),
      id(nullptr),
      name(nullptr),
      update_url(nullptr),
      version(nullptr),
      plugin_files(nullptr) {
}

PluginData::~PluginData() {
}
const char PluginsPageHandler::Name_[] = "mojom::PluginsPageHandler";
const uint32_t PluginsPageHandler::Version_;

class PluginsPageHandler_GetPluginsData_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PluginsPageHandler_GetPluginsData_ForwardToCallback(
      const PluginsPageHandler::GetPluginsDataCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PluginsPageHandler::GetPluginsDataCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(PluginsPageHandler_GetPluginsData_ForwardToCallback);
};
bool PluginsPageHandler_GetPluginsData_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PluginsPageHandler_GetPluginsData_ResponseParams_Data* params =
      reinterpret_cast<internal::PluginsPageHandler_GetPluginsData_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  mojo::Array<PluginDataPtr> p_plugins{};
  PluginsPageHandler_GetPluginsData_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadPlugins(&p_plugins))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PluginsPageHandler::GetPluginsData response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_plugins));
  }
  return true;
}

class PluginsPageHandler_GetShowDetails_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PluginsPageHandler_GetShowDetails_ForwardToCallback(
      const PluginsPageHandler::GetShowDetailsCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PluginsPageHandler::GetShowDetailsCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(PluginsPageHandler_GetShowDetails_ForwardToCallback);
};
bool PluginsPageHandler_GetShowDetails_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PluginsPageHandler_GetShowDetails_ResponseParams_Data* params =
      reinterpret_cast<internal::PluginsPageHandler_GetShowDetails_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  bool p_show_details{};
  PluginsPageHandler_GetShowDetails_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_show_details = input_data_view.show_details();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PluginsPageHandler::GetShowDetails response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_show_details));
  }
  return true;
}

PluginsPageHandlerProxy::PluginsPageHandlerProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void PluginsPageHandlerProxy::GetPluginsData(
    const GetPluginsDataCallback& callback) {
  size_t size = sizeof(::mojom::internal::PluginsPageHandler_GetPluginsData_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kPluginsPageHandler_GetPluginsData_Name, size);

  auto params =
      ::mojom::internal::PluginsPageHandler_GetPluginsData_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PluginsPageHandler_GetPluginsData_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void PluginsPageHandlerProxy::GetShowDetails(
    const GetShowDetailsCallback& callback) {
  size_t size = sizeof(::mojom::internal::PluginsPageHandler_GetShowDetails_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kPluginsPageHandler_GetShowDetails_Name, size);

  auto params =
      ::mojom::internal::PluginsPageHandler_GetShowDetails_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PluginsPageHandler_GetShowDetails_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void PluginsPageHandlerProxy::SaveShowDetailsToPrefs(
    bool in_details_mode) {
  size_t size = sizeof(::mojom::internal::PluginsPageHandler_SaveShowDetailsToPrefs_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kPluginsPageHandler_SaveShowDetailsToPrefs_Name, size);

  auto params =
      ::mojom::internal::PluginsPageHandler_SaveShowDetailsToPrefs_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->details_mode = in_details_mode;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PluginsPageHandlerProxy::SetPluginAlwaysAllowed(
    const mojo::String& in_plugin, bool in_allowed) {
  size_t size = sizeof(::mojom::internal::PluginsPageHandler_SetPluginAlwaysAllowed_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_plugin, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPluginsPageHandler_SetPluginAlwaysAllowed_Name, size);

  auto params =
      ::mojom::internal::PluginsPageHandler_SetPluginAlwaysAllowed_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->plugin)::BaseType* plugin_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_plugin, builder.buffer(), &plugin_ptr, &serialization_context_);
  params->plugin.Set(plugin_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->plugin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null plugin in PluginsPageHandler.SetPluginAlwaysAllowed request");
  params->allowed = in_allowed;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PluginsPageHandlerProxy::SetPluginEnabled(
    const mojo::String& in_plugin_path, bool in_enable) {
  size_t size = sizeof(::mojom::internal::PluginsPageHandler_SetPluginEnabled_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_plugin_path, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPluginsPageHandler_SetPluginEnabled_Name, size);

  auto params =
      ::mojom::internal::PluginsPageHandler_SetPluginEnabled_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->plugin_path)::BaseType* plugin_path_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_plugin_path, builder.buffer(), &plugin_path_ptr, &serialization_context_);
  params->plugin_path.Set(plugin_path_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->plugin_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null plugin_path in PluginsPageHandler.SetPluginEnabled request");
  params->enable = in_enable;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PluginsPageHandlerProxy::SetPluginGroupEnabled(
    const mojo::String& in_group_name, bool in_enable) {
  size_t size = sizeof(::mojom::internal::PluginsPageHandler_SetPluginGroupEnabled_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_group_name, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPluginsPageHandler_SetPluginGroupEnabled_Name, size);

  auto params =
      ::mojom::internal::PluginsPageHandler_SetPluginGroupEnabled_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->group_name)::BaseType* group_name_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_group_name, builder.buffer(), &group_name_ptr, &serialization_context_);
  params->group_name.Set(group_name_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->group_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null group_name in PluginsPageHandler.SetPluginGroupEnabled request");
  params->enable = in_enable;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PluginsPageHandlerProxy::SetClientPage(
    PluginsPagePtr in_page) {
  size_t size = sizeof(::mojom::internal::PluginsPageHandler_SetClientPage_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kPluginsPageHandler_SetClientPage_Name, size);

  auto params =
      ::mojom::internal::PluginsPageHandler_SetClientPage_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::mojom::PluginsPagePtr>(
      in_page, &params->page, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->page),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid page in PluginsPageHandler.SetClientPage request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}
class PluginsPageHandler_GetPluginsData_ProxyToResponder {
 public:
  static PluginsPageHandler::GetPluginsDataCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<PluginsPageHandler_GetPluginsData_ProxyToResponder> proxy(
        new PluginsPageHandler_GetPluginsData_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&PluginsPageHandler_GetPluginsData_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~PluginsPageHandler_GetPluginsData_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "PluginsPageHandler::GetPluginsData() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  PluginsPageHandler_GetPluginsData_ProxyToResponder(
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
      mojo::Array<PluginDataPtr> in_plugins);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(PluginsPageHandler_GetPluginsData_ProxyToResponder);
};

void PluginsPageHandler_GetPluginsData_ProxyToResponder::Run(
    mojo::Array<PluginDataPtr> in_plugins) {
  size_t size = sizeof(::mojom::internal::PluginsPageHandler_GetPluginsData_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::mojom::PluginDataPtr>>(
      in_plugins, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPluginsPageHandler_GetPluginsData_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::mojom::internal::PluginsPageHandler_GetPluginsData_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->plugins)::BaseType* plugins_ptr;
  const mojo::internal::ContainerValidateParams plugins_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::mojom::PluginDataPtr>>(
      in_plugins, builder.buffer(), &plugins_ptr, &plugins_validate_params,
      &serialization_context_);
  params->plugins.Set(plugins_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->plugins.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null plugins in PluginsPageHandler.GetPluginsData response");
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
class PluginsPageHandler_GetShowDetails_ProxyToResponder {
 public:
  static PluginsPageHandler::GetShowDetailsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<PluginsPageHandler_GetShowDetails_ProxyToResponder> proxy(
        new PluginsPageHandler_GetShowDetails_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&PluginsPageHandler_GetShowDetails_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~PluginsPageHandler_GetShowDetails_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "PluginsPageHandler::GetShowDetails() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  PluginsPageHandler_GetShowDetails_ProxyToResponder(
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
      bool in_show_details);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(PluginsPageHandler_GetShowDetails_ProxyToResponder);
};

void PluginsPageHandler_GetShowDetails_ProxyToResponder::Run(
    bool in_show_details) {
  size_t size = sizeof(::mojom::internal::PluginsPageHandler_GetShowDetails_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPluginsPageHandler_GetShowDetails_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::mojom::internal::PluginsPageHandler_GetShowDetails_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->show_details = in_show_details;
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

PluginsPageHandlerStub::PluginsPageHandlerStub()
    : sink_(nullptr),
      control_message_handler_(PluginsPageHandler::Version_) {
}

PluginsPageHandlerStub::~PluginsPageHandlerStub() {}

bool PluginsPageHandlerStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kPluginsPageHandler_GetPluginsData_Name: {
      break;
    }
    case internal::kPluginsPageHandler_GetShowDetails_Name: {
      break;
    }
    case internal::kPluginsPageHandler_SaveShowDetailsToPrefs_Name: {
      internal::PluginsPageHandler_SaveShowDetailsToPrefs_Params_Data* params =
          reinterpret_cast<internal::PluginsPageHandler_SaveShowDetailsToPrefs_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      bool p_details_mode{};
      PluginsPageHandler_SaveShowDetailsToPrefs_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_details_mode = input_data_view.details_mode();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PluginsPageHandler::SaveShowDetailsToPrefs deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PluginsPageHandler::SaveShowDetailsToPrefs");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SaveShowDetailsToPrefs(
std::move(p_details_mode));
      return true;
    }
    case internal::kPluginsPageHandler_SetPluginAlwaysAllowed_Name: {
      internal::PluginsPageHandler_SetPluginAlwaysAllowed_Params_Data* params =
          reinterpret_cast<internal::PluginsPageHandler_SetPluginAlwaysAllowed_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_plugin{};
      bool p_allowed{};
      PluginsPageHandler_SetPluginAlwaysAllowed_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadPlugin(&p_plugin))
        success = false;
      p_allowed = input_data_view.allowed();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PluginsPageHandler::SetPluginAlwaysAllowed deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PluginsPageHandler::SetPluginAlwaysAllowed");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetPluginAlwaysAllowed(
std::move(p_plugin), 
std::move(p_allowed));
      return true;
    }
    case internal::kPluginsPageHandler_SetPluginEnabled_Name: {
      internal::PluginsPageHandler_SetPluginEnabled_Params_Data* params =
          reinterpret_cast<internal::PluginsPageHandler_SetPluginEnabled_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_plugin_path{};
      bool p_enable{};
      PluginsPageHandler_SetPluginEnabled_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadPluginPath(&p_plugin_path))
        success = false;
      p_enable = input_data_view.enable();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PluginsPageHandler::SetPluginEnabled deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PluginsPageHandler::SetPluginEnabled");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetPluginEnabled(
std::move(p_plugin_path), 
std::move(p_enable));
      return true;
    }
    case internal::kPluginsPageHandler_SetPluginGroupEnabled_Name: {
      internal::PluginsPageHandler_SetPluginGroupEnabled_Params_Data* params =
          reinterpret_cast<internal::PluginsPageHandler_SetPluginGroupEnabled_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_group_name{};
      bool p_enable{};
      PluginsPageHandler_SetPluginGroupEnabled_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadGroupName(&p_group_name))
        success = false;
      p_enable = input_data_view.enable();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PluginsPageHandler::SetPluginGroupEnabled deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PluginsPageHandler::SetPluginGroupEnabled");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetPluginGroupEnabled(
std::move(p_group_name), 
std::move(p_enable));
      return true;
    }
    case internal::kPluginsPageHandler_SetClientPage_Name: {
      internal::PluginsPageHandler_SetClientPage_Params_Data* params =
          reinterpret_cast<internal::PluginsPageHandler_SetClientPage_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PluginsPagePtr p_page{};
      PluginsPageHandler_SetClientPage_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_page = input_data_view.TakePage();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PluginsPageHandler::SetClientPage deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PluginsPageHandler::SetClientPage");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetClientPage(
std::move(p_page));
      return true;
    }
  }
  return false;
}

bool PluginsPageHandlerStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kPluginsPageHandler_GetPluginsData_Name: {
      internal::PluginsPageHandler_GetPluginsData_Params_Data* params =
          reinterpret_cast<internal::PluginsPageHandler_GetPluginsData_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PluginsPageHandler_GetPluginsData_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PluginsPageHandler::GetPluginsData deserializer");
        return false;
      }
      PluginsPageHandler::GetPluginsDataCallback callback =
          PluginsPageHandler_GetPluginsData_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PluginsPageHandler::GetPluginsData");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetPluginsData(callback);
      return true;
    }
    case internal::kPluginsPageHandler_GetShowDetails_Name: {
      internal::PluginsPageHandler_GetShowDetails_Params_Data* params =
          reinterpret_cast<internal::PluginsPageHandler_GetShowDetails_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PluginsPageHandler_GetShowDetails_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PluginsPageHandler::GetShowDetails deserializer");
        return false;
      }
      PluginsPageHandler::GetShowDetailsCallback callback =
          PluginsPageHandler_GetShowDetails_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PluginsPageHandler::GetShowDetails");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetShowDetails(callback);
      return true;
    }
    case internal::kPluginsPageHandler_SaveShowDetailsToPrefs_Name: {
      break;
    }
    case internal::kPluginsPageHandler_SetPluginAlwaysAllowed_Name: {
      break;
    }
    case internal::kPluginsPageHandler_SetPluginEnabled_Name: {
      break;
    }
    case internal::kPluginsPageHandler_SetPluginGroupEnabled_Name: {
      break;
    }
    case internal::kPluginsPageHandler_SetClientPage_Name: {
      break;
    }
  }
  return false;
}

PluginsPageHandlerRequestValidator::PluginsPageHandlerRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PluginsPageHandlerRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "PluginsPageHandler RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kPluginsPageHandler_GetPluginsData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginsPageHandler_GetPluginsData_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPluginsPageHandler_GetShowDetails_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginsPageHandler_GetShowDetails_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPluginsPageHandler_SaveShowDetailsToPrefs_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginsPageHandler_SaveShowDetailsToPrefs_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPluginsPageHandler_SetPluginAlwaysAllowed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginsPageHandler_SetPluginAlwaysAllowed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPluginsPageHandler_SetPluginEnabled_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginsPageHandler_SetPluginEnabled_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPluginsPageHandler_SetPluginGroupEnabled_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginsPageHandler_SetPluginGroupEnabled_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPluginsPageHandler_SetClientPage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginsPageHandler_SetClientPage_Params_Data>(
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

PluginsPageHandlerResponseValidator::PluginsPageHandlerResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PluginsPageHandlerResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "PluginsPageHandler ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPluginsPageHandler_GetPluginsData_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginsPageHandler_GetPluginsData_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPluginsPageHandler_GetShowDetails_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginsPageHandler_GetShowDetails_ResponseParams_Data>(
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
const char PluginsPage::Name_[] = "mojom::PluginsPage";
const uint32_t PluginsPage::Version_;

PluginsPageProxy::PluginsPageProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void PluginsPageProxy::OnPluginsUpdated(
    mojo::Array<PluginDataPtr> in_plugins) {
  size_t size = sizeof(::mojom::internal::PluginsPage_OnPluginsUpdated_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::mojom::PluginDataPtr>>(
      in_plugins, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPluginsPage_OnPluginsUpdated_Name, size);

  auto params =
      ::mojom::internal::PluginsPage_OnPluginsUpdated_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->plugins)::BaseType* plugins_ptr;
  const mojo::internal::ContainerValidateParams plugins_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::mojom::PluginDataPtr>>(
      in_plugins, builder.buffer(), &plugins_ptr, &plugins_validate_params,
      &serialization_context_);
  params->plugins.Set(plugins_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->plugins.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null plugins in PluginsPage.OnPluginsUpdated request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

PluginsPageStub::PluginsPageStub()
    : sink_(nullptr),
      control_message_handler_(PluginsPage::Version_) {
}

PluginsPageStub::~PluginsPageStub() {}

bool PluginsPageStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kPluginsPage_OnPluginsUpdated_Name: {
      internal::PluginsPage_OnPluginsUpdated_Params_Data* params =
          reinterpret_cast<internal::PluginsPage_OnPluginsUpdated_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::Array<PluginDataPtr> p_plugins{};
      PluginsPage_OnPluginsUpdated_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadPlugins(&p_plugins))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PluginsPage::OnPluginsUpdated deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PluginsPage::OnPluginsUpdated");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnPluginsUpdated(
std::move(p_plugins));
      return true;
    }
  }
  return false;
}

bool PluginsPageStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kPluginsPage_OnPluginsUpdated_Name: {
      break;
    }
  }
  return false;
}

PluginsPageRequestValidator::PluginsPageRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PluginsPageRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "PluginsPage RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kPluginsPage_OnPluginsUpdated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginsPage_OnPluginsUpdated_Params_Data>(
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

}  // namespace mojom

namespace mojo {


// static
bool StructTraits<::mojom::MimeType, ::mojom::MimeTypePtr>::Read(
    ::mojom::MimeTypeDataView input,
    ::mojom::MimeTypePtr* output) {
  bool success = true;
  ::mojom::MimeTypePtr result(::mojom::MimeType::New());
  
      if (!input.ReadDescription(&result->description))
        success = false;
      if (!input.ReadFileExtensions(&result->file_extensions))
        success = false;
      if (!input.ReadMimeType(&result->mime_type))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojom::PluginFile, ::mojom::PluginFilePtr>::Read(
    ::mojom::PluginFileDataView input,
    ::mojom::PluginFilePtr* output) {
  bool success = true;
  ::mojom::PluginFilePtr result(::mojom::PluginFile::New());
  
      if (!input.ReadDescription(&result->description))
        success = false;
      if (!input.ReadEnabledMode(&result->enabled_mode))
        success = false;
      if (!input.ReadMimeTypes(&result->mime_types))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadPath(&result->path))
        success = false;
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadVersion(&result->version))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojom::PluginData, ::mojom::PluginDataPtr>::Read(
    ::mojom::PluginDataDataView input,
    ::mojom::PluginDataPtr* output) {
  bool success = true;
  ::mojom::PluginDataPtr result(::mojom::PluginData::New());
  
      result->always_allowed = input.always_allowed();
      result->trusted = input.trusted();
      result->policy_click_to_play = input.policy_click_to_play();
      if (!input.ReadDescription(&result->description))
        success = false;
      result->critical = input.critical();
      if (!input.ReadEnabledMode(&result->enabled_mode))
        success = false;
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadUpdateUrl(&result->update_url))
        success = false;
      if (!input.ReadVersion(&result->version))
        success = false;
      if (!input.ReadPluginFiles(&result->plugin_files))
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