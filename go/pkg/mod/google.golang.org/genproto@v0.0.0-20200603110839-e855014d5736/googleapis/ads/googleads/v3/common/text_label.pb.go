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
// source: google/ads/googleads/v3/common/text_label.proto

package common

import (
	reflect "reflect"
	sync "sync"

	proto "github.com/golang/protobuf/proto"
	wrappers "github.com/golang/protobuf/ptypes/wrappers"
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

// A type of label displaying text on a colored background.
type TextLabel struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// Background color of the label in RGB format. This string must match the
	// regular expression '^\#([a-fA-F0-9]{6}|[a-fA-F0-9]{3})$'.
	// Note: The background color may not be visible for manager accounts.
	BackgroundColor *wrappers.StringValue `protobuf:"bytes,1,opt,name=background_color,json=backgroundColor,proto3" json:"background_color,omitempty"`
	// A short description of the label. The length must be no more than 200
	// characters.
	Description *wrappers.StringValue `protobuf:"bytes,2,opt,name=description,proto3" json:"description,omitempty"`
}

func (x *TextLabel) Reset() {
	*x = TextLabel{}
	if protoimpl.UnsafeEnabled {
		mi := &file_google_ads_googleads_v3_common_text_label_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *TextLabel) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*TextLabel) ProtoMessage() {}

