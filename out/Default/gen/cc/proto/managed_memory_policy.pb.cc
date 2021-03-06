// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: managed_memory_policy.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "managed_memory_policy.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace cc {
namespace proto {

void protobuf_ShutdownFile_managed_5fmemory_5fpolicy_2eproto() {
  delete ManagedMemoryPolicy::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_managed_5fmemory_5fpolicy_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_managed_5fmemory_5fpolicy_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::cc::proto::protobuf_AddDesc_memory_5fallocation_2eproto();
  ManagedMemoryPolicy::default_instance_ = new ManagedMemoryPolicy();
  ManagedMemoryPolicy::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_managed_5fmemory_5fpolicy_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_managed_5fmemory_5fpolicy_2eproto_once_);
void protobuf_AddDesc_managed_5fmemory_5fpolicy_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_managed_5fmemory_5fpolicy_2eproto_once_,
                 &protobuf_AddDesc_managed_5fmemory_5fpolicy_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_managed_5fmemory_5fpolicy_2eproto {
  StaticDescriptorInitializer_managed_5fmemory_5fpolicy_2eproto() {
    protobuf_AddDesc_managed_5fmemory_5fpolicy_2eproto();
  }
} static_descriptor_initializer_managed_5fmemory_5fpolicy_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
GOOGLE_ATTRIBUTE_NOINLINE static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForManagedMemoryPolicy(
    ManagedMemoryPolicy* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ManagedMemoryPolicy::kBytesLimitWhenVisibleFieldNumber;
const int ManagedMemoryPolicy::kPriorityCutoffWhenVisibleFieldNumber;
const int ManagedMemoryPolicy::kNumResourcesLimitFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ManagedMemoryPolicy::ManagedMemoryPolicy()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cc.proto.ManagedMemoryPolicy)
}

void ManagedMemoryPolicy::InitAsDefaultInstance() {
}

ManagedMemoryPolicy::ManagedMemoryPolicy(const ManagedMemoryPolicy& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cc.proto.ManagedMemoryPolicy)
}

void ManagedMemoryPolicy::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  bytes_limit_when_visible_ = 0u;
  priority_cutoff_when_visible_ = 0;
  num_resources_limit_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ManagedMemoryPolicy::~ManagedMemoryPolicy() {
  // @@protoc_insertion_point(destructor:cc.proto.ManagedMemoryPolicy)
  SharedDtor();
}

void ManagedMemoryPolicy::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ManagedMemoryPolicy::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ManagedMemoryPolicy& ManagedMemoryPolicy::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_managed_5fmemory_5fpolicy_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_managed_5fmemory_5fpolicy_2eproto();
#endif
  return *default_instance_;
}

ManagedMemoryPolicy* ManagedMemoryPolicy::default_instance_ = NULL;

ManagedMemoryPolicy* ManagedMemoryPolicy::New(::google::protobuf::Arena* arena) const {
  ManagedMemoryPolicy* n = new ManagedMemoryPolicy;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ManagedMemoryPolicy::Clear() {
// @@protoc_insertion_point(message_clear_start:cc.proto.ManagedMemoryPolicy)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(ManagedMemoryPolicy, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<ManagedMemoryPolicy*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(bytes_limit_when_visible_, num_resources_limit_);

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool ManagedMemoryPolicy::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForManagedMemoryPolicy, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:cc.proto.ManagedMemoryPolicy)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 bytes_limit_when_visible = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &bytes_limit_when_visible_)));
          set_has_bytes_limit_when_visible();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_priority_cutoff_when_visible;
        break;
      }

      // optional .cc.proto.MemoryAllocation.PriorityCutoff priority_cutoff_when_visible = 2;
      case 2: {
        if (tag == 16) {
         parse_priority_cutoff_when_visible:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::cc::proto::MemoryAllocation_PriorityCutoff_IsValid(value)) {
            set_priority_cutoff_when_visible(static_cast< ::cc::proto::MemoryAllocation_PriorityCutoff >(value));
          } else {
            unknown_fields_stream.WriteVarint32(16);
            unknown_fields_stream.WriteVarint32(value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_num_resources_limit;
        break;
      }

      // optional uint32 num_resources_limit = 3;
      case 3: {
        if (tag == 24) {
         parse_num_resources_limit:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &num_resources_limit_)));
          set_has_num_resources_limit();
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
  // @@protoc_insertion_point(parse_success:cc.proto.ManagedMemoryPolicy)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cc.proto.ManagedMemoryPolicy)
  return false;
#undef DO_
}

void ManagedMemoryPolicy::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cc.proto.ManagedMemoryPolicy)
  // optional uint32 bytes_limit_when_visible = 1;
  if (has_bytes_limit_when_visible()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->bytes_limit_when_visible(), output);
  }

  // optional .cc.proto.MemoryAllocation.PriorityCutoff priority_cutoff_when_visible = 2;
  if (has_priority_cutoff_when_visible()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->priority_cutoff_when_visible(), output);
  }

  // optional uint32 num_resources_limit = 3;
  if (has_num_resources_limit()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->num_resources_limit(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:cc.proto.ManagedMemoryPolicy)
}

