// Copyright 2020 Google LLC
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

// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.22.0
// 	protoc        v3.12.2
// source: google/cloud/datacatalog/v1beta1/common.proto

package datacatalog

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

// This enum describes all the possible systems that Data Catalog integrates
// with.
type IntegratedSystem int32

const (
	// Default unknown system.
	IntegratedSystem_INTEGRATED_SYSTEM_UNSPECIFIED IntegratedSystem = 0
	// BigQuery.
	IntegratedSystem_BIGQUERY IntegratedSystem = 1
	// Cloud Pub/Sub.
	IntegratedSystem_CLOUD_PUBSUB IntegratedSystem = 2
)

// Enum value maps for IntegratedSystem.
var (
	IntegratedSystem_name = map[int32]string{
		0: "INTEGRATED_SYSTEM_UNSPECIFIED",
		1: "BIGQUERY",
		2: "CLOUD_PUBSUB",
	}
	IntegratedSystem_value = map[string]int32{
		"INTEGRATED_SYSTEM_UNSPECIFIED": 0,
		"BIGQUERY":                      1,
		"CLOUD_PUBSUB":                  2,
	}
)

func (x IntegratedSystem) Enum() *IntegratedSystem {
	p := new(IntegratedSystem)
	*p = x
	return p
}

func (x IntegratedSystem) String() string {
	return protoimpl.X.EnumStringOf(x.Descriptor(), protoreflect.EnumNumber(x))
}

func (IntegratedSystem) Descriptor() protoreflect.EnumDescriptor {
	return file_google_cloud_datacatalog_v1beta1_common_proto_enumTypes[0].Descriptor()
}

func (IntegratedSystem) Type() protoreflect.EnumType {
	return &file_google_cloud_datacatalog_v1beta1_common_proto_enumTypes[0]
}

func (x IntegratedSystem) Number() protoreflect.EnumNumber {
	return protoreflect.EnumNumber(x)
}

// Deprecated: Use IntegratedSystem.Descriptor instead.
func (IntegratedSystem) EnumDescriptor() ([]byte, []int) {
	return file_google_cloud_datacatalog_v1beta1_common_proto_rawDescGZIP(), []int{0}
}

var File_google_cloud_datacatalog_v1beta1_common_proto protoreflect.FileDescriptor

var file_google_cloud_datacatalog_v1beta1_common_proto_rawDesc = []byte{
	0x0a, 0x2d, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2f, 0x63, 0x6c, 0x6f, 0x75, 0x64, 0x2f, 0x64,
	0x61, 0x74, 0x61, 0x63, 0x61, 0x74, 0x61, 0x6c, 0x6f, 0x67, 0x2f, 0x76, 0x31, 0x62, 0x65, 0x74,
	0x61, 0x31, 0x2f, 0x63, 0x6f, 0x6d, 0x6d, 0x6f, 0x6e, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x12,
	0x20, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x63, 0x6c, 0x6f, 0x75, 0x64, 0x2e, 0x64, 0x61,
	0x74, 0x61, 0x63, 0x61, 0x74, 0x61, 0x6c, 0x6f, 0x67, 0x2e, 0x76, 0x31, 0x62, 0x65, 0x74, 0x61,
	0x31, 0x2a, 0x55, 0x0a, 0x10, 0x49, 0x6e, 0x74, 0x65, 0x67, 0x72, 0x61, 0x74, 0x65, 0x64, 0x53,
	0x79, 0x73, 0x74, 0x65, 0x6d, 0x12, 0x21, 0x0a, 0x1d, 0x49, 0x4e, 0x54, 0x45, 0x47, 0x52, 0x41,
	0x54, 0x45, 0x44, 0x5f, 0x53, 0x59, 0x53, 0x54, 0x45, 0x4d, 0x5f, 0x55, 0x4e, 0x53, 0x50, 0x45,
	0x43, 0x49, 0x46, 0x49, 0x45, 0x44, 0x10, 0x00, 0x12, 0x0c, 0x0a, 0x08, 0x42, 0x49, 0x47, 0x51,
	0x55, 0x45, 0x52, 0x59, 0x10, 0x01, 0x12, 0x10, 0x0a, 0x0c, 0x43, 0x4c, 0x4f, 0x55, 0x44, 0x5f,
	0x50, 0x55, 0x42, 0x53, 0x55, 0x42, 0x10, 0x02, 0x42, 0xe4, 0x01, 0x0a, 0x24, 0x63, 0x6f, 0x6d,
	0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x63, 0x6c, 0x6f, 0x75, 0x64, 0x2e, 0x64, 0x61,
	0x74, 0x61, 0x63, 0x61, 0x74, 0x61, 0x6c, 0x6f, 0x67, 0x2e, 0x76, 0x31, 0x62, 0x65, 0x74, 0x61,
	0x31, 0x50, 0x01, 0x5a, 0x4b, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x67, 0x6f, 0x6c, 0x61,
	0x6e, 0x67, 0x2e, 0x6f, 0x72, 0x67, 0x2f, 0x67, 0x65, 0x6e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x2f,
	0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x61, 0x70, 0x69, 0x73, 0x2f, 0x63, 0x6c, 0x6f, 0x75, 0x64,
	0x2f, 0x64, 0x61, 0x74, 0x61, 0x63, 0x61, 0x74, 0x61, 0x6c, 0x6f, 0x67, 0x2f, 0x76, 0x31, 0x62,
	0x65, 0x74, 0x61, 0x31, 0x3b, 0x64, 0x61, 0x74, 0x61, 0x63, 0x61, 0x74, 0x61, 0x6c, 0x6f, 0x67,
	0xf8, 0x01, 0x01, 0xaa, 0x02, 0x20, 0x47, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x43, 0x6c, 0x6f,
	0x75, 0x64, 0x2e, 0x44, 0x61, 0x74, 0x61, 0x43, 0x61, 0x74, 0x61, 0x6c, 0x6f, 0x67, 0x2e, 0x56,
	0x31, 0x42, 0x65, 0x74, 0x61, 0x31, 0xca, 0x02, 0x20, 0x47, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x5c,
	0x43, 0x6c, 0x6f, 0x75, 0x64, 0x5c, 0x44, 0x61, 0x74, 0x61, 0x43, 0x61, 0x74, 0x61, 0x6c, 0x6f,
	0x67, 0x5c, 0x56, 0x31, 0x62, 0x65, 0x74, 0x61, 0x31, 0xea, 0x02, 0x23, 0x47, 0x6f, 0x6f, 0x67,
	0x6c, 0x65, 0x3a, 0x3a, 0x43, 0x6c, 0x6f, 0x75, 0x64, 0x3a, 0x3a, 0x44, 0x61, 0x74, 0x61, 0x43,
	0x61, 0x74, 0x61, 0x6c, 0x6f, 0x67, 0x3a, 0x3a, 0x56, 0x31, 0x62, 0x65, 0x74, 0x61, 0x31, 0x62,
	0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_google_cloud_datacatalog_v1beta1_common_proto_rawDescOnce sync.Once
	file_google_cloud_datacatalog_v1beta1_common_proto_rawDescData = file_google_cloud_datacatalog_v1beta1_common_proto_rawDesc
)

func file_google_cloud_datacatalog_v1beta1_common_proto_rawDescGZIP() []byte {
	file_google_cloud_datacatalog_v1beta1_common_proto_rawDescOnce.Do(func() {
		file_google_cloud_datacatalog_v1beta1_common_proto_rawDescData = protoimpl.X.CompressGZIP(file_google_cloud_datacatalog_v1beta1_common_proto_rawDescData)
	})
	return file_google_cloud_datacatalog_v1beta1_common_proto_rawDescData
}

var file_google_cloud_datacatalog_v1beta1_common_proto_enumTypes = make([]protoimpl.EnumInfo, 1)
var file_google_cloud_datacatalog_v1beta1_common_proto_goTypes = []interface{}{
	(IntegratedSystem)(0), // 0: google.cloud.datacatalog.v1beta1.IntegratedSystem
}
var file_google_cloud_datacatalog_v1beta1_common_proto_depIdxs = []int32{
	0, // [0:0] is the sub-list for method output_type
	0, // [0:0] is the sub-list for method input_type
	0, // [0:0] is the sub-list for extension type_name
	0, // [0:0] is the sub-list for extension extendee
	0, // [0:0] is the sub-list for field type_name
}

func init() { file_google_cloud_datacatalog_v1beta1_common_proto_init() }
func file_google_cloud_datacatalog_v1beta1_common_proto_init() {
	if File_google_cloud_datacatalog_v1beta1_common_proto != nil {
		return
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_google_cloud_datacatalog_v1beta1_common_proto_rawDesc,
			NumEnums:      1,
			NumMessages:   0,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_google_cloud_datacatalog_v1beta1_common_proto_goTypes,
		DependencyIndexes: file_google_cloud_datacatalog_v1beta1_common_proto_depIdxs,
		EnumInfos:         file_google_cloud_datacatalog_v1beta1_common_proto_enumTypes,
	}.Build()
	File_google_cloud_datacatalog_v1beta1_common_proto = out.File
	file_google_cloud_datacatalog_v1beta1_common_proto_rawDesc = nil
	file_google_cloud_datacatalog_v1beta1_common_proto_goTypes = nil
	file_google_cloud_datacatalog_v1beta1_common_proto_depIdxs = nil
}
