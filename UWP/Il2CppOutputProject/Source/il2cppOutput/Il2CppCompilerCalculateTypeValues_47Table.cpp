﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Text.Encoding
struct Encoding_t663144255;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t2022420531;
// System.Text.EncoderFallback
struct EncoderFallback_t1756452756;
// System.Text.DecoderFallback
struct DecoderFallback_t1715117820;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CMODULEU3E_T3783534275_H
#define U3CMODULEU3E_T3783534275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3783534275 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3783534275_H
#ifndef U3CMODULEU3E_T3783534274_H
#define U3CMODULEU3E_T3783534274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3783534274 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3783534274_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef ENCODING_T663144255_H
#define ENCODING_T663144255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t663144255  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t2022420531 * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t1756452756 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t1715117820 * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_t663144255, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_t663144255, ___dataItem_56)); }
	inline CodePageDataItem_t2022420531 * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t2022420531 ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t2022420531 * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((&___dataItem_56), value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_t663144255, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_t663144255, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_t663144255, ___encoderFallback_59)); }
	inline EncoderFallback_t1756452756 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_t1756452756 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_t1756452756 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((&___encoderFallback_59), value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_t663144255, ___decoderFallback_60)); }
	inline DecoderFallback_t1715117820 * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_t1715117820 ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_t1715117820 * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((&___decoderFallback_60), value);
	}
};

struct Encoding_t663144255_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t663144255 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t663144255 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t663144255 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t663144255 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t663144255 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t663144255 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t663144255 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t663144255 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t909839986 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t663144255_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t663144255 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t663144255 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t663144255 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_0), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t663144255_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t663144255 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t663144255 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t663144255 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_1), value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t663144255_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t663144255 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t663144255 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t663144255 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUnicode_2), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t663144255_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t663144255 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t663144255 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t663144255 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_3), value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t663144255_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t663144255 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t663144255 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t663144255 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___utf8Encoding_4), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t663144255_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t663144255 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t663144255 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t663144255 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_5), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t663144255_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t663144255 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t663144255 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t663144255 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_6), value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t663144255_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t663144255 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t663144255 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t663144255 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___latin1Encoding_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t663144255_StaticFields, ___encodings_8)); }
	inline Hashtable_t909839986 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t909839986 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t909839986 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_t663144255_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_61), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T663144255_H
