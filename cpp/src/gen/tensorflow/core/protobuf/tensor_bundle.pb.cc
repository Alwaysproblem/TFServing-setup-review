// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/tensor_bundle.proto

#include "tensorflow/core/protobuf/tensor_bundle.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fframework_2ftensor_5fshape_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_TensorShapeProto_tensorflow_2fcore_2fframework_2ftensor_5fshape_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_TensorSliceProto_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fframework_2fversions_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_VersionDef_tensorflow_2fcore_2fframework_2fversions_2eproto;
namespace tensorflow {
class BundleHeaderProtoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<BundleHeaderProto> _instance;
} _BundleHeaderProto_default_instance_;
class BundleEntryProtoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<BundleEntryProto> _instance;
} _BundleEntryProto_default_instance_;
}  // namespace tensorflow
static void InitDefaultsscc_info_BundleEntryProto_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::_BundleEntryProto_default_instance_;
    new (ptr) ::tensorflow::BundleEntryProto();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::BundleEntryProto::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_BundleEntryProto_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_BundleEntryProto_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto}, {
      &scc_info_TensorShapeProto_tensorflow_2fcore_2fframework_2ftensor_5fshape_2eproto.base,
      &scc_info_TensorSliceProto_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto.base,}};

static void InitDefaultsscc_info_BundleHeaderProto_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::_BundleHeaderProto_default_instance_;
    new (ptr) ::tensorflow::BundleHeaderProto();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::BundleHeaderProto::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_BundleHeaderProto_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_BundleHeaderProto_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto}, {
      &scc_info_VersionDef_tensorflow_2fcore_2fframework_2fversions_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleHeaderProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleHeaderProto, num_shards_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleHeaderProto, endianness_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleHeaderProto, version_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleEntryProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleEntryProto, dtype_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleEntryProto, shape_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleEntryProto, shard_id_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleEntryProto, offset_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleEntryProto, size_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleEntryProto, crc32c_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::BundleEntryProto, slices_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::BundleHeaderProto)},
  { 8, -1, sizeof(::tensorflow::BundleEntryProto)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::_BundleHeaderProto_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::_BundleEntryProto_default_instance_),
};

const char descriptor_table_protodef_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n,tensorflow/core/protobuf/tensor_bundle"
  ".proto\022\ntensorflow\032,tensorflow/core/fram"
  "ework/tensor_shape.proto\032,tensorflow/cor"
  "e/framework/tensor_slice.proto\032%tensorfl"
  "ow/core/framework/types.proto\032(tensorflo"
  "w/core/framework/versions.proto\"\261\001\n\021Bund"
  "leHeaderProto\022\022\n\nnum_shards\030\001 \001(\005\022<\n\nend"
  "ianness\030\002 \001(\0162(.tensorflow.BundleHeaderP"
  "roto.Endianness\022\'\n\007version\030\003 \001(\0132\026.tenso"
  "rflow.VersionDef\"!\n\nEndianness\022\n\n\006LITTLE"
  "\020\000\022\007\n\003BIG\020\001\"\322\001\n\020BundleEntryProto\022#\n\005dtyp"
  "e\030\001 \001(\0162\024.tensorflow.DataType\022+\n\005shape\030\002"
  " \001(\0132\034.tensorflow.TensorShapeProto\022\020\n\010sh"
  "ard_id\030\003 \001(\005\022\016\n\006offset\030\004 \001(\003\022\014\n\004size\030\005 \001"
  "(\003\022\016\n\006crc32c\030\006 \001(\007\022,\n\006slices\030\007 \003(\0132\034.ten"
  "sorflow.TensorSliceProtoB\205\001\n\023org.tensorf"
  "low.utilB\022TensorBundleProtosP\001ZUgithub.c"
  "om/tensorflow/tensorflow/tensorflow/go/c"
  "ore/protobuf/for_core_protos_go_proto\370\001\001"
  "b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto_deps[4] = {
  &::descriptor_table_tensorflow_2fcore_2fframework_2ftensor_5fshape_2eproto,
  &::descriptor_table_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto,
  &::descriptor_table_tensorflow_2fcore_2fframework_2ftypes_2eproto,
  &::descriptor_table_tensorflow_2fcore_2fframework_2fversions_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto_sccs[2] = {
  &scc_info_BundleEntryProto_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto.base,
  &scc_info_BundleHeaderProto_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto = {
  false, false, descriptor_table_protodef_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto, "tensorflow/core/protobuf/tensor_bundle.proto", 768,
  &descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto_once, descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto_sccs, descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto_deps, 2, 4,
  schemas, file_default_instances, TableStruct_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto::offsets,
  file_level_metadata_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto, 2, file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto, file_level_service_descriptors_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto)), true);
