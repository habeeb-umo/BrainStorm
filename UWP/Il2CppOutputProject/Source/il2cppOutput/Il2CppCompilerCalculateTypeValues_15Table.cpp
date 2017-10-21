#include "il2cpp-config.h"

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

// Mono.Math.BigInteger
struct BigInteger_t925946152;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.FileStream
struct FileStream_t1695958676;
// Mono.Globalization.Unicode.CodePointIndexer/TableRange[]
struct TableRangeU5BU5D_t1881234606;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;
// Mono.Security.X509.X509Stores
struct X509Stores_t3001420398;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3592472865;
// Mono.Security.X509.X509Store
struct X509Store_t4028973563;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Security.Cryptography.CspParameters
struct CspParameters_t46065560;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t1975884510;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t2217612696;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1153004758;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1656058977;
// Mono.Globalization.Unicode.TailoringInfo[]
struct TailoringInfoU5BU5D_t2757346586;
// System.Byte
struct Byte_t3683104436;
// System.Comparison`1<Mono.Globalization.Unicode.Level2Map>
struct Comparison_1_t289277281;
// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t1073906970;
// Microsoft.Win32.RegistryKey
struct RegistryKey_t2287932784;
// System.Globalization.TextInfo
struct TextInfo_t3620182823;
// Mono.Globalization.Unicode.Contraction[]
struct ContractionU5BU5D_t4233480993;
// Mono.Globalization.Unicode.Level2Map[]
struct Level2MapU5BU5D_t2838259787;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// Mono.Security.Uri/UriScheme[]
struct UriSchemeU5BU5D_t409881140;
// Mono.Security.ASN1
struct ASN1_t924533535;
// System.Security.Cryptography.RSA
struct RSA_t3719518354;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1443605387;
// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t1683925522;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// Mono.Xml.SmallXmlParser/IContentHandler
struct IContentHandler_t3823912562;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.Collections.Stack
struct Stack_t1043988394;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t4015491015;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.IntPtr
struct IntPtr_t;
// System.Void
struct Void_t1841601450;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;
// Microsoft.Win32.SafeHandles.SafeRegistryHandle
struct SafeRegistryHandle_t1955425892;
// Microsoft.Win32.IRegistryApi
struct IRegistryApi_t40222722;
// Mono.RuntimeStructs/GPtrArray
struct GPtrArray_t3128553612;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Mono.RuntimeStructs/MonoClass
struct MonoClass_t2595527713;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1572802995;
// System.Version
struct Version_t1755874712;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t324051957;
// Mono.Security.X509.X509Chain
struct X509Chain_t1938971907;
// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t2001522803;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t108853709;
// System.Security.Cryptography.DSA
struct DSA_t903174880;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1640144839;
// System.Delegate[]
struct DelegateU5BU5D_t1606206610;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1108166522;
// System.EventArgs
struct EventArgs_t3289624707;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

struct Exception_t1927440687_marshaled_pinvoke;
struct Exception_t1927440687_marshaled_com;



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
#ifndef MODULUSRING_T80355991_H
#define MODULUSRING_T80355991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/ModulusRing
struct  ModulusRing_t80355991  : public RuntimeObject
{
public:
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t925946152 * ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t925946152 * ___constant_1;

public:
	inline static int32_t get_offset_of_mod_0() { return static_cast<int32_t>(offsetof(ModulusRing_t80355991, ___mod_0)); }
	inline BigInteger_t925946152 * get_mod_0() const { return ___mod_0; }
	inline BigInteger_t925946152 ** get_address_of_mod_0() { return &___mod_0; }
	inline void set_mod_0(BigInteger_t925946152 * value)
	{
		___mod_0 = value;
		Il2CppCodeGenWriteBarrier((&___mod_0), value);
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(ModulusRing_t80355991, ___constant_1)); }
	inline BigInteger_t925946152 * get_constant_1() const { return ___constant_1; }
	inline BigInteger_t925946152 ** get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(BigInteger_t925946152 * value)
	{
		___constant_1 = value;
		Il2CppCodeGenWriteBarrier((&___constant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULUSRING_T80355991_H
#ifndef KERNEL_T1353186455_H
#define KERNEL_T1353186455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Kernel
struct  Kernel_t1353186455  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KERNEL_T1353186455_H
#ifndef AUTHENTICODEBASE_T3368165232_H
#define AUTHENTICODEBASE_T3368165232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Authenticode.AuthenticodeBase
struct  AuthenticodeBase_t3368165232  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::fileblock
	ByteU5BU5D_t3397334013* ___fileblock_0;
	// System.IO.FileStream Mono.Security.Authenticode.AuthenticodeBase::fs
	FileStream_t1695958676 * ___fs_1;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::blockNo
	int32_t ___blockNo_2;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::blockLength
	int32_t ___blockLength_3;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::peOffset
	int32_t ___peOffset_4;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::dirSecurityOffset
	int32_t ___dirSecurityOffset_5;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::dirSecuritySize
	int32_t ___dirSecuritySize_6;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::coffSymbolTableOffset
	int32_t ___coffSymbolTableOffset_7;

public:
	inline static int32_t get_offset_of_fileblock_0() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t3368165232, ___fileblock_0)); }
	inline ByteU5BU5D_t3397334013* get_fileblock_0() const { return ___fileblock_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_fileblock_0() { return &___fileblock_0; }
	inline void set_fileblock_0(ByteU5BU5D_t3397334013* value)
	{
		___fileblock_0 = value;
		Il2CppCodeGenWriteBarrier((&___fileblock_0), value);
	}

	inline static int32_t get_offset_of_fs_1() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t3368165232, ___fs_1)); }
	inline FileStream_t1695958676 * get_fs_1() const { return ___fs_1; }
	inline FileStream_t1695958676 ** get_address_of_fs_1() { return &___fs_1; }
	inline void set_fs_1(FileStream_t1695958676 * value)
	{
		___fs_1 = value;
		Il2CppCodeGenWriteBarrier((&___fs_1), value);
	}

	inline static int32_t get_offset_of_blockNo_2() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t3368165232, ___blockNo_2)); }
	inline int32_t get_blockNo_2() const { return ___blockNo_2; }
	inline int32_t* get_address_of_blockNo_2() { return &___blockNo_2; }
	inline void set_blockNo_2(int32_t value)
	{
		___blockNo_2 = value;
	}

	inline static int32_t get_offset_of_blockLength_3() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t3368165232, ___blockLength_3)); }
	inline int32_t get_blockLength_3() const { return ___blockLength_3; }
	inline int32_t* get_address_of_blockLength_3() { return &___blockLength_3; }
	inline void set_blockLength_3(int32_t value)
	{
		___blockLength_3 = value;
	}

	inline static int32_t get_offset_of_peOffset_4() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t3368165232, ___peOffset_4)); }
	inline int32_t get_peOffset_4() const { return ___peOffset_4; }
	inline int32_t* get_address_of_peOffset_4() { return &___peOffset_4; }
	inline void set_peOffset_4(int32_t value)
	{
		___peOffset_4 = value;
	}

	inline static int32_t get_offset_of_dirSecurityOffset_5() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t3368165232, ___dirSecurityOffset_5)); }
	inline int32_t get_dirSecurityOffset_5() const { return ___dirSecurityOffset_5; }
	inline int32_t* get_address_of_dirSecurityOffset_5() { return &___dirSecurityOffset_5; }
	inline void set_dirSecurityOffset_5(int32_t value)
	{
		___dirSecurityOffset_5 = value;
	}

	inline static int32_t get_offset_of_dirSecuritySize_6() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t3368165232, ___dirSecuritySize_6)); }
	inline int32_t get_dirSecuritySize_6() const { return ___dirSecuritySize_6; }
	inline int32_t* get_address_of_dirSecuritySize_6() { return &___dirSecuritySize_6; }
	inline void set_dirSecuritySize_6(int32_t value)
	{
		___dirSecuritySize_6 = value;
	}

	inline static int32_t get_offset_of_coffSymbolTableOffset_7() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t3368165232, ___coffSymbolTableOffset_7)); }
	inline int32_t get_coffSymbolTableOffset_7() const { return ___coffSymbolTableOffset_7; }
	inline int32_t* get_address_of_coffSymbolTableOffset_7() { return &___coffSymbolTableOffset_7; }
	inline void set_coffSymbolTableOffset_7(int32_t value)
	{
		___coffSymbolTableOffset_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICODEBASE_T3368165232_H
#ifndef CRITICALFINALIZEROBJECT_T1920899984_H
#define CRITICALFINALIZEROBJECT_T1920899984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t1920899984  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T1920899984_H
#ifndef PRIMALITYTESTS_T3283102398_H
#define PRIMALITYTESTS_T3283102398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTests
struct  PrimalityTests_t3283102398  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTESTS_T3283102398_H
#ifndef CODEPOINTINDEXER_T1073906970_H
#define CODEPOINTINDEXER_T1073906970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.CodePointIndexer
struct  CodePointIndexer_t1073906970  : public RuntimeObject
{
public:
	// Mono.Globalization.Unicode.CodePointIndexer/TableRange[] Mono.Globalization.Unicode.CodePointIndexer::ranges
	TableRangeU5BU5D_t1881234606* ___ranges_0;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::TotalCount
	int32_t ___TotalCount_1;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::defaultIndex
	int32_t ___defaultIndex_2;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::defaultCP
	int32_t ___defaultCP_3;

public:
	inline static int32_t get_offset_of_ranges_0() { return static_cast<int32_t>(offsetof(CodePointIndexer_t1073906970, ___ranges_0)); }
	inline TableRangeU5BU5D_t1881234606* get_ranges_0() const { return ___ranges_0; }
	inline TableRangeU5BU5D_t1881234606** get_address_of_ranges_0() { return &___ranges_0; }
	inline void set_ranges_0(TableRangeU5BU5D_t1881234606* value)
	{
		___ranges_0 = value;
		Il2CppCodeGenWriteBarrier((&___ranges_0), value);
	}

	inline static int32_t get_offset_of_TotalCount_1() { return static_cast<int32_t>(offsetof(CodePointIndexer_t1073906970, ___TotalCount_1)); }
	inline int32_t get_TotalCount_1() const { return ___TotalCount_1; }
	inline int32_t* get_address_of_TotalCount_1() { return &___TotalCount_1; }
	inline void set_TotalCount_1(int32_t value)
	{
		___TotalCount_1 = value;
	}

	inline static int32_t get_offset_of_defaultIndex_2() { return static_cast<int32_t>(offsetof(CodePointIndexer_t1073906970, ___defaultIndex_2)); }
	inline int32_t get_defaultIndex_2() const { return ___defaultIndex_2; }
	inline int32_t* get_address_of_defaultIndex_2() { return &___defaultIndex_2; }
	inline void set_defaultIndex_2(int32_t value)
	{
		___defaultIndex_2 = value;
	}

	inline static int32_t get_offset_of_defaultCP_3() { return static_cast<int32_t>(offsetof(CodePointIndexer_t1073906970, ___defaultCP_3)); }
	inline int32_t get_defaultCP_3() const { return ___defaultCP_3; }
	inline int32_t* get_address_of_defaultCP_3() { return &___defaultCP_3; }
	inline void set_defaultCP_3(int32_t value)
	{
		___defaultCP_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEPOINTINDEXER_T1073906970_H
#ifndef TAILORINGINFO_T1449609243_H
#define TAILORINGINFO_T1449609243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.TailoringInfo
struct  TailoringInfo_t1449609243  : public RuntimeObject
{
public:
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::LCID
	int32_t ___LCID_0;
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::TailoringIndex
	int32_t ___TailoringIndex_1;
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::TailoringCount
	int32_t ___TailoringCount_2;
	// System.Boolean Mono.Globalization.Unicode.TailoringInfo::FrenchSort
	bool ___FrenchSort_3;

public:
	inline static int32_t get_offset_of_LCID_0() { return static_cast<int32_t>(offsetof(TailoringInfo_t1449609243, ___LCID_0)); }
	inline int32_t get_LCID_0() const { return ___LCID_0; }
	inline int32_t* get_address_of_LCID_0() { return &___LCID_0; }
	inline void set_LCID_0(int32_t value)
	{
		___LCID_0 = value;
	}

	inline static int32_t get_offset_of_TailoringIndex_1() { return static_cast<int32_t>(offsetof(TailoringInfo_t1449609243, ___TailoringIndex_1)); }
	inline int32_t get_TailoringIndex_1() const { return ___TailoringIndex_1; }
	inline int32_t* get_address_of_TailoringIndex_1() { return &___TailoringIndex_1; }
	inline void set_TailoringIndex_1(int32_t value)
	{
		___TailoringIndex_1 = value;
	}

	inline static int32_t get_offset_of_TailoringCount_2() { return static_cast<int32_t>(offsetof(TailoringInfo_t1449609243, ___TailoringCount_2)); }
	inline int32_t get_TailoringCount_2() const { return ___TailoringCount_2; }
	inline int32_t* get_address_of_TailoringCount_2() { return &___TailoringCount_2; }
	inline void set_TailoringCount_2(int32_t value)
	{
		___TailoringCount_2 = value;
	}

	inline static int32_t get_offset_of_FrenchSort_3() { return static_cast<int32_t>(offsetof(TailoringInfo_t1449609243, ___FrenchSort_3)); }
	inline bool get_FrenchSort_3() const { return ___FrenchSort_3; }
	inline bool* get_address_of_FrenchSort_3() { return &___FrenchSort_3; }
	inline void set_FrenchSort_3(bool value)
	{
		___FrenchSort_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAILORINGINFO_T1449609243_H
#ifndef CONTRACTION_T1673853792_H
#define CONTRACTION_T1673853792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Contraction
struct  Contraction_t1673853792  : public RuntimeObject
{
public:
	// System.Int32 Mono.Globalization.Unicode.Contraction::Index
	int32_t ___Index_0;
	// System.Char[] Mono.Globalization.Unicode.Contraction::Source
	CharU5BU5D_t1328083999* ___Source_1;
	// System.String Mono.Globalization.Unicode.Contraction::Replacement
	String_t* ___Replacement_2;
	// System.Byte[] Mono.Globalization.Unicode.Contraction::SortKey
	ByteU5BU5D_t3397334013* ___SortKey_3;

public:
	inline static int32_t get_offset_of_Index_0() { return static_cast<int32_t>(offsetof(Contraction_t1673853792, ___Index_0)); }
	inline int32_t get_Index_0() const { return ___Index_0; }
	inline int32_t* get_address_of_Index_0() { return &___Index_0; }
	inline void set_Index_0(int32_t value)
	{
		___Index_0 = value;
	}

	inline static int32_t get_offset_of_Source_1() { return static_cast<int32_t>(offsetof(Contraction_t1673853792, ___Source_1)); }
	inline CharU5BU5D_t1328083999* get_Source_1() const { return ___Source_1; }
	inline CharU5BU5D_t1328083999** get_address_of_Source_1() { return &___Source_1; }
	inline void set_Source_1(CharU5BU5D_t1328083999* value)
	{
		___Source_1 = value;
		Il2CppCodeGenWriteBarrier((&___Source_1), value);
	}

	inline static int32_t get_offset_of_Replacement_2() { return static_cast<int32_t>(offsetof(Contraction_t1673853792, ___Replacement_2)); }
	inline String_t* get_Replacement_2() const { return ___Replacement_2; }
	inline String_t** get_address_of_Replacement_2() { return &___Replacement_2; }
	inline void set_Replacement_2(String_t* value)
	{
		___Replacement_2 = value;
		Il2CppCodeGenWriteBarrier((&___Replacement_2), value);
	}

	inline static int32_t get_offset_of_SortKey_3() { return static_cast<int32_t>(offsetof(Contraction_t1673853792, ___SortKey_3)); }
	inline ByteU5BU5D_t3397334013* get_SortKey_3() const { return ___SortKey_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_SortKey_3() { return &___SortKey_3; }
	inline void set_SortKey_3(ByteU5BU5D_t3397334013* value)
	{
		___SortKey_3 = value;
		Il2CppCodeGenWriteBarrier((&___SortKey_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTRACTION_T1673853792_H
#ifndef PRIMEGENERATORBASE_T1053438167_H
#define PRIMEGENERATORBASE_T1053438167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct  PrimeGeneratorBase_t1053438167  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMEGENERATORBASE_T1053438167_H
#ifndef ENCRYPTEDPRIVATEKEYINFO_T1722354997_H
#define ENCRYPTEDPRIVATEKEYINFO_T1722354997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct  EncryptedPrivateKeyInfo_t1722354997  : public RuntimeObject
{
public:
	// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_algorithm
	String_t* ____algorithm_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_salt
	ByteU5BU5D_t3397334013* ____salt_1;
	// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_iterations
	int32_t ____iterations_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_data
	ByteU5BU5D_t3397334013* ____data_3;

public:
	inline static int32_t get_offset_of__algorithm_0() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t1722354997, ____algorithm_0)); }
	inline String_t* get__algorithm_0() const { return ____algorithm_0; }
	inline String_t** get_address_of__algorithm_0() { return &____algorithm_0; }
	inline void set__algorithm_0(String_t* value)
	{
		____algorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_0), value);
	}

	inline static int32_t get_offset_of__salt_1() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t1722354997, ____salt_1)); }
	inline ByteU5BU5D_t3397334013* get__salt_1() const { return ____salt_1; }
	inline ByteU5BU5D_t3397334013** get_address_of__salt_1() { return &____salt_1; }
	inline void set__salt_1(ByteU5BU5D_t3397334013* value)
	{
		____salt_1 = value;
		Il2CppCodeGenWriteBarrier((&____salt_1), value);
	}

	inline static int32_t get_offset_of__iterations_2() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t1722354997, ____iterations_2)); }
	inline int32_t get__iterations_2() const { return ____iterations_2; }
	inline int32_t* get_address_of__iterations_2() { return &____iterations_2; }
	inline void set__iterations_2(int32_t value)
	{
		____iterations_2 = value;
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t1722354997, ____data_3)); }
	inline ByteU5BU5D_t3397334013* get__data_3() const { return ____data_3; }
	inline ByteU5BU5D_t3397334013** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(ByteU5BU5D_t3397334013* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDPRIVATEKEYINFO_T1722354997_H
#ifndef X509STOREMANAGER_T1740460066_H
#define X509STOREMANAGER_T1740460066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509StoreManager
struct  X509StoreManager_t1740460066  : public RuntimeObject
{
public:

public:
};

struct X509StoreManager_t1740460066_StaticFields
{
public:
	// System.String Mono.Security.X509.X509StoreManager::_userPath
	String_t* ____userPath_0;
	// System.String Mono.Security.X509.X509StoreManager::_localMachinePath
	String_t* ____localMachinePath_1;
	// System.String Mono.Security.X509.X509StoreManager::_newLocalMachinePath
	String_t* ____newLocalMachinePath_2;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_userStore
	X509Stores_t3001420398 * ____userStore_3;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_machineStore
	X509Stores_t3001420398 * ____machineStore_4;

public:
	inline static int32_t get_offset_of__userPath_0() { return static_cast<int32_t>(offsetof(X509StoreManager_t1740460066_StaticFields, ____userPath_0)); }
	inline String_t* get__userPath_0() const { return ____userPath_0; }
	inline String_t** get_address_of__userPath_0() { return &____userPath_0; }
	inline void set__userPath_0(String_t* value)
	{
		____userPath_0 = value;
		Il2CppCodeGenWriteBarrier((&____userPath_0), value);
	}

	inline static int32_t get_offset_of__localMachinePath_1() { return static_cast<int32_t>(offsetof(X509StoreManager_t1740460066_StaticFields, ____localMachinePath_1)); }
	inline String_t* get__localMachinePath_1() const { return ____localMachinePath_1; }
	inline String_t** get_address_of__localMachinePath_1() { return &____localMachinePath_1; }
	inline void set__localMachinePath_1(String_t* value)
	{
		____localMachinePath_1 = value;
		Il2CppCodeGenWriteBarrier((&____localMachinePath_1), value);
	}

	inline static int32_t get_offset_of__newLocalMachinePath_2() { return static_cast<int32_t>(offsetof(X509StoreManager_t1740460066_StaticFields, ____newLocalMachinePath_2)); }
	inline String_t* get__newLocalMachinePath_2() const { return ____newLocalMachinePath_2; }
	inline String_t** get_address_of__newLocalMachinePath_2() { return &____newLocalMachinePath_2; }
	inline void set__newLocalMachinePath_2(String_t* value)
	{
		____newLocalMachinePath_2 = value;
		Il2CppCodeGenWriteBarrier((&____newLocalMachinePath_2), value);
	}

	inline static int32_t get_offset_of__userStore_3() { return static_cast<int32_t>(offsetof(X509StoreManager_t1740460066_StaticFields, ____userStore_3)); }
	inline X509Stores_t3001420398 * get__userStore_3() const { return ____userStore_3; }
	inline X509Stores_t3001420398 ** get_address_of__userStore_3() { return &____userStore_3; }
	inline void set__userStore_3(X509Stores_t3001420398 * value)
	{
		____userStore_3 = value;
		Il2CppCodeGenWriteBarrier((&____userStore_3), value);
	}

	inline static int32_t get_offset_of__machineStore_4() { return static_cast<int32_t>(offsetof(X509StoreManager_t1740460066_StaticFields, ____machineStore_4)); }
	inline X509Stores_t3001420398 * get__machineStore_4() const { return ____machineStore_4; }
	inline X509Stores_t3001420398 ** get_address_of__machineStore_4() { return &____machineStore_4; }
	inline void set__machineStore_4(X509Stores_t3001420398 * value)
	{
		____machineStore_4 = value;
		Il2CppCodeGenWriteBarrier((&____machineStore_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STOREMANAGER_T1740460066_H
#ifndef CRYPTOCONVERT_T4146607874_H
#define CRYPTOCONVERT_T4146607874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.CryptoConvert
struct  CryptoConvert_t4146607874  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONVERT_T4146607874_H
#ifndef X509STORE_T4028973563_H
#define X509STORE_T4028973563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Store
struct  X509Store_t4028973563  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Store::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::_certificates
	X509CertificateCollection_t3592472865 * ____certificates_1;
	// System.Boolean Mono.Security.X509.X509Store::_crl
	bool ____crl_2;
	// System.Boolean Mono.Security.X509.X509Store::_newFormat
	bool ____newFormat_3;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Store_t4028973563, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__certificates_1() { return static_cast<int32_t>(offsetof(X509Store_t4028973563, ____certificates_1)); }
	inline X509CertificateCollection_t3592472865 * get__certificates_1() const { return ____certificates_1; }
	inline X509CertificateCollection_t3592472865 ** get_address_of__certificates_1() { return &____certificates_1; }
	inline void set__certificates_1(X509CertificateCollection_t3592472865 * value)
	{
		____certificates_1 = value;
		Il2CppCodeGenWriteBarrier((&____certificates_1), value);
	}

	inline static int32_t get_offset_of__crl_2() { return static_cast<int32_t>(offsetof(X509Store_t4028973563, ____crl_2)); }
	inline bool get__crl_2() const { return ____crl_2; }
	inline bool* get_address_of__crl_2() { return &____crl_2; }
	inline void set__crl_2(bool value)
	{
		____crl_2 = value;
	}

	inline static int32_t get_offset_of__newFormat_3() { return static_cast<int32_t>(offsetof(X509Store_t4028973563, ____newFormat_3)); }
	inline bool get__newFormat_3() const { return ____newFormat_3; }
	inline bool* get_address_of__newFormat_3() { return &____newFormat_3; }
	inline void set__newFormat_3(bool value)
	{
		____newFormat_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORE_T4028973563_H
#ifndef X509STORES_T3001420398_H
#define X509STORES_T3001420398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Stores
struct  X509Stores_t3001420398  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Stores::_storePath
	String_t* ____storePath_0;
	// System.Boolean Mono.Security.X509.X509Stores::_newFormat
	bool ____newFormat_1;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_trusted
	X509Store_t4028973563 * ____trusted_2;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Stores_t3001420398, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__newFormat_1() { return static_cast<int32_t>(offsetof(X509Stores_t3001420398, ____newFormat_1)); }
	inline bool get__newFormat_1() const { return ____newFormat_1; }
	inline bool* get_address_of__newFormat_1() { return &____newFormat_1; }
	inline void set__newFormat_1(bool value)
	{
		____newFormat_1 = value;
	}

	inline static int32_t get_offset_of__trusted_2() { return static_cast<int32_t>(offsetof(X509Stores_t3001420398, ____trusted_2)); }
	inline X509Store_t4028973563 * get__trusted_2() const { return ____trusted_2; }
	inline X509Store_t4028973563 ** get_address_of__trusted_2() { return &____trusted_2; }
	inline void set__trusted_2(X509Store_t4028973563 * value)
	{
		____trusted_2 = value;
		Il2CppCodeGenWriteBarrier((&____trusted_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORES_T3001420398_H
#ifndef KEYBUILDER_T3965881084_H
#define KEYBUILDER_T3965881084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t3965881084  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t3965881084_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t2510243513 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t3965881084_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t2510243513 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t2510243513 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBUILDER_T3965881084_H
#ifndef PKCS8_T2103016899_H
#define PKCS8_T2103016899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8
struct  PKCS8_t2103016899  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS8_T2103016899_H
#ifndef PRIVATEKEYINFO_T92917103_H
#define PRIVATEKEYINFO_T92917103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct  PrivateKeyInfo_t92917103  : public RuntimeObject
{
public:
	// System.Int32 Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_version
	int32_t ____version_0;
	// System.String Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_algorithm
	String_t* ____algorithm_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_key
	ByteU5BU5D_t3397334013* ____key_2;
	// System.Collections.ArrayList Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_list
	ArrayList_t4252133567 * ____list_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t92917103, ____version_0)); }
	inline int32_t get__version_0() const { return ____version_0; }
	inline int32_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(int32_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__algorithm_1() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t92917103, ____algorithm_1)); }
	inline String_t* get__algorithm_1() const { return ____algorithm_1; }
	inline String_t** get_address_of__algorithm_1() { return &____algorithm_1; }
	inline void set__algorithm_1(String_t* value)
	{
		____algorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_1), value);
	}

	inline static int32_t get_offset_of__key_2() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t92917103, ____key_2)); }
	inline ByteU5BU5D_t3397334013* get__key_2() const { return ____key_2; }
	inline ByteU5BU5D_t3397334013** get_address_of__key_2() { return &____key_2; }
	inline void set__key_2(ByteU5BU5D_t3397334013* value)
	{
		____key_2 = value;
		Il2CppCodeGenWriteBarrier((&____key_2), value);
	}

	inline static int32_t get_offset_of__list_3() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t92917103, ____list_3)); }
	inline ArrayList_t4252133567 * get__list_3() const { return ____list_3; }
	inline ArrayList_t4252133567 ** get_address_of__list_3() { return &____list_3; }
	inline void set__list_3(ArrayList_t4252133567 * value)
	{
		____list_3 = value;
		Il2CppCodeGenWriteBarrier((&____list_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVATEKEYINFO_T92917103_H
#ifndef KEYPAIRPERSISTENCE_T3637935872_H
#define KEYPAIRPERSISTENCE_T3637935872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyPairPersistence
struct  KeyPairPersistence_t3637935872  : public RuntimeObject
{
public:
	// System.Security.Cryptography.CspParameters Mono.Security.Cryptography.KeyPairPersistence::_params
	CspParameters_t46065560 * ____params_4;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_keyvalue
	String_t* ____keyvalue_5;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_filename
	String_t* ____filename_6;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_container
	String_t* ____container_7;

public:
	inline static int32_t get_offset_of__params_4() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3637935872, ____params_4)); }
	inline CspParameters_t46065560 * get__params_4() const { return ____params_4; }
	inline CspParameters_t46065560 ** get_address_of__params_4() { return &____params_4; }
	inline void set__params_4(CspParameters_t46065560 * value)
	{
		____params_4 = value;
		Il2CppCodeGenWriteBarrier((&____params_4), value);
	}

	inline static int32_t get_offset_of__keyvalue_5() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3637935872, ____keyvalue_5)); }
	inline String_t* get__keyvalue_5() const { return ____keyvalue_5; }
	inline String_t** get_address_of__keyvalue_5() { return &____keyvalue_5; }
	inline void set__keyvalue_5(String_t* value)
	{
		____keyvalue_5 = value;
		Il2CppCodeGenWriteBarrier((&____keyvalue_5), value);
	}

	inline static int32_t get_offset_of__filename_6() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3637935872, ____filename_6)); }
	inline String_t* get__filename_6() const { return ____filename_6; }
	inline String_t** get_address_of__filename_6() { return &____filename_6; }
	inline void set__filename_6(String_t* value)
	{
		____filename_6 = value;
		Il2CppCodeGenWriteBarrier((&____filename_6), value);
	}

	inline static int32_t get_offset_of__container_7() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3637935872, ____container_7)); }
	inline String_t* get__container_7() const { return ____container_7; }
	inline String_t** get_address_of__container_7() { return &____container_7; }
	inline void set__container_7(String_t* value)
	{
		____container_7 = value;
		Il2CppCodeGenWriteBarrier((&____container_7), value);
	}
};

