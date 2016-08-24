// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client_discourse_context.proto

#ifndef PROTOBUF_client_5fdiscourse_5fcontext_2eproto__INCLUDED
#define PROTOBUF_client_5fdiscourse_5fcontext_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace discourse_context {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_client_5fdiscourse_5fcontext_2eproto();
void protobuf_AssignDesc_client_5fdiscourse_5fcontext_2eproto();
void protobuf_ShutdownFile_client_5fdiscourse_5fcontext_2eproto();

class ClientDiscourseContext;
class Display;
class Media;
class Selection;

// ===================================================================

class ClientDiscourseContext : public ::google::protobuf::MessageLite {
 public:
  ClientDiscourseContext();
  virtual ~ClientDiscourseContext();

  ClientDiscourseContext(const ClientDiscourseContext& from);

  inline ClientDiscourseContext& operator=(const ClientDiscourseContext& from) {
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

  static const ClientDiscourseContext& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ClientDiscourseContext* internal_default_instance() {
    return default_instance_;
  }
  #endif

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(ClientDiscourseContext* other);

  // implements Message ----------------------------------------------

  inline ClientDiscourseContext* New() const { return New(NULL); }

  ClientDiscourseContext* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ClientDiscourseContext& from);
  void MergeFrom(const ClientDiscourseContext& from);
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
  void InternalSwap(ClientDiscourseContext* other);
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

  // repeated .discourse_context.Display display = 4;
  int display_size() const;
  void clear_display();
  static const int kDisplayFieldNumber = 4;
  const ::discourse_context::Display& display(int index) const;
  ::discourse_context::Display* mutable_display(int index);
  ::discourse_context::Display* add_display();
  ::google::protobuf::RepeatedPtrField< ::discourse_context::Display >*
      mutable_display();
  const ::google::protobuf::RepeatedPtrField< ::discourse_context::Display >&
      display() const;

  // @@protoc_insertion_point(class_scope:discourse_context.ClientDiscourseContext)
 private:

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::discourse_context::Display > display_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_client_5fdiscourse_5fcontext_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_client_5fdiscourse_5fcontext_2eproto();
  #endif
  friend void protobuf_AssignDesc_client_5fdiscourse_5fcontext_2eproto();
  friend void protobuf_ShutdownFile_client_5fdiscourse_5fcontext_2eproto();

  void InitAsDefaultInstance();
  static ClientDiscourseContext* default_instance_;
};
// -------------------------------------------------------------------

class Display : public ::google::protobuf::MessageLite {
 public:
  Display();
  virtual ~Display();

  Display(const Display& from);

  inline Display& operator=(const Display& from) {
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

  static const Display& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const Display* internal_default_instance() {
    return default_instance_;
  }
  #endif

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(Display* other);

  // implements Message ----------------------------------------------

  inline Display* New() const { return New(NULL); }

  Display* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Display& from);
  void MergeFrom(const Display& from);
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
  void InternalSwap(Display* other);
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

  // optional .discourse_context.Media media = 9;
  bool has_media() const;
  void clear_media();
  static const int kMediaFieldNumber = 9;
  const ::discourse_context::Media& media() const;
  ::discourse_context::Media* mutable_media();
  ::discourse_context::Media* release_media();
  void set_allocated_media(::discourse_context::Media* media);

  // optional string uri = 10;
  bool has_uri() const;
  void clear_uri();
  static const int kUriFieldNumber = 10;
  const ::std::string& uri() const;
  void set_uri(const ::std::string& value);
  void set_uri(const char* value);
  void set_uri(const char* value, size_t size);
  ::std::string* mutable_uri();
  ::std::string* release_uri();
  void set_allocated_uri(::std::string* uri);

  // optional .discourse_context.Selection selection = 13;
  bool has_selection() const;
  void clear_selection();
  static const int kSelectionFieldNumber = 13;
  const ::discourse_context::Selection& selection() const;
  ::discourse_context::Selection* mutable_selection();
  ::discourse_context::Selection* release_selection();
  void set_allocated_selection(::discourse_context::Selection* selection);

  // @@protoc_insertion_point(class_scope:discourse_context.Display)
 private:
  inline void set_has_media();
  inline void clear_has_media();
  inline void set_has_uri();
  inline void clear_has_uri();
  inline void set_has_selection();
  inline void clear_has_selection();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::discourse_context::Media* media_;
  ::google::protobuf::internal::ArenaStringPtr uri_;
  ::discourse_context::Selection* selection_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_client_5fdiscourse_5fcontext_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_client_5fdiscourse_5fcontext_2eproto();
  #endif
  friend void protobuf_AssignDesc_client_5fdiscourse_5fcontext_2eproto();
  friend void protobuf_ShutdownFile_client_5fdiscourse_5fcontext_2eproto();