#ifndef CONSTS_T2407773020_H
#define CONSTS_T2407773020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Consts
struct  Consts_t2407773020  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTS_T2407773020_H
#ifndef CONSTS_T2407773019_H
#define CONSTS_T2407773019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Consts
struct  Consts_t2407773019  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTS_T2407773019_H
#ifndef __STATICARRAYINITTYPESIZEU3D512_T2067141548_H
#define __STATICARRAYINITTYPESIZEU3D512_T2067141548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512
struct  __StaticArrayInitTypeSizeU3D512_t2067141548 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D512_t2067141548__padding[512];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D512_T2067141548_H
#ifndef __STATICARRAYINITTYPESIZEU3D512_T2067141547_H
#define __STATICARRAYINITTYPESIZEU3D512_T2067141547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512
struct  __StaticArrayInitTypeSizeU3D512_t2067141547 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D512_t2067141547__padding[512];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D512_T2067141547_H
#ifndef MONOENCODING_T2723633290_H
#define MONOENCODING_T2723633290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.MonoEncoding
struct  MonoEncoding_t2723633290  : public Encoding_t663144255
{
public:
	// System.Int32 I18N.Common.MonoEncoding::win_code_page
	int32_t ___win_code_page_62;

public:
	inline static int32_t get_offset_of_win_code_page_62() { return static_cast<int32_t>(offsetof(MonoEncoding_t2723633290, ___win_code_page_62)); }
	inline int32_t get_win_code_page_62() const { return ___win_code_page_62; }
	inline int32_t* get_address_of_win_code_page_62() { return &___win_code_page_62; }
	inline void set_win_code_page_62(int32_t value)
	{
		___win_code_page_62 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOENCODING_T2723633290_H
#ifndef ISCIIENCODING_T1858614900_H
#define ISCIIENCODING_T1858614900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ISCIIEncoding
struct  ISCIIEncoding_t1858614900  : public MonoEncoding_t2723633290
{
public:
	// System.Int32 I18N.Other.ISCIIEncoding::shift
	int32_t ___shift_63;
	// System.String I18N.Other.ISCIIEncoding::encodingName
	String_t* ___encodingName_64;
	// System.String I18N.Other.ISCIIEncoding::webName
	String_t* ___webName_65;

public:
	inline static int32_t get_offset_of_shift_63() { return static_cast<int32_t>(offsetof(ISCIIEncoding_t1858614900, ___shift_63)); }
	inline int32_t get_shift_63() const { return ___shift_63; }
	inline int32_t* get_address_of_shift_63() { return &___shift_63; }
	inline void set_shift_63(int32_t value)
	{
		___shift_63 = value;
	}

	inline static int32_t get_offset_of_encodingName_64() { return static_cast<int32_t>(offsetof(ISCIIEncoding_t1858614900, ___encodingName_64)); }
	inline String_t* get_encodingName_64() const { return ___encodingName_64; }
	inline String_t** get_address_of_encodingName_64() { return &___encodingName_64; }
	inline void set_encodingName_64(String_t* value)
	{
		___encodingName_64 = value;
		Il2CppCodeGenWriteBarrier((&___encodingName_64), value);
	}

	inline static int32_t get_offset_of_webName_65() { return static_cast<int32_t>(offsetof(ISCIIEncoding_t1858614900, ___webName_65)); }
	inline String_t* get_webName_65() const { return ___webName_65; }
	inline String_t** get_address_of_webName_65() { return &___webName_65; }
	inline void set_webName_65(String_t* value)
	{
		___webName_65 = value;
		Il2CppCodeGenWriteBarrier((&___webName_65), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISCIIENCODING_T1858614900_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305148_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t1486305148  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1486305148_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::017235096A41990D9488223C8E0D56E35B569736
	__StaticArrayInitTypeSizeU3D512_t2067141548  ___017235096A41990D9488223C8E0D56E35B569736_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8
	__StaticArrayInitTypeSizeU3D512_t2067141548  ___31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::33D1AC98C31DCCB9238C374D4D1386DB68A6A595
	__StaticArrayInitTypeSizeU3D512_t2067141548  ___33D1AC98C31DCCB9238C374D4D1386DB68A6A595_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404
	__StaticArrayInitTypeSizeU3D512_t2067141548  ___3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::C029709D232902A6A3808A15B7622DC2AEF16A24
	__StaticArrayInitTypeSizeU3D512_t2067141548  ___C029709D232902A6A3808A15B7622DC2AEF16A24_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41
	__StaticArrayInitTypeSizeU3D512_t2067141548  ___E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::FDC523733500E24FB60E5223DD9E396992267CD9
	__StaticArrayInitTypeSizeU3D512_t2067141548  ___FDC523733500E24FB60E5223DD9E396992267CD9_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680
	__StaticArrayInitTypeSizeU3D512_t2067141548  ___FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7;

public:
	inline static int32_t get_offset_of_U3017235096A41990D9488223C8E0D56E35B569736_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305148_StaticFields, ___017235096A41990D9488223C8E0D56E35B569736_0)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141548  get_U3017235096A41990D9488223C8E0D56E35B569736_0() const { return ___017235096A41990D9488223C8E0D56E35B569736_0; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141548 * get_address_of_U3017235096A41990D9488223C8E0D56E35B569736_0() { return &___017235096A41990D9488223C8E0D56E35B569736_0; }
	inline void set_U3017235096A41990D9488223C8E0D56E35B569736_0(__StaticArrayInitTypeSizeU3D512_t2067141548  value)
	{
		___017235096A41990D9488223C8E0D56E35B569736_0 = value;
	}

	inline static int32_t get_offset_of_U331D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305148_StaticFields, ___31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141548  get_U331D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1() const { return ___31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141548 * get_address_of_U331D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1() { return &___31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1; }
	inline void set_U331D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1(__StaticArrayInitTypeSizeU3D512_t2067141548  value)
	{
		___31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1 = value;
	}

	inline static int32_t get_offset_of_U333D1AC98C31DCCB9238C374D4D1386DB68A6A595_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305148_StaticFields, ___33D1AC98C31DCCB9238C374D4D1386DB68A6A595_2)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141548  get_U333D1AC98C31DCCB9238C374D4D1386DB68A6A595_2() const { return ___33D1AC98C31DCCB9238C374D4D1386DB68A6A595_2; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141548 * get_address_of_U333D1AC98C31DCCB9238C374D4D1386DB68A6A595_2() { return &___33D1AC98C31DCCB9238C374D4D1386DB68A6A595_2; }
	inline void set_U333D1AC98C31DCCB9238C374D4D1386DB68A6A595_2(__StaticArrayInitTypeSizeU3D512_t2067141548  value)
	{
		___33D1AC98C31DCCB9238C374D4D1386DB68A6A595_2 = value;
	}

	inline static int32_t get_offset_of_U33D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305148_StaticFields, ___3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141548  get_U33D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3() const { return ___3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141548 * get_address_of_U33D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3() { return &___3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3; }
	inline void set_U33D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3(__StaticArrayInitTypeSizeU3D512_t2067141548  value)
	{
		___3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3 = value;
	}

	inline static int32_t get_offset_of_C029709D232902A6A3808A15B7622DC2AEF16A24_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305148_StaticFields, ___C029709D232902A6A3808A15B7622DC2AEF16A24_4)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141548  get_C029709D232902A6A3808A15B7622DC2AEF16A24_4() const { return ___C029709D232902A6A3808A15B7622DC2AEF16A24_4; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141548 * get_address_of_C029709D232902A6A3808A15B7622DC2AEF16A24_4() { return &___C029709D232902A6A3808A15B7622DC2AEF16A24_4; }
	inline void set_C029709D232902A6A3808A15B7622DC2AEF16A24_4(__StaticArrayInitTypeSizeU3D512_t2067141548  value)
	{
		___C029709D232902A6A3808A15B7622DC2AEF16A24_4 = value;
	}

	inline static int32_t get_offset_of_E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305148_StaticFields, ___E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141548  get_E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5() const { return ___E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141548 * get_address_of_E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5() { return &___E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5; }
	inline void set_E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5(__StaticArrayInitTypeSizeU3D512_t2067141548  value)
	{
		___E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5 = value;
	}

	inline static int32_t get_offset_of_FDC523733500E24FB60E5223DD9E396992267CD9_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305148_StaticFields, ___FDC523733500E24FB60E5223DD9E396992267CD9_6)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141548  get_FDC523733500E24FB60E5223DD9E396992267CD9_6() const { return ___FDC523733500E24FB60E5223DD9E396992267CD9_6; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141548 * get_address_of_FDC523733500E24FB60E5223DD9E396992267CD9_6() { return &___FDC523733500E24FB60E5223DD9E396992267CD9_6; }
	inline void set_FDC523733500E24FB60E5223DD9E396992267CD9_6(__StaticArrayInitTypeSizeU3D512_t2067141548  value)
	{
		___FDC523733500E24FB60E5223DD9E396992267CD9_6 = value;
	}

	inline static int32_t get_offset_of_FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305148_StaticFields, ___FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141548  get_FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7() const { return ___FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141548 * get_address_of_FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7() { return &___FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7; }
	inline void set_FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7(__StaticArrayInitTypeSizeU3D512_t2067141548  value)
	{
		___FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305148_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305147_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t1486305147  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::4AF7BA1E7B8627A4446E9F0228609B2B17E796E8
	__StaticArrayInitTypeSizeU3D512_t2067141547  ___4AF7BA1E7B8627A4446E9F0228609B2B17E796E8_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::74148F1C30278A0E570B644C79F8105880AB7A38
	__StaticArrayInitTypeSizeU3D512_t2067141547  ___74148F1C30278A0E570B644C79F8105880AB7A38_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::BC0DA014C1303FECC224A7C4E480135AA0C9865E
	__StaticArrayInitTypeSizeU3D512_t2067141547  ___BC0DA014C1303FECC224A7C4E480135AA0C9865E_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::CAAB02FE47C96822E85FB0C201A9DFCC068F499D
	__StaticArrayInitTypeSizeU3D512_t2067141547  ___CAAB02FE47C96822E85FB0C201A9DFCC068F499D_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::EABE24386AED2477AAC84953961558F9B3C45F61
	__StaticArrayInitTypeSizeU3D512_t2067141547  ___EABE24386AED2477AAC84953961558F9B3C45F61_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::FE3F4675AB322AF0F73F5B07BBEE00588E6ECD28
	__StaticArrayInitTypeSizeU3D512_t2067141547  ___FE3F4675AB322AF0F73F5B07BBEE00588E6ECD28_5;

public:
	inline static int32_t get_offset_of_U34AF7BA1E7B8627A4446E9F0228609B2B17E796E8_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___4AF7BA1E7B8627A4446E9F0228609B2B17E796E8_0)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141547  get_U34AF7BA1E7B8627A4446E9F0228609B2B17E796E8_0() const { return ___4AF7BA1E7B8627A4446E9F0228609B2B17E796E8_0; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141547 * get_address_of_U34AF7BA1E7B8627A4446E9F0228609B2B17E796E8_0() { return &___4AF7BA1E7B8627A4446E9F0228609B2B17E796E8_0; }
	inline void set_U34AF7BA1E7B8627A4446E9F0228609B2B17E796E8_0(__StaticArrayInitTypeSizeU3D512_t2067141547  value)
	{
		___4AF7BA1E7B8627A4446E9F0228609B2B17E796E8_0 = value;
	}

	inline static int32_t get_offset_of_U374148F1C30278A0E570B644C79F8105880AB7A38_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___74148F1C30278A0E570B644C79F8105880AB7A38_1)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141547  get_U374148F1C30278A0E570B644C79F8105880AB7A38_1() const { return ___74148F1C30278A0E570B644C79F8105880AB7A38_1; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141547 * get_address_of_U374148F1C30278A0E570B644C79F8105880AB7A38_1() { return &___74148F1C30278A0E570B644C79F8105880AB7A38_1; }
	inline void set_U374148F1C30278A0E570B644C79F8105880AB7A38_1(__StaticArrayInitTypeSizeU3D512_t2067141547  value)
	{
		___74148F1C30278A0E570B644C79F8105880AB7A38_1 = value;
	}

	inline static int32_t get_offset_of_BC0DA014C1303FECC224A7C4E480135AA0C9865E_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___BC0DA014C1303FECC224A7C4E480135AA0C9865E_2)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141547  get_BC0DA014C1303FECC224A7C4E480135AA0C9865E_2() const { return ___BC0DA014C1303FECC224A7C4E480135AA0C9865E_2; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141547 * get_address_of_BC0DA014C1303FECC224A7C4E480135AA0C9865E_2() { return &___BC0DA014C1303FECC224A7C4E480135AA0C9865E_2; }
	inline void set_BC0DA014C1303FECC224A7C4E480135AA0C9865E_2(__StaticArrayInitTypeSizeU3D512_t2067141547  value)
	{
		___BC0DA014C1303FECC224A7C4E480135AA0C9865E_2 = value;
	}

	inline static int32_t get_offset_of_CAAB02FE47C96822E85FB0C201A9DFCC068F499D_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___CAAB02FE47C96822E85FB0C201A9DFCC068F499D_3)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141547  get_CAAB02FE47C96822E85FB0C201A9DFCC068F499D_3() const { return ___CAAB02FE47C96822E85FB0C201A9DFCC068F499D_3; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141547 * get_address_of_CAAB02FE47C96822E85FB0C201A9DFCC068F499D_3() { return &___CAAB02FE47C96822E85FB0C201A9DFCC068F499D_3; }
	inline void set_CAAB02FE47C96822E85FB0C201A9DFCC068F499D_3(__StaticArrayInitTypeSizeU3D512_t2067141547  value)
	{
		___CAAB02FE47C96822E85FB0C201A9DFCC068F499D_3 = value;
	}

	inline static int32_t get_offset_of_EABE24386AED2477AAC84953961558F9B3C45F61_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___EABE24386AED2477AAC84953961558F9B3C45F61_4)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141547  get_EABE24386AED2477AAC84953961558F9B3C45F61_4() const { return ___EABE24386AED2477AAC84953961558F9B3C45F61_4; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141547 * get_address_of_EABE24386AED2477AAC84953961558F9B3C45F61_4() { return &___EABE24386AED2477AAC84953961558F9B3C45F61_4; }
	inline void set_EABE24386AED2477AAC84953961558F9B3C45F61_4(__StaticArrayInitTypeSizeU3D512_t2067141547  value)
	{
		___EABE24386AED2477AAC84953961558F9B3C45F61_4 = value;
	}

	inline static int32_t get_offset_of_FE3F4675AB322AF0F73F5B07BBEE00588E6ECD28_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___FE3F4675AB322AF0F73F5B07BBEE00588E6ECD28_5)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141547  get_FE3F4675AB322AF0F73F5B07BBEE00588E6ECD28_5() const { return ___FE3F4675AB322AF0F73F5B07BBEE00588E6ECD28_5; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141547 * get_address_of_FE3F4675AB322AF0F73F5B07BBEE00588E6ECD28_5() { return &___FE3F4675AB322AF0F73F5B07BBEE00588E6ECD28_5; }
	inline void set_FE3F4675AB322AF0F73F5B07BBEE00588E6ECD28_5(__StaticArrayInitTypeSizeU3D512_t2067141547  value)
	{
		___FE3F4675AB322AF0F73F5B07BBEE00588E6ECD28_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305147_H
#ifndef BYTEENCODING_T1810358777_H
#define BYTEENCODING_T1810358777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.ByteEncoding
struct  ByteEncoding_t1810358777  : public MonoEncoding_t2723633290
{
public:
	// System.Char[] I18N.Common.ByteEncoding::toChars
	CharU5BU5D_t1328083999* ___toChars_63;
	// System.String I18N.Common.ByteEncoding::encodingName
	String_t* ___encodingName_64;
	// System.String I18N.Common.ByteEncoding::bodyName
	String_t* ___bodyName_65;
	// System.String I18N.Common.ByteEncoding::headerName
	String_t* ___headerName_66;
	// System.String I18N.Common.ByteEncoding::webName
	String_t* ___webName_67;
	// System.Boolean I18N.Common.ByteEncoding::isBrowserDisplay
	bool ___isBrowserDisplay_68;
	// System.Boolean I18N.Common.ByteEncoding::isBrowserSave
	bool ___isBrowserSave_69;
	// System.Boolean I18N.Common.ByteEncoding::isMailNewsDisplay
	bool ___isMailNewsDisplay_70;
	// System.Boolean I18N.Common.ByteEncoding::isMailNewsSave
	bool ___isMailNewsSave_71;
	// System.Int32 I18N.Common.ByteEncoding::windowsCodePage
	int32_t ___windowsCodePage_72;

public:
	inline static int32_t get_offset_of_toChars_63() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777, ___toChars_63)); }
	inline CharU5BU5D_t1328083999* get_toChars_63() const { return ___toChars_63; }
	inline CharU5BU5D_t1328083999** get_address_of_toChars_63() { return &___toChars_63; }
	inline void set_toChars_63(CharU5BU5D_t1328083999* value)
	{
		___toChars_63 = value;
		Il2CppCodeGenWriteBarrier((&___toChars_63), value);
	}

	inline static int32_t get_offset_of_encodingName_64() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777, ___encodingName_64)); }
	inline String_t* get_encodingName_64() const { return ___encodingName_64; }
	inline String_t** get_address_of_encodingName_64() { return &___encodingName_64; }
	inline void set_encodingName_64(String_t* value)
	{
		___encodingName_64 = value;
		Il2CppCodeGenWriteBarrier((&___encodingName_64), value);
	}

	inline static int32_t get_offset_of_bodyName_65() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777, ___bodyName_65)); }
	inline String_t* get_bodyName_65() const { return ___bodyName_65; }
	inline String_t** get_address_of_bodyName_65() { return &___bodyName_65; }
	inline void set_bodyName_65(String_t* value)
	{
		___bodyName_65 = value;
		Il2CppCodeGenWriteBarrier((&___bodyName_65), value);
	}

	inline static int32_t get_offset_of_headerName_66() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777, ___headerName_66)); }
	inline String_t* get_headerName_66() const { return ___headerName_66; }
	inline String_t** get_address_of_headerName_66() { return &___headerName_66; }
	inline void set_headerName_66(String_t* value)
	{
		___headerName_66 = value;
		Il2CppCodeGenWriteBarrier((&___headerName_66), value);
	}

	inline static int32_t get_offset_of_webName_67() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777, ___webName_67)); }
	inline String_t* get_webName_67() const { return ___webName_67; }
	inline String_t** get_address_of_webName_67() { return &___webName_67; }
	inline void set_webName_67(String_t* value)
	{
		___webName_67 = value;
		Il2CppCodeGenWriteBarrier((&___webName_67), value);
	}

	inline static int32_t get_offset_of_isBrowserDisplay_68() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777, ___isBrowserDisplay_68)); }
	inline bool get_isBrowserDisplay_68() const { return ___isBrowserDisplay_68; }
	inline bool* get_address_of_isBrowserDisplay_68() { return &___isBrowserDisplay_68; }
	inline void set_isBrowserDisplay_68(bool value)
	{
		___isBrowserDisplay_68 = value;
	}

	inline static int32_t get_offset_of_isBrowserSave_69() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777, ___isBrowserSave_69)); }
	inline bool get_isBrowserSave_69() const { return ___isBrowserSave_69; }
	inline bool* get_address_of_isBrowserSave_69() { return &___isBrowserSave_69; }
	inline void set_isBrowserSave_69(bool value)
	{
		___isBrowserSave_69 = value;
	}

	inline static int32_t get_offset_of_isMailNewsDisplay_70() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777, ___isMailNewsDisplay_70)); }
	inline bool get_isMailNewsDisplay_70() const { return ___isMailNewsDisplay_70; }
	inline bool* get_address_of_isMailNewsDisplay_70() { return &___isMailNewsDisplay_70; }
	inline void set_isMailNewsDisplay_70(bool value)
	{
		___isMailNewsDisplay_70 = value;
	}

	inline static int32_t get_offset_of_isMailNewsSave_71() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777, ___isMailNewsSave_71)); }
	inline bool get_isMailNewsSave_71() const { return ___isMailNewsSave_71; }
	inline bool* get_address_of_isMailNewsSave_71() { return &___isMailNewsSave_71; }
	inline void set_isMailNewsSave_71(bool value)
	{
		___isMailNewsSave_71 = value;
	}

	inline static int32_t get_offset_of_windowsCodePage_72() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777, ___windowsCodePage_72)); }
	inline int32_t get_windowsCodePage_72() const { return ___windowsCodePage_72; }
	inline int32_t* get_address_of_windowsCodePage_72() { return &___windowsCodePage_72; }
	inline void set_windowsCodePage_72(int32_t value)
	{
		___windowsCodePage_72 = value;
	}
};