struct KeyPairPersistence_t3637935872_StaticFields
{
public:
	// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_userPathExists
	bool ____userPathExists_0;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_userPath
	String_t* ____userPath_1;
	// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_machinePathExists
	bool ____machinePathExists_2;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_machinePath
	String_t* ____machinePath_3;
	// System.Object Mono.Security.Cryptography.KeyPairPersistence::lockobj
	RuntimeObject * ___lockobj_8;

public:
	inline static int32_t get_offset_of__userPathExists_0() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3637935872_StaticFields, ____userPathExists_0)); }
	inline bool get__userPathExists_0() const { return ____userPathExists_0; }
	inline bool* get_address_of__userPathExists_0() { return &____userPathExists_0; }
	inline void set__userPathExists_0(bool value)
	{
		____userPathExists_0 = value;
	}

	inline static int32_t get_offset_of__userPath_1() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3637935872_StaticFields, ____userPath_1)); }
	inline String_t* get__userPath_1() const { return ____userPath_1; }
	inline String_t** get_address_of__userPath_1() { return &____userPath_1; }
	inline void set__userPath_1(String_t* value)
	{
		____userPath_1 = value;
		Il2CppCodeGenWriteBarrier((&____userPath_1), value);
	}

	inline static int32_t get_offset_of__machinePathExists_2() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3637935872_StaticFields, ____machinePathExists_2)); }
	inline bool get__machinePathExists_2() const { return ____machinePathExists_2; }
	inline bool* get_address_of__machinePathExists_2() { return &____machinePathExists_2; }
	inline void set__machinePathExists_2(bool value)
	{
		____machinePathExists_2 = value;
	}

	inline static int32_t get_offset_of__machinePath_3() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3637935872_StaticFields, ____machinePath_3)); }
	inline String_t* get__machinePath_3() const { return ____machinePath_3; }
	inline String_t** get_address_of__machinePath_3() { return &____machinePath_3; }
	inline void set__machinePath_3(String_t* value)
	{
		____machinePath_3 = value;
		Il2CppCodeGenWriteBarrier((&____machinePath_3), value);
	}

	inline static int32_t get_offset_of_lockobj_8() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3637935872_StaticFields, ___lockobj_8)); }
	inline RuntimeObject * get_lockobj_8() const { return ___lockobj_8; }
	inline RuntimeObject ** get_address_of_lockobj_8() { return &___lockobj_8; }
	inline void set_lockobj_8(RuntimeObject * value)
	{
		___lockobj_8 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYPAIRPERSISTENCE_T3637935872_H
#ifndef PKCS1_T3312870480_H
#define PKCS1_T3312870480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS1
struct  PKCS1_t3312870480  : public RuntimeObject
{
public:

public:
};

struct PKCS1_t3312870480_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA1
	ByteU5BU5D_t3397334013* ___emptySHA1_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA256
	ByteU5BU5D_t3397334013* ___emptySHA256_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA384
	ByteU5BU5D_t3397334013* ___emptySHA384_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA512
	ByteU5BU5D_t3397334013* ___emptySHA512_3;

public:
	inline static int32_t get_offset_of_emptySHA1_0() { return static_cast<int32_t>(offsetof(PKCS1_t3312870480_StaticFields, ___emptySHA1_0)); }
	inline ByteU5BU5D_t3397334013* get_emptySHA1_0() const { return ___emptySHA1_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_emptySHA1_0() { return &___emptySHA1_0; }
	inline void set_emptySHA1_0(ByteU5BU5D_t3397334013* value)
	{
		___emptySHA1_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA1_0), value);
	}

	inline static int32_t get_offset_of_emptySHA256_1() { return static_cast<int32_t>(offsetof(PKCS1_t3312870480_StaticFields, ___emptySHA256_1)); }
	inline ByteU5BU5D_t3397334013* get_emptySHA256_1() const { return ___emptySHA256_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_emptySHA256_1() { return &___emptySHA256_1; }
	inline void set_emptySHA256_1(ByteU5BU5D_t3397334013* value)
	{
		___emptySHA256_1 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA256_1), value);
	}

	inline static int32_t get_offset_of_emptySHA384_2() { return static_cast<int32_t>(offsetof(PKCS1_t3312870480_StaticFields, ___emptySHA384_2)); }
	inline ByteU5BU5D_t3397334013* get_emptySHA384_2() const { return ___emptySHA384_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_emptySHA384_2() { return &___emptySHA384_2; }
	inline void set_emptySHA384_2(ByteU5BU5D_t3397334013* value)
	{
		___emptySHA384_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA384_2), value);
	}

	inline static int32_t get_offset_of_emptySHA512_3() { return static_cast<int32_t>(offsetof(PKCS1_t3312870480_StaticFields, ___emptySHA512_3)); }
	inline ByteU5BU5D_t3397334013* get_emptySHA512_3() const { return ___emptySHA512_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_emptySHA512_3() { return &___emptySHA512_3; }
	inline void set_emptySHA512_3(ByteU5BU5D_t3397334013* value)
	{
		___emptySHA512_3 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA512_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1_T3312870480_H
#ifndef WIN32REGISTRYAPI_T2321265302_H
#define WIN32REGISTRYAPI_T2321265302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.Win32RegistryApi
struct  Win32RegistryApi_t2321265302  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.Win32.Win32RegistryApi::NativeBytesPerCharacter
	int32_t ___NativeBytesPerCharacter_0;

public:
	inline static int32_t get_offset_of_NativeBytesPerCharacter_0() { return static_cast<int32_t>(offsetof(Win32RegistryApi_t2321265302, ___NativeBytesPerCharacter_0)); }
	inline int32_t get_NativeBytesPerCharacter_0() const { return ___NativeBytesPerCharacter_0; }
	inline int32_t* get_address_of_NativeBytesPerCharacter_0() { return &___NativeBytesPerCharacter_0; }
	inline void set_NativeBytesPerCharacter_0(int32_t value)
	{
		___NativeBytesPerCharacter_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32REGISTRYAPI_T2321265302_H
#ifndef UNSAFENATIVEMETHODS_T1041081549_H
#define UNSAFENATIVEMETHODS_T1041081549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.UnsafeNativeMethods
struct  UnsafeNativeMethods_t1041081549  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNSAFENATIVEMETHODS_T1041081549_H
#ifndef KEYHANDLER_T1744274711_H
#define KEYHANDLER_T1744274711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.KeyHandler
struct  KeyHandler_t1744274711  : public RuntimeObject
{
public:
	// System.String Microsoft.Win32.KeyHandler::Dir
	String_t* ___Dir_2;
	// System.String Microsoft.Win32.KeyHandler::ActualDir
	String_t* ___ActualDir_3;
	// System.Boolean Microsoft.Win32.KeyHandler::IsVolatile
	bool ___IsVolatile_4;
	// System.Collections.Hashtable Microsoft.Win32.KeyHandler::values
	Hashtable_t909839986 * ___values_5;
	// System.String Microsoft.Win32.KeyHandler::file
	String_t* ___file_6;
	// System.Boolean Microsoft.Win32.KeyHandler::dirty
	bool ___dirty_7;

public:
	inline static int32_t get_offset_of_Dir_2() { return static_cast<int32_t>(offsetof(KeyHandler_t1744274711, ___Dir_2)); }
	inline String_t* get_Dir_2() const { return ___Dir_2; }
	inline String_t** get_address_of_Dir_2() { return &___Dir_2; }
	inline void set_Dir_2(String_t* value)
	{
		___Dir_2 = value;
		Il2CppCodeGenWriteBarrier((&___Dir_2), value);
	}

	inline static int32_t get_offset_of_ActualDir_3() { return static_cast<int32_t>(offsetof(KeyHandler_t1744274711, ___ActualDir_3)); }
	inline String_t* get_ActualDir_3() const { return ___ActualDir_3; }
	inline String_t** get_address_of_ActualDir_3() { return &___ActualDir_3; }
	inline void set_ActualDir_3(String_t* value)
	{
		___ActualDir_3 = value;
		Il2CppCodeGenWriteBarrier((&___ActualDir_3), value);
	}

	inline static int32_t get_offset_of_IsVolatile_4() { return static_cast<int32_t>(offsetof(KeyHandler_t1744274711, ___IsVolatile_4)); }
	inline bool get_IsVolatile_4() const { return ___IsVolatile_4; }
	inline bool* get_address_of_IsVolatile_4() { return &___IsVolatile_4; }
	inline void set_IsVolatile_4(bool value)
	{
		___IsVolatile_4 = value;
	}

	inline static int32_t get_offset_of_values_5() { return static_cast<int32_t>(offsetof(KeyHandler_t1744274711, ___values_5)); }
	inline Hashtable_t909839986 * get_values_5() const { return ___values_5; }
	inline Hashtable_t909839986 ** get_address_of_values_5() { return &___values_5; }
	inline void set_values_5(Hashtable_t909839986 * value)
	{
		___values_5 = value;
		Il2CppCodeGenWriteBarrier((&___values_5), value);
	}

	inline static int32_t get_offset_of_file_6() { return static_cast<int32_t>(offsetof(KeyHandler_t1744274711, ___file_6)); }
	inline String_t* get_file_6() const { return ___file_6; }
	inline String_t** get_address_of_file_6() { return &___file_6; }
	inline void set_file_6(String_t* value)
	{
		___file_6 = value;
		Il2CppCodeGenWriteBarrier((&___file_6), value);
	}

	inline static int32_t get_offset_of_dirty_7() { return static_cast<int32_t>(offsetof(KeyHandler_t1744274711, ___dirty_7)); }
	inline bool get_dirty_7() const { return ___dirty_7; }
	inline bool* get_address_of_dirty_7() { return &___dirty_7; }
	inline void set_dirty_7(bool value)
	{
		___dirty_7 = value;
	}
};

struct KeyHandler_t1744274711_StaticFields
{
public:
	// System.Collections.Hashtable Microsoft.Win32.KeyHandler::key_to_handler
	Hashtable_t909839986 * ___key_to_handler_0;
	// System.Collections.Hashtable Microsoft.Win32.KeyHandler::dir_to_handler
	Hashtable_t909839986 * ___dir_to_handler_1;
	// System.String Microsoft.Win32.KeyHandler::user_store
	String_t* ___user_store_8;
	// System.String Microsoft.Win32.KeyHandler::machine_store
	String_t* ___machine_store_9;

public:
	inline static int32_t get_offset_of_key_to_handler_0() { return static_cast<int32_t>(offsetof(KeyHandler_t1744274711_StaticFields, ___key_to_handler_0)); }
	inline Hashtable_t909839986 * get_key_to_handler_0() const { return ___key_to_handler_0; }
	inline Hashtable_t909839986 ** get_address_of_key_to_handler_0() { return &___key_to_handler_0; }
	inline void set_key_to_handler_0(Hashtable_t909839986 * value)
	{
		___key_to_handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_to_handler_0), value);
	}

	inline static int32_t get_offset_of_dir_to_handler_1() { return static_cast<int32_t>(offsetof(KeyHandler_t1744274711_StaticFields, ___dir_to_handler_1)); }
	inline Hashtable_t909839986 * get_dir_to_handler_1() const { return ___dir_to_handler_1; }
	inline Hashtable_t909839986 ** get_address_of_dir_to_handler_1() { return &___dir_to_handler_1; }
	inline void set_dir_to_handler_1(Hashtable_t909839986 * value)
	{
		___dir_to_handler_1 = value;
		Il2CppCodeGenWriteBarrier((&___dir_to_handler_1), value);
	}

	inline static int32_t get_offset_of_user_store_8() { return static_cast<int32_t>(offsetof(KeyHandler_t1744274711_StaticFields, ___user_store_8)); }
	inline String_t* get_user_store_8() const { return ___user_store_8; }
	inline String_t** get_address_of_user_store_8() { return &___user_store_8; }
	inline void set_user_store_8(String_t* value)
	{
		___user_store_8 = value;
		Il2CppCodeGenWriteBarrier((&___user_store_8), value);
	}

	inline static int32_t get_offset_of_machine_store_9() { return static_cast<int32_t>(offsetof(KeyHandler_t1744274711_StaticFields, ___machine_store_9)); }
	inline String_t* get_machine_store_9() const { return ___machine_store_9; }
	inline String_t** get_address_of_machine_store_9() { return &___machine_store_9; }
	inline void set_machine_store_9(String_t* value)
	{
		___machine_store_9 = value;
		Il2CppCodeGenWriteBarrier((&___machine_store_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYHANDLER_T1744274711_H
#ifndef UNIXREGISTRYAPI_T2447246231_H
#define UNIXREGISTRYAPI_T2447246231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.UnixRegistryApi
struct  UnixRegistryApi_t2447246231  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXREGISTRYAPI_T2447246231_H
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
#ifndef EXCEPTION_T1927440687_H
#define EXCEPTION_T1927440687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1927440687  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t1927440687 * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t1975884510 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t2217612696* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t169632028* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____innerException_4)); }
	inline Exception_t1927440687 * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t1927440687 ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t1927440687 * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t1975884510 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t1975884510 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t1975884510 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t2217612696* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t2217612696** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t2217612696* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t169632028* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t169632028** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t169632028* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t1927440687_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t1927440687_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t1927440687_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t1927440687_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t1975884510 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t2217612696* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t1927440687_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t1927440687_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t1975884510 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t2217612696* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T1927440687_H
#ifndef ASYMMETRICALGORITHM_T784058677_H
#define ASYMMETRICALGORITHM_T784058677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t784058677  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t1153004758* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t784058677, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t784058677, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t1153004758* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t1153004758** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t1153004758* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T784058677_H
#ifndef COLLECTIONBASE_T1101587467_H
#define COLLECTIONBASE_T1101587467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t1101587467  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t4252133567 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t1101587467, ___list_0)); }
	inline ArrayList_t4252133567 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4252133567 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4252133567 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T1101587467_H
#ifndef MARSHALBYREFOBJECT_T1285298191_H
#define MARSHALBYREFOBJECT_T1285298191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t1285298191  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t1656058977 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t1285298191, ____identity_0)); }
	inline ServerIdentity_t1656058977 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t1656058977 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t1656058977 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t1285298191_marshaled_pinvoke
{
	ServerIdentity_t1656058977 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t1285298191_marshaled_com
{
	ServerIdentity_t1656058977 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T1285298191_H
#ifndef REGISTRYKEYCOMPARER_T284335197_H
#define REGISTRYKEYCOMPARER_T284335197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryKeyComparer
struct  RegistryKeyComparer_t284335197  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYKEYCOMPARER_T284335197_H
#ifndef MSCOMPATUNICODETABLE_T1231687219_H
#define MSCOMPATUNICODETABLE_T1231687219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.MSCompatUnicodeTable
struct  MSCompatUnicodeTable_t1231687219  : public RuntimeObject
{
public:

public:
};

struct MSCompatUnicodeTable_t1231687219_StaticFields
{
public:
	// System.Int32 Mono.Globalization.Unicode.MSCompatUnicodeTable::MaxExpansionLength
	int32_t ___MaxExpansionLength_0;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::ignorableFlags
	uint8_t* ___ignorableFlags_1;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::categories
	uint8_t* ___categories_2;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::level1
	uint8_t* ___level1_3;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::level2
	uint8_t* ___level2_4;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::level3
	uint8_t* ___level3_5;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHScategory
	uint8_t* ___cjkCHScategory_6;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHTcategory
	uint8_t* ___cjkCHTcategory_7;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkJAcategory
	uint8_t* ___cjkJAcategory_8;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkKOcategory
	uint8_t* ___cjkKOcategory_9;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHSlv1
	uint8_t* ___cjkCHSlv1_10;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHTlv1
	uint8_t* ___cjkCHTlv1_11;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkJAlv1
	uint8_t* ___cjkJAlv1_12;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkKOlv1
	uint8_t* ___cjkKOlv1_13;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkKOlv2
	uint8_t* ___cjkKOlv2_14;
	// System.Char[] Mono.Globalization.Unicode.MSCompatUnicodeTable::tailoringArr
	CharU5BU5D_t1328083999* ___tailoringArr_15;
	// Mono.Globalization.Unicode.TailoringInfo[] Mono.Globalization.Unicode.MSCompatUnicodeTable::tailoringInfos
	TailoringInfoU5BU5D_t2757346586* ___tailoringInfos_16;
	// System.Object Mono.Globalization.Unicode.MSCompatUnicodeTable::forLock
	RuntimeObject * ___forLock_17;
	// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::isReady
	bool ___isReady_18;

public:
	inline static int32_t get_offset_of_MaxExpansionLength_0() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1231687219_StaticFields, ___MaxExpansionLength_0)); }
	inline int32_t get_MaxExpansionLength_0() const { return ___MaxExpansionLength_0; }
	inline int32_t* get_address_of_MaxExpansionLength_0() { return &___MaxExpansionLength_0; }
	inline void set_MaxExpansionLength_0(int32_t value)
	{
		___MaxExpansionLength_0 = value;
	}

	inline static int32_t get_offset_of_ignorableFlags_1() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1231687219_StaticFields, ___ignorableFlags_1)); }
	inline uint8_t* get_ignorableFlags_1() const { return ___ignorableFlags_1; }
	inline uint8_t** get_address_of_ignorableFlags_1() { return &___ignorableFlags_1; }
	inline void set_ignorableFlags_1(uint8_t* value)
	{
		___ignorableFlags_1 = value;
	}

	inline static int32_t get_offset_of_categories_2() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1231687219_StaticFields, ___categories_2)); }
	inline uint8_t* get_categories_2() const { return ___categories_2; }
	inline uint8_t** get_address_of_categories_2() { return &___categories_2; }
	inline void set_categories_2(uint8_t* value)
	{
		___categories_2 = value;
	}

	inline static int32_t get_offset_of_level1_3() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1231687219_StaticFields, ___level1_3)); }
	inline uint8_t* get_level1_3() const { return ___level1_3; }
	inline uint8_t** get_address_of_level1_3() { return &___level1_3; }
	inline void set_level1_3(uint8_t* value)
	{
		___level1_3 = value;
	}

	inline static int32_t get_offset_of_level2_4() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1231687219_StaticFields, ___level2_4)); }
	inline uint8_t* get_level2_4() const { return ___level2_4; }
	inline uint8_t** get_address_of_level2_4() { return &___level2_4; }
	inline void set_level2_4(uint8_t* value)
	{
		___level2_4 = value;
	}

	inline static int32_t get_offset_of_level3_5() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1231687219_StaticFields, ___level3_5)); }
	inline uint8_t* get_level3_5() const { return ___level3_5; }
	inline uint8_t** get_address_of_level3_5() { return &___level3_5; }
	inline void set_level3_5(uint8_t* value)
	{
		___level3_5 = value;
	}

	inline static int32_t get_offset_of_cjkCHScategory_6() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1231687219_StaticFields, ___cjkCHScategory_6)); }
	inline uint8_t* get_cjkCHScategory_6() const { return ___cjkCHScategory_6; }
	inline uint8_t** get_address_of_cjkCHScategory_6() { return &___cjkCHScategory_6; }
	inline void set_cjkCHScategory_6(uint8_t* value)
	{
		___cjkCHScategory_6 = value;
	}

	inline static int32_t get_offset_of_cjkCHTcategory_7() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1231687219_StaticFields, ___cjkCHTcategory_7)); }
	inline uint8_t* get_cjkCHTcategory_7() const { return ___cjkCHTcategory_7; }
	inline uint8_t** get_address_of_cjkCHTcategory_7() { return &___cjkCHTcategory_7; }
	inline void set_cjkCHTcategory_7(uint8_t* value)
	{
		___cjkCHTcategory_7 = value;
	}

	inline static int32_t get_offset_of_cjkJAcategory_8() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1231687219_StaticFields, ___cjkJAcategory_8)); }
	inline uint8_t* get_cjkJAcategory_8() const { return ___cjkJAcategory_8; }
	inline uint8_t** get_address_of_cjkJAcategory_8() { return &___cjkJAcategory_8; }
	inline void set_cjkJAcategory_8(uint8_t* value)
	{
		___cjkJAcategory_8 = value;
	}

	inline static int32_t get_offset_of_cjkKOcategory_9() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1231687219_StaticFields, ___cjkKOcategory_9)); }
	inline uint8_t* get_cjkKOcategory_9() const { return ___cjkKOcategory_9; }
	inline uint8_t** get_address_of_cjkKOcategory_9() { return &___cjkKOcategory_9; }
	inline void set_cjkKOcategory_9(uint8_t* value)
	{
		___cjkKOcategory_9 = value;
	}

	inline static int32_t get_offset_of_cjkCHSlv1_10() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1231687219_StaticFields, ___cjkCHSlv1_10)); }
	inline uint8_t* get_cjkCHSlv1_10() const { return ___cjkCHSlv1_10; }
	inline uint8_t** get_address_of_cjkCHSlv1_10() { return &___cjkCHSlv1_10; }
	inline void set_cjkCHSlv1_10(uint8_t* value)
	{
		___cjkCHSlv1_10 = value;
	}

	inline static int32_t get_offset_of_cjkCHTlv1_11() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1231687219_StaticFields, ___cjkCHTlv1_11)); }
	inline uint8_t* get_cjkCHTlv1_11() const { return ___cjkCHTlv1_11; }
	inline uint8_t** get_address_of_cjkCHTlv1_11() { return &___cjkCHTlv1_11; }
	inline void set_cjkCHTlv1_11(uint8_t* value)
	{
		___cjkCHTlv1_11 = value;
	}

	inline static int32_t get_offset_of_cjkJAlv1_12() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1231687219_StaticFields, ___cjkJAlv1_12)); }
	inline uint8_t* get_cjkJAlv1_12() const { return ___cjkJAlv1_12; }
	inline uint8_t** get_address_of_cjkJAlv1_12() { return &___cjkJAlv1_12; }
	inline void set_cjkJAlv1_12(uint8_t* value)
	{
		___cjkJAlv1_12 = value;
	}

	inline static int32_t get_offset_of_cjkKOlv1_13() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1231687219_StaticFields, ___cjkKOlv1_13)); }
	inline uint8_t* get_cjkKOlv1_13() const { return ___cjkKOlv1_13; }
	inline uint8_t** get_address_of_cjkKOlv1_13() { return &___cjkKOlv1_13; }
	inline void set_cjkKOlv1_13(uint8_t* value)
	{
		___cjkKOlv1_13 = value;
	}

	inline static int32_t get_offset_of_cjkKOlv2_14() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1231687219_StaticFields, ___cjkKOlv2_14)); }
	inline uint8_t* get_cjkKOlv2_14() const { return ___cjkKOlv2_14; }
	inline uint8_t** get_address_of_cjkKOlv2_14() { return &___cjkKOlv2_14; }
	inline void set_cjkKOlv2_14(uint8_t* value)
	{
		___cjkKOlv2_14 = value;
	}

	inline static int32_t get_offset_of_tailoringArr_15() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1231687219_StaticFields, ___tailoringArr_15)); }
	inline CharU5BU5D_t1328083999* get_tailoringArr_15() const { return ___tailoringArr_15; }
	inline CharU5BU5D_t1328083999** get_address_of_tailoringArr_15() { return &___tailoringArr_15; }
	inline void set_tailoringArr_15(CharU5BU5D_t1328083999* value)
	{
		___tailoringArr_15 = value;
		Il2CppCodeGenWriteBarrier((&___tailoringArr_15), value);
	}

	inline static int32_t get_offset_of_tailoringInfos_16() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1231687219_StaticFields, ___tailoringInfos_16)); }
	inline TailoringInfoU5BU5D_t2757346586* get_tailoringInfos_16() const { return ___tailoringInfos_16; }
	inline TailoringInfoU5BU5D_t2757346586** get_address_of_tailoringInfos_16() { return &___tailoringInfos_16; }
	inline void set_tailoringInfos_16(TailoringInfoU5BU5D_t2757346586* value)
	{
		___tailoringInfos_16 = value;
		Il2CppCodeGenWriteBarrier((&___tailoringInfos_16), value);
	}

	inline static int32_t get_offset_of_forLock_17() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1231687219_StaticFields, ___forLock_17)); }
	inline RuntimeObject * get_forLock_17() const { return ___forLock_17; }
	inline RuntimeObject ** get_address_of_forLock_17() { return &___forLock_17; }
	inline void set_forLock_17(RuntimeObject * value)
	{
		___forLock_17 = value;
		Il2CppCodeGenWriteBarrier((&___forLock_17), value);
	}

	inline static int32_t get_offset_of_isReady_18() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1231687219_StaticFields, ___isReady_18)); }
	inline bool get_isReady_18() const { return ___isReady_18; }
	inline bool* get_address_of_isReady_18() { return &___isReady_18; }
	inline void set_isReady_18(bool value)
	{
		___isReady_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MSCOMPATUNICODETABLE_T1231687219_H
#ifndef U3CU3EC_T827785594_H
#define U3CU3EC_T827785594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.MSCompatUnicodeTable/<>c
struct  U3CU3Ec_t827785594  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t827785594_StaticFields
{
public:
	// Mono.Globalization.Unicode.MSCompatUnicodeTable/<>c Mono.Globalization.Unicode.MSCompatUnicodeTable/<>c::<>9
	U3CU3Ec_t827785594 * ___U3CU3E9_0;
	// System.Comparison`1<Mono.Globalization.Unicode.Level2Map> Mono.Globalization.Unicode.MSCompatUnicodeTable/<>c::<>9__17_0
	Comparison_1_t289277281 * ___U3CU3E9__17_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t827785594_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t827785594 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t827785594 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t827785594 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__17_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t827785594_StaticFields, ___U3CU3E9__17_0_1)); }
	inline Comparison_1_t289277281 * get_U3CU3E9__17_0_1() const { return ___U3CU3E9__17_0_1; }
	inline Comparison_1_t289277281 ** get_address_of_U3CU3E9__17_0_1() { return &___U3CU3E9__17_0_1; }
	inline void set_U3CU3E9__17_0_1(Comparison_1_t289277281 * value)
	{
		___U3CU3E9__17_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__17_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T827785594_H
#ifndef CONTRACTIONCOMPARER_T1150321365_H
#define CONTRACTIONCOMPARER_T1150321365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.ContractionComparer
struct  ContractionComparer_t1150321365  : public RuntimeObject
{
public:

public:
};

struct ContractionComparer_t1150321365_StaticFields
{
public:
	// Mono.Globalization.Unicode.ContractionComparer Mono.Globalization.Unicode.ContractionComparer::Instance
	ContractionComparer_t1150321365 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(ContractionComparer_t1150321365_StaticFields, ___Instance_0)); }
	inline ContractionComparer_t1150321365 * get_Instance_0() const { return ___Instance_0; }
	inline ContractionComparer_t1150321365 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(ContractionComparer_t1150321365 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTRACTIONCOMPARER_T1150321365_H
#ifndef LEVEL2MAP_T3322505726_H
#define LEVEL2MAP_T3322505726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Level2Map
struct  Level2Map_t3322505726  : public RuntimeObject
{
public:
	// System.Byte Mono.Globalization.Unicode.Level2Map::Source
	uint8_t ___Source_0;
	// System.Byte Mono.Globalization.Unicode.Level2Map::Replace
	uint8_t ___Replace_1;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(Level2Map_t3322505726, ___Source_0)); }
	inline uint8_t get_Source_0() const { return ___Source_0; }
	inline uint8_t* get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(uint8_t value)
	{
		___Source_0 = value;
	}

	inline static int32_t get_offset_of_Replace_1() { return static_cast<int32_t>(offsetof(Level2Map_t3322505726, ___Replace_1)); }
	inline uint8_t get_Replace_1() const { return ___Replace_1; }
	inline uint8_t* get_address_of_Replace_1() { return &___Replace_1; }
	inline void set_Replace_1(uint8_t value)
	{
		___Replace_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVEL2MAP_T3322505726_H
#ifndef MSCOMPATUNICODETABLEUTIL_T2040269023_H
#define MSCOMPATUNICODETABLEUTIL_T2040269023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.MSCompatUnicodeTableUtil
struct  MSCompatUnicodeTableUtil_t2040269023  : public RuntimeObject
{
public:

public:
};

struct MSCompatUnicodeTableUtil_t2040269023_StaticFields
{
public:
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Ignorable
	CodePointIndexer_t1073906970 * ___Ignorable_0;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Category
	CodePointIndexer_t1073906970 * ___Category_1;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Level1
	CodePointIndexer_t1073906970 * ___Level1_2;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Level2
	CodePointIndexer_t1073906970 * ___Level2_3;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Level3
	CodePointIndexer_t1073906970 * ___Level3_4;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::CjkCHS
	CodePointIndexer_t1073906970 * ___CjkCHS_5;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Cjk
	CodePointIndexer_t1073906970 * ___Cjk_6;

public:
	inline static int32_t get_offset_of_Ignorable_0() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t2040269023_StaticFields, ___Ignorable_0)); }
	inline CodePointIndexer_t1073906970 * get_Ignorable_0() const { return ___Ignorable_0; }
	inline CodePointIndexer_t1073906970 ** get_address_of_Ignorable_0() { return &___Ignorable_0; }
	inline void set_Ignorable_0(CodePointIndexer_t1073906970 * value)
	{
		___Ignorable_0 = value;
		Il2CppCodeGenWriteBarrier((&___Ignorable_0), value);
	}

	inline static int32_t get_offset_of_Category_1() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t2040269023_StaticFields, ___Category_1)); }
	inline CodePointIndexer_t1073906970 * get_Category_1() const { return ___Category_1; }
	inline CodePointIndexer_t1073906970 ** get_address_of_Category_1() { return &___Category_1; }
	inline void set_Category_1(CodePointIndexer_t1073906970 * value)
	{
		___Category_1 = value;
		Il2CppCodeGenWriteBarrier((&___Category_1), value);
	}

	inline static int32_t get_offset_of_Level1_2() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t2040269023_StaticFields, ___Level1_2)); }
	inline CodePointIndexer_t1073906970 * get_Level1_2() const { return ___Level1_2; }
	inline CodePointIndexer_t1073906970 ** get_address_of_Level1_2() { return &___Level1_2; }
	inline void set_Level1_2(CodePointIndexer_t1073906970 * value)
	{
		___Level1_2 = value;
		Il2CppCodeGenWriteBarrier((&___Level1_2), value);
	}

	inline static int32_t get_offset_of_Level2_3() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t2040269023_StaticFields, ___Level2_3)); }
	inline CodePointIndexer_t1073906970 * get_Level2_3() const { return ___Level2_3; }
	inline CodePointIndexer_t1073906970 ** get_address_of_Level2_3() { return &___Level2_3; }
	inline void set_Level2_3(CodePointIndexer_t1073906970 * value)
	{
		___Level2_3 = value;
		Il2CppCodeGenWriteBarrier((&___Level2_3), value);
	}

	inline static int32_t get_offset_of_Level3_4() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t2040269023_StaticFields, ___Level3_4)); }
	inline CodePointIndexer_t1073906970 * get_Level3_4() const { return ___Level3_4; }
	inline CodePointIndexer_t1073906970 ** get_address_of_Level3_4() { return &___Level3_4; }
	inline void set_Level3_4(CodePointIndexer_t1073906970 * value)
	{
		___Level3_4 = value;
		Il2CppCodeGenWriteBarrier((&___Level3_4), value);
	}

	inline static int32_t get_offset_of_CjkCHS_5() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t2040269023_StaticFields, ___CjkCHS_5)); }
	inline CodePointIndexer_t1073906970 * get_CjkCHS_5() const { return ___CjkCHS_5; }
	inline CodePointIndexer_t1073906970 ** get_address_of_CjkCHS_5() { return &___CjkCHS_5; }
	inline void set_CjkCHS_5(CodePointIndexer_t1073906970 * value)
	{
		___CjkCHS_5 = value;
		Il2CppCodeGenWriteBarrier((&___CjkCHS_5), value);
	}

	inline static int32_t get_offset_of_Cjk_6() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t2040269023_StaticFields, ___Cjk_6)); }
	inline CodePointIndexer_t1073906970 * get_Cjk_6() const { return ___Cjk_6; }
	inline CodePointIndexer_t1073906970 ** get_address_of_Cjk_6() { return &___Cjk_6; }
	inline void set_Cjk_6(CodePointIndexer_t1073906970 * value)
	{
		___Cjk_6 = value;
		Il2CppCodeGenWriteBarrier((&___Cjk_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MSCOMPATUNICODETABLEUTIL_T2040269023_H
#ifndef REGISTRY_T1325736645_H
#define REGISTRY_T1325736645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.Registry
struct  Registry_t1325736645  : public RuntimeObject
{
public:

public:
};

struct Registry_t1325736645_StaticFields
{
public:
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::ClassesRoot
	RegistryKey_t2287932784 * ___ClassesRoot_0;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::CurrentConfig
	RegistryKey_t2287932784 * ___CurrentConfig_1;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::CurrentUser
	RegistryKey_t2287932784 * ___CurrentUser_2;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::DynData
	RegistryKey_t2287932784 * ___DynData_3;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::LocalMachine
	RegistryKey_t2287932784 * ___LocalMachine_4;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::PerformanceData
	RegistryKey_t2287932784 * ___PerformanceData_5;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::Users
	RegistryKey_t2287932784 * ___Users_6;

public:
	inline static int32_t get_offset_of_ClassesRoot_0() { return static_cast<int32_t>(offsetof(Registry_t1325736645_StaticFields, ___ClassesRoot_0)); }
	inline RegistryKey_t2287932784 * get_ClassesRoot_0() const { return ___ClassesRoot_0; }
	inline RegistryKey_t2287932784 ** get_address_of_ClassesRoot_0() { return &___ClassesRoot_0; }
	inline void set_ClassesRoot_0(RegistryKey_t2287932784 * value)
	{
		___ClassesRoot_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassesRoot_0), value);
	}

	inline static int32_t get_offset_of_CurrentConfig_1() { return static_cast<int32_t>(offsetof(Registry_t1325736645_StaticFields, ___CurrentConfig_1)); }
	inline RegistryKey_t2287932784 * get_CurrentConfig_1() const { return ___CurrentConfig_1; }
	inline RegistryKey_t2287932784 ** get_address_of_CurrentConfig_1() { return &___CurrentConfig_1; }
	inline void set_CurrentConfig_1(RegistryKey_t2287932784 * value)
	{
		___CurrentConfig_1 = value;
		Il2CppCodeGenWriteBarrier((&___CurrentConfig_1), value);
	}

	inline static int32_t get_offset_of_CurrentUser_2() { return static_cast<int32_t>(offsetof(Registry_t1325736645_StaticFields, ___CurrentUser_2)); }
	inline RegistryKey_t2287932784 * get_CurrentUser_2() const { return ___CurrentUser_2; }
	inline RegistryKey_t2287932784 ** get_address_of_CurrentUser_2() { return &___CurrentUser_2; }
	inline void set_CurrentUser_2(RegistryKey_t2287932784 * value)
	{
		___CurrentUser_2 = value;
		Il2CppCodeGenWriteBarrier((&___CurrentUser_2), value);
	}

	inline static int32_t get_offset_of_DynData_3() { return static_cast<int32_t>(offsetof(Registry_t1325736645_StaticFields, ___DynData_3)); }
	inline RegistryKey_t2287932784 * get_DynData_3() const { return ___DynData_3; }
	inline RegistryKey_t2287932784 ** get_address_of_DynData_3() { return &___DynData_3; }
	inline void set_DynData_3(RegistryKey_t2287932784 * value)
	{
		___DynData_3 = value;
		Il2CppCodeGenWriteBarrier((&___DynData_3), value);
	}

	inline static int32_t get_offset_of_LocalMachine_4() { return static_cast<int32_t>(offsetof(Registry_t1325736645_StaticFields, ___LocalMachine_4)); }
	inline RegistryKey_t2287932784 * get_LocalMachine_4() const { return ___LocalMachine_4; }
	inline RegistryKey_t2287932784 ** get_address_of_LocalMachine_4() { return &___LocalMachine_4; }
	inline void set_LocalMachine_4(RegistryKey_t2287932784 * value)
	{
		___LocalMachine_4 = value;
		Il2CppCodeGenWriteBarrier((&___LocalMachine_4), value);
	}

	inline static int32_t get_offset_of_PerformanceData_5() { return static_cast<int32_t>(offsetof(Registry_t1325736645_StaticFields, ___PerformanceData_5)); }
	inline RegistryKey_t2287932784 * get_PerformanceData_5() const { return ___PerformanceData_5; }
	inline RegistryKey_t2287932784 ** get_address_of_PerformanceData_5() { return &___PerformanceData_5; }
	inline void set_PerformanceData_5(RegistryKey_t2287932784 * value)
	{
		___PerformanceData_5 = value;
		Il2CppCodeGenWriteBarrier((&___PerformanceData_5), value);
	}

	inline static int32_t get_offset_of_Users_6() { return static_cast<int32_t>(offsetof(Registry_t1325736645_StaticFields, ___Users_6)); }
	inline RegistryKey_t2287932784 * get_Users_6() const { return ___Users_6; }
	inline RegistryKey_t2287932784 ** get_address_of_Users_6() { return &___Users_6; }
	inline void set_Users_6(RegistryKey_t2287932784 * value)
	{
		___Users_6 = value;
		Il2CppCodeGenWriteBarrier((&___Users_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRY_T1325736645_H
#ifndef EXPANDSTRING_T1083116867_H
#define EXPANDSTRING_T1083116867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.ExpandString
struct  ExpandString_t1083116867  : public RuntimeObject
{
public:
	// System.String Microsoft.Win32.ExpandString::value
	String_t* ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(ExpandString_t1083116867, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDSTRING_T1083116867_H
#ifndef SIMPLECOLLATOR_T4081201584_H
#define SIMPLECOLLATOR_T4081201584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator
struct  SimpleCollator_t4081201584  : public RuntimeObject
{
public:
	// System.Globalization.TextInfo Mono.Globalization.Unicode.SimpleCollator::textInfo
	TextInfo_t3620182823 * ___textInfo_2;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.SimpleCollator::cjkIndexer
	CodePointIndexer_t1073906970 * ___cjkIndexer_3;
	// Mono.Globalization.Unicode.Contraction[] Mono.Globalization.Unicode.SimpleCollator::contractions
	ContractionU5BU5D_t4233480993* ___contractions_4;
	// Mono.Globalization.Unicode.Level2Map[] Mono.Globalization.Unicode.SimpleCollator::level2Maps
	Level2MapU5BU5D_t2838259787* ___level2Maps_5;
	// System.Byte[] Mono.Globalization.Unicode.SimpleCollator::unsafeFlags
	ByteU5BU5D_t3397334013* ___unsafeFlags_6;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkCatTable
	uint8_t* ___cjkCatTable_7;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkLv1Table
	uint8_t* ___cjkLv1Table_8;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkLv2Table
	uint8_t* ___cjkLv2Table_9;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.SimpleCollator::cjkLv2Indexer
	CodePointIndexer_t1073906970 * ___cjkLv2Indexer_10;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator::lcid
	int32_t ___lcid_11;
	// System.Boolean Mono.Globalization.Unicode.SimpleCollator::frenchSort
	bool ___frenchSort_12;

public:
	inline static int32_t get_offset_of_textInfo_2() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___textInfo_2)); }
	inline TextInfo_t3620182823 * get_textInfo_2() const { return ___textInfo_2; }
	inline TextInfo_t3620182823 ** get_address_of_textInfo_2() { return &___textInfo_2; }
	inline void set_textInfo_2(TextInfo_t3620182823 * value)
	{
		___textInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_2), value);
	}

	inline static int32_t get_offset_of_cjkIndexer_3() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___cjkIndexer_3)); }
	inline CodePointIndexer_t1073906970 * get_cjkIndexer_3() const { return ___cjkIndexer_3; }
	inline CodePointIndexer_t1073906970 ** get_address_of_cjkIndexer_3() { return &___cjkIndexer_3; }
	inline void set_cjkIndexer_3(CodePointIndexer_t1073906970 * value)
	{
		___cjkIndexer_3 = value;
		Il2CppCodeGenWriteBarrier((&___cjkIndexer_3), value);
	}

	inline static int32_t get_offset_of_contractions_4() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___contractions_4)); }
	inline ContractionU5BU5D_t4233480993* get_contractions_4() const { return ___contractions_4; }
	inline ContractionU5BU5D_t4233480993** get_address_of_contractions_4() { return &___contractions_4; }
	inline void set_contractions_4(ContractionU5BU5D_t4233480993* value)
	{
		___contractions_4 = value;
		Il2CppCodeGenWriteBarrier((&___contractions_4), value);
	}

	inline static int32_t get_offset_of_level2Maps_5() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___level2Maps_5)); }
	inline Level2MapU5BU5D_t2838259787* get_level2Maps_5() const { return ___level2Maps_5; }
	inline Level2MapU5BU5D_t2838259787** get_address_of_level2Maps_5() { return &___level2Maps_5; }
	inline void set_level2Maps_5(Level2MapU5BU5D_t2838259787* value)
	{
		___level2Maps_5 = value;
		Il2CppCodeGenWriteBarrier((&___level2Maps_5), value);
	}

	inline static int32_t get_offset_of_unsafeFlags_6() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___unsafeFlags_6)); }
	inline ByteU5BU5D_t3397334013* get_unsafeFlags_6() const { return ___unsafeFlags_6; }
	inline ByteU5BU5D_t3397334013** get_address_of_unsafeFlags_6() { return &___unsafeFlags_6; }
	inline void set_unsafeFlags_6(ByteU5BU5D_t3397334013* value)
	{
		___unsafeFlags_6 = value;
		Il2CppCodeGenWriteBarrier((&___unsafeFlags_6), value);
	}

	inline static int32_t get_offset_of_cjkCatTable_7() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___cjkCatTable_7)); }
	inline uint8_t* get_cjkCatTable_7() const { return ___cjkCatTable_7; }
	inline uint8_t** get_address_of_cjkCatTable_7() { return &___cjkCatTable_7; }
	inline void set_cjkCatTable_7(uint8_t* value)
	{
		___cjkCatTable_7 = value;
	}

	inline static int32_t get_offset_of_cjkLv1Table_8() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___cjkLv1Table_8)); }
	inline uint8_t* get_cjkLv1Table_8() const { return ___cjkLv1Table_8; }
	inline uint8_t** get_address_of_cjkLv1Table_8() { return &___cjkLv1Table_8; }
	inline void set_cjkLv1Table_8(uint8_t* value)
	{
		___cjkLv1Table_8 = value;
	}

	inline static int32_t get_offset_of_cjkLv2Table_9() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___cjkLv2Table_9)); }
	inline uint8_t* get_cjkLv2Table_9() const { return ___cjkLv2Table_9; }
	inline uint8_t** get_address_of_cjkLv2Table_9() { return &___cjkLv2Table_9; }
	inline void set_cjkLv2Table_9(uint8_t* value)
	{
		___cjkLv2Table_9 = value;
	}

	inline static int32_t get_offset_of_cjkLv2Indexer_10() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___cjkLv2Indexer_10)); }
	inline CodePointIndexer_t1073906970 * get_cjkLv2Indexer_10() const { return ___cjkLv2Indexer_10; }
	inline CodePointIndexer_t1073906970 ** get_address_of_cjkLv2Indexer_10() { return &___cjkLv2Indexer_10; }
	inline void set_cjkLv2Indexer_10(CodePointIndexer_t1073906970 * value)
	{
		___cjkLv2Indexer_10 = value;
		Il2CppCodeGenWriteBarrier((&___cjkLv2Indexer_10), value);
	}

	inline static int32_t get_offset_of_lcid_11() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___lcid_11)); }
	inline int32_t get_lcid_11() const { return ___lcid_11; }
	inline int32_t* get_address_of_lcid_11() { return &___lcid_11; }
	inline void set_lcid_11(int32_t value)
	{
		___lcid_11 = value;
	}

	inline static int32_t get_offset_of_frenchSort_12() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___frenchSort_12)); }
	inline bool get_frenchSort_12() const { return ___frenchSort_12; }
	inline bool* get_address_of_frenchSort_12() { return &___frenchSort_12; }
	inline void set_frenchSort_12(bool value)
	{
		___frenchSort_12 = value;
	}
};