  void InitAsDefaultInstance();
  static Display* default_instance_;
};
// -------------------------------------------------------------------

class Selection : public ::google::protobuf::MessageLite {
 public:
  Selection();
  virtual ~Selection();

  Selection(const Selection& from);

  inline Selection& operator=(const Selection& from) {
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

  static const Selection& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const Selection* internal_default_instance() {
    return default_instance_;
  }
  #endif

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(Selection* other);

  // implements Message ----------------------------------------------

  inline Selection* New() const { return New(NULL); }

  Selection* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Selection& from);
  void MergeFrom(const Selection& from);
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
  void InternalSwap(Selection* other);
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

  // optional string content = 1;
  bool has_content() const;
  void clear_content();
  static const int kContentFieldNumber = 1;
  const ::std::string& content() const;
  void set_content(const ::std::string& value);
  void set_content(const char* value);
  void set_content(const char* value, size_t size);
  ::std::string* mutable_content();
  ::std::string* release_content();
  void set_allocated_content(::std::string* content);

  // optional int32 start = 2;
  bool has_start() const;
  void clear_start();
  static const int kStartFieldNumber = 2;
  ::google::protobuf::int32 start() const;
  void set_start(::google::protobuf::int32 value);

  // optional int32 end = 3;
  bool has_end() const;
  void clear_end();
  static const int kEndFieldNumber = 3;
  ::google::protobuf::int32 end() const;
  void set_end(::google::protobuf::int32 value);

  // optional bool is_uri_encoded = 4 [default = true];
  bool has_is_uri_encoded() const;
  void clear_is_uri_encoded();
  static const int kIsUriEncodedFieldNumber = 4;
  bool is_uri_encoded() const;
  void set_is_uri_encoded(bool value);

  // @@protoc_insertion_point(class_scope:discourse_context.Selection)
 private:
  inline void set_has_content();
  inline void clear_has_content();
  inline void set_has_start();
  inline void clear_has_start();
  inline void set_has_end();
  inline void clear_has_end();
  inline void set_has_is_uri_encoded();
  inline void clear_has_is_uri_encoded();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr content_;
  ::google::protobuf::int32 start_;
  ::google::protobuf::int32 end_;
  bool is_uri_encoded_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_client_5fdiscourse_5fcontext_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_client_5fdiscourse_5fcontext_2eproto();
  #endif
  friend void protobuf_AssignDesc_client_5fdiscourse_5fcontext_2eproto();
  friend void protobuf_ShutdownFile_client_5fdiscourse_5fcontext_2eproto();

  void InitAsDefaultInstance();
  static Selection* default_instance_;
};
// -------------------------------------------------------------------

class Media : public ::google::protobuf::MessageLite {
 public:
  Media();
  virtual ~Media();

  Media(const Media& from);

  inline Media& operator=(const Media& from) {
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

  static const Media& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const Media* internal_default_instance() {
    return default_instance_;
  }
  #endif

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(Media* other);

  // implements Message ----------------------------------------------

  inline Media* New() const { return New(NULL); }

  Media* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Media& from);
  void MergeFrom(const Media& from);
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
  void InternalSwap(Media* other);
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

  // optional string mime_type = 3;
  bool has_mime_type() const;
  void clear_mime_type();
  static const int kMimeTypeFieldNumber = 3;
  const ::std::string& mime_type() const;
  void set_mime_type(const ::std::string& value);
  void set_mime_type(const char* value);
  void set_mime_type(const char* value, size_t size);
  ::std::string* mutable_mime_type();
  ::std::string* release_mime_type();
  void set_allocated_mime_type(::std::string* mime_type);

  // @@protoc_insertion_point(class_scope:discourse_context.Media)
 private:
  inline void set_has_mime_type();
  inline void clear_has_mime_type();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr mime_type_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_client_5fdiscourse_5fcontext_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_client_5fdiscourse_5fcontext_2eproto();
  #endif
  friend void protobuf_AssignDesc_client_5fdiscourse_5fcontext_2eproto();
  friend void protobuf_ShutdownFile_client_5fdiscourse_5fcontext_2eproto();

