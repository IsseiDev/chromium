// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_MOJOM_BLINK_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_MOJOM_BLINK_H_

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
#include "third_party/WebKit/public/platform/modules/notifications/notification.mojom-shared.h"
#include "mojo/public/cpp/bindings/wtf_array.h"
#include "mojo/public/cpp/bindings/wtf_map.h"
#include "third_party/WebKit/Source/wtf/Optional.h"
#include "third_party/WebKit/Source/wtf/text/WTFString.h"
#include "third_party/WebKit/Source/platform/weborigin/KURL.h"
#include "cc/surfaces/surface_sequence.h"
#include "third_party/WebKit/Source/platform/weborigin/SecurityOrigin.h"
#include "cc/surfaces/surface_id.h"
#include "third_party/WebKit/public/platform/WebCommon.h"


namespace blink {
namespace mojom {
namespace blink {
using NotificationActionType = NotificationActionType;  // Alias for definition in the parent namespace.
using NotificationDirection = NotificationDirection;  // Alias for definition in the parent namespace.
class NotificationAction;
class NotificationActionDataView;
using NotificationActionPtr = mojo::StructPtr<NotificationAction>;

class Notification;
class NotificationDataView;
using NotificationPtr = mojo::StructPtr<Notification>;







class BLINK_PLATFORM_EXPORT NotificationAction {
 public:
  using DataView = NotificationActionDataView;
  using Data_ = internal::NotificationAction_Data;

  static NotificationActionPtr New();

  template <typename U>
  static NotificationActionPtr From(const U& u) {
    return mojo::TypeConverter<NotificationActionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NotificationAction>::Convert(*this);
  }

  NotificationAction();
  ~NotificationAction();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NotificationActionPtr>
  NotificationActionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NotificationAction>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::WTFArray<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        NotificationActionPtr, mojo::WTFArray<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::WTFArray<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        NotificationActionPtr, mojo::WTFArray<uint8_t>>(
            input, output);
  }

  NotificationActionType type;
  WTF::String action;
  WTF::String title;
  WTF::String icon;
  WTF::String placeholder;
};

class NotificationActionDataView {
 public:
  NotificationActionDataView() {}

  NotificationActionDataView(
      internal::NotificationAction_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::blink::mojom::blink::NotificationActionType>(
        data_value, output);
  }

