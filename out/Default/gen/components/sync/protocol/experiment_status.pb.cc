// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: experiment_status.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "experiment_status.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_experiment_5fstatus_2eproto() {
  delete ExperimentStatusRequest::default_instance_;
  delete ExperimentStatusResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_experiment_5fstatus_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_experiment_5fstatus_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sync_pb::protobuf_AddDesc_experiments_5fspecifics_2eproto();
  ExperimentStatusRequest::default_instance_ = new ExperimentStatusRequest();
  ExperimentStatusResponse::default_instance_ = new ExperimentStatusResponse();
  ExperimentStatusRequest::default_instance_->InitAsDefaultInstance();
  ExperimentStatusResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_experiment_5fstatus_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_experiment_5fstatus_2eproto_once_);
void protobuf_AddDesc_experiment_5fstatus_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_experiment_5fstatus_2eproto_once_,
                 &protobuf_AddDesc_experiment_5fstatus_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_experiment_5fstatus_2eproto {
  StaticDescriptorInitializer_experiment_5fstatus_2eproto() {
    protobuf_AddDesc_experiment_5fstatus_2eproto();
  }
} static_descriptor_initializer_experiment_5fstatus_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
GOOGLE_ATTRIBUTE_NOINLINE static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForExperimentStatusRequest(
    ExperimentStatusRequest* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ExperimentStatusRequest::kExperimentNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ExperimentStatusRequest::ExperimentStatusRequest()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sync_pb.ExperimentStatusRequest)
}

void ExperimentStatusRequest::InitAsDefaultInstance() {
}

ExperimentStatusRequest::ExperimentStatusRequest(const ExperimentStatusRequest& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:sync_pb.ExperimentStatusRequest)
}

void ExperimentStatusRequest::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ExperimentStatusRequest::~ExperimentStatusRequest() {
  // @@protoc_insertion_point(destructor:sync_pb.ExperimentStatusRequest)
  SharedDtor();
}

void ExperimentStatusRequest::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ExperimentStatusRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ExperimentStatusRequest& ExperimentStatusRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_experiment_5fstatus_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_experiment_5fstatus_2eproto();
#endif
  return *default_instance_;
}

ExperimentStatusRequest* ExperimentStatusRequest::default_instance_ = NULL;

ExperimentStatusRequest* ExperimentStatusRequest::New(::google::protobuf::Arena* arena) const {
  ExperimentStatusRequest* n = new ExperimentStatusRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ExperimentStatusRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.ExperimentStatusRequest)
  experiment_name_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool ExperimentStatusRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForExperimentStatusRequest, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:sync_pb.ExperimentStatusRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string experiment_name = 1;
      case 1: {
        if (tag == 10) {
         parse_experiment_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_experiment_name()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_experiment_name;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sync_pb.ExperimentStatusRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sync_pb.ExperimentStatusRequest)
  return false;
#undef DO_
}

void ExperimentStatusRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sync_pb.ExperimentStatusRequest)
  // repeated string experiment_name = 1;
  for (int i = 0; i < this->experiment_name_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->experiment_name(i), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sync_pb.ExperimentStatusRequest)
}

int ExperimentStatusRequest::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.ExperimentStatusRequest)
  int total_size = 0;

  // repeated string experiment_name = 1;
  total_size += 1 * this->experiment_name_size();
  for (int i = 0; i < this->experiment_name_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->experiment_name(i));
  }

  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ExperimentStatusRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ExperimentStatusRequest*>(&from));
}