namespace tensorflow {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* BundleHeaderProto_Endianness_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto);
  return file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto[0];
}
bool BundleHeaderProto_Endianness_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr BundleHeaderProto_Endianness BundleHeaderProto::LITTLE;
constexpr BundleHeaderProto_Endianness BundleHeaderProto::BIG;
constexpr BundleHeaderProto_Endianness BundleHeaderProto::Endianness_MIN;
constexpr BundleHeaderProto_Endianness BundleHeaderProto::Endianness_MAX;
constexpr int BundleHeaderProto::Endianness_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void BundleHeaderProto::InitAsDefaultInstance() {
  ::tensorflow::_BundleHeaderProto_default_instance_._instance.get_mutable()->version_ = const_cast< ::tensorflow::VersionDef*>(
      ::tensorflow::VersionDef::internal_default_instance());
}
class BundleHeaderProto::_Internal {
 public:
  static const ::tensorflow::VersionDef& version(const BundleHeaderProto* msg);
};

const ::tensorflow::VersionDef&
BundleHeaderProto::_Internal::version(const BundleHeaderProto* msg) {
  return *msg->version_;
}
void BundleHeaderProto::clear_version() {
  if (GetArena() == nullptr && version_ != nullptr) {
    delete version_;
  }
  version_ = nullptr;
}
BundleHeaderProto::BundleHeaderProto(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.BundleHeaderProto)
}
BundleHeaderProto::BundleHeaderProto(const BundleHeaderProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_version()) {
    version_ = new ::tensorflow::VersionDef(*from.version_);
  } else {
    version_ = nullptr;
  }
  ::memcpy(&num_shards_, &from.num_shards_,
    static_cast<size_t>(reinterpret_cast<char*>(&endianness_) -
    reinterpret_cast<char*>(&num_shards_)) + sizeof(endianness_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.BundleHeaderProto)
}

void BundleHeaderProto::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_BundleHeaderProto_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto.base);
  ::memset(&version_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&endianness_) -
      reinterpret_cast<char*>(&version_)) + sizeof(endianness_));
}

BundleHeaderProto::~BundleHeaderProto() {
  // @@protoc_insertion_point(destructor:tensorflow.BundleHeaderProto)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void BundleHeaderProto::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete version_;
}

void BundleHeaderProto::ArenaDtor(void* object) {
  BundleHeaderProto* _this = reinterpret_cast< BundleHeaderProto* >(object);
  (void)_this;
}
void BundleHeaderProto::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void BundleHeaderProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const BundleHeaderProto& BundleHeaderProto::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_BundleHeaderProto_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto.base);
  return *internal_default_instance();
}


void BundleHeaderProto::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.BundleHeaderProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && version_ != nullptr) {
    delete version_;
  }
  version_ = nullptr;
  ::memset(&num_shards_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&endianness_) -
      reinterpret_cast<char*>(&num_shards_)) + sizeof(endianness_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* BundleHeaderProto::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 num_shards = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          num_shards_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .tensorflow.BundleHeaderProto.Endianness endianness = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_endianness(static_cast<::tensorflow::BundleHeaderProto_Endianness>(val));
        } else goto handle_unusual;
        continue;
      // .tensorflow.VersionDef version = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_version(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* BundleHeaderProto::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.BundleHeaderProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 num_shards = 1;
  if (this->num_shards() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_num_shards(), target);
  }

  // .tensorflow.BundleHeaderProto.Endianness endianness = 2;
  if (this->endianness() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_endianness(), target);
  }

  // .tensorflow.VersionDef version = 3;
  if (this->has_version()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::version(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.BundleHeaderProto)
  return target;
}