  void InitAsDefaultInstance();
  static Media* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ClientDiscourseContext

// repeated .discourse_context.Display display = 4;
inline int ClientDiscourseContext::display_size() const {
  return display_.size();
}
inline void ClientDiscourseContext::clear_display() {
  display_.Clear();
}
inline const ::discourse_context::Display& ClientDiscourseContext::display(int index) const {
  // @@protoc_insertion_point(field_get:discourse_context.ClientDiscourseContext.display)
  return display_.Get(index);
}
inline ::discourse_context::Display* ClientDiscourseContext::mutable_display(int index) {
  // @@protoc_insertion_point(field_mutable:discourse_context.ClientDiscourseContext.display)
  return display_.Mutable(index);
}
inline ::discourse_context::Display* ClientDiscourseContext::add_display() {
  // @@protoc_insertion_point(field_add:discourse_context.ClientDiscourseContext.display)
  return display_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::discourse_context::Display >*
ClientDiscourseContext::mutable_display() {
  // @@protoc_insertion_point(field_mutable_list:discourse_context.ClientDiscourseContext.display)
  return &display_;
}
inline const ::google::protobuf::RepeatedPtrField< ::discourse_context::Display >&
ClientDiscourseContext::display() const {
  // @@protoc_insertion_point(field_list:discourse_context.ClientDiscourseContext.display)
  return display_;
}

// -------------------------------------------------------------------

// Display

// optional .discourse_context.Media media = 9;
inline bool Display::has_media() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Display::set_has_media() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Display::clear_has_media() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Display::clear_media() {
  if (media_ != NULL) media_->::discourse_context::Media::Clear();
  clear_has_media();
}
inline const ::discourse_context::Media& Display::media() const {
  // @@protoc_insertion_point(field_get:discourse_context.Display.media)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return media_ != NULL ? *media_ : *default_instance().media_;
#else
  return media_ != NULL ? *media_ : *default_instance_->media_;
#endif
}
inline ::discourse_context::Media* Display::mutable_media() {
  set_has_media();
  if (media_ == NULL) {
    media_ = new ::discourse_context::Media;
  }
  // @@protoc_insertion_point(field_mutable:discourse_context.Display.media)
  return media_;
}
inline ::discourse_context::Media* Display::release_media() {
  // @@protoc_insertion_point(field_release:discourse_context.Display.media)
  clear_has_media();
  ::discourse_context::Media* temp = media_;
  media_ = NULL;
  return temp;
}
inline void Display::set_allocated_media(::discourse_context::Media* media) {
  delete media_;
  media_ = media;
  if (media) {
    set_has_media();
  } else {
    clear_has_media();
  }
  // @@protoc_insertion_point(field_set_allocated:discourse_context.Display.media)
}

// optional string uri = 10;
inline bool Display::has_uri() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Display::set_has_uri() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Display::clear_has_uri() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Display::clear_uri() {
  uri_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_uri();
}
inline const ::std::string& Display::uri() const {
  // @@protoc_insertion_point(field_get:discourse_context.Display.uri)
  return uri_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Display::set_uri(const ::std::string& value) {
  set_has_uri();
  uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:discourse_context.Display.uri)
}
inline void Display::set_uri(const char* value) {
  set_has_uri();
  uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:discourse_context.Display.uri)
}
inline void Display::set_uri(const char* value, size_t size) {
  set_has_uri();
  uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:discourse_context.Display.uri)
}
inline ::std::string* Display::mutable_uri() {
  set_has_uri();
  // @@protoc_insertion_point(field_mutable:discourse_context.Display.uri)
  return uri_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Display::release_uri() {
  // @@protoc_insertion_point(field_release:discourse_context.Display.uri)
  clear_has_uri();
  return uri_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Display::set_allocated_uri(::std::string* uri) {
  if (uri != NULL) {
    set_has_uri();
  } else {
    clear_has_uri();
  }
  uri_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uri);
  // @@protoc_insertion_point(field_set_allocated:discourse_context.Display.uri)
}

// optional .discourse_context.Selection selection = 13;
inline bool Display::has_selection() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Display::set_has_selection() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Display::clear_has_selection() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Display::clear_selection() {
  if (selection_ != NULL) selection_->::discourse_context::Selection::Clear();
  clear_has_selection();
}
inline const ::discourse_context::Selection& Display::selection() const {
  // @@protoc_insertion_point(field_get:discourse_context.Display.selection)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return selection_ != NULL ? *selection_ : *default_instance().selection_;
#else
  return selection_ != NULL ? *selection_ : *default_instance_->selection_;
#endif
}
inline ::discourse_context::Selection* Display::mutable_selection() {
  set_has_selection();
  if (selection_ == NULL) {
    selection_ = new ::discourse_context::Selection;
  }
  // @@protoc_insertion_point(field_mutable:discourse_context.Display.selection)
  return selection_;
}
inline ::discourse_context::Selection* Display::release_selection() {
  // @@protoc_insertion_point(field_release:discourse_context.Display.selection)
  clear_has_selection();
  ::discourse_context::Selection* temp = selection_;
  selection_ = NULL;
  return temp;
}
inline void Display::set_allocated_selection(::discourse_context::Selection* selection) {
  delete selection_;
  selection_ = selection;
  if (selection) {
    set_has_selection();
  } else {
    clear_has_selection();
  }
  // @@protoc_insertion_point(field_set_allocated:discourse_context.Display.selection)
}

// -------------------------------------------------------------------

// Selection

// optional string content = 1;
inline bool Selection::has_content() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Selection::set_has_content() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Selection::clear_has_content() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Selection::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_content();
}
inline const ::std::string& Selection::content() const {
  // @@protoc_insertion_point(field_get:discourse_context.Selection.content)
  return content_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Selection::set_content(const ::std::string& value) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:discourse_context.Selection.content)
}
inline void Selection::set_content(const char* value) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:discourse_context.Selection.content)
}
inline void Selection::set_content(const char* value, size_t size) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:discourse_context.Selection.content)
}
inline ::std::string* Selection::mutable_content() {
  set_has_content();
  // @@protoc_insertion_point(field_mutable:discourse_context.Selection.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Selection::release_content() {
  // @@protoc_insertion_point(field_release:discourse_context.Selection.content)
  clear_has_content();
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Selection::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    set_has_content();
  } else {
    clear_has_content();
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:discourse_context.Selection.content)
}

