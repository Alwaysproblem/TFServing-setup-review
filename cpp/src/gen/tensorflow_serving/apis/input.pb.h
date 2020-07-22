// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow_serving/apis/input.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensorflow_5fserving_2fapis_2finput_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensorflow_5fserving_2fapis_2finput_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow/core/example/example.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_5fserving_2fapis_2finput_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tensorflow_5fserving_2fapis_2finput_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_5fserving_2fapis_2finput_2eproto;
namespace tensorflow {
namespace serving {
class ExampleList;
class ExampleListDefaultTypeInternal;
extern ExampleListDefaultTypeInternal _ExampleList_default_instance_;
class ExampleListWithContext;
class ExampleListWithContextDefaultTypeInternal;
extern ExampleListWithContextDefaultTypeInternal _ExampleListWithContext_default_instance_;
class Input;
class InputDefaultTypeInternal;
extern InputDefaultTypeInternal _Input_default_instance_;
}  // namespace serving
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> ::tensorflow::serving::ExampleList* Arena::CreateMaybeMessage<::tensorflow::serving::ExampleList>(Arena*);
template<> ::tensorflow::serving::ExampleListWithContext* Arena::CreateMaybeMessage<::tensorflow::serving::ExampleListWithContext>(Arena*);
template<> ::tensorflow::serving::Input* Arena::CreateMaybeMessage<::tensorflow::serving::Input>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tensorflow {
namespace serving {

// ===================================================================

class ExampleList :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.ExampleList) */ {
 public:
  ExampleList();
  virtual ~ExampleList();

  ExampleList(const ExampleList& from);
  ExampleList(ExampleList&& from) noexcept
    : ExampleList() {
    *this = ::std::move(from);
  }

  inline ExampleList& operator=(const ExampleList& from) {
    CopyFrom(from);
    return *this;
  }
  inline ExampleList& operator=(ExampleList&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ExampleList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ExampleList* internal_default_instance() {
    return reinterpret_cast<const ExampleList*>(
               &_ExampleList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(ExampleList* other);
  void Swap(ExampleList* other);
  friend void swap(ExampleList& a, ExampleList& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ExampleList* New() const final {
    return CreateMaybeMessage<ExampleList>(nullptr);
  }

  ExampleList* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ExampleList>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ExampleList& from);
  void MergeFrom(const ExampleList& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ExampleList* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.serving.ExampleList";
  }
  protected:
  explicit ExampleList(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_tensorflow_5fserving_2fapis_2finput_2eproto);
    return ::descriptor_table_tensorflow_5fserving_2fapis_2finput_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .tensorflow.Example examples = 1;
  int examples_size() const;
  void clear_examples();
  static const int kExamplesFieldNumber = 1;
  ::tensorflow::Example* mutable_examples(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::Example >*
      mutable_examples();
  const ::tensorflow::Example& examples(int index) const;
  ::tensorflow::Example* add_examples();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::Example >&
      examples() const;

  // @@protoc_insertion_point(class_scope:tensorflow.serving.ExampleList)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::Example > examples_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tensorflow_5fserving_2fapis_2finput_2eproto;
};
// -------------------------------------------------------------------

class ExampleListWithContext :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.ExampleListWithContext) */ {
 public:
  ExampleListWithContext();
  virtual ~ExampleListWithContext();

  ExampleListWithContext(const ExampleListWithContext& from);
  ExampleListWithContext(ExampleListWithContext&& from) noexcept
    : ExampleListWithContext() {
    *this = ::std::move(from);
  }

  inline ExampleListWithContext& operator=(const ExampleListWithContext& from) {
    CopyFrom(from);
    return *this;
  }
  inline ExampleListWithContext& operator=(ExampleListWithContext&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ExampleListWithContext& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ExampleListWithContext* internal_default_instance() {
    return reinterpret_cast<const ExampleListWithContext*>(
               &_ExampleListWithContext_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void UnsafeArenaSwap(ExampleListWithContext* other);
  void Swap(ExampleListWithContext* other);
  friend void swap(ExampleListWithContext& a, ExampleListWithContext& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ExampleListWithContext* New() const final {
    return CreateMaybeMessage<ExampleListWithContext>(nullptr);
  }

  ExampleListWithContext* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ExampleListWithContext>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ExampleListWithContext& from);
  void MergeFrom(const ExampleListWithContext& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ExampleListWithContext* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.serving.ExampleListWithContext";
  }
  protected:
  explicit ExampleListWithContext(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_tensorflow_5fserving_2fapis_2finput_2eproto);
    return ::descriptor_table_tensorflow_5fserving_2fapis_2finput_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .tensorflow.Example examples = 1;
  int examples_size() const;
  void clear_examples();
  static const int kExamplesFieldNumber = 1;
  ::tensorflow::Example* mutable_examples(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::Example >*
      mutable_examples();
  const ::tensorflow::Example& examples(int index) const;
  ::tensorflow::Example* add_examples();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::Example >&
      examples() const;

  // .tensorflow.Example context = 2;
  bool has_context() const;
  void clear_context();
  static const int kContextFieldNumber = 2;
  const ::tensorflow::Example& context() const;
  ::tensorflow::Example* release_context();
  ::tensorflow::Example* mutable_context();
  void set_allocated_context(::tensorflow::Example* context);
  void unsafe_arena_set_allocated_context(
      ::tensorflow::Example* context);
  ::tensorflow::Example* unsafe_arena_release_context();

  // @@protoc_insertion_point(class_scope:tensorflow.serving.ExampleListWithContext)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::Example > examples_;
  ::tensorflow::Example* context_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tensorflow_5fserving_2fapis_2finput_2eproto;
};
// -------------------------------------------------------------------

class Input :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.Input) */ {
 public:
  Input();
  virtual ~Input();

  Input(const Input& from);
  Input(Input&& from) noexcept
    : Input() {
    *this = ::std::move(from);
  }

  inline Input& operator=(const Input& from) {
    CopyFrom(from);
    return *this;
  }
  inline Input& operator=(Input&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Input& default_instance();

  enum KindCase {
    kExampleList = 1,
    kExampleListWithContext = 2,
    KIND_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Input* internal_default_instance() {
    return reinterpret_cast<const Input*>(
               &_Input_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void UnsafeArenaSwap(Input* other);
  void Swap(Input* other);
  friend void swap(Input& a, Input& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Input* New() const final {
    return CreateMaybeMessage<Input>(nullptr);
  }

  Input* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Input>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Input& from);
  void MergeFrom(const Input& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Input* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.serving.Input";
  }
  protected:
  explicit Input(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_tensorflow_5fserving_2fapis_2finput_2eproto);
    return ::descriptor_table_tensorflow_5fserving_2fapis_2finput_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .tensorflow.serving.ExampleList example_list = 1 [lazy = true];
  bool has_example_list() const;
  void clear_example_list();
  static const int kExampleListFieldNumber = 1;
  const ::tensorflow::serving::ExampleList& example_list() const;
  ::tensorflow::serving::ExampleList* release_example_list();
  ::tensorflow::serving::ExampleList* mutable_example_list();
  void set_allocated_example_list(::tensorflow::serving::ExampleList* example_list);
  void unsafe_arena_set_allocated_example_list(
      ::tensorflow::serving::ExampleList* example_list);
  ::tensorflow::serving::ExampleList* unsafe_arena_release_example_list();

  // .tensorflow.serving.ExampleListWithContext example_list_with_context = 2 [lazy = true];
  bool has_example_list_with_context() const;
  void clear_example_list_with_context();
  static const int kExampleListWithContextFieldNumber = 2;
  const ::tensorflow::serving::ExampleListWithContext& example_list_with_context() const;
  ::tensorflow::serving::ExampleListWithContext* release_example_list_with_context();
  ::tensorflow::serving::ExampleListWithContext* mutable_example_list_with_context();
  void set_allocated_example_list_with_context(::tensorflow::serving::ExampleListWithContext* example_list_with_context);
  void unsafe_arena_set_allocated_example_list_with_context(
      ::tensorflow::serving::ExampleListWithContext* example_list_with_context);
  ::tensorflow::serving::ExampleListWithContext* unsafe_arena_release_example_list_with_context();

  void clear_kind();
  KindCase kind_case() const;
  // @@protoc_insertion_point(class_scope:tensorflow.serving.Input)
 private:
  class HasBitSetters;
  void set_has_example_list();
  void set_has_example_list_with_context();

  inline bool has_kind() const;
  inline void clear_has_kind();

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  union KindUnion {
    KindUnion() {}
    ::tensorflow::serving::ExampleList* example_list_;
    ::tensorflow::serving::ExampleListWithContext* example_list_with_context_;
  } kind_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_tensorflow_5fserving_2fapis_2finput_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ExampleList

// repeated .tensorflow.Example examples = 1;
inline int ExampleList::examples_size() const {
  return examples_.size();
}
inline ::tensorflow::Example* ExampleList::mutable_examples(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.ExampleList.examples)
  return examples_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::Example >*
ExampleList::mutable_examples() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.serving.ExampleList.examples)
  return &examples_;
}
inline const ::tensorflow::Example& ExampleList::examples(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.ExampleList.examples)
  return examples_.Get(index);
}
inline ::tensorflow::Example* ExampleList::add_examples() {
  // @@protoc_insertion_point(field_add:tensorflow.serving.ExampleList.examples)
  return examples_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::Example >&
ExampleList::examples() const {
  // @@protoc_insertion_point(field_list:tensorflow.serving.ExampleList.examples)
  return examples_;
}

// -------------------------------------------------------------------

// ExampleListWithContext

// repeated .tensorflow.Example examples = 1;
inline int ExampleListWithContext::examples_size() const {
  return examples_.size();
}
inline ::tensorflow::Example* ExampleListWithContext::mutable_examples(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.ExampleListWithContext.examples)
  return examples_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::Example >*
ExampleListWithContext::mutable_examples() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.serving.ExampleListWithContext.examples)
  return &examples_;
}
inline const ::tensorflow::Example& ExampleListWithContext::examples(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.ExampleListWithContext.examples)
  return examples_.Get(index);
}
inline ::tensorflow::Example* ExampleListWithContext::add_examples() {
  // @@protoc_insertion_point(field_add:tensorflow.serving.ExampleListWithContext.examples)
  return examples_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::Example >&
ExampleListWithContext::examples() const {
  // @@protoc_insertion_point(field_list:tensorflow.serving.ExampleListWithContext.examples)
  return examples_;
}

// .tensorflow.Example context = 2;
inline bool ExampleListWithContext::has_context() const {
  return this != internal_default_instance() && context_ != nullptr;
}
inline const ::tensorflow::Example& ExampleListWithContext::context() const {
  const ::tensorflow::Example* p = context_;
  // @@protoc_insertion_point(field_get:tensorflow.serving.ExampleListWithContext.context)
  return p != nullptr ? *p : *reinterpret_cast<const ::tensorflow::Example*>(
      &::tensorflow::_Example_default_instance_);
}
inline ::tensorflow::Example* ExampleListWithContext::release_context() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.ExampleListWithContext.context)
  
  ::tensorflow::Example* temp = context_;
  if (GetArenaNoVirtual() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  context_ = nullptr;
  return temp;
}
inline ::tensorflow::Example* ExampleListWithContext::unsafe_arena_release_context() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.serving.ExampleListWithContext.context)
  
  ::tensorflow::Example* temp = context_;
  context_ = nullptr;
  return temp;
}
inline ::tensorflow::Example* ExampleListWithContext::mutable_context() {
  
  if (context_ == nullptr) {
    auto* p = CreateMaybeMessage<::tensorflow::Example>(GetArenaNoVirtual());
    context_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.ExampleListWithContext.context)
  return context_;
}
inline void ExampleListWithContext::set_allocated_context(::tensorflow::Example* context) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(context_);
  }
  if (context) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(context)->GetArena();
    if (message_arena != submessage_arena) {
      context = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, context, submessage_arena);
    }
    
  } else {
    
  }
  context_ = context;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.ExampleListWithContext.context)
}

// -------------------------------------------------------------------

// Input

// .tensorflow.serving.ExampleList example_list = 1 [lazy = true];
inline bool Input::has_example_list() const {
  return kind_case() == kExampleList;
}
inline void Input::set_has_example_list() {
  _oneof_case_[0] = kExampleList;
}
inline void Input::clear_example_list() {
  if (has_example_list()) {
    if (GetArenaNoVirtual() == nullptr) {
      delete kind_.example_list_;
    }
    clear_has_kind();
  }
}
inline ::tensorflow::serving::ExampleList* Input::release_example_list() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.Input.example_list)
  if (has_example_list()) {
    clear_has_kind();
      ::tensorflow::serving::ExampleList* temp = kind_.example_list_;
    if (GetArenaNoVirtual() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    kind_.example_list_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::tensorflow::serving::ExampleList& Input::example_list() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.Input.example_list)
  return has_example_list()
      ? *kind_.example_list_
      : *reinterpret_cast< ::tensorflow::serving::ExampleList*>(&::tensorflow::serving::_ExampleList_default_instance_);
}
inline ::tensorflow::serving::ExampleList* Input::unsafe_arena_release_example_list() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.serving.Input.example_list)
  if (has_example_list()) {
    clear_has_kind();
    ::tensorflow::serving::ExampleList* temp = kind_.example_list_;
    kind_.example_list_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Input::unsafe_arena_set_allocated_example_list(::tensorflow::serving::ExampleList* example_list) {
  clear_kind();
  if (example_list) {
    set_has_example_list();
    kind_.example_list_ = example_list;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.serving.Input.example_list)
}
inline ::tensorflow::serving::ExampleList* Input::mutable_example_list() {
  if (!has_example_list()) {
    clear_kind();
    set_has_example_list();
    kind_.example_list_ = CreateMaybeMessage< ::tensorflow::serving::ExampleList >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.Input.example_list)
  return kind_.example_list_;
}

// .tensorflow.serving.ExampleListWithContext example_list_with_context = 2 [lazy = true];
inline bool Input::has_example_list_with_context() const {
  return kind_case() == kExampleListWithContext;
}
inline void Input::set_has_example_list_with_context() {
  _oneof_case_[0] = kExampleListWithContext;
}
inline void Input::clear_example_list_with_context() {
  if (has_example_list_with_context()) {
    if (GetArenaNoVirtual() == nullptr) {
      delete kind_.example_list_with_context_;
    }
    clear_has_kind();
  }
}
inline ::tensorflow::serving::ExampleListWithContext* Input::release_example_list_with_context() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.Input.example_list_with_context)
  if (has_example_list_with_context()) {
    clear_has_kind();
      ::tensorflow::serving::ExampleListWithContext* temp = kind_.example_list_with_context_;
    if (GetArenaNoVirtual() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    kind_.example_list_with_context_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::tensorflow::serving::ExampleListWithContext& Input::example_list_with_context() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.Input.example_list_with_context)
  return has_example_list_with_context()
      ? *kind_.example_list_with_context_
      : *reinterpret_cast< ::tensorflow::serving::ExampleListWithContext*>(&::tensorflow::serving::_ExampleListWithContext_default_instance_);
}
inline ::tensorflow::serving::ExampleListWithContext* Input::unsafe_arena_release_example_list_with_context() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.serving.Input.example_list_with_context)
  if (has_example_list_with_context()) {
    clear_has_kind();
    ::tensorflow::serving::ExampleListWithContext* temp = kind_.example_list_with_context_;
    kind_.example_list_with_context_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Input::unsafe_arena_set_allocated_example_list_with_context(::tensorflow::serving::ExampleListWithContext* example_list_with_context) {
  clear_kind();
  if (example_list_with_context) {
    set_has_example_list_with_context();
    kind_.example_list_with_context_ = example_list_with_context;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.serving.Input.example_list_with_context)
}
inline ::tensorflow::serving::ExampleListWithContext* Input::mutable_example_list_with_context() {
  if (!has_example_list_with_context()) {
    clear_kind();
    set_has_example_list_with_context();
    kind_.example_list_with_context_ = CreateMaybeMessage< ::tensorflow::serving::ExampleListWithContext >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.Input.example_list_with_context)
  return kind_.example_list_with_context_;
}

inline bool Input::has_kind() const {
  return kind_case() != KIND_NOT_SET;
}
inline void Input::clear_has_kind() {
  _oneof_case_[0] = KIND_NOT_SET;
}
inline Input::KindCase Input::kind_case() const {
  return Input::KindCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace serving
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensorflow_5fserving_2fapis_2finput_2eproto
