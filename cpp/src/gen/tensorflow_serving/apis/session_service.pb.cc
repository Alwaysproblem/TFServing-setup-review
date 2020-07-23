// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow_serving/apis/session_service.proto

#include "tensorflow_serving/apis/session_service.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fprotobuf_2fnamed_5ftensor_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_NamedTensorProto_tensorflow_2fcore_2fprotobuf_2fnamed_5ftensor_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fprotobuf_2fconfig_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<4> scc_info_RunMetadata_tensorflow_2fcore_2fprotobuf_2fconfig_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fprotobuf_2fconfig_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_RunOptions_tensorflow_2fcore_2fprotobuf_2fconfig_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_tensorflow_5fserving_2fapis_2fmodel_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ModelSpec_tensorflow_5fserving_2fapis_2fmodel_2eproto;
namespace tensorflow {
namespace serving {
class SessionRunRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SessionRunRequest> _instance;
} _SessionRunRequest_default_instance_;
class SessionRunResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SessionRunResponse> _instance;
} _SessionRunResponse_default_instance_;
}  // namespace serving
}  // namespace tensorflow
static void InitDefaultsscc_info_SessionRunRequest_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::serving::_SessionRunRequest_default_instance_;
    new (ptr) ::tensorflow::serving::SessionRunRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::serving::SessionRunRequest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_SessionRunRequest_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 3, 0, InitDefaultsscc_info_SessionRunRequest_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto}, {
      &scc_info_ModelSpec_tensorflow_5fserving_2fapis_2fmodel_2eproto.base,
      &scc_info_NamedTensorProto_tensorflow_2fcore_2fprotobuf_2fnamed_5ftensor_2eproto.base,
      &scc_info_RunOptions_tensorflow_2fcore_2fprotobuf_2fconfig_2eproto.base,}};

static void InitDefaultsscc_info_SessionRunResponse_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::serving::_SessionRunResponse_default_instance_;
    new (ptr) ::tensorflow::serving::SessionRunResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::serving::SessionRunResponse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_SessionRunResponse_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 3, 0, InitDefaultsscc_info_SessionRunResponse_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto}, {
      &scc_info_ModelSpec_tensorflow_5fserving_2fapis_2fmodel_2eproto.base,
      &scc_info_NamedTensorProto_tensorflow_2fcore_2fprotobuf_2fnamed_5ftensor_2eproto.base,
      &scc_info_RunMetadata_tensorflow_2fcore_2fprotobuf_2fconfig_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::SessionRunRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::SessionRunRequest, model_spec_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::SessionRunRequest, feed_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::SessionRunRequest, fetch_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::SessionRunRequest, target_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::SessionRunRequest, options_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::SessionRunResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::SessionRunResponse, model_spec_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::SessionRunResponse, tensor_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::SessionRunResponse, metadata_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::serving::SessionRunRequest)},
  { 10, -1, sizeof(::tensorflow::serving::SessionRunResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::serving::_SessionRunRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::serving::_SessionRunResponse_default_instance_),
};

const char descriptor_table_protodef_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n-tensorflow_serving/apis/session_servic"
  "e.proto\022\022tensorflow.serving\032#tensorflow_"
  "serving/apis/model.proto\032%tensorflow/cor"
  "e/protobuf/config.proto\032+tensorflow/core"
  "/protobuf/named_tensor.proto\"\272\001\n\021Session"
  "RunRequest\0221\n\nmodel_spec\030\001 \001(\0132\035.tensorf"
  "low.serving.ModelSpec\022*\n\004feed\030\002 \003(\0132\034.te"
  "nsorflow.NamedTensorProto\022\r\n\005fetch\030\003 \003(\t"
  "\022\016\n\006target\030\004 \003(\t\022\'\n\007options\030\005 \001(\0132\026.tens"
  "orflow.RunOptions\"\240\001\n\022SessionRunResponse"
  "\0221\n\nmodel_spec\030\003 \001(\0132\035.tensorflow.servin"
  "g.ModelSpec\022,\n\006tensor\030\001 \003(\0132\034.tensorflow"
  ".NamedTensorProto\022)\n\010metadata\030\002 \001(\0132\027.te"
  "nsorflow.RunMetadata2m\n\016SessionService\022["
  "\n\nSessionRun\022%.tensorflow.serving.Sessio"
  "nRunRequest\032&.tensorflow.serving.Session"
  "RunResponseB\003\370\001\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto_deps[3] = {
  &::descriptor_table_tensorflow_2fcore_2fprotobuf_2fconfig_2eproto,
  &::descriptor_table_tensorflow_2fcore_2fprotobuf_2fnamed_5ftensor_2eproto,
  &::descriptor_table_tensorflow_5fserving_2fapis_2fmodel_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto_sccs[2] = {
  &scc_info_SessionRunRequest_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto.base,
  &scc_info_SessionRunResponse_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto = {
  false, false, descriptor_table_protodef_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto, "tensorflow_serving/apis/session_service.proto", 664,
  &descriptor_table_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto_once, descriptor_table_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto_sccs, descriptor_table_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto_deps, 2, 3,
  schemas, file_default_instances, TableStruct_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto::offsets,
  file_level_metadata_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto, 2, file_level_enum_descriptors_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto, file_level_service_descriptors_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto)), true);
