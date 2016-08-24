// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_REQUEST_MOJOM_SHARED_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_REQUEST_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "third_party/WebKit/public/platform/modules/payments/payment_request.mojom-shared-internal.h"
namespace blink {
namespace mojom {

enum class PaymentErrorReason : int32_t {
  UNKNOWN,
  USER_CANCEL,
  NOT_SUPPORTED,
};

inline std::ostream& operator<<(std::ostream& os, PaymentErrorReason value) {
  switch(value) {
    case PaymentErrorReason::UNKNOWN:
      return os << "PaymentErrorReason::UNKNOWN";
    case PaymentErrorReason::USER_CANCEL:
      return os << "PaymentErrorReason::USER_CANCEL";
    case PaymentErrorReason::NOT_SUPPORTED:
      return os << "PaymentErrorReason::NOT_SUPPORTED";
    default:
      return os << "Unknown PaymentErrorReason value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PaymentErrorReason value) {
  return internal::PaymentErrorReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PaymentComplete : int32_t {
  SUCCESS,
  FAIL,
  UNKNOWN,
};

inline std::ostream& operator<<(std::ostream& os, PaymentComplete value) {
  switch(value) {
    case PaymentComplete::SUCCESS:
      return os << "PaymentComplete::SUCCESS";
    case PaymentComplete::FAIL:
      return os << "PaymentComplete::FAIL";
    case PaymentComplete::UNKNOWN:
      return os << "PaymentComplete::UNKNOWN";
    default:
      return os << "Unknown PaymentComplete value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PaymentComplete value) {
  return internal::PaymentComplete_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::PaymentErrorReason>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PaymentErrorReason> {};

template <>
struct hash<::blink::mojom::PaymentComplete>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PaymentComplete> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::PaymentErrorReason, ::blink::mojom::PaymentErrorReason> {
  static ::blink::mojom::PaymentErrorReason ToMojom(::blink::mojom::PaymentErrorReason input) { return input; }
  static bool FromMojom(::blink::mojom::PaymentErrorReason input, ::blink::mojom::PaymentErrorReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PaymentErrorReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PaymentErrorReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PaymentErrorReason>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::PaymentComplete, ::blink::mojom::PaymentComplete> {
  static ::blink::mojom::PaymentComplete ToMojom(::blink::mojom::PaymentComplete input) { return input; }
  static bool FromMojom(::blink::mojom::PaymentComplete input, ::blink::mojom::PaymentComplete* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PaymentComplete, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PaymentComplete, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PaymentComplete>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_REQUEST_MOJOM_SHARED_H_