  ::blink::mojom::blink::NotificationActionType type() const {
    return static_cast<::blink::mojom::blink::NotificationActionType>(data_->type);
  }
  inline void GetActionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadAction(UserType* output) {
    auto pointer = data_->action.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetTitleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadTitle(UserType* output) {
    auto pointer = data_->title.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetIconDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadIcon(UserType* output) {
    auto pointer = data_->icon.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetPlaceholderDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPlaceholder(UserType* output) {
    auto pointer = data_->placeholder.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::NotificationAction_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::blink::NotificationActionDataView> {
  using MojomType = ::blink::mojom::blink::NotificationActionPtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {
namespace blink {



class BLINK_PLATFORM_EXPORT Notification {
 public:
  using DataView = NotificationDataView;
  using Data_ = internal::Notification_Data;
  static const int32_t kMaximumDeveloperDataBytes = 1048576;

  static NotificationPtr New();

  template <typename U>
  static NotificationPtr From(const U& u) {
    return mojo::TypeConverter<NotificationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Notification>::Convert(*this);
  }

  Notification();
  ~Notification();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NotificationPtr>
  NotificationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Notification>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::WTFArray<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        NotificationPtr, mojo::WTFArray<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::WTFArray<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        NotificationPtr, mojo::WTFArray<uint8_t>>(
            input, output);
  }

  WTF::String title;
  NotificationDirection direction;
  WTF::String lang;
  WTF::String body;
  WTF::String tag;
  WTF::String icon;
  WTF::String badge;
  mojo::WTFArray<uint32_t> vibration_pattern;
  double timestamp;
  bool renotify;
  bool silent;
  bool require_interaction;
  mojo::WTFArray<int8_t> data;
  mojo::WTFArray<NotificationActionPtr> actions;
 private:
  DISALLOW_COPY_AND_ASSIGN(Notification);
};

class NotificationDataView {
 public:
  NotificationDataView() {}

  NotificationDataView(
      internal::Notification_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTitleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadTitle(UserType* output) {
    auto pointer = data_->title.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  template <typename UserType>
  bool ReadDirection(UserType* output) const {
    auto data_value = data_->direction;
    return mojo::internal::Deserialize<::blink::mojom::blink::NotificationDirection>(
        data_value, output);
  }

  ::blink::mojom::blink::NotificationDirection direction() const {
    return static_cast<::blink::mojom::blink::NotificationDirection>(data_->direction);
  }
  inline void GetLangDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadLang(UserType* output) {
    auto pointer = data_->lang.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetBodyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadBody(UserType* output) {
    auto pointer = data_->body.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetTagDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadTag(UserType* output) {
    auto pointer = data_->tag.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetIconDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadIcon(UserType* output) {
    auto pointer = data_->icon.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetBadgeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadBadge(UserType* output) {
    auto pointer = data_->badge.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetVibrationPatternDataView(
      mojo::ArrayDataView<uint32_t>* output);

  template <typename UserType>
  bool ReadVibrationPattern(UserType* output) {
    auto pointer = data_->vibration_pattern.Get();
    return mojo::internal::Deserialize<mojo::Array<uint32_t>>(
        pointer, output, context_);
  }
  double timestamp() const {
    return data_->timestamp;
  }
  bool renotify() const {
    return data_->renotify;
  }
  bool silent() const {
    return data_->silent;
  }
  bool require_interaction() const {
    return data_->require_interaction;
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<int8_t>* output);

  template <typename UserType>
  bool ReadData(UserType* output) {
    auto pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::Array<int8_t>>(
        pointer, output, context_);
  }
  inline void GetActionsDataView(
      mojo::ArrayDataView<NotificationActionDataView>* output);

  template <typename UserType>
  bool ReadActions(UserType* output) {
    auto pointer = data_->actions.Get();
    return mojo::internal::Deserialize<mojo::Array<::blink::mojom::blink::NotificationActionPtr>>(
        pointer, output, context_);
  }
 private:
  internal::Notification_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::blink::NotificationDataView> {
  using MojomType = ::blink::mojom::blink::NotificationPtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {
namespace blink {


template <typename StructPtrType>
NotificationActionPtr NotificationAction::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->type = mojo::internal::Clone(type);
  rv->action = mojo::internal::Clone(action);
  rv->title = mojo::internal::Clone(title);
  rv->icon = mojo::internal::Clone(icon);
  rv->placeholder = mojo::internal::Clone(placeholder);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NotificationAction>::value>::type*>
bool NotificationAction::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::Equals(this->action, other.action))
    return false;
  if (!mojo::internal::Equals(this->title, other.title))
    return false;
  if (!mojo::internal::Equals(this->icon, other.icon))
    return false;
  if (!mojo::internal::Equals(this->placeholder, other.placeholder))
    return false;
  return true;
}

inline void NotificationActionDataView::GetActionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->action.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NotificationActionDataView::GetTitleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->title.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NotificationActionDataView::GetIconDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->icon.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NotificationActionDataView::GetPlaceholderDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->placeholder.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
NotificationPtr Notification::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->title = mojo::internal::Clone(title);
  rv->direction = mojo::internal::Clone(direction);
  rv->lang = mojo::internal::Clone(lang);
  rv->body = mojo::internal::Clone(body);
  rv->tag = mojo::internal::Clone(tag);
  rv->icon = mojo::internal::Clone(icon);
  rv->badge = mojo::internal::Clone(badge);
  rv->vibration_pattern = mojo::internal::Clone(vibration_pattern);
  rv->timestamp = mojo::internal::Clone(timestamp);
  rv->renotify = mojo::internal::Clone(renotify);
  rv->silent = mojo::internal::Clone(silent);
  rv->require_interaction = mojo::internal::Clone(require_interaction);
  rv->data = mojo::internal::Clone(data);
  rv->actions = mojo::internal::Clone(actions);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Notification>::value>::type*>
bool Notification::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->title, other.title))
    return false;
  if (!mojo::internal::Equals(this->direction, other.direction))
    return false;
  if (!mojo::internal::Equals(this->lang, other.lang))
    return false;
  if (!mojo::internal::Equals(this->body, other.body))
    return false;
  if (!mojo::internal::Equals(this->tag, other.tag))
    return false;
  if (!mojo::internal::Equals(this->icon, other.icon))
    return false;
  if (!mojo::internal::Equals(this->badge, other.badge))
    return false;
  if (!mojo::internal::Equals(this->vibration_pattern, other.vibration_pattern))
    return false;
  if (!mojo::internal::Equals(this->timestamp, other.timestamp))
    return false;
  if (!mojo::internal::Equals(this->renotify, other.renotify))
    return false;
  if (!mojo::internal::Equals(this->silent, other.silent))
    return false;
  if (!mojo::internal::Equals(this->require_interaction, other.require_interaction))
    return false;
  if (!mojo::internal::Equals(this->data, other.data))
    return false;
  if (!mojo::internal::Equals(this->actions, other.actions))
    return false;
  return true;
}

inline void NotificationDataView::GetTitleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->title.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NotificationDataView::GetLangDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->lang.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NotificationDataView::GetBodyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->body.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NotificationDataView::GetTagDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->tag.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NotificationDataView::GetIconDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->icon.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NotificationDataView::GetBadgeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->badge.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NotificationDataView::GetVibrationPatternDataView(
    mojo::ArrayDataView<uint32_t>* output) {
  auto pointer = data_->vibration_pattern.Get();
  *output = mojo::ArrayDataView<uint32_t>(pointer, context_);
}
inline void NotificationDataView::GetDataDataView(
    mojo::ArrayDataView<int8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<int8_t>(pointer, context_);
}
inline void NotificationDataView::GetActionsDataView(
    mojo::ArrayDataView<NotificationActionDataView>* output) {
  auto pointer = data_->actions.Get();
  *output = mojo::ArrayDataView<NotificationActionDataView>(pointer, context_);
}



}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::NotificationAction, ::blink::mojom::blink::NotificationActionPtr> {
  static bool IsNull(const ::blink::mojom::blink::NotificationActionPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::NotificationActionPtr* output) { output->reset(); }
  static decltype(::blink::mojom::blink::NotificationAction::type) type(
      const ::blink::mojom::blink::NotificationActionPtr& input) {
    return input->type;
  }
  static decltype(::blink::mojom::blink::NotificationAction::action)& action(
      ::blink::mojom::blink::NotificationActionPtr& input) {
    return input->action;
  }
  static decltype(::blink::mojom::blink::NotificationAction::title)& title(
      ::blink::mojom::blink::NotificationActionPtr& input) {
    return input->title;
  }
  static decltype(::blink::mojom::blink::NotificationAction::icon)& icon(
      ::blink::mojom::blink::NotificationActionPtr& input) {
    return input->icon;
  }
  static decltype(::blink::mojom::blink::NotificationAction::placeholder)& placeholder(
      ::blink::mojom::blink::NotificationActionPtr& input) {
    return input->placeholder;
  }

  static bool Read(::blink::mojom::blink::NotificationActionDataView input, ::blink::mojom::blink::NotificationActionPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::blink::NotificationActionPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::blink::NotificationAction, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::NotificationAction_Data);
    decltype(CallWithContext(Traits::action, input, custom_context)) in_action = CallWithContext(Traits::action, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_action, context);
    decltype(CallWithContext(Traits::title, input, custom_context)) in_title = CallWithContext(Traits::title, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_title, context);
    decltype(CallWithContext(Traits::icon, input, custom_context)) in_icon = CallWithContext(Traits::icon, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_icon, context);
    decltype(CallWithContext(Traits::placeholder, input, custom_context)) in_placeholder = CallWithContext(Traits::placeholder, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_placeholder, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::NotificationAction_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::NotificationAction_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::blink::mojom::blink::NotificationActionType>(
          CallWithContext(Traits::type, input, custom_context), &result->type);
      decltype(CallWithContext(Traits::action, input, custom_context)) in_action = CallWithContext(Traits::action, input, custom_context);
      typename decltype(result->action)::BaseType* action_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_action, buffer, &action_ptr, context);
      result->action.Set(action_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->action.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null action in NotificationAction struct");
      decltype(CallWithContext(Traits::title, input, custom_context)) in_title = CallWithContext(Traits::title, input, custom_context);
      typename decltype(result->title)::BaseType* title_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_title, buffer, &title_ptr, context);
      result->title.Set(title_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->title.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null title in NotificationAction struct");
      decltype(CallWithContext(Traits::icon, input, custom_context)) in_icon = CallWithContext(Traits::icon, input, custom_context);
      typename decltype(result->icon)::BaseType* icon_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_icon, buffer, &icon_ptr, context);
      result->icon.Set(icon_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->icon.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null icon in NotificationAction struct");
      decltype(CallWithContext(Traits::placeholder, input, custom_context)) in_placeholder = CallWithContext(Traits::placeholder, input, custom_context);
      typename decltype(result->placeholder)::BaseType* placeholder_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_placeholder, buffer, &placeholder_ptr, context);
      result->placeholder.Set(placeholder_ptr);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::NotificationAction_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::blink::NotificationActionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::Notification, ::blink::mojom::blink::NotificationPtr> {
  static bool IsNull(const ::blink::mojom::blink::NotificationPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::NotificationPtr* output) { output->reset(); }
  static decltype(::blink::mojom::blink::Notification::title)& title(
      ::blink::mojom::blink::NotificationPtr& input) {
    return input->title;
  }
  static decltype(::blink::mojom::blink::Notification::direction) direction(
      const ::blink::mojom::blink::NotificationPtr& input) {
    return input->direction;
  }
  static decltype(::blink::mojom::blink::Notification::lang)& lang(
      ::blink::mojom::blink::NotificationPtr& input) {
    return input->lang;
  }
  static decltype(::blink::mojom::blink::Notification::body)& body(
      ::blink::mojom::blink::NotificationPtr& input) {
    return input->body;
  }
  static decltype(::blink::mojom::blink::Notification::tag)& tag(
      ::blink::mojom::blink::NotificationPtr& input) {
    return input->tag;
  }
  static decltype(::blink::mojom::blink::Notification::icon)& icon(
      ::blink::mojom::blink::NotificationPtr& input) {
    return input->icon;
  }
  static decltype(::blink::mojom::blink::Notification::badge)& badge(
      ::blink::mojom::blink::NotificationPtr& input) {
    return input->badge;
  }
  static decltype(::blink::mojom::blink::Notification::vibration_pattern)& vibration_pattern(
      ::blink::mojom::blink::NotificationPtr& input) {
    return input->vibration_pattern;
  }
  static decltype(::blink::mojom::blink::Notification::timestamp) timestamp(
      const ::blink::mojom::blink::NotificationPtr& input) {
    return input->timestamp;
  }
  static decltype(::blink::mojom::blink::Notification::renotify) renotify(
      const ::blink::mojom::blink::NotificationPtr& input) {
    return input->renotify;
  }
  static decltype(::blink::mojom::blink::Notification::silent) silent(
      const ::blink::mojom::blink::NotificationPtr& input) {
    return input->silent;
  }
  static decltype(::blink::mojom::blink::Notification::require_interaction) require_interaction(
      const ::blink::mojom::blink::NotificationPtr& input) {
    return input->require_interaction;
  }
  static decltype(::blink::mojom::blink::Notification::data)& data(
      ::blink::mojom::blink::NotificationPtr& input) {
    return input->data;
  }
  static decltype(::blink::mojom::blink::Notification::actions)& actions(
      ::blink::mojom::blink::NotificationPtr& input) {
    return input->actions;
  }

  static bool Read(::blink::mojom::blink::NotificationDataView input, ::blink::mojom::blink::NotificationPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::blink::NotificationPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::blink::Notification, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::Notification_Data);
    decltype(CallWithContext(Traits::title, input, custom_context)) in_title = CallWithContext(Traits::title, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_title, context);
    decltype(CallWithContext(Traits::lang, input, custom_context)) in_lang = CallWithContext(Traits::lang, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_lang, context);
    decltype(CallWithContext(Traits::body, input, custom_context)) in_body = CallWithContext(Traits::body, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_body, context);
    decltype(CallWithContext(Traits::tag, input, custom_context)) in_tag = CallWithContext(Traits::tag, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_tag, context);
    decltype(CallWithContext(Traits::icon, input, custom_context)) in_icon = CallWithContext(Traits::icon, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_icon, context);
    decltype(CallWithContext(Traits::badge, input, custom_context)) in_badge = CallWithContext(Traits::badge, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_badge, context);
    decltype(CallWithContext(Traits::vibration_pattern, input, custom_context)) in_vibration_pattern = CallWithContext(Traits::vibration_pattern, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<uint32_t>>(
        in_vibration_pattern, context);
    decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<int8_t>>(
        in_data, context);
    decltype(CallWithContext(Traits::actions, input, custom_context)) in_actions = CallWithContext(Traits::actions, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::blink::mojom::blink::NotificationActionPtr>>(
        in_actions, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::Notification_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::Notification_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::title, input, custom_context)) in_title = CallWithContext(Traits::title, input, custom_context);
      typename decltype(result->title)::BaseType* title_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_title, buffer, &title_ptr, context);
      result->title.Set(title_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->title.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null title in Notification struct");
      mojo::internal::Serialize<::blink::mojom::blink::NotificationDirection>(
          CallWithContext(Traits::direction, input, custom_context), &result->direction);
      decltype(CallWithContext(Traits::lang, input, custom_context)) in_lang = CallWithContext(Traits::lang, input, custom_context);
      typename decltype(result->lang)::BaseType* lang_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_lang, buffer, &lang_ptr, context);
      result->lang.Set(lang_ptr);
      decltype(CallWithContext(Traits::body, input, custom_context)) in_body = CallWithContext(Traits::body, input, custom_context);
      typename decltype(result->body)::BaseType* body_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_body, buffer, &body_ptr, context);
      result->body.Set(body_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->body.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null body in Notification struct");
      decltype(CallWithContext(Traits::tag, input, custom_context)) in_tag = CallWithContext(Traits::tag, input, custom_context);
      typename decltype(result->tag)::BaseType* tag_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_tag, buffer, &tag_ptr, context);
      result->tag.Set(tag_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->tag.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null tag in Notification struct");
      decltype(CallWithContext(Traits::icon, input, custom_context)) in_icon = CallWithContext(Traits::icon, input, custom_context);
      typename decltype(result->icon)::BaseType* icon_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_icon, buffer, &icon_ptr, context);
      result->icon.Set(icon_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->icon.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null icon in Notification struct");
      decltype(CallWithContext(Traits::badge, input, custom_context)) in_badge = CallWithContext(Traits::badge, input, custom_context);
      typename decltype(result->badge)::BaseType* badge_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_badge, buffer, &badge_ptr, context);
      result->badge.Set(badge_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->badge.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null badge in Notification struct");
      decltype(CallWithContext(Traits::vibration_pattern, input, custom_context)) in_vibration_pattern = CallWithContext(Traits::vibration_pattern, input, custom_context);
      typename decltype(result->vibration_pattern)::BaseType* vibration_pattern_ptr;
      const mojo::internal::ContainerValidateParams vibration_pattern_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<uint32_t>>(
          in_vibration_pattern, buffer, &vibration_pattern_ptr, &vibration_pattern_validate_params,
          context);
      result->vibration_pattern.Set(vibration_pattern_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->vibration_pattern.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null vibration_pattern in Notification struct");
      result->timestamp = CallWithContext(Traits::timestamp, input, custom_context);
      result->renotify = CallWithContext(Traits::renotify, input, custom_context);
      result->silent = CallWithContext(Traits::silent, input, custom_context);
      result->require_interaction = CallWithContext(Traits::require_interaction, input, custom_context);
      decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
      typename decltype(result->data)::BaseType* data_ptr;
      const mojo::internal::ContainerValidateParams data_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<int8_t>>(
          in_data, buffer, &data_ptr, &data_validate_params,
          context);
      result->data.Set(data_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->data.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null data in Notification struct");
      decltype(CallWithContext(Traits::actions, input, custom_context)) in_actions = CallWithContext(Traits::actions, input, custom_context);
      typename decltype(result->actions)::BaseType* actions_ptr;
      const mojo::internal::ContainerValidateParams actions_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::blink::mojom::blink::NotificationActionPtr>>(
          in_actions, buffer, &actions_ptr, &actions_validate_params,
          context);
      result->actions.Set(actions_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->actions.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null actions in Notification struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::Notification_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::blink::NotificationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_MOJOM_BLINK_H_