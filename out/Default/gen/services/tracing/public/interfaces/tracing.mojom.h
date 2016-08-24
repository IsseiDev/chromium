// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_INTERFACES_TRACING_MOJOM_H_
#define SERVICES_TRACING_PUBLIC_INTERFACES_TRACING_MOJOM_H_

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
#include "services/tracing/public/interfaces/tracing.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace tracing {
namespace mojom {
class Provider;
using ProviderPtr = mojo::InterfacePtr<Provider>;
using ProviderPtrInfo = mojo::InterfacePtrInfo<Provider>;
using ProviderRequest = mojo::InterfaceRequest<Provider>;
using ProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<Provider>;
using ProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Provider>;
using ProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Provider>;

class Recorder;
using RecorderPtr = mojo::InterfacePtr<Recorder>;
using RecorderPtrInfo = mojo::InterfacePtrInfo<Recorder>;
using RecorderRequest = mojo::InterfaceRequest<Recorder>;
using RecorderAssociatedPtr =
    mojo::AssociatedInterfacePtr<Recorder>;
using RecorderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Recorder>;
using RecorderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Recorder>;

class Collector;
using CollectorPtr = mojo::InterfacePtr<Collector>;
using CollectorPtrInfo = mojo::InterfacePtrInfo<Collector>;
using CollectorRequest = mojo::InterfaceRequest<Collector>;
using CollectorAssociatedPtr =
    mojo::AssociatedInterfacePtr<Collector>;
using CollectorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Collector>;
using CollectorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Collector>;

class StartupPerformanceDataCollector;
using StartupPerformanceDataCollectorPtr = mojo::InterfacePtr<StartupPerformanceDataCollector>;
using StartupPerformanceDataCollectorPtrInfo = mojo::InterfacePtrInfo<StartupPerformanceDataCollector>;
using StartupPerformanceDataCollectorRequest = mojo::InterfaceRequest<StartupPerformanceDataCollector>;
using StartupPerformanceDataCollectorAssociatedPtr =
    mojo::AssociatedInterfacePtr<StartupPerformanceDataCollector>;
using StartupPerformanceDataCollectorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<StartupPerformanceDataCollector>;
using StartupPerformanceDataCollectorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<StartupPerformanceDataCollector>;

class Factory;
using FactoryPtr = mojo::InterfacePtr<Factory>;
using FactoryPtrInfo = mojo::InterfacePtrInfo<Factory>;
using FactoryRequest = mojo::InterfaceRequest<Factory>;
using FactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<Factory>;
using FactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Factory>;
using FactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Factory>;

class StartupPerformanceTimes;
class StartupPerformanceTimesDataView;
using StartupPerformanceTimesPtr = mojo::StructPtr<StartupPerformanceTimes>;


class ProviderProxy;
class ProviderStub;

class ProviderRequestValidator;

class  Provider {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ProviderProxy;
  using Stub_ = ProviderStub;

  using RequestValidator_ = ProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~Provider() {}

  virtual void StartTracing(const std::string& categories, RecorderPtr recorder) = 0;

  virtual void StopTracing() = 0;
};

class RecorderProxy;
class RecorderStub;

class RecorderRequestValidator;

class  Recorder {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = RecorderProxy;
  using Stub_ = RecorderStub;

  using RequestValidator_ = RecorderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~Recorder() {}

  virtual void Record(const std::string& json) = 0;
};

class CollectorProxy;
class CollectorStub;

class CollectorRequestValidator;

class  Collector {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = CollectorProxy;
  using Stub_ = CollectorStub;

  using RequestValidator_ = CollectorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~Collector() {}

  virtual void Start(mojo::ScopedDataPipeProducerHandle stream, const std::string& categories) = 0;

  virtual void StopAndFlush() = 0;
};

class StartupPerformanceDataCollectorProxy;
class StartupPerformanceDataCollectorStub;

class StartupPerformanceDataCollectorRequestValidator;
class StartupPerformanceDataCollectorResponseValidator;

class  StartupPerformanceDataCollector {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = StartupPerformanceDataCollectorProxy;
  using Stub_ = StartupPerformanceDataCollectorStub;

