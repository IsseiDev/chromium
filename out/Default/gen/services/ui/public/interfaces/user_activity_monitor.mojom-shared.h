// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_USER_ACTIVITY_MONITOR_MOJOM_SHARED_H_
#define SERVICES_UI_PUBLIC_INTERFACES_USER_ACTIVITY_MONITOR_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "services/ui/public/interfaces/user_activity_monitor.mojom-shared-internal.h"
namespace ui {
namespace mojom {

enum class UserIdleObserver_IdleState : int32_t {
  ACTIVE,
  IDLE,
};

inline std::ostream& operator<<(std::ostream& os, UserIdleObserver_IdleState value) {
  switch(value) {
    case UserIdleObserver_IdleState::ACTIVE:
      return os << "UserIdleObserver_IdleState::ACTIVE";
    case UserIdleObserver_IdleState::IDLE:
      return os << "UserIdleObserver_IdleState::IDLE";
    default:
      return os << "Unknown UserIdleObserver_IdleState value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(UserIdleObserver_IdleState value) {
  return internal::UserIdleObserver_IdleState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::UserIdleObserver_IdleState>
    : public mojo::internal::EnumHashImpl<::ui::mojom::UserIdleObserver_IdleState> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::UserIdleObserver_IdleState, ::ui::mojom::UserIdleObserver_IdleState> {
  static ::ui::mojom::UserIdleObserver_IdleState ToMojom(::ui::mojom::UserIdleObserver_IdleState input) { return input; }
  static bool FromMojom(::ui::mojom::UserIdleObserver_IdleState input, ::ui::mojom::UserIdleObserver_IdleState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::UserIdleObserver_IdleState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::UserIdleObserver_IdleState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::UserIdleObserver_IdleState>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_USER_ACTIVITY_MONITOR_MOJOM_SHARED_H_