namespace tensorflow {
namespace serving {

// ===================================================================

void SessionRunRequest::InitAsDefaultInstance() {
  ::tensorflow::serving::_SessionRunRequest_default_instance_._instance.get_mutable()->model_spec_ = const_cast< ::tensorflow::serving::ModelSpec*>(
      ::tensorflow::serving::ModelSpec::internal_default_instance());
  ::tensorflow::serving::_SessionRunRequest_default_instance_._instance.get_mutable()->options_ = const_cast< ::tensorflow::RunOptions*>(
      ::tensorflow::RunOptions::internal_default_instance());
}
class SessionRunRequest::_Internal {
 public:
  static const ::tensorflow::serving::ModelSpec& model_spec(const SessionRunRequest* msg);
  static const ::tensorflow::RunOptions& options(const SessionRunRequest* msg);
};

const ::tensorflow::serving::ModelSpec&
SessionRunRequest::_Internal::model_spec(const SessionRunRequest* msg) {
  return *msg->model_spec_;
}
const ::tensorflow::RunOptions&
SessionRunRequest::_Internal::options(const SessionRunRequest* msg) {
  return *msg->options_;
}
void SessionRunRequest::clear_model_spec() {
  if (GetArena() == nullptr && model_spec_ != nullptr) {
    delete model_spec_;
  }
  model_spec_ = nullptr;
}
void SessionRunRequest::clear_feed() {
  feed_.Clear();
}
void SessionRunRequest::clear_options() {
  if (GetArena() == nullptr && options_ != nullptr) {
    delete options_;
  }
  options_ = nullptr;
}
SessionRunRequest::SessionRunRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  feed_(arena),
  fetch_(arena),
  target_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.serving.SessionRunRequest)
}
SessionRunRequest::SessionRunRequest(const SessionRunRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      feed_(from.feed_),
      fetch_(from.fetch_),
      target_(from.target_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_model_spec()) {
    model_spec_ = new ::tensorflow::serving::ModelSpec(*from.model_spec_);
  } else {
    model_spec_ = nullptr;
  }
  if (from._internal_has_options()) {
    options_ = new ::tensorflow::RunOptions(*from.options_);
  } else {
    options_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:tensorflow.serving.SessionRunRequest)
}

void SessionRunRequest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SessionRunRequest_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto.base);
  ::memset(&model_spec_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&options_) -
      reinterpret_cast<char*>(&model_spec_)) + sizeof(options_));
}

SessionRunRequest::~SessionRunRequest() {
  // @@protoc_insertion_point(destructor:tensorflow.serving.SessionRunRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void SessionRunRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete model_spec_;
  if (this != internal_default_instance()) delete options_;
}

void SessionRunRequest::ArenaDtor(void* object) {
  SessionRunRequest* _this = reinterpret_cast< SessionRunRequest* >(object);
  (void)_this;
}
void SessionRunRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SessionRunRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SessionRunRequest& SessionRunRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SessionRunRequest_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto.base);
  return *internal_default_instance();
}


void SessionRunRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.serving.SessionRunRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  feed_.Clear();
  fetch_.Clear();
  target_.Clear();
  if (GetArena() == nullptr && model_spec_ != nullptr) {
    delete model_spec_;
  }
  model_spec_ = nullptr;
  if (GetArena() == nullptr && options_ != nullptr) {
    delete options_;
  }
  options_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SessionRunRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .tensorflow.serving.ModelSpec model_spec = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_model_spec(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .tensorflow.NamedTensorProto feed = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_feed(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated string fetch = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_fetch();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "tensorflow.serving.SessionRunRequest.fetch"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated string target = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_target();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "tensorflow.serving.SessionRunRequest.target"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      // .tensorflow.RunOptions options = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_options(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* SessionRunRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.serving.SessionRunRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.serving.ModelSpec model_spec = 1;
  if (this->has_model_spec()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::model_spec(this), target, stream);
  }

  // repeated .tensorflow.NamedTensorProto feed = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_feed_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_feed(i), target, stream);
  }

  // repeated string fetch = 3;
  for (int i = 0, n = this->_internal_fetch_size(); i < n; i++) {
    const auto& s = this->_internal_fetch(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.serving.SessionRunRequest.fetch");
    target = stream->WriteString(3, s, target);
  }

  // repeated string target = 4;
  for (int i = 0, n = this->_internal_target_size(); i < n; i++) {
    const auto& s = this->_internal_target(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.serving.SessionRunRequest.target");
    target = stream->WriteString(4, s, target);
  }

  // .tensorflow.RunOptions options = 5;
  if (this->has_options()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        5, _Internal::options(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.serving.SessionRunRequest)
  return target;
}

size_t SessionRunRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.serving.SessionRunRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .tensorflow.NamedTensorProto feed = 2;
  total_size += 1UL * this->_internal_feed_size();
  for (const auto& msg : this->feed_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated string fetch = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(fetch_.size());
  for (int i = 0, n = fetch_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      fetch_.Get(i));
  }

  // repeated string target = 4;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(target_.size());
  for (int i = 0, n = target_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      target_.Get(i));
  }

  // .tensorflow.serving.ModelSpec model_spec = 1;
  if (this->has_model_spec()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *model_spec_);
  }

  // .tensorflow.RunOptions options = 5;
  if (this->has_options()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *options_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SessionRunRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.serving.SessionRunRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const SessionRunRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SessionRunRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.serving.SessionRunRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.serving.SessionRunRequest)
    MergeFrom(*source);
  }
}

void SessionRunRequest::MergeFrom(const SessionRunRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.serving.SessionRunRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  feed_.MergeFrom(from.feed_);
  fetch_.MergeFrom(from.fetch_);
  target_.MergeFrom(from.target_);
  if (from.has_model_spec()) {
    _internal_mutable_model_spec()->::tensorflow::serving::ModelSpec::MergeFrom(from._internal_model_spec());
  }
  if (from.has_options()) {
    _internal_mutable_options()->::tensorflow::RunOptions::MergeFrom(from._internal_options());
  }
}

void SessionRunRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.serving.SessionRunRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SessionRunRequest::CopyFrom(const SessionRunRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.serving.SessionRunRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SessionRunRequest::IsInitialized() const {
  return true;
}

void SessionRunRequest::InternalSwap(SessionRunRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  feed_.InternalSwap(&other->feed_);
  fetch_.InternalSwap(&other->fetch_);
  target_.InternalSwap(&other->target_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SessionRunRequest, options_)
      + sizeof(SessionRunRequest::options_)
      - PROTOBUF_FIELD_OFFSET(SessionRunRequest, model_spec_)>(
          reinterpret_cast<char*>(&model_spec_),
          reinterpret_cast<char*>(&other->model_spec_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SessionRunRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void SessionRunResponse::InitAsDefaultInstance() {
  ::tensorflow::serving::_SessionRunResponse_default_instance_._instance.get_mutable()->model_spec_ = const_cast< ::tensorflow::serving::ModelSpec*>(
      ::tensorflow::serving::ModelSpec::internal_default_instance());
  ::tensorflow::serving::_SessionRunResponse_default_instance_._instance.get_mutable()->metadata_ = const_cast< ::tensorflow::RunMetadata*>(
      ::tensorflow::RunMetadata::internal_default_instance());
}
class SessionRunResponse::_Internal {
 public:
  static const ::tensorflow::serving::ModelSpec& model_spec(const SessionRunResponse* msg);
  static const ::tensorflow::RunMetadata& metadata(const SessionRunResponse* msg);
};

const ::tensorflow::serving::ModelSpec&
SessionRunResponse::_Internal::model_spec(const SessionRunResponse* msg) {
  return *msg->model_spec_;
}
const ::tensorflow::RunMetadata&
SessionRunResponse::_Internal::metadata(const SessionRunResponse* msg) {
  return *msg->metadata_;
}
void SessionRunResponse::clear_model_spec() {
  if (GetArena() == nullptr && model_spec_ != nullptr) {
    delete model_spec_;
  }
  model_spec_ = nullptr;
}
void SessionRunResponse::clear_tensor() {
  tensor_.Clear();
}
void SessionRunResponse::clear_metadata() {
  if (GetArena() == nullptr && metadata_ != nullptr) {
    delete metadata_;
  }
  metadata_ = nullptr;
}
SessionRunResponse::SessionRunResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  tensor_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.serving.SessionRunResponse)
}
SessionRunResponse::SessionRunResponse(const SessionRunResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      tensor_(from.tensor_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_metadata()) {
    metadata_ = new ::tensorflow::RunMetadata(*from.metadata_);
  } else {
    metadata_ = nullptr;
  }
  if (from._internal_has_model_spec()) {
    model_spec_ = new ::tensorflow::serving::ModelSpec(*from.model_spec_);
  } else {
    model_spec_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:tensorflow.serving.SessionRunResponse)
}

void SessionRunResponse::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SessionRunResponse_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto.base);
  ::memset(&metadata_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&model_spec_) -
      reinterpret_cast<char*>(&metadata_)) + sizeof(model_spec_));
}