  using RequestValidator_ = StartupPerformanceDataCollectorRequestValidator;
  using ResponseValidator_ = StartupPerformanceDataCollectorResponseValidator;
  virtual ~StartupPerformanceDataCollector() {}

  virtual void SetShellProcessCreationTime(int64_t time) = 0;

  virtual void SetShellMainEntryPointTime(int64_t time) = 0;

  virtual void SetBrowserMessageLoopStartTicks(int64_t ticks) = 0;

  virtual void SetBrowserWindowDisplayTicks(int64_t ticks) = 0;

  virtual void SetBrowserOpenTabsTimeDelta(int64_t delta) = 0;

  virtual void SetFirstWebContentsMainFrameLoadTicks(int64_t ticks) = 0;

  virtual void SetFirstVisuallyNonEmptyLayoutTicks(int64_t ticks) = 0;


  using GetStartupPerformanceTimesCallback = base::Callback<void(StartupPerformanceTimesPtr)>;
  virtual void GetStartupPerformanceTimes(const GetStartupPerformanceTimesCallback& callback) = 0;
};

class FactoryProxy;
class FactoryStub;

class FactoryRequestValidator;

class  Factory {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = FactoryProxy;
  using Stub_ = FactoryStub;

  using RequestValidator_ = FactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~Factory() {}

