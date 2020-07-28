// Code generated by protoc-gen-go. DO NOT EDIT.
// source: types.proto

package tensorflow

import (
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	math "math"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion3 // please upgrade the proto package

// LINT.IfChange
type DataType int32

const (
	// Not a legal value for DataType.  Used to indicate a DataType field
	// has not been set.
	DataType_DT_INVALID DataType = 0
	// Data types that all computation devices are expected to be
	// capable to support.
	DataType_DT_FLOAT      DataType = 1
	DataType_DT_DOUBLE     DataType = 2
	DataType_DT_INT32      DataType = 3
	DataType_DT_UINT8      DataType = 4
	DataType_DT_INT16      DataType = 5
	DataType_DT_INT8       DataType = 6
	DataType_DT_STRING     DataType = 7
	DataType_DT_COMPLEX64  DataType = 8
	DataType_DT_INT64      DataType = 9
	DataType_DT_BOOL       DataType = 10
	DataType_DT_QINT8      DataType = 11
	DataType_DT_QUINT8     DataType = 12
	DataType_DT_QINT32     DataType = 13
	DataType_DT_BFLOAT16   DataType = 14
	DataType_DT_QINT16     DataType = 15
	DataType_DT_QUINT16    DataType = 16
	DataType_DT_UINT16     DataType = 17
	DataType_DT_COMPLEX128 DataType = 18
	DataType_DT_HALF       DataType = 19
	DataType_DT_RESOURCE   DataType = 20
	DataType_DT_VARIANT    DataType = 21
	DataType_DT_UINT32     DataType = 22
	DataType_DT_UINT64     DataType = 23
	// Do not use!  These are only for parameters.  Every enum above
	// should have a corresponding value below (verified by types_test).
	DataType_DT_FLOAT_REF      DataType = 101
	DataType_DT_DOUBLE_REF     DataType = 102
	DataType_DT_INT32_REF      DataType = 103
	DataType_DT_UINT8_REF      DataType = 104
	DataType_DT_INT16_REF      DataType = 105
	DataType_DT_INT8_REF       DataType = 106
	DataType_DT_STRING_REF     DataType = 107
	DataType_DT_COMPLEX64_REF  DataType = 108
	DataType_DT_INT64_REF      DataType = 109
	DataType_DT_BOOL_REF       DataType = 110
	DataType_DT_QINT8_REF      DataType = 111
	DataType_DT_QUINT8_REF     DataType = 112
	DataType_DT_QINT32_REF     DataType = 113
	DataType_DT_BFLOAT16_REF   DataType = 114
	DataType_DT_QINT16_REF     DataType = 115
	DataType_DT_QUINT16_REF    DataType = 116
	DataType_DT_UINT16_REF     DataType = 117
	DataType_DT_COMPLEX128_REF DataType = 118
	DataType_DT_HALF_REF       DataType = 119
	DataType_DT_RESOURCE_REF   DataType = 120
	DataType_DT_VARIANT_REF    DataType = 121
	DataType_DT_UINT32_REF     DataType = 122
	DataType_DT_UINT64_REF     DataType = 123
)

var DataType_name = map[int32]string{
	0:   "DT_INVALID",
	1:   "DT_FLOAT",
	2:   "DT_DOUBLE",
	3:   "DT_INT32",
	4:   "DT_UINT8",
	5:   "DT_INT16",
	6:   "DT_INT8",
	7:   "DT_STRING",
	8:   "DT_COMPLEX64",
	9:   "DT_INT64",
	10:  "DT_BOOL",
	11:  "DT_QINT8",
	12:  "DT_QUINT8",
	13:  "DT_QINT32",
	14:  "DT_BFLOAT16",
	15:  "DT_QINT16",
	16:  "DT_QUINT16",
	17:  "DT_UINT16",
	18:  "DT_COMPLEX128",
	19:  "DT_HALF",
	20:  "DT_RESOURCE",
	21:  "DT_VARIANT",
	22:  "DT_UINT32",
	23:  "DT_UINT64",
	101: "DT_FLOAT_REF",
	102: "DT_DOUBLE_REF",
	103: "DT_INT32_REF",
	104: "DT_UINT8_REF",
	105: "DT_INT16_REF",
	106: "DT_INT8_REF",
	107: "DT_STRING_REF",
	108: "DT_COMPLEX64_REF",
	109: "DT_INT64_REF",
	110: "DT_BOOL_REF",
	111: "DT_QINT8_REF",
	112: "DT_QUINT8_REF",
	113: "DT_QINT32_REF",
	114: "DT_BFLOAT16_REF",
	115: "DT_QINT16_REF",
	116: "DT_QUINT16_REF",
	117: "DT_UINT16_REF",
	118: "DT_COMPLEX128_REF",
	119: "DT_HALF_REF",
	120: "DT_RESOURCE_REF",
	121: "DT_VARIANT_REF",
	122: "DT_UINT32_REF",
	123: "DT_UINT64_REF",
}

var DataType_value = map[string]int32{
	"DT_INVALID":        0,
	"DT_FLOAT":          1,
	"DT_DOUBLE":         2,
	"DT_INT32":          3,
	"DT_UINT8":          4,
	"DT_INT16":          5,
	"DT_INT8":           6,
	"DT_STRING":         7,
	"DT_COMPLEX64":      8,
	"DT_INT64":          9,
	"DT_BOOL":           10,
	"DT_QINT8":          11,
	"DT_QUINT8":         12,
	"DT_QINT32":         13,
	"DT_BFLOAT16":       14,
	"DT_QINT16":         15,
	"DT_QUINT16":        16,
	"DT_UINT16":         17,
	"DT_COMPLEX128":     18,
	"DT_HALF":           19,
	"DT_RESOURCE":       20,
	"DT_VARIANT":        21,
	"DT_UINT32":         22,
	"DT_UINT64":         23,
	"DT_FLOAT_REF":      101,
	"DT_DOUBLE_REF":     102,
	"DT_INT32_REF":      103,
	"DT_UINT8_REF":      104,
	"DT_INT16_REF":      105,
	"DT_INT8_REF":       106,
	"DT_STRING_REF":     107,
	"DT_COMPLEX64_REF":  108,
	"DT_INT64_REF":      109,
	"DT_BOOL_REF":       110,
	"DT_QINT8_REF":      111,
	"DT_QUINT8_REF":     112,
	"DT_QINT32_REF":     113,
	"DT_BFLOAT16_REF":   114,
	"DT_QINT16_REF":     115,
	"DT_QUINT16_REF":    116,
	"DT_UINT16_REF":     117,
	"DT_COMPLEX128_REF": 118,
	"DT_HALF_REF":       119,
	"DT_RESOURCE_REF":   120,
	"DT_VARIANT_REF":    121,
	"DT_UINT32_REF":     122,
	"DT_UINT64_REF":     123,
}

func (x DataType) String() string {
	return proto.EnumName(DataType_name, int32(x))
}

func (DataType) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_d938547f84707355, []int{0}
}

