// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: managed_memory_policy.proto

#ifndef PROTOBUF_managed_5fmemory_5fpolicy_2eproto__INCLUDED
#define PROTOBUF_managed_5fmemory_5fpolicy_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include "memory_allocation.pb.h"
// @@protoc_insertion_point(includes)
#include "cc/proto/cc_proto_export.h"

namespace cc {
namespace proto {

// Internal implementation detail -- do not call these.
void CC_PROTO_EXPORT protobuf_AddDesc_managed_5fmemory_5fpolicy_2eproto();
void protobuf_AssignDesc_managed_5fmemory_5fpolicy_2eproto();
void protobuf_ShutdownFile_managed_5fmemory_5fpolicy_2eproto();

class ManagedMemoryPolicy;

// ===================================================================

class CC_PROTO_EXPORT ManagedMemoryPolicy : public ::google::protobuf::MessageLite {
public:
ManagedMemoryPolicy();
virtual ~ManagedMemoryPolicy();

ManagedMemoryPolicy(const ManagedMemoryPolicy& from);

inline ManagedMemoryPolicy& operator=(const ManagedMemoryPolicy& from) {
CopyFrom(from);
return *this;
}

inline const ::std::string& unknown_fields() const {
return _unknown_fields_.GetNoArena(
&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

inline ::std::string* mutable_unknown_fields() {
return _unknown_fields_.MutableNoArena(
&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

static const ManagedMemoryPolicy& default_instance();

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
// Returns the internal default instance pointer. This function can
// return NULL thus should not be used by the user. This is intended
// for Protobuf internal code. Please use default_instance() declared
// above instead.
static inline const ManagedMemoryPolicy* internal_default_instance() {
return default_instance_;
}
#endif

GOOGLE_ATTRIBUTE_NOINLINE void Swap(ManagedMemoryPolicy* other);

// implements Message ----------------------------------------------

inline ManagedMemoryPolicy* New() const { return New(NULL); }

ManagedMemoryPolicy* New(::google::protobuf::Arena* arena) const;
void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
void CopyFrom(const ManagedMemoryPolicy& from);
void MergeFrom(const ManagedMemoryPolicy& from);
void Clear();
bool IsInitialized() const;

int ByteSize() const;
bool MergePartialFromCodedStream(
::google::protobuf::io::CodedInputStream* input);
void SerializeWithCachedSizes(
::google::protobuf::io::CodedOutputStream* output) const;
void DiscardUnknownFields();
int GetCachedSize() const { return _cached_size_; }
private:
void SharedCtor();
void SharedDtor();
void SetCachedSize(int size) const;
void InternalSwap(ManagedMemoryPolicy* other);
private:
inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
return _arena_ptr_;
}
inline ::google::protobuf::Arena* MaybeArenaPtr() const {
return _arena_ptr_;
}
public:

::std::string GetTypeName() const;

// nested types ----------------------------------------------------

// accessors -------------------------------------------------------

// optional uint32 bytes_limit_when_visible = 1;
bool has_bytes_limit_when_visible() const;
void clear_bytes_limit_when_visible();
static const int kBytesLimitWhenVisibleFieldNumber = 1;
::google::protobuf::uint32 bytes_limit_when_visible() const;
void set_bytes_limit_when_visible(::google::protobuf::uint32 value);

// optional .cc.proto.MemoryAllocation.PriorityCutoff priority_cutoff_when_visible = 2;
bool has_priority_cutoff_when_visible() const;
void clear_priority_cutoff_when_visible();
static const int kPriorityCutoffWhenVisibleFieldNumber = 2;
::cc::proto::MemoryAllocation_PriorityCutoff priority_cutoff_when_visible() const;
void set_priority_cutoff_when_visible(::cc::proto::MemoryAllocation_PriorityCutoff value);

// optional uint32 num_resources_limit = 3;
bool has_num_resources_limit() const;
void clear_num_resources_limit();
static const int kNumResourcesLimitFieldNumber = 3;
::google::protobuf::uint32 num_resources_limit() const;
void set_num_resources_limit(::google::protobuf::uint32 value);

// @@protoc_insertion_point(class_scope:cc.proto.ManagedMemoryPolicy)
private:
inline void set_has_bytes_limit_when_visible();
inline void clear_has_bytes_limit_when_visible();
inline void set_has_priority_cutoff_when_visible();
inline void clear_has_priority_cutoff_when_visible();
inline void set_has_num_resources_limit();
inline void clear_has_num_resources_limit();

::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
::google::protobuf::Arena* _arena_ptr_;

::google::protobuf::uint32 _has_bits_[1];
mutable int _cached_size_;
::google::protobuf::uint32 bytes_limit_when_visible_;
int priority_cutoff_when_visible_;
::google::protobuf::uint32 num_resources_limit_;
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
friend void CC_PROTO_EXPORT protobuf_AddDesc_managed_5fmemory_5fpolicy_2eproto_impl();
#else
friend void CC_PROTO_EXPORT protobuf_AddDesc_managed_5fmemory_5fpolicy_2eproto();
#endif
friend void protobuf_AssignDesc_managed_5fmemory_5fpolicy_2eproto();
friend void protobuf_ShutdownFile_managed_5fmemory_5fpolicy_2eproto();

void InitAsDefaultInstance();
static ManagedMemoryPolicy* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ManagedMemoryPolicy

// optional uint32 bytes_limit_when_visible = 1;
inline bool ManagedMemoryPolicy::has_bytes_limit_when_visible() const {
return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ManagedMemoryPolicy::set_has_bytes_limit_when_visible() {
_has_bits_[0] |= 0x00000001u;
}
inline void ManagedMemoryPolicy::clear_has_bytes_limit_when_visible() {
_has_bits_[0] &= ~0x00000001u;
}
inline void ManagedMemoryPolicy::clear_bytes_limit_when_visible() {
bytes_limit_when_visible_ = 0u;
clear_has_bytes_limit_when_visible();
}
inline ::google::protobuf::uint32 ManagedMemoryPolicy::bytes_limit_when_visible() const {
// @@protoc_insertion_point(field_get:cc.proto.ManagedMemoryPolicy.bytes_limit_when_visible)
return bytes_limit_when_visible_;
}
inline void ManagedMemoryPolicy::set_bytes_limit_when_visible(::google::protobuf::uint32 value) {
set_has_bytes_limit_when_visible();
bytes_limit_when_visible_ = value;
// @@protoc_insertion_point(field_set:cc.proto.ManagedMemoryPolicy.bytes_limit_when_visible)
}

// optional .cc.proto.MemoryAllocation.PriorityCutoff priority_cutoff_when_visible = 2;
inline bool ManagedMemoryPolicy::has_priority_cutoff_when_visible() const {
return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ManagedMemoryPolicy::set_has_priority_cutoff_when_visible() {
_has_bits_[0] |= 0x00000002u;
}
inline void ManagedMemoryPolicy::clear_has_priority_cutoff_when_visible() {
_has_bits_[0] &= ~0x00000002u;
}
inline void ManagedMemoryPolicy::clear_priority_cutoff_when_visible() {
priority_cutoff_when_visible_ = 0;
clear_has_priority_cutoff_when_visible();
}
inline ::cc::proto::MemoryAllocation_PriorityCutoff ManagedMemoryPolicy::priority_cutoff_when_visible() const {
// @@protoc_insertion_point(field_get:cc.proto.ManagedMemoryPolicy.priority_cutoff_when_visible)
return static_cast< ::cc::proto::MemoryAllocation_PriorityCutoff >(priority_cutoff_when_visible_);
}
inline void ManagedMemoryPolicy::set_priority_cutoff_when_visible(::cc::proto::MemoryAllocation_PriorityCutoff value) {
assert(::cc::proto::MemoryAllocation_PriorityCutoff_IsValid(value));
set_has_priority_cutoff_when_visible();
priority_cutoff_when_visible_ = value;
// @@protoc_insertion_point(field_set:cc.proto.ManagedMemoryPolicy.priority_cutoff_when_visible)
}

// optional uint32 num_resources_limit = 3;
inline bool ManagedMemoryPolicy::has_num_resources_limit() const {
return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ManagedMemoryPolicy::set_has_num_resources_limit() {
_has_bits_[0] |= 0x00000004u;
}
inline void ManagedMemoryPolicy::clear_has_num_resources_limit() {
_has_bits_[0] &= ~0x00000004u;
}
inline void ManagedMemoryPolicy::clear_num_resources_limit() {
num_resources_limit_ = 0u;
clear_has_num_resources_limit();
}
inline ::google::protobuf::uint32 ManagedMemoryPolicy::num_resources_limit() const {
// @@protoc_insertion_point(field_get:cc.proto.ManagedMemoryPolicy.num_resources_limit)
return num_resources_limit_;
}
inline void ManagedMemoryPolicy::set_num_resources_limit(::google::protobuf::uint32 value) {
set_has_num_resources_limit();
num_resources_limit_ = value;
// @@protoc_insertion_point(field_set:cc.proto.ManagedMemoryPolicy.num_resources_limit)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cc

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_managed_5fmemory_5fpolicy_2eproto__INCLUDED