int ManagedMemoryPolicy::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:cc.proto.ManagedMemoryPolicy)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 7u) {
    // optional uint32 bytes_limit_when_visible = 1;
    if (has_bytes_limit_when_visible()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->bytes_limit_when_visible());
    }

    // optional .cc.proto.MemoryAllocation.PriorityCutoff priority_cutoff_when_visible = 2;
    if (has_priority_cutoff_when_visible()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->priority_cutoff_when_visible());
    }

    // optional uint32 num_resources_limit = 3;
    if (has_num_resources_limit()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->num_resources_limit());
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ManagedMemoryPolicy::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ManagedMemoryPolicy*>(&from));
}

void ManagedMemoryPolicy::MergeFrom(const ManagedMemoryPolicy& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cc.proto.ManagedMemoryPolicy)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_bytes_limit_when_visible()) {
      set_bytes_limit_when_visible(from.bytes_limit_when_visible());
    }
    if (from.has_priority_cutoff_when_visible()) {
      set_priority_cutoff_when_visible(from.priority_cutoff_when_visible());
    }
    if (from.has_num_resources_limit()) {
      set_num_resources_limit(from.num_resources_limit());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void ManagedMemoryPolicy::CopyFrom(const ManagedMemoryPolicy& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cc.proto.ManagedMemoryPolicy)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ManagedMemoryPolicy::IsInitialized() const {

  return true;
}

void ManagedMemoryPolicy::Swap(ManagedMemoryPolicy* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ManagedMemoryPolicy::InternalSwap(ManagedMemoryPolicy* other) {
  std::swap(bytes_limit_when_visible_, other->bytes_limit_when_visible_);
  std::swap(priority_cutoff_when_visible_, other->priority_cutoff_when_visible_);
  std::swap(num_resources_limit_, other->num_resources_limit_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string ManagedMemoryPolicy::GetTypeName() const {
  return "cc.proto.ManagedMemoryPolicy";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ManagedMemoryPolicy

// optional uint32 bytes_limit_when_visible = 1;
bool ManagedMemoryPolicy::has_bytes_limit_when_visible() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ManagedMemoryPolicy::set_has_bytes_limit_when_visible() {
  _has_bits_[0] |= 0x00000001u;
}
void ManagedMemoryPolicy::clear_has_bytes_limit_when_visible() {
  _has_bits_[0] &= ~0x00000001u;
}
void ManagedMemoryPolicy::clear_bytes_limit_when_visible() {
  bytes_limit_when_visible_ = 0u;
  clear_has_bytes_limit_when_visible();
}
 ::google::protobuf::uint32 ManagedMemoryPolicy::bytes_limit_when_visible() const {
  // @@protoc_insertion_point(field_get:cc.proto.ManagedMemoryPolicy.bytes_limit_when_visible)
  return bytes_limit_when_visible_;
}
 void ManagedMemoryPolicy::set_bytes_limit_when_visible(::google::protobuf::uint32 value) {
  set_has_bytes_limit_when_visible();
  bytes_limit_when_visible_ = value;
  // @@protoc_insertion_point(field_set:cc.proto.ManagedMemoryPolicy.bytes_limit_when_visible)
}

// optional .cc.proto.MemoryAllocation.PriorityCutoff priority_cutoff_when_visible = 2;
bool ManagedMemoryPolicy::has_priority_cutoff_when_visible() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ManagedMemoryPolicy::set_has_priority_cutoff_when_visible() {
  _has_bits_[0] |= 0x00000002u;
}
void ManagedMemoryPolicy::clear_has_priority_cutoff_when_visible() {
  _has_bits_[0] &= ~0x00000002u;
}
void ManagedMemoryPolicy::clear_priority_cutoff_when_visible() {
  priority_cutoff_when_visible_ = 0;
  clear_has_priority_cutoff_when_visible();
}
 ::cc::proto::MemoryAllocation_PriorityCutoff ManagedMemoryPolicy::priority_cutoff_when_visible() const {
  // @@protoc_insertion_point(field_get:cc.proto.ManagedMemoryPolicy.priority_cutoff_when_visible)
  return static_cast< ::cc::proto::MemoryAllocation_PriorityCutoff >(priority_cutoff_when_visible_);
}
 void ManagedMemoryPolicy::set_priority_cutoff_when_visible(::cc::proto::MemoryAllocation_PriorityCutoff value) {
  assert(::cc::proto::MemoryAllocation_PriorityCutoff_IsValid(value));
  set_has_priority_cutoff_when_visible();
  priority_cutoff_when_visible_ = value;
  // @@protoc_insertion_point(field_set:cc.proto.ManagedMemoryPolicy.priority_cutoff_when_visible)
}

// optional uint32 num_resources_limit = 3;
bool ManagedMemoryPolicy::has_num_resources_limit() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void ManagedMemoryPolicy::set_has_num_resources_limit() {
  _has_bits_[0] |= 0x00000004u;
}
void ManagedMemoryPolicy::clear_has_num_resources_limit() {
  _has_bits_[0] &= ~0x00000004u;
}
void ManagedMemoryPolicy::clear_num_resources_limit() {
  num_resources_limit_ = 0u;
  clear_has_num_resources_limit();
}
 ::google::protobuf::uint32 ManagedMemoryPolicy::num_resources_limit() const {
  // @@protoc_insertion_point(field_get:cc.proto.ManagedMemoryPolicy.num_resources_limit)
  return num_resources_limit_;
}
 void ManagedMemoryPolicy::set_num_resources_limit(::google::protobuf::uint32 value) {
  set_has_num_resources_limit();
  num_resources_limit_ = value;
  // @@protoc_insertion_point(field_set:cc.proto.ManagedMemoryPolicy.num_resources_limit)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cc

// @@protoc_insertion_point(global_scope)
