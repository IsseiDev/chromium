// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_CONSTANTS_MOJOM_SHARED_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_CONSTANTS_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "services/ui/public/interfaces/window_manager_constants.mojom-shared-internal.h"
#include "services/ui/public/interfaces/display/display.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
namespace ui {
namespace mojom {

enum class WindowManagerErrorCode : int32_t {
  SUCCESS,
  ACCESS_DENIED,
};

inline std::ostream& operator<<(std::ostream& os, WindowManagerErrorCode value) {
  switch(value) {
    case WindowManagerErrorCode::SUCCESS:
      return os << "WindowManagerErrorCode::SUCCESS";
    case WindowManagerErrorCode::ACCESS_DENIED:
      return os << "WindowManagerErrorCode::ACCESS_DENIED";
    default:
      return os << "Unknown WindowManagerErrorCode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(WindowManagerErrorCode value) {
  return internal::WindowManagerErrorCode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class ShowState : int32_t {
  DEFAULT,
  NORMAL,
  MINIMIZED,
  MAXIMIZED,
  INACTIVE,
  FULLSCREEN,
  DOCKED,
};

inline std::ostream& operator<<(std::ostream& os, ShowState value) {
  switch(value) {
    case ShowState::DEFAULT:
      return os << "ShowState::DEFAULT";
    case ShowState::NORMAL:
      return os << "ShowState::NORMAL";
    case ShowState::MINIMIZED:
      return os << "ShowState::MINIMIZED";
    case ShowState::MAXIMIZED:
      return os << "ShowState::MAXIMIZED";
    case ShowState::INACTIVE:
      return os << "ShowState::INACTIVE";
    case ShowState::FULLSCREEN:
      return os << "ShowState::FULLSCREEN";
    case ShowState::DOCKED:
      return os << "ShowState::DOCKED";
    default:
      return os << "Unknown ShowState value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ShowState value) {
  return internal::ShowState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class MoveLoopSource : int32_t {
  MOUSE,
  TOUCH,
};

inline std::ostream& operator<<(std::ostream& os, MoveLoopSource value) {
  switch(value) {
    case MoveLoopSource::MOUSE:
      return os << "MoveLoopSource::MOUSE";
    case MoveLoopSource::TOUCH:
      return os << "MoveLoopSource::TOUCH";
    default:
      return os << "Unknown MoveLoopSource value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(MoveLoopSource value) {
  return internal::MoveLoopSource_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class WindowType : int32_t {
  WINDOW,
  PANEL,
  WINDOW_FRAMELESS,
  CONTROL,
  POPUP,
  MENU,
  TOOLTIP,
  BUBBLE,
  DRAG,
};

inline std::ostream& operator<<(std::ostream& os, WindowType value) {
  switch(value) {
    case WindowType::WINDOW:
      return os << "WindowType::WINDOW";
    case WindowType::PANEL:
      return os << "WindowType::PANEL";
    case WindowType::WINDOW_FRAMELESS:
      return os << "WindowType::WINDOW_FRAMELESS";
    case WindowType::CONTROL:
      return os << "WindowType::CONTROL";
    case WindowType::POPUP:
      return os << "WindowType::POPUP";
    case WindowType::MENU:
      return os << "WindowType::MENU";
    case WindowType::TOOLTIP:
      return os << "WindowType::TOOLTIP";
    case WindowType::BUBBLE:
      return os << "WindowType::BUBBLE";
    case WindowType::DRAG:
      return os << "WindowType::DRAG";
    default:
      return os << "Unknown WindowType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(WindowType value) {
  return internal::WindowType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::WindowManagerErrorCode>
    : public mojo::internal::EnumHashImpl<::ui::mojom::WindowManagerErrorCode> {};

template <>
struct hash<::ui::mojom::ShowState>
    : public mojo::internal::EnumHashImpl<::ui::mojom::ShowState> {};

template <>
struct hash<::ui::mojom::MoveLoopSource>
    : public mojo::internal::EnumHashImpl<::ui::mojom::MoveLoopSource> {};

template <>
struct hash<::ui::mojom::WindowType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::WindowType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::WindowManagerErrorCode, ::ui::mojom::WindowManagerErrorCode> {
  static ::ui::mojom::WindowManagerErrorCode ToMojom(::ui::mojom::WindowManagerErrorCode input) { return input; }
  static bool FromMojom(::ui::mojom::WindowManagerErrorCode input, ::ui::mojom::WindowManagerErrorCode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::WindowManagerErrorCode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::WindowManagerErrorCode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::WindowManagerErrorCode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::ShowState, ::ui::mojom::ShowState> {
  static ::ui::mojom::ShowState ToMojom(::ui::mojom::ShowState input) { return input; }
  static bool FromMojom(::ui::mojom::ShowState input, ::ui::mojom::ShowState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::ShowState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::ShowState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::ShowState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::MoveLoopSource, ::ui::mojom::MoveLoopSource> {
  static ::ui::mojom::MoveLoopSource ToMojom(::ui::mojom::MoveLoopSource input) { return input; }
  static bool FromMojom(::ui::mojom::MoveLoopSource input, ::ui::mojom::MoveLoopSource* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::MoveLoopSource, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::MoveLoopSource, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::MoveLoopSource>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::WindowType, ::ui::mojom::WindowType> {
  static ::ui::mojom::WindowType ToMojom(::ui::mojom::WindowType input) { return input; }
  static bool FromMojom(::ui::mojom::WindowType input, ::ui::mojom::WindowType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::WindowType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::WindowType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::WindowType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_CONSTANTS_MOJOM_SHARED_H_