struct SimpleCollator_t4081201584_StaticFields
{
public:
	// System.Boolean Mono.Globalization.Unicode.SimpleCollator::QuickCheckDisabled
	bool ___QuickCheckDisabled_0;
	// Mono.Globalization.Unicode.SimpleCollator Mono.Globalization.Unicode.SimpleCollator::invariant
	SimpleCollator_t4081201584 * ___invariant_1;

public:
	inline static int32_t get_offset_of_QuickCheckDisabled_0() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584_StaticFields, ___QuickCheckDisabled_0)); }
	inline bool get_QuickCheckDisabled_0() const { return ___QuickCheckDisabled_0; }
	inline bool* get_address_of_QuickCheckDisabled_0() { return &___QuickCheckDisabled_0; }
	inline void set_QuickCheckDisabled_0(bool value)
	{
		___QuickCheckDisabled_0 = value;
	}

	inline static int32_t get_offset_of_invariant_1() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584_StaticFields, ___invariant_1)); }
	inline SimpleCollator_t4081201584 * get_invariant_1() const { return ___invariant_1; }
	inline SimpleCollator_t4081201584 ** get_address_of_invariant_1() { return &___invariant_1; }
	inline void set_invariant_1(SimpleCollator_t4081201584 * value)
	{
		___invariant_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLECOLLATOR_T4081201584_H
#ifndef NORMALIZATIONTABLEUTIL_T1112052683_H
#define NORMALIZATIONTABLEUTIL_T1112052683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.NormalizationTableUtil
struct  NormalizationTableUtil_t1112052683  : public RuntimeObject
{
public:

public:
};

struct NormalizationTableUtil_t1112052683_StaticFields
{
public:
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.NormalizationTableUtil::Prop
	CodePointIndexer_t1073906970 * ___Prop_0;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.NormalizationTableUtil::Map
	CodePointIndexer_t1073906970 * ___Map_1;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.NormalizationTableUtil::Combining
	CodePointIndexer_t1073906970 * ___Combining_2;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.NormalizationTableUtil::Composite
	CodePointIndexer_t1073906970 * ___Composite_3;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.NormalizationTableUtil::Helper
	CodePointIndexer_t1073906970 * ___Helper_4;

public:
	inline static int32_t get_offset_of_Prop_0() { return static_cast<int32_t>(offsetof(NormalizationTableUtil_t1112052683_StaticFields, ___Prop_0)); }
	inline CodePointIndexer_t1073906970 * get_Prop_0() const { return ___Prop_0; }
	inline CodePointIndexer_t1073906970 ** get_address_of_Prop_0() { return &___Prop_0; }
	inline void set_Prop_0(CodePointIndexer_t1073906970 * value)
	{
		___Prop_0 = value;
		Il2CppCodeGenWriteBarrier((&___Prop_0), value);
	}

	inline static int32_t get_offset_of_Map_1() { return static_cast<int32_t>(offsetof(NormalizationTableUtil_t1112052683_StaticFields, ___Map_1)); }
	inline CodePointIndexer_t1073906970 * get_Map_1() const { return ___Map_1; }
	inline CodePointIndexer_t1073906970 ** get_address_of_Map_1() { return &___Map_1; }
	inline void set_Map_1(CodePointIndexer_t1073906970 * value)
	{
		___Map_1 = value;
		Il2CppCodeGenWriteBarrier((&___Map_1), value);
	}

	inline static int32_t get_offset_of_Combining_2() { return static_cast<int32_t>(offsetof(NormalizationTableUtil_t1112052683_StaticFields, ___Combining_2)); }
	inline CodePointIndexer_t1073906970 * get_Combining_2() const { return ___Combining_2; }
	inline CodePointIndexer_t1073906970 ** get_address_of_Combining_2() { return &___Combining_2; }
	inline void set_Combining_2(CodePointIndexer_t1073906970 * value)
	{
		___Combining_2 = value;
		Il2CppCodeGenWriteBarrier((&___Combining_2), value);
	}

	inline static int32_t get_offset_of_Composite_3() { return static_cast<int32_t>(offsetof(NormalizationTableUtil_t1112052683_StaticFields, ___Composite_3)); }
	inline CodePointIndexer_t1073906970 * get_Composite_3() const { return ___Composite_3; }
	inline CodePointIndexer_t1073906970 ** get_address_of_Composite_3() { return &___Composite_3; }
	inline void set_Composite_3(CodePointIndexer_t1073906970 * value)
	{
		___Composite_3 = value;
		Il2CppCodeGenWriteBarrier((&___Composite_3), value);
	}

	inline static int32_t get_offset_of_Helper_4() { return static_cast<int32_t>(offsetof(NormalizationTableUtil_t1112052683_StaticFields, ___Helper_4)); }
	inline CodePointIndexer_t1073906970 * get_Helper_4() const { return ___Helper_4; }
	inline CodePointIndexer_t1073906970 ** get_address_of_Helper_4() { return &___Helper_4; }
	inline void set_Helper_4(CodePointIndexer_t1073906970 * value)
	{
		___Helper_4 = value;
		Il2CppCodeGenWriteBarrier((&___Helper_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NORMALIZATIONTABLEUTIL_T1112052683_H
#ifndef ATTRLISTIMPL_T4015491015_H
#define ATTRLISTIMPL_T4015491015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.SmallXmlParser/AttrListImpl
struct  AttrListImpl_t4015491015  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> Mono.Xml.SmallXmlParser/AttrListImpl::attrNames
	List_1_t1398341365 * ___attrNames_0;
	// System.Collections.Generic.List`1<System.String> Mono.Xml.SmallXmlParser/AttrListImpl::attrValues
	List_1_t1398341365 * ___attrValues_1;

public:
	inline static int32_t get_offset_of_attrNames_0() { return static_cast<int32_t>(offsetof(AttrListImpl_t4015491015, ___attrNames_0)); }
	inline List_1_t1398341365 * get_attrNames_0() const { return ___attrNames_0; }
	inline List_1_t1398341365 ** get_address_of_attrNames_0() { return &___attrNames_0; }
	inline void set_attrNames_0(List_1_t1398341365 * value)
	{
		___attrNames_0 = value;
		Il2CppCodeGenWriteBarrier((&___attrNames_0), value);
	}

	inline static int32_t get_offset_of_attrValues_1() { return static_cast<int32_t>(offsetof(AttrListImpl_t4015491015, ___attrValues_1)); }
	inline List_1_t1398341365 * get_attrValues_1() const { return ___attrValues_1; }
	inline List_1_t1398341365 ** get_address_of_attrValues_1() { return &___attrValues_1; }
	inline void set_attrValues_1(List_1_t1398341365 * value)
	{
		___attrValues_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrValues_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRLISTIMPL_T4015491015_H
#ifndef URI_T1510604476_H
#define URI_T1510604476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Uri
struct  Uri_t1510604476  : public RuntimeObject
{
public:
	// System.Boolean Mono.Security.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String Mono.Security.Uri::source
	String_t* ___source_1;
	// System.String Mono.Security.Uri::scheme
	String_t* ___scheme_2;
	// System.String Mono.Security.Uri::host
	String_t* ___host_3;
	// System.Int32 Mono.Security.Uri::port
	int32_t ___port_4;
	// System.String Mono.Security.Uri::path
	String_t* ___path_5;
	// System.String Mono.Security.Uri::query
	String_t* ___query_6;
	// System.String Mono.Security.Uri::fragment
	String_t* ___fragment_7;
	// System.String Mono.Security.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean Mono.Security.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean Mono.Security.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.Boolean Mono.Security.Uri::userEscaped
	bool ___userEscaped_11;
	// System.String Mono.Security.Uri::cachedToString
	String_t* ___cachedToString_12;
	// System.String Mono.Security.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_13;
	// System.Int32 Mono.Security.Uri::cachedHashCode
	int32_t ___cachedHashCode_14;
	// System.Boolean Mono.Security.Uri::reduce
	bool ___reduce_15;

public:
	inline static int32_t get_offset_of_isUnixFilePath_0() { return static_cast<int32_t>(offsetof(Uri_t1510604476, ___isUnixFilePath_0)); }
	inline bool get_isUnixFilePath_0() const { return ___isUnixFilePath_0; }
	inline bool* get_address_of_isUnixFilePath_0() { return &___isUnixFilePath_0; }
	inline void set_isUnixFilePath_0(bool value)
	{
		___isUnixFilePath_0 = value;
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(Uri_t1510604476, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_scheme_2() { return static_cast<int32_t>(offsetof(Uri_t1510604476, ___scheme_2)); }
	inline String_t* get_scheme_2() const { return ___scheme_2; }
	inline String_t** get_address_of_scheme_2() { return &___scheme_2; }
	inline void set_scheme_2(String_t* value)
	{
		___scheme_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_2), value);
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(Uri_t1510604476, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(Uri_t1510604476, ___port_4)); }
	inline int32_t get_port_4() const { return ___port_4; }
	inline int32_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(int32_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(Uri_t1510604476, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((&___path_5), value);
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(Uri_t1510604476, ___query_6)); }
	inline String_t* get_query_6() const { return ___query_6; }
	inline String_t** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(String_t* value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((&___query_6), value);
	}

	inline static int32_t get_offset_of_fragment_7() { return static_cast<int32_t>(offsetof(Uri_t1510604476, ___fragment_7)); }
	inline String_t* get_fragment_7() const { return ___fragment_7; }
	inline String_t** get_address_of_fragment_7() { return &___fragment_7; }
	inline void set_fragment_7(String_t* value)
	{
		___fragment_7 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_7), value);
	}

	inline static int32_t get_offset_of_userinfo_8() { return static_cast<int32_t>(offsetof(Uri_t1510604476, ___userinfo_8)); }
	inline String_t* get_userinfo_8() const { return ___userinfo_8; }
	inline String_t** get_address_of_userinfo_8() { return &___userinfo_8; }
	inline void set_userinfo_8(String_t* value)
	{
		___userinfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_8), value);
	}

	inline static int32_t get_offset_of_isUnc_9() { return static_cast<int32_t>(offsetof(Uri_t1510604476, ___isUnc_9)); }
	inline bool get_isUnc_9() const { return ___isUnc_9; }
	inline bool* get_address_of_isUnc_9() { return &___isUnc_9; }
	inline void set_isUnc_9(bool value)
	{
		___isUnc_9 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_10() { return static_cast<int32_t>(offsetof(Uri_t1510604476, ___isOpaquePart_10)); }
	inline bool get_isOpaquePart_10() const { return ___isOpaquePart_10; }
	inline bool* get_address_of_isOpaquePart_10() { return &___isOpaquePart_10; }
	inline void set_isOpaquePart_10(bool value)
	{
		___isOpaquePart_10 = value;
	}

	inline static int32_t get_offset_of_userEscaped_11() { return static_cast<int32_t>(offsetof(Uri_t1510604476, ___userEscaped_11)); }
	inline bool get_userEscaped_11() const { return ___userEscaped_11; }
	inline bool* get_address_of_userEscaped_11() { return &___userEscaped_11; }
	inline void set_userEscaped_11(bool value)
	{
		___userEscaped_11 = value;
	}

	inline static int32_t get_offset_of_cachedToString_12() { return static_cast<int32_t>(offsetof(Uri_t1510604476, ___cachedToString_12)); }
	inline String_t* get_cachedToString_12() const { return ___cachedToString_12; }
	inline String_t** get_address_of_cachedToString_12() { return &___cachedToString_12; }
	inline void set_cachedToString_12(String_t* value)
	{
		___cachedToString_12 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_12), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_13() { return static_cast<int32_t>(offsetof(Uri_t1510604476, ___cachedLocalPath_13)); }
	inline String_t* get_cachedLocalPath_13() const { return ___cachedLocalPath_13; }
	inline String_t** get_address_of_cachedLocalPath_13() { return &___cachedLocalPath_13; }
	inline void set_cachedLocalPath_13(String_t* value)
	{
		___cachedLocalPath_13 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_13), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_14() { return static_cast<int32_t>(offsetof(Uri_t1510604476, ___cachedHashCode_14)); }
	inline int32_t get_cachedHashCode_14() const { return ___cachedHashCode_14; }
	inline int32_t* get_address_of_cachedHashCode_14() { return &___cachedHashCode_14; }
	inline void set_cachedHashCode_14(int32_t value)
	{
		___cachedHashCode_14 = value;
	}

	inline static int32_t get_offset_of_reduce_15() { return static_cast<int32_t>(offsetof(Uri_t1510604476, ___reduce_15)); }
	inline bool get_reduce_15() const { return ___reduce_15; }
	inline bool* get_address_of_reduce_15() { return &___reduce_15; }
	inline void set_reduce_15(bool value)
	{
		___reduce_15 = value;
	}
};

struct Uri_t1510604476_StaticFields
{
public:
	// System.String Mono.Security.Uri::hexUpperChars
	String_t* ___hexUpperChars_16;
	// System.String Mono.Security.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_17;
	// System.String Mono.Security.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_18;
	// System.String Mono.Security.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_19;
	// System.String Mono.Security.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_20;
	// System.String Mono.Security.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_21;
	// System.String Mono.Security.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_22;
	// System.String Mono.Security.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_23;
	// System.String Mono.Security.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_24;
	// System.String Mono.Security.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_25;
	// Mono.Security.Uri/UriScheme[] Mono.Security.Uri::schemes
	UriSchemeU5BU5D_t409881140* ___schemes_26;

public:
	inline static int32_t get_offset_of_hexUpperChars_16() { return static_cast<int32_t>(offsetof(Uri_t1510604476_StaticFields, ___hexUpperChars_16)); }
	inline String_t* get_hexUpperChars_16() const { return ___hexUpperChars_16; }
	inline String_t** get_address_of_hexUpperChars_16() { return &___hexUpperChars_16; }
	inline void set_hexUpperChars_16(String_t* value)
	{
		___hexUpperChars_16 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_16), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_17() { return static_cast<int32_t>(offsetof(Uri_t1510604476_StaticFields, ___SchemeDelimiter_17)); }
	inline String_t* get_SchemeDelimiter_17() const { return ___SchemeDelimiter_17; }
	inline String_t** get_address_of_SchemeDelimiter_17() { return &___SchemeDelimiter_17; }
	inline void set_SchemeDelimiter_17(String_t* value)
	{
		___SchemeDelimiter_17 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_17), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_18() { return static_cast<int32_t>(offsetof(Uri_t1510604476_StaticFields, ___UriSchemeFile_18)); }
	inline String_t* get_UriSchemeFile_18() const { return ___UriSchemeFile_18; }
	inline String_t** get_address_of_UriSchemeFile_18() { return &___UriSchemeFile_18; }
	inline void set_UriSchemeFile_18(String_t* value)
	{
		___UriSchemeFile_18 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_18), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_19() { return static_cast<int32_t>(offsetof(Uri_t1510604476_StaticFields, ___UriSchemeFtp_19)); }
	inline String_t* get_UriSchemeFtp_19() const { return ___UriSchemeFtp_19; }
	inline String_t** get_address_of_UriSchemeFtp_19() { return &___UriSchemeFtp_19; }
	inline void set_UriSchemeFtp_19(String_t* value)
	{
		___UriSchemeFtp_19 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_19), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_20() { return static_cast<int32_t>(offsetof(Uri_t1510604476_StaticFields, ___UriSchemeGopher_20)); }
	inline String_t* get_UriSchemeGopher_20() const { return ___UriSchemeGopher_20; }
	inline String_t** get_address_of_UriSchemeGopher_20() { return &___UriSchemeGopher_20; }
	inline void set_UriSchemeGopher_20(String_t* value)
	{
		___UriSchemeGopher_20 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_21() { return static_cast<int32_t>(offsetof(Uri_t1510604476_StaticFields, ___UriSchemeHttp_21)); }
	inline String_t* get_UriSchemeHttp_21() const { return ___UriSchemeHttp_21; }
	inline String_t** get_address_of_UriSchemeHttp_21() { return &___UriSchemeHttp_21; }
	inline void set_UriSchemeHttp_21(String_t* value)
	{
		___UriSchemeHttp_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_22() { return static_cast<int32_t>(offsetof(Uri_t1510604476_StaticFields, ___UriSchemeHttps_22)); }
	inline String_t* get_UriSchemeHttps_22() const { return ___UriSchemeHttps_22; }
	inline String_t** get_address_of_UriSchemeHttps_22() { return &___UriSchemeHttps_22; }
	inline void set_UriSchemeHttps_22(String_t* value)
	{
		___UriSchemeHttps_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_23() { return static_cast<int32_t>(offsetof(Uri_t1510604476_StaticFields, ___UriSchemeMailto_23)); }
	inline String_t* get_UriSchemeMailto_23() const { return ___UriSchemeMailto_23; }
	inline String_t** get_address_of_UriSchemeMailto_23() { return &___UriSchemeMailto_23; }
	inline void set_UriSchemeMailto_23(String_t* value)
	{
		___UriSchemeMailto_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_24() { return static_cast<int32_t>(offsetof(Uri_t1510604476_StaticFields, ___UriSchemeNews_24)); }
	inline String_t* get_UriSchemeNews_24() const { return ___UriSchemeNews_24; }
	inline String_t** get_address_of_UriSchemeNews_24() { return &___UriSchemeNews_24; }
	inline void set_UriSchemeNews_24(String_t* value)
	{
		___UriSchemeNews_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_25() { return static_cast<int32_t>(offsetof(Uri_t1510604476_StaticFields, ___UriSchemeNntp_25)); }
	inline String_t* get_UriSchemeNntp_25() const { return ___UriSchemeNntp_25; }
	inline String_t** get_address_of_UriSchemeNntp_25() { return &___UriSchemeNntp_25; }
	inline void set_UriSchemeNntp_25(String_t* value)
	{
		___UriSchemeNntp_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_25), value);
	}

	inline static int32_t get_offset_of_schemes_26() { return static_cast<int32_t>(offsetof(Uri_t1510604476_StaticFields, ___schemes_26)); }
	inline UriSchemeU5BU5D_t409881140* get_schemes_26() const { return ___schemes_26; }
	inline UriSchemeU5BU5D_t409881140** get_address_of_schemes_26() { return &___schemes_26; }
	inline void set_schemes_26(UriSchemeU5BU5D_t409881140* value)
	{
		___schemes_26 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T1510604476_H
#ifndef RUNTIMEMARSHAL_T3798850754_H
#define RUNTIMEMARSHAL_T3798850754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.RuntimeMarshal
struct  RuntimeMarshal_t3798850754  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEMARSHAL_T3798850754_H
#ifndef SAFEBAG_T2166702855_H
#define SAFEBAG_T2166702855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.SafeBag
struct  SafeBag_t2166702855  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.SafeBag::_bagOID
	String_t* ____bagOID_0;
	// Mono.Security.ASN1 Mono.Security.X509.SafeBag::_asn1
	ASN1_t924533535 * ____asn1_1;

public:
	inline static int32_t get_offset_of__bagOID_0() { return static_cast<int32_t>(offsetof(SafeBag_t2166702855, ____bagOID_0)); }
	inline String_t* get__bagOID_0() const { return ____bagOID_0; }
	inline String_t** get_address_of__bagOID_0() { return &____bagOID_0; }
	inline void set__bagOID_0(String_t* value)
	{
		____bagOID_0 = value;
		Il2CppCodeGenWriteBarrier((&____bagOID_0), value);
	}

	inline static int32_t get_offset_of__asn1_1() { return static_cast<int32_t>(offsetof(SafeBag_t2166702855, ____asn1_1)); }
	inline ASN1_t924533535 * get__asn1_1() const { return ____asn1_1; }
	inline ASN1_t924533535 ** get_address_of__asn1_1() { return &____asn1_1; }
	inline void set__asn1_1(ASN1_t924533535 * value)
	{
		____asn1_1 = value;
		Il2CppCodeGenWriteBarrier((&____asn1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEBAG_T2166702855_H
#ifndef CONTENTINFO_T1443605387_H
#define CONTENTINFO_T1443605387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/ContentInfo
struct  ContentInfo_t1443605387  : public RuntimeObject
{
public:
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t924533535 * ___content_1;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentInfo_t1443605387, ___contentType_0)); }
	inline String_t* get_contentType_0() const { return ___contentType_0; }
	inline String_t** get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(String_t* value)
	{
		___contentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(ContentInfo_t1443605387, ___content_1)); }
	inline ASN1_t924533535 * get_content_1() const { return ___content_1; }
	inline ASN1_t924533535 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(ASN1_t924533535 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTINFO_T1443605387_H
#ifndef RUNTIMESTRUCTS_T3054717562_H
#define RUNTIMESTRUCTS_T3054717562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.RuntimeStructs
struct  RuntimeStructs_t3054717562  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMESTRUCTS_T3054717562_H
#ifndef STRONGNAME_T117835354_H
#define STRONGNAME_T117835354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.StrongName
struct  StrongName_t117835354  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RSA Mono.Security.StrongName::rsa
	RSA_t3719518354 * ___rsa_0;
	// System.Byte[] Mono.Security.StrongName::publicKey
	ByteU5BU5D_t3397334013* ___publicKey_1;
	// System.Byte[] Mono.Security.StrongName::keyToken
	ByteU5BU5D_t3397334013* ___keyToken_2;
	// System.String Mono.Security.StrongName::tokenAlgorithm
	String_t* ___tokenAlgorithm_3;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(StrongName_t117835354, ___rsa_0)); }
	inline RSA_t3719518354 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3719518354 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3719518354 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_publicKey_1() { return static_cast<int32_t>(offsetof(StrongName_t117835354, ___publicKey_1)); }
	inline ByteU5BU5D_t3397334013* get_publicKey_1() const { return ___publicKey_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_publicKey_1() { return &___publicKey_1; }
	inline void set_publicKey_1(ByteU5BU5D_t3397334013* value)
	{
		___publicKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_1), value);
	}

	inline static int32_t get_offset_of_keyToken_2() { return static_cast<int32_t>(offsetof(StrongName_t117835354, ___keyToken_2)); }
	inline ByteU5BU5D_t3397334013* get_keyToken_2() const { return ___keyToken_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_keyToken_2() { return &___keyToken_2; }
	inline void set_keyToken_2(ByteU5BU5D_t3397334013* value)
	{
		___keyToken_2 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_2), value);
	}

	inline static int32_t get_offset_of_tokenAlgorithm_3() { return static_cast<int32_t>(offsetof(StrongName_t117835354, ___tokenAlgorithm_3)); }
	inline String_t* get_tokenAlgorithm_3() const { return ___tokenAlgorithm_3; }
	inline String_t** get_address_of_tokenAlgorithm_3() { return &___tokenAlgorithm_3; }
	inline void set_tokenAlgorithm_3(String_t* value)
	{
		___tokenAlgorithm_3 = value;
		Il2CppCodeGenWriteBarrier((&___tokenAlgorithm_3), value);
	}
};

struct StrongName_t117835354_StaticFields
{
public:
	// System.Object Mono.Security.StrongName::lockObject
	RuntimeObject * ___lockObject_4;

public:
	inline static int32_t get_offset_of_lockObject_4() { return static_cast<int32_t>(offsetof(StrongName_t117835354_StaticFields, ___lockObject_4)); }
	inline RuntimeObject * get_lockObject_4() const { return ___lockObject_4; }
	inline RuntimeObject ** get_address_of_lockObject_4() { return &___lockObject_4; }
	inline void set_lockObject_4(RuntimeObject * value)
	{
		___lockObject_4 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAME_T117835354_H
#ifndef SIGNEDDATA_T1944945924_H
#define SIGNEDDATA_T1944945924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/SignedData
struct  SignedData_t1944945924  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/SignedData::version
	uint8_t ___version_0;
	// System.String Mono.Security.PKCS7/SignedData::hashAlgorithm
	String_t* ___hashAlgorithm_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/SignedData::contentInfo
	ContentInfo_t1443605387 * ___contentInfo_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.PKCS7/SignedData::certs
	X509CertificateCollection_t3592472865 * ___certs_3;
	// System.Collections.ArrayList Mono.Security.PKCS7/SignedData::crls
	ArrayList_t4252133567 * ___crls_4;
	// Mono.Security.PKCS7/SignerInfo Mono.Security.PKCS7/SignedData::signerInfo
	SignerInfo_t1683925522 * ___signerInfo_5;
	// System.Boolean Mono.Security.PKCS7/SignedData::mda
	bool ___mda_6;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(SignedData_t1944945924, ___version_0)); }
	inline uint8_t get_version_0() const { return ___version_0; }
	inline uint8_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(uint8_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_hashAlgorithm_1() { return static_cast<int32_t>(offsetof(SignedData_t1944945924, ___hashAlgorithm_1)); }
	inline String_t* get_hashAlgorithm_1() const { return ___hashAlgorithm_1; }
	inline String_t** get_address_of_hashAlgorithm_1() { return &___hashAlgorithm_1; }
	inline void set_hashAlgorithm_1(String_t* value)
	{
		___hashAlgorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashAlgorithm_1), value);
	}

	inline static int32_t get_offset_of_contentInfo_2() { return static_cast<int32_t>(offsetof(SignedData_t1944945924, ___contentInfo_2)); }
	inline ContentInfo_t1443605387 * get_contentInfo_2() const { return ___contentInfo_2; }
	inline ContentInfo_t1443605387 ** get_address_of_contentInfo_2() { return &___contentInfo_2; }
	inline void set_contentInfo_2(ContentInfo_t1443605387 * value)
	{
		___contentInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___contentInfo_2), value);
	}

	inline static int32_t get_offset_of_certs_3() { return static_cast<int32_t>(offsetof(SignedData_t1944945924, ___certs_3)); }
	inline X509CertificateCollection_t3592472865 * get_certs_3() const { return ___certs_3; }
	inline X509CertificateCollection_t3592472865 ** get_address_of_certs_3() { return &___certs_3; }
	inline void set_certs_3(X509CertificateCollection_t3592472865 * value)
	{
		___certs_3 = value;
		Il2CppCodeGenWriteBarrier((&___certs_3), value);
	}

	inline static int32_t get_offset_of_crls_4() { return static_cast<int32_t>(offsetof(SignedData_t1944945924, ___crls_4)); }
	inline ArrayList_t4252133567 * get_crls_4() const { return ___crls_4; }
	inline ArrayList_t4252133567 ** get_address_of_crls_4() { return &___crls_4; }
	inline void set_crls_4(ArrayList_t4252133567 * value)
	{
		___crls_4 = value;
		Il2CppCodeGenWriteBarrier((&___crls_4), value);
	}

	inline static int32_t get_offset_of_signerInfo_5() { return static_cast<int32_t>(offsetof(SignedData_t1944945924, ___signerInfo_5)); }
	inline SignerInfo_t1683925522 * get_signerInfo_5() const { return ___signerInfo_5; }
	inline SignerInfo_t1683925522 ** get_address_of_signerInfo_5() { return &___signerInfo_5; }
	inline void set_signerInfo_5(SignerInfo_t1683925522 * value)
	{
		___signerInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___signerInfo_5), value);
	}

	inline static int32_t get_offset_of_mda_6() { return static_cast<int32_t>(offsetof(SignedData_t1944945924, ___mda_6)); }
	inline bool get_mda_6() const { return ___mda_6; }
	inline bool* get_address_of_mda_6() { return &___mda_6; }
	inline void set_mda_6(bool value)
	{
		___mda_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNEDDATA_T1944945924_H
#ifndef PKCS7_T3223261922_H
#define PKCS7_T3223261922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7
struct  PKCS7_t3223261922  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS7_T3223261922_H
#ifndef ENCRYPTEDDATA_T2656813772_H
#define ENCRYPTEDDATA_T2656813772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/EncryptedData
struct  EncryptedData_t2656813772  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_t1443605387 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_t1443605387 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_t3397334013* ____encrypted_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EncryptedData_t2656813772, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EncryptedData_t2656813772, ____content_1)); }
	inline ContentInfo_t1443605387 * get__content_1() const { return ____content_1; }
	inline ContentInfo_t1443605387 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_t1443605387 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier((&____content_1), value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EncryptedData_t2656813772, ____encryptionAlgorithm_2)); }
	inline ContentInfo_t1443605387 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_t1443605387 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_t1443605387 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____encryptionAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__encrypted_3() { return static_cast<int32_t>(offsetof(EncryptedData_t2656813772, ____encrypted_3)); }
	inline ByteU5BU5D_t3397334013* get__encrypted_3() const { return ____encrypted_3; }
	inline ByteU5BU5D_t3397334013** get_address_of__encrypted_3() { return &____encrypted_3; }
	inline void set__encrypted_3(ByteU5BU5D_t3397334013* value)
	{
		____encrypted_3 = value;
		Il2CppCodeGenWriteBarrier((&____encrypted_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDDATA_T2656813772_H
#ifndef ASN1_T924533535_H
#define ASN1_T924533535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t924533535  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t3397334013* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t4252133567 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t924533535, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t924533535, ___m_aValue_1)); }
	inline ByteU5BU5D_t3397334013* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t3397334013* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t924533535, ___elist_2)); }
	inline ArrayList_t4252133567 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t4252133567 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t4252133567 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((&___elist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1_T924533535_H
#ifndef ASN1CONVERT_T3301846396_H
#define ASN1CONVERT_T3301846396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1Convert
struct  ASN1Convert_t3301846396  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1CONVERT_T3301846396_H
#ifndef BITCONVERTERLE_T2825370260_H
#define BITCONVERTERLE_T2825370260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.BitConverterLE
struct  BitConverterLE_t2825370260  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTERLE_T2825370260_H
#ifndef BIGINTEGER_T925946152_H
#define BIGINTEGER_T925946152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger
struct  BigInteger_t925946152  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t59386216* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_t925946152, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t925946152, ___data_1)); }
	inline UInt32U5BU5D_t59386216* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t59386216** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t59386216* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