size_t BundleHeaderProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.BundleHeaderProto)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .tensorflow.VersionDef version = 3;
  if (this->has_version()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *version_);
  }

  // int32 num_shards = 1;
  if (this->num_shards() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_num_shards());
  }

  // .tensorflow.BundleHeaderProto.Endianness endianness = 2;
  if (this->endianness() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_endianness());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void BundleHeaderProto::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.BundleHeaderProto)
  GOOGLE_DCHECK_NE(&from, this);
  const BundleHeaderProto* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<BundleHeaderProto>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.BundleHeaderProto)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.BundleHeaderProto)
    MergeFrom(*source);
  }
}

void BundleHeaderProto::MergeFrom(const BundleHeaderProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.BundleHeaderProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_version()) {
    _internal_mutable_version()->::tensorflow::VersionDef::MergeFrom(from._internal_version());
  }
  if (from.num_shards() != 0) {
    _internal_set_num_shards(from._internal_num_shards());
  }
  if (from.endianness() != 0) {
    _internal_set_endianness(from._internal_endianness());
  }
}

void BundleHeaderProto::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.BundleHeaderProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BundleHeaderProto::CopyFrom(const BundleHeaderProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.BundleHeaderProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BundleHeaderProto::IsInitialized() const {
  return true;
}

void BundleHeaderProto::InternalSwap(BundleHeaderProto* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(BundleHeaderProto, endianness_)
      + sizeof(BundleHeaderProto::endianness_)
      - PROTOBUF_FIELD_OFFSET(BundleHeaderProto, version_)>(
          reinterpret_cast<char*>(&version_),
          reinterpret_cast<char*>(&other->version_));
}

::PROTOBUF_NAMESPACE_ID::Metadata BundleHeaderProto::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void BundleEntryProto::InitAsDefaultInstance() {
  ::tensorflow::_BundleEntryProto_default_instance_._instance.get_mutable()->shape_ = const_cast< ::tensorflow::TensorShapeProto*>(
      ::tensorflow::TensorShapeProto::internal_default_instance());
}
class BundleEntryProto::_Internal {
 public:
  static const ::tensorflow::TensorShapeProto& shape(const BundleEntryProto* msg);
};

const ::tensorflow::TensorShapeProto&
BundleEntryProto::_Internal::shape(const BundleEntryProto* msg) {
  return *msg->shape_;
}
void BundleEntryProto::clear_shape() {
  if (GetArena() == nullptr && shape_ != nullptr) {
    delete shape_;
  }
  shape_ = nullptr;
}
void BundleEntryProto::clear_slices() {
  slices_.Clear();
}
BundleEntryProto::BundleEntryProto(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  slices_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.BundleEntryProto)
}
BundleEntryProto::BundleEntryProto(const BundleEntryProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      slices_(from.slices_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_shape()) {
    shape_ = new ::tensorflow::TensorShapeProto(*from.shape_);
  } else {
    shape_ = nullptr;
  }
  ::memcpy(&dtype_, &from.dtype_,
    static_cast<size_t>(reinterpret_cast<char*>(&crc32c_) -
    reinterpret_cast<char*>(&dtype_)) + sizeof(crc32c_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.BundleEntryProto)
}

void BundleEntryProto::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_BundleEntryProto_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto.base);
  ::memset(&shape_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&crc32c_) -
      reinterpret_cast<char*>(&shape_)) + sizeof(crc32c_));
}

BundleEntryProto::~BundleEntryProto() {
  // @@protoc_insertion_point(destructor:tensorflow.BundleEntryProto)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void BundleEntryProto::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete shape_;
}

void BundleEntryProto::ArenaDtor(void* object) {
  BundleEntryProto* _this = reinterpret_cast< BundleEntryProto* >(object);
  (void)_this;
}
void BundleEntryProto::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void BundleEntryProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const BundleEntryProto& BundleEntryProto::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_BundleEntryProto_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto.base);
  return *internal_default_instance();
}


