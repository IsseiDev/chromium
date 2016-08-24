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

#include "services/shell/public/interfaces/capabilities.mojom.h"

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
#include "services/shell/public/cpp/capabilities_struct_traits.h"
#include "ipc/ipc_message_utils.h"
#include "services/shell/public/cpp/identity_struct_traits.h"
#include "mojo/common/common_custom_types_struct_traits.h"
namespace shell {
namespace mojom {

namespace {

}  // namespace// static
CapabilityRequestPtr CapabilityRequest::New() {
  CapabilityRequestPtr rv;
  mojo::internal::StructHelper<CapabilityRequest>::Initialize(&rv);
  return rv;
}

CapabilityRequest::CapabilityRequest()
    : classes(),
      interfaces() {
}

CapabilityRequest::~CapabilityRequest() {
}// static
CapabilitySpecPtr CapabilitySpec::New() {
  CapabilitySpecPtr rv;
  mojo::internal::StructHelper<CapabilitySpec>::Initialize(&rv);
  return rv;
}

CapabilitySpec::CapabilitySpec()
    : provided(),
      required() {
}

CapabilitySpec::~CapabilitySpec() {
}
}  // namespace mojom
}  // namespace shell

namespace mojo {


// static
bool StructTraits<::shell::mojom::CapabilityRequest, ::shell::mojom::CapabilityRequestPtr>::Read(
    ::shell::mojom::CapabilityRequestDataView input,
    ::shell::mojom::CapabilityRequestPtr* output) {
  bool success = true;
  ::shell::mojom::CapabilityRequestPtr result(::shell::mojom::CapabilityRequest::New());
  
      if (!input.ReadClasses(&result->classes))
        success = false;
      if (!input.ReadInterfaces(&result->interfaces))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::shell::mojom::CapabilitySpec, ::shell::mojom::CapabilitySpecPtr>::Read(
    ::shell::mojom::CapabilitySpecDataView input,
    ::shell::mojom::CapabilitySpecPtr* output) {
  bool success = true;
  ::shell::mojom::CapabilitySpecPtr result(::shell::mojom::CapabilitySpec::New());
  
      if (!input.ReadProvided(&result->provided))
        success = false;
      if (!input.ReadRequired(&result->required))
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