struct BigInteger_t925946152_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t59386216* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t2510243513 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_t925946152_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_t59386216* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_t59386216** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_t59386216* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((&___smallPrimes_2), value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_t925946152_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t2510243513 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t2510243513 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier((&___rng_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGINTEGER_T925946152_H
#ifndef SMALLXMLPARSER_T3549787957_H
#define SMALLXMLPARSER_T3549787957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.SmallXmlParser
struct  SmallXmlParser_t3549787957  : public RuntimeObject
{
public:
	// Mono.Xml.SmallXmlParser/IContentHandler Mono.Xml.SmallXmlParser::handler
	RuntimeObject* ___handler_0;
	// System.IO.TextReader Mono.Xml.SmallXmlParser::reader
	TextReader_t1561828458 * ___reader_1;
	// System.Collections.Stack Mono.Xml.SmallXmlParser::elementNames
	Stack_t1043988394 * ___elementNames_2;
	// System.Collections.Stack Mono.Xml.SmallXmlParser::xmlSpaces
	Stack_t1043988394 * ___xmlSpaces_3;
	// System.String Mono.Xml.SmallXmlParser::xmlSpace
	String_t* ___xmlSpace_4;
	// System.Text.StringBuilder Mono.Xml.SmallXmlParser::buffer
	StringBuilder_t1221177846 * ___buffer_5;
	// System.Char[] Mono.Xml.SmallXmlParser::nameBuffer
	CharU5BU5D_t1328083999* ___nameBuffer_6;
	// System.Boolean Mono.Xml.SmallXmlParser::isWhitespace
	bool ___isWhitespace_7;
	// Mono.Xml.SmallXmlParser/AttrListImpl Mono.Xml.SmallXmlParser::attributes
	AttrListImpl_t4015491015 * ___attributes_8;
	// System.Int32 Mono.Xml.SmallXmlParser::line
	int32_t ___line_9;
	// System.Int32 Mono.Xml.SmallXmlParser::column
	int32_t ___column_10;
	// System.Boolean Mono.Xml.SmallXmlParser::resetColumn
	bool ___resetColumn_11;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(SmallXmlParser_t3549787957, ___handler_0)); }
	inline RuntimeObject* get_handler_0() const { return ___handler_0; }
	inline RuntimeObject** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(RuntimeObject* value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_reader_1() { return static_cast<int32_t>(offsetof(SmallXmlParser_t3549787957, ___reader_1)); }
	inline TextReader_t1561828458 * get_reader_1() const { return ___reader_1; }
	inline TextReader_t1561828458 ** get_address_of_reader_1() { return &___reader_1; }
	inline void set_reader_1(TextReader_t1561828458 * value)
	{
		___reader_1 = value;
		Il2CppCodeGenWriteBarrier((&___reader_1), value);
	}

	inline static int32_t get_offset_of_elementNames_2() { return static_cast<int32_t>(offsetof(SmallXmlParser_t3549787957, ___elementNames_2)); }
	inline Stack_t1043988394 * get_elementNames_2() const { return ___elementNames_2; }
	inline Stack_t1043988394 ** get_address_of_elementNames_2() { return &___elementNames_2; }
	inline void set_elementNames_2(Stack_t1043988394 * value)
	{
		___elementNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___elementNames_2), value);
	}

	inline static int32_t get_offset_of_xmlSpaces_3() { return static_cast<int32_t>(offsetof(SmallXmlParser_t3549787957, ___xmlSpaces_3)); }
	inline Stack_t1043988394 * get_xmlSpaces_3() const { return ___xmlSpaces_3; }
	inline Stack_t1043988394 ** get_address_of_xmlSpaces_3() { return &___xmlSpaces_3; }
	inline void set_xmlSpaces_3(Stack_t1043988394 * value)
	{
		___xmlSpaces_3 = value;
		Il2CppCodeGenWriteBarrier((&___xmlSpaces_3), value);
	}

	inline static int32_t get_offset_of_xmlSpace_4() { return static_cast<int32_t>(offsetof(SmallXmlParser_t3549787957, ___xmlSpace_4)); }
	inline String_t* get_xmlSpace_4() const { return ___xmlSpace_4; }
	inline String_t** get_address_of_xmlSpace_4() { return &___xmlSpace_4; }
	inline void set_xmlSpace_4(String_t* value)
	{
		___xmlSpace_4 = value;
		Il2CppCodeGenWriteBarrier((&___xmlSpace_4), value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(SmallXmlParser_t3549787957, ___buffer_5)); }
	inline StringBuilder_t1221177846 * get_buffer_5() const { return ___buffer_5; }
	inline StringBuilder_t1221177846 ** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(StringBuilder_t1221177846 * value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_nameBuffer_6() { return static_cast<int32_t>(offsetof(SmallXmlParser_t3549787957, ___nameBuffer_6)); }
	inline CharU5BU5D_t1328083999* get_nameBuffer_6() const { return ___nameBuffer_6; }
	inline CharU5BU5D_t1328083999** get_address_of_nameBuffer_6() { return &___nameBuffer_6; }
	inline void set_nameBuffer_6(CharU5BU5D_t1328083999* value)
	{
		___nameBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((&___nameBuffer_6), value);
	}

	inline static int32_t get_offset_of_isWhitespace_7() { return static_cast<int32_t>(offsetof(SmallXmlParser_t3549787957, ___isWhitespace_7)); }
	inline bool get_isWhitespace_7() const { return ___isWhitespace_7; }
	inline bool* get_address_of_isWhitespace_7() { return &___isWhitespace_7; }
	inline void set_isWhitespace_7(bool value)
	{
		___isWhitespace_7 = value;
	}

	inline static int32_t get_offset_of_attributes_8() { return static_cast<int32_t>(offsetof(SmallXmlParser_t3549787957, ___attributes_8)); }
	inline AttrListImpl_t4015491015 * get_attributes_8() const { return ___attributes_8; }
	inline AttrListImpl_t4015491015 ** get_address_of_attributes_8() { return &___attributes_8; }
	inline void set_attributes_8(AttrListImpl_t4015491015 * value)
	{
		___attributes_8 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_8), value);
	}

	inline static int32_t get_offset_of_line_9() { return static_cast<int32_t>(offsetof(SmallXmlParser_t3549787957, ___line_9)); }
	inline int32_t get_line_9() const { return ___line_9; }
	inline int32_t* get_address_of_line_9() { return &___line_9; }
	inline void set_line_9(int32_t value)
	{
		___line_9 = value;
	}

	inline static int32_t get_offset_of_column_10() { return static_cast<int32_t>(offsetof(SmallXmlParser_t3549787957, ___column_10)); }
	inline int32_t get_column_10() const { return ___column_10; }
	inline int32_t* get_address_of_column_10() { return &___column_10; }
	inline void set_column_10(int32_t value)
	{
		___column_10 = value;
	}

	inline static int32_t get_offset_of_resetColumn_11() { return static_cast<int32_t>(offsetof(SmallXmlParser_t3549787957, ___resetColumn_11)); }
	inline bool get_resetColumn_11() const { return ___resetColumn_11; }
	inline bool* get_address_of_resetColumn_11() { return &___resetColumn_11; }
	inline void set_resetColumn_11(bool value)
	{
		___resetColumn_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMALLXMLPARSER_T3549787957_H
#ifndef X509CERTIFICATEENUMERATOR_T3487770522_H
#define X509CERTIFICATEENUMERATOR_T3487770522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct  X509CertificateEnumerator_t3487770522  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t3487770522, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEENUMERATOR_T3487770522_H
#ifndef SIGNERINFO_T1683925522_H
#define SIGNERINFO_T1683925522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/SignerInfo
struct  SignerInfo_t1683925522  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/SignerInfo::version
	uint8_t ___version_0;
	// System.String Mono.Security.PKCS7/SignerInfo::hashAlgorithm
	String_t* ___hashAlgorithm_1;
	// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::authenticatedAttributes
	ArrayList_t4252133567 * ___authenticatedAttributes_2;
	// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::unauthenticatedAttributes
	ArrayList_t4252133567 * ___unauthenticatedAttributes_3;
	// System.Byte[] Mono.Security.PKCS7/SignerInfo::signature
	ByteU5BU5D_t3397334013* ___signature_4;
	// System.String Mono.Security.PKCS7/SignerInfo::issuer
	String_t* ___issuer_5;
	// System.Byte[] Mono.Security.PKCS7/SignerInfo::serial
	ByteU5BU5D_t3397334013* ___serial_6;
	// System.Byte[] Mono.Security.PKCS7/SignerInfo::ski
	ByteU5BU5D_t3397334013* ___ski_7;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(SignerInfo_t1683925522, ___version_0)); }
	inline uint8_t get_version_0() const { return ___version_0; }
	inline uint8_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(uint8_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_hashAlgorithm_1() { return static_cast<int32_t>(offsetof(SignerInfo_t1683925522, ___hashAlgorithm_1)); }
	inline String_t* get_hashAlgorithm_1() const { return ___hashAlgorithm_1; }
	inline String_t** get_address_of_hashAlgorithm_1() { return &___hashAlgorithm_1; }
	inline void set_hashAlgorithm_1(String_t* value)
	{
		___hashAlgorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashAlgorithm_1), value);
	}

	inline static int32_t get_offset_of_authenticatedAttributes_2() { return static_cast<int32_t>(offsetof(SignerInfo_t1683925522, ___authenticatedAttributes_2)); }
	inline ArrayList_t4252133567 * get_authenticatedAttributes_2() const { return ___authenticatedAttributes_2; }
	inline ArrayList_t4252133567 ** get_address_of_authenticatedAttributes_2() { return &___authenticatedAttributes_2; }
	inline void set_authenticatedAttributes_2(ArrayList_t4252133567 * value)
	{
		___authenticatedAttributes_2 = value;
		Il2CppCodeGenWriteBarrier((&___authenticatedAttributes_2), value);
	}

	inline static int32_t get_offset_of_unauthenticatedAttributes_3() { return static_cast<int32_t>(offsetof(SignerInfo_t1683925522, ___unauthenticatedAttributes_3)); }
	inline ArrayList_t4252133567 * get_unauthenticatedAttributes_3() const { return ___unauthenticatedAttributes_3; }
	inline ArrayList_t4252133567 ** get_address_of_unauthenticatedAttributes_3() { return &___unauthenticatedAttributes_3; }
	inline void set_unauthenticatedAttributes_3(ArrayList_t4252133567 * value)
	{
		___unauthenticatedAttributes_3 = value;
		Il2CppCodeGenWriteBarrier((&___unauthenticatedAttributes_3), value);
	}

	inline static int32_t get_offset_of_signature_4() { return static_cast<int32_t>(offsetof(SignerInfo_t1683925522, ___signature_4)); }
	inline ByteU5BU5D_t3397334013* get_signature_4() const { return ___signature_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_signature_4() { return &___signature_4; }
	inline void set_signature_4(ByteU5BU5D_t3397334013* value)
	{
		___signature_4 = value;
		Il2CppCodeGenWriteBarrier((&___signature_4), value);
	}

	inline static int32_t get_offset_of_issuer_5() { return static_cast<int32_t>(offsetof(SignerInfo_t1683925522, ___issuer_5)); }
	inline String_t* get_issuer_5() const { return ___issuer_5; }
	inline String_t** get_address_of_issuer_5() { return &___issuer_5; }
	inline void set_issuer_5(String_t* value)
	{
		___issuer_5 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_5), value);
	}

	inline static int32_t get_offset_of_serial_6() { return static_cast<int32_t>(offsetof(SignerInfo_t1683925522, ___serial_6)); }
	inline ByteU5BU5D_t3397334013* get_serial_6() const { return ___serial_6; }
	inline ByteU5BU5D_t3397334013** get_address_of_serial_6() { return &___serial_6; }
	inline void set_serial_6(ByteU5BU5D_t3397334013* value)
	{
		___serial_6 = value;
		Il2CppCodeGenWriteBarrier((&___serial_6), value);
	}

	inline static int32_t get_offset_of_ski_7() { return static_cast<int32_t>(offsetof(SignerInfo_t1683925522, ___ski_7)); }
	inline ByteU5BU5D_t3397334013* get_ski_7() const { return ___ski_7; }
	inline ByteU5BU5D_t3397334013** get_address_of_ski_7() { return &___ski_7; }
	inline void set_ski_7(ByteU5BU5D_t3397334013* value)
	{
		___ski_7 = value;
		Il2CppCodeGenWriteBarrier((&___ski_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNERINFO_T1683925522_H
#ifndef X509EXTENSION_T1439760127_H
#define X509EXTENSION_T1439760127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Extension
struct  X509Extension_t1439760127  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Extension::extnOid
	String_t* ___extnOid_0;
	// System.Boolean Mono.Security.X509.X509Extension::extnCritical
	bool ___extnCritical_1;
	// Mono.Security.ASN1 Mono.Security.X509.X509Extension::extnValue
	ASN1_t924533535 * ___extnValue_2;

public:
	inline static int32_t get_offset_of_extnOid_0() { return static_cast<int32_t>(offsetof(X509Extension_t1439760127, ___extnOid_0)); }
	inline String_t* get_extnOid_0() const { return ___extnOid_0; }
	inline String_t** get_address_of_extnOid_0() { return &___extnOid_0; }
	inline void set_extnOid_0(String_t* value)
	{
		___extnOid_0 = value;
		Il2CppCodeGenWriteBarrier((&___extnOid_0), value);
	}

	inline static int32_t get_offset_of_extnCritical_1() { return static_cast<int32_t>(offsetof(X509Extension_t1439760127, ___extnCritical_1)); }
	inline bool get_extnCritical_1() const { return ___extnCritical_1; }
	inline bool* get_address_of_extnCritical_1() { return &___extnCritical_1; }
	inline void set_extnCritical_1(bool value)
	{
		___extnCritical_1 = value;
	}

	inline static int32_t get_offset_of_extnValue_2() { return static_cast<int32_t>(offsetof(X509Extension_t1439760127, ___extnValue_2)); }
	inline ASN1_t924533535 * get_extnValue_2() const { return ___extnValue_2; }
	inline ASN1_t924533535 ** get_address_of_extnValue_2() { return &___extnValue_2; }
	inline void set_extnValue_2(ASN1_t924533535 * value)
	{
		___extnValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___extnValue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_T1439760127_H
#ifndef X501_T349661534_H
#define X501_T349661534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X501
struct  X501_t349661534  : public RuntimeObject
{
public:

public:
};

struct X501_t349661534_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.X501::countryName
	ByteU5BU5D_t3397334013* ___countryName_0;
	// System.Byte[] Mono.Security.X509.X501::organizationName
	ByteU5BU5D_t3397334013* ___organizationName_1;
	// System.Byte[] Mono.Security.X509.X501::organizationalUnitName
	ByteU5BU5D_t3397334013* ___organizationalUnitName_2;
	// System.Byte[] Mono.Security.X509.X501::commonName
	ByteU5BU5D_t3397334013* ___commonName_3;
	// System.Byte[] Mono.Security.X509.X501::localityName
	ByteU5BU5D_t3397334013* ___localityName_4;
	// System.Byte[] Mono.Security.X509.X501::stateOrProvinceName
	ByteU5BU5D_t3397334013* ___stateOrProvinceName_5;
	// System.Byte[] Mono.Security.X509.X501::streetAddress
	ByteU5BU5D_t3397334013* ___streetAddress_6;
	// System.Byte[] Mono.Security.X509.X501::domainComponent
	ByteU5BU5D_t3397334013* ___domainComponent_7;
	// System.Byte[] Mono.Security.X509.X501::userid
	ByteU5BU5D_t3397334013* ___userid_8;
	// System.Byte[] Mono.Security.X509.X501::email
	ByteU5BU5D_t3397334013* ___email_9;
	// System.Byte[] Mono.Security.X509.X501::dnQualifier
	ByteU5BU5D_t3397334013* ___dnQualifier_10;
	// System.Byte[] Mono.Security.X509.X501::title
	ByteU5BU5D_t3397334013* ___title_11;
	// System.Byte[] Mono.Security.X509.X501::surname
	ByteU5BU5D_t3397334013* ___surname_12;
	// System.Byte[] Mono.Security.X509.X501::givenName
	ByteU5BU5D_t3397334013* ___givenName_13;
	// System.Byte[] Mono.Security.X509.X501::initial
	ByteU5BU5D_t3397334013* ___initial_14;

public:
	inline static int32_t get_offset_of_countryName_0() { return static_cast<int32_t>(offsetof(X501_t349661534_StaticFields, ___countryName_0)); }
	inline ByteU5BU5D_t3397334013* get_countryName_0() const { return ___countryName_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_countryName_0() { return &___countryName_0; }
	inline void set_countryName_0(ByteU5BU5D_t3397334013* value)
	{
		___countryName_0 = value;
		Il2CppCodeGenWriteBarrier((&___countryName_0), value);
	}

	inline static int32_t get_offset_of_organizationName_1() { return static_cast<int32_t>(offsetof(X501_t349661534_StaticFields, ___organizationName_1)); }
	inline ByteU5BU5D_t3397334013* get_organizationName_1() const { return ___organizationName_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_organizationName_1() { return &___organizationName_1; }
	inline void set_organizationName_1(ByteU5BU5D_t3397334013* value)
	{
		___organizationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___organizationName_1), value);
	}

	inline static int32_t get_offset_of_organizationalUnitName_2() { return static_cast<int32_t>(offsetof(X501_t349661534_StaticFields, ___organizationalUnitName_2)); }
	inline ByteU5BU5D_t3397334013* get_organizationalUnitName_2() const { return ___organizationalUnitName_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_organizationalUnitName_2() { return &___organizationalUnitName_2; }
	inline void set_organizationalUnitName_2(ByteU5BU5D_t3397334013* value)
	{
		___organizationalUnitName_2 = value;
		Il2CppCodeGenWriteBarrier((&___organizationalUnitName_2), value);
	}

	inline static int32_t get_offset_of_commonName_3() { return static_cast<int32_t>(offsetof(X501_t349661534_StaticFields, ___commonName_3)); }
	inline ByteU5BU5D_t3397334013* get_commonName_3() const { return ___commonName_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_commonName_3() { return &___commonName_3; }
	inline void set_commonName_3(ByteU5BU5D_t3397334013* value)
	{
		___commonName_3 = value;
		Il2CppCodeGenWriteBarrier((&___commonName_3), value);
	}

	inline static int32_t get_offset_of_localityName_4() { return static_cast<int32_t>(offsetof(X501_t349661534_StaticFields, ___localityName_4)); }
	inline ByteU5BU5D_t3397334013* get_localityName_4() const { return ___localityName_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_localityName_4() { return &___localityName_4; }
	inline void set_localityName_4(ByteU5BU5D_t3397334013* value)
	{
		___localityName_4 = value;
		Il2CppCodeGenWriteBarrier((&___localityName_4), value);
	}

	inline static int32_t get_offset_of_stateOrProvinceName_5() { return static_cast<int32_t>(offsetof(X501_t349661534_StaticFields, ___stateOrProvinceName_5)); }
	inline ByteU5BU5D_t3397334013* get_stateOrProvinceName_5() const { return ___stateOrProvinceName_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_stateOrProvinceName_5() { return &___stateOrProvinceName_5; }
	inline void set_stateOrProvinceName_5(ByteU5BU5D_t3397334013* value)
	{
		___stateOrProvinceName_5 = value;
		Il2CppCodeGenWriteBarrier((&___stateOrProvinceName_5), value);
	}

	inline static int32_t get_offset_of_streetAddress_6() { return static_cast<int32_t>(offsetof(X501_t349661534_StaticFields, ___streetAddress_6)); }
	inline ByteU5BU5D_t3397334013* get_streetAddress_6() const { return ___streetAddress_6; }
	inline ByteU5BU5D_t3397334013** get_address_of_streetAddress_6() { return &___streetAddress_6; }
	inline void set_streetAddress_6(ByteU5BU5D_t3397334013* value)
	{
		___streetAddress_6 = value;
		Il2CppCodeGenWriteBarrier((&___streetAddress_6), value);
	}

	inline static int32_t get_offset_of_domainComponent_7() { return static_cast<int32_t>(offsetof(X501_t349661534_StaticFields, ___domainComponent_7)); }
	inline ByteU5BU5D_t3397334013* get_domainComponent_7() const { return ___domainComponent_7; }
	inline ByteU5BU5D_t3397334013** get_address_of_domainComponent_7() { return &___domainComponent_7; }
	inline void set_domainComponent_7(ByteU5BU5D_t3397334013* value)
	{
		___domainComponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___domainComponent_7), value);
	}

	inline static int32_t get_offset_of_userid_8() { return static_cast<int32_t>(offsetof(X501_t349661534_StaticFields, ___userid_8)); }
	inline ByteU5BU5D_t3397334013* get_userid_8() const { return ___userid_8; }
	inline ByteU5BU5D_t3397334013** get_address_of_userid_8() { return &___userid_8; }
	inline void set_userid_8(ByteU5BU5D_t3397334013* value)
	{
		___userid_8 = value;
		Il2CppCodeGenWriteBarrier((&___userid_8), value);
	}

	inline static int32_t get_offset_of_email_9() { return static_cast<int32_t>(offsetof(X501_t349661534_StaticFields, ___email_9)); }
	inline ByteU5BU5D_t3397334013* get_email_9() const { return ___email_9; }
	inline ByteU5BU5D_t3397334013** get_address_of_email_9() { return &___email_9; }
	inline void set_email_9(ByteU5BU5D_t3397334013* value)
	{
		___email_9 = value;
		Il2CppCodeGenWriteBarrier((&___email_9), value);
	}

	inline static int32_t get_offset_of_dnQualifier_10() { return static_cast<int32_t>(offsetof(X501_t349661534_StaticFields, ___dnQualifier_10)); }
	inline ByteU5BU5D_t3397334013* get_dnQualifier_10() const { return ___dnQualifier_10; }
	inline ByteU5BU5D_t3397334013** get_address_of_dnQualifier_10() { return &___dnQualifier_10; }
	inline void set_dnQualifier_10(ByteU5BU5D_t3397334013* value)
	{
		___dnQualifier_10 = value;
		Il2CppCodeGenWriteBarrier((&___dnQualifier_10), value);
	}

	inline static int32_t get_offset_of_title_11() { return static_cast<int32_t>(offsetof(X501_t349661534_StaticFields, ___title_11)); }
	inline ByteU5BU5D_t3397334013* get_title_11() const { return ___title_11; }
	inline ByteU5BU5D_t3397334013** get_address_of_title_11() { return &___title_11; }
	inline void set_title_11(ByteU5BU5D_t3397334013* value)
	{
		___title_11 = value;
		Il2CppCodeGenWriteBarrier((&___title_11), value);
	}

	inline static int32_t get_offset_of_surname_12() { return static_cast<int32_t>(offsetof(X501_t349661534_StaticFields, ___surname_12)); }
	inline ByteU5BU5D_t3397334013* get_surname_12() const { return ___surname_12; }
	inline ByteU5BU5D_t3397334013** get_address_of_surname_12() { return &___surname_12; }
	inline void set_surname_12(ByteU5BU5D_t3397334013* value)
	{
		___surname_12 = value;
		Il2CppCodeGenWriteBarrier((&___surname_12), value);
	}

	inline static int32_t get_offset_of_givenName_13() { return static_cast<int32_t>(offsetof(X501_t349661534_StaticFields, ___givenName_13)); }
	inline ByteU5BU5D_t3397334013* get_givenName_13() const { return ___givenName_13; }
	inline ByteU5BU5D_t3397334013** get_address_of_givenName_13() { return &___givenName_13; }
	inline void set_givenName_13(ByteU5BU5D_t3397334013* value)
	{
		___givenName_13 = value;
		Il2CppCodeGenWriteBarrier((&___givenName_13), value);
	}

	inline static int32_t get_offset_of_initial_14() { return static_cast<int32_t>(offsetof(X501_t349661534_StaticFields, ___initial_14)); }
	inline ByteU5BU5D_t3397334013* get_initial_14() const { return ___initial_14; }
	inline ByteU5BU5D_t3397334013** get_address_of_initial_14() { return &___initial_14; }
	inline void set_initial_14(ByteU5BU5D_t3397334013* value)
	{
		___initial_14 = value;
		Il2CppCodeGenWriteBarrier((&___initial_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X501_T349661534_H
#ifndef PKCS12_T1362584794_H
#define PKCS12_T1362584794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12
struct  PKCS12_t1362584794  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12::_password
	ByteU5BU5D_t3397334013* ____password_0;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_keyBags
	ArrayList_t4252133567 * ____keyBags_1;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_secretBags
	ArrayList_t4252133567 * ____secretBags_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::_certs
	X509CertificateCollection_t3592472865 * ____certs_3;
	// System.Boolean Mono.Security.X509.PKCS12::_keyBagsChanged
	bool ____keyBagsChanged_4;
	// System.Boolean Mono.Security.X509.PKCS12::_secretBagsChanged
	bool ____secretBagsChanged_5;
	// System.Boolean Mono.Security.X509.PKCS12::_certsChanged
	bool ____certsChanged_6;
	// System.Int32 Mono.Security.X509.PKCS12::_iterations
	int32_t ____iterations_7;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_safeBags
	ArrayList_t4252133567 * ____safeBags_8;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::_rng
	RandomNumberGenerator_t2510243513 * ____rng_9;

public:
	inline static int32_t get_offset_of__password_0() { return static_cast<int32_t>(offsetof(PKCS12_t1362584794, ____password_0)); }
	inline ByteU5BU5D_t3397334013* get__password_0() const { return ____password_0; }
	inline ByteU5BU5D_t3397334013** get_address_of__password_0() { return &____password_0; }
	inline void set__password_0(ByteU5BU5D_t3397334013* value)
	{
		____password_0 = value;
		Il2CppCodeGenWriteBarrier((&____password_0), value);
	}

	inline static int32_t get_offset_of__keyBags_1() { return static_cast<int32_t>(offsetof(PKCS12_t1362584794, ____keyBags_1)); }
	inline ArrayList_t4252133567 * get__keyBags_1() const { return ____keyBags_1; }
	inline ArrayList_t4252133567 ** get_address_of__keyBags_1() { return &____keyBags_1; }
	inline void set__keyBags_1(ArrayList_t4252133567 * value)
	{
		____keyBags_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyBags_1), value);
	}

	inline static int32_t get_offset_of__secretBags_2() { return static_cast<int32_t>(offsetof(PKCS12_t1362584794, ____secretBags_2)); }
	inline ArrayList_t4252133567 * get__secretBags_2() const { return ____secretBags_2; }
	inline ArrayList_t4252133567 ** get_address_of__secretBags_2() { return &____secretBags_2; }
	inline void set__secretBags_2(ArrayList_t4252133567 * value)
	{
		____secretBags_2 = value;
		Il2CppCodeGenWriteBarrier((&____secretBags_2), value);
	}

	inline static int32_t get_offset_of__certs_3() { return static_cast<int32_t>(offsetof(PKCS12_t1362584794, ____certs_3)); }
	inline X509CertificateCollection_t3592472865 * get__certs_3() const { return ____certs_3; }
	inline X509CertificateCollection_t3592472865 ** get_address_of__certs_3() { return &____certs_3; }
	inline void set__certs_3(X509CertificateCollection_t3592472865 * value)
	{
		____certs_3 = value;
		Il2CppCodeGenWriteBarrier((&____certs_3), value);
	}

	inline static int32_t get_offset_of__keyBagsChanged_4() { return static_cast<int32_t>(offsetof(PKCS12_t1362584794, ____keyBagsChanged_4)); }
	inline bool get__keyBagsChanged_4() const { return ____keyBagsChanged_4; }
	inline bool* get_address_of__keyBagsChanged_4() { return &____keyBagsChanged_4; }
	inline void set__keyBagsChanged_4(bool value)
	{
		____keyBagsChanged_4 = value;
	}

	inline static int32_t get_offset_of__secretBagsChanged_5() { return static_cast<int32_t>(offsetof(PKCS12_t1362584794, ____secretBagsChanged_5)); }
	inline bool get__secretBagsChanged_5() const { return ____secretBagsChanged_5; }
	inline bool* get_address_of__secretBagsChanged_5() { return &____secretBagsChanged_5; }
	inline void set__secretBagsChanged_5(bool value)
	{
		____secretBagsChanged_5 = value;
	}

	inline static int32_t get_offset_of__certsChanged_6() { return static_cast<int32_t>(offsetof(PKCS12_t1362584794, ____certsChanged_6)); }
	inline bool get__certsChanged_6() const { return ____certsChanged_6; }
	inline bool* get_address_of__certsChanged_6() { return &____certsChanged_6; }
	inline void set__certsChanged_6(bool value)
	{
		____certsChanged_6 = value;
	}

	inline static int32_t get_offset_of__iterations_7() { return static_cast<int32_t>(offsetof(PKCS12_t1362584794, ____iterations_7)); }
	inline int32_t get__iterations_7() const { return ____iterations_7; }
	inline int32_t* get_address_of__iterations_7() { return &____iterations_7; }
	inline void set__iterations_7(int32_t value)
	{
		____iterations_7 = value;
	}

	inline static int32_t get_offset_of__safeBags_8() { return static_cast<int32_t>(offsetof(PKCS12_t1362584794, ____safeBags_8)); }
	inline ArrayList_t4252133567 * get__safeBags_8() const { return ____safeBags_8; }
	inline ArrayList_t4252133567 ** get_address_of__safeBags_8() { return &____safeBags_8; }
	inline void set__safeBags_8(ArrayList_t4252133567 * value)
	{
		____safeBags_8 = value;
		Il2CppCodeGenWriteBarrier((&____safeBags_8), value);
	}

	inline static int32_t get_offset_of__rng_9() { return static_cast<int32_t>(offsetof(PKCS12_t1362584794, ____rng_9)); }
	inline RandomNumberGenerator_t2510243513 * get__rng_9() const { return ____rng_9; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of__rng_9() { return &____rng_9; }
	inline void set__rng_9(RandomNumberGenerator_t2510243513 * value)
	{
		____rng_9 = value;
		Il2CppCodeGenWriteBarrier((&____rng_9), value);
	}
};

struct PKCS12_t1362584794_StaticFields
{
public:
	// System.Int32 Mono.Security.X509.PKCS12::password_max_length
	int32_t ___password_max_length_10;

public:
	inline static int32_t get_offset_of_password_max_length_10() { return static_cast<int32_t>(offsetof(PKCS12_t1362584794_StaticFields, ___password_max_length_10)); }
	inline int32_t get_password_max_length_10() const { return ___password_max_length_10; }
	inline int32_t* get_address_of_password_max_length_10() { return &___password_max_length_10; }
	inline void set_password_max_length_10(int32_t value)
	{
		___password_max_length_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS12_T1362584794_H
#ifndef DERIVEBYTES_T1740753016_H
#define DERIVEBYTES_T1740753016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12/DeriveBytes
struct  DeriveBytes_t1740753016  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.PKCS12/DeriveBytes::_hashName
	String_t* ____hashName_3;
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes::_iterations
	int32_t ____iterations_4;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_password
	ByteU5BU5D_t3397334013* ____password_5;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_salt
	ByteU5BU5D_t3397334013* ____salt_6;

public:
	inline static int32_t get_offset_of__hashName_3() { return static_cast<int32_t>(offsetof(DeriveBytes_t1740753016, ____hashName_3)); }
	inline String_t* get__hashName_3() const { return ____hashName_3; }
	inline String_t** get_address_of__hashName_3() { return &____hashName_3; }
	inline void set__hashName_3(String_t* value)
	{
		____hashName_3 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_3), value);
	}

	inline static int32_t get_offset_of__iterations_4() { return static_cast<int32_t>(offsetof(DeriveBytes_t1740753016, ____iterations_4)); }
	inline int32_t get__iterations_4() const { return ____iterations_4; }
	inline int32_t* get_address_of__iterations_4() { return &____iterations_4; }
	inline void set__iterations_4(int32_t value)
	{
		____iterations_4 = value;
	}

	inline static int32_t get_offset_of__password_5() { return static_cast<int32_t>(offsetof(DeriveBytes_t1740753016, ____password_5)); }
	inline ByteU5BU5D_t3397334013* get__password_5() const { return ____password_5; }
	inline ByteU5BU5D_t3397334013** get_address_of__password_5() { return &____password_5; }
	inline void set__password_5(ByteU5BU5D_t3397334013* value)
	{
		____password_5 = value;
		Il2CppCodeGenWriteBarrier((&____password_5), value);
	}

	inline static int32_t get_offset_of__salt_6() { return static_cast<int32_t>(offsetof(DeriveBytes_t1740753016, ____salt_6)); }
	inline ByteU5BU5D_t3397334013* get__salt_6() const { return ____salt_6; }
	inline ByteU5BU5D_t3397334013** get_address_of__salt_6() { return &____salt_6; }
	inline void set__salt_6(ByteU5BU5D_t3397334013* value)
	{
		____salt_6 = value;
		Il2CppCodeGenWriteBarrier((&____salt_6), value);
	}
};

struct DeriveBytes_t1740753016_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::keyDiversifier
	ByteU5BU5D_t3397334013* ___keyDiversifier_0;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::ivDiversifier
	ByteU5BU5D_t3397334013* ___ivDiversifier_1;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::macDiversifier
	ByteU5BU5D_t3397334013* ___macDiversifier_2;

public:
	inline static int32_t get_offset_of_keyDiversifier_0() { return static_cast<int32_t>(offsetof(DeriveBytes_t1740753016_StaticFields, ___keyDiversifier_0)); }
	inline ByteU5BU5D_t3397334013* get_keyDiversifier_0() const { return ___keyDiversifier_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_keyDiversifier_0() { return &___keyDiversifier_0; }
	inline void set_keyDiversifier_0(ByteU5BU5D_t3397334013* value)
	{
		___keyDiversifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyDiversifier_0), value);
	}

	inline static int32_t get_offset_of_ivDiversifier_1() { return static_cast<int32_t>(offsetof(DeriveBytes_t1740753016_StaticFields, ___ivDiversifier_1)); }
	inline ByteU5BU5D_t3397334013* get_ivDiversifier_1() const { return ___ivDiversifier_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_ivDiversifier_1() { return &___ivDiversifier_1; }
	inline void set_ivDiversifier_1(ByteU5BU5D_t3397334013* value)
	{
		___ivDiversifier_1 = value;
		Il2CppCodeGenWriteBarrier((&___ivDiversifier_1), value);
	}

	inline static int32_t get_offset_of_macDiversifier_2() { return static_cast<int32_t>(offsetof(DeriveBytes_t1740753016_StaticFields, ___macDiversifier_2)); }
	inline ByteU5BU5D_t3397334013* get_macDiversifier_2() const { return ___macDiversifier_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_macDiversifier_2() { return &___macDiversifier_2; }
	inline void set_macDiversifier_2(ByteU5BU5D_t3397334013* value)
	{
		___macDiversifier_2 = value;
		Il2CppCodeGenWriteBarrier((&___macDiversifier_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T1740753016_H
#ifndef GPTRARRAY_T3128553612_H
#define GPTRARRAY_T3128553612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.RuntimeStructs/GPtrArray
struct  GPtrArray_t3128553612 
{
public:
	// System.IntPtr* Mono.RuntimeStructs/GPtrArray::data
	intptr_t* ___data_0;
	// System.Int32 Mono.RuntimeStructs/GPtrArray::len
	int32_t ___len_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(GPtrArray_t3128553612, ___data_0)); }
	inline intptr_t* get_data_0() const { return ___data_0; }
	inline intptr_t** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(intptr_t* value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_len_1() { return static_cast<int32_t>(offsetof(GPtrArray_t3128553612, ___len_1)); }
	inline int32_t get_len_1() const { return ___len_1; }
	inline int32_t* get_address_of_len_1() { return &___len_1; }
	inline void set_len_1(int32_t value)
	{
		___len_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.RuntimeStructs/GPtrArray
struct GPtrArray_t3128553612_marshaled_pinvoke
{
	intptr_t* ___data_0;
	int32_t ___len_1;
};
// Native definition for COM marshalling of Mono.RuntimeStructs/GPtrArray
struct GPtrArray_t3128553612_marshaled_com
{
	intptr_t* ___data_0;
	int32_t ___len_1;
};
#endif // GPTRARRAY_T3128553612_H
#ifndef U3CPUBLIC_KEY_TOKENU3EE__FIXEDBUFFER_T2714123824_H
#define U3CPUBLIC_KEY_TOKENU3EE__FIXEDBUFFER_T2714123824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.MonoAssemblyName/<public_key_token>e__FixedBuffer
struct  U3Cpublic_key_tokenU3Ee__FixedBuffer_t2714123824 
{
public:
	union
	{
		struct
		{
			// System.Byte Mono.MonoAssemblyName/<public_key_token>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cpublic_key_tokenU3Ee__FixedBuffer_t2714123824__padding[17];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3Cpublic_key_tokenU3Ee__FixedBuffer_t2714123824, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPUBLIC_KEY_TOKENU3EE__FIXEDBUFFER_T2714123824_H
#ifndef ESCAPE_T169451053_H
#define ESCAPE_T169451053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator/Escape
struct  Escape_t169451053 
{
public:
	// System.String Mono.Globalization.Unicode.SimpleCollator/Escape::Source
	String_t* ___Source_0;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/Escape::Index
	int32_t ___Index_1;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/Escape::Start
	int32_t ___Start_2;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/Escape::End
	int32_t ___End_3;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/Escape::Optional
	int32_t ___Optional_4;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(Escape_t169451053, ___Source_0)); }
	inline String_t* get_Source_0() const { return ___Source_0; }
	inline String_t** get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(String_t* value)
	{
		___Source_0 = value;
		Il2CppCodeGenWriteBarrier((&___Source_0), value);
	}

	inline static int32_t get_offset_of_Index_1() { return static_cast<int32_t>(offsetof(Escape_t169451053, ___Index_1)); }
	inline int32_t get_Index_1() const { return ___Index_1; }
	inline int32_t* get_address_of_Index_1() { return &___Index_1; }
	inline void set_Index_1(int32_t value)
	{
		___Index_1 = value;
	}

	inline static int32_t get_offset_of_Start_2() { return static_cast<int32_t>(offsetof(Escape_t169451053, ___Start_2)); }
	inline int32_t get_Start_2() const { return ___Start_2; }
	inline int32_t* get_address_of_Start_2() { return &___Start_2; }
	inline void set_Start_2(int32_t value)
	{
		___Start_2 = value;
	}

	inline static int32_t get_offset_of_End_3() { return static_cast<int32_t>(offsetof(Escape_t169451053, ___End_3)); }
	inline int32_t get_End_3() const { return ___End_3; }
	inline int32_t* get_address_of_End_3() { return &___End_3; }
	inline void set_End_3(int32_t value)
	{
		___End_3 = value;
	}

	inline static int32_t get_offset_of_Optional_4() { return static_cast<int32_t>(offsetof(Escape_t169451053, ___Optional_4)); }
	inline int32_t get_Optional_4() const { return ___Optional_4; }
	inline int32_t* get_address_of_Optional_4() { return &___Optional_4; }
	inline void set_Optional_4(int32_t value)
	{
		___Optional_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.Globalization.Unicode.SimpleCollator/Escape
struct Escape_t169451053_marshaled_pinvoke
{
	char* ___Source_0;
	int32_t ___Index_1;
	int32_t ___Start_2;
	int32_t ___End_3;
	int32_t ___Optional_4;
};
// Native definition for COM marshalling of Mono.Globalization.Unicode.SimpleCollator/Escape
struct Escape_t169451053_marshaled_com
{
	Il2CppChar* ___Source_0;
	int32_t ___Index_1;
	int32_t ___Start_2;
	int32_t ___End_3;
	int32_t ___Optional_4;
};
#endif // ESCAPE_T169451053_H
#ifndef MONOCLASS_T2595527713_H
#define MONOCLASS_T2595527713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.RuntimeStructs/MonoClass
struct  MonoClass_t2595527713 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MonoClass_t2595527713__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCLASS_T2595527713_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SYSTEMEXCEPTION_T3877406272_H
#define SYSTEMEXCEPTION_T3877406272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3877406272  : public Exception_t1927440687
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3877406272_H
#ifndef SECURITYPARSER_T30730985_H
#define SECURITYPARSER_T30730985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.SecurityParser
struct  SecurityParser_t30730985  : public SmallXmlParser_t3549787957
{
public:
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t2325568386 * ___root_12;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t2325568386 * ___current_13;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t1043988394 * ___stack_14;

public:
	inline static int32_t get_offset_of_root_12() { return static_cast<int32_t>(offsetof(SecurityParser_t30730985, ___root_12)); }
	inline SecurityElement_t2325568386 * get_root_12() const { return ___root_12; }
	inline SecurityElement_t2325568386 ** get_address_of_root_12() { return &___root_12; }
	inline void set_root_12(SecurityElement_t2325568386 * value)
	{
		___root_12 = value;
		Il2CppCodeGenWriteBarrier((&___root_12), value);
	}

	inline static int32_t get_offset_of_current_13() { return static_cast<int32_t>(offsetof(SecurityParser_t30730985, ___current_13)); }
	inline SecurityElement_t2325568386 * get_current_13() const { return ___current_13; }
	inline SecurityElement_t2325568386 ** get_address_of_current_13() { return &___current_13; }
	inline void set_current_13(SecurityElement_t2325568386 * value)
	{
		___current_13 = value;
		Il2CppCodeGenWriteBarrier((&___current_13), value);
	}

	inline static int32_t get_offset_of_stack_14() { return static_cast<int32_t>(offsetof(SecurityParser_t30730985, ___stack_14)); }
	inline Stack_t1043988394 * get_stack_14() const { return ___stack_14; }
	inline Stack_t1043988394 ** get_address_of_stack_14() { return &___stack_14; }
	inline void set_stack_14(Stack_t1043988394 * value)
	{
		___stack_14 = value;
		Il2CppCodeGenWriteBarrier((&___stack_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPARSER_T30730985_H
#ifndef PREVIOUSINFO_T581002487_H
#define PREVIOUSINFO_T581002487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct  PreviousInfo_t581002487 
{
public:
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::Code
	int32_t ___Code_0;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::SortKey
	uint8_t* ___SortKey_1;

public:
	inline static int32_t get_offset_of_Code_0() { return static_cast<int32_t>(offsetof(PreviousInfo_t581002487, ___Code_0)); }
	inline int32_t get_Code_0() const { return ___Code_0; }
	inline int32_t* get_address_of_Code_0() { return &___Code_0; }
	inline void set_Code_0(int32_t value)
	{
		___Code_0 = value;
	}

	inline static int32_t get_offset_of_SortKey_1() { return static_cast<int32_t>(offsetof(PreviousInfo_t581002487, ___SortKey_1)); }
	inline uint8_t* get_SortKey_1() const { return ___SortKey_1; }
	inline uint8_t** get_address_of_SortKey_1() { return &___SortKey_1; }
	inline void set_SortKey_1(uint8_t* value)
	{
		___SortKey_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t581002487_marshaled_pinvoke
{
	int32_t ___Code_0;
	uint8_t* ___SortKey_1;
};
// Native definition for COM marshalling of Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t581002487_marshaled_com
{
	int32_t ___Code_0;
	uint8_t* ___SortKey_1;
};
#endif // PREVIOUSINFO_T581002487_H
#ifndef REGISTRYKEY_T2287932784_H
#define REGISTRYKEY_T2287932784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryKey
struct  RegistryKey_t2287932784  : public MarshalByRefObject_t1285298191
{
public:
	// System.Object Microsoft.Win32.RegistryKey::handle
	RuntimeObject * ___handle_1;
	// Microsoft.Win32.SafeHandles.SafeRegistryHandle Microsoft.Win32.RegistryKey::safe_handle
	SafeRegistryHandle_t1955425892 * ___safe_handle_2;
	// System.Object Microsoft.Win32.RegistryKey::hive
	RuntimeObject * ___hive_3;
	// System.String Microsoft.Win32.RegistryKey::qname
	String_t* ___qname_4;
	// System.Boolean Microsoft.Win32.RegistryKey::isRemoteRoot
	bool ___isRemoteRoot_5;
	// System.Boolean Microsoft.Win32.RegistryKey::isWritable
	bool ___isWritable_6;

public:
	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(RegistryKey_t2287932784, ___handle_1)); }
	inline RuntimeObject * get_handle_1() const { return ___handle_1; }
	inline RuntimeObject ** get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(RuntimeObject * value)
	{
		___handle_1 = value;
		Il2CppCodeGenWriteBarrier((&___handle_1), value);
	}

	inline static int32_t get_offset_of_safe_handle_2() { return static_cast<int32_t>(offsetof(RegistryKey_t2287932784, ___safe_handle_2)); }
	inline SafeRegistryHandle_t1955425892 * get_safe_handle_2() const { return ___safe_handle_2; }
	inline SafeRegistryHandle_t1955425892 ** get_address_of_safe_handle_2() { return &___safe_handle_2; }
	inline void set_safe_handle_2(SafeRegistryHandle_t1955425892 * value)
	{
		___safe_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___safe_handle_2), value);
	}

	inline static int32_t get_offset_of_hive_3() { return static_cast<int32_t>(offsetof(RegistryKey_t2287932784, ___hive_3)); }
	inline RuntimeObject * get_hive_3() const { return ___hive_3; }
	inline RuntimeObject ** get_address_of_hive_3() { return &___hive_3; }
	inline void set_hive_3(RuntimeObject * value)
	{
		___hive_3 = value;
		Il2CppCodeGenWriteBarrier((&___hive_3), value);
	}

	inline static int32_t get_offset_of_qname_4() { return static_cast<int32_t>(offsetof(RegistryKey_t2287932784, ___qname_4)); }
	inline String_t* get_qname_4() const { return ___qname_4; }
	inline String_t** get_address_of_qname_4() { return &___qname_4; }
	inline void set_qname_4(String_t* value)
	{
		___qname_4 = value;
		Il2CppCodeGenWriteBarrier((&___qname_4), value);
	}

	inline static int32_t get_offset_of_isRemoteRoot_5() { return static_cast<int32_t>(offsetof(RegistryKey_t2287932784, ___isRemoteRoot_5)); }
	inline bool get_isRemoteRoot_5() const { return ___isRemoteRoot_5; }
	inline bool* get_address_of_isRemoteRoot_5() { return &___isRemoteRoot_5; }
	inline void set_isRemoteRoot_5(bool value)
	{
		___isRemoteRoot_5 = value;
	}

	inline static int32_t get_offset_of_isWritable_6() { return static_cast<int32_t>(offsetof(RegistryKey_t2287932784, ___isWritable_6)); }
	inline bool get_isWritable_6() const { return ___isWritable_6; }
	inline bool* get_address_of_isWritable_6() { return &___isWritable_6; }
	inline void set_isWritable_6(bool value)
	{
		___isWritable_6 = value;
	}
};

struct RegistryKey_t2287932784_StaticFields
{
public:
	// Microsoft.Win32.IRegistryApi Microsoft.Win32.RegistryKey::RegistryApi
	RuntimeObject* ___RegistryApi_7;

public:
	inline static int32_t get_offset_of_RegistryApi_7() { return static_cast<int32_t>(offsetof(RegistryKey_t2287932784_StaticFields, ___RegistryApi_7)); }
	inline RuntimeObject* get_RegistryApi_7() const { return ___RegistryApi_7; }
	inline RuntimeObject** get_address_of_RegistryApi_7() { return &___RegistryApi_7; }
	inline void set_RegistryApi_7(RuntimeObject* value)
	{
		___RegistryApi_7 = value;
		Il2CppCodeGenWriteBarrier((&___RegistryApi_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYKEY_T2287932784_H
#ifndef RSA_T3719518354_H
#define RSA_T3719518354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t3719518354  : public AsymmetricAlgorithm_t784058677
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T3719518354_H
#ifndef URISCHEME_T683497865_H
#define URISCHEME_T683497865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Uri/UriScheme
struct  UriScheme_t683497865 
{
public:
	// System.String Mono.Security.Uri/UriScheme::scheme
	String_t* ___scheme_0;
	// System.String Mono.Security.Uri/UriScheme::delimiter
	String_t* ___delimiter_1;
	// System.Int32 Mono.Security.Uri/UriScheme::defaultPort
	int32_t ___defaultPort_2;

public:
	inline static int32_t get_offset_of_scheme_0() { return static_cast<int32_t>(offsetof(UriScheme_t683497865, ___scheme_0)); }
	inline String_t* get_scheme_0() const { return ___scheme_0; }
	inline String_t** get_address_of_scheme_0() { return &___scheme_0; }
	inline void set_scheme_0(String_t* value)
	{
		___scheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_0), value);
	}

	inline static int32_t get_offset_of_delimiter_1() { return static_cast<int32_t>(offsetof(UriScheme_t683497865, ___delimiter_1)); }
	inline String_t* get_delimiter_1() const { return ___delimiter_1; }
	inline String_t** get_address_of_delimiter_1() { return &___delimiter_1; }
	inline void set_delimiter_1(String_t* value)
	{
		___delimiter_1 = value;
		Il2CppCodeGenWriteBarrier((&___delimiter_1), value);
	}

	inline static int32_t get_offset_of_defaultPort_2() { return static_cast<int32_t>(offsetof(UriScheme_t683497865, ___defaultPort_2)); }
	inline int32_t get_defaultPort_2() const { return ___defaultPort_2; }
	inline int32_t* get_address_of_defaultPort_2() { return &___defaultPort_2; }
	inline void set_defaultPort_2(int32_t value)
	{
		___defaultPort_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.Security.Uri/UriScheme
struct UriScheme_t683497865_marshaled_pinvoke
{
	char* ___scheme_0;
	char* ___delimiter_1;
	int32_t ___defaultPort_2;
};
// Native definition for COM marshalling of Mono.Security.Uri/UriScheme
struct UriScheme_t683497865_marshaled_com
{
	Il2CppChar* ___scheme_0;
	Il2CppChar* ___delimiter_1;
	int32_t ___defaultPort_2;
};
#endif // URISCHEME_T683497865_H
#ifndef VOID_T1841601450_H
#define VOID_T1841601450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1841601450 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1841601450__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1841601450_H
#ifndef BASICCONSTRAINTSEXTENSION_T3608227951_H
#define BASICCONSTRAINTSEXTENSION_T3608227951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.BasicConstraintsExtension
struct  BasicConstraintsExtension_t3608227951  : public X509Extension_t1439760127
{
public:
	// System.Boolean Mono.Security.X509.Extensions.BasicConstraintsExtension::cA
	bool ___cA_3;
	// System.Int32 Mono.Security.X509.Extensions.BasicConstraintsExtension::pathLenConstraint
	int32_t ___pathLenConstraint_4;

public:
	inline static int32_t get_offset_of_cA_3() { return static_cast<int32_t>(offsetof(BasicConstraintsExtension_t3608227951, ___cA_3)); }
	inline bool get_cA_3() const { return ___cA_3; }
	inline bool* get_address_of_cA_3() { return &___cA_3; }
	inline void set_cA_3(bool value)
	{
		___cA_3 = value;
	}

	inline static int32_t get_offset_of_pathLenConstraint_4() { return static_cast<int32_t>(offsetof(BasicConstraintsExtension_t3608227951, ___pathLenConstraint_4)); }
	inline int32_t get_pathLenConstraint_4() const { return ___pathLenConstraint_4; }
	inline int32_t* get_address_of_pathLenConstraint_4() { return &___pathLenConstraint_4; }
	inline void set_pathLenConstraint_4(int32_t value)
	{
		___pathLenConstraint_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASICCONSTRAINTSEXTENSION_T3608227951_H
#ifndef X509CERTIFICATECOLLECTION_T3592472865_H
#define X509CERTIFICATECOLLECTION_T3592472865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection
struct  X509CertificateCollection_t3592472865  : public CollectionBase_t1101587467
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T3592472865_H
#ifndef RUNTIMEGPTRARRAYHANDLE_T1303258952_H
#define RUNTIMEGPTRARRAYHANDLE_T1303258952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.RuntimeGPtrArrayHandle
struct  RuntimeGPtrArrayHandle_t1303258952 
{
public:
	// Mono.RuntimeStructs/GPtrArray* Mono.RuntimeGPtrArrayHandle::value
	GPtrArray_t3128553612 * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeGPtrArrayHandle_t1303258952, ___value_0)); }
	inline GPtrArray_t3128553612 * get_value_0() const { return ___value_0; }
	inline GPtrArray_t3128553612 ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(GPtrArray_t3128553612 * value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.RuntimeGPtrArrayHandle
struct RuntimeGPtrArrayHandle_t1303258952_marshaled_pinvoke
{
	GPtrArray_t3128553612 * ___value_0;
};
// Native definition for COM marshalling of Mono.RuntimeGPtrArrayHandle
struct RuntimeGPtrArrayHandle_t1303258952_marshaled_com
{
	GPtrArray_t3128553612 * ___value_0;
};
#endif // RUNTIMEGPTRARRAYHANDLE_T1303258952_H
#ifndef TABLERANGE_T2011406615_H
#define TABLERANGE_T2011406615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.CodePointIndexer/TableRange
struct  TableRange_t2011406615 
{
public:
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::Start
	int32_t ___Start_0;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::End
	int32_t ___End_1;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::Count
	int32_t ___Count_2;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::IndexStart
	int32_t ___IndexStart_3;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::IndexEnd
	int32_t ___IndexEnd_4;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(TableRange_t2011406615, ___Start_0)); }
	inline int32_t get_Start_0() const { return ___Start_0; }
	inline int32_t* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(int32_t value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(TableRange_t2011406615, ___End_1)); }
	inline int32_t get_End_1() const { return ___End_1; }
	inline int32_t* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(int32_t value)
	{
		___End_1 = value;
	}

	inline static int32_t get_offset_of_Count_2() { return static_cast<int32_t>(offsetof(TableRange_t2011406615, ___Count_2)); }
	inline int32_t get_Count_2() const { return ___Count_2; }
	inline int32_t* get_address_of_Count_2() { return &___Count_2; }
	inline void set_Count_2(int32_t value)
	{
		___Count_2 = value;
	}

	inline static int32_t get_offset_of_IndexStart_3() { return static_cast<int32_t>(offsetof(TableRange_t2011406615, ___IndexStart_3)); }
	inline int32_t get_IndexStart_3() const { return ___IndexStart_3; }
	inline int32_t* get_address_of_IndexStart_3() { return &___IndexStart_3; }
	inline void set_IndexStart_3(int32_t value)
	{
		___IndexStart_3 = value;
	}

	inline static int32_t get_offset_of_IndexEnd_4() { return static_cast<int32_t>(offsetof(TableRange_t2011406615, ___IndexEnd_4)); }
	inline int32_t get_IndexEnd_4() const { return ___IndexEnd_4; }
	inline int32_t* get_address_of_IndexEnd_4() { return &___IndexEnd_4; }
	inline void set_IndexEnd_4(int32_t value)
	{
		___IndexEnd_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLERANGE_T2011406615_H
#ifndef X509EXTENSIONCOLLECTION_T1640144839_H
#define X509EXTENSIONCOLLECTION_T1640144839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ExtensionCollection
struct  X509ExtensionCollection_t1640144839  : public CollectionBase_t1101587467
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t1640144839, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONCOLLECTION_T1640144839_H
#ifndef SEQUENTIALSEARCHPRIMEGENERATORBASE_T463670656_H
#define SEQUENTIALSEARCHPRIMEGENERATORBASE_T463670656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct  SequentialSearchPrimeGeneratorBase_t463670656  : public PrimeGeneratorBase_t1053438167
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEQUENTIALSEARCHPRIMEGENERATORBASE_T463670656_H
#ifndef DATETIME_T693205669_H
#define DATETIME_T693205669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t693205669 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t693205669, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t693205669_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t3030399641* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t3030399641* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t693205669  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t693205669  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t3030399641* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t3030399641** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t3030399641* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t3030399641* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t3030399641** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t3030399641* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___MinValue_31)); }
	inline DateTime_t693205669  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t693205669 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t693205669  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___MaxValue_32)); }
	inline DateTime_t693205669  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t693205669 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t693205669  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T693205669_H
#ifndef DSA_T903174880_H
#define DSA_T903174880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSA
struct  DSA_t903174880  : public AsymmetricAlgorithm_t784058677
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSA_T903174880_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2459695545  : public ValueType_t3507792607
{
public:

public:
};

struct Enum_t2459695545_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t1328083999* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2459695545_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t1328083999* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t1328083999** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t1328083999* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2459695545_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2459695545_marshaled_com
{
};
#endif // ENUM_T2459695545_H
#ifndef MONOASSEMBLYNAME_T1886479188_H
#define MONOASSEMBLYNAME_T1886479188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.MonoAssemblyName
struct  MonoAssemblyName_t1886479188 
{
public:
	// System.IntPtr Mono.MonoAssemblyName::name
	intptr_t ___name_0;
	// System.IntPtr Mono.MonoAssemblyName::culture
	intptr_t ___culture_1;
	// System.IntPtr Mono.MonoAssemblyName::hash_value
	intptr_t ___hash_value_2;
	// System.IntPtr Mono.MonoAssemblyName::public_key
	intptr_t ___public_key_3;
	// Mono.MonoAssemblyName/<public_key_token>e__FixedBuffer Mono.MonoAssemblyName::public_key_token
	U3Cpublic_key_tokenU3Ee__FixedBuffer_t2714123824  ___public_key_token_4;
	// System.UInt32 Mono.MonoAssemblyName::hash_alg
	uint32_t ___hash_alg_5;
	// System.UInt32 Mono.MonoAssemblyName::hash_len
	uint32_t ___hash_len_6;
	// System.UInt32 Mono.MonoAssemblyName::flags
	uint32_t ___flags_7;
	// System.UInt16 Mono.MonoAssemblyName::major
	uint16_t ___major_8;
	// System.UInt16 Mono.MonoAssemblyName::minor
	uint16_t ___minor_9;
	// System.UInt16 Mono.MonoAssemblyName::build
	uint16_t ___build_10;
	// System.UInt16 Mono.MonoAssemblyName::revision
	uint16_t ___revision_11;
	// System.UInt16 Mono.MonoAssemblyName::arch
	uint16_t ___arch_12;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t1886479188, ___name_0)); }
	inline intptr_t get_name_0() const { return ___name_0; }
	inline intptr_t* get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(intptr_t value)
	{
		___name_0 = value;
	}

	inline static int32_t get_offset_of_culture_1() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t1886479188, ___culture_1)); }
	inline intptr_t get_culture_1() const { return ___culture_1; }
	inline intptr_t* get_address_of_culture_1() { return &___culture_1; }
	inline void set_culture_1(intptr_t value)
	{
		___culture_1 = value;
	}

	inline static int32_t get_offset_of_hash_value_2() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t1886479188, ___hash_value_2)); }
	inline intptr_t get_hash_value_2() const { return ___hash_value_2; }
	inline intptr_t* get_address_of_hash_value_2() { return &___hash_value_2; }
	inline void set_hash_value_2(intptr_t value)
	{
		___hash_value_2 = value;
	}

	inline static int32_t get_offset_of_public_key_3() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t1886479188, ___public_key_3)); }
	inline intptr_t get_public_key_3() const { return ___public_key_3; }
	inline intptr_t* get_address_of_public_key_3() { return &___public_key_3; }
	inline void set_public_key_3(intptr_t value)
	{
		___public_key_3 = value;
	}

	inline static int32_t get_offset_of_public_key_token_4() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t1886479188, ___public_key_token_4)); }
	inline U3Cpublic_key_tokenU3Ee__FixedBuffer_t2714123824  get_public_key_token_4() const { return ___public_key_token_4; }
	inline U3Cpublic_key_tokenU3Ee__FixedBuffer_t2714123824 * get_address_of_public_key_token_4() { return &___public_key_token_4; }
	inline void set_public_key_token_4(U3Cpublic_key_tokenU3Ee__FixedBuffer_t2714123824  value)
	{
		___public_key_token_4 = value;
	}

	inline static int32_t get_offset_of_hash_alg_5() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t1886479188, ___hash_alg_5)); }
	inline uint32_t get_hash_alg_5() const { return ___hash_alg_5; }
	inline uint32_t* get_address_of_hash_alg_5() { return &___hash_alg_5; }
	inline void set_hash_alg_5(uint32_t value)
	{
		___hash_alg_5 = value;
	}

	inline static int32_t get_offset_of_hash_len_6() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t1886479188, ___hash_len_6)); }
	inline uint32_t get_hash_len_6() const { return ___hash_len_6; }
	inline uint32_t* get_address_of_hash_len_6() { return &___hash_len_6; }
	inline void set_hash_len_6(uint32_t value)
	{
		___hash_len_6 = value;
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t1886479188, ___flags_7)); }
	inline uint32_t get_flags_7() const { return ___flags_7; }
	inline uint32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(uint32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_major_8() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t1886479188, ___major_8)); }
	inline uint16_t get_major_8() const { return ___major_8; }
	inline uint16_t* get_address_of_major_8() { return &___major_8; }
	inline void set_major_8(uint16_t value)
	{
		___major_8 = value;
	}

	inline static int32_t get_offset_of_minor_9() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t1886479188, ___minor_9)); }
	inline uint16_t get_minor_9() const { return ___minor_9; }
	inline uint16_t* get_address_of_minor_9() { return &___minor_9; }
	inline void set_minor_9(uint16_t value)
	{
		___minor_9 = value;
	}

	inline static int32_t get_offset_of_build_10() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t1886479188, ___build_10)); }
	inline uint16_t get_build_10() const { return ___build_10; }
	inline uint16_t* get_address_of_build_10() { return &___build_10; }
	inline void set_build_10(uint16_t value)
	{
		___build_10 = value;
	}

	inline static int32_t get_offset_of_revision_11() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t1886479188, ___revision_11)); }
	inline uint16_t get_revision_11() const { return ___revision_11; }
	inline uint16_t* get_address_of_revision_11() { return &___revision_11; }
	inline void set_revision_11(uint16_t value)
	{
		___revision_11 = value;
	}

	inline static int32_t get_offset_of_arch_12() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t1886479188, ___arch_12)); }
	inline uint16_t get_arch_12() const { return ___arch_12; }
	inline uint16_t* get_address_of_arch_12() { return &___arch_12; }
	inline void set_arch_12(uint16_t value)
	{
		___arch_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOASSEMBLYNAME_T1886479188_H
#ifndef GENERICPARAMINFO_T1377222196_H
#define GENERICPARAMINFO_T1377222196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.RuntimeStructs/GenericParamInfo
struct  GenericParamInfo_t1377222196 
{
public:
	// Mono.RuntimeStructs/MonoClass* Mono.RuntimeStructs/GenericParamInfo::pklass
	MonoClass_t2595527713 * ___pklass_0;
	// System.IntPtr Mono.RuntimeStructs/GenericParamInfo::name
	intptr_t ___name_1;
	// System.UInt16 Mono.RuntimeStructs/GenericParamInfo::flags
	uint16_t ___flags_2;
	// System.UInt32 Mono.RuntimeStructs/GenericParamInfo::token
	uint32_t ___token_3;
	// Mono.RuntimeStructs/MonoClass** Mono.RuntimeStructs/GenericParamInfo::constraints
	MonoClass_t2595527713 ** ___constraints_4;

public:
	inline static int32_t get_offset_of_pklass_0() { return static_cast<int32_t>(offsetof(GenericParamInfo_t1377222196, ___pklass_0)); }
	inline MonoClass_t2595527713 * get_pklass_0() const { return ___pklass_0; }
	inline MonoClass_t2595527713 ** get_address_of_pklass_0() { return &___pklass_0; }
	inline void set_pklass_0(MonoClass_t2595527713 * value)
	{
		___pklass_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(GenericParamInfo_t1377222196, ___name_1)); }
	inline intptr_t get_name_1() const { return ___name_1; }
	inline intptr_t* get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(intptr_t value)
	{
		___name_1 = value;
	}

	inline static int32_t get_offset_of_flags_2() { return static_cast<int32_t>(offsetof(GenericParamInfo_t1377222196, ___flags_2)); }
	inline uint16_t get_flags_2() const { return ___flags_2; }
	inline uint16_t* get_address_of_flags_2() { return &___flags_2; }
	inline void set_flags_2(uint16_t value)
	{
		___flags_2 = value;
	}

	inline static int32_t get_offset_of_token_3() { return static_cast<int32_t>(offsetof(GenericParamInfo_t1377222196, ___token_3)); }
	inline uint32_t get_token_3() const { return ___token_3; }
	inline uint32_t* get_address_of_token_3() { return &___token_3; }
	inline void set_token_3(uint32_t value)
	{
		___token_3 = value;
	}

	inline static int32_t get_offset_of_constraints_4() { return static_cast<int32_t>(offsetof(GenericParamInfo_t1377222196, ___constraints_4)); }
	inline MonoClass_t2595527713 ** get_constraints_4() const { return ___constraints_4; }
	inline MonoClass_t2595527713 *** get_address_of_constraints_4() { return &___constraints_4; }
	inline void set_constraints_4(MonoClass_t2595527713 ** value)
	{
		___constraints_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.RuntimeStructs/GenericParamInfo
struct GenericParamInfo_t1377222196_marshaled_pinvoke
{
	MonoClass_t2595527713 * ___pklass_0;
	intptr_t ___name_1;
	uint16_t ___flags_2;
	uint32_t ___token_3;
	MonoClass_t2595527713 ** ___constraints_4;
};
// Native definition for COM marshalling of Mono.RuntimeStructs/GenericParamInfo
struct GenericParamInfo_t1377222196_marshaled_com
{
	MonoClass_t2595527713 * ___pklass_0;
	intptr_t ___name_1;
	uint16_t ___flags_2;
	uint32_t ___token_3;
	MonoClass_t2595527713 ** ___constraints_4;
};
#endif // GENERICPARAMINFO_T1377222196_H
#ifndef SAFEHANDLE_T2733794115_H
#define SAFEHANDLE_T2733794115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t2733794115  : public CriticalFinalizerObject_t1920899984
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t2733794115, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(SafeHandle_t2733794115, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__ownsHandle_2() { return static_cast<int32_t>(offsetof(SafeHandle_t2733794115, ____ownsHandle_2)); }
	inline bool get__ownsHandle_2() const { return ____ownsHandle_2; }
	inline bool* get_address_of__ownsHandle_2() { return &____ownsHandle_2; }
	inline void set__ownsHandle_2(bool value)
	{
		____ownsHandle_2 = value;
	}

	inline static int32_t get_offset_of__fullyInitialized_3() { return static_cast<int32_t>(offsetof(SafeHandle_t2733794115, ____fullyInitialized_3)); }
	inline bool get__fullyInitialized_3() const { return ____fullyInitialized_3; }
	inline bool* get_address_of__fullyInitialized_3() { return &____fullyInitialized_3; }
	inline void set__fullyInitialized_3(bool value)
	{
		____fullyInitialized_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLE_T2733794115_H
#ifndef DELEGATE_T3022476291_H
#define DELEGATE_T3022476291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3022476291  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1572802995 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___data_9)); }
	inline DelegateData_t1572802995 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1572802995 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1572802995 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t3022476291_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1572802995 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t3022476291_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1572802995 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T3022476291_H
#ifndef COMPAREOPTIONS_T2829943955_H
#define COMPAREOPTIONS_T2829943955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareOptions
struct  CompareOptions_t2829943955 
{
public:
	// System.Int32 System.Globalization.CompareOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompareOptions_t2829943955, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREOPTIONS_T2829943955_H
#ifndef PADDINGMODE_T3032142640_H
#define PADDINGMODE_T3032142640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t3032142640 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PaddingMode_t3032142640, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PADDINGMODE_T3032142640_H
#ifndef REMOTECLASS_T3863182804_H
#define REMOTECLASS_T3863182804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.RuntimeStructs/RemoteClass
struct  RemoteClass_t3863182804 
{
public:
	// System.IntPtr Mono.RuntimeStructs/RemoteClass::default_vtable
	intptr_t ___default_vtable_0;
	// System.IntPtr Mono.RuntimeStructs/RemoteClass::xdomain_vtable
	intptr_t ___xdomain_vtable_1;
	// Mono.RuntimeStructs/MonoClass* Mono.RuntimeStructs/RemoteClass::proxy_class
	MonoClass_t2595527713 * ___proxy_class_2;
	// System.IntPtr Mono.RuntimeStructs/RemoteClass::proxy_class_name
	intptr_t ___proxy_class_name_3;
	// System.UInt32 Mono.RuntimeStructs/RemoteClass::interface_count
	uint32_t ___interface_count_4;

public:
	inline static int32_t get_offset_of_default_vtable_0() { return static_cast<int32_t>(offsetof(RemoteClass_t3863182804, ___default_vtable_0)); }
	inline intptr_t get_default_vtable_0() const { return ___default_vtable_0; }
	inline intptr_t* get_address_of_default_vtable_0() { return &___default_vtable_0; }
	inline void set_default_vtable_0(intptr_t value)
	{
		___default_vtable_0 = value;
	}

	inline static int32_t get_offset_of_xdomain_vtable_1() { return static_cast<int32_t>(offsetof(RemoteClass_t3863182804, ___xdomain_vtable_1)); }
	inline intptr_t get_xdomain_vtable_1() const { return ___xdomain_vtable_1; }
	inline intptr_t* get_address_of_xdomain_vtable_1() { return &___xdomain_vtable_1; }
	inline void set_xdomain_vtable_1(intptr_t value)
	{
		___xdomain_vtable_1 = value;
	}

	inline static int32_t get_offset_of_proxy_class_2() { return static_cast<int32_t>(offsetof(RemoteClass_t3863182804, ___proxy_class_2)); }
	inline MonoClass_t2595527713 * get_proxy_class_2() const { return ___proxy_class_2; }
	inline MonoClass_t2595527713 ** get_address_of_proxy_class_2() { return &___proxy_class_2; }
	inline void set_proxy_class_2(MonoClass_t2595527713 * value)
	{
		___proxy_class_2 = value;
	}

	inline static int32_t get_offset_of_proxy_class_name_3() { return static_cast<int32_t>(offsetof(RemoteClass_t3863182804, ___proxy_class_name_3)); }
	inline intptr_t get_proxy_class_name_3() const { return ___proxy_class_name_3; }
	inline intptr_t* get_address_of_proxy_class_name_3() { return &___proxy_class_name_3; }
	inline void set_proxy_class_name_3(intptr_t value)
	{
		___proxy_class_name_3 = value;
	}

	inline static int32_t get_offset_of_interface_count_4() { return static_cast<int32_t>(offsetof(RemoteClass_t3863182804, ___interface_count_4)); }
	inline uint32_t get_interface_count_4() const { return ___interface_count_4; }
	inline uint32_t* get_address_of_interface_count_4() { return &___interface_count_4; }
	inline void set_interface_count_4(uint32_t value)
	{
		___interface_count_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.RuntimeStructs/RemoteClass
struct RemoteClass_t3863182804_marshaled_pinvoke
{
	intptr_t ___default_vtable_0;
	intptr_t ___xdomain_vtable_1;
	MonoClass_t2595527713 * ___proxy_class_2;
	intptr_t ___proxy_class_name_3;
	uint32_t ___interface_count_4;
};
// Native definition for COM marshalling of Mono.RuntimeStructs/RemoteClass
struct RemoteClass_t3863182804_marshaled_com
{
	intptr_t ___default_vtable_0;
	intptr_t ___xdomain_vtable_1;
	MonoClass_t2595527713 * ___proxy_class_2;
	intptr_t ___proxy_class_name_3;
	uint32_t ___interface_count_4;
};
#endif // REMOTECLASS_T3863182804_H
#ifndef WIN32NATIVE_T932910218_H
#define WIN32NATIVE_T932910218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.Win32Native
struct  Win32Native_t932910218  : public RuntimeObject
{
public:

public:
};

struct Win32Native_t932910218_StaticFields
{
public:
	// System.IntPtr Microsoft.Win32.Win32Native::INVALID_HANDLE_VALUE
	intptr_t ___INVALID_HANDLE_VALUE_0;
	// System.Version Microsoft.Win32.Win32Native::ThreadErrorModeMinOsVersion
	Version_t1755874712 * ___ThreadErrorModeMinOsVersion_1;

public:
	inline static int32_t get_offset_of_INVALID_HANDLE_VALUE_0() { return static_cast<int32_t>(offsetof(Win32Native_t932910218_StaticFields, ___INVALID_HANDLE_VALUE_0)); }
	inline intptr_t get_INVALID_HANDLE_VALUE_0() const { return ___INVALID_HANDLE_VALUE_0; }
	inline intptr_t* get_address_of_INVALID_HANDLE_VALUE_0() { return &___INVALID_HANDLE_VALUE_0; }
	inline void set_INVALID_HANDLE_VALUE_0(intptr_t value)
	{
		___INVALID_HANDLE_VALUE_0 = value;
	}

	inline static int32_t get_offset_of_ThreadErrorModeMinOsVersion_1() { return static_cast<int32_t>(offsetof(Win32Native_t932910218_StaticFields, ___ThreadErrorModeMinOsVersion_1)); }
	inline Version_t1755874712 * get_ThreadErrorModeMinOsVersion_1() const { return ___ThreadErrorModeMinOsVersion_1; }
	inline Version_t1755874712 ** get_address_of_ThreadErrorModeMinOsVersion_1() { return &___ThreadErrorModeMinOsVersion_1; }
	inline void set_ThreadErrorModeMinOsVersion_1(Version_t1755874712 * value)
	{
		___ThreadErrorModeMinOsVersion_1 = value;
		Il2CppCodeGenWriteBarrier((&___ThreadErrorModeMinOsVersion_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32NATIVE_T932910218_H
#ifndef RUNTIMEPROPERTYHANDLE_T3120528081_H
#define RUNTIMEPROPERTYHANDLE_T3120528081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.RuntimePropertyHandle
struct  RuntimePropertyHandle_t3120528081 
{
public:
	// System.IntPtr Mono.RuntimePropertyHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimePropertyHandle_t3120528081, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPROPERTYHANDLE_T3120528081_H
#ifndef URIPARTIAL_T2274729157_H
#define URIPARTIAL_T2274729157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.UriPartial
struct  UriPartial_t2274729157 
{
public:
	// System.Int32 Mono.Security.UriPartial::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriPartial_t2274729157, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIPARTIAL_T2274729157_H
#ifndef SIGN_T874893935_H
#define SIGN_T874893935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Sign
struct  Sign_t874893935 
{
public:
	// System.Int32 Mono.Math.BigInteger/Sign::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Sign_t874893935, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGN_T874893935_H
#ifndef SMALLXMLPARSEREXCEPTION_T2094031034_H
#define SMALLXMLPARSEREXCEPTION_T2094031034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.SmallXmlParserException
struct  SmallXmlParserException_t2094031034  : public SystemException_t3877406272
{
public:
	// System.Int32 Mono.Xml.SmallXmlParserException::line
	int32_t ___line_16;
	// System.Int32 Mono.Xml.SmallXmlParserException::column
	int32_t ___column_17;

public:
	inline static int32_t get_offset_of_line_16() { return static_cast<int32_t>(offsetof(SmallXmlParserException_t2094031034, ___line_16)); }
	inline int32_t get_line_16() const { return ___line_16; }
	inline int32_t* get_address_of_line_16() { return &___line_16; }
	inline void set_line_16(int32_t value)
	{
		___line_16 = value;
	}

	inline static int32_t get_offset_of_column_17() { return static_cast<int32_t>(offsetof(SmallXmlParserException_t2094031034, ___column_17)); }
	inline int32_t get_column_17() const { return ___column_17; }
	inline int32_t* get_address_of_column_17() { return &___column_17; }
	inline void set_column_17(int32_t value)
	{
		___column_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMALLXMLPARSEREXCEPTION_T2094031034_H
#ifndef CONFIDENCEFACTOR_T1997037801_H
#define CONFIDENCEFACTOR_T1997037801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t1997037801 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t1997037801, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIDENCEFACTOR_T1997037801_H
#ifndef AUTHENTICODEDEFORMATTER_T978432004_H
#define AUTHENTICODEDEFORMATTER_T978432004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Authenticode.AuthenticodeDeformatter
struct  AuthenticodeDeformatter_t978432004  : public AuthenticodeBase_t3368165232
{
public:
	// System.String Mono.Security.Authenticode.AuthenticodeDeformatter::filename
	String_t* ___filename_8;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::hash
	ByteU5BU5D_t3397334013* ___hash_9;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Authenticode.AuthenticodeDeformatter::coll
	X509CertificateCollection_t3592472865 * ___coll_10;
	// Mono.Security.ASN1 Mono.Security.Authenticode.AuthenticodeDeformatter::signedHash
	ASN1_t924533535 * ___signedHash_11;
	// System.DateTime Mono.Security.Authenticode.AuthenticodeDeformatter::timestamp
	DateTime_t693205669  ___timestamp_12;
	// Mono.Security.X509.X509Certificate Mono.Security.Authenticode.AuthenticodeDeformatter::signingCertificate
	X509Certificate_t324051957 * ___signingCertificate_13;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeDeformatter::reason
	int32_t ___reason_14;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::trustedRoot
	bool ___trustedRoot_15;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::trustedTimestampRoot
	bool ___trustedTimestampRoot_16;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::entry
	ByteU5BU5D_t3397334013* ___entry_17;
	// Mono.Security.X509.X509Chain Mono.Security.Authenticode.AuthenticodeDeformatter::signerChain
	X509Chain_t1938971907 * ___signerChain_18;
	// Mono.Security.X509.X509Chain Mono.Security.Authenticode.AuthenticodeDeformatter::timestampChain
	X509Chain_t1938971907 * ___timestampChain_19;

public:
	inline static int32_t get_offset_of_filename_8() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t978432004, ___filename_8)); }
	inline String_t* get_filename_8() const { return ___filename_8; }
	inline String_t** get_address_of_filename_8() { return &___filename_8; }
	inline void set_filename_8(String_t* value)
	{
		___filename_8 = value;
		Il2CppCodeGenWriteBarrier((&___filename_8), value);
	}

	inline static int32_t get_offset_of_hash_9() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t978432004, ___hash_9)); }
	inline ByteU5BU5D_t3397334013* get_hash_9() const { return ___hash_9; }
	inline ByteU5BU5D_t3397334013** get_address_of_hash_9() { return &___hash_9; }
	inline void set_hash_9(ByteU5BU5D_t3397334013* value)
	{
		___hash_9 = value;
		Il2CppCodeGenWriteBarrier((&___hash_9), value);
	}

	inline static int32_t get_offset_of_coll_10() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t978432004, ___coll_10)); }
	inline X509CertificateCollection_t3592472865 * get_coll_10() const { return ___coll_10; }
	inline X509CertificateCollection_t3592472865 ** get_address_of_coll_10() { return &___coll_10; }
	inline void set_coll_10(X509CertificateCollection_t3592472865 * value)
	{
		___coll_10 = value;
		Il2CppCodeGenWriteBarrier((&___coll_10), value);
	}

	inline static int32_t get_offset_of_signedHash_11() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t978432004, ___signedHash_11)); }
	inline ASN1_t924533535 * get_signedHash_11() const { return ___signedHash_11; }
	inline ASN1_t924533535 ** get_address_of_signedHash_11() { return &___signedHash_11; }
	inline void set_signedHash_11(ASN1_t924533535 * value)
	{
		___signedHash_11 = value;
		Il2CppCodeGenWriteBarrier((&___signedHash_11), value);
	}

	inline static int32_t get_offset_of_timestamp_12() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t978432004, ___timestamp_12)); }
	inline DateTime_t693205669  get_timestamp_12() const { return ___timestamp_12; }
	inline DateTime_t693205669 * get_address_of_timestamp_12() { return &___timestamp_12; }
	inline void set_timestamp_12(DateTime_t693205669  value)
	{
		___timestamp_12 = value;
	}

	inline static int32_t get_offset_of_signingCertificate_13() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t978432004, ___signingCertificate_13)); }
	inline X509Certificate_t324051957 * get_signingCertificate_13() const { return ___signingCertificate_13; }
	inline X509Certificate_t324051957 ** get_address_of_signingCertificate_13() { return &___signingCertificate_13; }
	inline void set_signingCertificate_13(X509Certificate_t324051957 * value)
	{
		___signingCertificate_13 = value;
		Il2CppCodeGenWriteBarrier((&___signingCertificate_13), value);
	}

	inline static int32_t get_offset_of_reason_14() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t978432004, ___reason_14)); }
	inline int32_t get_reason_14() const { return ___reason_14; }
	inline int32_t* get_address_of_reason_14() { return &___reason_14; }
	inline void set_reason_14(int32_t value)
	{
		___reason_14 = value;
	}

	inline static int32_t get_offset_of_trustedRoot_15() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t978432004, ___trustedRoot_15)); }
	inline bool get_trustedRoot_15() const { return ___trustedRoot_15; }
	inline bool* get_address_of_trustedRoot_15() { return &___trustedRoot_15; }
	inline void set_trustedRoot_15(bool value)
	{
		___trustedRoot_15 = value;
	}

	inline static int32_t get_offset_of_trustedTimestampRoot_16() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t978432004, ___trustedTimestampRoot_16)); }
	inline bool get_trustedTimestampRoot_16() const { return ___trustedTimestampRoot_16; }
	inline bool* get_address_of_trustedTimestampRoot_16() { return &___trustedTimestampRoot_16; }
	inline void set_trustedTimestampRoot_16(bool value)
	{
		___trustedTimestampRoot_16 = value;
	}

	inline static int32_t get_offset_of_entry_17() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t978432004, ___entry_17)); }
	inline ByteU5BU5D_t3397334013* get_entry_17() const { return ___entry_17; }
	inline ByteU5BU5D_t3397334013** get_address_of_entry_17() { return &___entry_17; }
	inline void set_entry_17(ByteU5BU5D_t3397334013* value)
	{
		___entry_17 = value;
		Il2CppCodeGenWriteBarrier((&___entry_17), value);
	}

	inline static int32_t get_offset_of_signerChain_18() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t978432004, ___signerChain_18)); }
	inline X509Chain_t1938971907 * get_signerChain_18() const { return ___signerChain_18; }
	inline X509Chain_t1938971907 ** get_address_of_signerChain_18() { return &___signerChain_18; }
	inline void set_signerChain_18(X509Chain_t1938971907 * value)
	{
		___signerChain_18 = value;
		Il2CppCodeGenWriteBarrier((&___signerChain_18), value);
	}

	inline static int32_t get_offset_of_timestampChain_19() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t978432004, ___timestampChain_19)); }
	inline X509Chain_t1938971907 * get_timestampChain_19() const { return ___timestampChain_19; }
	inline X509Chain_t1938971907 ** get_address_of_timestampChain_19() { return &___timestampChain_19; }
	inline void set_timestampChain_19(X509Chain_t1938971907 * value)
	{
		___timestampChain_19 = value;
		Il2CppCodeGenWriteBarrier((&___timestampChain_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICODEDEFORMATTER_T978432004_H
#ifndef DSAMANAGED_T892502321_H
#define DSAMANAGED_T892502321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.DSAManaged
struct  DSAManaged_t892502321  : public DSA_t903174880
{
public:
	// System.Boolean Mono.Security.Cryptography.DSAManaged::keypairGenerated
	bool ___keypairGenerated_2;
	// System.Boolean Mono.Security.Cryptography.DSAManaged::m_disposed
	bool ___m_disposed_3;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::p
	BigInteger_t925946152 * ___p_4;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::q
	BigInteger_t925946152 * ___q_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::g
	BigInteger_t925946152 * ___g_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::x
	BigInteger_t925946152 * ___x_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::y
	BigInteger_t925946152 * ___y_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::j
	BigInteger_t925946152 * ___j_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::seed
	BigInteger_t925946152 * ___seed_10;
	// System.Int32 Mono.Security.Cryptography.DSAManaged::counter
	int32_t ___counter_11;
	// System.Boolean Mono.Security.Cryptography.DSAManaged::j_missing
	bool ___j_missing_12;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.DSAManaged::rng
	RandomNumberGenerator_t2510243513 * ___rng_13;
	// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.DSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t2001522803 * ___KeyGenerated_14;

public:
	inline static int32_t get_offset_of_keypairGenerated_2() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___keypairGenerated_2)); }
	inline bool get_keypairGenerated_2() const { return ___keypairGenerated_2; }
	inline bool* get_address_of_keypairGenerated_2() { return &___keypairGenerated_2; }
	inline void set_keypairGenerated_2(bool value)
	{
		___keypairGenerated_2 = value;
	}

	inline static int32_t get_offset_of_m_disposed_3() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___m_disposed_3)); }
	inline bool get_m_disposed_3() const { return ___m_disposed_3; }
	inline bool* get_address_of_m_disposed_3() { return &___m_disposed_3; }
	inline void set_m_disposed_3(bool value)
	{
		___m_disposed_3 = value;
	}

	inline static int32_t get_offset_of_p_4() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___p_4)); }
	inline BigInteger_t925946152 * get_p_4() const { return ___p_4; }
	inline BigInteger_t925946152 ** get_address_of_p_4() { return &___p_4; }
	inline void set_p_4(BigInteger_t925946152 * value)
	{
		___p_4 = value;
		Il2CppCodeGenWriteBarrier((&___p_4), value);
	}

	inline static int32_t get_offset_of_q_5() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___q_5)); }
	inline BigInteger_t925946152 * get_q_5() const { return ___q_5; }
	inline BigInteger_t925946152 ** get_address_of_q_5() { return &___q_5; }
	inline void set_q_5(BigInteger_t925946152 * value)
	{
		___q_5 = value;
		Il2CppCodeGenWriteBarrier((&___q_5), value);
	}

	inline static int32_t get_offset_of_g_6() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___g_6)); }
	inline BigInteger_t925946152 * get_g_6() const { return ___g_6; }
	inline BigInteger_t925946152 ** get_address_of_g_6() { return &___g_6; }
	inline void set_g_6(BigInteger_t925946152 * value)
	{
		___g_6 = value;
		Il2CppCodeGenWriteBarrier((&___g_6), value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___x_7)); }
	inline BigInteger_t925946152 * get_x_7() const { return ___x_7; }
	inline BigInteger_t925946152 ** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(BigInteger_t925946152 * value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier((&___x_7), value);
	}

	inline static int32_t get_offset_of_y_8() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___y_8)); }
	inline BigInteger_t925946152 * get_y_8() const { return ___y_8; }
	inline BigInteger_t925946152 ** get_address_of_y_8() { return &___y_8; }
	inline void set_y_8(BigInteger_t925946152 * value)
	{
		___y_8 = value;
		Il2CppCodeGenWriteBarrier((&___y_8), value);
	}

	inline static int32_t get_offset_of_j_9() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___j_9)); }
	inline BigInteger_t925946152 * get_j_9() const { return ___j_9; }
	inline BigInteger_t925946152 ** get_address_of_j_9() { return &___j_9; }
	inline void set_j_9(BigInteger_t925946152 * value)
	{
		___j_9 = value;
		Il2CppCodeGenWriteBarrier((&___j_9), value);
	}

	inline static int32_t get_offset_of_seed_10() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___seed_10)); }
	inline BigInteger_t925946152 * get_seed_10() const { return ___seed_10; }
	inline BigInteger_t925946152 ** get_address_of_seed_10() { return &___seed_10; }
	inline void set_seed_10(BigInteger_t925946152 * value)
	{
		___seed_10 = value;
		Il2CppCodeGenWriteBarrier((&___seed_10), value);
	}

	inline static int32_t get_offset_of_counter_11() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___counter_11)); }
	inline int32_t get_counter_11() const { return ___counter_11; }
	inline int32_t* get_address_of_counter_11() { return &___counter_11; }
	inline void set_counter_11(int32_t value)
	{
		___counter_11 = value;
	}

	inline static int32_t get_offset_of_j_missing_12() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___j_missing_12)); }
	inline bool get_j_missing_12() const { return ___j_missing_12; }
	inline bool* get_address_of_j_missing_12() { return &___j_missing_12; }
	inline void set_j_missing_12(bool value)
	{
		___j_missing_12 = value;
	}

	inline static int32_t get_offset_of_rng_13() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___rng_13)); }
	inline RandomNumberGenerator_t2510243513 * get_rng_13() const { return ___rng_13; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of_rng_13() { return &___rng_13; }
	inline void set_rng_13(RandomNumberGenerator_t2510243513 * value)
	{
		___rng_13 = value;
		Il2CppCodeGenWriteBarrier((&___rng_13), value);
	}

	inline static int32_t get_offset_of_KeyGenerated_14() { return static_cast<int32_t>(offsetof(DSAManaged_t892502321, ___KeyGenerated_14)); }
	inline KeyGeneratedEventHandler_t2001522803 * get_KeyGenerated_14() const { return ___KeyGenerated_14; }
	inline KeyGeneratedEventHandler_t2001522803 ** get_address_of_KeyGenerated_14() { return &___KeyGenerated_14; }
	inline void set_KeyGenerated_14(KeyGeneratedEventHandler_t2001522803 * value)
	{
		___KeyGenerated_14 = value;
		Il2CppCodeGenWriteBarrier((&___KeyGenerated_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSAMANAGED_T892502321_H
#ifndef X509CHAINSTATUSFLAGS_T2843686920_H
#define X509CHAINSTATUSFLAGS_T2843686920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ChainStatusFlags
struct  X509ChainStatusFlags_t2843686920 
{
public:
	// System.Int32 Mono.Security.X509.X509ChainStatusFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t2843686920, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINSTATUSFLAGS_T2843686920_H
#ifndef RSAMANAGED_T3034748747_H
#define RSAMANAGED_T3034748747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged
struct  RSAManaged_t3034748747  : public RSA_t3719518354
{
public:
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible_2;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keyBlinding
	bool ___keyBlinding_3;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated_4;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_t925946152 * ___d_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t925946152 * ___p_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t925946152 * ___q_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t925946152 * ___dp_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t925946152 * ___dq_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t925946152 * ___qInv_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t925946152 * ___n_12;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t925946152 * ___e_13;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t108853709 * ___KeyGenerated_14;

public:
	inline static int32_t get_offset_of_isCRTpossible_2() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___isCRTpossible_2)); }
	inline bool get_isCRTpossible_2() const { return ___isCRTpossible_2; }
	inline bool* get_address_of_isCRTpossible_2() { return &___isCRTpossible_2; }
	inline void set_isCRTpossible_2(bool value)
	{
		___isCRTpossible_2 = value;
	}

	inline static int32_t get_offset_of_keyBlinding_3() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___keyBlinding_3)); }
	inline bool get_keyBlinding_3() const { return ___keyBlinding_3; }
	inline bool* get_address_of_keyBlinding_3() { return &___keyBlinding_3; }
	inline void set_keyBlinding_3(bool value)
	{
		___keyBlinding_3 = value;
	}

	inline static int32_t get_offset_of_keypairGenerated_4() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___keypairGenerated_4)); }
	inline bool get_keypairGenerated_4() const { return ___keypairGenerated_4; }
	inline bool* get_address_of_keypairGenerated_4() { return &___keypairGenerated_4; }
	inline void set_keypairGenerated_4(bool value)
	{
		___keypairGenerated_4 = value;
	}

	inline static int32_t get_offset_of_m_disposed_5() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___m_disposed_5)); }
	inline bool get_m_disposed_5() const { return ___m_disposed_5; }
	inline bool* get_address_of_m_disposed_5() { return &___m_disposed_5; }
	inline void set_m_disposed_5(bool value)
	{
		___m_disposed_5 = value;
	}

	inline static int32_t get_offset_of_d_6() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___d_6)); }
	inline BigInteger_t925946152 * get_d_6() const { return ___d_6; }
	inline BigInteger_t925946152 ** get_address_of_d_6() { return &___d_6; }
	inline void set_d_6(BigInteger_t925946152 * value)
	{
		___d_6 = value;
		Il2CppCodeGenWriteBarrier((&___d_6), value);
	}

	inline static int32_t get_offset_of_p_7() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___p_7)); }
	inline BigInteger_t925946152 * get_p_7() const { return ___p_7; }
	inline BigInteger_t925946152 ** get_address_of_p_7() { return &___p_7; }
	inline void set_p_7(BigInteger_t925946152 * value)
	{
		___p_7 = value;
		Il2CppCodeGenWriteBarrier((&___p_7), value);
	}

	inline static int32_t get_offset_of_q_8() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___q_8)); }
	inline BigInteger_t925946152 * get_q_8() const { return ___q_8; }
	inline BigInteger_t925946152 ** get_address_of_q_8() { return &___q_8; }
	inline void set_q_8(BigInteger_t925946152 * value)
	{
		___q_8 = value;
		Il2CppCodeGenWriteBarrier((&___q_8), value);
	}

	inline static int32_t get_offset_of_dp_9() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___dp_9)); }
	inline BigInteger_t925946152 * get_dp_9() const { return ___dp_9; }
	inline BigInteger_t925946152 ** get_address_of_dp_9() { return &___dp_9; }
	inline void set_dp_9(BigInteger_t925946152 * value)
	{
		___dp_9 = value;
		Il2CppCodeGenWriteBarrier((&___dp_9), value);
	}

	inline static int32_t get_offset_of_dq_10() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___dq_10)); }
	inline BigInteger_t925946152 * get_dq_10() const { return ___dq_10; }
	inline BigInteger_t925946152 ** get_address_of_dq_10() { return &___dq_10; }
	inline void set_dq_10(BigInteger_t925946152 * value)
	{
		___dq_10 = value;
		Il2CppCodeGenWriteBarrier((&___dq_10), value);
	}

	inline static int32_t get_offset_of_qInv_11() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___qInv_11)); }
	inline BigInteger_t925946152 * get_qInv_11() const { return ___qInv_11; }
	inline BigInteger_t925946152 ** get_address_of_qInv_11() { return &___qInv_11; }
	inline void set_qInv_11(BigInteger_t925946152 * value)
	{
		___qInv_11 = value;
		Il2CppCodeGenWriteBarrier((&___qInv_11), value);
	}

	inline static int32_t get_offset_of_n_12() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___n_12)); }
	inline BigInteger_t925946152 * get_n_12() const { return ___n_12; }
	inline BigInteger_t925946152 ** get_address_of_n_12() { return &___n_12; }
	inline void set_n_12(BigInteger_t925946152 * value)
	{
		___n_12 = value;
		Il2CppCodeGenWriteBarrier((&___n_12), value);
	}

	inline static int32_t get_offset_of_e_13() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___e_13)); }
	inline BigInteger_t925946152 * get_e_13() const { return ___e_13; }
	inline BigInteger_t925946152 ** get_address_of_e_13() { return &___e_13; }
	inline void set_e_13(BigInteger_t925946152 * value)
	{
		___e_13 = value;
		Il2CppCodeGenWriteBarrier((&___e_13), value);
	}

	inline static int32_t get_offset_of_KeyGenerated_14() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___KeyGenerated_14)); }
	inline KeyGeneratedEventHandler_t108853709 * get_KeyGenerated_14() const { return ___KeyGenerated_14; }
	inline KeyGeneratedEventHandler_t108853709 ** get_address_of_KeyGenerated_14() { return &___KeyGenerated_14; }
	inline void set_KeyGenerated_14(KeyGeneratedEventHandler_t108853709 * value)
	{
		___KeyGenerated_14 = value;
		Il2CppCodeGenWriteBarrier((&___KeyGenerated_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAMANAGED_T3034748747_H
#ifndef X509CERTIFICATE_T324051957_H
#define X509CERTIFICATE_T324051957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Certificate
struct  X509Certificate_t324051957  : public RuntimeObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t924533535 * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_t3397334013* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t693205669  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t693205669  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t924533535 * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_t3397334013* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t924533535 * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_t3397334013* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_t3397334013* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_t3397334013* ___m_signaturealgoparams_13;
	// System.Byte[] Mono.Security.X509.X509Certificate::certhash
	ByteU5BU5D_t3397334013* ___certhash_14;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_t3719518354 * ____rsa_15;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t903174880 * ____dsa_16;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_t3397334013* ___serialnumber_18;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_t3397334013* ___issuerUniqueID_19;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_t3397334013* ___subjectUniqueID_20;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t1640144839 * ___extensions_21;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___decoder_0)); }
	inline ASN1_t924533535 * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_t924533535 ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_t924533535 * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_0), value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___m_encodedcert_1)); }
	inline ByteU5BU5D_t3397334013* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_t3397334013* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encodedcert_1), value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___m_from_2)); }
	inline DateTime_t693205669  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_t693205669 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_t693205669  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___m_until_3)); }
	inline DateTime_t693205669  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_t693205669 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_t693205669  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___issuer_4)); }
	inline ASN1_t924533535 * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_t924533535 ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_t924533535 * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_4), value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_issuername_5), value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgo_6), value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_t3397334013* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_t3397334013* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgoparams_7), value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___subject_8)); }
	inline ASN1_t924533535 * get_subject_8() const { return ___subject_8; }
	inline ASN1_t924533535 ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_t924533535 * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((&___subject_8), value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_subject_9), value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___m_publickey_10)); }
	inline ByteU5BU5D_t3397334013* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_t3397334013* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_publickey_10), value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___signature_11)); }
	inline ByteU5BU5D_t3397334013* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_t3397334013** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_t3397334013* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier((&___signature_11), value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgo_12), value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_t3397334013* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_t3397334013* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgoparams_13), value);
	}

	inline static int32_t get_offset_of_certhash_14() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___certhash_14)); }
	inline ByteU5BU5D_t3397334013* get_certhash_14() const { return ___certhash_14; }
	inline ByteU5BU5D_t3397334013** get_address_of_certhash_14() { return &___certhash_14; }
	inline void set_certhash_14(ByteU5BU5D_t3397334013* value)
	{
		___certhash_14 = value;
		Il2CppCodeGenWriteBarrier((&___certhash_14), value);
	}

	inline static int32_t get_offset_of__rsa_15() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ____rsa_15)); }
	inline RSA_t3719518354 * get__rsa_15() const { return ____rsa_15; }
	inline RSA_t3719518354 ** get_address_of__rsa_15() { return &____rsa_15; }
	inline void set__rsa_15(RSA_t3719518354 * value)
	{
		____rsa_15 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_15), value);
	}

	inline static int32_t get_offset_of__dsa_16() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ____dsa_16)); }
	inline DSA_t903174880 * get__dsa_16() const { return ____dsa_16; }
	inline DSA_t903174880 ** get_address_of__dsa_16() { return &____dsa_16; }
	inline void set__dsa_16(DSA_t903174880 * value)
	{
		____dsa_16 = value;
		Il2CppCodeGenWriteBarrier((&____dsa_16), value);
	}

	inline static int32_t get_offset_of_version_17() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___version_17)); }
	inline int32_t get_version_17() const { return ___version_17; }
	inline int32_t* get_address_of_version_17() { return &___version_17; }
	inline void set_version_17(int32_t value)
	{
		___version_17 = value;
	}

	inline static int32_t get_offset_of_serialnumber_18() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___serialnumber_18)); }
	inline ByteU5BU5D_t3397334013* get_serialnumber_18() const { return ___serialnumber_18; }
	inline ByteU5BU5D_t3397334013** get_address_of_serialnumber_18() { return &___serialnumber_18; }
	inline void set_serialnumber_18(ByteU5BU5D_t3397334013* value)
	{
		___serialnumber_18 = value;
		Il2CppCodeGenWriteBarrier((&___serialnumber_18), value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_19() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___issuerUniqueID_19)); }
	inline ByteU5BU5D_t3397334013* get_issuerUniqueID_19() const { return ___issuerUniqueID_19; }
	inline ByteU5BU5D_t3397334013** get_address_of_issuerUniqueID_19() { return &___issuerUniqueID_19; }
	inline void set_issuerUniqueID_19(ByteU5BU5D_t3397334013* value)
	{
		___issuerUniqueID_19 = value;
		Il2CppCodeGenWriteBarrier((&___issuerUniqueID_19), value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_20() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___subjectUniqueID_20)); }
	inline ByteU5BU5D_t3397334013* get_subjectUniqueID_20() const { return ___subjectUniqueID_20; }
	inline ByteU5BU5D_t3397334013** get_address_of_subjectUniqueID_20() { return &___subjectUniqueID_20; }
	inline void set_subjectUniqueID_20(ByteU5BU5D_t3397334013* value)
	{
		___subjectUniqueID_20 = value;
		Il2CppCodeGenWriteBarrier((&___subjectUniqueID_20), value);
	}

	inline static int32_t get_offset_of_extensions_21() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___extensions_21)); }
	inline X509ExtensionCollection_t1640144839 * get_extensions_21() const { return ___extensions_21; }
	inline X509ExtensionCollection_t1640144839 ** get_address_of_extensions_21() { return &___extensions_21; }
	inline void set_extensions_21(X509ExtensionCollection_t1640144839 * value)
	{
		___extensions_21 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_21), value);
	}
};