void ExperimentStatusRequest::MergeFrom(const ExperimentStatusRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.ExperimentStatusRequest)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  experiment_name_.MergeFrom(from.experiment_name_);
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void ExperimentStatusRequest::CopyFrom(const ExperimentStatusRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.ExperimentStatusRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExperimentStatusRequest::IsInitialized() const {

  return true;
}

void ExperimentStatusRequest::Swap(ExperimentStatusRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ExperimentStatusRequest::InternalSwap(ExperimentStatusRequest* other) {
  experiment_name_.UnsafeArenaSwap(&other->experiment_name_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string ExperimentStatusRequest::GetTypeName() const {
  return "sync_pb.ExperimentStatusRequest";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ExperimentStatusRequest

// repeated string experiment_name = 1;
int ExperimentStatusRequest::experiment_name_size() const {
  return experiment_name_.size();
}
void ExperimentStatusRequest::clear_experiment_name() {
  experiment_name_.Clear();
}
 const ::std::string& ExperimentStatusRequest::experiment_name(int index) const {
  // @@protoc_insertion_point(field_get:sync_pb.ExperimentStatusRequest.experiment_name)
  return experiment_name_.Get(index);
}
 ::std::string* ExperimentStatusRequest::mutable_experiment_name(int index) {
  // @@protoc_insertion_point(field_mutable:sync_pb.ExperimentStatusRequest.experiment_name)
  return experiment_name_.Mutable(index);
}
 void ExperimentStatusRequest::set_experiment_name(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:sync_pb.ExperimentStatusRequest.experiment_name)
  experiment_name_.Mutable(index)->assign(value);
}
 void ExperimentStatusRequest::set_experiment_name(int index, const char* value) {
  experiment_name_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:sync_pb.ExperimentStatusRequest.experiment_name)
}
 void ExperimentStatusRequest::set_experiment_name(int index, const char* value, size_t size) {
  experiment_name_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ExperimentStatusRequest.experiment_name)
}
 ::std::string* ExperimentStatusRequest::add_experiment_name() {
  // @@protoc_insertion_point(field_add_mutable:sync_pb.ExperimentStatusRequest.experiment_name)
  return experiment_name_.Add();
}
 void ExperimentStatusRequest::add_experiment_name(const ::std::string& value) {
  experiment_name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:sync_pb.ExperimentStatusRequest.experiment_name)
}
 void ExperimentStatusRequest::add_experiment_name(const char* value) {
  experiment_name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:sync_pb.ExperimentStatusRequest.experiment_name)
}
 void ExperimentStatusRequest::add_experiment_name(const char* value, size_t size) {
  experiment_name_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:sync_pb.ExperimentStatusRequest.experiment_name)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
ExperimentStatusRequest::experiment_name() const {
  // @@protoc_insertion_point(field_list:sync_pb.ExperimentStatusRequest.experiment_name)
  return experiment_name_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
ExperimentStatusRequest::mutable_experiment_name() {
  // @@protoc_insertion_point(field_mutable_list:sync_pb.ExperimentStatusRequest.experiment_name)
  return &experiment_name_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

static ::std::string* MutableUnknownFieldsForExperimentStatusResponse(
    ExperimentStatusResponse* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ExperimentStatusResponse::kPollIntervalSecondsFieldNumber;
const int ExperimentStatusResponse::kExperimentFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ExperimentStatusResponse::ExperimentStatusResponse()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sync_pb.ExperimentStatusResponse)
}

void ExperimentStatusResponse::InitAsDefaultInstance() {
}

ExperimentStatusResponse::ExperimentStatusResponse(const ExperimentStatusResponse& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:sync_pb.ExperimentStatusResponse)
}

void ExperimentStatusResponse::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  poll_interval_seconds_ = 3600;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ExperimentStatusResponse::~ExperimentStatusResponse() {
  // @@protoc_insertion_point(destructor:sync_pb.ExperimentStatusResponse)
  SharedDtor();
}

void ExperimentStatusResponse::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ExperimentStatusResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ExperimentStatusResponse& ExperimentStatusResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_experiment_5fstatus_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_experiment_5fstatus_2eproto();
#endif
  return *default_instance_;
}

ExperimentStatusResponse* ExperimentStatusResponse::default_instance_ = NULL;

ExperimentStatusResponse* ExperimentStatusResponse::New(::google::protobuf::Arena* arena) const {
  ExperimentStatusResponse* n = new ExperimentStatusResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ExperimentStatusResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.ExperimentStatusResponse)
  poll_interval_seconds_ = 3600;
  experiment_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool ExperimentStatusResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForExperimentStatusResponse, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:sync_pb.ExperimentStatusResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 poll_interval_seconds = 1 [default = 3600];
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &poll_interval_seconds_)));
          set_has_poll_interval_seconds();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_experiment;
        break;
      }

      // repeated .sync_pb.ExperimentsSpecifics experiment = 2;
      case 2: {
        if (tag == 18) {
         parse_experiment:
          DO_(input->IncrementRecursionDepth());
         parse_loop_experiment:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_experiment()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_experiment;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sync_pb.ExperimentStatusResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sync_pb.ExperimentStatusResponse)
  return false;
#undef DO_
}

void ExperimentStatusResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sync_pb.ExperimentStatusResponse)
  // optional int32 poll_interval_seconds = 1 [default = 3600];
  if (has_poll_interval_seconds()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->poll_interval_seconds(), output);
  }

  // repeated .sync_pb.ExperimentsSpecifics experiment = 2;
  for (unsigned int i = 0, n = this->experiment_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->experiment(i), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sync_pb.ExperimentStatusResponse)
}

int ExperimentStatusResponse::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.ExperimentStatusResponse)
  int total_size = 0;

  // optional int32 poll_interval_seconds = 1 [default = 3600];
  if (has_poll_interval_seconds()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->poll_interval_seconds());
  }

  // repeated .sync_pb.ExperimentsSpecifics experiment = 2;
  total_size += 1 * this->experiment_size();
  for (int i = 0; i < this->experiment_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->experiment(i));
  }

  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ExperimentStatusResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ExperimentStatusResponse*>(&from));
}

void ExperimentStatusResponse::MergeFrom(const ExperimentStatusResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.ExperimentStatusResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  experiment_.MergeFrom(from.experiment_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_poll_interval_seconds()) {
      set_poll_interval_seconds(from.poll_interval_seconds());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void ExperimentStatusResponse::CopyFrom(const ExperimentStatusResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.ExperimentStatusResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExperimentStatusResponse::IsInitialized() const {

  return true;
}

void ExperimentStatusResponse::Swap(ExperimentStatusResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ExperimentStatusResponse::InternalSwap(ExperimentStatusResponse* other) {
  std::swap(poll_interval_seconds_, other->poll_interval_seconds_);
  experiment_.UnsafeArenaSwap(&other->experiment_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string ExperimentStatusResponse::GetTypeName() const {
  return "sync_pb.ExperimentStatusResponse";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ExperimentStatusResponse

// optional int32 poll_interval_seconds = 1 [default = 3600];
bool ExperimentStatusResponse::has_poll_interval_seconds() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ExperimentStatusResponse::set_has_poll_interval_seconds() {
  _has_bits_[0] |= 0x00000001u;
}
void ExperimentStatusResponse::clear_has_poll_interval_seconds() {
  _has_bits_[0] &= ~0x00000001u;
}
void ExperimentStatusResponse::clear_poll_interval_seconds() {
  poll_interval_seconds_ = 3600;
  clear_has_poll_interval_seconds();
}
 ::google::protobuf::int32 ExperimentStatusResponse::poll_interval_seconds() const {
  // @@protoc_insertion_point(field_get:sync_pb.ExperimentStatusResponse.poll_interval_seconds)
  return poll_interval_seconds_;
}
 void ExperimentStatusResponse::set_poll_interval_seconds(::google::protobuf::int32 value) {
  set_has_poll_interval_seconds();
  poll_interval_seconds_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ExperimentStatusResponse.poll_interval_seconds)
}

// repeated .sync_pb.ExperimentsSpecifics experiment = 2;
int ExperimentStatusResponse::experiment_size() const {
  return experiment_.size();
}
void ExperimentStatusResponse::clear_experiment() {
  experiment_.Clear();
}
const ::sync_pb::ExperimentsSpecifics& ExperimentStatusResponse::experiment(int index) const {
  // @@protoc_insertion_point(field_get:sync_pb.ExperimentStatusResponse.experiment)
  return experiment_.Get(index);
}
::sync_pb::ExperimentsSpecifics* ExperimentStatusResponse::mutable_experiment(int index) {
  // @@protoc_insertion_point(field_mutable:sync_pb.ExperimentStatusResponse.experiment)
  return experiment_.Mutable(index);
}
::sync_pb::ExperimentsSpecifics* ExperimentStatusResponse::add_experiment() {
  // @@protoc_insertion_point(field_add:sync_pb.ExperimentStatusResponse.experiment)
  return experiment_.Add();
}
::google::protobuf::RepeatedPtrField< ::sync_pb::ExperimentsSpecifics >*
ExperimentStatusResponse::mutable_experiment() {
  // @@protoc_insertion_point(field_mutable_list:sync_pb.ExperimentStatusResponse.experiment)
  return &experiment_;
}
const ::google::protobuf::RepeatedPtrField< ::sync_pb::ExperimentsSpecifics >&
ExperimentStatusResponse::experiment() const {
  // @@protoc_insertion_point(field_list:sync_pb.ExperimentStatusResponse.experiment)
  return experiment_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