func (x *TextLabel) ProtoReflect() protoreflect.Message {
	mi := &file_google_ads_googleads_v3_common_text_label_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use TextLabel.ProtoReflect.Descriptor instead.
func (*TextLabel) Descriptor() ([]byte, []int) {
	return file_google_ads_googleads_v3_common_text_label_proto_rawDescGZIP(), []int{0}
}

func (x *TextLabel) GetBackgroundColor() *wrappers.StringValue {
	if x != nil {
		return x.BackgroundColor
	}
	return nil
}

func (x *TextLabel) GetDescription() *wrappers.StringValue {
	if x != nil {
		return x.Description
	}
	return nil
}

var File_google_ads_googleads_v3_common_text_label_proto protoreflect.FileDescriptor

var file_google_ads_googleads_v3_common_text_label_proto_rawDesc = []byte{
	0x0a, 0x2f, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2f, 0x61, 0x64, 0x73, 0x2f, 0x67, 0x6f, 0x6f,
	0x67, 0x6c, 0x65, 0x61, 0x64, 0x73, 0x2f, 0x76, 0x33, 0x2f, 0x63, 0x6f, 0x6d, 0x6d, 0x6f, 0x6e,
	0x2f, 0x74, 0x65, 0x78, 0x74, 0x5f, 0x6c, 0x61, 0x62, 0x65, 0x6c, 0x2e, 0x70, 0x72, 0x6f, 0x74,
	0x6f, 0x12, 0x1e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x61, 0x64, 0x73, 0x2e, 0x67, 0x6f,
	0x6f, 0x67, 0x6c, 0x65, 0x61, 0x64, 0x73, 0x2e, 0x76, 0x33, 0x2e, 0x63, 0x6f, 0x6d, 0x6d, 0x6f,
	0x6e, 0x1a, 0x1e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2f, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62,
	0x75, 0x66, 0x2f, 0x77, 0x72, 0x61, 0x70, 0x70, 0x65, 0x72, 0x73, 0x2e, 0x70, 0x72, 0x6f, 0x74,
	0x6f, 0x1a, 0x1c, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2f, 0x61, 0x70, 0x69, 0x2f, 0x61, 0x6e,
	0x6e, 0x6f, 0x74, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x22,
	0x94, 0x01, 0x0a, 0x09, 0x54, 0x65, 0x78, 0x74, 0x4c, 0x61, 0x62, 0x65, 0x6c, 0x12, 0x47, 0x0a,
	0x10, 0x62, 0x61, 0x63, 0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x5f, 0x63, 0x6f, 0x6c, 0x6f,
	0x72, 0x18, 0x01, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1c, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65,
	0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e, 0x53, 0x74, 0x72, 0x69, 0x6e, 0x67,
	0x56, 0x61, 0x6c, 0x75, 0x65, 0x52, 0x0f, 0x62, 0x61, 0x63, 0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e,
	0x64, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x12, 0x3e, 0x0a, 0x0b, 0x64, 0x65, 0x73, 0x63, 0x72, 0x69,
	0x70, 0x74, 0x69, 0x6f, 0x6e, 0x18, 0x02, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1c, 0x2e, 0x67, 0x6f,
	0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e, 0x53, 0x74,
	0x72, 0x69, 0x6e, 0x67, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x52, 0x0b, 0x64, 0x65, 0x73, 0x63, 0x72,
	0x69, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x42, 0xe9, 0x01, 0x0a, 0x22, 0x63, 0x6f, 0x6d, 0x2e, 0x67,
	0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x61, 0x64, 0x73, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65,
	0x61, 0x64, 0x73, 0x2e, 0x76, 0x33, 0x2e, 0x63, 0x6f, 0x6d, 0x6d, 0x6f, 0x6e, 0x42, 0x0e, 0x54,
	0x65, 0x78, 0x74, 0x4c, 0x61, 0x62, 0x65, 0x6c, 0x50, 0x72, 0x6f, 0x74, 0x6f, 0x50, 0x01, 0x5a,
	0x44, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x67, 0x6f, 0x6c, 0x61, 0x6e, 0x67, 0x2e, 0x6f,
	0x72, 0x67, 0x2f, 0x67, 0x65, 0x6e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x2f, 0x67, 0x6f, 0x6f, 0x67,
	0x6c, 0x65, 0x61, 0x70, 0x69, 0x73, 0x2f, 0x61, 0x64, 0x73, 0x2f, 0x67, 0x6f, 0x6f, 0x67, 0x6c,
	0x65, 0x61, 0x64, 0x73, 0x2f, 0x76, 0x33, 0x2f, 0x63, 0x6f, 0x6d, 0x6d, 0x6f, 0x6e, 0x3b, 0x63,
	0x6f, 0x6d, 0x6d, 0x6f, 0x6e, 0xa2, 0x02, 0x03, 0x47, 0x41, 0x41, 0xaa, 0x02, 0x1e, 0x47, 0x6f,
	0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x41, 0x64, 0x73, 0x2e, 0x47, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x41,
	0x64, 0x73, 0x2e, 0x56, 0x33, 0x2e, 0x43, 0x6f, 0x6d, 0x6d, 0x6f, 0x6e, 0xca, 0x02, 0x1e, 0x47,
	0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x5c, 0x41, 0x64, 0x73, 0x5c, 0x47, 0x6f, 0x6f, 0x67, 0x6c, 0x65,
	0x41, 0x64, 0x73, 0x5c, 0x56, 0x33, 0x5c, 0x43, 0x6f, 0x6d, 0x6d, 0x6f, 0x6e, 0xea, 0x02, 0x22,
	0x47, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x3a, 0x3a, 0x41, 0x64, 0x73, 0x3a, 0x3a, 0x47, 0x6f, 0x6f,
	0x67, 0x6c, 0x65, 0x41, 0x64, 0x73, 0x3a, 0x3a, 0x56, 0x33, 0x3a, 0x3a, 0x43, 0x6f, 0x6d, 0x6d,
	0x6f, 0x6e, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_google_ads_googleads_v3_common_text_label_proto_rawDescOnce sync.Once
	file_google_ads_googleads_v3_common_text_label_proto_rawDescData = file_google_ads_googleads_v3_common_text_label_proto_rawDesc
)

func file_google_ads_googleads_v3_common_text_label_proto_rawDescGZIP() []byte {
	file_google_ads_googleads_v3_common_text_label_proto_rawDescOnce.Do(func() {
		file_google_ads_googleads_v3_common_text_label_proto_rawDescData = protoimpl.X.CompressGZIP(file_google_ads_googleads_v3_common_text_label_proto_rawDescData)
	})
	return file_google_ads_googleads_v3_common_text_label_proto_rawDescData
}

var file_google_ads_googleads_v3_common_text_label_proto_msgTypes = make([]protoimpl.MessageInfo, 1)
var file_google_ads_googleads_v3_common_text_label_proto_goTypes = []interface{}{
	(*TextLabel)(nil),            // 0: google.ads.googleads.v3.common.TextLabel
	(*wrappers.StringValue)(nil), // 1: google.protobuf.StringValue
}
var file_google_ads_googleads_v3_common_text_label_proto_depIdxs = []int32{
	1, // 0: google.ads.googleads.v3.common.TextLabel.background_color:type_name -> google.protobuf.StringValue
	1, // 1: google.ads.googleads.v3.common.TextLabel.description:type_name -> google.protobuf.StringValue
	2, // [2:2] is the sub-list for method output_type
	2, // [2:2] is the sub-list for method input_type
	2, // [2:2] is the sub-list for extension type_name
	2, // [2:2] is the sub-list for extension extendee
	0, // [0:2] is the sub-list for field type_name
}

func init() { file_google_ads_googleads_v3_common_text_label_proto_init() }
func file_google_ads_googleads_v3_common_text_label_proto_init() {
	if File_google_ads_googleads_v3_common_text_label_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_google_ads_googleads_v3_common_text_label_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*TextLabel); i {
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
			RawDescriptor: file_google_ads_googleads_v3_common_text_label_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   1,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_google_ads_googleads_v3_common_text_label_proto_goTypes,
		DependencyIndexes: file_google_ads_googleads_v3_common_text_label_proto_depIdxs,
		MessageInfos:      file_google_ads_googleads_v3_common_text_label_proto_msgTypes,
	}.Build()
	File_google_ads_googleads_v3_common_text_label_proto = out.File
	file_google_ads_googleads_v3_common_text_label_proto_rawDesc = nil
	file_google_ads_googleads_v3_common_text_label_proto_goTypes = nil
	file_google_ads_googleads_v3_common_text_label_proto_depIdxs = nil
}