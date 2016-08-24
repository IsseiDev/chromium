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

#include "third_party/WebKit/public/platform/modules/notifications/notification.mojom-blink.h"

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

}  // namespace
const int32_t Notification::kMaximumDeveloperDataBytes;// static
NotificationActionPtr NotificationAction::New() {
  NotificationActionPtr rv;
  mojo::internal::StructHelper<NotificationAction>::Initialize(&rv);
  return rv;
}

NotificationAction::NotificationAction()
    : type(),
      action(),
      title(),
      icon(),
      placeholder() {
}

NotificationAction::~NotificationAction() {
}// static
NotificationPtr Notification::New() {
  NotificationPtr rv;
  mojo::internal::StructHelper<Notification>::Initialize(&rv);
  return rv;
}

Notification::Notification()
    : title(),
      direction(),
      lang(),
      body(),
      tag(),
      icon(),
      badge(),
      vibration_pattern(nullptr),
      timestamp(),
      renotify(false),
      silent(false),
      require_interaction(false),
      data(nullptr),
      actions(nullptr) {
}

Notification::~Notification() {
}
}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::NotificationAction, ::blink::mojom::blink::NotificationActionPtr>::Read(
    ::blink::mojom::blink::NotificationActionDataView input,
    ::blink::mojom::blink::NotificationActionPtr* output) {
  bool success = true;
  ::blink::mojom::blink::NotificationActionPtr result(::blink::mojom::blink::NotificationAction::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadAction(&result->action))
        success = false;
      if (!input.ReadTitle(&result->title))
        success = false;
      if (!input.ReadIcon(&result->icon))
        success = false;
      if (!input.ReadPlaceholder(&result->placeholder))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::Notification, ::blink::mojom::blink::NotificationPtr>::Read(
    ::blink::mojom::blink::NotificationDataView input,
    ::blink::mojom::blink::NotificationPtr* output) {
  bool success = true;
  ::blink::mojom::blink::NotificationPtr result(::blink::mojom::blink::Notification::New());
  
      if (!input.ReadTitle(&result->title))
        success = false;
      if (!input.ReadDirection(&result->direction))
        success = false;
      if (!input.ReadLang(&result->lang))
        success = false;
      if (!input.ReadBody(&result->body))
        success = false;
      if (!input.ReadTag(&result->tag))
        success = false;
      if (!input.ReadIcon(&result->icon))
        success = false;
      if (!input.ReadBadge(&result->badge))
        success = false;
      if (!input.ReadVibrationPattern(&result->vibration_pattern))
        success = false;
      result->timestamp = input.timestamp();
      result->renotify = input.renotify();
      result->silent = input.silent();
      result->require_interaction = input.require_interaction();
      if (!input.ReadData(&result->data))
        success = false;
      if (!input.ReadActions(&result->actions))
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