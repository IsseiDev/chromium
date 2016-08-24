// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_PLUGINS_PLUGINS_MOJOM_H_
#define CHROME_BROWSER_UI_WEBUI_PLUGINS_PLUGINS_MOJOM_H_

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
#include "chrome/browser/ui/webui/plugins/plugins.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace mojom {
class PluginsPageHandler;
using PluginsPageHandlerPtr = mojo::InterfacePtr<PluginsPageHandler>;
using PluginsPageHandlerPtrInfo = mojo::InterfacePtrInfo<PluginsPageHandler>;
using PluginsPageHandlerRequest = mojo::InterfaceRequest<PluginsPageHandler>;
using PluginsPageHandlerAssociatedPtr =
    mojo::AssociatedInterfacePtr<PluginsPageHandler>;
using PluginsPageHandlerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PluginsPageHandler>;
using PluginsPageHandlerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PluginsPageHandler>;

class PluginsPage;
using PluginsPagePtr = mojo::InterfacePtr<PluginsPage>;
using PluginsPagePtrInfo = mojo::InterfacePtrInfo<PluginsPage>;
using PluginsPageRequest = mojo::InterfaceRequest<PluginsPage>;
using PluginsPageAssociatedPtr =
    mojo::AssociatedInterfacePtr<PluginsPage>;
using PluginsPageAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PluginsPage>;
using PluginsPageAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PluginsPage>;

class MimeType;
class MimeTypeDataView;
using MimeTypePtr = mojo::StructPtr<MimeType>;

class PluginFile;
class PluginFileDataView;
using PluginFilePtr = mojo::StructPtr<PluginFile>;

class PluginData;
class PluginDataDataView;
using PluginDataPtr = mojo::StructPtr<PluginData>;


class PluginsPageHandlerProxy;
class PluginsPageHandlerStub;

class PluginsPageHandlerRequestValidator;
class PluginsPageHandlerResponseValidator;

class  PluginsPageHandler {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = PluginsPageHandlerProxy;
  using Stub_ = PluginsPageHandlerStub;

  using RequestValidator_ = PluginsPageHandlerRequestValidator;
  using ResponseValidator_ = PluginsPageHandlerResponseValidator;
  virtual ~PluginsPageHandler() {}


  using GetPluginsDataCallback = base::Callback<void(mojo::Array<PluginDataPtr>)>;
  virtual void GetPluginsData(const GetPluginsDataCallback& callback) = 0;


  using GetShowDetailsCallback = base::Callback<void(bool)>;
  virtual void GetShowDetails(const GetShowDetailsCallback& callback) = 0;

  virtual void SaveShowDetailsToPrefs(bool details_mode) = 0;

  virtual void SetPluginAlwaysAllowed(const mojo::String& plugin, bool allowed) = 0;

  virtual void SetPluginEnabled(const mojo::String& plugin_path, bool enable) = 0;

  virtual void SetPluginGroupEnabled(const mojo::String& group_name, bool enable) = 0;

  virtual void SetClientPage(PluginsPagePtr page) = 0;
};

class PluginsPageProxy;
class PluginsPageStub;

class PluginsPageRequestValidator;

class  PluginsPage {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = PluginsPageProxy;
  using Stub_ = PluginsPageStub;

  using RequestValidator_ = PluginsPageRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~PluginsPage() {}

  virtual void OnPluginsUpdated(mojo::Array<PluginDataPtr> plugins) = 0;
};

