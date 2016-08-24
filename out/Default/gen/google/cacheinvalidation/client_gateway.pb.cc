// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client_gateway.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "client_gateway.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace ipc {
namespace invalidation {

void protobuf_ShutdownFile_client_5fgateway_2eproto() {
  delete ClientGatewayMessage::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_client_5fgateway_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_client_5fgateway_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ClientGatewayMessage::default_instance_ = new ClientGatewayMessage();
  ClientGatewayMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_client_5fgateway_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_client_5fgateway_2eproto_once_);
void protobuf_AddDesc_client_5fgateway_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_client_5fgateway_2eproto_once_,
                 &protobuf_AddDesc_client_5fgateway_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_client_5fgateway_2eproto {
  StaticDescriptorInitializer_client_5fgateway_2eproto() {
    protobuf_AddDesc_client_5fgateway_2eproto();
  }
} static_descriptor_initializer_client_5fgateway_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
GOOGLE_ATTRIBUTE_NOINLINE static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForClientGatewayMessage(
    ClientGatewayMessage* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ClientGatewayMessage::kIsClientToServerFieldNumber;
const int ClientGatewayMessage::kServiceContextFieldNumber;
const int ClientGatewayMessage::kRpcSchedulingHashFieldNumber;
const int ClientGatewayMessage::kNetworkMessageFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ClientGatewayMessage::ClientGatewayMessage()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ipc.invalidation.ClientGatewayMessage)
}

void ClientGatewayMessage::InitAsDefaultInstance() {
}

ClientGatewayMessage::ClientGatewayMessage(const ClientGatewayMessage& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ipc.invalidation.ClientGatewayMessage)
}

void ClientGatewayMessage::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  is_client_to_server_ = false;
  service_context_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  rpc_scheduling_hash_ = GOOGLE_LONGLONG(0);
  network_message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ClientGatewayMessage::~ClientGatewayMessage() {
  // @@protoc_insertion_point(destructor:ipc.invalidation.ClientGatewayMessage)
  SharedDtor();
}

void ClientGatewayMessage::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  service_context_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  network_message_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ClientGatewayMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ClientGatewayMessage& ClientGatewayMessage::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_client_5fgateway_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_client_5fgateway_2eproto();
#endif
  return *default_instance_;
}

ClientGatewayMessage* ClientGatewayMessage::default_instance_ = NULL;

ClientGatewayMessage* ClientGatewayMessage::New(::google::protobuf::Arena* arena) const {
  ClientGatewayMessage* n = new ClientGatewayMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ClientGatewayMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:ipc.invalidation.ClientGatewayMessage)
  if (_has_bits_[0 / 32] & 15u) {
    is_client_to_server_ = false;
    if (has_service_context()) {
      service_context_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    rpc_scheduling_hash_ = GOOGLE_LONGLONG(0);
    if (has_network_message()) {
      network_message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool ClientGatewayMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForClientGatewayMessage, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:ipc.invalidation.ClientGatewayMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool is_client_to_server = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_client_to_server_)));
          set_has_is_client_to_server();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_service_context;
        break;
      }

      // optional bytes service_context = 2;
      case 2: {
        if (tag == 18) {
         parse_service_context:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_service_context()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_rpc_scheduling_hash;
        break;
      }

      // optional int64 rpc_scheduling_hash = 3;
      case 3: {
        if (tag == 24) {
         parse_rpc_scheduling_hash:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &rpc_scheduling_hash_)));
          set_has_rpc_scheduling_hash();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_network_message;
        break;
      }

      // optional bytes network_message = 4;
      case 4: {
        if (tag == 34) {
         parse_network_message:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_network_message()));
        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:ipc.invalidation.ClientGatewayMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ipc.invalidation.ClientGatewayMessage)
  return false;
#undef DO_
}

void ClientGatewayMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ipc.invalidation.ClientGatewayMessage)
  // optional bool is_client_to_server = 1;
  if (has_is_client_to_server()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->is_client_to_server(), output);
  }

  // optional bytes service_context = 2;
  if (has_service_context()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->service_context(), output);
  }

  // optional int64 rpc_scheduling_hash = 3;
  if (has_rpc_scheduling_hash()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->rpc_scheduling_hash(), output);
  }

  // optional bytes network_message = 4;
  if (has_network_message()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->network_message(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:ipc.invalidation.ClientGatewayMessage)
}

int ClientGatewayMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:ipc.invalidation.ClientGatewayMessage)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 15u) {
    // optional bool is_client_to_server = 1;
    if (has_is_client_to_server()) {
      total_size += 1 + 1;
    }

    // optional bytes service_context = 2;
    if (has_service_context()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->service_context());
    }

    // optional int64 rpc_scheduling_hash = 3;
    if (has_rpc_scheduling_hash()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->rpc_scheduling_hash());
    }

    // optional bytes network_message = 4;
    if (has_network_message()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->network_message());
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClientGatewayMessage::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ClientGatewayMessage*>(&from));
}

void ClientGatewayMessage::MergeFrom(const ClientGatewayMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ipc.invalidation.ClientGatewayMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_is_client_to_server()) {
      set_is_client_to_server(from.is_client_to_server());
    }
    if (from.has_service_context()) {
      set_has_service_context();
      service_context_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.service_context_);
    }
    if (from.has_rpc_scheduling_hash()) {
      set_rpc_scheduling_hash(from.rpc_scheduling_hash());
    }
    if (from.has_network_message()) {
      set_has_network_message();
      network_message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.network_message_);
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void ClientGatewayMessage::CopyFrom(const ClientGatewayMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ipc.invalidation.ClientGatewayMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientGatewayMessage::IsInitialized() const {

  return true;
}

void ClientGatewayMessage::Swap(ClientGatewayMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ClientGatewayMessage::InternalSwap(ClientGatewayMessage* other) {
  std::swap(is_client_to_server_, other->is_client_to_server_);
  service_context_.Swap(&other->service_context_);
  std::swap(rpc_scheduling_hash_, other->rpc_scheduling_hash_);
  network_message_.Swap(&other->network_message_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string ClientGatewayMessage::GetTypeName() const {
  return "ipc.invalidation.ClientGatewayMessage";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ClientGatewayMessage

// optional bool is_client_to_server = 1;
bool ClientGatewayMessage::has_is_client_to_server() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ClientGatewayMessage::set_has_is_client_to_server() {
  _has_bits_[0] |= 0x00000001u;
}
void ClientGatewayMessage::clear_has_is_client_to_server() {
  _has_bits_[0] &= ~0x00000001u;
}
void ClientGatewayMessage::clear_is_client_to_server() {
  is_client_to_server_ = false;
  clear_has_is_client_to_server();
}
 bool ClientGatewayMessage::is_client_to_server() const {
  // @@protoc_insertion_point(field_get:ipc.invalidation.ClientGatewayMessage.is_client_to_server)
  return is_client_to_server_;
}
 void ClientGatewayMessage::set_is_client_to_server(bool value) {
  set_has_is_client_to_server();
  is_client_to_server_ = value;
  // @@protoc_insertion_point(field_set:ipc.invalidation.ClientGatewayMessage.is_client_to_server)
}

// optional bytes service_context = 2;
bool ClientGatewayMessage::has_service_context() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ClientGatewayMessage::set_has_service_context() {
  _has_bits_[0] |= 0x00000002u;
}
void ClientGatewayMessage::clear_has_service_context() {
  _has_bits_[0] &= ~0x00000002u;
}
void ClientGatewayMessage::clear_service_context() {
  service_context_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_service_context();
}
 const ::std::string& ClientGatewayMessage::service_context() const {
  // @@protoc_insertion_point(field_get:ipc.invalidation.ClientGatewayMessage.service_context)
  return service_context_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ClientGatewayMessage::set_service_context(const ::std::string& value) {
  set_has_service_context();
  service_context_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ipc.invalidation.ClientGatewayMessage.service_context)
}
 void ClientGatewayMessage::set_service_context(const char* value) {
  set_has_service_context();
  service_context_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ipc.invalidation.ClientGatewayMessage.service_context)
}
 void ClientGatewayMessage::set_service_context(const void* value, size_t size) {
  set_has_service_context();
  service_context_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ipc.invalidation.ClientGatewayMessage.service_context)
}
 ::std::string* ClientGatewayMessage::mutable_service_context() {
  set_has_service_context();
  // @@protoc_insertion_point(field_mutable:ipc.invalidation.ClientGatewayMessage.service_context)
  return service_context_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ClientGatewayMessage::release_service_context() {
  // @@protoc_insertion_point(field_release:ipc.invalidation.ClientGatewayMessage.service_context)
  clear_has_service_context();
  return service_context_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ClientGatewayMessage::set_allocated_service_context(::std::string* service_context) {
  if (service_context != NULL) {
    set_has_service_context();
  } else {
    clear_has_service_context();
  }
  service_context_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), service_context);
  // @@protoc_insertion_point(field_set_allocated:ipc.invalidation.ClientGatewayMessage.service_context)
}

// optional int64 rpc_scheduling_hash = 3;
bool ClientGatewayMessage::has_rpc_scheduling_hash() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void ClientGatewayMessage::set_has_rpc_scheduling_hash() {
  _has_bits_[0] |= 0x00000004u;
}
void ClientGatewayMessage::clear_has_rpc_scheduling_hash() {
  _has_bits_[0] &= ~0x00000004u;
}
void ClientGatewayMessage::clear_rpc_scheduling_hash() {
  rpc_scheduling_hash_ = GOOGLE_LONGLONG(0);
  clear_has_rpc_scheduling_hash();
}
 ::google::protobuf::int64 ClientGatewayMessage::rpc_scheduling_hash() const {
  // @@protoc_insertion_point(field_get:ipc.invalidation.ClientGatewayMessage.rpc_scheduling_hash)
  return rpc_scheduling_hash_;
}
 void ClientGatewayMessage::set_rpc_scheduling_hash(::google::protobuf::int64 value) {
  set_has_rpc_scheduling_hash();
  rpc_scheduling_hash_ = value;
  // @@protoc_insertion_point(field_set:ipc.invalidation.ClientGatewayMessage.rpc_scheduling_hash)
}

// optional bytes network_message = 4;
bool ClientGatewayMessage::has_network_message() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void ClientGatewayMessage::set_has_network_message() {
  _has_bits_[0] |= 0x00000008u;
}
void ClientGatewayMessage::clear_has_network_message() {
  _has_bits_[0] &= ~0x00000008u;
}
void ClientGatewayMessage::clear_network_message() {
  network_message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_network_message();
}
 const ::std::string& ClientGatewayMessage::network_message() const {
  // @@protoc_insertion_point(field_get:ipc.invalidation.ClientGatewayMessage.network_message)
  return network_message_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ClientGatewayMessage::set_network_message(const ::std::string& value) {
  set_has_network_message();
  network_message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ipc.invalidation.ClientGatewayMessage.network_message)
}
 void ClientGatewayMessage::set_network_message(const char* value) {
  set_has_network_message();
  network_message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ipc.invalidation.ClientGatewayMessage.network_message)
}
 void ClientGatewayMessage::set_network_message(const void* value, size_t size) {
  set_has_network_message();
  network_message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ipc.invalidation.ClientGatewayMessage.network_message)
}
 ::std::string* ClientGatewayMessage::mutable_network_message() {
  set_has_network_message();
  // @@protoc_insertion_point(field_mutable:ipc.invalidation.ClientGatewayMessage.network_message)
  return network_message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ClientGatewayMessage::release_network_message() {
  // @@protoc_insertion_point(field_release:ipc.invalidation.ClientGatewayMessage.network_message)
  clear_has_network_message();
  return network_message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ClientGatewayMessage::set_allocated_network_message(::std::string* network_message) {
  if (network_message != NULL) {
    set_has_network_message();
  } else {
    clear_has_network_message();
  }
  network_message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), network_message);
  // @@protoc_insertion_point(field_set_allocated:ipc.invalidation.ClientGatewayMessage.network_message)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace invalidation
}  // namespace ipc

// @@protoc_insertion_point(global_scope)