struct X509Certificate_t324051957_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_22;

public:
	inline static int32_t get_offset_of_encoding_error_22() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957_StaticFields, ___encoding_error_22)); }
	inline String_t* get_encoding_error_22() const { return ___encoding_error_22; }
	inline String_t** get_address_of_encoding_error_22() { return &___encoding_error_22; }
	inline void set_encoding_error_22(String_t* value)
	{
		___encoding_error_22 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_error_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T324051957_H
#ifndef RUNTIMEEVENTHANDLE_T798447448_H
#define RUNTIMEEVENTHANDLE_T798447448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.RuntimeEventHandle
struct  RuntimeEventHandle_t798447448 
{
public:
	// System.IntPtr Mono.RuntimeEventHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeEventHandle_t798447448, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEEVENTHANDLE_T798447448_H
#ifndef REGISTRYVALUEOPTIONS_T3181579340_H
#define REGISTRYVALUEOPTIONS_T3181579340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryValueOptions
struct  RegistryValueOptions_t3181579340 
{
public:
	// System.Int32 Microsoft.Win32.RegistryValueOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegistryValueOptions_t3181579340, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYVALUEOPTIONS_T3181579340_H
#ifndef SAFESTRINGMARSHAL_T2486501886_H
#define SAFESTRINGMARSHAL_T2486501886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.SafeStringMarshal
struct  SafeStringMarshal_t2486501886 
{
public:
	// System.String Mono.SafeStringMarshal::str
	String_t* ___str_0;
	// System.IntPtr Mono.SafeStringMarshal::marshaled_string
	intptr_t ___marshaled_string_1;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(SafeStringMarshal_t2486501886, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_marshaled_string_1() { return static_cast<int32_t>(offsetof(SafeStringMarshal_t2486501886, ___marshaled_string_1)); }
	inline intptr_t get_marshaled_string_1() const { return ___marshaled_string_1; }
	inline intptr_t* get_address_of_marshaled_string_1() { return &___marshaled_string_1; }
	inline void set_marshaled_string_1(intptr_t value)
	{
		___marshaled_string_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.SafeStringMarshal
struct SafeStringMarshal_t2486501886_marshaled_pinvoke
{
	char* ___str_0;
	intptr_t ___marshaled_string_1;
};
// Native definition for COM marshalling of Mono.SafeStringMarshal
struct SafeStringMarshal_t2486501886_marshaled_com
{
	Il2CppChar* ___str_0;
	intptr_t ___marshaled_string_1;
};
#endif // SAFESTRINGMARSHAL_T2486501886_H
#ifndef REGISTRYHIVE_T2561794591_H
#define REGISTRYHIVE_T2561794591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryHive
struct  RegistryHive_t2561794591 
{
public:
	// System.Int32 Microsoft.Win32.RegistryHive::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegistryHive_t2561794591, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYHIVE_T2561794591_H
#ifndef REGISTRYVALUEKIND_T3069013676_H
#define REGISTRYVALUEKIND_T3069013676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryValueKind
struct  RegistryValueKind_t3069013676 
{
public:
	// System.Int32 Microsoft.Win32.RegistryValueKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegistryValueKind_t3069013676, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYVALUEKIND_T3069013676_H
#ifndef EXTENDERTYPE_T1556892101_H
#define EXTENDERTYPE_T1556892101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator/ExtenderType
struct  ExtenderType_t1556892101 
{
public:
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/ExtenderType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExtenderType_t1556892101, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENDERTYPE_T1556892101_H
#ifndef SAFEGPTRARRAYHANDLE_T547714345_H
#define SAFEGPTRARRAYHANDLE_T547714345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.SafeGPtrArrayHandle
struct  SafeGPtrArrayHandle_t547714345 
{
public:
	// Mono.RuntimeGPtrArrayHandle Mono.SafeGPtrArrayHandle::handle
	RuntimeGPtrArrayHandle_t1303258952  ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeGPtrArrayHandle_t547714345, ___handle_0)); }
	inline RuntimeGPtrArrayHandle_t1303258952  get_handle_0() const { return ___handle_0; }
	inline RuntimeGPtrArrayHandle_t1303258952 * get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(RuntimeGPtrArrayHandle_t1303258952  value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.SafeGPtrArrayHandle
struct SafeGPtrArrayHandle_t547714345_marshaled_pinvoke
{
	RuntimeGPtrArrayHandle_t1303258952_marshaled_pinvoke ___handle_0;
};
// Native definition for COM marshalling of Mono.SafeGPtrArrayHandle
struct SafeGPtrArrayHandle_t547714345_marshaled_com
{
	RuntimeGPtrArrayHandle_t1303258952_marshaled_com ___handle_0;
};
#endif // SAFEGPTRARRAYHANDLE_T547714345_H
#ifndef REGISTRYKEYPERMISSIONCHECK_T460149061_H
#define REGISTRYKEYPERMISSIONCHECK_T460149061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryKeyPermissionCheck
struct  RegistryKeyPermissionCheck_t460149061 
{
public:
	// System.Int32 Microsoft.Win32.RegistryKeyPermissionCheck::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegistryKeyPermissionCheck_t460149061, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYKEYPERMISSIONCHECK_T460149061_H
#ifndef SAFEHANDLEZEROORMINUSONEISINVALID_T1177681199_H
#define SAFEHANDLEZEROORMINUSONEISINVALID_T1177681199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct  SafeHandleZeroOrMinusOneIsInvalid_t1177681199  : public SafeHandle_t2733794115
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLEZEROORMINUSONEISINVALID_T1177681199_H
#ifndef X509CHAIN_T1938971907_H
#define X509CHAIN_T1938971907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Chain
struct  X509Chain_t1938971907  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::roots
	X509CertificateCollection_t3592472865 * ___roots_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::certs
	X509CertificateCollection_t3592472865 * ___certs_1;
	// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::_root
	X509Certificate_t324051957 * ____root_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::_chain
	X509CertificateCollection_t3592472865 * ____chain_3;
	// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::_status
	int32_t ____status_4;

public:
	inline static int32_t get_offset_of_roots_0() { return static_cast<int32_t>(offsetof(X509Chain_t1938971907, ___roots_0)); }
	inline X509CertificateCollection_t3592472865 * get_roots_0() const { return ___roots_0; }
	inline X509CertificateCollection_t3592472865 ** get_address_of_roots_0() { return &___roots_0; }
	inline void set_roots_0(X509CertificateCollection_t3592472865 * value)
	{
		___roots_0 = value;
		Il2CppCodeGenWriteBarrier((&___roots_0), value);
	}

	inline static int32_t get_offset_of_certs_1() { return static_cast<int32_t>(offsetof(X509Chain_t1938971907, ___certs_1)); }
	inline X509CertificateCollection_t3592472865 * get_certs_1() const { return ___certs_1; }
	inline X509CertificateCollection_t3592472865 ** get_address_of_certs_1() { return &___certs_1; }
	inline void set_certs_1(X509CertificateCollection_t3592472865 * value)
	{
		___certs_1 = value;
		Il2CppCodeGenWriteBarrier((&___certs_1), value);
	}

	inline static int32_t get_offset_of__root_2() { return static_cast<int32_t>(offsetof(X509Chain_t1938971907, ____root_2)); }
	inline X509Certificate_t324051957 * get__root_2() const { return ____root_2; }
	inline X509Certificate_t324051957 ** get_address_of__root_2() { return &____root_2; }
	inline void set__root_2(X509Certificate_t324051957 * value)
	{
		____root_2 = value;
		Il2CppCodeGenWriteBarrier((&____root_2), value);
	}

	inline static int32_t get_offset_of__chain_3() { return static_cast<int32_t>(offsetof(X509Chain_t1938971907, ____chain_3)); }
	inline X509CertificateCollection_t3592472865 * get__chain_3() const { return ____chain_3; }
	inline X509CertificateCollection_t3592472865 ** get_address_of__chain_3() { return &____chain_3; }
	inline void set__chain_3(X509CertificateCollection_t3592472865 * value)
	{
		____chain_3 = value;
		Il2CppCodeGenWriteBarrier((&____chain_3), value);
	}

	inline static int32_t get_offset_of__status_4() { return static_cast<int32_t>(offsetof(X509Chain_t1938971907, ____status_4)); }
	inline int32_t get__status_4() const { return ____status_4; }
	inline int32_t* get_address_of__status_4() { return &____status_4; }
	inline void set__status_4(int32_t value)
	{
		____status_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAIN_T1938971907_H
#ifndef SORTKEYBUFFER_T1759538423_H
#define SORTKEYBUFFER_T1759538423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SortKeyBuffer
struct  SortKeyBuffer_t1759538423  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l1b
	ByteU5BU5D_t3397334013* ___l1b_0;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l2b
	ByteU5BU5D_t3397334013* ___l2b_1;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l3b
	ByteU5BU5D_t3397334013* ___l3b_2;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l4sb
	ByteU5BU5D_t3397334013* ___l4sb_3;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l4tb
	ByteU5BU5D_t3397334013* ___l4tb_4;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l4kb
	ByteU5BU5D_t3397334013* ___l4kb_5;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l4wb
	ByteU5BU5D_t3397334013* ___l4wb_6;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l5b
	ByteU5BU5D_t3397334013* ___l5b_7;
	// System.String Mono.Globalization.Unicode.SortKeyBuffer::source
	String_t* ___source_8;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l1
	int32_t ___l1_9;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l2
	int32_t ___l2_10;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l3
	int32_t ___l3_11;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l4s
	int32_t ___l4s_12;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l4t
	int32_t ___l4t_13;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l4k
	int32_t ___l4k_14;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l4w
	int32_t ___l4w_15;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l5
	int32_t ___l5_16;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::lcid
	int32_t ___lcid_17;
	// System.Globalization.CompareOptions Mono.Globalization.Unicode.SortKeyBuffer::options
	int32_t ___options_18;
	// System.Boolean Mono.Globalization.Unicode.SortKeyBuffer::processLevel2
	bool ___processLevel2_19;
	// System.Boolean Mono.Globalization.Unicode.SortKeyBuffer::frenchSort
	bool ___frenchSort_20;
	// System.Boolean Mono.Globalization.Unicode.SortKeyBuffer::frenchSorted
	bool ___frenchSorted_21;

public:
	inline static int32_t get_offset_of_l1b_0() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___l1b_0)); }
	inline ByteU5BU5D_t3397334013* get_l1b_0() const { return ___l1b_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_l1b_0() { return &___l1b_0; }
	inline void set_l1b_0(ByteU5BU5D_t3397334013* value)
	{
		___l1b_0 = value;
		Il2CppCodeGenWriteBarrier((&___l1b_0), value);
	}

	inline static int32_t get_offset_of_l2b_1() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___l2b_1)); }
	inline ByteU5BU5D_t3397334013* get_l2b_1() const { return ___l2b_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_l2b_1() { return &___l2b_1; }
	inline void set_l2b_1(ByteU5BU5D_t3397334013* value)
	{
		___l2b_1 = value;
		Il2CppCodeGenWriteBarrier((&___l2b_1), value);
	}

	inline static int32_t get_offset_of_l3b_2() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___l3b_2)); }
	inline ByteU5BU5D_t3397334013* get_l3b_2() const { return ___l3b_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_l3b_2() { return &___l3b_2; }
	inline void set_l3b_2(ByteU5BU5D_t3397334013* value)
	{
		___l3b_2 = value;
		Il2CppCodeGenWriteBarrier((&___l3b_2), value);
	}

	inline static int32_t get_offset_of_l4sb_3() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___l4sb_3)); }
	inline ByteU5BU5D_t3397334013* get_l4sb_3() const { return ___l4sb_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_l4sb_3() { return &___l4sb_3; }
	inline void set_l4sb_3(ByteU5BU5D_t3397334013* value)
	{
		___l4sb_3 = value;
		Il2CppCodeGenWriteBarrier((&___l4sb_3), value);
	}

	inline static int32_t get_offset_of_l4tb_4() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___l4tb_4)); }
	inline ByteU5BU5D_t3397334013* get_l4tb_4() const { return ___l4tb_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_l4tb_4() { return &___l4tb_4; }
	inline void set_l4tb_4(ByteU5BU5D_t3397334013* value)
	{
		___l4tb_4 = value;
		Il2CppCodeGenWriteBarrier((&___l4tb_4), value);
	}

	inline static int32_t get_offset_of_l4kb_5() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___l4kb_5)); }
	inline ByteU5BU5D_t3397334013* get_l4kb_5() const { return ___l4kb_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_l4kb_5() { return &___l4kb_5; }
	inline void set_l4kb_5(ByteU5BU5D_t3397334013* value)
	{
		___l4kb_5 = value;
		Il2CppCodeGenWriteBarrier((&___l4kb_5), value);
	}

	inline static int32_t get_offset_of_l4wb_6() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___l4wb_6)); }
	inline ByteU5BU5D_t3397334013* get_l4wb_6() const { return ___l4wb_6; }
	inline ByteU5BU5D_t3397334013** get_address_of_l4wb_6() { return &___l4wb_6; }
	inline void set_l4wb_6(ByteU5BU5D_t3397334013* value)
	{
		___l4wb_6 = value;
		Il2CppCodeGenWriteBarrier((&___l4wb_6), value);
	}

	inline static int32_t get_offset_of_l5b_7() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___l5b_7)); }
	inline ByteU5BU5D_t3397334013* get_l5b_7() const { return ___l5b_7; }
	inline ByteU5BU5D_t3397334013** get_address_of_l5b_7() { return &___l5b_7; }
	inline void set_l5b_7(ByteU5BU5D_t3397334013* value)
	{
		___l5b_7 = value;
		Il2CppCodeGenWriteBarrier((&___l5b_7), value);
	}

	inline static int32_t get_offset_of_source_8() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___source_8)); }
	inline String_t* get_source_8() const { return ___source_8; }
	inline String_t** get_address_of_source_8() { return &___source_8; }
	inline void set_source_8(String_t* value)
	{
		___source_8 = value;
		Il2CppCodeGenWriteBarrier((&___source_8), value);
	}

	inline static int32_t get_offset_of_l1_9() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___l1_9)); }
	inline int32_t get_l1_9() const { return ___l1_9; }
	inline int32_t* get_address_of_l1_9() { return &___l1_9; }
	inline void set_l1_9(int32_t value)
	{
		___l1_9 = value;
	}

	inline static int32_t get_offset_of_l2_10() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___l2_10)); }
	inline int32_t get_l2_10() const { return ___l2_10; }
	inline int32_t* get_address_of_l2_10() { return &___l2_10; }
	inline void set_l2_10(int32_t value)
	{
		___l2_10 = value;
	}

	inline static int32_t get_offset_of_l3_11() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___l3_11)); }
	inline int32_t get_l3_11() const { return ___l3_11; }
	inline int32_t* get_address_of_l3_11() { return &___l3_11; }
	inline void set_l3_11(int32_t value)
	{
		___l3_11 = value;
	}

	inline static int32_t get_offset_of_l4s_12() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___l4s_12)); }
	inline int32_t get_l4s_12() const { return ___l4s_12; }
	inline int32_t* get_address_of_l4s_12() { return &___l4s_12; }
	inline void set_l4s_12(int32_t value)
	{
		___l4s_12 = value;
	}

	inline static int32_t get_offset_of_l4t_13() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___l4t_13)); }
	inline int32_t get_l4t_13() const { return ___l4t_13; }
	inline int32_t* get_address_of_l4t_13() { return &___l4t_13; }
	inline void set_l4t_13(int32_t value)
	{
		___l4t_13 = value;
	}

	inline static int32_t get_offset_of_l4k_14() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___l4k_14)); }
	inline int32_t get_l4k_14() const { return ___l4k_14; }
	inline int32_t* get_address_of_l4k_14() { return &___l4k_14; }
	inline void set_l4k_14(int32_t value)
	{
		___l4k_14 = value;
	}

	inline static int32_t get_offset_of_l4w_15() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___l4w_15)); }
	inline int32_t get_l4w_15() const { return ___l4w_15; }
	inline int32_t* get_address_of_l4w_15() { return &___l4w_15; }
	inline void set_l4w_15(int32_t value)
	{
		___l4w_15 = value;
	}

	inline static int32_t get_offset_of_l5_16() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___l5_16)); }
	inline int32_t get_l5_16() const { return ___l5_16; }
	inline int32_t* get_address_of_l5_16() { return &___l5_16; }
	inline void set_l5_16(int32_t value)
	{
		___l5_16 = value;
	}

	inline static int32_t get_offset_of_lcid_17() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___lcid_17)); }
	inline int32_t get_lcid_17() const { return ___lcid_17; }
	inline int32_t* get_address_of_lcid_17() { return &___lcid_17; }
	inline void set_lcid_17(int32_t value)
	{
		___lcid_17 = value;
	}

	inline static int32_t get_offset_of_options_18() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___options_18)); }
	inline int32_t get_options_18() const { return ___options_18; }
	inline int32_t* get_address_of_options_18() { return &___options_18; }
	inline void set_options_18(int32_t value)
	{
		___options_18 = value;
	}

	inline static int32_t get_offset_of_processLevel2_19() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___processLevel2_19)); }
	inline bool get_processLevel2_19() const { return ___processLevel2_19; }
	inline bool* get_address_of_processLevel2_19() { return &___processLevel2_19; }
	inline void set_processLevel2_19(bool value)
	{
		___processLevel2_19 = value;
	}

	inline static int32_t get_offset_of_frenchSort_20() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___frenchSort_20)); }
	inline bool get_frenchSort_20() const { return ___frenchSort_20; }
	inline bool* get_address_of_frenchSort_20() { return &___frenchSort_20; }
	inline void set_frenchSort_20(bool value)
	{
		___frenchSort_20 = value;
	}

	inline static int32_t get_offset_of_frenchSorted_21() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1759538423, ___frenchSorted_21)); }
	inline bool get_frenchSorted_21() const { return ___frenchSorted_21; }
	inline bool* get_address_of_frenchSorted_21() { return &___frenchSorted_21; }
	inline void set_frenchSorted_21(bool value)
	{
		___frenchSorted_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTKEYBUFFER_T1759538423_H
#ifndef MULTICASTDELEGATE_T3201952435_H
#define MULTICASTDELEGATE_T3201952435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3201952435  : public Delegate_t3022476291
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1606206610* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___delegates_11)); }
	inline DelegateU5BU5D_t1606206610* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1606206610** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1606206610* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t3201952435_marshaled_pinvoke : public Delegate_t3022476291_marshaled_pinvoke
{
	DelegateU5BU5D_t1606206610* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t3201952435_marshaled_com : public Delegate_t3022476291_marshaled_com
{
	DelegateU5BU5D_t1606206610* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T3201952435_H
#ifndef CONTEXT_T2636657155_H
#define CONTEXT_T2636657155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator/Context
struct  Context_t2636657155 
{
public:
	// System.Globalization.CompareOptions Mono.Globalization.Unicode.SimpleCollator/Context::Option
	int32_t ___Option_0;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/Context::NeverMatchFlags
	uint8_t* ___NeverMatchFlags_1;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/Context::AlwaysMatchFlags
	uint8_t* ___AlwaysMatchFlags_2;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/Context::Buffer1
	uint8_t* ___Buffer1_3;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/Context::Buffer2
	uint8_t* ___Buffer2_4;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/Context::PrevCode
	int32_t ___PrevCode_5;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/Context::PrevSortKey
	uint8_t* ___PrevSortKey_6;

public:
	inline static int32_t get_offset_of_Option_0() { return static_cast<int32_t>(offsetof(Context_t2636657155, ___Option_0)); }
	inline int32_t get_Option_0() const { return ___Option_0; }
	inline int32_t* get_address_of_Option_0() { return &___Option_0; }
	inline void set_Option_0(int32_t value)
	{
		___Option_0 = value;
	}

	inline static int32_t get_offset_of_NeverMatchFlags_1() { return static_cast<int32_t>(offsetof(Context_t2636657155, ___NeverMatchFlags_1)); }
	inline uint8_t* get_NeverMatchFlags_1() const { return ___NeverMatchFlags_1; }
	inline uint8_t** get_address_of_NeverMatchFlags_1() { return &___NeverMatchFlags_1; }
	inline void set_NeverMatchFlags_1(uint8_t* value)
	{
		___NeverMatchFlags_1 = value;
	}

	inline static int32_t get_offset_of_AlwaysMatchFlags_2() { return static_cast<int32_t>(offsetof(Context_t2636657155, ___AlwaysMatchFlags_2)); }
	inline uint8_t* get_AlwaysMatchFlags_2() const { return ___AlwaysMatchFlags_2; }
	inline uint8_t** get_address_of_AlwaysMatchFlags_2() { return &___AlwaysMatchFlags_2; }
	inline void set_AlwaysMatchFlags_2(uint8_t* value)
	{
		___AlwaysMatchFlags_2 = value;
	}

	inline static int32_t get_offset_of_Buffer1_3() { return static_cast<int32_t>(offsetof(Context_t2636657155, ___Buffer1_3)); }
	inline uint8_t* get_Buffer1_3() const { return ___Buffer1_3; }
	inline uint8_t** get_address_of_Buffer1_3() { return &___Buffer1_3; }
	inline void set_Buffer1_3(uint8_t* value)
	{
		___Buffer1_3 = value;
	}

	inline static int32_t get_offset_of_Buffer2_4() { return static_cast<int32_t>(offsetof(Context_t2636657155, ___Buffer2_4)); }
	inline uint8_t* get_Buffer2_4() const { return ___Buffer2_4; }
	inline uint8_t** get_address_of_Buffer2_4() { return &___Buffer2_4; }
	inline void set_Buffer2_4(uint8_t* value)
	{
		___Buffer2_4 = value;
	}

	inline static int32_t get_offset_of_PrevCode_5() { return static_cast<int32_t>(offsetof(Context_t2636657155, ___PrevCode_5)); }
	inline int32_t get_PrevCode_5() const { return ___PrevCode_5; }
	inline int32_t* get_address_of_PrevCode_5() { return &___PrevCode_5; }
	inline void set_PrevCode_5(int32_t value)
	{
		___PrevCode_5 = value;
	}

	inline static int32_t get_offset_of_PrevSortKey_6() { return static_cast<int32_t>(offsetof(Context_t2636657155, ___PrevSortKey_6)); }
	inline uint8_t* get_PrevSortKey_6() const { return ___PrevSortKey_6; }
	inline uint8_t** get_address_of_PrevSortKey_6() { return &___PrevSortKey_6; }
	inline void set_PrevSortKey_6(uint8_t* value)
	{
		___PrevSortKey_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.Globalization.Unicode.SimpleCollator/Context
struct Context_t2636657155_marshaled_pinvoke
{
	int32_t ___Option_0;
	uint8_t* ___NeverMatchFlags_1;
	uint8_t* ___AlwaysMatchFlags_2;
	uint8_t* ___Buffer1_3;
	uint8_t* ___Buffer2_4;
	int32_t ___PrevCode_5;
	uint8_t* ___PrevSortKey_6;
};
// Native definition for COM marshalling of Mono.Globalization.Unicode.SimpleCollator/Context
struct Context_t2636657155_marshaled_com
{
	int32_t ___Option_0;
	uint8_t* ___NeverMatchFlags_1;
	uint8_t* ___AlwaysMatchFlags_2;
	uint8_t* ___Buffer1_3;
	uint8_t* ___Buffer2_4;
	int32_t ___PrevCode_5;
	uint8_t* ___PrevSortKey_6;
};
#endif // CONTEXT_T2636657155_H
#ifndef SYMMETRICTRANSFORM_T1394030013_H
#define SYMMETRICTRANSFORM_T1394030013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t1394030013  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t1108166522 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t3397334013* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t3397334013* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t3397334013* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t3397334013* ___workout_6;
	// System.Security.Cryptography.PaddingMode Mono.Security.Cryptography.SymmetricTransform::padmode
	int32_t ___padmode_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t2510243513 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1394030013, ___algo_0)); }
	inline SymmetricAlgorithm_t1108166522 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t1108166522 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t1108166522 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1394030013, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1394030013, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1394030013, ___temp_3)); }
	inline ByteU5BU5D_t3397334013* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t3397334013* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1394030013, ___temp2_4)); }
	inline ByteU5BU5D_t3397334013* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t3397334013* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1394030013, ___workBuff_5)); }
	inline ByteU5BU5D_t3397334013* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t3397334013* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1394030013, ___workout_6)); }
	inline ByteU5BU5D_t3397334013* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t3397334013** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t3397334013* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_padmode_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1394030013, ___padmode_7)); }
	inline int32_t get_padmode_7() const { return ___padmode_7; }
	inline int32_t* get_address_of_padmode_7() { return &___padmode_7; }
	inline void set_padmode_7(int32_t value)
	{
		___padmode_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackByte_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1394030013, ___FeedBackByte_8)); }
	inline int32_t get_FeedBackByte_8() const { return ___FeedBackByte_8; }
	inline int32_t* get_address_of_FeedBackByte_8() { return &___FeedBackByte_8; }
	inline void set_FeedBackByte_8(int32_t value)
	{
		___FeedBackByte_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1394030013, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1394030013, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1394030013, ____rng_11)); }
	inline RandomNumberGenerator_t2510243513 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t2510243513 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T1394030013_H