class  PluginsPageHandlerProxy
    : public PluginsPageHandler,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit PluginsPageHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetPluginsData(const GetPluginsDataCallback& callback) override;
  void GetShowDetails(const GetShowDetailsCallback& callback) override;
  void SaveShowDetailsToPrefs(bool details_mode) override;
  void SetPluginAlwaysAllowed(const mojo::String& plugin, bool allowed) override;
  void SetPluginEnabled(const mojo::String& plugin_path, bool enable) override;
  void SetPluginGroupEnabled(const mojo::String& group_name, bool enable) override;
  void SetClientPage(PluginsPagePtr page) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  PluginsPageProxy
    : public PluginsPage,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit PluginsPageProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnPluginsUpdated(mojo::Array<PluginDataPtr> plugins) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  PluginsPageHandlerStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  PluginsPageHandlerStub();
  ~PluginsPageHandlerStub() override;
  void set_sink(PluginsPageHandler* sink) { sink_ = sink; }
  PluginsPageHandler* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  PluginsPageHandler* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  PluginsPageStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  PluginsPageStub();
  ~PluginsPageStub() override;
  void set_sink(PluginsPage* sink) { sink_ = sink; }
  PluginsPage* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  PluginsPage* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  PluginsPageHandlerRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit PluginsPageHandlerRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  PluginsPageRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit PluginsPageRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  PluginsPageHandlerResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit PluginsPageHandlerResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};







class  MimeType {
 public:
  using DataView = MimeTypeDataView;
  using Data_ = internal::MimeType_Data;

  static MimeTypePtr New();

  template <typename U>
  static MimeTypePtr From(const U& u) {
    return mojo::TypeConverter<MimeTypePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MimeType>::Convert(*this);
  }

  MimeType();
  ~MimeType();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MimeTypePtr>
  MimeTypePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MimeType>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        MimeTypePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        MimeTypePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::String description;
  mojo::Array<mojo::String> file_extensions;
  mojo::String mime_type;
 private:
  DISALLOW_COPY_AND_ASSIGN(MimeType);
};

class MimeTypeDataView {
 public:
  MimeTypeDataView() {}