  virtual void CreateRecorder(ProviderPtr provider) = 0;
};

class  ProviderProxy
    : public Provider,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartTracing(const std::string& categories, RecorderPtr recorder) override;
  void StopTracing() override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  RecorderProxy
    : public Recorder,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit RecorderProxy(mojo::MessageReceiverWithResponder* receiver);
  void Record(const std::string& json) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  CollectorProxy
    : public Collector,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit CollectorProxy(mojo::MessageReceiverWithResponder* receiver);
  void Start(mojo::ScopedDataPipeProducerHandle stream, const std::string& categories) override;
  void StopAndFlush() override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  StartupPerformanceDataCollectorProxy
    : public StartupPerformanceDataCollector,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit StartupPerformanceDataCollectorProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetShellProcessCreationTime(int64_t time) override;
  void SetShellMainEntryPointTime(int64_t time) override;
  void SetBrowserMessageLoopStartTicks(int64_t ticks) override;
  void SetBrowserWindowDisplayTicks(int64_t ticks) override;
  void SetBrowserOpenTabsTimeDelta(int64_t delta) override;
  void SetFirstWebContentsMainFrameLoadTicks(int64_t ticks) override;
  void SetFirstVisuallyNonEmptyLayoutTicks(int64_t ticks) override;
  void GetStartupPerformanceTimes(const GetStartupPerformanceTimesCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  FactoryProxy
    : public Factory,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit FactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateRecorder(ProviderPtr provider) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  ProviderStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ProviderStub();
  ~ProviderStub() override;
  void set_sink(Provider* sink) { sink_ = sink; }
  Provider* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Provider* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  RecorderStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  RecorderStub();
  ~RecorderStub() override;
  void set_sink(Recorder* sink) { sink_ = sink; }
  Recorder* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Recorder* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  CollectorStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  CollectorStub();
  ~CollectorStub() override;
  void set_sink(Collector* sink) { sink_ = sink; }
  Collector* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Collector* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  StartupPerformanceDataCollectorStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  StartupPerformanceDataCollectorStub();
  ~StartupPerformanceDataCollectorStub() override;
  void set_sink(StartupPerformanceDataCollector* sink) { sink_ = sink; }
  StartupPerformanceDataCollector* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  StartupPerformanceDataCollector* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  FactoryStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  FactoryStub();
  ~FactoryStub() override;
  void set_sink(Factory* sink) { sink_ = sink; }
  Factory* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Factory* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  ProviderRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ProviderRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  RecorderRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit RecorderRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  CollectorRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit CollectorRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  StartupPerformanceDataCollectorRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit StartupPerformanceDataCollectorRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  FactoryRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit FactoryRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  StartupPerformanceDataCollectorResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit StartupPerformanceDataCollectorResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





class  StartupPerformanceTimes {
 public:
  using DataView = StartupPerformanceTimesDataView;
  using Data_ = internal::StartupPerformanceTimes_Data;

  static StartupPerformanceTimesPtr New();

  template <typename U>
  static StartupPerformanceTimesPtr From(const U& u) {
    return mojo::TypeConverter<StartupPerformanceTimesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StartupPerformanceTimes>::Convert(*this);
  }

  StartupPerformanceTimes();
  ~StartupPerformanceTimes();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StartupPerformanceTimesPtr>
  StartupPerformanceTimesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StartupPerformanceTimes>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        StartupPerformanceTimesPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        StartupPerformanceTimesPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  int64_t shell_process_creation_time;
  int64_t shell_main_entry_point_time;
  int64_t browser_message_loop_start_ticks;
  int64_t browser_window_display_ticks;
  int64_t browser_open_tabs_time_delta;
  int64_t first_web_contents_main_frame_load_ticks;
  int64_t first_visually_non_empty_layout_ticks;
};

class StartupPerformanceTimesDataView {
 public:
  StartupPerformanceTimesDataView() {}

  StartupPerformanceTimesDataView(
      internal::StartupPerformanceTimes_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t shell_process_creation_time() const {
    return data_->shell_process_creation_time;
  }
  int64_t shell_main_entry_point_time() const {
    return data_->shell_main_entry_point_time;
  }
  int64_t browser_message_loop_start_ticks() const {
    return data_->browser_message_loop_start_ticks;
  }
  int64_t browser_window_display_ticks() const {
    return data_->browser_window_display_ticks;
  }
  int64_t browser_open_tabs_time_delta() const {
    return data_->browser_open_tabs_time_delta;
  }
  int64_t first_web_contents_main_frame_load_ticks() const {
    return data_->first_web_contents_main_frame_load_ticks;
  }
  int64_t first_visually_non_empty_layout_ticks() const {
    return data_->first_visually_non_empty_layout_ticks;
  }
 private:
  internal::StartupPerformanceTimes_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace tracing

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::tracing::mojom::StartupPerformanceTimesDataView> {
  using MojomType = ::tracing::mojom::StartupPerformanceTimesPtr;
};
}  // namespace internal
}  // namespace mojo

namespace tracing {
namespace mojom {


template <typename StructPtrType>
StartupPerformanceTimesPtr StartupPerformanceTimes::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->shell_process_creation_time = mojo::internal::Clone(shell_process_creation_time);
  rv->shell_main_entry_point_time = mojo::internal::Clone(shell_main_entry_point_time);
  rv->browser_message_loop_start_ticks = mojo::internal::Clone(browser_message_loop_start_ticks);
  rv->browser_window_display_ticks = mojo::internal::Clone(browser_window_display_ticks);
  rv->browser_open_tabs_time_delta = mojo::internal::Clone(browser_open_tabs_time_delta);
  rv->first_web_contents_main_frame_load_ticks = mojo::internal::Clone(first_web_contents_main_frame_load_ticks);
  rv->first_visually_non_empty_layout_ticks = mojo::internal::Clone(first_visually_non_empty_layout_ticks);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StartupPerformanceTimes>::value>::type*>
bool StartupPerformanceTimes::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->shell_process_creation_time, other.shell_process_creation_time))
    return false;
  if (!mojo::internal::Equals(this->shell_main_entry_point_time, other.shell_main_entry_point_time))
    return false;
  if (!mojo::internal::Equals(this->browser_message_loop_start_ticks, other.browser_message_loop_start_ticks))
    return false;
  if (!mojo::internal::Equals(this->browser_window_display_ticks, other.browser_window_display_ticks))
    return false;
  if (!mojo::internal::Equals(this->browser_open_tabs_time_delta, other.browser_open_tabs_time_delta))
    return false;
  if (!mojo::internal::Equals(this->first_web_contents_main_frame_load_ticks, other.first_web_contents_main_frame_load_ticks))
    return false;
  if (!mojo::internal::Equals(this->first_visually_non_empty_layout_ticks, other.first_visually_non_empty_layout_ticks))
    return false;
  return true;
}




}  // namespace mojom
}  // namespace tracing