#ifndef KEYGENERATEDEVENTHANDLER_T108853709_H
#define KEYGENERATEDEVENTHANDLER_T108853709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct  KeyGeneratedEventHandler_t108853709  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYGENERATEDEVENTHANDLER_T108853709_H
#ifndef PRIMALITYTEST_T572679901_H
#define PRIMALITYTEST_T572679901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTest
struct  PrimalityTest_t572679901  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTEST_T572679901_H
#ifndef SAFELIBRARYHANDLE_T116810554_H
#define SAFELIBRARYHANDLE_T116810554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeLibraryHandle
struct  SafeLibraryHandle_t116810554  : public SafeHandleZeroOrMinusOneIsInvalid_t1177681199
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFELIBRARYHANDLE_T116810554_H
#ifndef KEYGENERATEDEVENTHANDLER_T2001522803_H
#define KEYGENERATEDEVENTHANDLER_T2001522803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct  KeyGeneratedEventHandler_t2001522803  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYGENERATEDEVENTHANDLER_T2001522803_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1500 = { sizeof (RuntimeEventHandle_t798447448)+ sizeof (RuntimeObject), sizeof(RuntimeEventHandle_t798447448 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1500[1] = 
{
	RuntimeEventHandle_t798447448::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1501 = { sizeof (RuntimePropertyHandle_t3120528081)+ sizeof (RuntimeObject), sizeof(RuntimePropertyHandle_t3120528081 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1501[1] = 
{
	RuntimePropertyHandle_t3120528081::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1502 = { sizeof (RuntimeGPtrArrayHandle_t1303258952)+ sizeof (RuntimeObject), sizeof(RuntimeGPtrArrayHandle_t1303258952_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1502[1] = 
{
	RuntimeGPtrArrayHandle_t1303258952::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1503 = { sizeof (RuntimeMarshal_t3798850754), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1504 = { sizeof (RuntimeStructs_t3054717562), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1505 = { sizeof (RemoteClass_t3863182804)+ sizeof (RuntimeObject), sizeof(RemoteClass_t3863182804_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1505[5] = 
{
	RemoteClass_t3863182804::get_offset_of_default_vtable_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RemoteClass_t3863182804::get_offset_of_xdomain_vtable_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RemoteClass_t3863182804::get_offset_of_proxy_class_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RemoteClass_t3863182804::get_offset_of_proxy_class_name_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RemoteClass_t3863182804::get_offset_of_interface_count_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1506 = { sizeof (MonoClass_t2595527713)+ sizeof (RuntimeObject), sizeof(MonoClass_t2595527713 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1507 = { sizeof (GenericParamInfo_t1377222196)+ sizeof (RuntimeObject), sizeof(GenericParamInfo_t1377222196_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1507[5] = 
{
	GenericParamInfo_t1377222196::get_offset_of_pklass_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GenericParamInfo_t1377222196::get_offset_of_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GenericParamInfo_t1377222196::get_offset_of_flags_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GenericParamInfo_t1377222196::get_offset_of_token_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GenericParamInfo_t1377222196::get_offset_of_constraints_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1508 = { sizeof (GPtrArray_t3128553612)+ sizeof (RuntimeObject), sizeof(GPtrArray_t3128553612_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1508[2] = 
{
	GPtrArray_t3128553612::get_offset_of_data_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GPtrArray_t3128553612::get_offset_of_len_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1509 = { sizeof (MonoAssemblyName_t1886479188)+ sizeof (RuntimeObject), sizeof(MonoAssemblyName_t1886479188 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1509[13] = 
{
	MonoAssemblyName_t1886479188::get_offset_of_name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t1886479188::get_offset_of_culture_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t1886479188::get_offset_of_hash_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t1886479188::get_offset_of_public_key_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t1886479188::get_offset_of_public_key_token_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t1886479188::get_offset_of_hash_alg_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t1886479188::get_offset_of_hash_len_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t1886479188::get_offset_of_flags_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t1886479188::get_offset_of_major_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t1886479188::get_offset_of_minor_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t1886479188::get_offset_of_build_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t1886479188::get_offset_of_revision_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t1886479188::get_offset_of_arch_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1510 = { sizeof (U3Cpublic_key_tokenU3Ee__FixedBuffer_t2714123824)+ sizeof (RuntimeObject), sizeof(U3Cpublic_key_tokenU3Ee__FixedBuffer_t2714123824 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1510[1] = 
{
	U3Cpublic_key_tokenU3Ee__FixedBuffer_t2714123824::get_offset_of_FixedElementField_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1511 = { sizeof (SafeGPtrArrayHandle_t547714345)+ sizeof (RuntimeObject), sizeof(SafeGPtrArrayHandle_t547714345_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1511[1] = 
{
	SafeGPtrArrayHandle_t547714345::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1512 = { sizeof (SafeStringMarshal_t2486501886)+ sizeof (RuntimeObject), sizeof(SafeStringMarshal_t2486501886_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1512[2] = 
{
	SafeStringMarshal_t2486501886::get_offset_of_str_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SafeStringMarshal_t2486501886::get_offset_of_marshaled_string_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1513 = { sizeof (SmallXmlParser_t3549787957), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1513[12] = 
{
	SmallXmlParser_t3549787957::get_offset_of_handler_0(),
	SmallXmlParser_t3549787957::get_offset_of_reader_1(),
	SmallXmlParser_t3549787957::get_offset_of_elementNames_2(),
	SmallXmlParser_t3549787957::get_offset_of_xmlSpaces_3(),
	SmallXmlParser_t3549787957::get_offset_of_xmlSpace_4(),
	SmallXmlParser_t3549787957::get_offset_of_buffer_5(),
	SmallXmlParser_t3549787957::get_offset_of_nameBuffer_6(),
	SmallXmlParser_t3549787957::get_offset_of_isWhitespace_7(),
	SmallXmlParser_t3549787957::get_offset_of_attributes_8(),
	SmallXmlParser_t3549787957::get_offset_of_line_9(),
	SmallXmlParser_t3549787957::get_offset_of_column_10(),
	SmallXmlParser_t3549787957::get_offset_of_resetColumn_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1514 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1515 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1516 = { sizeof (AttrListImpl_t4015491015), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1516[2] = 
{
	AttrListImpl_t4015491015::get_offset_of_attrNames_0(),
	AttrListImpl_t4015491015::get_offset_of_attrValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1517 = { sizeof (SmallXmlParserException_t2094031034), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1517[2] = 
{
	SmallXmlParserException_t2094031034::get_offset_of_line_16(),
	SmallXmlParserException_t2094031034::get_offset_of_column_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1518 = { sizeof (SecurityParser_t30730985), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1518[3] = 
{
	SecurityParser_t30730985::get_offset_of_root_12(),
	SecurityParser_t30730985::get_offset_of_current_13(),
	SecurityParser_t30730985::get_offset_of_stack_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1519 = { sizeof (ASN1_t924533535), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1519[3] = 
{
	ASN1_t924533535::get_offset_of_m_nTag_0(),
	ASN1_t924533535::get_offset_of_m_aValue_1(),
	ASN1_t924533535::get_offset_of_elist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1520 = { sizeof (ASN1Convert_t3301846396), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1521 = { sizeof (BitConverterLE_t2825370260), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1522 = { sizeof (PKCS7_t3223261922), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1523 = { sizeof (ContentInfo_t1443605387), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1523[2] = 
{
	ContentInfo_t1443605387::get_offset_of_contentType_0(),
	ContentInfo_t1443605387::get_offset_of_content_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1524 = { sizeof (EncryptedData_t2656813772), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1524[4] = 
{
	EncryptedData_t2656813772::get_offset_of__version_0(),
	EncryptedData_t2656813772::get_offset_of__content_1(),
	EncryptedData_t2656813772::get_offset_of__encryptionAlgorithm_2(),
	EncryptedData_t2656813772::get_offset_of__encrypted_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1525 = { sizeof (SignedData_t1944945924), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1525[7] = 
{
	SignedData_t1944945924::get_offset_of_version_0(),
	SignedData_t1944945924::get_offset_of_hashAlgorithm_1(),
	SignedData_t1944945924::get_offset_of_contentInfo_2(),
	SignedData_t1944945924::get_offset_of_certs_3(),
	SignedData_t1944945924::get_offset_of_crls_4(),
	SignedData_t1944945924::get_offset_of_signerInfo_5(),
	SignedData_t1944945924::get_offset_of_mda_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1526 = { sizeof (SignerInfo_t1683925522), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1526[8] = 
{
	SignerInfo_t1683925522::get_offset_of_version_0(),
	SignerInfo_t1683925522::get_offset_of_hashAlgorithm_1(),
	SignerInfo_t1683925522::get_offset_of_authenticatedAttributes_2(),
	SignerInfo_t1683925522::get_offset_of_unauthenticatedAttributes_3(),
	SignerInfo_t1683925522::get_offset_of_signature_4(),
	SignerInfo_t1683925522::get_offset_of_issuer_5(),
	SignerInfo_t1683925522::get_offset_of_serial_6(),
	SignerInfo_t1683925522::get_offset_of_ski_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1527 = { sizeof (StrongName_t117835354), -1, sizeof(StrongName_t117835354_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1527[5] = 
{
	StrongName_t117835354::get_offset_of_rsa_0(),
	StrongName_t117835354::get_offset_of_publicKey_1(),
	StrongName_t117835354::get_offset_of_keyToken_2(),
	StrongName_t117835354::get_offset_of_tokenAlgorithm_3(),
	StrongName_t117835354_StaticFields::get_offset_of_lockObject_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1528 = { sizeof (UriPartial_t2274729157)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1528[4] = 
{
	UriPartial_t2274729157::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1529 = { sizeof (Uri_t1510604476), -1, sizeof(Uri_t1510604476_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1529[27] = 
{
	Uri_t1510604476::get_offset_of_isUnixFilePath_0(),
	Uri_t1510604476::get_offset_of_source_1(),
	Uri_t1510604476::get_offset_of_scheme_2(),
	Uri_t1510604476::get_offset_of_host_3(),
	Uri_t1510604476::get_offset_of_port_4(),
	Uri_t1510604476::get_offset_of_path_5(),
	Uri_t1510604476::get_offset_of_query_6(),
	Uri_t1510604476::get_offset_of_fragment_7(),
	Uri_t1510604476::get_offset_of_userinfo_8(),
	Uri_t1510604476::get_offset_of_isUnc_9(),
	Uri_t1510604476::get_offset_of_isOpaquePart_10(),
	Uri_t1510604476::get_offset_of_userEscaped_11(),
	Uri_t1510604476::get_offset_of_cachedToString_12(),
	Uri_t1510604476::get_offset_of_cachedLocalPath_13(),
	Uri_t1510604476::get_offset_of_cachedHashCode_14(),
	Uri_t1510604476::get_offset_of_reduce_15(),
	Uri_t1510604476_StaticFields::get_offset_of_hexUpperChars_16(),
	Uri_t1510604476_StaticFields::get_offset_of_SchemeDelimiter_17(),
	Uri_t1510604476_StaticFields::get_offset_of_UriSchemeFile_18(),
	Uri_t1510604476_StaticFields::get_offset_of_UriSchemeFtp_19(),
	Uri_t1510604476_StaticFields::get_offset_of_UriSchemeGopher_20(),
	Uri_t1510604476_StaticFields::get_offset_of_UriSchemeHttp_21(),
	Uri_t1510604476_StaticFields::get_offset_of_UriSchemeHttps_22(),
	Uri_t1510604476_StaticFields::get_offset_of_UriSchemeMailto_23(),
	Uri_t1510604476_StaticFields::get_offset_of_UriSchemeNews_24(),
	Uri_t1510604476_StaticFields::get_offset_of_UriSchemeNntp_25(),
	Uri_t1510604476_StaticFields::get_offset_of_schemes_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1530 = { sizeof (UriScheme_t683497865)+ sizeof (RuntimeObject), sizeof(UriScheme_t683497865_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1530[3] = 
{
	UriScheme_t683497865::get_offset_of_scheme_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UriScheme_t683497865::get_offset_of_delimiter_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UriScheme_t683497865::get_offset_of_defaultPort_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1531 = { sizeof (SafeBag_t2166702855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1531[2] = 
{
	SafeBag_t2166702855::get_offset_of__bagOID_0(),
	SafeBag_t2166702855::get_offset_of__asn1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1532 = { sizeof (PKCS12_t1362584794), -1, sizeof(PKCS12_t1362584794_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1532[11] = 
{
	PKCS12_t1362584794::get_offset_of__password_0(),
	PKCS12_t1362584794::get_offset_of__keyBags_1(),
	PKCS12_t1362584794::get_offset_of__secretBags_2(),
	PKCS12_t1362584794::get_offset_of__certs_3(),
	PKCS12_t1362584794::get_offset_of__keyBagsChanged_4(),
	PKCS12_t1362584794::get_offset_of__secretBagsChanged_5(),
	PKCS12_t1362584794::get_offset_of__certsChanged_6(),
	PKCS12_t1362584794::get_offset_of__iterations_7(),
	PKCS12_t1362584794::get_offset_of__safeBags_8(),
	PKCS12_t1362584794::get_offset_of__rng_9(),
	PKCS12_t1362584794_StaticFields::get_offset_of_password_max_length_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1533 = { sizeof (DeriveBytes_t1740753016), -1, sizeof(DeriveBytes_t1740753016_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1533[7] = 
{
	DeriveBytes_t1740753016_StaticFields::get_offset_of_keyDiversifier_0(),
	DeriveBytes_t1740753016_StaticFields::get_offset_of_ivDiversifier_1(),
	DeriveBytes_t1740753016_StaticFields::get_offset_of_macDiversifier_2(),
	DeriveBytes_t1740753016::get_offset_of__hashName_3(),
	DeriveBytes_t1740753016::get_offset_of__iterations_4(),
	DeriveBytes_t1740753016::get_offset_of__password_5(),
	DeriveBytes_t1740753016::get_offset_of__salt_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1534 = { sizeof (X501_t349661534), -1, sizeof(X501_t349661534_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1534[15] = 
{
	X501_t349661534_StaticFields::get_offset_of_countryName_0(),
	X501_t349661534_StaticFields::get_offset_of_organizationName_1(),
	X501_t349661534_StaticFields::get_offset_of_organizationalUnitName_2(),
	X501_t349661534_StaticFields::get_offset_of_commonName_3(),
	X501_t349661534_StaticFields::get_offset_of_localityName_4(),
	X501_t349661534_StaticFields::get_offset_of_stateOrProvinceName_5(),
	X501_t349661534_StaticFields::get_offset_of_streetAddress_6(),
	X501_t349661534_StaticFields::get_offset_of_domainComponent_7(),
	X501_t349661534_StaticFields::get_offset_of_userid_8(),
	X501_t349661534_StaticFields::get_offset_of_email_9(),
	X501_t349661534_StaticFields::get_offset_of_dnQualifier_10(),
	X501_t349661534_StaticFields::get_offset_of_title_11(),
	X501_t349661534_StaticFields::get_offset_of_surname_12(),
	X501_t349661534_StaticFields::get_offset_of_givenName_13(),
	X501_t349661534_StaticFields::get_offset_of_initial_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1535 = { sizeof (X509Certificate_t324051957), -1, sizeof(X509Certificate_t324051957_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1535[23] = 
{
	X509Certificate_t324051957::get_offset_of_decoder_0(),
	X509Certificate_t324051957::get_offset_of_m_encodedcert_1(),
	X509Certificate_t324051957::get_offset_of_m_from_2(),
	X509Certificate_t324051957::get_offset_of_m_until_3(),
	X509Certificate_t324051957::get_offset_of_issuer_4(),
	X509Certificate_t324051957::get_offset_of_m_issuername_5(),
	X509Certificate_t324051957::get_offset_of_m_keyalgo_6(),
	X509Certificate_t324051957::get_offset_of_m_keyalgoparams_7(),
	X509Certificate_t324051957::get_offset_of_subject_8(),
	X509Certificate_t324051957::get_offset_of_m_subject_9(),
	X509Certificate_t324051957::get_offset_of_m_publickey_10(),
	X509Certificate_t324051957::get_offset_of_signature_11(),
	X509Certificate_t324051957::get_offset_of_m_signaturealgo_12(),
	X509Certificate_t324051957::get_offset_of_m_signaturealgoparams_13(),
	X509Certificate_t324051957::get_offset_of_certhash_14(),
	X509Certificate_t324051957::get_offset_of__rsa_15(),
	X509Certificate_t324051957::get_offset_of__dsa_16(),
	X509Certificate_t324051957::get_offset_of_version_17(),
	X509Certificate_t324051957::get_offset_of_serialnumber_18(),
	X509Certificate_t324051957::get_offset_of_issuerUniqueID_19(),
	X509Certificate_t324051957::get_offset_of_subjectUniqueID_20(),
	X509Certificate_t324051957::get_offset_of_extensions_21(),
	X509Certificate_t324051957_StaticFields::get_offset_of_encoding_error_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1536 = { sizeof (X509CertificateCollection_t3592472865), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1537 = { sizeof (X509CertificateEnumerator_t3487770522), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1537[1] = 
{
	X509CertificateEnumerator_t3487770522::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1538 = { sizeof (X509Chain_t1938971907), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1538[5] = 
{
	X509Chain_t1938971907::get_offset_of_roots_0(),
	X509Chain_t1938971907::get_offset_of_certs_1(),
	X509Chain_t1938971907::get_offset_of__root_2(),
	X509Chain_t1938971907::get_offset_of__chain_3(),
	X509Chain_t1938971907::get_offset_of__status_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1539 = { sizeof (X509ChainStatusFlags_t2843686920)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1539[8] = 
{
	X509ChainStatusFlags_t2843686920::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1540 = { sizeof (X509Extension_t1439760127), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1540[3] = 
{
	X509Extension_t1439760127::get_offset_of_extnOid_0(),
	X509Extension_t1439760127::get_offset_of_extnCritical_1(),
	X509Extension_t1439760127::get_offset_of_extnValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1541 = { sizeof (X509ExtensionCollection_t1640144839), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1541[1] = 
{
	X509ExtensionCollection_t1640144839::get_offset_of_readOnly_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1542 = { sizeof (X509Store_t4028973563), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1542[4] = 
{
	X509Store_t4028973563::get_offset_of__storePath_0(),
	X509Store_t4028973563::get_offset_of__certificates_1(),
	X509Store_t4028973563::get_offset_of__crl_2(),
	X509Store_t4028973563::get_offset_of__newFormat_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1543 = { sizeof (X509Stores_t3001420398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1543[3] = 
{
	X509Stores_t3001420398::get_offset_of__storePath_0(),
	X509Stores_t3001420398::get_offset_of__newFormat_1(),
	X509Stores_t3001420398::get_offset_of__trusted_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1544 = { sizeof (X509StoreManager_t1740460066), -1, sizeof(X509StoreManager_t1740460066_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1544[5] = 
{
	X509StoreManager_t1740460066_StaticFields::get_offset_of__userPath_0(),
	X509StoreManager_t1740460066_StaticFields::get_offset_of__localMachinePath_1(),
	X509StoreManager_t1740460066_StaticFields::get_offset_of__newLocalMachinePath_2(),
	X509StoreManager_t1740460066_StaticFields::get_offset_of__userStore_3(),
	X509StoreManager_t1740460066_StaticFields::get_offset_of__machineStore_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1545 = { sizeof (BasicConstraintsExtension_t3608227951), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1545[2] = 
{
	BasicConstraintsExtension_t3608227951::get_offset_of_cA_3(),
	BasicConstraintsExtension_t3608227951::get_offset_of_pathLenConstraint_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1546 = { sizeof (CryptoConvert_t4146607874), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1547 = { sizeof (KeyBuilder_t3965881084), -1, sizeof(KeyBuilder_t3965881084_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1547[1] = 
{
	KeyBuilder_t3965881084_StaticFields::get_offset_of_rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1548 = { sizeof (DSAManaged_t892502321), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1548[13] = 
{
	DSAManaged_t892502321::get_offset_of_keypairGenerated_2(),
	DSAManaged_t892502321::get_offset_of_m_disposed_3(),
	DSAManaged_t892502321::get_offset_of_p_4(),
	DSAManaged_t892502321::get_offset_of_q_5(),
	DSAManaged_t892502321::get_offset_of_g_6(),
	DSAManaged_t892502321::get_offset_of_x_7(),
	DSAManaged_t892502321::get_offset_of_y_8(),
	DSAManaged_t892502321::get_offset_of_j_9(),
	DSAManaged_t892502321::get_offset_of_seed_10(),
	DSAManaged_t892502321::get_offset_of_counter_11(),
	DSAManaged_t892502321::get_offset_of_j_missing_12(),
	DSAManaged_t892502321::get_offset_of_rng_13(),
	DSAManaged_t892502321::get_offset_of_KeyGenerated_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1549 = { sizeof (KeyGeneratedEventHandler_t2001522803), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1550 = { sizeof (KeyPairPersistence_t3637935872), -1, sizeof(KeyPairPersistence_t3637935872_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1550[9] = 
{
	KeyPairPersistence_t3637935872_StaticFields::get_offset_of__userPathExists_0(),
	KeyPairPersistence_t3637935872_StaticFields::get_offset_of__userPath_1(),
	KeyPairPersistence_t3637935872_StaticFields::get_offset_of__machinePathExists_2(),
	KeyPairPersistence_t3637935872_StaticFields::get_offset_of__machinePath_3(),
	KeyPairPersistence_t3637935872::get_offset_of__params_4(),
	KeyPairPersistence_t3637935872::get_offset_of__keyvalue_5(),
	KeyPairPersistence_t3637935872::get_offset_of__filename_6(),
	KeyPairPersistence_t3637935872::get_offset_of__container_7(),
	KeyPairPersistence_t3637935872_StaticFields::get_offset_of_lockobj_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1551 = { sizeof (PKCS1_t3312870480), -1, sizeof(PKCS1_t3312870480_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1551[4] = 
{
	PKCS1_t3312870480_StaticFields::get_offset_of_emptySHA1_0(),
	PKCS1_t3312870480_StaticFields::get_offset_of_emptySHA256_1(),
	PKCS1_t3312870480_StaticFields::get_offset_of_emptySHA384_2(),
	PKCS1_t3312870480_StaticFields::get_offset_of_emptySHA512_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1552 = { sizeof (PKCS8_t2103016899), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1553 = { sizeof (PrivateKeyInfo_t92917103), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1553[4] = 
{
	PrivateKeyInfo_t92917103::get_offset_of__version_0(),
	PrivateKeyInfo_t92917103::get_offset_of__algorithm_1(),
	PrivateKeyInfo_t92917103::get_offset_of__key_2(),
	PrivateKeyInfo_t92917103::get_offset_of__list_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1554 = { sizeof (EncryptedPrivateKeyInfo_t1722354997), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1554[4] = 
{
	EncryptedPrivateKeyInfo_t1722354997::get_offset_of__algorithm_0(),
	EncryptedPrivateKeyInfo_t1722354997::get_offset_of__salt_1(),
	EncryptedPrivateKeyInfo_t1722354997::get_offset_of__iterations_2(),
	EncryptedPrivateKeyInfo_t1722354997::get_offset_of__data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1555 = { sizeof (RSAManaged_t3034748747), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1555[13] = 
{
	RSAManaged_t3034748747::get_offset_of_isCRTpossible_2(),
	RSAManaged_t3034748747::get_offset_of_keyBlinding_3(),
	RSAManaged_t3034748747::get_offset_of_keypairGenerated_4(),
	RSAManaged_t3034748747::get_offset_of_m_disposed_5(),
	RSAManaged_t3034748747::get_offset_of_d_6(),
	RSAManaged_t3034748747::get_offset_of_p_7(),
	RSAManaged_t3034748747::get_offset_of_q_8(),
	RSAManaged_t3034748747::get_offset_of_dp_9(),
	RSAManaged_t3034748747::get_offset_of_dq_10(),
	RSAManaged_t3034748747::get_offset_of_qInv_11(),
	RSAManaged_t3034748747::get_offset_of_n_12(),
	RSAManaged_t3034748747::get_offset_of_e_13(),
	RSAManaged_t3034748747::get_offset_of_KeyGenerated_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1556 = { sizeof (KeyGeneratedEventHandler_t108853709), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1557 = { sizeof (SymmetricTransform_t1394030013), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1557[12] = 
{
	SymmetricTransform_t1394030013::get_offset_of_algo_0(),
	SymmetricTransform_t1394030013::get_offset_of_encrypt_1(),
	SymmetricTransform_t1394030013::get_offset_of_BlockSizeByte_2(),
	SymmetricTransform_t1394030013::get_offset_of_temp_3(),
	SymmetricTransform_t1394030013::get_offset_of_temp2_4(),
	SymmetricTransform_t1394030013::get_offset_of_workBuff_5(),
	SymmetricTransform_t1394030013::get_offset_of_workout_6(),
	SymmetricTransform_t1394030013::get_offset_of_padmode_7(),
	SymmetricTransform_t1394030013::get_offset_of_FeedBackByte_8(),
	SymmetricTransform_t1394030013::get_offset_of_m_disposed_9(),
	SymmetricTransform_t1394030013::get_offset_of_lastBlock_10(),
	SymmetricTransform_t1394030013::get_offset_of__rng_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1558 = { sizeof (AuthenticodeBase_t3368165232), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1558[8] = 
{
	AuthenticodeBase_t3368165232::get_offset_of_fileblock_0(),
	AuthenticodeBase_t3368165232::get_offset_of_fs_1(),
	AuthenticodeBase_t3368165232::get_offset_of_blockNo_2(),
	AuthenticodeBase_t3368165232::get_offset_of_blockLength_3(),
	AuthenticodeBase_t3368165232::get_offset_of_peOffset_4(),
	AuthenticodeBase_t3368165232::get_offset_of_dirSecurityOffset_5(),
	AuthenticodeBase_t3368165232::get_offset_of_dirSecuritySize_6(),
	AuthenticodeBase_t3368165232::get_offset_of_coffSymbolTableOffset_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1559 = { sizeof (AuthenticodeDeformatter_t978432004), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1559[12] = 
{
	AuthenticodeDeformatter_t978432004::get_offset_of_filename_8(),
	AuthenticodeDeformatter_t978432004::get_offset_of_hash_9(),
	AuthenticodeDeformatter_t978432004::get_offset_of_coll_10(),
	AuthenticodeDeformatter_t978432004::get_offset_of_signedHash_11(),
	AuthenticodeDeformatter_t978432004::get_offset_of_timestamp_12(),
	AuthenticodeDeformatter_t978432004::get_offset_of_signingCertificate_13(),
	AuthenticodeDeformatter_t978432004::get_offset_of_reason_14(),
	AuthenticodeDeformatter_t978432004::get_offset_of_trustedRoot_15(),
	AuthenticodeDeformatter_t978432004::get_offset_of_trustedTimestampRoot_16(),
	AuthenticodeDeformatter_t978432004::get_offset_of_entry_17(),
	AuthenticodeDeformatter_t978432004::get_offset_of_signerChain_18(),
	AuthenticodeDeformatter_t978432004::get_offset_of_timestampChain_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1560 = { sizeof (BigInteger_t925946152), -1, sizeof(BigInteger_t925946152_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1560[4] = 
{
	BigInteger_t925946152::get_offset_of_length_0(),
	BigInteger_t925946152::get_offset_of_data_1(),
	BigInteger_t925946152_StaticFields::get_offset_of_smallPrimes_2(),
	BigInteger_t925946152_StaticFields::get_offset_of_rng_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1561 = { sizeof (Sign_t874893935)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1561[4] = 
{
	Sign_t874893935::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1562 = { sizeof (ModulusRing_t80355991), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1562[2] = 
{
	ModulusRing_t80355991::get_offset_of_mod_0(),
	ModulusRing_t80355991::get_offset_of_constant_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1563 = { sizeof (Kernel_t1353186455), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1564 = { sizeof (ConfidenceFactor_t1997037801)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1564[7] = 
{
	ConfidenceFactor_t1997037801::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1565 = { sizeof (PrimalityTest_t572679901), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1566 = { sizeof (PrimalityTests_t3283102398), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1567 = { sizeof (PrimeGeneratorBase_t1053438167), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1568 = { sizeof (SequentialSearchPrimeGeneratorBase_t463670656), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1569 = { sizeof (CodePointIndexer_t1073906970), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1569[4] = 
{
	CodePointIndexer_t1073906970::get_offset_of_ranges_0(),
	CodePointIndexer_t1073906970::get_offset_of_TotalCount_1(),
	CodePointIndexer_t1073906970::get_offset_of_defaultIndex_2(),
	CodePointIndexer_t1073906970::get_offset_of_defaultCP_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1570 = { sizeof (TableRange_t2011406615)+ sizeof (RuntimeObject), sizeof(TableRange_t2011406615 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1570[5] = 
{
	TableRange_t2011406615::get_offset_of_Start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t2011406615::get_offset_of_End_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t2011406615::get_offset_of_Count_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t2011406615::get_offset_of_IndexStart_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t2011406615::get_offset_of_IndexEnd_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1571 = { sizeof (TailoringInfo_t1449609243), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1571[4] = 
{
	TailoringInfo_t1449609243::get_offset_of_LCID_0(),
	TailoringInfo_t1449609243::get_offset_of_TailoringIndex_1(),
	TailoringInfo_t1449609243::get_offset_of_TailoringCount_2(),
	TailoringInfo_t1449609243::get_offset_of_FrenchSort_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1572 = { sizeof (Contraction_t1673853792), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1572[4] = 
{
	Contraction_t1673853792::get_offset_of_Index_0(),
	Contraction_t1673853792::get_offset_of_Source_1(),
	Contraction_t1673853792::get_offset_of_Replacement_2(),
	Contraction_t1673853792::get_offset_of_SortKey_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1573 = { sizeof (ContractionComparer_t1150321365), -1, sizeof(ContractionComparer_t1150321365_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1573[1] = 
{
	ContractionComparer_t1150321365_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1574 = { sizeof (Level2Map_t3322505726), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1574[2] = 
{
	Level2Map_t3322505726::get_offset_of_Source_0(),
	Level2Map_t3322505726::get_offset_of_Replace_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1575 = { sizeof (MSCompatUnicodeTable_t1231687219), -1, sizeof(MSCompatUnicodeTable_t1231687219_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1575[19] = 
{
	MSCompatUnicodeTable_t1231687219_StaticFields::get_offset_of_MaxExpansionLength_0(),
	MSCompatUnicodeTable_t1231687219_StaticFields::get_offset_of_ignorableFlags_1(),
	MSCompatUnicodeTable_t1231687219_StaticFields::get_offset_of_categories_2(),
	MSCompatUnicodeTable_t1231687219_StaticFields::get_offset_of_level1_3(),
	MSCompatUnicodeTable_t1231687219_StaticFields::get_offset_of_level2_4(),
	MSCompatUnicodeTable_t1231687219_StaticFields::get_offset_of_level3_5(),
	MSCompatUnicodeTable_t1231687219_StaticFields::get_offset_of_cjkCHScategory_6(),
	MSCompatUnicodeTable_t1231687219_StaticFields::get_offset_of_cjkCHTcategory_7(),
	MSCompatUnicodeTable_t1231687219_StaticFields::get_offset_of_cjkJAcategory_8(),
	MSCompatUnicodeTable_t1231687219_StaticFields::get_offset_of_cjkKOcategory_9(),
	MSCompatUnicodeTable_t1231687219_StaticFields::get_offset_of_cjkCHSlv1_10(),
	MSCompatUnicodeTable_t1231687219_StaticFields::get_offset_of_cjkCHTlv1_11(),
	MSCompatUnicodeTable_t1231687219_StaticFields::get_offset_of_cjkJAlv1_12(),
	MSCompatUnicodeTable_t1231687219_StaticFields::get_offset_of_cjkKOlv1_13(),
	MSCompatUnicodeTable_t1231687219_StaticFields::get_offset_of_cjkKOlv2_14(),
	MSCompatUnicodeTable_t1231687219_StaticFields::get_offset_of_tailoringArr_15(),
	MSCompatUnicodeTable_t1231687219_StaticFields::get_offset_of_tailoringInfos_16(),
	MSCompatUnicodeTable_t1231687219_StaticFields::get_offset_of_forLock_17(),
	MSCompatUnicodeTable_t1231687219_StaticFields::get_offset_of_isReady_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1576 = { sizeof (U3CU3Ec_t827785594), -1, sizeof(U3CU3Ec_t827785594_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1576[2] = 
{
	U3CU3Ec_t827785594_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t827785594_StaticFields::get_offset_of_U3CU3E9__17_0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1577 = { sizeof (MSCompatUnicodeTableUtil_t2040269023), -1, sizeof(MSCompatUnicodeTableUtil_t2040269023_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1577[7] = 
{
	MSCompatUnicodeTableUtil_t2040269023_StaticFields::get_offset_of_Ignorable_0(),
	MSCompatUnicodeTableUtil_t2040269023_StaticFields::get_offset_of_Category_1(),
	MSCompatUnicodeTableUtil_t2040269023_StaticFields::get_offset_of_Level1_2(),
	MSCompatUnicodeTableUtil_t2040269023_StaticFields::get_offset_of_Level2_3(),
	MSCompatUnicodeTableUtil_t2040269023_StaticFields::get_offset_of_Level3_4(),
	MSCompatUnicodeTableUtil_t2040269023_StaticFields::get_offset_of_CjkCHS_5(),
	MSCompatUnicodeTableUtil_t2040269023_StaticFields::get_offset_of_Cjk_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1578 = { sizeof (SimpleCollator_t4081201584), -1, sizeof(SimpleCollator_t4081201584_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1578[13] = 
{
	SimpleCollator_t4081201584_StaticFields::get_offset_of_QuickCheckDisabled_0(),
	SimpleCollator_t4081201584_StaticFields::get_offset_of_invariant_1(),
	SimpleCollator_t4081201584::get_offset_of_textInfo_2(),
	SimpleCollator_t4081201584::get_offset_of_cjkIndexer_3(),
	SimpleCollator_t4081201584::get_offset_of_contractions_4(),
	SimpleCollator_t4081201584::get_offset_of_level2Maps_5(),
	SimpleCollator_t4081201584::get_offset_of_unsafeFlags_6(),
	SimpleCollator_t4081201584::get_offset_of_cjkCatTable_7(),
	SimpleCollator_t4081201584::get_offset_of_cjkLv1Table_8(),
	SimpleCollator_t4081201584::get_offset_of_cjkLv2Table_9(),
	SimpleCollator_t4081201584::get_offset_of_cjkLv2Indexer_10(),
	SimpleCollator_t4081201584::get_offset_of_lcid_11(),
	SimpleCollator_t4081201584::get_offset_of_frenchSort_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1579 = { sizeof (Context_t2636657155)+ sizeof (RuntimeObject), sizeof(Context_t2636657155_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1579[7] = 
{
	Context_t2636657155::get_offset_of_Option_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t2636657155::get_offset_of_NeverMatchFlags_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t2636657155::get_offset_of_AlwaysMatchFlags_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t2636657155::get_offset_of_Buffer1_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t2636657155::get_offset_of_Buffer2_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t2636657155::get_offset_of_PrevCode_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t2636657155::get_offset_of_PrevSortKey_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1580 = { sizeof (PreviousInfo_t581002487)+ sizeof (RuntimeObject), sizeof(PreviousInfo_t581002487_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1580[2] = 
{
	PreviousInfo_t581002487::get_offset_of_Code_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PreviousInfo_t581002487::get_offset_of_SortKey_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1581 = { sizeof (Escape_t169451053)+ sizeof (RuntimeObject), sizeof(Escape_t169451053_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1581[5] = 
{
	Escape_t169451053::get_offset_of_Source_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Escape_t169451053::get_offset_of_Index_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Escape_t169451053::get_offset_of_Start_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Escape_t169451053::get_offset_of_End_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Escape_t169451053::get_offset_of_Optional_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1582 = { sizeof (ExtenderType_t1556892101)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1582[6] = 
{
	ExtenderType_t1556892101::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1583 = { sizeof (SortKeyBuffer_t1759538423), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1583[22] = 
{
	SortKeyBuffer_t1759538423::get_offset_of_l1b_0(),
	SortKeyBuffer_t1759538423::get_offset_of_l2b_1(),
	SortKeyBuffer_t1759538423::get_offset_of_l3b_2(),
	SortKeyBuffer_t1759538423::get_offset_of_l4sb_3(),
	SortKeyBuffer_t1759538423::get_offset_of_l4tb_4(),
	SortKeyBuffer_t1759538423::get_offset_of_l4kb_5(),
	SortKeyBuffer_t1759538423::get_offset_of_l4wb_6(),
	SortKeyBuffer_t1759538423::get_offset_of_l5b_7(),
	SortKeyBuffer_t1759538423::get_offset_of_source_8(),
	SortKeyBuffer_t1759538423::get_offset_of_l1_9(),
	SortKeyBuffer_t1759538423::get_offset_of_l2_10(),
	SortKeyBuffer_t1759538423::get_offset_of_l3_11(),
	SortKeyBuffer_t1759538423::get_offset_of_l4s_12(),
	SortKeyBuffer_t1759538423::get_offset_of_l4t_13(),
	SortKeyBuffer_t1759538423::get_offset_of_l4k_14(),
	SortKeyBuffer_t1759538423::get_offset_of_l4w_15(),
	SortKeyBuffer_t1759538423::get_offset_of_l5_16(),
	SortKeyBuffer_t1759538423::get_offset_of_lcid_17(),
	SortKeyBuffer_t1759538423::get_offset_of_options_18(),
	SortKeyBuffer_t1759538423::get_offset_of_processLevel2_19(),
	SortKeyBuffer_t1759538423::get_offset_of_frenchSort_20(),
	SortKeyBuffer_t1759538423::get_offset_of_frenchSorted_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1584 = { sizeof (NormalizationTableUtil_t1112052683), -1, sizeof(NormalizationTableUtil_t1112052683_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1584[5] = 
{
	NormalizationTableUtil_t1112052683_StaticFields::get_offset_of_Prop_0(),
	NormalizationTableUtil_t1112052683_StaticFields::get_offset_of_Map_1(),
	NormalizationTableUtil_t1112052683_StaticFields::get_offset_of_Combining_2(),
	NormalizationTableUtil_t1112052683_StaticFields::get_offset_of_Composite_3(),
	NormalizationTableUtil_t1112052683_StaticFields::get_offset_of_Helper_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1585 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1586 = { sizeof (RegistryKey_t2287932784), -1, sizeof(RegistryKey_t2287932784_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1586[7] = 
{
	RegistryKey_t2287932784::get_offset_of_handle_1(),
	RegistryKey_t2287932784::get_offset_of_safe_handle_2(),
	RegistryKey_t2287932784::get_offset_of_hive_3(),
	RegistryKey_t2287932784::get_offset_of_qname_4(),
	RegistryKey_t2287932784::get_offset_of_isRemoteRoot_5(),
	RegistryKey_t2287932784::get_offset_of_isWritable_6(),
	RegistryKey_t2287932784_StaticFields::get_offset_of_RegistryApi_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1587 = { sizeof (RegistryKeyPermissionCheck_t460149061)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1587[4] = 
{
	RegistryKeyPermissionCheck_t460149061::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1588 = { sizeof (Registry_t1325736645), -1, sizeof(Registry_t1325736645_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1588[7] = 
{
	Registry_t1325736645_StaticFields::get_offset_of_ClassesRoot_0(),
	Registry_t1325736645_StaticFields::get_offset_of_CurrentConfig_1(),
	Registry_t1325736645_StaticFields::get_offset_of_CurrentUser_2(),
	Registry_t1325736645_StaticFields::get_offset_of_DynData_3(),
	Registry_t1325736645_StaticFields::get_offset_of_LocalMachine_4(),
	Registry_t1325736645_StaticFields::get_offset_of_PerformanceData_5(),
	Registry_t1325736645_StaticFields::get_offset_of_Users_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1589 = { sizeof (RegistryHive_t2561794591)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1589[8] = 
{
	RegistryHive_t2561794591::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1590 = { sizeof (RegistryValueKind_t3069013676)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1590[9] = 
{
	RegistryValueKind_t3069013676::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1591 = { sizeof (RegistryValueOptions_t3181579340)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1591[3] = 
{
	RegistryValueOptions_t3181579340::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1592 = { sizeof (ExpandString_t1083116867), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1592[1] = 
{
	ExpandString_t1083116867::get_offset_of_value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1593 = { sizeof (RegistryKeyComparer_t284335197), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1594 = { sizeof (KeyHandler_t1744274711), -1, sizeof(KeyHandler_t1744274711_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1594[10] = 
{
	KeyHandler_t1744274711_StaticFields::get_offset_of_key_to_handler_0(),
	KeyHandler_t1744274711_StaticFields::get_offset_of_dir_to_handler_1(),
	KeyHandler_t1744274711::get_offset_of_Dir_2(),
	KeyHandler_t1744274711::get_offset_of_ActualDir_3(),
	KeyHandler_t1744274711::get_offset_of_IsVolatile_4(),
	KeyHandler_t1744274711::get_offset_of_values_5(),
	KeyHandler_t1744274711::get_offset_of_file_6(),
	KeyHandler_t1744274711::get_offset_of_dirty_7(),
	KeyHandler_t1744274711_StaticFields::get_offset_of_user_store_8(),
	KeyHandler_t1744274711_StaticFields::get_offset_of_machine_store_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1595 = { sizeof (UnixRegistryApi_t2447246231), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1596 = { sizeof (Win32RegistryApi_t2321265302), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1596[1] = 
{
	Win32RegistryApi_t2321265302::get_offset_of_NativeBytesPerCharacter_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1597 = { sizeof (SafeLibraryHandle_t116810554), sizeof(void*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1598 = { sizeof (UnsafeNativeMethods_t1041081549), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1599 = { sizeof (Win32Native_t932910218), -1, sizeof(Win32Native_t932910218_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1599[2] = 
{
	Win32Native_t932910218_StaticFields::get_offset_of_INVALID_HANDLE_VALUE_0(),
	Win32Native_t932910218_StaticFields::get_offset_of_ThreadErrorModeMinOsVersion_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
