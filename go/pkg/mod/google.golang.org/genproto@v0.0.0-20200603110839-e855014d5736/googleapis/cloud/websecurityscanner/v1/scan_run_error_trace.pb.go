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
// source: google/cloud/websecurityscanner/v1/scan_run_error_trace.proto

package websecurityscanner

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

// Output only.
// Defines an error reason code.
// Next id: 7
type ScanRunErrorTrace_Code int32

const (
	// Default value is never used.
	ScanRunErrorTrace_CODE_UNSPECIFIED ScanRunErrorTrace_Code = 0
	// Indicates that the scan run failed due to an internal server error.
	ScanRunErrorTrace_INTERNAL_ERROR ScanRunErrorTrace_Code = 1
	// Indicates a scan configuration error, usually due to outdated ScanConfig
	// settings, such as starting_urls or the DNS configuration.
	ScanRunErrorTrace_SCAN_CONFIG_ISSUE ScanRunErrorTrace_Code = 2
	// Indicates an authentication error, usually due to outdated ScanConfig
	// authentication settings.
	ScanRunErrorTrace_AUTHENTICATION_CONFIG_ISSUE ScanRunErrorTrace_Code = 3
	// Indicates a scan operation timeout, usually caused by a very large site.
	ScanRunErrorTrace_TIMED_OUT_WHILE_SCANNING ScanRunErrorTrace_Code = 4
	// Indicates that a scan encountered excessive redirects, either to
	// authentication or some other page outside of the scan scope.
	ScanRunErrorTrace_TOO_MANY_REDIRECTS ScanRunErrorTrace_Code = 5
	// Indicates that a scan encountered numerous errors from the web site
	// pages. When available, most_common_http_error_code field indicates the
	// most common HTTP error code encountered during the scan.
	ScanRunErrorTrace_TOO_MANY_HTTP_ERRORS ScanRunErrorTrace_Code = 6
)

// Enum value maps for ScanRunErrorTrace_Code.
var (
	ScanRunErrorTrace_Code_name = map[int32]string{
		0: "CODE_UNSPECIFIED",
		1: "INTERNAL_ERROR",
		2: "SCAN_CONFIG_ISSUE",
		3: "AUTHENTICATION_CONFIG_ISSUE",
		4: "TIMED_OUT_WHILE_SCANNING",
		5: "TOO_MANY_REDIRECTS",
		6: "TOO_MANY_HTTP_ERRORS",
	}
	ScanRunErrorTrace_Code_value = map[string]int32{
		"CODE_UNSPECIFIED":            0,
		"INTERNAL_ERROR":              1,
		"SCAN_CONFIG_ISSUE":           2,
		"AUTHENTICATION_CONFIG_ISSUE": 3,
		"TIMED_OUT_WHILE_SCANNING":    4,
		"TOO_MANY_REDIRECTS":          5,
		"TOO_MANY_HTTP_ERRORS":        6,
	}
)

func (x ScanRunErrorTrace_Code) Enum() *ScanRunErrorTrace_Code {
	p := new(ScanRunErrorTrace_Code)
	*p = x
	return p
}

func (x ScanRunErrorTrace_Code) String() string {
	return protoimpl.X.EnumStringOf(x.Descriptor(), protoreflect.EnumNumber(x))
}

func (ScanRunErrorTrace_Code) Descriptor() protoreflect.EnumDescriptor {
	return file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_enumTypes[0].Descriptor()
}

func (ScanRunErrorTrace_Code) Type() protoreflect.EnumType {
	return &file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_enumTypes[0]
}

func (x ScanRunErrorTrace_Code) Number() protoreflect.EnumNumber {
	return protoreflect.EnumNumber(x)
}

// Deprecated: Use ScanRunErrorTrace_Code.Descriptor instead.
func (ScanRunErrorTrace_Code) EnumDescriptor() ([]byte, []int) {
	return file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_rawDescGZIP(), []int{0, 0}
}

// Output only.
// Defines an error trace message for a ScanRun.
type ScanRunErrorTrace struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// Output only. Indicates the error reason code.
	Code ScanRunErrorTrace_Code `protobuf:"varint,1,opt,name=code,proto3,enum=google.cloud.websecurityscanner.v1.ScanRunErrorTrace_Code" json:"code,omitempty"`
	// Output only. If the scan encounters SCAN_CONFIG_ISSUE error, this field has the error
	// message encountered during scan configuration validation that is performed
	// before each scan run.
	ScanConfigError *ScanConfigError `protobuf:"bytes,2,opt,name=scan_config_error,json=scanConfigError,proto3" json:"scan_config_error,omitempty"`
	// Output only. If the scan encounters TOO_MANY_HTTP_ERRORS, this field indicates the most
	// common HTTP error code, if such is available. For example, if this code is
	// 404, the scan has encountered too many NOT_FOUND responses.
	MostCommonHttpErrorCode int32 `protobuf:"varint,3,opt,name=most_common_http_error_code,json=mostCommonHttpErrorCode,proto3" json:"most_common_http_error_code,omitempty"`
}

func (x *ScanRunErrorTrace) Reset() {
	*x = ScanRunErrorTrace{}
	if protoimpl.UnsafeEnabled {
		mi := &file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *ScanRunErrorTrace) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*ScanRunErrorTrace) ProtoMessage() {}

func (x *ScanRunErrorTrace) ProtoReflect() protoreflect.Message {
	mi := &file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use ScanRunErrorTrace.ProtoReflect.Descriptor instead.
func (*ScanRunErrorTrace) Descriptor() ([]byte, []int) {
	return file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_rawDescGZIP(), []int{0}
}

func (x *ScanRunErrorTrace) GetCode() ScanRunErrorTrace_Code {
	if x != nil {
		return x.Code
	}
	return ScanRunErrorTrace_CODE_UNSPECIFIED
}

func (x *ScanRunErrorTrace) GetScanConfigError() *ScanConfigError {
	if x != nil {
		return x.ScanConfigError
	}
	return nil
}

func (x *ScanRunErrorTrace) GetMostCommonHttpErrorCode() int32 {
	if x != nil {
		return x.MostCommonHttpErrorCode
	}
	return 0
}

var File_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto protoreflect.FileDescriptor

var file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_rawDesc = []byte{
	0x0a, 0x3d, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2f, 0x63, 0x6c, 0x6f, 0x75, 0x64, 0x2f, 0x77,
	0x65, 0x62, 0x73, 0x65, 0x63, 0x75, 0x72, 0x69, 0x74, 0x79, 0x73, 0x63, 0x61, 0x6e, 0x6e, 0x65,
	0x72, 0x2f, 0x76, 0x31, 0x2f, 0x73, 0x63, 0x61, 0x6e, 0x5f, 0x72, 0x75, 0x6e, 0x5f, 0x65, 0x72,
	0x72, 0x6f, 0x72, 0x5f, 0x74, 0x72, 0x61, 0x63, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x12,
	0x22, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x63, 0x6c, 0x6f, 0x75, 0x64, 0x2e, 0x77, 0x65,
	0x62, 0x73, 0x65, 0x63, 0x75, 0x72, 0x69, 0x74, 0x79, 0x73, 0x63, 0x61, 0x6e, 0x6e, 0x65, 0x72,
	0x2e, 0x76, 0x31, 0x1a, 0x3a, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2f, 0x63, 0x6c, 0x6f, 0x75,
	0x64, 0x2f, 0x77, 0x65, 0x62, 0x73, 0x65, 0x63, 0x75, 0x72, 0x69, 0x74, 0x79, 0x73, 0x63, 0x61,
	0x6e, 0x6e, 0x65, 0x72, 0x2f, 0x76, 0x31, 0x2f, 0x73, 0x63, 0x61, 0x6e, 0x5f, 0x63, 0x6f, 0x6e,
	0x66, 0x69, 0x67, 0x5f, 0x65, 0x72, 0x72, 0x6f, 0x72, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x22,
	0xbd, 0x03, 0x0a, 0x11, 0x53, 0x63, 0x61, 0x6e, 0x52, 0x75, 0x6e, 0x45, 0x72, 0x72, 0x6f, 0x72,
	0x54, 0x72, 0x61, 0x63, 0x65, 0x12, 0x4e, 0x0a, 0x04, 0x63, 0x6f, 0x64, 0x65, 0x18, 0x01, 0x20,
	0x01, 0x28, 0x0e, 0x32, 0x3a, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x63, 0x6c, 0x6f,
	0x75, 0x64, 0x2e, 0x77, 0x65, 0x62, 0x73, 0x65, 0x63, 0x75, 0x72, 0x69, 0x74, 0x79, 0x73, 0x63,
	0x61, 0x6e, 0x6e, 0x65, 0x72, 0x2e, 0x76, 0x31, 0x2e, 0x53, 0x63, 0x61, 0x6e, 0x52, 0x75, 0x6e,
	0x45, 0x72, 0x72, 0x6f, 0x72, 0x54, 0x72, 0x61, 0x63, 0x65, 0x2e, 0x43, 0x6f, 0x64, 0x65, 0x52,
	0x04, 0x63, 0x6f, 0x64, 0x65, 0x12, 0x5f, 0x0a, 0x11, 0x73, 0x63, 0x61, 0x6e, 0x5f, 0x63, 0x6f,
	0x6e, 0x66, 0x69, 0x67, 0x5f, 0x65, 0x72, 0x72, 0x6f, 0x72, 0x18, 0x02, 0x20, 0x01, 0x28, 0x0b,
	0x32, 0x33, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x63, 0x6c, 0x6f, 0x75, 0x64, 0x2e,
	0x77, 0x65, 0x62, 0x73, 0x65, 0x63, 0x75, 0x72, 0x69, 0x74, 0x79, 0x73, 0x63, 0x61, 0x6e, 0x6e,
	0x65, 0x72, 0x2e, 0x76, 0x31, 0x2e, 0x53, 0x63, 0x61, 0x6e, 0x43, 0x6f, 0x6e, 0x66, 0x69, 0x67,
	0x45, 0x72, 0x72, 0x6f, 0x72, 0x52, 0x0f, 0x73, 0x63, 0x61, 0x6e, 0x43, 0x6f, 0x6e, 0x66, 0x69,
	0x67, 0x45, 0x72, 0x72, 0x6f, 0x72, 0x12, 0x3c, 0x0a, 0x1b, 0x6d, 0x6f, 0x73, 0x74, 0x5f, 0x63,
	0x6f, 0x6d, 0x6d, 0x6f, 0x6e, 0x5f, 0x68, 0x74, 0x74, 0x70, 0x5f, 0x65, 0x72, 0x72, 0x6f, 0x72,
	0x5f, 0x63, 0x6f, 0x64, 0x65, 0x18, 0x03, 0x20, 0x01, 0x28, 0x05, 0x52, 0x17, 0x6d, 0x6f, 0x73,
	0x74, 0x43, 0x6f, 0x6d, 0x6d, 0x6f, 0x6e, 0x48, 0x74, 0x74, 0x70, 0x45, 0x72, 0x72, 0x6f, 0x72,
	0x43, 0x6f, 0x64, 0x65, 0x22, 0xb8, 0x01, 0x0a, 0x04, 0x43, 0x6f, 0x64, 0x65, 0x12, 0x14, 0x0a,
	0x10, 0x43, 0x4f, 0x44, 0x45, 0x5f, 0x55, 0x4e, 0x53, 0x50, 0x45, 0x43, 0x49, 0x46, 0x49, 0x45,
	0x44, 0x10, 0x00, 0x12, 0x12, 0x0a, 0x0e, 0x49, 0x4e, 0x54, 0x45, 0x52, 0x4e, 0x41, 0x4c, 0x5f,
	0x45, 0x52, 0x52, 0x4f, 0x52, 0x10, 0x01, 0x12, 0x15, 0x0a, 0x11, 0x53, 0x43, 0x41, 0x4e, 0x5f,
	0x43, 0x4f, 0x4e, 0x46, 0x49, 0x47, 0x5f, 0x49, 0x53, 0x53, 0x55, 0x45, 0x10, 0x02, 0x12, 0x1f,
	0x0a, 0x1b, 0x41, 0x55, 0x54, 0x48, 0x45, 0x4e, 0x54, 0x49, 0x43, 0x41, 0x54, 0x49, 0x4f, 0x4e,
	0x5f, 0x43, 0x4f, 0x4e, 0x46, 0x49, 0x47, 0x5f, 0x49, 0x53, 0x53, 0x55, 0x45, 0x10, 0x03, 0x12,
	0x1c, 0x0a, 0x18, 0x54, 0x49, 0x4d, 0x45, 0x44, 0x5f, 0x4f, 0x55, 0x54, 0x5f, 0x57, 0x48, 0x49,
	0x4c, 0x45, 0x5f, 0x53, 0x43, 0x41, 0x4e, 0x4e, 0x49, 0x4e, 0x47, 0x10, 0x04, 0x12, 0x16, 0x0a,
	0x12, 0x54, 0x4f, 0x4f, 0x5f, 0x4d, 0x41, 0x4e, 0x59, 0x5f, 0x52, 0x45, 0x44, 0x49, 0x52, 0x45,
	0x43, 0x54, 0x53, 0x10, 0x05, 0x12, 0x18, 0x0a, 0x14, 0x54, 0x4f, 0x4f, 0x5f, 0x4d, 0x41, 0x4e,
	0x59, 0x5f, 0x48, 0x54, 0x54, 0x50, 0x5f, 0x45, 0x52, 0x52, 0x4f, 0x52, 0x53, 0x10, 0x06, 0x42,
	0x98, 0x01, 0x0a, 0x26, 0x63, 0x6f, 0x6d, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x63,
	0x6c, 0x6f, 0x75, 0x64, 0x2e, 0x77, 0x65, 0x62, 0x73, 0x65, 0x63, 0x75, 0x72, 0x69, 0x74, 0x79,
	0x73, 0x63, 0x61, 0x6e, 0x6e, 0x65, 0x72, 0x2e, 0x76, 0x31, 0x42, 0x16, 0x53, 0x63, 0x61, 0x6e,
	0x52, 0x75, 0x6e, 0x45, 0x72, 0x72, 0x6f, 0x72, 0x54, 0x72, 0x61, 0x63, 0x65, 0x50, 0x72, 0x6f,
	0x74, 0x6f, 0x50, 0x01, 0x5a, 0x54, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x67, 0x6f, 0x6c,
	0x61, 0x6e, 0x67, 0x2e, 0x6f, 0x72, 0x67, 0x2f, 0x67, 0x65, 0x6e, 0x70, 0x72, 0x6f, 0x74, 0x6f,
	0x2f, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x61, 0x70, 0x69, 0x73, 0x2f, 0x63, 0x6c, 0x6f, 0x75,
	0x64, 0x2f, 0x77, 0x65, 0x62, 0x73, 0x65, 0x63, 0x75, 0x72, 0x69, 0x74, 0x79, 0x73, 0x63, 0x61,
	0x6e, 0x6e, 0x65, 0x72, 0x2f, 0x76, 0x31, 0x3b, 0x77, 0x65, 0x62, 0x73, 0x65, 0x63, 0x75, 0x72,
	0x69, 0x74, 0x79, 0x73, 0x63, 0x61, 0x6e, 0x6e, 0x65, 0x72, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74,
	0x6f, 0x33,
}

var (
	file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_rawDescOnce sync.Once
	file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_rawDescData = file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_rawDesc
)

func file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_rawDescGZIP() []byte {
	file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_rawDescOnce.Do(func() {
		file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_rawDescData = protoimpl.X.CompressGZIP(file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_rawDescData)
	})
	return file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_rawDescData
}

var file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_enumTypes = make([]protoimpl.EnumInfo, 1)
var file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_msgTypes = make([]protoimpl.MessageInfo, 1)
var file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_goTypes = []interface{}{
	(ScanRunErrorTrace_Code)(0), // 0: google.cloud.websecurityscanner.v1.ScanRunErrorTrace.Code
	(*ScanRunErrorTrace)(nil),   // 1: google.cloud.websecurityscanner.v1.ScanRunErrorTrace
	(*ScanConfigError)(nil),     // 2: google.cloud.websecurityscanner.v1.ScanConfigError
}
var file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_depIdxs = []int32{
	0, // 0: google.cloud.websecurityscanner.v1.ScanRunErrorTrace.code:type_name -> google.cloud.websecurityscanner.v1.ScanRunErrorTrace.Code
	2, // 1: google.cloud.websecurityscanner.v1.ScanRunErrorTrace.scan_config_error:type_name -> google.cloud.websecurityscanner.v1.ScanConfigError
	2, // [2:2] is the sub-list for method output_type
	2, // [2:2] is the sub-list for method input_type
	2, // [2:2] is the sub-list for extension type_name
	2, // [2:2] is the sub-list for extension extendee
	0, // [0:2] is the sub-list for field type_name
}

func init() { file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_init() }
func file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_init() {
	if File_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto != nil {
		return
	}
	file_google_cloud_websecurityscanner_v1_scan_config_error_proto_init()
	if !protoimpl.UnsafeEnabled {
		file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*ScanRunErrorTrace); i {
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
			RawDescriptor: file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_rawDesc,
			NumEnums:      1,
			NumMessages:   1,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_goTypes,
		DependencyIndexes: file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_depIdxs,
		EnumInfos:         file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_enumTypes,
		MessageInfos:      file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_msgTypes,
	}.Build()
	File_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto = out.File
	file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_rawDesc = nil
	file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_goTypes = nil
	file_google_cloud_websecurityscanner_v1_scan_run_error_trace_proto_depIdxs = nil
}