namespace mojo {


template <>
struct  StructTraits<::tracing::mojom::StartupPerformanceTimes, ::tracing::mojom::StartupPerformanceTimesPtr> {
  static bool IsNull(const ::tracing::mojom::StartupPerformanceTimesPtr& input) { return !input; }
  static void SetToNull(::tracing::mojom::StartupPerformanceTimesPtr* output) { output->reset(); }
  static decltype(::tracing::mojom::StartupPerformanceTimes::shell_process_creation_time) shell_process_creation_time(
      const ::tracing::mojom::StartupPerformanceTimesPtr& input) {
    return input->shell_process_creation_time;
  }
  static decltype(::tracing::mojom::StartupPerformanceTimes::shell_main_entry_point_time) shell_main_entry_point_time(
      const ::tracing::mojom::StartupPerformanceTimesPtr& input) {
    return input->shell_main_entry_point_time;
  }
  static decltype(::tracing::mojom::StartupPerformanceTimes::browser_message_loop_start_ticks) browser_message_loop_start_ticks(
      const ::tracing::mojom::StartupPerformanceTimesPtr& input) {
    return input->browser_message_loop_start_ticks;
  }
  static decltype(::tracing::mojom::StartupPerformanceTimes::browser_window_display_ticks) browser_window_display_ticks(
      const ::tracing::mojom::StartupPerformanceTimesPtr& input) {
    return input->browser_window_display_ticks;
  }
  static decltype(::tracing::mojom::StartupPerformanceTimes::browser_open_tabs_time_delta) browser_open_tabs_time_delta(
      const ::tracing::mojom::StartupPerformanceTimesPtr& input) {
    return input->browser_open_tabs_time_delta;
  }
  static decltype(::tracing::mojom::StartupPerformanceTimes::first_web_contents_main_frame_load_ticks) first_web_contents_main_frame_load_ticks(
      const ::tracing::mojom::StartupPerformanceTimesPtr& input) {
    return input->first_web_contents_main_frame_load_ticks;
  }
  static decltype(::tracing::mojom::StartupPerformanceTimes::first_visually_non_empty_layout_ticks) first_visually_non_empty_layout_ticks(
      const ::tracing::mojom::StartupPerformanceTimesPtr& input) {
    return input->first_visually_non_empty_layout_ticks;
  }

  static bool Read(::tracing::mojom::StartupPerformanceTimesDataView input, ::tracing::mojom::StartupPerformanceTimesPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::StartupPerformanceTimesPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::tracing::mojom::StartupPerformanceTimes, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::tracing::mojom::internal::StartupPerformanceTimes_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::tracing::mojom::internal::StartupPerformanceTimes_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::tracing::mojom::internal::StartupPerformanceTimes_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->shell_process_creation_time = CallWithContext(Traits::shell_process_creation_time, input, custom_context);
      result->shell_main_entry_point_time = CallWithContext(Traits::shell_main_entry_point_time, input, custom_context);
      result->browser_message_loop_start_ticks = CallWithContext(Traits::browser_message_loop_start_ticks, input, custom_context);
      result->browser_window_display_ticks = CallWithContext(Traits::browser_window_display_ticks, input, custom_context);
      result->browser_open_tabs_time_delta = CallWithContext(Traits::browser_open_tabs_time_delta, input, custom_context);
      result->first_web_contents_main_frame_load_ticks = CallWithContext(Traits::first_web_contents_main_frame_load_ticks, input, custom_context);
      result->first_visually_non_empty_layout_ticks = CallWithContext(Traits::first_visually_non_empty_layout_ticks, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::tracing::mojom::internal::StartupPerformanceTimes_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::tracing::mojom::StartupPerformanceTimesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_TRACING_PUBLIC_INTERFACES_TRACING_MOJOM_H_