  MimeTypeDataView(
      internal::MimeType_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDescriptionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadDescription(UserType* output) {
    auto pointer = data_->description.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetFileExtensionsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  bool ReadFileExtensions(UserType* output) {
    auto pointer = data_->file_extensions.Get();
    return mojo::internal::Deserialize<mojo::Array<mojo::String>>(
        pointer, output, context_);
  }
  inline void GetMimeTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadMimeType(UserType* output) {
    auto pointer = data_->mime_type.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::MimeType_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojom::MimeTypeDataView> {
  using MojomType = ::mojom::MimeTypePtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojom {



class  PluginFile {
 public:
  using DataView = PluginFileDataView;
  using Data_ = internal::PluginFile_Data;

  static PluginFilePtr New();

  template <typename U>
  static PluginFilePtr From(const U& u) {
    return mojo::TypeConverter<PluginFilePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PluginFile>::Convert(*this);
  }

  PluginFile();
  ~PluginFile();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PluginFilePtr>
  PluginFilePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PluginFile>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PluginFilePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PluginFilePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::String description;
  mojo::String enabled_mode;
  mojo::Array<MimeTypePtr> mime_types;
  mojo::String name;
  mojo::String path;
  mojo::String type;
  mojo::String version;
 private:
  DISALLOW_COPY_AND_ASSIGN(PluginFile);
};

class PluginFileDataView {
 public:
  PluginFileDataView() {}

  PluginFileDataView(
      internal::PluginFile_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDescriptionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadDescription(UserType* output) {
    auto pointer = data_->description.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetEnabledModeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadEnabledMode(UserType* output) {
    auto pointer = data_->enabled_mode.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetMimeTypesDataView(
      mojo::ArrayDataView<MimeTypeDataView>* output);

  template <typename UserType>
  bool ReadMimeTypes(UserType* output) {
    auto pointer = data_->mime_types.Get();
    return mojo::internal::Deserialize<mojo::Array<::mojom::MimeTypePtr>>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadName(UserType* output) {
    auto pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPath(UserType* output) {
    auto pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadType(UserType* output) {
    auto pointer = data_->type.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetVersionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadVersion(UserType* output) {
    auto pointer = data_->version.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::PluginFile_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojom::PluginFileDataView> {
  using MojomType = ::mojom::PluginFilePtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojom {



class  PluginData {
 public:
  using DataView = PluginDataDataView;
  using Data_ = internal::PluginData_Data;

  static PluginDataPtr New();

  template <typename U>
  static PluginDataPtr From(const U& u) {
    return mojo::TypeConverter<PluginDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PluginData>::Convert(*this);
  }

  PluginData();
  ~PluginData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PluginDataPtr>
  PluginDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PluginData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PluginDataPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PluginDataPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  bool always_allowed;
  bool trusted;
  bool policy_click_to_play;
  mojo::String description;
  bool critical;
  mojo::String enabled_mode;
  mojo::String id;
  mojo::String name;
  mojo::String update_url;
  mojo::String version;
  mojo::Array<PluginFilePtr> plugin_files;
 private:
  DISALLOW_COPY_AND_ASSIGN(PluginData);
};

class PluginDataDataView {
 public:
  PluginDataDataView() {}

  PluginDataDataView(
      internal::PluginData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool always_allowed() const {
    return data_->always_allowed;
  }
  bool trusted() const {
    return data_->trusted;
  }
  bool policy_click_to_play() const {
    return data_->policy_click_to_play;
  }
  inline void GetDescriptionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadDescription(UserType* output) {
    auto pointer = data_->description.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  bool critical() const {
    return data_->critical;
  }
  inline void GetEnabledModeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadEnabledMode(UserType* output) {
    auto pointer = data_->enabled_mode.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadId(UserType* output) {
    auto pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadName(UserType* output) {
    auto pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetUpdateUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadUpdateUrl(UserType* output) {
    auto pointer = data_->update_url.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetVersionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadVersion(UserType* output) {
    auto pointer = data_->version.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetPluginFilesDataView(
      mojo::ArrayDataView<PluginFileDataView>* output);

  template <typename UserType>
  bool ReadPluginFiles(UserType* output) {
    auto pointer = data_->plugin_files.Get();
    return mojo::internal::Deserialize<mojo::Array<::mojom::PluginFilePtr>>(
        pointer, output, context_);
  }
 private:
  internal::PluginData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojom::PluginDataDataView> {
  using MojomType = ::mojom::PluginDataPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojom {


template <typename StructPtrType>
MimeTypePtr MimeType::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->description = mojo::internal::Clone(description);
  rv->file_extensions = mojo::internal::Clone(file_extensions);
  rv->mime_type = mojo::internal::Clone(mime_type);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MimeType>::value>::type*>
bool MimeType::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->description, other.description))
    return false;
  if (!mojo::internal::Equals(this->file_extensions, other.file_extensions))
    return false;
  if (!mojo::internal::Equals(this->mime_type, other.mime_type))
    return false;
  return true;
}

inline void MimeTypeDataView::GetDescriptionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->description.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MimeTypeDataView::GetFileExtensionsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->file_extensions.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void MimeTypeDataView::GetMimeTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->mime_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
PluginFilePtr PluginFile::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->description = mojo::internal::Clone(description);
  rv->enabled_mode = mojo::internal::Clone(enabled_mode);
  rv->mime_types = mojo::internal::Clone(mime_types);
  rv->name = mojo::internal::Clone(name);
  rv->path = mojo::internal::Clone(path);
  rv->type = mojo::internal::Clone(type);
  rv->version = mojo::internal::Clone(version);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PluginFile>::value>::type*>
bool PluginFile::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->description, other.description))
    return false;
  if (!mojo::internal::Equals(this->enabled_mode, other.enabled_mode))
    return false;
  if (!mojo::internal::Equals(this->mime_types, other.mime_types))
    return false;
  if (!mojo::internal::Equals(this->name, other.name))
    return false;
  if (!mojo::internal::Equals(this->path, other.path))
    return false;
  if (!mojo::internal::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::Equals(this->version, other.version))
    return false;
  return true;
}

inline void PluginFileDataView::GetDescriptionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->description.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PluginFileDataView::GetEnabledModeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->enabled_mode.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PluginFileDataView::GetMimeTypesDataView(
    mojo::ArrayDataView<MimeTypeDataView>* output) {
  auto pointer = data_->mime_types.Get();
  *output = mojo::ArrayDataView<MimeTypeDataView>(pointer, context_);
}
inline void PluginFileDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PluginFileDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PluginFileDataView::GetTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PluginFileDataView::GetVersionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->version.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
PluginDataPtr PluginData::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->always_allowed = mojo::internal::Clone(always_allowed);
  rv->trusted = mojo::internal::Clone(trusted);
  rv->policy_click_to_play = mojo::internal::Clone(policy_click_to_play);
  rv->description = mojo::internal::Clone(description);
  rv->critical = mojo::internal::Clone(critical);
  rv->enabled_mode = mojo::internal::Clone(enabled_mode);
  rv->id = mojo::internal::Clone(id);
  rv->name = mojo::internal::Clone(name);
  rv->update_url = mojo::internal::Clone(update_url);
  rv->version = mojo::internal::Clone(version);
  rv->plugin_files = mojo::internal::Clone(plugin_files);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PluginData>::value>::type*>
bool PluginData::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->always_allowed, other.always_allowed))
    return false;
  if (!mojo::internal::Equals(this->trusted, other.trusted))
    return false;
  if (!mojo::internal::Equals(this->policy_click_to_play, other.policy_click_to_play))
    return false;
  if (!mojo::internal::Equals(this->description, other.description))
    return false;
  if (!mojo::internal::Equals(this->critical, other.critical))
    return false;
  if (!mojo::internal::Equals(this->enabled_mode, other.enabled_mode))
    return false;
  if (!mojo::internal::Equals(this->id, other.id))
    return false;
  if (!mojo::internal::Equals(this->name, other.name))
    return false;
  if (!mojo::internal::Equals(this->update_url, other.update_url))
    return false;
  if (!mojo::internal::Equals(this->version, other.version))
    return false;
  if (!mojo::internal::Equals(this->plugin_files, other.plugin_files))
    return false;
  return true;
}

inline void PluginDataDataView::GetDescriptionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->description.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PluginDataDataView::GetEnabledModeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->enabled_mode.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PluginDataDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PluginDataDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PluginDataDataView::GetUpdateUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->update_url.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PluginDataDataView::GetVersionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->version.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PluginDataDataView::GetPluginFilesDataView(
    mojo::ArrayDataView<PluginFileDataView>* output) {
  auto pointer = data_->plugin_files.Get();
  *output = mojo::ArrayDataView<PluginFileDataView>(pointer, context_);
}



}  // namespace mojom

namespace mojo {


template <>
struct  StructTraits<::mojom::MimeType, ::mojom::MimeTypePtr> {
  static bool IsNull(const ::mojom::MimeTypePtr& input) { return !input; }
  static void SetToNull(::mojom::MimeTypePtr* output) { output->reset(); }
  static decltype(::mojom::MimeType::description)& description(
      ::mojom::MimeTypePtr& input) {
    return input->description;
  }
  static decltype(::mojom::MimeType::file_extensions)& file_extensions(
      ::mojom::MimeTypePtr& input) {
    return input->file_extensions;
  }
  static decltype(::mojom::MimeType::mime_type)& mime_type(
      ::mojom::MimeTypePtr& input) {
    return input->mime_type;
  }

  static bool Read(::mojom::MimeTypeDataView input, ::mojom::MimeTypePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::MimeTypePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::MimeType, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojom::internal::MimeType_Data);
    decltype(CallWithContext(Traits::description, input, custom_context)) in_description = CallWithContext(Traits::description, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_description, context);
    decltype(CallWithContext(Traits::file_extensions, input, custom_context)) in_file_extensions = CallWithContext(Traits::file_extensions, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<mojo::String>>(
        in_file_extensions, context);
    decltype(CallWithContext(Traits::mime_type, input, custom_context)) in_mime_type = CallWithContext(Traits::mime_type, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_mime_type, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::MimeType_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojom::internal::MimeType_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::description, input, custom_context)) in_description = CallWithContext(Traits::description, input, custom_context);
      typename decltype(result->description)::BaseType* description_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_description, buffer, &description_ptr, context);
      result->description.Set(description_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->description.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null description in MimeType struct");
      decltype(CallWithContext(Traits::file_extensions, input, custom_context)) in_file_extensions = CallWithContext(Traits::file_extensions, input, custom_context);
      typename decltype(result->file_extensions)::BaseType* file_extensions_ptr;
      const mojo::internal::ContainerValidateParams file_extensions_validate_params(
          0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
      mojo::internal::Serialize<mojo::Array<mojo::String>>(
          in_file_extensions, buffer, &file_extensions_ptr, &file_extensions_validate_params,
          context);
      result->file_extensions.Set(file_extensions_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->file_extensions.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null file_extensions in MimeType struct");
      decltype(CallWithContext(Traits::mime_type, input, custom_context)) in_mime_type = CallWithContext(Traits::mime_type, input, custom_context);
      typename decltype(result->mime_type)::BaseType* mime_type_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_mime_type, buffer, &mime_type_ptr, context);
      result->mime_type.Set(mime_type_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->mime_type.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null mime_type in MimeType struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::MimeType_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::MimeTypeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::mojom::PluginFile, ::mojom::PluginFilePtr> {
  static bool IsNull(const ::mojom::PluginFilePtr& input) { return !input; }
  static void SetToNull(::mojom::PluginFilePtr* output) { output->reset(); }
  static decltype(::mojom::PluginFile::description)& description(
      ::mojom::PluginFilePtr& input) {
    return input->description;
  }
  static decltype(::mojom::PluginFile::enabled_mode)& enabled_mode(
      ::mojom::PluginFilePtr& input) {
    return input->enabled_mode;
  }
  static decltype(::mojom::PluginFile::mime_types)& mime_types(
      ::mojom::PluginFilePtr& input) {
    return input->mime_types;
  }
  static decltype(::mojom::PluginFile::name)& name(
      ::mojom::PluginFilePtr& input) {
    return input->name;
  }
  static decltype(::mojom::PluginFile::path)& path(
      ::mojom::PluginFilePtr& input) {
    return input->path;
  }
  static decltype(::mojom::PluginFile::type)& type(
      ::mojom::PluginFilePtr& input) {
    return input->type;
  }
  static decltype(::mojom::PluginFile::version)& version(
      ::mojom::PluginFilePtr& input) {
    return input->version;
  }

  static bool Read(::mojom::PluginFileDataView input, ::mojom::PluginFilePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::PluginFilePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::PluginFile, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojom::internal::PluginFile_Data);
    decltype(CallWithContext(Traits::description, input, custom_context)) in_description = CallWithContext(Traits::description, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_description, context);
    decltype(CallWithContext(Traits::enabled_mode, input, custom_context)) in_enabled_mode = CallWithContext(Traits::enabled_mode, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_enabled_mode, context);
    decltype(CallWithContext(Traits::mime_types, input, custom_context)) in_mime_types = CallWithContext(Traits::mime_types, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::mojom::MimeTypePtr>>(
        in_mime_types, context);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_name, context);
    decltype(CallWithContext(Traits::path, input, custom_context)) in_path = CallWithContext(Traits::path, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_path, context);
    decltype(CallWithContext(Traits::type, input, custom_context)) in_type = CallWithContext(Traits::type, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_type, context);
    decltype(CallWithContext(Traits::version, input, custom_context)) in_version = CallWithContext(Traits::version, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_version, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::PluginFile_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojom::internal::PluginFile_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::description, input, custom_context)) in_description = CallWithContext(Traits::description, input, custom_context);
      typename decltype(result->description)::BaseType* description_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_description, buffer, &description_ptr, context);
      result->description.Set(description_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->description.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null description in PluginFile struct");
      decltype(CallWithContext(Traits::enabled_mode, input, custom_context)) in_enabled_mode = CallWithContext(Traits::enabled_mode, input, custom_context);
      typename decltype(result->enabled_mode)::BaseType* enabled_mode_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_enabled_mode, buffer, &enabled_mode_ptr, context);
      result->enabled_mode.Set(enabled_mode_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->enabled_mode.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null enabled_mode in PluginFile struct");
      decltype(CallWithContext(Traits::mime_types, input, custom_context)) in_mime_types = CallWithContext(Traits::mime_types, input, custom_context);
      typename decltype(result->mime_types)::BaseType* mime_types_ptr;
      const mojo::internal::ContainerValidateParams mime_types_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::mojom::MimeTypePtr>>(
          in_mime_types, buffer, &mime_types_ptr, &mime_types_validate_params,
          context);
      result->mime_types.Set(mime_types_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->mime_types.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null mime_types in PluginFile struct");
      decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
      typename decltype(result->name)::BaseType* name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_name, buffer, &name_ptr, context);
      result->name.Set(name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null name in PluginFile struct");
      decltype(CallWithContext(Traits::path, input, custom_context)) in_path = CallWithContext(Traits::path, input, custom_context);
      typename decltype(result->path)::BaseType* path_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_path, buffer, &path_ptr, context);
      result->path.Set(path_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->path.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null path in PluginFile struct");
      decltype(CallWithContext(Traits::type, input, custom_context)) in_type = CallWithContext(Traits::type, input, custom_context);
      typename decltype(result->type)::BaseType* type_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_type, buffer, &type_ptr, context);
      result->type.Set(type_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->type.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null type in PluginFile struct");
      decltype(CallWithContext(Traits::version, input, custom_context)) in_version = CallWithContext(Traits::version, input, custom_context);
      typename decltype(result->version)::BaseType* version_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_version, buffer, &version_ptr, context);
      result->version.Set(version_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->version.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null version in PluginFile struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::PluginFile_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::PluginFileDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::mojom::PluginData, ::mojom::PluginDataPtr> {
  static bool IsNull(const ::mojom::PluginDataPtr& input) { return !input; }
  static void SetToNull(::mojom::PluginDataPtr* output) { output->reset(); }
  static decltype(::mojom::PluginData::always_allowed) always_allowed(
      const ::mojom::PluginDataPtr& input) {
    return input->always_allowed;
  }
  static decltype(::mojom::PluginData::trusted) trusted(
      const ::mojom::PluginDataPtr& input) {
    return input->trusted;
  }
  static decltype(::mojom::PluginData::policy_click_to_play) policy_click_to_play(
      const ::mojom::PluginDataPtr& input) {
    return input->policy_click_to_play;
  }
  static decltype(::mojom::PluginData::description)& description(
      ::mojom::PluginDataPtr& input) {
    return input->description;
  }
  static decltype(::mojom::PluginData::critical) critical(
      const ::mojom::PluginDataPtr& input) {
    return input->critical;
  }
  static decltype(::mojom::PluginData::enabled_mode)& enabled_mode(
      ::mojom::PluginDataPtr& input) {
    return input->enabled_mode;
  }
  static decltype(::mojom::PluginData::id)& id(
      ::mojom::PluginDataPtr& input) {
    return input->id;
  }
  static decltype(::mojom::PluginData::name)& name(
      ::mojom::PluginDataPtr& input) {
    return input->name;
  }
  static decltype(::mojom::PluginData::update_url)& update_url(
      ::mojom::PluginDataPtr& input) {
    return input->update_url;
  }
  static decltype(::mojom::PluginData::version)& version(
      ::mojom::PluginDataPtr& input) {
    return input->version;
  }
  static decltype(::mojom::PluginData::plugin_files)& plugin_files(
      ::mojom::PluginDataPtr& input) {
    return input->plugin_files;
  }

  static bool Read(::mojom::PluginDataDataView input, ::mojom::PluginDataPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::PluginDataPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::PluginData, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojom::internal::PluginData_Data);
    decltype(CallWithContext(Traits::description, input, custom_context)) in_description = CallWithContext(Traits::description, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_description, context);
    decltype(CallWithContext(Traits::enabled_mode, input, custom_context)) in_enabled_mode = CallWithContext(Traits::enabled_mode, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_enabled_mode, context);
    decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_id, context);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_name, context);
    decltype(CallWithContext(Traits::update_url, input, custom_context)) in_update_url = CallWithContext(Traits::update_url, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_update_url, context);
    decltype(CallWithContext(Traits::version, input, custom_context)) in_version = CallWithContext(Traits::version, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_version, context);
    decltype(CallWithContext(Traits::plugin_files, input, custom_context)) in_plugin_files = CallWithContext(Traits::plugin_files, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::mojom::PluginFilePtr>>(
        in_plugin_files, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::PluginData_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojom::internal::PluginData_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->always_allowed = CallWithContext(Traits::always_allowed, input, custom_context);
      result->trusted = CallWithContext(Traits::trusted, input, custom_context);
      result->policy_click_to_play = CallWithContext(Traits::policy_click_to_play, input, custom_context);
      decltype(CallWithContext(Traits::description, input, custom_context)) in_description = CallWithContext(Traits::description, input, custom_context);
      typename decltype(result->description)::BaseType* description_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_description, buffer, &description_ptr, context);
      result->description.Set(description_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->description.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null description in PluginData struct");
      result->critical = CallWithContext(Traits::critical, input, custom_context);
      decltype(CallWithContext(Traits::enabled_mode, input, custom_context)) in_enabled_mode = CallWithContext(Traits::enabled_mode, input, custom_context);
      typename decltype(result->enabled_mode)::BaseType* enabled_mode_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_enabled_mode, buffer, &enabled_mode_ptr, context);
      result->enabled_mode.Set(enabled_mode_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->enabled_mode.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null enabled_mode in PluginData struct");
      decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
      typename decltype(result->id)::BaseType* id_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_id, buffer, &id_ptr, context);
      result->id.Set(id_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->id.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null id in PluginData struct");
      decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
      typename decltype(result->name)::BaseType* name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_name, buffer, &name_ptr, context);
      result->name.Set(name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null name in PluginData struct");
      decltype(CallWithContext(Traits::update_url, input, custom_context)) in_update_url = CallWithContext(Traits::update_url, input, custom_context);
      typename decltype(result->update_url)::BaseType* update_url_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_update_url, buffer, &update_url_ptr, context);
      result->update_url.Set(update_url_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->update_url.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null update_url in PluginData struct");
      decltype(CallWithContext(Traits::version, input, custom_context)) in_version = CallWithContext(Traits::version, input, custom_context);
      typename decltype(result->version)::BaseType* version_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_version, buffer, &version_ptr, context);
      result->version.Set(version_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->version.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null version in PluginData struct");
      decltype(CallWithContext(Traits::plugin_files, input, custom_context)) in_plugin_files = CallWithContext(Traits::plugin_files, input, custom_context);
      typename decltype(result->plugin_files)::BaseType* plugin_files_ptr;
      const mojo::internal::ContainerValidateParams plugin_files_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::mojom::PluginFilePtr>>(
          in_plugin_files, buffer, &plugin_files_ptr, &plugin_files_validate_params,
          context);
      result->plugin_files.Set(plugin_files_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->plugin_files.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null plugin_files in PluginData struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::PluginData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::PluginDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CHROME_BROWSER_UI_WEBUI_PLUGINS_PLUGINS_MOJOM_H_