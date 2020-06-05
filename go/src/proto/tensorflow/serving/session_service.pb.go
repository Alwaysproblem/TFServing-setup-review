// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.24.0-devel
// 	protoc        v3.6.1
// source: tensorflow_serving/apis/session_service.proto

package serving

import (
	context "context"
	proto "github.com/golang/protobuf/proto"
	protobuf "github.com/tensorflow/tensorflow/tensorflow/go/core/protobuf"
	grpc "google.golang.org/grpc"
	codes "google.golang.org/grpc/codes"
	status "google.golang.org/grpc/status"
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	reflect "reflect"
	sync "sync"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

// This is a compile-time assertion that a sufficiently up-to-date version
// of the legacy proto package is being used.
const _ = proto.ProtoPackageIsVersion4

type SessionRunRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// Model Specification. If version is not specified, will use the latest
	// (numerical) version.
	ModelSpec *ModelSpec `protobuf:"bytes,1,opt,name=model_spec,json=modelSpec,proto3" json:"model_spec,omitempty"`
	// Tensors to be fed in the step. Each feed is a named tensor.
	Feed []*protobuf.NamedTensorProto `protobuf:"bytes,2,rep,name=feed,proto3" json:"feed,omitempty"`
	// Fetches. A list of tensor names. The caller expects a tensor to
	// be returned for each fetch[i] (see RunResponse.tensor). The
	// order of specified fetches does not change the execution order.
	Fetch []string `protobuf:"bytes,3,rep,name=fetch,proto3" json:"fetch,omitempty"`
	// Target Nodes. A list of node names. The named nodes will be run
	// to but their outputs will not be fetched.
	Target []string `protobuf:"bytes,4,rep,name=target,proto3" json:"target,omitempty"`
	// Options for the run call. **Currently ignored.**
	Options *protobuf.RunOptions `protobuf:"bytes,5,opt,name=options,proto3" json:"options,omitempty"`
}

func (x *SessionRunRequest) Reset() {
	*x = SessionRunRequest{}
	if protoimpl.UnsafeEnabled {
		mi := &file_tensorflow_serving_apis_session_service_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *SessionRunRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*SessionRunRequest) ProtoMessage() {}

func (x *SessionRunRequest) ProtoReflect() protoreflect.Message {
	mi := &file_tensorflow_serving_apis_session_service_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use SessionRunRequest.ProtoReflect.Descriptor instead.
func (*SessionRunRequest) Descriptor() ([]byte, []int) {
	return file_tensorflow_serving_apis_session_service_proto_rawDescGZIP(), []int{0}
}

func (x *SessionRunRequest) GetModelSpec() *ModelSpec {
	if x != nil {
		return x.ModelSpec
	}
	return nil
}

func (x *SessionRunRequest) GetFeed() []*protobuf.NamedTensorProto {
	if x != nil {
		return x.Feed
	}
	return nil
}

func (x *SessionRunRequest) GetFetch() []string {
	if x != nil {
		return x.Fetch
	}
	return nil
}

func (x *SessionRunRequest) GetTarget() []string {
	if x != nil {
		return x.Target
	}
	return nil
}

func (x *SessionRunRequest) GetOptions() *protobuf.RunOptions {
	if x != nil {
		return x.Options
	}
	return nil
}

type SessionRunResponse struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// Effective Model Specification used for session run.
	ModelSpec *ModelSpec `protobuf:"bytes,3,opt,name=model_spec,json=modelSpec,proto3" json:"model_spec,omitempty"`
	// NOTE: The order of the returned tensors may or may not match
	// the fetch order specified in RunRequest.
	Tensor []*protobuf.NamedTensorProto `protobuf:"bytes,1,rep,name=tensor,proto3" json:"tensor,omitempty"`
	// Returned metadata if requested in the options.
	Metadata *protobuf.RunMetadata `protobuf:"bytes,2,opt,name=metadata,proto3" json:"metadata,omitempty"`
}

func (x *SessionRunResponse) Reset() {
	*x = SessionRunResponse{}
	if protoimpl.UnsafeEnabled {
		mi := &file_tensorflow_serving_apis_session_service_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *SessionRunResponse) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*SessionRunResponse) ProtoMessage() {}

func (x *SessionRunResponse) ProtoReflect() protoreflect.Message {
	mi := &file_tensorflow_serving_apis_session_service_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use SessionRunResponse.ProtoReflect.Descriptor instead.
func (*SessionRunResponse) Descriptor() ([]byte, []int) {
	return file_tensorflow_serving_apis_session_service_proto_rawDescGZIP(), []int{1}
}

func (x *SessionRunResponse) GetModelSpec() *ModelSpec {
	if x != nil {
		return x.ModelSpec
	}
	return nil
}

func (x *SessionRunResponse) GetTensor() []*protobuf.NamedTensorProto {
	if x != nil {
		return x.Tensor
	}
	return nil
}

func (x *SessionRunResponse) GetMetadata() *protobuf.RunMetadata {
	if x != nil {
		return x.Metadata
	}
	return nil
}

var File_tensorflow_serving_apis_session_service_proto protoreflect.FileDescriptor

var file_tensorflow_serving_apis_session_service_proto_rawDesc = []byte{
	0x0a, 0x2d, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x5f, 0x73, 0x65, 0x72,
	0x76, 0x69, 0x6e, 0x67, 0x2f, 0x61, 0x70, 0x69, 0x73, 0x2f, 0x73, 0x65, 0x73, 0x73, 0x69, 0x6f,
	0x6e, 0x5f, 0x73, 0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x12,
	0x12, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x73, 0x65, 0x72, 0x76,
	0x69, 0x6e, 0x67, 0x1a, 0x23, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x5f,
	0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x2f, 0x61, 0x70, 0x69, 0x73, 0x2f, 0x6d, 0x6f, 0x64,
	0x65, 0x6c, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x1a, 0x25, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72,
	0x66, 0x6c, 0x6f, 0x77, 0x2f, 0x63, 0x6f, 0x72, 0x65, 0x2f, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62,
	0x75, 0x66, 0x2f, 0x63, 0x6f, 0x6e, 0x66, 0x69, 0x67, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x1a,
	0x2b, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2f, 0x63, 0x6f, 0x72, 0x65,
	0x2f, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2f, 0x6e, 0x61, 0x6d, 0x65, 0x64, 0x5f,
	0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x22, 0xe3, 0x01, 0x0a,
	0x11, 0x53, 0x65, 0x73, 0x73, 0x69, 0x6f, 0x6e, 0x52, 0x75, 0x6e, 0x52, 0x65, 0x71, 0x75, 0x65,
	0x73, 0x74, 0x12, 0x3c, 0x0a, 0x0a, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5f, 0x73, 0x70, 0x65, 0x63,
	0x18, 0x01, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1d, 0x2e, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66,
	0x6c, 0x6f, 0x77, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x2e, 0x4d, 0x6f, 0x64, 0x65,
	0x6c, 0x53, 0x70, 0x65, 0x63, 0x52, 0x09, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x53, 0x70, 0x65, 0x63,
	0x12, 0x30, 0x0a, 0x04, 0x66, 0x65, 0x65, 0x64, 0x18, 0x02, 0x20, 0x03, 0x28, 0x0b, 0x32, 0x1c,
	0x2e, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x4e, 0x61, 0x6d, 0x65,
	0x64, 0x54, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x50, 0x72, 0x6f, 0x74, 0x6f, 0x52, 0x04, 0x66, 0x65,
	0x65, 0x64, 0x12, 0x14, 0x0a, 0x05, 0x66, 0x65, 0x74, 0x63, 0x68, 0x18, 0x03, 0x20, 0x03, 0x28,
	0x09, 0x52, 0x05, 0x66, 0x65, 0x74, 0x63, 0x68, 0x12, 0x16, 0x0a, 0x06, 0x74, 0x61, 0x72, 0x67,
	0x65, 0x74, 0x18, 0x04, 0x20, 0x03, 0x28, 0x09, 0x52, 0x06, 0x74, 0x61, 0x72, 0x67, 0x65, 0x74,
	0x12, 0x30, 0x0a, 0x07, 0x6f, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x18, 0x05, 0x20, 0x01, 0x28,
	0x0b, 0x32, 0x16, 0x2e, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x52,
	0x75, 0x6e, 0x4f, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x52, 0x07, 0x6f, 0x70, 0x74, 0x69, 0x6f,
	0x6e, 0x73, 0x22, 0xbd, 0x01, 0x0a, 0x12, 0x53, 0x65, 0x73, 0x73, 0x69, 0x6f, 0x6e, 0x52, 0x75,
	0x6e, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x12, 0x3c, 0x0a, 0x0a, 0x6d, 0x6f, 0x64,
	0x65, 0x6c, 0x5f, 0x73, 0x70, 0x65, 0x63, 0x18, 0x03, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1d, 0x2e,
	0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69,
	0x6e, 0x67, 0x2e, 0x4d, 0x6f, 0x64, 0x65, 0x6c, 0x53, 0x70, 0x65, 0x63, 0x52, 0x09, 0x6d, 0x6f,
	0x64, 0x65, 0x6c, 0x53, 0x70, 0x65, 0x63, 0x12, 0x34, 0x0a, 0x06, 0x74, 0x65, 0x6e, 0x73, 0x6f,
	0x72, 0x18, 0x01, 0x20, 0x03, 0x28, 0x0b, 0x32, 0x1c, 0x2e, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72,
	0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x4e, 0x61, 0x6d, 0x65, 0x64, 0x54, 0x65, 0x6e, 0x73, 0x6f, 0x72,
	0x50, 0x72, 0x6f, 0x74, 0x6f, 0x52, 0x06, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x12, 0x33, 0x0a,
	0x08, 0x6d, 0x65, 0x74, 0x61, 0x64, 0x61, 0x74, 0x61, 0x18, 0x02, 0x20, 0x01, 0x28, 0x0b, 0x32,
	0x17, 0x2e, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x52, 0x75, 0x6e,
	0x4d, 0x65, 0x74, 0x61, 0x64, 0x61, 0x74, 0x61, 0x52, 0x08, 0x6d, 0x65, 0x74, 0x61, 0x64, 0x61,
	0x74, 0x61, 0x32, 0x6d, 0x0a, 0x0e, 0x53, 0x65, 0x73, 0x73, 0x69, 0x6f, 0x6e, 0x53, 0x65, 0x72,
	0x76, 0x69, 0x63, 0x65, 0x12, 0x5b, 0x0a, 0x0a, 0x53, 0x65, 0x73, 0x73, 0x69, 0x6f, 0x6e, 0x52,
	0x75, 0x6e, 0x12, 0x25, 0x2e, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e,
	0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x2e, 0x53, 0x65, 0x73, 0x73, 0x69, 0x6f, 0x6e, 0x52,
	0x75, 0x6e, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x1a, 0x26, 0x2e, 0x74, 0x65, 0x6e, 0x73,
	0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x2e, 0x53,
	0x65, 0x73, 0x73, 0x69, 0x6f, 0x6e, 0x52, 0x75, 0x6e, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73,
	0x65, 0x42, 0x03, 0xf8, 0x01, 0x01, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_tensorflow_serving_apis_session_service_proto_rawDescOnce sync.Once
	file_tensorflow_serving_apis_session_service_proto_rawDescData = file_tensorflow_serving_apis_session_service_proto_rawDesc
)

func file_tensorflow_serving_apis_session_service_proto_rawDescGZIP() []byte {
	file_tensorflow_serving_apis_session_service_proto_rawDescOnce.Do(func() {
		file_tensorflow_serving_apis_session_service_proto_rawDescData = protoimpl.X.CompressGZIP(file_tensorflow_serving_apis_session_service_proto_rawDescData)
	})
	return file_tensorflow_serving_apis_session_service_proto_rawDescData
}

var file_tensorflow_serving_apis_session_service_proto_msgTypes = make([]protoimpl.MessageInfo, 2)
var file_tensorflow_serving_apis_session_service_proto_goTypes = []interface{}{
	(*SessionRunRequest)(nil),         // 0: tensorflow.serving.SessionRunRequest
	(*SessionRunResponse)(nil),        // 1: tensorflow.serving.SessionRunResponse
	(*ModelSpec)(nil),                 // 2: tensorflow.serving.ModelSpec
	(*protobuf.NamedTensorProto)(nil), // 3: tensorflow.NamedTensorProto
	(*protobuf.RunOptions)(nil),       // 4: tensorflow.RunOptions
	(*protobuf.RunMetadata)(nil),      // 5: tensorflow.RunMetadata
}
var file_tensorflow_serving_apis_session_service_proto_depIdxs = []int32{
	2, // 0: tensorflow.serving.SessionRunRequest.model_spec:type_name -> tensorflow.serving.ModelSpec
	3, // 1: tensorflow.serving.SessionRunRequest.feed:type_name -> tensorflow.NamedTensorProto
	4, // 2: tensorflow.serving.SessionRunRequest.options:type_name -> tensorflow.RunOptions
	2, // 3: tensorflow.serving.SessionRunResponse.model_spec:type_name -> tensorflow.serving.ModelSpec
	3, // 4: tensorflow.serving.SessionRunResponse.tensor:type_name -> tensorflow.NamedTensorProto
	5, // 5: tensorflow.serving.SessionRunResponse.metadata:type_name -> tensorflow.RunMetadata
	0, // 6: tensorflow.serving.SessionService.SessionRun:input_type -> tensorflow.serving.SessionRunRequest
	1, // 7: tensorflow.serving.SessionService.SessionRun:output_type -> tensorflow.serving.SessionRunResponse
	7, // [7:8] is the sub-list for method output_type
	6, // [6:7] is the sub-list for method input_type
	6, // [6:6] is the sub-list for extension type_name
	6, // [6:6] is the sub-list for extension extendee
	0, // [0:6] is the sub-list for field type_name
}

func init() { file_tensorflow_serving_apis_session_service_proto_init() }
func file_tensorflow_serving_apis_session_service_proto_init() {
	if File_tensorflow_serving_apis_session_service_proto != nil {
		return
	}
	file_tensorflow_serving_apis_model_proto_init()
	if !protoimpl.UnsafeEnabled {
		file_tensorflow_serving_apis_session_service_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*SessionRunRequest); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_tensorflow_serving_apis_session_service_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*SessionRunResponse); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_tensorflow_serving_apis_session_service_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   2,
			NumExtensions: 0,
			NumServices:   1,
		},
		GoTypes:           file_tensorflow_serving_apis_session_service_proto_goTypes,
		DependencyIndexes: file_tensorflow_serving_apis_session_service_proto_depIdxs,
		MessageInfos:      file_tensorflow_serving_apis_session_service_proto_msgTypes,
	}.Build()
	File_tensorflow_serving_apis_session_service_proto = out.File
	file_tensorflow_serving_apis_session_service_proto_rawDesc = nil
	file_tensorflow_serving_apis_session_service_proto_goTypes = nil
	file_tensorflow_serving_apis_session_service_proto_depIdxs = nil
}

// Reference imports to suppress errors if they are not otherwise used.
var _ context.Context
var _ grpc.ClientConnInterface

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
const _ = grpc.SupportPackageIsVersion6

// SessionServiceClient is the client API for SessionService service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
type SessionServiceClient interface {
	// Runs inference of a given model.
	SessionRun(ctx context.Context, in *SessionRunRequest, opts ...grpc.CallOption) (*SessionRunResponse, error)
}

type sessionServiceClient struct {
	cc grpc.ClientConnInterface
}

func NewSessionServiceClient(cc grpc.ClientConnInterface) SessionServiceClient {
	return &sessionServiceClient{cc}
}

func (c *sessionServiceClient) SessionRun(ctx context.Context, in *SessionRunRequest, opts ...grpc.CallOption) (*SessionRunResponse, error) {
	out := new(SessionRunResponse)
	err := c.cc.Invoke(ctx, "/tensorflow.serving.SessionService/SessionRun", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// SessionServiceServer is the server API for SessionService service.
type SessionServiceServer interface {
	// Runs inference of a given model.
	SessionRun(context.Context, *SessionRunRequest) (*SessionRunResponse, error)
}

// UnimplementedSessionServiceServer can be embedded to have forward compatible implementations.
type UnimplementedSessionServiceServer struct {
}

func (*UnimplementedSessionServiceServer) SessionRun(context.Context, *SessionRunRequest) (*SessionRunResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method SessionRun not implemented")
}

func RegisterSessionServiceServer(s *grpc.Server, srv SessionServiceServer) {
	s.RegisterService(&_SessionService_serviceDesc, srv)
}

func _SessionService_SessionRun_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(SessionRunRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(SessionServiceServer).SessionRun(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/tensorflow.serving.SessionService/SessionRun",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(SessionServiceServer).SessionRun(ctx, req.(*SessionRunRequest))
	}
	return interceptor(ctx, in, info, handler)
}

var _SessionService_serviceDesc = grpc.ServiceDesc{
	ServiceName: "tensorflow.serving.SessionService",
	HandlerType: (*SessionServiceServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "SessionRun",
			Handler:    _SessionService_SessionRun_Handler,
		},
	},
	Streams:  []grpc.StreamDesc{},
	Metadata: "tensorflow_serving/apis/session_service.proto",
}