void BundleEntryProto::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.BundleEntryProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  slices_.Clear();
  if (GetArena() == nullptr && shape_ != nullptr) {
    delete shape_;
  }
  shape_ = nullptr;
  ::memset(&dtype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&crc32c_) -
      reinterpret_cast<char*>(&dtype_)) + sizeof(crc32c_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* BundleEntryProto::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .tensorflow.DataType dtype = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_dtype(static_cast<::tensorflow::DataType>(val));
        } else goto handle_unusual;
        continue;
      // .tensorflow.TensorShapeProto shape = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_shape(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 shard_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          shard_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 offset = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          offset_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 size = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // fixed32 crc32c = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 53)) {
          crc32c_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint32>(ptr);
          ptr += sizeof(::PROTOBUF_NAMESPACE_ID::uint32);
        } else goto handle_unusual;
        continue;
      // repeated .tensorflow.TensorSliceProto slices = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_slices(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<58>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* BundleEntryProto::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.BundleEntryProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.DataType dtype = 1;
  if (this->dtype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_dtype(), target);
  }

  // .tensorflow.TensorShapeProto shape = 2;
  if (this->has_shape()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::shape(this), target, stream);
  }

  // int32 shard_id = 3;
  if (this->shard_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_shard_id(), target);
  }

  // int64 offset = 4;
  if (this->offset() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(4, this->_internal_offset(), target);
  }

  // int64 size = 5;
  if (this->size() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(5, this->_internal_size(), target);
  }

  // fixed32 crc32c = 6;
  if (this->crc32c() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFixed32ToArray(6, this->_internal_crc32c(), target);
  }

  // repeated .tensorflow.TensorSliceProto slices = 7;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_slices_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(7, this->_internal_slices(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.BundleEntryProto)
  return target;
}

size_t BundleEntryProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.BundleEntryProto)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .tensorflow.TensorSliceProto slices = 7;
  total_size += 1UL * this->_internal_slices_size();
  for (const auto& msg : this->slices_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // .tensorflow.TensorShapeProto shape = 2;
  if (this->has_shape()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *shape_);
  }

  // .tensorflow.DataType dtype = 1;
  if (this->dtype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_dtype());
  }

  // int32 shard_id = 3;
  if (this->shard_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_shard_id());
  }

  // int64 offset = 4;
  if (this->offset() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_offset());
  }

  // int64 size = 5;
  if (this->size() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_size());
  }

  // fixed32 crc32c = 6;
  if (this->crc32c() != 0) {
    total_size += 1 + 4;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void BundleEntryProto::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.BundleEntryProto)
  GOOGLE_DCHECK_NE(&from, this);
  const BundleEntryProto* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<BundleEntryProto>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.BundleEntryProto)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.BundleEntryProto)
    MergeFrom(*source);
  }
}

void BundleEntryProto::MergeFrom(const BundleEntryProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.BundleEntryProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  slices_.MergeFrom(from.slices_);
  if (from.has_shape()) {
    _internal_mutable_shape()->::tensorflow::TensorShapeProto::MergeFrom(from._internal_shape());
  }
  if (from.dtype() != 0) {
    _internal_set_dtype(from._internal_dtype());
  }
  if (from.shard_id() != 0) {
    _internal_set_shard_id(from._internal_shard_id());
  }
  if (from.offset() != 0) {
    _internal_set_offset(from._internal_offset());
  }
  if (from.size() != 0) {
    _internal_set_size(from._internal_size());
  }
  if (from.crc32c() != 0) {
    _internal_set_crc32c(from._internal_crc32c());
  }
}

void BundleEntryProto::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.BundleEntryProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BundleEntryProto::CopyFrom(const BundleEntryProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.BundleEntryProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BundleEntryProto::IsInitialized() const {
  return true;
}

void BundleEntryProto::InternalSwap(BundleEntryProto* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  slices_.InternalSwap(&other->slices_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(BundleEntryProto, crc32c_)
      + sizeof(BundleEntryProto::crc32c_)
      - PROTOBUF_FIELD_OFFSET(BundleEntryProto, shape_)>(
          reinterpret_cast<char*>(&shape_),
          reinterpret_cast<char*>(&other->shape_));
}

::PROTOBUF_NAMESPACE_ID::Metadata BundleEntryProto::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::tensorflow::BundleHeaderProto* Arena::CreateMaybeMessage< ::tensorflow::BundleHeaderProto >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::BundleHeaderProto >(arena);
}
template<> PROTOBUF_NOINLINE ::tensorflow::BundleEntryProto* Arena::CreateMaybeMessage< ::tensorflow::BundleEntryProto >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::BundleEntryProto >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