SessionRunResponse::~SessionRunResponse() {
  // @@protoc_insertion_point(destructor:tensorflow.serving.SessionRunResponse)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void SessionRunResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete metadata_;
  if (this != internal_default_instance()) delete model_spec_;
}

void SessionRunResponse::ArenaDtor(void* object) {
  SessionRunResponse* _this = reinterpret_cast< SessionRunResponse* >(object);
  (void)_this;
}
void SessionRunResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SessionRunResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SessionRunResponse& SessionRunResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SessionRunResponse_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto.base);
  return *internal_default_instance();
}


void SessionRunResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.serving.SessionRunResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  tensor_.Clear();
  if (GetArena() == nullptr && metadata_ != nullptr) {
    delete metadata_;
  }
  metadata_ = nullptr;
  if (GetArena() == nullptr && model_spec_ != nullptr) {
    delete model_spec_;
  }
  model_spec_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SessionRunResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .tensorflow.NamedTensorProto tensor = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_tensor(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      // .tensorflow.RunMetadata metadata = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_metadata(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .tensorflow.serving.ModelSpec model_spec = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_model_spec(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* SessionRunResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.serving.SessionRunResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .tensorflow.NamedTensorProto tensor = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_tensor_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_tensor(i), target, stream);
  }

  // .tensorflow.RunMetadata metadata = 2;
  if (this->has_metadata()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::metadata(this), target, stream);
  }

  // .tensorflow.serving.ModelSpec model_spec = 3;
  if (this->has_model_spec()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::model_spec(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.serving.SessionRunResponse)
  return target;
}

size_t SessionRunResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.serving.SessionRunResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .tensorflow.NamedTensorProto tensor = 1;
  total_size += 1UL * this->_internal_tensor_size();
  for (const auto& msg : this->tensor_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // .tensorflow.RunMetadata metadata = 2;
  if (this->has_metadata()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *metadata_);
  }

  // .tensorflow.serving.ModelSpec model_spec = 3;
  if (this->has_model_spec()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *model_spec_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SessionRunResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.serving.SessionRunResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const SessionRunResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SessionRunResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.serving.SessionRunResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.serving.SessionRunResponse)
    MergeFrom(*source);
  }
}

void SessionRunResponse::MergeFrom(const SessionRunResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.serving.SessionRunResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  tensor_.MergeFrom(from.tensor_);
  if (from.has_metadata()) {
    _internal_mutable_metadata()->::tensorflow::RunMetadata::MergeFrom(from._internal_metadata());
  }
  if (from.has_model_spec()) {
    _internal_mutable_model_spec()->::tensorflow::serving::ModelSpec::MergeFrom(from._internal_model_spec());
  }
}

void SessionRunResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.serving.SessionRunResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SessionRunResponse::CopyFrom(const SessionRunResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.serving.SessionRunResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SessionRunResponse::IsInitialized() const {
  return true;
}

void SessionRunResponse::InternalSwap(SessionRunResponse* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  tensor_.InternalSwap(&other->tensor_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SessionRunResponse, model_spec_)
      + sizeof(SessionRunResponse::model_spec_)
      - PROTOBUF_FIELD_OFFSET(SessionRunResponse, metadata_)>(
          reinterpret_cast<char*>(&metadata_),
          reinterpret_cast<char*>(&other->metadata_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SessionRunResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace serving
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::tensorflow::serving::SessionRunRequest* Arena::CreateMaybeMessage< ::tensorflow::serving::SessionRunRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::serving::SessionRunRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::tensorflow::serving::SessionRunResponse* Arena::CreateMaybeMessage< ::tensorflow::serving::SessionRunResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::serving::SessionRunResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
