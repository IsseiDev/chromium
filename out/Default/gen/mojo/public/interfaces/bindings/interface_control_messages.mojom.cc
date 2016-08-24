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

#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

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
namespace mojo {

namespace {

}  // namespace// static
RunMessageParamsPtr RunMessageParams::New() {
  RunMessageParamsPtr rv;
  mojo::internal::StructHelper<RunMessageParams>::Initialize(&rv);
  return rv;
}

RunMessageParams::RunMessageParams()
    : reserved0(),
      reserved1(),
      query_version() {
}

RunMessageParams::~RunMessageParams() {
}// static
RunResponseMessageParamsPtr RunResponseMessageParams::New() {
  RunResponseMessageParamsPtr rv;
  mojo::internal::StructHelper<RunResponseMessageParams>::Initialize(&rv);
  return rv;
}

RunResponseMessageParams::RunResponseMessageParams()
    : reserved0(),
      reserved1(),
      query_version_result() {
}

RunResponseMessageParams::~RunResponseMessageParams() {
}// static
QueryVersionPtr QueryVersion::New() {
  QueryVersionPtr rv;
  mojo::internal::StructHelper<QueryVersion>::Initialize(&rv);
  return rv;
}

QueryVersion::QueryVersion() {
}

QueryVersion::~QueryVersion() {
}// static
QueryVersionResultPtr QueryVersionResult::New() {
  QueryVersionResultPtr rv;
  mojo::internal::StructHelper<QueryVersionResult>::Initialize(&rv);
  return rv;
}

QueryVersionResult::QueryVersionResult()
    : version() {
}

QueryVersionResult::~QueryVersionResult() {
}// static
RunOrClosePipeMessageParamsPtr RunOrClosePipeMessageParams::New() {
  RunOrClosePipeMessageParamsPtr rv;
  mojo::internal::StructHelper<RunOrClosePipeMessageParams>::Initialize(&rv);
  return rv;
}

RunOrClosePipeMessageParams::RunOrClosePipeMessageParams()
    : reserved0(),
      reserved1(),
      require_version() {
}

RunOrClosePipeMessageParams::~RunOrClosePipeMessageParams() {
}// static
RequireVersionPtr RequireVersion::New() {
  RequireVersionPtr rv;
  mojo::internal::StructHelper<RequireVersion>::Initialize(&rv);
  return rv;
}

RequireVersion::RequireVersion()
    : version() {
}

RequireVersion::~RequireVersion() {
}
}  // namespace mojo

namespace mojo {


// static
bool StructTraits<::mojo::RunMessageParams, ::mojo::RunMessageParamsPtr>::Read(
    ::mojo::RunMessageParamsDataView input,
    ::mojo::RunMessageParamsPtr* output) {
  bool success = true;
  ::mojo::RunMessageParamsPtr result(::mojo::RunMessageParams::New());
  
      result->reserved0 = input.reserved0();
      result->reserved1 = input.reserved1();
      if (!input.ReadQueryVersion(&result->query_version))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::RunResponseMessageParams, ::mojo::RunResponseMessageParamsPtr>::Read(
    ::mojo::RunResponseMessageParamsDataView input,
    ::mojo::RunResponseMessageParamsPtr* output) {
  bool success = true;
  ::mojo::RunResponseMessageParamsPtr result(::mojo::RunResponseMessageParams::New());
  
      result->reserved0 = input.reserved0();
      result->reserved1 = input.reserved1();
      if (!input.ReadQueryVersionResult(&result->query_version_result))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::QueryVersion, ::mojo::QueryVersionPtr>::Read(
    ::mojo::QueryVersionDataView input,
    ::mojo::QueryVersionPtr* output) {
  bool success = true;
  ::mojo::QueryVersionPtr result(::mojo::QueryVersion::New());
  
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::QueryVersionResult, ::mojo::QueryVersionResultPtr>::Read(
    ::mojo::QueryVersionResultDataView input,
    ::mojo::QueryVersionResultPtr* output) {
  bool success = true;
  ::mojo::QueryVersionResultPtr result(::mojo::QueryVersionResult::New());
  
      result->version = input.version();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::RunOrClosePipeMessageParams, ::mojo::RunOrClosePipeMessageParamsPtr>::Read(
    ::mojo::RunOrClosePipeMessageParamsDataView input,
    ::mojo::RunOrClosePipeMessageParamsPtr* output) {
  bool success = true;
  ::mojo::RunOrClosePipeMessageParamsPtr result(::mojo::RunOrClosePipeMessageParams::New());
  
      result->reserved0 = input.reserved0();
      result->reserved1 = input.reserved1();
      if (!input.ReadRequireVersion(&result->require_version))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::RequireVersion, ::mojo::RequireVersionPtr>::Read(
    ::mojo::RequireVersionDataView input,
    ::mojo::RequireVersionPtr* output) {
  bool success = true;
  ::mojo::RequireVersionPtr result(::mojo::RequireVersion::New());
  
      result->version = input.version();
  *output = std::move(result);
  return success;
}

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif