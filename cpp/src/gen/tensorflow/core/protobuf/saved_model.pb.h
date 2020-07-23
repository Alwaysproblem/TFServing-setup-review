// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/saved_model.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012002 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow/core/protobuf/meta_graph.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto;
namespace tensorflow {
class SavedModel;
class SavedModelDefaultTypeInternal;
extern SavedModelDefaultTypeInternal _SavedModel_default_instance_;
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> ::tensorflow::SavedModel* Arena::CreateMaybeMessage<::tensorflow::SavedModel>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tensorflow {

// ===================================================================

class SavedModel PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.SavedModel) */ {
 public:
  inline SavedModel() : SavedModel(nullptr) {};
  virtual ~SavedModel();

  SavedModel(const SavedModel& from);
  SavedModel(SavedModel&& from) noexcept
    : SavedModel() {
    *this = ::std::move(from);
  }

  inline SavedModel& operator=(const SavedModel& from) {
    CopyFrom(from);
    return *this;
  }
  inline SavedModel& operator=(SavedModel&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const SavedModel& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SavedModel* internal_default_instance() {
    return reinterpret_cast<const SavedModel*>(
               &_SavedModel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SavedModel& a, SavedModel& b) {
    a.Swap(&b);
  }
  inline void Swap(SavedModel* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SavedModel* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SavedModel* New() const final {
    return CreateMaybeMessage<SavedModel>(nullptr);
  }

  SavedModel* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SavedModel>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SavedModel& from);
  void MergeFrom(const SavedModel& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SavedModel* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.SavedModel";
  }
  protected:
  explicit SavedModel(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto);
    return ::descriptor_table_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMetaGraphsFieldNumber = 2,
    kSavedModelSchemaVersionFieldNumber = 1,
  };
  // repeated .tensorflow.MetaGraphDef meta_graphs = 2;
  int meta_graphs_size() const;
  private:
  int _internal_meta_graphs_size() const;
  public:
  void clear_meta_graphs();
  ::tensorflow::MetaGraphDef* mutable_meta_graphs(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::MetaGraphDef >*
      mutable_meta_graphs();
  private:
  const ::tensorflow::MetaGraphDef& _internal_meta_graphs(int index) const;
  ::tensorflow::MetaGraphDef* _internal_add_meta_graphs();
  public:
  const ::tensorflow::MetaGraphDef& meta_graphs(int index) const;
  ::tensorflow::MetaGraphDef* add_meta_graphs();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::MetaGraphDef >&
      meta_graphs() const;

  // int64 saved_model_schema_version = 1;
  void clear_saved_model_schema_version();
  ::PROTOBUF_NAMESPACE_ID::int64 saved_model_schema_version() const;
  void set_saved_model_schema_version(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_saved_model_schema_version() const;
  void _internal_set_saved_model_schema_version(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:tensorflow.SavedModel)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::MetaGraphDef > meta_graphs_;
  ::PROTOBUF_NAMESPACE_ID::int64 saved_model_schema_version_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SavedModel

// int64 saved_model_schema_version = 1;
inline void SavedModel::clear_saved_model_schema_version() {
  saved_model_schema_version_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 SavedModel::_internal_saved_model_schema_version() const {
  return saved_model_schema_version_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 SavedModel::saved_model_schema_version() const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedModel.saved_model_schema_version)
  return _internal_saved_model_schema_version();
}
inline void SavedModel::_internal_set_saved_model_schema_version(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  saved_model_schema_version_ = value;
}
inline void SavedModel::set_saved_model_schema_version(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_saved_model_schema_version(value);
  // @@protoc_insertion_point(field_set:tensorflow.SavedModel.saved_model_schema_version)
}

// repeated .tensorflow.MetaGraphDef meta_graphs = 2;
inline int SavedModel::_internal_meta_graphs_size() const {
  return meta_graphs_.size();
}
inline int SavedModel::meta_graphs_size() const {
  return _internal_meta_graphs_size();
}
inline ::tensorflow::MetaGraphDef* SavedModel::mutable_meta_graphs(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedModel.meta_graphs)
  return meta_graphs_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::MetaGraphDef >*
SavedModel::mutable_meta_graphs() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.SavedModel.meta_graphs)
  return &meta_graphs_;
}
inline const ::tensorflow::MetaGraphDef& SavedModel::_internal_meta_graphs(int index) const {
  return meta_graphs_.Get(index);
}
inline const ::tensorflow::MetaGraphDef& SavedModel::meta_graphs(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedModel.meta_graphs)
  return _internal_meta_graphs(index);
}
inline ::tensorflow::MetaGraphDef* SavedModel::_internal_add_meta_graphs() {
  return meta_graphs_.Add();
}
inline ::tensorflow::MetaGraphDef* SavedModel::add_meta_graphs() {
  // @@protoc_insertion_point(field_add:tensorflow.SavedModel.meta_graphs)
  return _internal_add_meta_graphs();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::MetaGraphDef >&
SavedModel::meta_graphs() const {
  // @@protoc_insertion_point(field_list:tensorflow.SavedModel.meta_graphs)
  return meta_graphs_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto
