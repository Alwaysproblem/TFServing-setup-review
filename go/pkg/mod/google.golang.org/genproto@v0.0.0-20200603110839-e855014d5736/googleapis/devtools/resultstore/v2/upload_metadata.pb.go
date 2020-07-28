// Copyright 2019 Google LLC.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.22.0
// 	protoc        v3.12.2
// source: google/devtools/resultstore/v2/upload_metadata.proto

package resultstore

import (
	reflect "reflect"
	sync "sync"

	proto "github.com/golang/protobuf/proto"
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
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

// The upload metadata for an invocation
type UploadMetadata struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// The name of the upload metadata.  Its format will be:
	// invocations/${INVOCATION_ID}/uploadMetadata
	Name string `protobuf:"bytes,1,opt,name=name,proto3" json:"name,omitempty"`
	// The resume token of the last batch that was committed in the most recent
	// batch upload.
	// More information with resume_token could be found in
	// resultstore_upload.proto
	ResumeToken string `protobuf:"bytes,2,opt,name=resume_token,json=resumeToken,proto3" json:"resume_token,omitempty"`
	// Client-specific data used to resume batch upload if an error occurs and
	// retry action is needed.
	UploaderState []byte `protobuf:"bytes,3,opt,name=uploader_state,json=uploaderState,proto3" json:"uploader_state,omitempty"`
}

func (x *UploadMetadata) Reset() {
	*x = UploadMetadata{}
	if protoimpl.UnsafeEnabled {
		mi := &file_google_devtools_resultstore_v2_upload_metadata_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *UploadMetadata) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*UploadMetadata) ProtoMessage() {}

func (x *UploadMetadata) ProtoReflect() protoreflect.Message {
	mi := &file_google_devtools_resultstore_v2_upload_metadata_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use UploadMetadata.ProtoReflect.Descriptor instead.
func (*UploadMetadata) Descriptor() ([]byte, []int) {
	return file_google_devtools_resultstore_v2_upload_metadata_proto_rawDescGZIP(), []int{0}
}

func (x *UploadMetadata) GetName() string {
	if x != nil {
		return x.Name
	}
	return ""
}

func (x *UploadMetadata) GetResumeToken() string {
	if x != nil {
		return x.ResumeToken
	}
	return ""
}

func (x *UploadMetadata) GetUploaderState() []byte {
	if x != nil {
		return x.UploaderState
	}
	return nil
}

var File_google_devtools_resultstore_v2_upload_metadata_proto protoreflect.FileDescriptor

var file_google_devtools_resultstore_v2_upload_metadata_proto_rawDesc = []byte{
	0x0a, 0x34, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2f, 0x64, 0x65, 0x76, 0x74, 0x6f, 0x6f, 0x6c,
	0x73, 0x2f, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x73, 0x74, 0x6f, 0x72, 0x65, 0x2f, 0x76, 0x32,
	0x2f, 0x75, 0x70, 0x6c, 0x6f, 0x61, 0x64, 0x5f, 0x6d, 0x65, 0x74, 0x61, 0x64, 0x61, 0x74, 0x61,
	0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x12, 0x1e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x64,
	0x65, 0x76, 0x74, 0x6f, 0x6f, 0x6c, 0x73, 0x2e, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x73, 0x74,
	0x6f, 0x72, 0x65, 0x2e, 0x76, 0x32, 0x22, 0x6e, 0x0a, 0x0e, 0x55, 0x70, 0x6c, 0x6f, 0x61, 0x64,
	0x4d, 0x65, 0x74, 0x61, 0x64, 0x61, 0x74, 0x61, 0x12, 0x12, 0x0a, 0x04, 0x6e, 0x61, 0x6d, 0x65,
	0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x12, 0x21, 0x0a, 0x0c,
	0x72, 0x65, 0x73, 0x75, 0x6d, 0x65, 0x5f, 0x74, 0x6f, 0x6b, 0x65, 0x6e, 0x18, 0x02, 0x20, 0x01,
	0x28, 0x09, 0x52, 0x0b, 0x72, 0x65, 0x73, 0x75, 0x6d, 0x65, 0x54, 0x6f, 0x6b, 0x65, 0x6e, 0x12,
	0x25, 0x0a, 0x0e, 0x75, 0x70, 0x6c, 0x6f, 0x61, 0x64, 0x65, 0x72, 0x5f, 0x73, 0x74, 0x61, 0x74,
	0x65, 0x18, 0x03, 0x20, 0x01, 0x28, 0x0c, 0x52, 0x0d, 0x75, 0x70, 0x6c, 0x6f, 0x61, 0x64, 0x65,
	0x72, 0x53, 0x74, 0x61, 0x74, 0x65, 0x42, 0x71, 0x0a, 0x22, 0x63, 0x6f, 0x6d, 0x2e, 0x67, 0x6f,
	0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x64, 0x65, 0x76, 0x74, 0x6f, 0x6f, 0x6c, 0x73, 0x2e, 0x72, 0x65,
	0x73, 0x75, 0x6c, 0x74, 0x73, 0x74, 0x6f, 0x72, 0x65, 0x2e, 0x76, 0x32, 0x50, 0x01, 0x5a, 0x49,
	0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x67, 0x6f, 0x6c, 0x61, 0x6e, 0x67, 0x2e, 0x6f, 0x72,
	0x67, 0x2f, 0x67, 0x65, 0x6e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x2f, 0x67, 0x6f, 0x6f, 0x67, 0x6c,
	0x65, 0x61, 0x70, 0x69, 0x73, 0x2f, 0x64, 0x65, 0x76, 0x74, 0x6f, 0x6f, 0x6c, 0x73, 0x2f, 0x72,
	0x65, 0x73, 0x75, 0x6c, 0x74, 0x73, 0x74, 0x6f, 0x72, 0x65, 0x2f, 0x76, 0x32, 0x3b, 0x72, 0x65,
	0x73, 0x75, 0x6c, 0x74, 0x73, 0x74, 0x6f, 0x72, 0x65, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f,
	0x33,
}

var (
	file_google_devtools_resultstore_v2_upload_metadata_proto_rawDescOnce sync.Once
	file_google_devtools_resultstore_v2_upload_metadata_proto_rawDescData = file_google_devtools_resultstore_v2_upload_metadata_proto_rawDesc
)

func file_google_devtools_resultstore_v2_upload_metadata_proto_rawDescGZIP() []byte {
	file_google_devtools_resultstore_v2_upload_metadata_proto_rawDescOnce.Do(func() {
		file_google_devtools_resultstore_v2_upload_metadata_proto_rawDescData = protoimpl.X.CompressGZIP(file_google_devtools_resultstore_v2_upload_metadata_proto_rawDescData)
	})
	return file_google_devtools_resultstore_v2_upload_metadata_proto_rawDescData
}

var file_google_devtools_resultstore_v2_upload_metadata_proto_msgTypes = make([]protoimpl.MessageInfo, 1)
var file_google_devtools_resultstore_v2_upload_metadata_proto_goTypes = []interface{}{
	(*UploadMetadata)(nil), // 0: google.devtools.resultstore.v2.UploadMetadata
}
var file_google_devtools_resultstore_v2_upload_metadata_proto_depIdxs = []int32{
	0, // [0:0] is the sub-list for method output_type
	0, // [0:0] is the sub-list for method input_type
	0, // [0:0] is the sub-list for extension type_name
	0, // [0:0] is the sub-list for extension extendee
	0, // [0:0] is the sub-list for field type_name
}

func init() { file_google_devtools_resultstore_v2_upload_metadata_proto_init() }
func file_google_devtools_resultstore_v2_upload_metadata_proto_init() {
	if File_google_devtools_resultstore_v2_upload_metadata_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_google_devtools_resultstore_v2_upload_metadata_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*UploadMetadata); i {
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
			RawDescriptor: file_google_devtools_resultstore_v2_upload_metadata_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   1,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_google_devtools_resultstore_v2_upload_metadata_proto_goTypes,
		DependencyIndexes: file_google_devtools_resultstore_v2_upload_metadata_proto_depIdxs,
		MessageInfos:      file_google_devtools_resultstore_v2_upload_metadata_proto_msgTypes,
	}.Build()
	File_google_devtools_resultstore_v2_upload_metadata_proto = out.File
	file_google_devtools_resultstore_v2_upload_metadata_proto_rawDesc = nil
	file_google_devtools_resultstore_v2_upload_metadata_proto_goTypes = nil
	file_google_devtools_resultstore_v2_upload_metadata_proto_depIdxs = nil
}