func init() {
	proto.RegisterEnum("tensorflow.DataType", DataType_name, DataType_value)
}

func init() { proto.RegisterFile("types.proto", fileDescriptor_d938547f84707355) }

var fileDescriptor_d938547f84707355 = []byte{
	// 410 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x54, 0x93, 0xdb, 0x8e, 0xda, 0x40,
	0x0c, 0x86, 0x7b, 0x64, 0x59, 0x87, 0x83, 0x99, 0x5d, 0xda, 0x77, 0xe8, 0x45, 0xa5, 0x00, 0x1a,
	0x71, 0x1b, 0x48, 0x68, 0x23, 0xa5, 0x99, 0x26, 0x0c, 0xa8, 0x77, 0x11, 0x95, 0x42, 0x4f, 0x94,
	0xa4, 0x90, 0x96, 0xd2, 0xbe, 0x51, 0x9f, 0xb2, 0xc2, 0x71, 0x98, 0xd9, 0x4b, 0x7f, 0xb6, 0x7f,
	0xff, 0x63, 0x6b, 0xc0, 0xa9, 0xce, 0x65, 0x7e, 0x7c, 0x5d, 0x1e, 0x8a, 0xaa, 0x10, 0x50, 0xe5,
	0xfb, 0x63, 0x71, 0xd8, 0xee, 0x8a, 0xd3, 0xab, 0x7f, 0x2d, 0x68, 0xfb, 0x9b, 0x6a, 0xa3, 0xcf,
	0x65, 0x2e, 0x7a, 0x00, 0xbe, 0xce, 0xc2, 0x78, 0xed, 0x45, 0xa1, 0x8f, 0x8f, 0x44, 0x07, 0xda,
	0xbe, 0xce, 0x16, 0x91, 0xf2, 0x34, 0x3e, 0x16, 0x5d, 0xb8, 0xf5, 0x75, 0xe6, 0xab, 0xd5, 0x2c,
	0x0a, 0xf0, 0x09, 0x27, 0xc3, 0x58, 0x8f, 0x47, 0xf8, 0x94, 0xa3, 0x55, 0x18, 0xeb, 0x29, 0x3e,
	0x33, 0x39, 0x57, 0xe2, 0x73, 0xe1, 0xc0, 0x4d, 0x1d, 0x4d, 0xb1, 0xc5, 0x2a, 0x4b, 0x9d, 0x86,
	0xf1, 0x1b, 0xbc, 0x11, 0x08, 0x1d, 0x5f, 0x67, 0x73, 0xf5, 0xee, 0x7d, 0x14, 0x7c, 0x90, 0x13,
	0x6c, 0x9b, 0x5e, 0x39, 0xc1, 0x5b, 0xee, 0x9d, 0x29, 0x15, 0x21, 0x70, 0x2a, 0x21, 0x25, 0x87,
	0x95, 0x92, 0x7a, 0x66, 0xa7, 0x09, 0x6b, 0x43, 0x5d, 0xd1, 0x07, 0xe7, 0xd2, 0x48, 0xe6, 0x5d,
	0x89, 0x3d, 0x2b, 0xef, 0x4a, 0xec, 0xf3, 0x5b, 0xa9, 0xdb, 0x95, 0x88, 0x9c, 0xe6, 0x70, 0x20,
	0x06, 0xd0, 0x35, 0xbe, 0xdc, 0xd1, 0x14, 0x05, 0x5b, 0x79, 0xeb, 0x45, 0x0b, 0xbc, 0x63, 0xf9,
	0x34, 0x58, 0xaa, 0x55, 0x3a, 0x0f, 0xf0, 0x9e, 0xf5, 0xd6, 0x5e, 0x1a, 0x7a, 0xb1, 0xc6, 0xa1,
	0xa5, 0x37, 0x1e, 0xe1, 0x0b, 0x2b, 0x94, 0x13, 0x7c, 0xc9, 0xcf, 0x26, 0x73, 0x59, 0x1a, 0x2c,
	0x30, 0xe7, 0x81, 0xf5, 0x76, 0x09, 0x6d, 0xb9, 0x88, 0x14, 0x88, 0x7c, 0x62, 0x42, 0x2f, 0x26,
	0xf2, 0xd9, 0xd4, 0xb8, 0x92, 0xc8, 0x17, 0x76, 0x76, 0x2d, 0xf9, 0xca, 0xca, 0xf5, 0xc6, 0x09,
	0x7d, 0x13, 0xf7, 0x80, 0xf6, 0xd6, 0x89, 0xee, 0x8c, 0x16, 0x93, 0xef, 0xcd, 0x12, 0x95, 0x8a,
	0x08, 0xec, 0xb9, 0x24, 0xb9, 0xaa, 0x17, 0xac, 0x9e, 0x18, 0x4f, 0x65, 0x83, 0x8c, 0xf1, 0x1f,
	0xe2, 0x0e, 0xfa, 0xd6, 0x35, 0x08, 0x1e, 0xac, 0x3a, 0x46, 0x47, 0x21, 0xa0, 0x67, 0xae, 0x42,
	0xac, 0xe2, 0x32, 0x0b, 0xfd, 0x14, 0x43, 0x18, 0x3c, 0xb8, 0x0e, 0xe1, 0x5f, 0x6c, 0xf7, 0x72,
	0x21, 0x02, 0x27, 0x1e, 0xdb, 0x5c, 0x89, 0xe0, 0x6f, 0x9e, 0xc1, 0x97, 0x22, 0x76, 0xb6, 0x66,
	0xb0, 0xe5, 0x3f, 0x16, 0xe2, 0x75, 0xfc, 0xfd, 0xd8, 0xa2, 0xff, 0x33, 0xfe, 0x1f, 0x00, 0x00,
	0xff, 0xff, 0xad, 0xd1, 0xfd, 0x03, 0x4e, 0x03, 0x00, 0x00,
}