// optional int32 start = 2;
inline bool Selection::has_start() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Selection::set_has_start() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Selection::clear_has_start() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Selection::clear_start() {
  start_ = 0;
  clear_has_start();
}
inline ::google::protobuf::int32 Selection::start() const {
  // @@protoc_insertion_point(field_get:discourse_context.Selection.start)
  return start_;
}
inline void Selection::set_start(::google::protobuf::int32 value) {
  set_has_start();
  start_ = value;
  // @@protoc_insertion_point(field_set:discourse_context.Selection.start)
}

// optional int32 end = 3;
inline bool Selection::has_end() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Selection::set_has_end() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Selection::clear_has_end() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Selection::clear_end() {
  end_ = 0;
  clear_has_end();
}
inline ::google::protobuf::int32 Selection::end() const {
  // @@protoc_insertion_point(field_get:discourse_context.Selection.end)
  return end_;
}
inline void Selection::set_end(::google::protobuf::int32 value) {
  set_has_end();
  end_ = value;
  // @@protoc_insertion_point(field_set:discourse_context.Selection.end)
}

// optional bool is_uri_encoded = 4 [default = true];
inline bool Selection::has_is_uri_encoded() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Selection::set_has_is_uri_encoded() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Selection::clear_has_is_uri_encoded() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Selection::clear_is_uri_encoded() {
  is_uri_encoded_ = true;
  clear_has_is_uri_encoded();
}
inline bool Selection::is_uri_encoded() const {
  // @@protoc_insertion_point(field_get:discourse_context.Selection.is_uri_encoded)
  return is_uri_encoded_;
}
inline void Selection::set_is_uri_encoded(bool value) {
  set_has_is_uri_encoded();
  is_uri_encoded_ = value;
  // @@protoc_insertion_point(field_set:discourse_context.Selection.is_uri_encoded)
}

// -------------------------------------------------------------------

// Media

// optional string mime_type = 3;
inline bool Media::has_mime_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Media::set_has_mime_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Media::clear_has_mime_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Media::clear_mime_type() {
  mime_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_mime_type();
}
inline const ::std::string& Media::mime_type() const {
  // @@protoc_insertion_point(field_get:discourse_context.Media.mime_type)
  return mime_type_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Media::set_mime_type(const ::std::string& value) {
  set_has_mime_type();
  mime_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:discourse_context.Media.mime_type)
}
inline void Media::set_mime_type(const char* value) {
  set_has_mime_type();
  mime_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:discourse_context.Media.mime_type)
}
inline void Media::set_mime_type(const char* value, size_t size) {
  set_has_mime_type();
  mime_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:discourse_context.Media.mime_type)
}
inline ::std::string* Media::mutable_mime_type() {
  set_has_mime_type();
  // @@protoc_insertion_point(field_mutable:discourse_context.Media.mime_type)
  return mime_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Media::release_mime_type() {
  // @@protoc_insertion_point(field_release:discourse_context.Media.mime_type)
  clear_has_mime_type();
  return mime_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Media::set_allocated_mime_type(::std::string* mime_type) {
  if (mime_type != NULL) {
    set_has_mime_type();
  } else {
    clear_has_mime_type();
  }
  mime_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), mime_type);
  // @@protoc_insertion_point(field_set_allocated:discourse_context.Media.mime_type)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace discourse_context

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_client_5fdiscourse_5fcontext_2eproto__INCLUDED