struct ByteEncoding_t1810358777_StaticFields
{
public:
	// System.Byte[] I18N.Common.ByteEncoding::isNormalized
	ByteU5BU5D_t3397334013* ___isNormalized_73;
	// System.Byte[] I18N.Common.ByteEncoding::isNormalizedComputed
	ByteU5BU5D_t3397334013* ___isNormalizedComputed_74;
	// System.Byte[] I18N.Common.ByteEncoding::normalization_bytes
	ByteU5BU5D_t3397334013* ___normalization_bytes_75;

public:
	inline static int32_t get_offset_of_isNormalized_73() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777_StaticFields, ___isNormalized_73)); }
	inline ByteU5BU5D_t3397334013* get_isNormalized_73() const { return ___isNormalized_73; }
	inline ByteU5BU5D_t3397334013** get_address_of_isNormalized_73() { return &___isNormalized_73; }
	inline void set_isNormalized_73(ByteU5BU5D_t3397334013* value)
	{
		___isNormalized_73 = value;
		Il2CppCodeGenWriteBarrier((&___isNormalized_73), value);
	}

	inline static int32_t get_offset_of_isNormalizedComputed_74() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777_StaticFields, ___isNormalizedComputed_74)); }
	inline ByteU5BU5D_t3397334013* get_isNormalizedComputed_74() const { return ___isNormalizedComputed_74; }
	inline ByteU5BU5D_t3397334013** get_address_of_isNormalizedComputed_74() { return &___isNormalizedComputed_74; }
	inline void set_isNormalizedComputed_74(ByteU5BU5D_t3397334013* value)
	{
		___isNormalizedComputed_74 = value;
		Il2CppCodeGenWriteBarrier((&___isNormalizedComputed_74), value);
	}

	inline static int32_t get_offset_of_normalization_bytes_75() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777_StaticFields, ___normalization_bytes_75)); }
	inline ByteU5BU5D_t3397334013* get_normalization_bytes_75() const { return ___normalization_bytes_75; }
	inline ByteU5BU5D_t3397334013** get_address_of_normalization_bytes_75() { return &___normalization_bytes_75; }
	inline void set_normalization_bytes_75(ByteU5BU5D_t3397334013* value)
	{
		___normalization_bytes_75 = value;
		Il2CppCodeGenWriteBarrier((&___normalization_bytes_75), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEENCODING_T1810358777_H
#ifndef CP1141_T388374828_H
#define CP1141_T388374828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1141
struct  CP1141_t388374828  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1141_t388374828_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1141::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1141_t388374828_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1141_T388374828_H
#ifndef CP1140_T1954458769_H
#define CP1140_T1954458769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1140
struct  CP1140_t1954458769  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1140_t1954458769_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1140::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1140_t1954458769_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1140_T1954458769_H
#ifndef CP1047_T3097055207_H
#define CP1047_T3097055207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1047
struct  CP1047_t3097055207  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1047_t3097055207_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1047::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1047_t3097055207_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1047_T3097055207_H
#ifndef CP1144_T4280057597_H
#define CP1144_T4280057597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1144
struct  CP1144_t4280057597  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1144_t4280057597_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1144::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1144_t4280057597_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1144_T4280057597_H
#ifndef CP1143_T3520542710_H
#define CP1143_T3520542710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1143
struct  CP1143_t3520542710  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1143_t3520542710_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1143::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1143_t3520542710_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1143_T3520542710_H
#ifndef CP1142_T791659355_H
#define CP1142_T791659355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1142
struct  CP1142_t791659355  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1142_t791659355_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1142::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1142_t791659355_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1142_T791659355_H
#ifndef CP875_T622088495_H
#define CP875_T622088495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP875
struct  CP875_t622088495  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP875_t622088495_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP875::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP875_t622088495_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP875_T622088495_H
#ifndef CP866_T3350971853_H
#define CP866_T3350971853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP866
struct  CP866_t3350971853  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP866_t3350971853_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP866::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP866_t3350971853_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP866_T3350971853_H
#ifndef CP38598_T862864178_H
#define CP38598_T862864178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.MidEast.CP38598
struct  CP38598_t862864178  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP38598_t862864178_StaticFields
{
public:
	// System.Char[] I18N.MidEast.CP38598::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP38598_t862864178_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP38598_T862864178_H
#ifndef CP20277_T1782223737_H
#define CP20277_T1782223737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20277
struct  CP20277_t1782223737  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20277_t1782223737_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20277::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20277_t1782223737_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20277_T1782223737_H
#ifndef CP870_T622088500_H
#define CP870_T622088500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP870
struct  CP870_t622088500  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP870_t622088500_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP870::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP870_t622088500_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP870_T622088500_H
#ifndef CP869_T3350971862_H
#define CP869_T3350971862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP869
struct  CP869_t3350971862  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP869_t3350971862_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP869::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP869_t3350971862_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP869_T3350971862_H
#ifndef CP1026_T1530971272_H
#define CP1026_T1530971272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1026
struct  CP1026_t1530971272  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1026_t1530971272_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1026::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1026_t1530971272_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1026_T1530971272_H
#ifndef CP20284_T2992077317_H
#define CP20284_T2992077317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20284
struct  CP20284_t2992077317  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20284_t2992077317_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20284::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20284_t2992077317_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20284_T2992077317_H
#ifndef CP20280_T2992077321_H
#define CP20280_T2992077321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20280
struct  CP20280_t2992077321  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20280_t2992077321_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20280::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20280_t2992077321_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20280_T2992077321_H
#ifndef CP20278_T1782223732_H
#define CP20278_T1782223732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20278
struct  CP20278_t1782223732  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20278_t1782223732_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20278::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20278_t1782223732_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20278_T1782223732_H
#ifndef CP20285_T2992077316_H
#define CP20285_T2992077316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20285
struct  CP20285_t2992077316  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20285_t2992077316_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20285::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20285_t2992077316_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20285_T2992077316_H
#ifndef CP20420_T2185508201_H
#define CP20420_T2185508201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20420
struct  CP20420_t2185508201  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20420_t2185508201_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20420::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20420_t2185508201_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20420_T2185508201_H
#ifndef CP20297_T263193963_H
#define CP20297_T263193963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20297
struct  CP20297_t263193963  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20297_t263193963_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20297::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20297_t263193963_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20297_T263193963_H
#ifndef CP20290_T263193966_H
#define CP20290_T263193966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20290
struct  CP20290_t263193966  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20290_t263193966_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20290::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20290_t263193966_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20290_T263193966_H
#ifndef CP20424_T2185508205_H
#define CP20424_T2185508205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20424
struct  CP20424_t2185508205  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20424_t2185508205_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20424::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20424_t2185508205_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20424_T2185508205_H
#ifndef CP1147_T1551174242_H
#define CP1147_T1551174242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1147
struct  CP1147_t1551174242  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1147_t1551174242_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1147::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1147_t1551174242_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1147_T1551174242_H
#ifndef CP1146_T3117258183_H
#define CP1146_T3117258183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1146
struct  CP1146_t3117258183  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1146_t3117258183_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1146::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1146_t3117258183_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1146_T3117258183_H
#ifndef CP1145_T2713973656_H
#define CP1145_T2713973656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1145
struct  CP1145_t2713973656  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1145_t2713973656_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1145::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1145_t2713973656_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1145_T2713973656_H
#ifndef CP1148_T1598228409_H
#define CP1148_T1598228409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1148
struct  CP1148_t1598228409  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1148_t1598228409_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1148::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1148_t1598228409_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1148_T1598228409_H
#ifndef CP20871_T1782223541_H
#define CP20871_T1782223541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20871
struct  CP20871_t1782223541  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20871_t1782223541_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20871::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20871_t1782223541_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20871_T1782223541_H
#ifndef CP20273_T1782223741_H
#define CP20273_T1782223741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20273
struct  CP20273_t1782223741  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20273_t1782223741_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20273::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20273_t1782223741_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20273_T1782223741_H
#ifndef CP1149_T32144468_H
#define CP1149_T32144468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1149
struct  CP1149_t32144468  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1149_t32144468_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1149::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1149_t32144468_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1149_T32144468_H
#ifndef CP57010_T1919286178_H
#define CP57010_T1919286178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP57010
struct  CP57010_t1919286178  : public ISCIIEncoding_t1858614900
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP57010_T1919286178_H
#ifndef CP57009_T709432596_H
#define CP57009_T709432596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP57009
struct  CP57009_t709432596  : public ISCIIEncoding_t1858614900
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP57009_T709432596_H
#ifndef CP28595_T1310682268_H
#define CP28595_T1310682268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP28595
struct  CP28595_t1310682268  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP28595_t1310682268_StaticFields
{
public:
	// System.Char[] I18N.Other.CP28595::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP28595_t1310682268_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP28595_T1310682268_H
#ifndef CP21866_T2244858836_H
#define CP21866_T2244858836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP21866
struct  CP21866_t2244858836  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP21866_t2244858836_StaticFields
{
public:
	// System.Char[] I18N.Other.CP21866::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP21866_t2244858836_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP21866_T2244858836_H
#ifndef CP57003_T3485370118_H
#define CP57003_T3485370118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP57003
struct  CP57003_t3485370118  : public ISCIIEncoding_t1858614900
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP57003_T3485370118_H
#ifndef CP57011_T353202237_H
#define CP57011_T353202237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP57011
struct  CP57011_t353202237  : public ISCIIEncoding_t1858614900
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP57011_T353202237_H
#ifndef CP57005_T2322570704_H
#define CP57005_T2322570704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP57005
struct  CP57005_t2322570704  : public ISCIIEncoding_t1858614900
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP57005_T2322570704_H
#ifndef CP57002_T756486763_H
#define CP57002_T756486763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP57002
struct  CP57002_t756486763  : public ISCIIEncoding_t1858614900
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP57002_T756486763_H
#ifndef CP57004_T3888654645_H
#define CP57004_T3888654645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP57004
struct  CP57004_t3888654645  : public ISCIIEncoding_t1858614900
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP57004_T3888654645_H
#ifndef CP57008_T2275516537_H
#define CP57008_T2275516537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP57008
struct  CP57008_t2275516537  : public ISCIIEncoding_t1858614900
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP57008_T2275516537_H
#ifndef CP57007_T1159771290_H
#define CP57007_T1159771290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP57007
struct  CP57007_t1159771290  : public ISCIIEncoding_t1858614900
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP57007_T1159771290_H
#ifndef CP57006_T2725855231_H
#define CP57006_T2725855231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP57006
struct  CP57006_t2725855231  : public ISCIIEncoding_t1858614900
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP57006_T2725855231_H
#ifndef CP1251_T943153104_H
#define CP1251_T943153104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP1251
struct  CP1251_t943153104  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1251_t943153104_StaticFields
{
public:
	// System.Char[] I18N.Other.CP1251::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1251_t943153104_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1251_T943153104_H
#ifndef CP1258_T943153113_H
#define CP1258_T943153113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP1258
struct  CP1258_t943153113  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1258_t943153113_StaticFields
{
public:
	// System.Char[] I18N.Other.CP1258::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1258_t943153113_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1258_T943153113_H
#ifndef CP1257_T943153098_H
#define CP1257_T943153098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP1257
struct  CP1257_t943153098  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1257_t943153098_StaticFields
{
public:
	// System.Char[] I18N.Other.CP1257::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1257_t943153098_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1257_T943153098_H
#ifndef CP874_T131564404_H
#define CP874_T131564404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP874
struct  CP874_t131564404  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP874_t131564404_StaticFields
{
public:
	// System.Char[] I18N.Other.CP874::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP874_t131564404_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP874_T131564404_H
#ifndef CP20866_T2244858805_H
#define CP20866_T2244858805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP20866
struct  CP20866_t2244858805  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20866_t2244858805_StaticFields
{
public:
	// System.Char[] I18N.Other.CP20866::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20866_t2244858805_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20866_T2244858805_H
#ifndef CP28594_T2876766209_H
#define CP28594_T2876766209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP28594
struct  CP28594_t2876766209  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP28594_t2876766209_StaticFields
{
public:
	// System.Char[] I18N.Other.CP28594::ToChars
	CharU5BU5D_t1328083999* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP28594_t2876766209_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t1328083999* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t1328083999* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP28594_T2876766209_H
#ifndef ENCWINDOWS_1257_T2378487369_H
#define ENCWINDOWS_1257_T2378487369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCwindows_1257
struct  ENCwindows_1257_t2378487369  : public CP1257_t943153098
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCWINDOWS_1257_T2378487369_H
#ifndef ENCIBM278_T130668061_H
#define ENCIBM278_T130668061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm278
struct  ENCibm278_t130668061  : public CP20278_t1782223732
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM278_T130668061_H
#ifndef ENCWINDOWS_38598_T1948720003_H
#define ENCWINDOWS_38598_T1948720003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.MidEast.ENCwindows_38598
struct  ENCwindows_38598_t1948720003  : public CP38598_t862864178
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCWINDOWS_38598_T1948720003_H
#ifndef ENCIBM273_T130668072_H
#define ENCIBM273_T130668072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm273
struct  ENCibm273_t130668072  : public CP20273_t1782223741
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM273_T130668072_H
#ifndef ENCIBM277_T130668076_H
#define ENCIBM277_T130668076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm277
struct  ENCibm277_t130668076  : public CP20277_t1782223737
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM277_T130668076_H
#ifndef ENCISO_8859_5_T4223242758_H
#define ENCISO_8859_5_T4223242758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCiso_8859_5
struct  ENCiso_8859_5_t4223242758  : public CP28595_t1310682268
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCISO_8859_5_T4223242758_H
#ifndef ENCWINDOWS_1251_T3185056423_H
#define ENCWINDOWS_1251_T3185056423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCwindows_1251
struct  ENCwindows_1251_t3185056423  : public CP1251_t943153104
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCWINDOWS_1251_T3185056423_H
#ifndef ENCIBM290_T1293467483_H
#define ENCIBM290_T1293467483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm290
struct  ENCibm290_t1293467483  : public CP20290_t263193966
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM290_T1293467483_H
#ifndef ENCKOI8_U_T3591300319_H
#define ENCKOI8_U_T3591300319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCkoi8_u
struct  ENCkoi8_u_t3591300319  : public CP21866_t2244858836
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCKOI8_U_T3591300319_H
#ifndef ENCIBM285_T4022350843_H
#define ENCIBM285_T4022350843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm285
struct  ENCibm285_t4022350843  : public CP20285_t2992077316
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM285_T4022350843_H
#ifndef ENCKOI8_R_T862416964_H
#define ENCKOI8_R_T862416964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCkoi8_r
struct  ENCkoi8_r_t862416964  : public CP20866_t2244858805
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCKOI8_R_T862416964_H
#ifndef ENCIBM297_T1293467490_H
#define ENCIBM297_T1293467490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm297
struct  ENCibm297_t1293467490  : public CP20297_t263193963
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM297_T1293467490_H
#ifndef ENCIBM420_T533952794_H
#define ENCIBM420_T533952794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm420
struct  ENCibm420_t533952794  : public CP20420_t2185508201
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM420_T533952794_H
#ifndef ENCWINDOWS_1258_T1975202842_H
#define ENCWINDOWS_1258_T1975202842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCwindows_1258
struct  ENCwindows_1258_t1975202842  : public CP1258_t943153113
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCWINDOWS_1258_T1975202842_H
#ifndef ENCIBM280_T4022350838_H
#define ENCIBM280_T4022350838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm280
struct  ENCibm280_t4022350838  : public CP20280_t2992077321
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM280_T4022350838_H
#ifndef ENCIBM871_T130667872_H
#define ENCIBM871_T130667872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm871
struct  ENCibm871_t130667872  : public CP20871_t1782223541
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM871_T130667872_H
#ifndef ENCIBM284_T4022350842_H
#define ENCIBM284_T4022350842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm284
struct  ENCibm284_t4022350842  : public CP20284_t2992077317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM284_T4022350842_H
#ifndef ENCIBM424_T533952790_H
#define ENCIBM424_T533952790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm424
struct  ENCibm424_t533952790  : public CP20424_t2185508205
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM424_T533952790_H
#ifndef ENCISO_8859_4_T2657158817_H
#define ENCISO_8859_4_T2657158817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCiso_8859_4
struct  ENCiso_8859_4_t2657158817  : public CP28594_t2876766209
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCISO_8859_4_T2657158817_H
#ifndef ENCX_ISCII_AS_T1497960643_H
#define ENCX_ISCII_AS_T1497960643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCx_iscii_as
struct  ENCx_iscii_as_t1497960643  : public CP57006_t2725855231
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_ISCII_AS_T1497960643_H
#ifndef ENCIBM869_T2859551235_H
#define ENCIBM869_T2859551235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm869
struct  ENCibm869_t2859551235  : public CP869_t3350971862
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM869_T2859551235_H
#ifndef ENCX_ISCII_OR_T3064044598_H
#define ENCX_ISCII_OR_T3064044598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCx_iscii_or
struct  ENCx_iscii_or_t3064044598  : public CP57007_t1159771290
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_ISCII_OR_T3064044598_H
#ifndef ENCIBM875_T130667876_H
#define ENCIBM875_T130667876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm875
struct  ENCibm875_t130667876  : public CP875_t622088495
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM875_T130667876_H
#ifndef ENCX_ISCII_TE_T1592068964_H
#define ENCX_ISCII_TE_T1592068964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCx_iscii_te
struct  ENCx_iscii_te_t1592068964  : public CP57005_t2322570704
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_ISCII_TE_T1592068964_H
#ifndef ENCIBM870_T130667871_H
#define ENCIBM870_T130667871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm870
struct  ENCibm870_t130667871  : public CP870_t622088500
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM870_T130667871_H
#ifndef ENCIBM1026_T1377439505_H
#define ENCIBM1026_T1377439505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1026
struct  ENCibm1026_t1377439505  : public CP1026_t1530971272
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1026_T1377439505_H
#ifndef ENCX_ISCII_GU_T2304529703_H
#define ENCX_ISCII_GU_T2304529703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCx_iscii_gu
struct  ENCx_iscii_gu_t2304529703  : public CP57010_t1919286178
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_ISCII_GU_T2304529703_H
#ifndef ENCX_ISCII_PA_T3917667788_H
#define ENCX_ISCII_PA_T3917667788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCx_iscii_pa
struct  ENCx_iscii_pa_t3917667788  : public CP57011_t353202237
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_ISCII_PA_T3917667788_H
#ifndef ENCWINDOWS_874_T3925204955_H
#define ENCWINDOWS_874_T3925204955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCwindows_874
struct  ENCwindows_874_t3925204955  : public CP874_t131564404
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCWINDOWS_874_T3925204955_H
#ifndef ENCX_ISCII_KA_T3917667815_H
#define ENCX_ISCII_KA_T3917667815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCx_iscii_ka
struct  ENCx_iscii_ka_t3917667815  : public CP57008_t2275516537
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_ISCII_KA_T3917667815_H
#ifndef ENCIBM866_T2859551228_H
#define ENCIBM866_T2859551228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm866
struct  ENCibm866_t2859551228  : public CP866_t3350971853
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM866_T2859551228_H
#ifndef ENCX_ISCII_MA_T3917667817_H
#define ENCX_ISCII_MA_T3917667817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCx_iscii_ma
struct  ENCx_iscii_ma_t3917667817  : public CP57009_t709432596
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_ISCII_MA_T3917667817_H
#ifndef ENCX_ISCII_TA_T3917667792_H
#define ENCX_ISCII_TA_T3917667792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCx_iscii_ta
struct  ENCx_iscii_ta_t3917667792  : public CP57004_t3888654645
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_ISCII_TA_T3917667792_H
#ifndef ENCIBM1146_T73477596_H
#define ENCIBM1146_T73477596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1146
struct  ENCibm1146_t73477596  : public CP1146_t3117258183
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1146_T73477596_H
#ifndef ENCIBM1145_T1639561537_H
#define ENCIBM1145_T1639561537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1145
struct  ENCibm1145_t1639561537  : public CP1145_t2713973656
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1145_T1639561537_H
#ifndef ENCIBM1144_T3205645478_H
#define ENCIBM1144_T3205645478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1144
struct  ENCibm1144_t3205645478  : public CP1144_t4280057597
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1144_T3205645478_H
#ifndef ENCIBM1149_T3965160365_H
#define ENCIBM1149_T3965160365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1149
struct  ENCibm1149_t3965160365  : public CP1149_t32144468
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1149_T3965160365_H
#ifndef ENCIBM1148_T1236277010_H
#define ENCIBM1148_T1236277010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1148
struct  ENCibm1148_t1236277010  : public CP1148_t1598228409
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1148_T1236277010_H
#ifndef ENCIBM1147_T2802360951_H
#define ENCIBM1147_T2802360951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1147
struct  ENCibm1147_t2802360951  : public CP1147_t1551174242
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1147_T2802360951_H
#ifndef ENCIBM01143_T1622816623_H
#define ENCIBM01143_T1622816623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm01143
struct  ENCibm01143_t1622816623  : public CP1143_t3520542710
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM01143_T1622816623_H
#ifndef ENCIBM01140_T1622816626_H
#define ENCIBM01140_T1622816626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm01140
struct  ENCibm01140_t1622816626  : public CP1140_t1954458769
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM01140_T1622816626_H
#ifndef ENCX_ISCII_BE_T1592068978_H
#define ENCX_ISCII_BE_T1592068978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCx_iscii_be
struct  ENCx_iscii_be_t1592068978  : public CP57003_t3485370118
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_ISCII_BE_T1592068978_H
#ifndef ENCIBM1047_T2943523452_H
#define ENCIBM1047_T2943523452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1047
struct  ENCibm1047_t2943523452  : public CP1047_t3097055207
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1047_T2943523452_H
#ifndef ENCIBM01142_T1622816624_H
#define ENCIBM01142_T1622816624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm01142
struct  ENCibm01142_t1622816624  : public CP1142_t791659355
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM01142_T1622816624_H
#ifndef ENCIBM01141_T1622816625_H
#define ENCIBM01141_T1622816625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm01141
struct  ENCibm01141_t1622816625  : public CP1141_t388374828
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM01141_T1622816625_H
#ifndef ENCX_ISCII_DE_T1592068980_H
#define ENCX_ISCII_DE_T1592068980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCx_iscii_de
struct  ENCx_iscii_de_t1592068980  : public CP57002_t756486763
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_ISCII_DE_T1592068980_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4700 = { sizeof (ENCwindows_38598_t1948720003), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4701 = { sizeof (U3CPrivateImplementationDetailsU3E_t1486305147), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4701[6] = 
{
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U34AF7BA1E7B8627A4446E9F0228609B2B17E796E8_0(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U374148F1C30278A0E570B644C79F8105880AB7A38_1(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_BC0DA014C1303FECC224A7C4E480135AA0C9865E_2(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_CAAB02FE47C96822E85FB0C201A9DFCC068F499D_3(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_EABE24386AED2477AAC84953961558F9B3C45F61_4(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_FE3F4675AB322AF0F73F5B07BBEE00588E6ECD28_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4702 = { sizeof (__StaticArrayInitTypeSizeU3D512_t2067141547)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D512_t2067141547 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4703 = { sizeof (U3CModuleU3E_t3783534274), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4704 = { sizeof (Consts_t2407773019), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4704[41] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4705 = { sizeof (CP1251_t943153104), -1, sizeof(CP1251_t943153104_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4705[1] = 
{
	CP1251_t943153104_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4706 = { sizeof (ENCwindows_1251_t3185056423), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4707 = { sizeof (CP1257_t943153098), -1, sizeof(CP1257_t943153098_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4707[1] = 
{
	CP1257_t943153098_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4708 = { sizeof (ENCwindows_1257_t2378487369), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4709 = { sizeof (CP1258_t943153113), -1, sizeof(CP1258_t943153113_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4709[1] = 
{
	CP1258_t943153113_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4710 = { sizeof (ENCwindows_1258_t1975202842), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4711 = { sizeof (CP20866_t2244858805), -1, sizeof(CP20866_t2244858805_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4711[1] = 
{
	CP20866_t2244858805_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4712 = { sizeof (ENCkoi8_r_t862416964), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4713 = { sizeof (CP21866_t2244858836), -1, sizeof(CP21866_t2244858836_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4713[1] = 
{
	CP21866_t2244858836_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4714 = { sizeof (ENCkoi8_u_t3591300319), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4715 = { sizeof (CP28594_t2876766209), -1, sizeof(CP28594_t2876766209_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4715[1] = 
{
	CP28594_t2876766209_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4716 = { sizeof (ENCiso_8859_4_t2657158817), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4717 = { sizeof (CP28595_t1310682268), -1, sizeof(CP28595_t1310682268_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4717[1] = 
{
	CP28595_t1310682268_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4718 = { sizeof (ENCiso_8859_5_t4223242758), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4719 = { sizeof (ISCIIEncoding_t1858614900), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4719[3] = 
{
	ISCIIEncoding_t1858614900::get_offset_of_shift_63(),
	ISCIIEncoding_t1858614900::get_offset_of_encodingName_64(),
	ISCIIEncoding_t1858614900::get_offset_of_webName_65(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4720 = { sizeof (CP57002_t756486763), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4721 = { sizeof (CP57003_t3485370118), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4722 = { sizeof (CP57004_t3888654645), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4723 = { sizeof (CP57005_t2322570704), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4724 = { sizeof (CP57006_t2725855231), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4725 = { sizeof (CP57007_t1159771290), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4726 = { sizeof (CP57008_t2275516537), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4727 = { sizeof (CP57009_t709432596), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4728 = { sizeof (CP57010_t1919286178), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4729 = { sizeof (CP57011_t353202237), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4730 = { sizeof (ENCx_iscii_de_t1592068980), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4731 = { sizeof (ENCx_iscii_be_t1592068978), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4732 = { sizeof (ENCx_iscii_ta_t3917667792), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4733 = { sizeof (ENCx_iscii_te_t1592068964), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4734 = { sizeof (ENCx_iscii_as_t1497960643), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4735 = { sizeof (ENCx_iscii_or_t3064044598), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4736 = { sizeof (ENCx_iscii_ka_t3917667815), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4737 = { sizeof (ENCx_iscii_ma_t3917667817), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4738 = { sizeof (ENCx_iscii_gu_t2304529703), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4739 = { sizeof (ENCx_iscii_pa_t3917667788), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4740 = { sizeof (CP874_t131564404), -1, sizeof(CP874_t131564404_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4740[1] = 
{
	CP874_t131564404_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4741 = { sizeof (ENCwindows_874_t3925204955), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4742 = { sizeof (U3CPrivateImplementationDetailsU3E_t1486305148), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1486305148_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4742[8] = 
{
	U3CPrivateImplementationDetailsU3E_t1486305148_StaticFields::get_offset_of_U3017235096A41990D9488223C8E0D56E35B569736_0(),
	U3CPrivateImplementationDetailsU3E_t1486305148_StaticFields::get_offset_of_U331D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1(),
	U3CPrivateImplementationDetailsU3E_t1486305148_StaticFields::get_offset_of_U333D1AC98C31DCCB9238C374D4D1386DB68A6A595_2(),
	U3CPrivateImplementationDetailsU3E_t1486305148_StaticFields::get_offset_of_U33D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3(),
	U3CPrivateImplementationDetailsU3E_t1486305148_StaticFields::get_offset_of_C029709D232902A6A3808A15B7622DC2AEF16A24_4(),
	U3CPrivateImplementationDetailsU3E_t1486305148_StaticFields::get_offset_of_E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5(),
	U3CPrivateImplementationDetailsU3E_t1486305148_StaticFields::get_offset_of_FDC523733500E24FB60E5223DD9E396992267CD9_6(),
	U3CPrivateImplementationDetailsU3E_t1486305148_StaticFields::get_offset_of_FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4743 = { sizeof (__StaticArrayInitTypeSizeU3D512_t2067141548)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D512_t2067141548 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4744 = { sizeof (U3CModuleU3E_t3783534275), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4745 = { sizeof (Consts_t2407773020), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4745[41] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4746 = { sizeof (CP866_t3350971853), -1, sizeof(CP866_t3350971853_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4746[1] = 
{
	CP866_t3350971853_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4747 = { sizeof (ENCibm866_t2859551228), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4748 = { sizeof (CP1026_t1530971272), -1, sizeof(CP1026_t1530971272_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4748[1] = 
{
	CP1026_t1530971272_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4749 = { sizeof (ENCibm1026_t1377439505), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4750 = { sizeof (CP869_t3350971862), -1, sizeof(CP869_t3350971862_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4750[1] = 
{
	CP869_t3350971862_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4751 = { sizeof (ENCibm869_t2859551235), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4752 = { sizeof (CP870_t622088500), -1, sizeof(CP870_t622088500_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4752[1] = 
{
	CP870_t622088500_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4753 = { sizeof (ENCibm870_t130667871), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4754 = { sizeof (CP875_t622088495), -1, sizeof(CP875_t622088495_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4754[1] = 
{
	CP875_t622088495_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4755 = { sizeof (ENCibm875_t130667876), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4756 = { sizeof (CP1047_t3097055207), -1, sizeof(CP1047_t3097055207_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4756[1] = 
{
	CP1047_t3097055207_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4757 = { sizeof (ENCibm1047_t2943523452), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4758 = { sizeof (CP1140_t1954458769), -1, sizeof(CP1140_t1954458769_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4758[1] = 
{
	CP1140_t1954458769_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4759 = { sizeof (ENCibm01140_t1622816626), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4760 = { sizeof (CP1141_t388374828), -1, sizeof(CP1141_t388374828_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4760[1] = 
{
	CP1141_t388374828_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4761 = { sizeof (ENCibm01141_t1622816625), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4762 = { sizeof (CP1142_t791659355), -1, sizeof(CP1142_t791659355_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4762[1] = 
{
	CP1142_t791659355_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4763 = { sizeof (ENCibm01142_t1622816624), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4764 = { sizeof (CP1143_t3520542710), -1, sizeof(CP1143_t3520542710_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4764[1] = 
{
	CP1143_t3520542710_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4765 = { sizeof (ENCibm01143_t1622816623), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4766 = { sizeof (CP1144_t4280057597), -1, sizeof(CP1144_t4280057597_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4766[1] = 
{
	CP1144_t4280057597_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4767 = { sizeof (ENCibm1144_t3205645478), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4768 = { sizeof (CP1145_t2713973656), -1, sizeof(CP1145_t2713973656_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4768[1] = 
{
	CP1145_t2713973656_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4769 = { sizeof (ENCibm1145_t1639561537), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4770 = { sizeof (CP1146_t3117258183), -1, sizeof(CP1146_t3117258183_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4770[1] = 
{
	CP1146_t3117258183_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4771 = { sizeof (ENCibm1146_t73477596), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4772 = { sizeof (CP1147_t1551174242), -1, sizeof(CP1147_t1551174242_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4772[1] = 
{
	CP1147_t1551174242_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4773 = { sizeof (ENCibm1147_t2802360951), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4774 = { sizeof (CP1148_t1598228409), -1, sizeof(CP1148_t1598228409_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4774[1] = 
{
	CP1148_t1598228409_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4775 = { sizeof (ENCibm1148_t1236277010), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4776 = { sizeof (CP1149_t32144468), -1, sizeof(CP1149_t32144468_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4776[1] = 
{
	CP1149_t32144468_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4777 = { sizeof (ENCibm1149_t3965160365), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4778 = { sizeof (CP20273_t1782223741), -1, sizeof(CP20273_t1782223741_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4778[1] = 
{
	CP20273_t1782223741_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4779 = { sizeof (ENCibm273_t130668072), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4780 = { sizeof (CP20277_t1782223737), -1, sizeof(CP20277_t1782223737_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4780[1] = 
{
	CP20277_t1782223737_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4781 = { sizeof (ENCibm277_t130668076), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4782 = { sizeof (CP20278_t1782223732), -1, sizeof(CP20278_t1782223732_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4782[1] = 
{
	CP20278_t1782223732_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4783 = { sizeof (ENCibm278_t130668061), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4784 = { sizeof (CP20280_t2992077321), -1, sizeof(CP20280_t2992077321_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4784[1] = 
{
	CP20280_t2992077321_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4785 = { sizeof (ENCibm280_t4022350838), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4786 = { sizeof (CP20284_t2992077317), -1, sizeof(CP20284_t2992077317_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4786[1] = 
{
	CP20284_t2992077317_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4787 = { sizeof (ENCibm284_t4022350842), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4788 = { sizeof (CP20285_t2992077316), -1, sizeof(CP20285_t2992077316_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4788[1] = 
{
	CP20285_t2992077316_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4789 = { sizeof (ENCibm285_t4022350843), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4790 = { sizeof (CP20290_t263193966), -1, sizeof(CP20290_t263193966_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4790[1] = 
{
	CP20290_t263193966_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4791 = { sizeof (ENCibm290_t1293467483), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4792 = { sizeof (CP20297_t263193963), -1, sizeof(CP20297_t263193963_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4792[1] = 
{
	CP20297_t263193963_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4793 = { sizeof (ENCibm297_t1293467490), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4794 = { sizeof (CP20420_t2185508201), -1, sizeof(CP20420_t2185508201_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4794[1] = 
{
	CP20420_t2185508201_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4795 = { sizeof (ENCibm420_t533952794), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4796 = { sizeof (CP20424_t2185508205), -1, sizeof(CP20424_t2185508205_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4796[1] = 
{
	CP20424_t2185508205_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4797 = { sizeof (ENCibm424_t533952790), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4798 = { sizeof (CP20871_t1782223541), -1, sizeof(CP20871_t1782223541_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4798[1] = 
{
	CP20871_t1782223541_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4799 = { sizeof (ENCibm871_t130667872), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
