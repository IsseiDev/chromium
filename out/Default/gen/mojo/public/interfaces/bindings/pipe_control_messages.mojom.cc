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

#include "mojo/public/interfaces/bindings/pipe_control_messages.mojom.h"

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
namespace pipe_control {

namespace {

}  // namespace// static
RunOrClosePipeMessageParamsPtr RunOrClosePipeMessageParams::New() {
  RunOrClosePipeMessageParamsPtr rv;
  mojo::internal::StructHelper<RunOrClosePipeMessageParams>::Initialize(&rv);
  return rv;
}

RunOrClosePipeMessageParams::RunOrClosePipeMessageParams()
    : input() {
}

RunOrClosePipeMessageParams::~RunOrClosePipeMessageParams() {
}// static
PeerAssociatedEndpointClosedEventPtr PeerAssociatedEndpointClosedEvent::New() {
  PeerAssociatedEndpointClosedEventPtr rv;
  mojo::internal::StructHelper<PeerAssociatedEndpointClosedEvent>::Initialize(&rv);
  return rv;
}

PeerAssociatedEndpointClosedEvent::PeerAssociatedEndpointClosedEvent()
    : id() {
}

PeerAssociatedEndpointClosedEvent::~PeerAssociatedEndpointClosedEvent() {
}// static
AssociatedEndpointClosedBeforeSentEventPtr AssociatedEndpointClosedBeforeSentEvent::New() {
  AssociatedEndpointClosedBeforeSentEventPtr rv;
  mojo::internal::StructHelper<AssociatedEndpointClosedBeforeSentEvent>::Initialize(&rv);
  return rv;
}

AssociatedEndpointClosedBeforeSentEvent::AssociatedEndpointClosedBeforeSentEvent()
    : id() {
}

AssociatedEndpointClosedBeforeSentEvent::~AssociatedEndpointClosedBeforeSentEvent() {
}// static
RunOrClosePipeInputPtr RunOrClosePipeInput::New() {
  RunOrClosePipeInputPtr rv;
  mojo::internal::StructHelper<RunOrClosePipeInput>::Initialize(&rv);
  return rv;
}

RunOrClosePipeInput::RunOrClosePipeInput() {
  // TODO(azani): Implement default values here when/if we support them.
  // TODO(azani): Set to UNKNOWN when unknown is implemented.
  SetActive(static_cast<Tag>(0));
}

RunOrClosePipeInput::~RunOrClosePipeInput() {
  DestroyActive();
}


void RunOrClosePipeInput::set_peer_associated_endpoint_closed_event(PeerAssociatedEndpointClosedEventPtr peer_associated_endpoint_closed_event) {
  SwitchActive(Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT);

  *(data_.peer_associated_endpoint_closed_event) = std::move(peer_associated_endpoint_closed_event);
}
void RunOrClosePipeInput::set_associated_endpoint_closed_before_sent_event(AssociatedEndpointClosedBeforeSentEventPtr associated_endpoint_closed_before_sent_event) {
  SwitchActive(Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT);

  *(data_.associated_endpoint_closed_before_sent_event) = std::move(associated_endpoint_closed_before_sent_event);
}

void RunOrClosePipeInput::SwitchActive(Tag new_active) {
  if (new_active == tag_) {
    return;
  }

  DestroyActive();
  SetActive(new_active);
}

void RunOrClosePipeInput::SetActive(Tag new_active) {
  switch (new_active) {

    case Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT:

      data_.peer_associated_endpoint_closed_event = new PeerAssociatedEndpointClosedEventPtr();
      break;
    case Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT:

      data_.associated_endpoint_closed_before_sent_event = new AssociatedEndpointClosedBeforeSentEventPtr();
      break;
  }

  tag_ = new_active;
}

void RunOrClosePipeInput::DestroyActive() {
  switch (tag_) {

    case Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT:

      delete data_.peer_associated_endpoint_closed_event;
      break;
    case Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT:

      delete data_.associated_endpoint_closed_before_sent_event;
      break;
  }
}
}  // namespace pipe_control
}  // namespace mojo

namespace mojo {


// static
bool StructTraits<::mojo::pipe_control::RunOrClosePipeMessageParams, ::mojo::pipe_control::RunOrClosePipeMessageParamsPtr>::Read(
    ::mojo::pipe_control::RunOrClosePipeMessageParamsDataView input,
    ::mojo::pipe_control::RunOrClosePipeMessageParamsPtr* output) {
  bool success = true;
  ::mojo::pipe_control::RunOrClosePipeMessageParamsPtr result(::mojo::pipe_control::RunOrClosePipeMessageParams::New());
  
      if (!input.ReadInput(&result->input))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::pipe_control::PeerAssociatedEndpointClosedEvent, ::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr>::Read(
    ::mojo::pipe_control::PeerAssociatedEndpointClosedEventDataView input,
    ::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr* output) {
  bool success = true;
  ::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr result(::mojo::pipe_control::PeerAssociatedEndpointClosedEvent::New());
  
      result->id = input.id();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEvent, ::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEventPtr>::Read(
    ::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEventDataView input,
    ::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEventPtr* output) {
  bool success = true;
  ::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEventPtr result(::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEvent::New());
  
      result->id = input.id();
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::mojo::pipe_control::RunOrClosePipeInput, ::mojo::pipe_control::RunOrClosePipeInputPtr>::Read(
    ::mojo::pipe_control::RunOrClosePipeInputDataView input,
    ::mojo::pipe_control::RunOrClosePipeInputPtr* output) {
  *output = ::mojo::pipe_control::RunOrClosePipeInput::New();
  ::mojo::pipe_control::RunOrClosePipeInputPtr& result = *output;

  internal::UnionAccessor<::mojo::pipe_control::RunOrClosePipeInput> result_acc(result.get());
  switch (input.tag()) {
    case ::mojo::pipe_control::RunOrClosePipeInput::Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT: {
      result_acc.SwitchActive(::mojo::pipe_control::RunOrClosePipeInput::Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT);
      if (!input.ReadPeerAssociatedEndpointClosedEvent(result_acc.data()->peer_associated_endpoint_closed_event))
        return false;
      break;
    }
    case ::mojo::pipe_control::RunOrClosePipeInput::Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT: {
      result_acc.SwitchActive(::mojo::pipe_control::RunOrClosePipeInput::Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT);
      if (!input.ReadAssociatedEndpointClosedBeforeSentEvent(result_acc.data()->associated_endpoint_closed_before_sent_event))
        return false;
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif