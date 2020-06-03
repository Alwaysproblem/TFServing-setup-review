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
// source: google/ads/googleads/v1/errors/ad_group_ad_error.proto

package errors

import (
	reflect "reflect"
	sync "sync"

	proto "github.com/golang/protobuf/proto"
	_ "google.golang.org/genproto/googleapis/api/annotations"
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

// Enum describing possible ad group ad errors.
type AdGroupAdErrorEnum_AdGroupAdError int32

const (
	// Enum unspecified.
	AdGroupAdErrorEnum_UNSPECIFIED AdGroupAdErrorEnum_AdGroupAdError = 0
	// The received error code is not known in this version.
	AdGroupAdErrorEnum_UNKNOWN AdGroupAdErrorEnum_AdGroupAdError = 1
	// No link found between the adgroup ad and the label.
	AdGroupAdErrorEnum_AD_GROUP_AD_LABEL_DOES_NOT_EXIST AdGroupAdErrorEnum_AdGroupAdError = 2
	// The label has already been attached to the adgroup ad.
	AdGroupAdErrorEnum_AD_GROUP_AD_LABEL_ALREADY_EXISTS AdGroupAdErrorEnum_AdGroupAdError = 3
	// The specified ad was not found in the adgroup
	AdGroupAdErrorEnum_AD_NOT_UNDER_ADGROUP AdGroupAdErrorEnum_AdGroupAdError = 4
	// Removed ads may not be modified
	AdGroupAdErrorEnum_CANNOT_OPERATE_ON_REMOVED_ADGROUPAD AdGroupAdErrorEnum_AdGroupAdError = 5
	// An ad of this type is deprecated and cannot be created. Only deletions
	// are permitted.
	AdGroupAdErrorEnum_CANNOT_CREATE_DEPRECATED_ADS AdGroupAdErrorEnum_AdGroupAdError = 6
	// Text ads are deprecated and cannot be created. Use expanded text ads
	// instead.
	AdGroupAdErrorEnum_CANNOT_CREATE_TEXT_ADS AdGroupAdErrorEnum_AdGroupAdError = 7
	// A required field was not specified or is an empty string.
	AdGroupAdErrorEnum_EMPTY_FIELD AdGroupAdErrorEnum_AdGroupAdError = 8
	// An ad may only be modified once per call
	AdGroupAdErrorEnum_RESOURCE_REFERENCED_IN_MULTIPLE_OPS AdGroupAdErrorEnum_AdGroupAdError = 9
)

// Enum value maps for AdGroupAdErrorEnum_AdGroupAdError.
var (
	AdGroupAdErrorEnum_AdGroupAdError_name = map[int32]string{
		0: "UNSPECIFIED",
		1: "UNKNOWN",
		2: "AD_GROUP_AD_LABEL_DOES_NOT_EXIST",
		3: "AD_GROUP_AD_LABEL_ALREADY_EXISTS",
		4: "AD_NOT_UNDER_ADGROUP",
		5: "CANNOT_OPERATE_ON_REMOVED_ADGROUPAD",
		6: "CANNOT_CREATE_DEPRECATED_ADS",
		7: "CANNOT_CREATE_TEXT_ADS",
		8: "EMPTY_FIELD",
		9: "RESOURCE_REFERENCED_IN_MULTIPLE_OPS",
	}
	AdGroupAdErrorEnum_AdGroupAdError_value = map[string]int32{
		"UNSPECIFIED":                         0,
		"UNKNOWN":                             1,
		"AD_GROUP_AD_LABEL_DOES_NOT_EXIST":    2,
		"AD_GROUP_AD_LABEL_ALREADY_EXISTS":    3,
		"AD_NOT_UNDER_ADGROUP":                4,
		"CANNOT_OPERATE_ON_REMOVED_ADGROUPAD": 5,
		"CANNOT_CREATE_DEPRECATED_ADS":        6,
		"CANNOT_CREATE_TEXT_ADS":              7,
		"EMPTY_FIELD":                         8,
		"RESOURCE_REFERENCED_IN_MULTIPLE_OPS": 9,
	}
)

func (x AdGroupAdErrorEnum_AdGroupAdError) Enum() *AdGroupAdErrorEnum_AdGroupAdError {
	p := new(AdGroupAdErrorEnum_AdGroupAdError)
	*p = x
	return p
}

func (x AdGroupAdErrorEnum_AdGroupAdError) String() string {
	return protoimpl.X.EnumStringOf(x.Descriptor(), protoreflect.EnumNumber(x))
}

func (AdGroupAdErrorEnum_AdGroupAdError) Descriptor() protoreflect.EnumDescriptor {
	return file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_enumTypes[0].Descriptor()
}

func (AdGroupAdErrorEnum_AdGroupAdError) Type() protoreflect.EnumType {
	return &file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_enumTypes[0]
}

func (x AdGroupAdErrorEnum_AdGroupAdError) Number() protoreflect.EnumNumber {
	return protoreflect.EnumNumber(x)
}

// Deprecated: Use AdGroupAdErrorEnum_AdGroupAdError.Descriptor instead.
func (AdGroupAdErrorEnum_AdGroupAdError) EnumDescriptor() ([]byte, []int) {
	return file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_rawDescGZIP(), []int{0, 0}
}

// Container for enum describing possible ad group ad errors.
type AdGroupAdErrorEnum struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields
}

func (x *AdGroupAdErrorEnum) Reset() {
	*x = AdGroupAdErrorEnum{}
	if protoimpl.UnsafeEnabled {
		mi := &file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *AdGroupAdErrorEnum) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*AdGroupAdErrorEnum) ProtoMessage() {}

func (x *AdGroupAdErrorEnum) ProtoReflect() protoreflect.Message {
	mi := &file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use AdGroupAdErrorEnum.ProtoReflect.Descriptor instead.
func (*AdGroupAdErrorEnum) Descriptor() ([]byte, []int) {
	return file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_rawDescGZIP(), []int{0}
}

var File_google_ads_googleads_v1_errors_ad_group_ad_error_proto protoreflect.FileDescriptor

var file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_rawDesc = []byte{
	0x0a, 0x36, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2f, 0x61, 0x64, 0x73, 0x2f, 0x67, 0x6f, 0x6f,
	0x67, 0x6c, 0x65, 0x61, 0x64, 0x73, 0x2f, 0x76, 0x31, 0x2f, 0x65, 0x72, 0x72, 0x6f, 0x72, 0x73,
	0x2f, 0x61, 0x64, 0x5f, 0x67, 0x72, 0x6f, 0x75, 0x70, 0x5f, 0x61, 0x64, 0x5f, 0x65, 0x72, 0x72,
	0x6f, 0x72, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x12, 0x1e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65,
	0x2e, 0x61, 0x64, 0x73, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x61, 0x64, 0x73, 0x2e, 0x76,
	0x31, 0x2e, 0x65, 0x72, 0x72, 0x6f, 0x72, 0x73, 0x1a, 0x1c, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65,
	0x2f, 0x61, 0x70, 0x69, 0x2f, 0x61, 0x6e, 0x6e, 0x6f, 0x74, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x73,
	0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x22, 0xcc, 0x02, 0x0a, 0x12, 0x41, 0x64, 0x47, 0x72, 0x6f,
	0x75, 0x70, 0x41, 0x64, 0x45, 0x72, 0x72, 0x6f, 0x72, 0x45, 0x6e, 0x75, 0x6d, 0x22, 0xb5, 0x02,
	0x0a, 0x0e, 0x41, 0x64, 0x47, 0x72, 0x6f, 0x75, 0x70, 0x41, 0x64, 0x45, 0x72, 0x72, 0x6f, 0x72,
	0x12, 0x0f, 0x0a, 0x0b, 0x55, 0x4e, 0x53, 0x50, 0x45, 0x43, 0x49, 0x46, 0x49, 0x45, 0x44, 0x10,
	0x00, 0x12, 0x0b, 0x0a, 0x07, 0x55, 0x4e, 0x4b, 0x4e, 0x4f, 0x57, 0x4e, 0x10, 0x01, 0x12, 0x24,
	0x0a, 0x20, 0x41, 0x44, 0x5f, 0x47, 0x52, 0x4f, 0x55, 0x50, 0x5f, 0x41, 0x44, 0x5f, 0x4c, 0x41,
	0x42, 0x45, 0x4c, 0x5f, 0x44, 0x4f, 0x45, 0x53, 0x5f, 0x4e, 0x4f, 0x54, 0x5f, 0x45, 0x58, 0x49,
	0x53, 0x54, 0x10, 0x02, 0x12, 0x24, 0x0a, 0x20, 0x41, 0x44, 0x5f, 0x47, 0x52, 0x4f, 0x55, 0x50,
	0x5f, 0x41, 0x44, 0x5f, 0x4c, 0x41, 0x42, 0x45, 0x4c, 0x5f, 0x41, 0x4c, 0x52, 0x45, 0x41, 0x44,
	0x59, 0x5f, 0x45, 0x58, 0x49, 0x53, 0x54, 0x53, 0x10, 0x03, 0x12, 0x18, 0x0a, 0x14, 0x41, 0x44,
	0x5f, 0x4e, 0x4f, 0x54, 0x5f, 0x55, 0x4e, 0x44, 0x45, 0x52, 0x5f, 0x41, 0x44, 0x47, 0x52, 0x4f,
	0x55, 0x50, 0x10, 0x04, 0x12, 0x27, 0x0a, 0x23, 0x43, 0x41, 0x4e, 0x4e, 0x4f, 0x54, 0x5f, 0x4f,
	0x50, 0x45, 0x52, 0x41, 0x54, 0x45, 0x5f, 0x4f, 0x4e, 0x5f, 0x52, 0x45, 0x4d, 0x4f, 0x56, 0x45,
	0x44, 0x5f, 0x41, 0x44, 0x47, 0x52, 0x4f, 0x55, 0x50, 0x41, 0x44, 0x10, 0x05, 0x12, 0x20, 0x0a,
	0x1c, 0x43, 0x41, 0x4e, 0x4e, 0x4f, 0x54, 0x5f, 0x43, 0x52, 0x45, 0x41, 0x54, 0x45, 0x5f, 0x44,
	0x45, 0x50, 0x52, 0x45, 0x43, 0x41, 0x54, 0x45, 0x44, 0x5f, 0x41, 0x44, 0x53, 0x10, 0x06, 0x12,
	0x1a, 0x0a, 0x16, 0x43, 0x41, 0x4e, 0x4e, 0x4f, 0x54, 0x5f, 0x43, 0x52, 0x45, 0x41, 0x54, 0x45,
	0x5f, 0x54, 0x45, 0x58, 0x54, 0x5f, 0x41, 0x44, 0x53, 0x10, 0x07, 0x12, 0x0f, 0x0a, 0x0b, 0x45,
	0x4d, 0x50, 0x54, 0x59, 0x5f, 0x46, 0x49, 0x45, 0x4c, 0x44, 0x10, 0x08, 0x12, 0x27, 0x0a, 0x23,
	0x52, 0x45, 0x53, 0x4f, 0x55, 0x52, 0x43, 0x45, 0x5f, 0x52, 0x45, 0x46, 0x45, 0x52, 0x45, 0x4e,
	0x43, 0x45, 0x44, 0x5f, 0x49, 0x4e, 0x5f, 0x4d, 0x55, 0x4c, 0x54, 0x49, 0x50, 0x4c, 0x45, 0x5f,
	0x4f, 0x50, 0x53, 0x10, 0x09, 0x42, 0xee, 0x01, 0x0a, 0x22, 0x63, 0x6f, 0x6d, 0x2e, 0x67, 0x6f,
	0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x61, 0x64, 0x73, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x61,
	0x64, 0x73, 0x2e, 0x76, 0x31, 0x2e, 0x65, 0x72, 0x72, 0x6f, 0x72, 0x73, 0x42, 0x13, 0x41, 0x64,
	0x47, 0x72, 0x6f, 0x75, 0x70, 0x41, 0x64, 0x45, 0x72, 0x72, 0x6f, 0x72, 0x50, 0x72, 0x6f, 0x74,
	0x6f, 0x50, 0x01, 0x5a, 0x44, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x67, 0x6f, 0x6c, 0x61,
	0x6e, 0x67, 0x2e, 0x6f, 0x72, 0x67, 0x2f, 0x67, 0x65, 0x6e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x2f,
	0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x61, 0x70, 0x69, 0x73, 0x2f, 0x61, 0x64, 0x73, 0x2f, 0x67,
	0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x61, 0x64, 0x73, 0x2f, 0x76, 0x31, 0x2f, 0x65, 0x72, 0x72, 0x6f,
	0x72, 0x73, 0x3b, 0x65, 0x72, 0x72, 0x6f, 0x72, 0x73, 0xa2, 0x02, 0x03, 0x47, 0x41, 0x41, 0xaa,
	0x02, 0x1e, 0x47, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x41, 0x64, 0x73, 0x2e, 0x47, 0x6f, 0x6f,
	0x67, 0x6c, 0x65, 0x41, 0x64, 0x73, 0x2e, 0x56, 0x31, 0x2e, 0x45, 0x72, 0x72, 0x6f, 0x72, 0x73,
	0xca, 0x02, 0x1e, 0x47, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x5c, 0x41, 0x64, 0x73, 0x5c, 0x47, 0x6f,
	0x6f, 0x67, 0x6c, 0x65, 0x41, 0x64, 0x73, 0x5c, 0x56, 0x31, 0x5c, 0x45, 0x72, 0x72, 0x6f, 0x72,
	0x73, 0xea, 0x02, 0x22, 0x47, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x3a, 0x3a, 0x41, 0x64, 0x73, 0x3a,
	0x3a, 0x47, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x41, 0x64, 0x73, 0x3a, 0x3a, 0x56, 0x31, 0x3a, 0x3a,
	0x45, 0x72, 0x72, 0x6f, 0x72, 0x73, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_rawDescOnce sync.Once
	file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_rawDescData = file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_rawDesc
)

func file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_rawDescGZIP() []byte {
	file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_rawDescOnce.Do(func() {
		file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_rawDescData = protoimpl.X.CompressGZIP(file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_rawDescData)
	})
	return file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_rawDescData
}

var file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_enumTypes = make([]protoimpl.EnumInfo, 1)
var file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_msgTypes = make([]protoimpl.MessageInfo, 1)
var file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_goTypes = []interface{}{
	(AdGroupAdErrorEnum_AdGroupAdError)(0), // 0: google.ads.googleads.v1.errors.AdGroupAdErrorEnum.AdGroupAdError
	(*AdGroupAdErrorEnum)(nil),             // 1: google.ads.googleads.v1.errors.AdGroupAdErrorEnum
}
var file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_depIdxs = []int32{
	0, // [0:0] is the sub-list for method output_type
	0, // [0:0] is the sub-list for method input_type
	0, // [0:0] is the sub-list for extension type_name
	0, // [0:0] is the sub-list for extension extendee
	0, // [0:0] is the sub-list for field type_name
}

func init() { file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_init() }
func file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_init() {
	if File_google_ads_googleads_v1_errors_ad_group_ad_error_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*AdGroupAdErrorEnum); i {
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
			RawDescriptor: file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_rawDesc,
			NumEnums:      1,
			NumMessages:   1,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_goTypes,
		DependencyIndexes: file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_depIdxs,
		EnumInfos:         file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_enumTypes,
		MessageInfos:      file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_msgTypes,
	}.Build()
	File_google_ads_googleads_v1_errors_ad_group_ad_error_proto = out.File
	file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_rawDesc = nil
	file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_goTypes = nil
	file_google_ads_googleads_v1_errors_ad_group_ad_error_proto_depIdxs = nil
}
