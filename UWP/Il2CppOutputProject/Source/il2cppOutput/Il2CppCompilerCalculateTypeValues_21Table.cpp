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

// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t248156492;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Xml.Schema.Asttree
struct Asttree_t3451058494;
// System.String
struct String_t;
// System.Xml.Schema.DatatypeImplementation
struct DatatypeImplementation_t1152094268;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t1975884510;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t2217612696;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Xml.Schema.KeySequence
struct KeySequence_t746093258;
// System.Xml.Schema.LocatedActiveAxis[]
struct LocatedActiveAxisU5BU5D_t2201939280;
// System.Xml.Schema.CompiledIdentityConstraint
struct CompiledIdentityConstraint_t964629540;
// System.Xml.Schema.SelectorActiveAxis
struct SelectorActiveAxis_t789423304;
// System.Xml.Schema.TypedObject/DecimalStruct
struct DecimalStruct_t715828147;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t1195946242;
// System.Xml.Schema.TypedObject[]
struct TypedObjectU5BU5D_t948546190;
// System.Decimal[]
struct DecimalU5BU5D_t624008824;
// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t3518500204;
// System.Xml.IValidationEventHandling
struct IValidationEventHandling_t482152337;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Xml.Schema.SchemaNames
struct SchemaNames_t1619962557;
// System.Xml.PositionInfo
struct PositionInfo_t3273236083;
// System.Xml.XmlResolver
struct XmlResolver_t2024571559;
// System.Uri
struct Uri_t19570940;
// System.Xml.Schema.SchemaInfo
struct SchemaInfo_t87206461;
// System.Xml.XmlValidatingReaderImpl
struct XmlValidatingReaderImpl_t1507412803;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.Xml.Schema.ValidationState
struct ValidationState_t3143048826;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Xml.Schema.SyntaxTreeNode
struct SyntaxTreeNode_t2397191729;
// System.Xml.Schema.ConstraintStruct
struct ConstraintStruct_t2462842120;
// System.Xml.Schema.DtdValidator/NamespaceManager
struct NamespaceManager_t1407344;
// System.Xml.HWStack
struct HWStack_t738999989;
// System.Xml.Schema.IdRefNode
struct IdRefNode_t224554150;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Xml.Schema.BitSet
struct BitSet_t1062448123;
// System.Xml.Schema.NamespaceList
struct NamespaceList_t848177191;
// System.Xml.Schema.SequenceNode
struct SequenceNode_t4039907291;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// System.Xml.Schema.RestrictionFacets
struct RestrictionFacets_t4012658256;
// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_t68179724;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t1795078578;
// System.Xml.Schema.XmlSchemaSimpleType[]
struct XmlSchemaSimpleTypeU5BU5D_t192177157;
// System.Xml.Schema.FacetsChecker
struct FacetsChecker_t1235574227;
// System.Xml.Schema.DatatypeImplementation[]
struct DatatypeImplementationU5BU5D_t3131202389;
// System.Xml.Schema.DatatypeImplementation/SchemaDatatypeMap[]
struct SchemaDatatypeMapU5BU5D_t863562528;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t3750818532;
// System.Xml.Schema.SymbolsDictionary
struct SymbolsDictionary_t1753655453;
// System.Xml.Schema.BitSet[]
struct BitSetU5BU5D_t2256991674;
// System.Xml.Schema.Positions
struct Positions_t3593914952;
// System.Collections.Stack
struct Stack_t1043988394;
// System.Type
struct Type_t;

struct Exception_t1927440687_marshaled_pinvoke;
struct Exception_t1927440687_marshaled_com;
struct Decimal_t724701077 ;



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
#ifndef XSDSIMPLEVALUE_T478440528_H
#define XSDSIMPLEVALUE_T478440528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XsdSimpleValue
struct  XsdSimpleValue_t478440528  : public RuntimeObject
{
public:
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XsdSimpleValue::xmlType
	XmlSchemaSimpleType_t248156492 * ___xmlType_0;
	// System.Object System.Xml.Schema.XsdSimpleValue::typedValue
	RuntimeObject * ___typedValue_1;

public:
	inline static int32_t get_offset_of_xmlType_0() { return static_cast<int32_t>(offsetof(XsdSimpleValue_t478440528, ___xmlType_0)); }
	inline XmlSchemaSimpleType_t248156492 * get_xmlType_0() const { return ___xmlType_0; }
	inline XmlSchemaSimpleType_t248156492 ** get_address_of_xmlType_0() { return &___xmlType_0; }
	inline void set_xmlType_0(XmlSchemaSimpleType_t248156492 * value)
	{
		___xmlType_0 = value;
		Il2CppCodeGenWriteBarrier((&___xmlType_0), value);
	}

	inline static int32_t get_offset_of_typedValue_1() { return static_cast<int32_t>(offsetof(XsdSimpleValue_t478440528, ___typedValue_1)); }
	inline RuntimeObject * get_typedValue_1() const { return ___typedValue_1; }
	inline RuntimeObject ** get_address_of_typedValue_1() { return &___typedValue_1; }
	inline void set_typedValue_1(RuntimeObject * value)
	{
		___typedValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___typedValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XSDSIMPLEVALUE_T478440528_H
#ifndef XMLSCHEMADATATYPE_T1195946242_H
#define XMLSCHEMADATATYPE_T1195946242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaDatatype
struct  XmlSchemaDatatype_t1195946242  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMADATATYPE_T1195946242_H
#ifndef POSITIONS_T3593914952_H
#define POSITIONS_T3593914952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Positions
struct  Positions_t3593914952  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Xml.Schema.Positions::positions
	ArrayList_t4252133567 * ___positions_0;

public:
	inline static int32_t get_offset_of_positions_0() { return static_cast<int32_t>(offsetof(Positions_t3593914952, ___positions_0)); }
	inline ArrayList_t4252133567 * get_positions_0() const { return ___positions_0; }
	inline ArrayList_t4252133567 ** get_address_of_positions_0() { return &___positions_0; }
	inline void set_positions_0(ArrayList_t4252133567 * value)
	{
		___positions_0 = value;
		Il2CppCodeGenWriteBarrier((&___positions_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONS_T3593914952_H
#ifndef SYNTAXTREENODE_T2397191729_H
#define SYNTAXTREENODE_T2397191729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SyntaxTreeNode
struct  SyntaxTreeNode_t2397191729  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNTAXTREENODE_T2397191729_H
#ifndef ACTIVEAXIS_T439376929_H
#define ACTIVEAXIS_T439376929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.ActiveAxis
struct  ActiveAxis_t439376929  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Schema.ActiveAxis::currentDepth
	int32_t ___currentDepth_0;
	// System.Boolean System.Xml.Schema.ActiveAxis::isActive
	bool ___isActive_1;
	// System.Xml.Schema.Asttree System.Xml.Schema.ActiveAxis::axisTree
	Asttree_t3451058494 * ___axisTree_2;
	// System.Collections.ArrayList System.Xml.Schema.ActiveAxis::axisStack
	ArrayList_t4252133567 * ___axisStack_3;

public:
	inline static int32_t get_offset_of_currentDepth_0() { return static_cast<int32_t>(offsetof(ActiveAxis_t439376929, ___currentDepth_0)); }
	inline int32_t get_currentDepth_0() const { return ___currentDepth_0; }
	inline int32_t* get_address_of_currentDepth_0() { return &___currentDepth_0; }
	inline void set_currentDepth_0(int32_t value)
	{
		___currentDepth_0 = value;
	}

	inline static int32_t get_offset_of_isActive_1() { return static_cast<int32_t>(offsetof(ActiveAxis_t439376929, ___isActive_1)); }
	inline bool get_isActive_1() const { return ___isActive_1; }
	inline bool* get_address_of_isActive_1() { return &___isActive_1; }
	inline void set_isActive_1(bool value)
	{
		___isActive_1 = value;
	}

	inline static int32_t get_offset_of_axisTree_2() { return static_cast<int32_t>(offsetof(ActiveAxis_t439376929, ___axisTree_2)); }
	inline Asttree_t3451058494 * get_axisTree_2() const { return ___axisTree_2; }
	inline Asttree_t3451058494 ** get_address_of_axisTree_2() { return &___axisTree_2; }
	inline void set_axisTree_2(Asttree_t3451058494 * value)
	{
		___axisTree_2 = value;
		Il2CppCodeGenWriteBarrier((&___axisTree_2), value);
	}

	inline static int32_t get_offset_of_axisStack_3() { return static_cast<int32_t>(offsetof(ActiveAxis_t439376929, ___axisStack_3)); }
	inline ArrayList_t4252133567 * get_axisStack_3() const { return ___axisStack_3; }
	inline ArrayList_t4252133567 ** get_address_of_axisStack_3() { return &___axisStack_3; }
	inline void set_axisStack_3(ArrayList_t4252133567 * value)
	{
		___axisStack_3 = value;
		Il2CppCodeGenWriteBarrier((&___axisStack_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVEAXIS_T439376929_H
#ifndef SCHEMADATATYPEMAP_T2661667341_H
#define SCHEMADATATYPEMAP_T2661667341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.DatatypeImplementation/SchemaDatatypeMap
struct  SchemaDatatypeMap_t2661667341  : public RuntimeObject
{
public:
	// System.String System.Xml.Schema.DatatypeImplementation/SchemaDatatypeMap::name
	String_t* ___name_0;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation/SchemaDatatypeMap::type
	DatatypeImplementation_t1152094268 * ___type_1;
	// System.Int32 System.Xml.Schema.DatatypeImplementation/SchemaDatatypeMap::parentIndex
	int32_t ___parentIndex_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SchemaDatatypeMap_t2661667341, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(SchemaDatatypeMap_t2661667341, ___type_1)); }
	inline DatatypeImplementation_t1152094268 * get_type_1() const { return ___type_1; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(DatatypeImplementation_t1152094268 * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}

	inline static int32_t get_offset_of_parentIndex_2() { return static_cast<int32_t>(offsetof(SchemaDatatypeMap_t2661667341, ___parentIndex_2)); }
	inline int32_t get_parentIndex_2() const { return ___parentIndex_2; }
	inline int32_t* get_address_of_parentIndex_2() { return &___parentIndex_2; }
	inline void set_parentIndex_2(int32_t value)
	{
		___parentIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEMADATATYPEMAP_T2661667341_H
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
#ifndef SYMBOLSDICTIONARY_T1753655453_H
#define SYMBOLSDICTIONARY_T1753655453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SymbolsDictionary
struct  SymbolsDictionary_t1753655453  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Schema.SymbolsDictionary::last
	int32_t ___last_0;
	// System.Collections.Hashtable System.Xml.Schema.SymbolsDictionary::names
	Hashtable_t909839986 * ___names_1;
	// System.Collections.Hashtable System.Xml.Schema.SymbolsDictionary::wildcards
	Hashtable_t909839986 * ___wildcards_2;
	// System.Collections.ArrayList System.Xml.Schema.SymbolsDictionary::particles
	ArrayList_t4252133567 * ___particles_3;
	// System.Object System.Xml.Schema.SymbolsDictionary::particleLast
	RuntimeObject * ___particleLast_4;
	// System.Boolean System.Xml.Schema.SymbolsDictionary::isUpaEnforced
	bool ___isUpaEnforced_5;

public:
	inline static int32_t get_offset_of_last_0() { return static_cast<int32_t>(offsetof(SymbolsDictionary_t1753655453, ___last_0)); }
	inline int32_t get_last_0() const { return ___last_0; }
	inline int32_t* get_address_of_last_0() { return &___last_0; }
	inline void set_last_0(int32_t value)
	{
		___last_0 = value;
	}

	inline static int32_t get_offset_of_names_1() { return static_cast<int32_t>(offsetof(SymbolsDictionary_t1753655453, ___names_1)); }
	inline Hashtable_t909839986 * get_names_1() const { return ___names_1; }
	inline Hashtable_t909839986 ** get_address_of_names_1() { return &___names_1; }
	inline void set_names_1(Hashtable_t909839986 * value)
	{
		___names_1 = value;
		Il2CppCodeGenWriteBarrier((&___names_1), value);
	}

	inline static int32_t get_offset_of_wildcards_2() { return static_cast<int32_t>(offsetof(SymbolsDictionary_t1753655453, ___wildcards_2)); }
	inline Hashtable_t909839986 * get_wildcards_2() const { return ___wildcards_2; }
	inline Hashtable_t909839986 ** get_address_of_wildcards_2() { return &___wildcards_2; }
	inline void set_wildcards_2(Hashtable_t909839986 * value)
	{
		___wildcards_2 = value;
		Il2CppCodeGenWriteBarrier((&___wildcards_2), value);
	}

	inline static int32_t get_offset_of_particles_3() { return static_cast<int32_t>(offsetof(SymbolsDictionary_t1753655453, ___particles_3)); }
	inline ArrayList_t4252133567 * get_particles_3() const { return ___particles_3; }
	inline ArrayList_t4252133567 ** get_address_of_particles_3() { return &___particles_3; }
	inline void set_particles_3(ArrayList_t4252133567 * value)
	{
		___particles_3 = value;
		Il2CppCodeGenWriteBarrier((&___particles_3), value);
	}

	inline static int32_t get_offset_of_particleLast_4() { return static_cast<int32_t>(offsetof(SymbolsDictionary_t1753655453, ___particleLast_4)); }
	inline RuntimeObject * get_particleLast_4() const { return ___particleLast_4; }
	inline RuntimeObject ** get_address_of_particleLast_4() { return &___particleLast_4; }
	inline void set_particleLast_4(RuntimeObject * value)
	{
		___particleLast_4 = value;
		Il2CppCodeGenWriteBarrier((&___particleLast_4), value);
	}

	inline static int32_t get_offset_of_isUpaEnforced_5() { return static_cast<int32_t>(offsetof(SymbolsDictionary_t1753655453, ___isUpaEnforced_5)); }
	inline bool get_isUpaEnforced_5() const { return ___isUpaEnforced_5; }
	inline bool* get_address_of_isUpaEnforced_5() { return &___isUpaEnforced_5; }
	inline void set_isUpaEnforced_5(bool value)
	{
		___isUpaEnforced_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMBOLSDICTIONARY_T1753655453_H
#ifndef KSSTRUCT_T704598349_H
#define KSSTRUCT_T704598349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.KSStruct
struct  KSStruct_t704598349  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Schema.KSStruct::depth
	int32_t ___depth_0;
	// System.Xml.Schema.KeySequence System.Xml.Schema.KSStruct::ks
	KeySequence_t746093258 * ___ks_1;
	// System.Xml.Schema.LocatedActiveAxis[] System.Xml.Schema.KSStruct::fields
	LocatedActiveAxisU5BU5D_t2201939280* ___fields_2;

public:
	inline static int32_t get_offset_of_depth_0() { return static_cast<int32_t>(offsetof(KSStruct_t704598349, ___depth_0)); }
	inline int32_t get_depth_0() const { return ___depth_0; }
	inline int32_t* get_address_of_depth_0() { return &___depth_0; }
	inline void set_depth_0(int32_t value)
	{
		___depth_0 = value;
	}

	inline static int32_t get_offset_of_ks_1() { return static_cast<int32_t>(offsetof(KSStruct_t704598349, ___ks_1)); }
	inline KeySequence_t746093258 * get_ks_1() const { return ___ks_1; }
	inline KeySequence_t746093258 ** get_address_of_ks_1() { return &___ks_1; }
	inline void set_ks_1(KeySequence_t746093258 * value)
	{
		___ks_1 = value;
		Il2CppCodeGenWriteBarrier((&___ks_1), value);
	}

	inline static int32_t get_offset_of_fields_2() { return static_cast<int32_t>(offsetof(KSStruct_t704598349, ___fields_2)); }
	inline LocatedActiveAxisU5BU5D_t2201939280* get_fields_2() const { return ___fields_2; }
	inline LocatedActiveAxisU5BU5D_t2201939280** get_address_of_fields_2() { return &___fields_2; }
	inline void set_fields_2(LocatedActiveAxisU5BU5D_t2201939280* value)
	{
		___fields_2 = value;
		Il2CppCodeGenWriteBarrier((&___fields_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KSSTRUCT_T704598349_H
#ifndef CONSTRAINTSTRUCT_T2462842120_H
#define CONSTRAINTSTRUCT_T2462842120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.ConstraintStruct
struct  ConstraintStruct_t2462842120  : public RuntimeObject
{
public:
	// System.Xml.Schema.CompiledIdentityConstraint System.Xml.Schema.ConstraintStruct::constraint
	CompiledIdentityConstraint_t964629540 * ___constraint_0;
	// System.Xml.Schema.SelectorActiveAxis System.Xml.Schema.ConstraintStruct::axisSelector
	SelectorActiveAxis_t789423304 * ___axisSelector_1;
	// System.Collections.ArrayList System.Xml.Schema.ConstraintStruct::axisFields
	ArrayList_t4252133567 * ___axisFields_2;
	// System.Collections.Hashtable System.Xml.Schema.ConstraintStruct::qualifiedTable
	Hashtable_t909839986 * ___qualifiedTable_3;
	// System.Collections.Hashtable System.Xml.Schema.ConstraintStruct::keyrefTable
	Hashtable_t909839986 * ___keyrefTable_4;
	// System.Int32 System.Xml.Schema.ConstraintStruct::tableDim
	int32_t ___tableDim_5;

public:
	inline static int32_t get_offset_of_constraint_0() { return static_cast<int32_t>(offsetof(ConstraintStruct_t2462842120, ___constraint_0)); }
	inline CompiledIdentityConstraint_t964629540 * get_constraint_0() const { return ___constraint_0; }
	inline CompiledIdentityConstraint_t964629540 ** get_address_of_constraint_0() { return &___constraint_0; }
	inline void set_constraint_0(CompiledIdentityConstraint_t964629540 * value)
	{
		___constraint_0 = value;
		Il2CppCodeGenWriteBarrier((&___constraint_0), value);
	}

	inline static int32_t get_offset_of_axisSelector_1() { return static_cast<int32_t>(offsetof(ConstraintStruct_t2462842120, ___axisSelector_1)); }
	inline SelectorActiveAxis_t789423304 * get_axisSelector_1() const { return ___axisSelector_1; }
	inline SelectorActiveAxis_t789423304 ** get_address_of_axisSelector_1() { return &___axisSelector_1; }
	inline void set_axisSelector_1(SelectorActiveAxis_t789423304 * value)
	{
		___axisSelector_1 = value;
		Il2CppCodeGenWriteBarrier((&___axisSelector_1), value);
	}

	inline static int32_t get_offset_of_axisFields_2() { return static_cast<int32_t>(offsetof(ConstraintStruct_t2462842120, ___axisFields_2)); }
	inline ArrayList_t4252133567 * get_axisFields_2() const { return ___axisFields_2; }
	inline ArrayList_t4252133567 ** get_address_of_axisFields_2() { return &___axisFields_2; }
	inline void set_axisFields_2(ArrayList_t4252133567 * value)
	{
		___axisFields_2 = value;
		Il2CppCodeGenWriteBarrier((&___axisFields_2), value);
	}

	inline static int32_t get_offset_of_qualifiedTable_3() { return static_cast<int32_t>(offsetof(ConstraintStruct_t2462842120, ___qualifiedTable_3)); }
	inline Hashtable_t909839986 * get_qualifiedTable_3() const { return ___qualifiedTable_3; }
	inline Hashtable_t909839986 ** get_address_of_qualifiedTable_3() { return &___qualifiedTable_3; }
	inline void set_qualifiedTable_3(Hashtable_t909839986 * value)
	{
		___qualifiedTable_3 = value;
		Il2CppCodeGenWriteBarrier((&___qualifiedTable_3), value);
	}

	inline static int32_t get_offset_of_keyrefTable_4() { return static_cast<int32_t>(offsetof(ConstraintStruct_t2462842120, ___keyrefTable_4)); }
	inline Hashtable_t909839986 * get_keyrefTable_4() const { return ___keyrefTable_4; }
	inline Hashtable_t909839986 ** get_address_of_keyrefTable_4() { return &___keyrefTable_4; }
	inline void set_keyrefTable_4(Hashtable_t909839986 * value)
	{
		___keyrefTable_4 = value;
		Il2CppCodeGenWriteBarrier((&___keyrefTable_4), value);
	}

	inline static int32_t get_offset_of_tableDim_5() { return static_cast<int32_t>(offsetof(ConstraintStruct_t2462842120, ___tableDim_5)); }
	inline int32_t get_tableDim_5() const { return ___tableDim_5; }
	inline int32_t* get_address_of_tableDim_5() { return &___tableDim_5; }
	inline void set_tableDim_5(int32_t value)
	{
		___tableDim_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTSTRUCT_T2462842120_H
#ifndef TYPEDOBJECT_T1797374135_H
#define TYPEDOBJECT_T1797374135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.TypedObject
struct  TypedObject_t1797374135  : public RuntimeObject
{
public:
	// System.Xml.Schema.TypedObject/DecimalStruct System.Xml.Schema.TypedObject::dstruct
	DecimalStruct_t715828147 * ___dstruct_0;
	// System.Object System.Xml.Schema.TypedObject::ovalue
	RuntimeObject * ___ovalue_1;
	// System.String System.Xml.Schema.TypedObject::svalue
	String_t* ___svalue_2;
	// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.TypedObject::xsdtype
	XmlSchemaDatatype_t1195946242 * ___xsdtype_3;
	// System.Int32 System.Xml.Schema.TypedObject::dim
	int32_t ___dim_4;
	// System.Boolean System.Xml.Schema.TypedObject::isList
	bool ___isList_5;

public:
	inline static int32_t get_offset_of_dstruct_0() { return static_cast<int32_t>(offsetof(TypedObject_t1797374135, ___dstruct_0)); }
	inline DecimalStruct_t715828147 * get_dstruct_0() const { return ___dstruct_0; }
	inline DecimalStruct_t715828147 ** get_address_of_dstruct_0() { return &___dstruct_0; }
	inline void set_dstruct_0(DecimalStruct_t715828147 * value)
	{
		___dstruct_0 = value;
		Il2CppCodeGenWriteBarrier((&___dstruct_0), value);
	}

	inline static int32_t get_offset_of_ovalue_1() { return static_cast<int32_t>(offsetof(TypedObject_t1797374135, ___ovalue_1)); }
	inline RuntimeObject * get_ovalue_1() const { return ___ovalue_1; }
	inline RuntimeObject ** get_address_of_ovalue_1() { return &___ovalue_1; }
	inline void set_ovalue_1(RuntimeObject * value)
	{
		___ovalue_1 = value;
		Il2CppCodeGenWriteBarrier((&___ovalue_1), value);
	}

	inline static int32_t get_offset_of_svalue_2() { return static_cast<int32_t>(offsetof(TypedObject_t1797374135, ___svalue_2)); }
	inline String_t* get_svalue_2() const { return ___svalue_2; }
	inline String_t** get_address_of_svalue_2() { return &___svalue_2; }
	inline void set_svalue_2(String_t* value)
	{
		___svalue_2 = value;
		Il2CppCodeGenWriteBarrier((&___svalue_2), value);
	}

	inline static int32_t get_offset_of_xsdtype_3() { return static_cast<int32_t>(offsetof(TypedObject_t1797374135, ___xsdtype_3)); }
	inline XmlSchemaDatatype_t1195946242 * get_xsdtype_3() const { return ___xsdtype_3; }
	inline XmlSchemaDatatype_t1195946242 ** get_address_of_xsdtype_3() { return &___xsdtype_3; }
	inline void set_xsdtype_3(XmlSchemaDatatype_t1195946242 * value)
	{
		___xsdtype_3 = value;
		Il2CppCodeGenWriteBarrier((&___xsdtype_3), value);
	}

	inline static int32_t get_offset_of_dim_4() { return static_cast<int32_t>(offsetof(TypedObject_t1797374135, ___dim_4)); }
	inline int32_t get_dim_4() const { return ___dim_4; }
	inline int32_t* get_address_of_dim_4() { return &___dim_4; }
	inline void set_dim_4(int32_t value)
	{
		___dim_4 = value;
	}

	inline static int32_t get_offset_of_isList_5() { return static_cast<int32_t>(offsetof(TypedObject_t1797374135, ___isList_5)); }
	inline bool get_isList_5() const { return ___isList_5; }
	inline bool* get_address_of_isList_5() { return &___isList_5; }
	inline void set_isList_5(bool value)
	{
		___isList_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDOBJECT_T1797374135_H
#ifndef KEYSEQUENCE_T746093258_H
#define KEYSEQUENCE_T746093258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.KeySequence
struct  KeySequence_t746093258  : public RuntimeObject
{
public:
	// System.Xml.Schema.TypedObject[] System.Xml.Schema.KeySequence::ks
	TypedObjectU5BU5D_t948546190* ___ks_0;
	// System.Int32 System.Xml.Schema.KeySequence::dim
	int32_t ___dim_1;
	// System.Int32 System.Xml.Schema.KeySequence::hashcode
	int32_t ___hashcode_2;
	// System.Int32 System.Xml.Schema.KeySequence::posline
	int32_t ___posline_3;
	// System.Int32 System.Xml.Schema.KeySequence::poscol
	int32_t ___poscol_4;

public:
	inline static int32_t get_offset_of_ks_0() { return static_cast<int32_t>(offsetof(KeySequence_t746093258, ___ks_0)); }
	inline TypedObjectU5BU5D_t948546190* get_ks_0() const { return ___ks_0; }
	inline TypedObjectU5BU5D_t948546190** get_address_of_ks_0() { return &___ks_0; }
	inline void set_ks_0(TypedObjectU5BU5D_t948546190* value)
	{
		___ks_0 = value;
		Il2CppCodeGenWriteBarrier((&___ks_0), value);
	}

	inline static int32_t get_offset_of_dim_1() { return static_cast<int32_t>(offsetof(KeySequence_t746093258, ___dim_1)); }
	inline int32_t get_dim_1() const { return ___dim_1; }
	inline int32_t* get_address_of_dim_1() { return &___dim_1; }
	inline void set_dim_1(int32_t value)
	{
		___dim_1 = value;
	}

	inline static int32_t get_offset_of_hashcode_2() { return static_cast<int32_t>(offsetof(KeySequence_t746093258, ___hashcode_2)); }
	inline int32_t get_hashcode_2() const { return ___hashcode_2; }
	inline int32_t* get_address_of_hashcode_2() { return &___hashcode_2; }
	inline void set_hashcode_2(int32_t value)
	{
		___hashcode_2 = value;
	}

	inline static int32_t get_offset_of_posline_3() { return static_cast<int32_t>(offsetof(KeySequence_t746093258, ___posline_3)); }
	inline int32_t get_posline_3() const { return ___posline_3; }
	inline int32_t* get_address_of_posline_3() { return &___posline_3; }
	inline void set_posline_3(int32_t value)
	{
		___posline_3 = value;
	}

	inline static int32_t get_offset_of_poscol_4() { return static_cast<int32_t>(offsetof(KeySequence_t746093258, ___poscol_4)); }
	inline int32_t get_poscol_4() const { return ___poscol_4; }
	inline int32_t* get_address_of_poscol_4() { return &___poscol_4; }
	inline void set_poscol_4(int32_t value)
	{
		___poscol_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSEQUENCE_T746093258_H
#ifndef DECIMALSTRUCT_T715828147_H
#define DECIMALSTRUCT_T715828147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.TypedObject/DecimalStruct
struct  DecimalStruct_t715828147  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.Schema.TypedObject/DecimalStruct::isDecimal
	bool ___isDecimal_0;
	// System.Decimal[] System.Xml.Schema.TypedObject/DecimalStruct::dvalue
	DecimalU5BU5D_t624008824* ___dvalue_1;

public:
	inline static int32_t get_offset_of_isDecimal_0() { return static_cast<int32_t>(offsetof(DecimalStruct_t715828147, ___isDecimal_0)); }
	inline bool get_isDecimal_0() const { return ___isDecimal_0; }
	inline bool* get_address_of_isDecimal_0() { return &___isDecimal_0; }
	inline void set_isDecimal_0(bool value)
	{
		___isDecimal_0 = value;
	}

	inline static int32_t get_offset_of_dvalue_1() { return static_cast<int32_t>(offsetof(DecimalStruct_t715828147, ___dvalue_1)); }
	inline DecimalU5BU5D_t624008824* get_dvalue_1() const { return ___dvalue_1; }
	inline DecimalU5BU5D_t624008824** get_address_of_dvalue_1() { return &___dvalue_1; }
	inline void set_dvalue_1(DecimalU5BU5D_t624008824* value)
	{
		___dvalue_1 = value;
		Il2CppCodeGenWriteBarrier((&___dvalue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALSTRUCT_T715828147_H
#ifndef BASEVALIDATOR_T3557140249_H
#define BASEVALIDATOR_T3557140249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.BaseValidator
struct  BaseValidator_t3557140249  : public RuntimeObject
{
public:
	// System.Xml.Schema.XmlSchemaCollection System.Xml.Schema.BaseValidator::schemaCollection
	XmlSchemaCollection_t3518500204 * ___schemaCollection_0;
	// System.Xml.IValidationEventHandling System.Xml.Schema.BaseValidator::eventHandling
	RuntimeObject* ___eventHandling_1;
	// System.Xml.XmlNameTable System.Xml.Schema.BaseValidator::nameTable
	XmlNameTable_t1345805268 * ___nameTable_2;
	// System.Xml.Schema.SchemaNames System.Xml.Schema.BaseValidator::schemaNames
	SchemaNames_t1619962557 * ___schemaNames_3;
	// System.Xml.PositionInfo System.Xml.Schema.BaseValidator::positionInfo
	PositionInfo_t3273236083 * ___positionInfo_4;
	// System.Xml.XmlResolver System.Xml.Schema.BaseValidator::xmlResolver
	XmlResolver_t2024571559 * ___xmlResolver_5;
	// System.Uri System.Xml.Schema.BaseValidator::baseUri
	Uri_t19570940 * ___baseUri_6;
	// System.Xml.Schema.SchemaInfo System.Xml.Schema.BaseValidator::schemaInfo
	SchemaInfo_t87206461 * ___schemaInfo_7;
	// System.Xml.XmlValidatingReaderImpl System.Xml.Schema.BaseValidator::reader
	XmlValidatingReaderImpl_t1507412803 * ___reader_8;
	// System.Xml.XmlQualifiedName System.Xml.Schema.BaseValidator::elementName
	XmlQualifiedName_t1944712516 * ___elementName_9;
	// System.Xml.Schema.ValidationState System.Xml.Schema.BaseValidator::context
	ValidationState_t3143048826 * ___context_10;
	// System.Text.StringBuilder System.Xml.Schema.BaseValidator::textValue
	StringBuilder_t1221177846 * ___textValue_11;
	// System.String System.Xml.Schema.BaseValidator::textString
	String_t* ___textString_12;
	// System.Boolean System.Xml.Schema.BaseValidator::hasSibling
	bool ___hasSibling_13;
	// System.Boolean System.Xml.Schema.BaseValidator::checkDatatype
	bool ___checkDatatype_14;

public:
	inline static int32_t get_offset_of_schemaCollection_0() { return static_cast<int32_t>(offsetof(BaseValidator_t3557140249, ___schemaCollection_0)); }
	inline XmlSchemaCollection_t3518500204 * get_schemaCollection_0() const { return ___schemaCollection_0; }
	inline XmlSchemaCollection_t3518500204 ** get_address_of_schemaCollection_0() { return &___schemaCollection_0; }
	inline void set_schemaCollection_0(XmlSchemaCollection_t3518500204 * value)
	{
		___schemaCollection_0 = value;
		Il2CppCodeGenWriteBarrier((&___schemaCollection_0), value);
	}

	inline static int32_t get_offset_of_eventHandling_1() { return static_cast<int32_t>(offsetof(BaseValidator_t3557140249, ___eventHandling_1)); }
	inline RuntimeObject* get_eventHandling_1() const { return ___eventHandling_1; }
	inline RuntimeObject** get_address_of_eventHandling_1() { return &___eventHandling_1; }
	inline void set_eventHandling_1(RuntimeObject* value)
	{
		___eventHandling_1 = value;
		Il2CppCodeGenWriteBarrier((&___eventHandling_1), value);
	}

	inline static int32_t get_offset_of_nameTable_2() { return static_cast<int32_t>(offsetof(BaseValidator_t3557140249, ___nameTable_2)); }
	inline XmlNameTable_t1345805268 * get_nameTable_2() const { return ___nameTable_2; }
	inline XmlNameTable_t1345805268 ** get_address_of_nameTable_2() { return &___nameTable_2; }
	inline void set_nameTable_2(XmlNameTable_t1345805268 * value)
	{
		___nameTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_2), value);
	}

	inline static int32_t get_offset_of_schemaNames_3() { return static_cast<int32_t>(offsetof(BaseValidator_t3557140249, ___schemaNames_3)); }
	inline SchemaNames_t1619962557 * get_schemaNames_3() const { return ___schemaNames_3; }
	inline SchemaNames_t1619962557 ** get_address_of_schemaNames_3() { return &___schemaNames_3; }
	inline void set_schemaNames_3(SchemaNames_t1619962557 * value)
	{
		___schemaNames_3 = value;
		Il2CppCodeGenWriteBarrier((&___schemaNames_3), value);
	}

	inline static int32_t get_offset_of_positionInfo_4() { return static_cast<int32_t>(offsetof(BaseValidator_t3557140249, ___positionInfo_4)); }
	inline PositionInfo_t3273236083 * get_positionInfo_4() const { return ___positionInfo_4; }
	inline PositionInfo_t3273236083 ** get_address_of_positionInfo_4() { return &___positionInfo_4; }
	inline void set_positionInfo_4(PositionInfo_t3273236083 * value)
	{
		___positionInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&___positionInfo_4), value);
	}

	inline static int32_t get_offset_of_xmlResolver_5() { return static_cast<int32_t>(offsetof(BaseValidator_t3557140249, ___xmlResolver_5)); }
	inline XmlResolver_t2024571559 * get_xmlResolver_5() const { return ___xmlResolver_5; }
	inline XmlResolver_t2024571559 ** get_address_of_xmlResolver_5() { return &___xmlResolver_5; }
	inline void set_xmlResolver_5(XmlResolver_t2024571559 * value)
	{
		___xmlResolver_5 = value;
		Il2CppCodeGenWriteBarrier((&___xmlResolver_5), value);
	}

	inline static int32_t get_offset_of_baseUri_6() { return static_cast<int32_t>(offsetof(BaseValidator_t3557140249, ___baseUri_6)); }
	inline Uri_t19570940 * get_baseUri_6() const { return ___baseUri_6; }
	inline Uri_t19570940 ** get_address_of_baseUri_6() { return &___baseUri_6; }
	inline void set_baseUri_6(Uri_t19570940 * value)
	{
		___baseUri_6 = value;
		Il2CppCodeGenWriteBarrier((&___baseUri_6), value);
	}

	inline static int32_t get_offset_of_schemaInfo_7() { return static_cast<int32_t>(offsetof(BaseValidator_t3557140249, ___schemaInfo_7)); }
	inline SchemaInfo_t87206461 * get_schemaInfo_7() const { return ___schemaInfo_7; }
	inline SchemaInfo_t87206461 ** get_address_of_schemaInfo_7() { return &___schemaInfo_7; }
	inline void set_schemaInfo_7(SchemaInfo_t87206461 * value)
	{
		___schemaInfo_7 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_7), value);
	}

	inline static int32_t get_offset_of_reader_8() { return static_cast<int32_t>(offsetof(BaseValidator_t3557140249, ___reader_8)); }
	inline XmlValidatingReaderImpl_t1507412803 * get_reader_8() const { return ___reader_8; }
	inline XmlValidatingReaderImpl_t1507412803 ** get_address_of_reader_8() { return &___reader_8; }
	inline void set_reader_8(XmlValidatingReaderImpl_t1507412803 * value)
	{
		___reader_8 = value;
		Il2CppCodeGenWriteBarrier((&___reader_8), value);
	}

	inline static int32_t get_offset_of_elementName_9() { return static_cast<int32_t>(offsetof(BaseValidator_t3557140249, ___elementName_9)); }
	inline XmlQualifiedName_t1944712516 * get_elementName_9() const { return ___elementName_9; }
	inline XmlQualifiedName_t1944712516 ** get_address_of_elementName_9() { return &___elementName_9; }
	inline void set_elementName_9(XmlQualifiedName_t1944712516 * value)
	{
		___elementName_9 = value;
		Il2CppCodeGenWriteBarrier((&___elementName_9), value);
	}

	inline static int32_t get_offset_of_context_10() { return static_cast<int32_t>(offsetof(BaseValidator_t3557140249, ___context_10)); }
	inline ValidationState_t3143048826 * get_context_10() const { return ___context_10; }
	inline ValidationState_t3143048826 ** get_address_of_context_10() { return &___context_10; }
	inline void set_context_10(ValidationState_t3143048826 * value)
	{
		___context_10 = value;
		Il2CppCodeGenWriteBarrier((&___context_10), value);
	}

	inline static int32_t get_offset_of_textValue_11() { return static_cast<int32_t>(offsetof(BaseValidator_t3557140249, ___textValue_11)); }
	inline StringBuilder_t1221177846 * get_textValue_11() const { return ___textValue_11; }
	inline StringBuilder_t1221177846 ** get_address_of_textValue_11() { return &___textValue_11; }
	inline void set_textValue_11(StringBuilder_t1221177846 * value)
	{
		___textValue_11 = value;
		Il2CppCodeGenWriteBarrier((&___textValue_11), value);
	}

	inline static int32_t get_offset_of_textString_12() { return static_cast<int32_t>(offsetof(BaseValidator_t3557140249, ___textString_12)); }
	inline String_t* get_textString_12() const { return ___textString_12; }
	inline String_t** get_address_of_textString_12() { return &___textString_12; }
	inline void set_textString_12(String_t* value)
	{
		___textString_12 = value;
		Il2CppCodeGenWriteBarrier((&___textString_12), value);
	}

	inline static int32_t get_offset_of_hasSibling_13() { return static_cast<int32_t>(offsetof(BaseValidator_t3557140249, ___hasSibling_13)); }
	inline bool get_hasSibling_13() const { return ___hasSibling_13; }
	inline bool* get_address_of_hasSibling_13() { return &___hasSibling_13; }
	inline void set_hasSibling_13(bool value)
	{
		___hasSibling_13 = value;
	}

	inline static int32_t get_offset_of_checkDatatype_14() { return static_cast<int32_t>(offsetof(BaseValidator_t3557140249, ___checkDatatype_14)); }
	inline bool get_checkDatatype_14() const { return ___checkDatatype_14; }
	inline bool* get_address_of_checkDatatype_14() { return &___checkDatatype_14; }
	inline void set_checkDatatype_14(bool value)
	{
		___checkDatatype_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEVALIDATOR_T3557140249_H
#ifndef INTERIORNODE_T2716368958_H
#define INTERIORNODE_T2716368958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.InteriorNode
struct  InteriorNode_t2716368958  : public SyntaxTreeNode_t2397191729
{
public:
	// System.Xml.Schema.SyntaxTreeNode System.Xml.Schema.InteriorNode::leftChild
	SyntaxTreeNode_t2397191729 * ___leftChild_0;
	// System.Xml.Schema.SyntaxTreeNode System.Xml.Schema.InteriorNode::rightChild
	SyntaxTreeNode_t2397191729 * ___rightChild_1;

public:
	inline static int32_t get_offset_of_leftChild_0() { return static_cast<int32_t>(offsetof(InteriorNode_t2716368958, ___leftChild_0)); }
	inline SyntaxTreeNode_t2397191729 * get_leftChild_0() const { return ___leftChild_0; }
	inline SyntaxTreeNode_t2397191729 ** get_address_of_leftChild_0() { return &___leftChild_0; }
	inline void set_leftChild_0(SyntaxTreeNode_t2397191729 * value)
	{
		___leftChild_0 = value;
		Il2CppCodeGenWriteBarrier((&___leftChild_0), value);
	}

	inline static int32_t get_offset_of_rightChild_1() { return static_cast<int32_t>(offsetof(InteriorNode_t2716368958, ___rightChild_1)); }
	inline SyntaxTreeNode_t2397191729 * get_rightChild_1() const { return ___rightChild_1; }
	inline SyntaxTreeNode_t2397191729 ** get_address_of_rightChild_1() { return &___rightChild_1; }
	inline void set_rightChild_1(SyntaxTreeNode_t2397191729 * value)
	{
		___rightChild_1 = value;
		Il2CppCodeGenWriteBarrier((&___rightChild_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERIORNODE_T2716368958_H
#ifndef LOCATEDACTIVEAXIS_T90453917_H
#define LOCATEDACTIVEAXIS_T90453917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.LocatedActiveAxis
struct  LocatedActiveAxis_t90453917  : public ActiveAxis_t439376929
{
public:
	// System.Int32 System.Xml.Schema.LocatedActiveAxis::column
	int32_t ___column_4;
	// System.Boolean System.Xml.Schema.LocatedActiveAxis::isMatched
	bool ___isMatched_5;
	// System.Xml.Schema.KeySequence System.Xml.Schema.LocatedActiveAxis::Ks
	KeySequence_t746093258 * ___Ks_6;

public:
	inline static int32_t get_offset_of_column_4() { return static_cast<int32_t>(offsetof(LocatedActiveAxis_t90453917, ___column_4)); }
	inline int32_t get_column_4() const { return ___column_4; }
	inline int32_t* get_address_of_column_4() { return &___column_4; }
	inline void set_column_4(int32_t value)
	{
		___column_4 = value;
	}

	inline static int32_t get_offset_of_isMatched_5() { return static_cast<int32_t>(offsetof(LocatedActiveAxis_t90453917, ___isMatched_5)); }
	inline bool get_isMatched_5() const { return ___isMatched_5; }
	inline bool* get_address_of_isMatched_5() { return &___isMatched_5; }
	inline void set_isMatched_5(bool value)
	{
		___isMatched_5 = value;
	}

	inline static int32_t get_offset_of_Ks_6() { return static_cast<int32_t>(offsetof(LocatedActiveAxis_t90453917, ___Ks_6)); }
	inline KeySequence_t746093258 * get_Ks_6() const { return ___Ks_6; }
	inline KeySequence_t746093258 ** get_address_of_Ks_6() { return &___Ks_6; }
	inline void set_Ks_6(KeySequence_t746093258 * value)
	{
		___Ks_6 = value;
		Il2CppCodeGenWriteBarrier((&___Ks_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCATEDACTIVEAXIS_T90453917_H
#ifndef SELECTORACTIVEAXIS_T789423304_H
#define SELECTORACTIVEAXIS_T789423304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SelectorActiveAxis
struct  SelectorActiveAxis_t789423304  : public ActiveAxis_t439376929
{
public:
	// System.Xml.Schema.ConstraintStruct System.Xml.Schema.SelectorActiveAxis::cs
	ConstraintStruct_t2462842120 * ___cs_4;
	// System.Collections.ArrayList System.Xml.Schema.SelectorActiveAxis::KSs
	ArrayList_t4252133567 * ___KSs_5;
	// System.Int32 System.Xml.Schema.SelectorActiveAxis::KSpointer
	int32_t ___KSpointer_6;

public:
	inline static int32_t get_offset_of_cs_4() { return static_cast<int32_t>(offsetof(SelectorActiveAxis_t789423304, ___cs_4)); }
	inline ConstraintStruct_t2462842120 * get_cs_4() const { return ___cs_4; }
	inline ConstraintStruct_t2462842120 ** get_address_of_cs_4() { return &___cs_4; }
	inline void set_cs_4(ConstraintStruct_t2462842120 * value)
	{
		___cs_4 = value;
		Il2CppCodeGenWriteBarrier((&___cs_4), value);
	}

	inline static int32_t get_offset_of_KSs_5() { return static_cast<int32_t>(offsetof(SelectorActiveAxis_t789423304, ___KSs_5)); }
	inline ArrayList_t4252133567 * get_KSs_5() const { return ___KSs_5; }
	inline ArrayList_t4252133567 ** get_address_of_KSs_5() { return &___KSs_5; }
	inline void set_KSs_5(ArrayList_t4252133567 * value)
	{
		___KSs_5 = value;
		Il2CppCodeGenWriteBarrier((&___KSs_5), value);
	}

	inline static int32_t get_offset_of_KSpointer_6() { return static_cast<int32_t>(offsetof(SelectorActiveAxis_t789423304, ___KSpointer_6)); }
	inline int32_t get_KSpointer_6() const { return ___KSpointer_6; }
	inline int32_t* get_address_of_KSpointer_6() { return &___KSpointer_6; }
	inline void set_KSpointer_6(int32_t value)
	{
		___KSpointer_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTORACTIVEAXIS_T789423304_H
#ifndef DTDVALIDATOR_T1639720164_H
#define DTDVALIDATOR_T1639720164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.DtdValidator
struct  DtdValidator_t1639720164  : public BaseValidator_t3557140249
{
public:
	// System.Xml.HWStack System.Xml.Schema.DtdValidator::validationStack
	HWStack_t738999989 * ___validationStack_16;
	// System.Collections.Hashtable System.Xml.Schema.DtdValidator::attPresence
	Hashtable_t909839986 * ___attPresence_17;
	// System.Xml.XmlQualifiedName System.Xml.Schema.DtdValidator::name
	XmlQualifiedName_t1944712516 * ___name_18;
	// System.Collections.Hashtable System.Xml.Schema.DtdValidator::IDs
	Hashtable_t909839986 * ___IDs_19;
	// System.Xml.Schema.IdRefNode System.Xml.Schema.DtdValidator::idRefListHead
	IdRefNode_t224554150 * ___idRefListHead_20;
	// System.Boolean System.Xml.Schema.DtdValidator::processIdentityConstraints
	bool ___processIdentityConstraints_21;

public:
	inline static int32_t get_offset_of_validationStack_16() { return static_cast<int32_t>(offsetof(DtdValidator_t1639720164, ___validationStack_16)); }
	inline HWStack_t738999989 * get_validationStack_16() const { return ___validationStack_16; }
	inline HWStack_t738999989 ** get_address_of_validationStack_16() { return &___validationStack_16; }
	inline void set_validationStack_16(HWStack_t738999989 * value)
	{
		___validationStack_16 = value;
		Il2CppCodeGenWriteBarrier((&___validationStack_16), value);
	}

	inline static int32_t get_offset_of_attPresence_17() { return static_cast<int32_t>(offsetof(DtdValidator_t1639720164, ___attPresence_17)); }
	inline Hashtable_t909839986 * get_attPresence_17() const { return ___attPresence_17; }
	inline Hashtable_t909839986 ** get_address_of_attPresence_17() { return &___attPresence_17; }
	inline void set_attPresence_17(Hashtable_t909839986 * value)
	{
		___attPresence_17 = value;
		Il2CppCodeGenWriteBarrier((&___attPresence_17), value);
	}

	inline static int32_t get_offset_of_name_18() { return static_cast<int32_t>(offsetof(DtdValidator_t1639720164, ___name_18)); }
	inline XmlQualifiedName_t1944712516 * get_name_18() const { return ___name_18; }
	inline XmlQualifiedName_t1944712516 ** get_address_of_name_18() { return &___name_18; }
	inline void set_name_18(XmlQualifiedName_t1944712516 * value)
	{
		___name_18 = value;
		Il2CppCodeGenWriteBarrier((&___name_18), value);
	}

	inline static int32_t get_offset_of_IDs_19() { return static_cast<int32_t>(offsetof(DtdValidator_t1639720164, ___IDs_19)); }
	inline Hashtable_t909839986 * get_IDs_19() const { return ___IDs_19; }
	inline Hashtable_t909839986 ** get_address_of_IDs_19() { return &___IDs_19; }
	inline void set_IDs_19(Hashtable_t909839986 * value)
	{
		___IDs_19 = value;
		Il2CppCodeGenWriteBarrier((&___IDs_19), value);
	}

	inline static int32_t get_offset_of_idRefListHead_20() { return static_cast<int32_t>(offsetof(DtdValidator_t1639720164, ___idRefListHead_20)); }
	inline IdRefNode_t224554150 * get_idRefListHead_20() const { return ___idRefListHead_20; }
	inline IdRefNode_t224554150 ** get_address_of_idRefListHead_20() { return &___idRefListHead_20; }
	inline void set_idRefListHead_20(IdRefNode_t224554150 * value)
	{
		___idRefListHead_20 = value;
		Il2CppCodeGenWriteBarrier((&___idRefListHead_20), value);
	}

	inline static int32_t get_offset_of_processIdentityConstraints_21() { return static_cast<int32_t>(offsetof(DtdValidator_t1639720164, ___processIdentityConstraints_21)); }
	inline bool get_processIdentityConstraints_21() const { return ___processIdentityConstraints_21; }
	inline bool* get_address_of_processIdentityConstraints_21() { return &___processIdentityConstraints_21; }
	inline void set_processIdentityConstraints_21(bool value)
	{
		___processIdentityConstraints_21 = value;
	}
};

struct DtdValidator_t1639720164_StaticFields
{
public:
	// System.Xml.Schema.DtdValidator/NamespaceManager System.Xml.Schema.DtdValidator::namespaceManager
	NamespaceManager_t1407344 * ___namespaceManager_15;

public:
	inline static int32_t get_offset_of_namespaceManager_15() { return static_cast<int32_t>(offsetof(DtdValidator_t1639720164_StaticFields, ___namespaceManager_15)); }
	inline NamespaceManager_t1407344 * get_namespaceManager_15() const { return ___namespaceManager_15; }
	inline NamespaceManager_t1407344 ** get_address_of_namespaceManager_15() { return &___namespaceManager_15; }
	inline void set_namespaceManager_15(NamespaceManager_t1407344 * value)
	{
		___namespaceManager_15 = value;
		Il2CppCodeGenWriteBarrier((&___namespaceManager_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDVALIDATOR_T1639720164_H
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
#ifndef RANGEPOSITIONINFO_T2780802922_H
#define RANGEPOSITIONINFO_T2780802922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.RangePositionInfo
struct  RangePositionInfo_t2780802922 
{
public:
	// System.Xml.Schema.BitSet System.Xml.Schema.RangePositionInfo::curpos
	BitSet_t1062448123 * ___curpos_0;
	// System.Decimal[] System.Xml.Schema.RangePositionInfo::rangeCounters
	DecimalU5BU5D_t624008824* ___rangeCounters_1;

public:
	inline static int32_t get_offset_of_curpos_0() { return static_cast<int32_t>(offsetof(RangePositionInfo_t2780802922, ___curpos_0)); }
	inline BitSet_t1062448123 * get_curpos_0() const { return ___curpos_0; }
	inline BitSet_t1062448123 ** get_address_of_curpos_0() { return &___curpos_0; }
	inline void set_curpos_0(BitSet_t1062448123 * value)
	{
		___curpos_0 = value;
		Il2CppCodeGenWriteBarrier((&___curpos_0), value);
	}

	inline static int32_t get_offset_of_rangeCounters_1() { return static_cast<int32_t>(offsetof(RangePositionInfo_t2780802922, ___rangeCounters_1)); }
	inline DecimalU5BU5D_t624008824* get_rangeCounters_1() const { return ___rangeCounters_1; }
	inline DecimalU5BU5D_t624008824** get_address_of_rangeCounters_1() { return &___rangeCounters_1; }
	inline void set_rangeCounters_1(DecimalU5BU5D_t624008824* value)
	{
		___rangeCounters_1 = value;
		Il2CppCodeGenWriteBarrier((&___rangeCounters_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.Schema.RangePositionInfo
struct RangePositionInfo_t2780802922_marshaled_pinvoke
{
	BitSet_t1062448123 * ___curpos_0;
	Decimal_t724701077 * ___rangeCounters_1;
};
// Native definition for COM marshalling of System.Xml.Schema.RangePositionInfo
struct RangePositionInfo_t2780802922_marshaled_com
{
	BitSet_t1062448123 * ___curpos_0;
	Decimal_t724701077 * ___rangeCounters_1;
};
#endif // RANGEPOSITIONINFO_T2780802922_H
#ifndef LEAFNODE_T3748718316_H
#define LEAFNODE_T3748718316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.LeafNode
struct  LeafNode_t3748718316  : public SyntaxTreeNode_t2397191729
{
public:
	// System.Int32 System.Xml.Schema.LeafNode::pos
	int32_t ___pos_0;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(LeafNode_t3748718316, ___pos_0)); }
	inline int32_t get_pos_0() const { return ___pos_0; }
	inline int32_t* get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(int32_t value)
	{
		___pos_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAFNODE_T3748718316_H
#ifndef NAMESPACELISTNODE_T2509262495_H
#define NAMESPACELISTNODE_T2509262495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.NamespaceListNode
struct  NamespaceListNode_t2509262495  : public SyntaxTreeNode_t2397191729
{
public:
	// System.Xml.Schema.NamespaceList System.Xml.Schema.NamespaceListNode::namespaceList
	NamespaceList_t848177191 * ___namespaceList_0;
	// System.Object System.Xml.Schema.NamespaceListNode::particle
	RuntimeObject * ___particle_1;

public:
	inline static int32_t get_offset_of_namespaceList_0() { return static_cast<int32_t>(offsetof(NamespaceListNode_t2509262495, ___namespaceList_0)); }
	inline NamespaceList_t848177191 * get_namespaceList_0() const { return ___namespaceList_0; }
	inline NamespaceList_t848177191 ** get_address_of_namespaceList_0() { return &___namespaceList_0; }
	inline void set_namespaceList_0(NamespaceList_t848177191 * value)
	{
		___namespaceList_0 = value;
		Il2CppCodeGenWriteBarrier((&___namespaceList_0), value);
	}

	inline static int32_t get_offset_of_particle_1() { return static_cast<int32_t>(offsetof(NamespaceListNode_t2509262495, ___particle_1)); }
	inline RuntimeObject * get_particle_1() const { return ___particle_1; }
	inline RuntimeObject ** get_address_of_particle_1() { return &___particle_1; }
	inline void set_particle_1(RuntimeObject * value)
	{
		___particle_1 = value;
		Il2CppCodeGenWriteBarrier((&___particle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMESPACELISTNODE_T2509262495_H
#ifndef POSITION_T1796812729_H
#define POSITION_T1796812729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Position
struct  Position_t1796812729 
{
public:
	// System.Int32 System.Xml.Schema.Position::symbol
	int32_t ___symbol_0;
	// System.Object System.Xml.Schema.Position::particle
	RuntimeObject * ___particle_1;

public:
	inline static int32_t get_offset_of_symbol_0() { return static_cast<int32_t>(offsetof(Position_t1796812729, ___symbol_0)); }
	inline int32_t get_symbol_0() const { return ___symbol_0; }
	inline int32_t* get_address_of_symbol_0() { return &___symbol_0; }
	inline void set_symbol_0(int32_t value)
	{
		___symbol_0 = value;
	}

	inline static int32_t get_offset_of_particle_1() { return static_cast<int32_t>(offsetof(Position_t1796812729, ___particle_1)); }
	inline RuntimeObject * get_particle_1() const { return ___particle_1; }
	inline RuntimeObject ** get_address_of_particle_1() { return &___particle_1; }
	inline void set_particle_1(RuntimeObject * value)
	{
		___particle_1 = value;
		Il2CppCodeGenWriteBarrier((&___particle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.Schema.Position
struct Position_t1796812729_marshaled_pinvoke
{
	int32_t ___symbol_0;
	Il2CppIUnknown* ___particle_1;
};
// Native definition for COM marshalling of System.Xml.Schema.Position
struct Position_t1796812729_marshaled_com
{
	int32_t ___symbol_0;
	Il2CppIUnknown* ___particle_1;
};
#endif // POSITION_T1796812729_H
#ifndef UPAEXCEPTION_T656169215_H
#define UPAEXCEPTION_T656169215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.UpaException
struct  UpaException_t656169215  : public Exception_t1927440687
{
public:
	// System.Object System.Xml.Schema.UpaException::particle1
	RuntimeObject * ___particle1_16;
	// System.Object System.Xml.Schema.UpaException::particle2
	RuntimeObject * ___particle2_17;

public:
	inline static int32_t get_offset_of_particle1_16() { return static_cast<int32_t>(offsetof(UpaException_t656169215, ___particle1_16)); }
	inline RuntimeObject * get_particle1_16() const { return ___particle1_16; }
	inline RuntimeObject ** get_address_of_particle1_16() { return &___particle1_16; }
	inline void set_particle1_16(RuntimeObject * value)
	{
		___particle1_16 = value;
		Il2CppCodeGenWriteBarrier((&___particle1_16), value);
	}

	inline static int32_t get_offset_of_particle2_17() { return static_cast<int32_t>(offsetof(UpaException_t656169215, ___particle2_17)); }
	inline RuntimeObject * get_particle2_17() const { return ___particle2_17; }
	inline RuntimeObject ** get_address_of_particle2_17() { return &___particle2_17; }
	inline void set_particle2_17(RuntimeObject * value)
	{
		___particle2_17 = value;
		Il2CppCodeGenWriteBarrier((&___particle2_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPAEXCEPTION_T656169215_H
#ifndef SEQUENCECONSTRUCTPOSCONTEXT_T3853454650_H
#define SEQUENCECONSTRUCTPOSCONTEXT_T3853454650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SequenceNode/SequenceConstructPosContext
struct  SequenceConstructPosContext_t3853454650 
{
public:
	// System.Xml.Schema.SequenceNode System.Xml.Schema.SequenceNode/SequenceConstructPosContext::this_
	SequenceNode_t4039907291 * ___this__0;
	// System.Xml.Schema.BitSet System.Xml.Schema.SequenceNode/SequenceConstructPosContext::firstpos
	BitSet_t1062448123 * ___firstpos_1;
	// System.Xml.Schema.BitSet System.Xml.Schema.SequenceNode/SequenceConstructPosContext::lastpos
	BitSet_t1062448123 * ___lastpos_2;
	// System.Xml.Schema.BitSet System.Xml.Schema.SequenceNode/SequenceConstructPosContext::lastposLeft
	BitSet_t1062448123 * ___lastposLeft_3;
	// System.Xml.Schema.BitSet System.Xml.Schema.SequenceNode/SequenceConstructPosContext::firstposRight
	BitSet_t1062448123 * ___firstposRight_4;

public:
	inline static int32_t get_offset_of_this__0() { return static_cast<int32_t>(offsetof(SequenceConstructPosContext_t3853454650, ___this__0)); }
	inline SequenceNode_t4039907291 * get_this__0() const { return ___this__0; }
	inline SequenceNode_t4039907291 ** get_address_of_this__0() { return &___this__0; }
	inline void set_this__0(SequenceNode_t4039907291 * value)
	{
		___this__0 = value;
		Il2CppCodeGenWriteBarrier((&___this__0), value);
	}

	inline static int32_t get_offset_of_firstpos_1() { return static_cast<int32_t>(offsetof(SequenceConstructPosContext_t3853454650, ___firstpos_1)); }
	inline BitSet_t1062448123 * get_firstpos_1() const { return ___firstpos_1; }
	inline BitSet_t1062448123 ** get_address_of_firstpos_1() { return &___firstpos_1; }
	inline void set_firstpos_1(BitSet_t1062448123 * value)
	{
		___firstpos_1 = value;
		Il2CppCodeGenWriteBarrier((&___firstpos_1), value);
	}

	inline static int32_t get_offset_of_lastpos_2() { return static_cast<int32_t>(offsetof(SequenceConstructPosContext_t3853454650, ___lastpos_2)); }
	inline BitSet_t1062448123 * get_lastpos_2() const { return ___lastpos_2; }
	inline BitSet_t1062448123 ** get_address_of_lastpos_2() { return &___lastpos_2; }
	inline void set_lastpos_2(BitSet_t1062448123 * value)
	{
		___lastpos_2 = value;
		Il2CppCodeGenWriteBarrier((&___lastpos_2), value);
	}

	inline static int32_t get_offset_of_lastposLeft_3() { return static_cast<int32_t>(offsetof(SequenceConstructPosContext_t3853454650, ___lastposLeft_3)); }
	inline BitSet_t1062448123 * get_lastposLeft_3() const { return ___lastposLeft_3; }
	inline BitSet_t1062448123 ** get_address_of_lastposLeft_3() { return &___lastposLeft_3; }
	inline void set_lastposLeft_3(BitSet_t1062448123 * value)
	{
		___lastposLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___lastposLeft_3), value);
	}

	inline static int32_t get_offset_of_firstposRight_4() { return static_cast<int32_t>(offsetof(SequenceConstructPosContext_t3853454650, ___firstposRight_4)); }
	inline BitSet_t1062448123 * get_firstposRight_4() const { return ___firstposRight_4; }
	inline BitSet_t1062448123 ** get_address_of_firstposRight_4() { return &___firstposRight_4; }
	inline void set_firstposRight_4(BitSet_t1062448123 * value)
	{
		___firstposRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___firstposRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.Schema.SequenceNode/SequenceConstructPosContext
struct SequenceConstructPosContext_t3853454650_marshaled_pinvoke
{
	SequenceNode_t4039907291 * ___this__0;
	BitSet_t1062448123 * ___firstpos_1;
	BitSet_t1062448123 * ___lastpos_2;
	BitSet_t1062448123 * ___lastposLeft_3;
	BitSet_t1062448123 * ___firstposRight_4;
};
// Native definition for COM marshalling of System.Xml.Schema.SequenceNode/SequenceConstructPosContext
struct SequenceConstructPosContext_t3853454650_marshaled_com
{
	SequenceNode_t4039907291 * ___this__0;
	BitSet_t1062448123 * ___firstpos_1;
	BitSet_t1062448123 * ___lastpos_2;
	BitSet_t1062448123 * ___lastposLeft_3;
	BitSet_t1062448123 * ___firstposRight_4;
};
#endif // SEQUENCECONSTRUCTPOSCONTEXT_T3853454650_H
#ifndef DECIMAL_T724701077_H
#define DECIMAL_T724701077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t724701077 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t724701077, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t724701077, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t724701077, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t724701077, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t724701077_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t59386216* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t724701077  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t724701077  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t724701077  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t724701077  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t724701077  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t724701077  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t724701077  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t59386216* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t59386216** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t59386216* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___Zero_7)); }
	inline Decimal_t724701077  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t724701077 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t724701077  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___One_8)); }
	inline Decimal_t724701077  get_One_8() const { return ___One_8; }
	inline Decimal_t724701077 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t724701077  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___MinusOne_9)); }
	inline Decimal_t724701077  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t724701077 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t724701077  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___MaxValue_10)); }
	inline Decimal_t724701077  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t724701077 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t724701077  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___MinValue_11)); }
	inline Decimal_t724701077  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t724701077 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t724701077  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t724701077  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t724701077 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t724701077  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t724701077  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t724701077 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t724701077  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T724701077_H
#ifndef XMLSCHEMAWHITESPACE_T3746245107_H
#define XMLSCHEMAWHITESPACE_T3746245107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaWhiteSpace
struct  XmlSchemaWhiteSpace_t3746245107 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaWhiteSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaWhiteSpace_t3746245107, ___value___2)); }
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
#endif // XMLSCHEMAWHITESPACE_T3746245107_H
#ifndef XSDDATETIMEFLAGS_T2172197783_H
#define XSDDATETIMEFLAGS_T2172197783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XsdDateTimeFlags
struct  XsdDateTimeFlags_t2172197783 
{
public:
	// System.Int32 System.Xml.Schema.XsdDateTimeFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XsdDateTimeFlags_t2172197783, ___value___2)); }
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
#endif // XSDDATETIMEFLAGS_T2172197783_H
#ifndef CONSTRAINTROLE_T3811561833_H
#define CONSTRAINTROLE_T3811561833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.CompiledIdentityConstraint/ConstraintRole
struct  ConstraintRole_t3811561833 
{
public:
	// System.Int32 System.Xml.Schema.CompiledIdentityConstraint/ConstraintRole::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConstraintRole_t3811561833, ___value___2)); }
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
#endif // CONSTRAINTROLE_T3811561833_H
#ifndef XMLSCHEMACONTENTTYPE_T2874429441_H
#define XMLSCHEMACONTENTTYPE_T2874429441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaContentType
struct  XmlSchemaContentType_t2874429441 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaContentType_t2874429441, ___value___2)); }
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
#endif // XMLSCHEMACONTENTTYPE_T2874429441_H
#ifndef RESTRICTIONFLAGS_T2588355947_H
#define RESTRICTIONFLAGS_T2588355947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.RestrictionFlags
struct  RestrictionFlags_t2588355947 
{
public:
	// System.Int32 System.Xml.Schema.RestrictionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RestrictionFlags_t2588355947, ___value___2)); }
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
#endif // RESTRICTIONFLAGS_T2588355947_H
#ifndef PLUSNODE_T3494526928_H
#define PLUSNODE_T3494526928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.PlusNode
struct  PlusNode_t3494526928  : public InteriorNode_t2716368958
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLUSNODE_T3494526928_H
#ifndef CHOICENODE_T3123692209_H
#define CHOICENODE_T3123692209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.ChoiceNode
struct  ChoiceNode_t3123692209  : public InteriorNode_t2716368958
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHOICENODE_T3123692209_H
#ifndef SEQUENCENODE_T4039907291_H
#define SEQUENCENODE_T4039907291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SequenceNode
struct  SequenceNode_t4039907291  : public InteriorNode_t2716368958
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEQUENCENODE_T4039907291_H
#ifndef LEAFRANGENODE_T2572019409_H
#define LEAFRANGENODE_T2572019409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.LeafRangeNode
struct  LeafRangeNode_t2572019409  : public LeafNode_t3748718316
{
public:
	// System.Decimal System.Xml.Schema.LeafRangeNode::min
	Decimal_t724701077  ___min_1;
	// System.Decimal System.Xml.Schema.LeafRangeNode::max
	Decimal_t724701077  ___max_2;
	// System.Xml.Schema.BitSet System.Xml.Schema.LeafRangeNode::nextIteration
	BitSet_t1062448123 * ___nextIteration_3;

public:
	inline static int32_t get_offset_of_min_1() { return static_cast<int32_t>(offsetof(LeafRangeNode_t2572019409, ___min_1)); }
	inline Decimal_t724701077  get_min_1() const { return ___min_1; }
	inline Decimal_t724701077 * get_address_of_min_1() { return &___min_1; }
	inline void set_min_1(Decimal_t724701077  value)
	{
		___min_1 = value;
	}

	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(LeafRangeNode_t2572019409, ___max_2)); }
	inline Decimal_t724701077  get_max_2() const { return ___max_2; }
	inline Decimal_t724701077 * get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(Decimal_t724701077  value)
	{
		___max_2 = value;
	}

	inline static int32_t get_offset_of_nextIteration_3() { return static_cast<int32_t>(offsetof(LeafRangeNode_t2572019409, ___nextIteration_3)); }
	inline BitSet_t1062448123 * get_nextIteration_3() const { return ___nextIteration_3; }
	inline BitSet_t1062448123 ** get_address_of_nextIteration_3() { return &___nextIteration_3; }
	inline void set_nextIteration_3(BitSet_t1062448123 * value)
	{
		___nextIteration_3 = value;
		Il2CppCodeGenWriteBarrier((&___nextIteration_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAFRANGENODE_T2572019409_H
#ifndef STARNODE_T2416964522_H
#define STARNODE_T2416964522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.StarNode
struct  StarNode_t2416964522  : public InteriorNode_t2716368958
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARNODE_T2416964522_H
#ifndef QMARKNODE_T902109702_H
#define QMARKNODE_T902109702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.QmarkNode
struct  QmarkNode_t902109702  : public InteriorNode_t2716368958
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QMARKNODE_T902109702_H
#ifndef XMLSCHEMADATATYPEVARIETY_T2237606318_H
#define XMLSCHEMADATATYPEVARIETY_T2237606318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaDatatypeVariety
struct  XmlSchemaDatatypeVariety_t2237606318 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaDatatypeVariety::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaDatatypeVariety_t2237606318, ___value___2)); }
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
#endif // XMLSCHEMADATATYPEVARIETY_T2237606318_H
#ifndef CONTENTVALIDATOR_T2510151843_H
#define CONTENTVALIDATOR_T2510151843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.ContentValidator
struct  ContentValidator_t2510151843  : public RuntimeObject
{
public:
	// System.Xml.Schema.XmlSchemaContentType System.Xml.Schema.ContentValidator::contentType
	int32_t ___contentType_0;
	// System.Boolean System.Xml.Schema.ContentValidator::isOpen
	bool ___isOpen_1;
	// System.Boolean System.Xml.Schema.ContentValidator::isEmptiable
	bool ___isEmptiable_2;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentValidator_t2510151843, ___contentType_0)); }
	inline int32_t get_contentType_0() const { return ___contentType_0; }
	inline int32_t* get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(int32_t value)
	{
		___contentType_0 = value;
	}

	inline static int32_t get_offset_of_isOpen_1() { return static_cast<int32_t>(offsetof(ContentValidator_t2510151843, ___isOpen_1)); }
	inline bool get_isOpen_1() const { return ___isOpen_1; }
	inline bool* get_address_of_isOpen_1() { return &___isOpen_1; }
	inline void set_isOpen_1(bool value)
	{
		___isOpen_1 = value;
	}

	inline static int32_t get_offset_of_isEmptiable_2() { return static_cast<int32_t>(offsetof(ContentValidator_t2510151843, ___isEmptiable_2)); }
	inline bool get_isEmptiable_2() const { return ___isEmptiable_2; }
	inline bool* get_address_of_isEmptiable_2() { return &___isEmptiable_2; }
	inline void set_isEmptiable_2(bool value)
	{
		___isEmptiable_2 = value;
	}
};

struct ContentValidator_t2510151843_StaticFields
{
public:
	// System.Xml.Schema.ContentValidator System.Xml.Schema.ContentValidator::Empty
	ContentValidator_t2510151843 * ___Empty_3;
	// System.Xml.Schema.ContentValidator System.Xml.Schema.ContentValidator::TextOnly
	ContentValidator_t2510151843 * ___TextOnly_4;
	// System.Xml.Schema.ContentValidator System.Xml.Schema.ContentValidator::Mixed
	ContentValidator_t2510151843 * ___Mixed_5;
	// System.Xml.Schema.ContentValidator System.Xml.Schema.ContentValidator::Any
	ContentValidator_t2510151843 * ___Any_6;

public:
	inline static int32_t get_offset_of_Empty_3() { return static_cast<int32_t>(offsetof(ContentValidator_t2510151843_StaticFields, ___Empty_3)); }
	inline ContentValidator_t2510151843 * get_Empty_3() const { return ___Empty_3; }
	inline ContentValidator_t2510151843 ** get_address_of_Empty_3() { return &___Empty_3; }
	inline void set_Empty_3(ContentValidator_t2510151843 * value)
	{
		___Empty_3 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_3), value);
	}

	inline static int32_t get_offset_of_TextOnly_4() { return static_cast<int32_t>(offsetof(ContentValidator_t2510151843_StaticFields, ___TextOnly_4)); }
	inline ContentValidator_t2510151843 * get_TextOnly_4() const { return ___TextOnly_4; }
	inline ContentValidator_t2510151843 ** get_address_of_TextOnly_4() { return &___TextOnly_4; }
	inline void set_TextOnly_4(ContentValidator_t2510151843 * value)
	{
		___TextOnly_4 = value;
		Il2CppCodeGenWriteBarrier((&___TextOnly_4), value);
	}

	inline static int32_t get_offset_of_Mixed_5() { return static_cast<int32_t>(offsetof(ContentValidator_t2510151843_StaticFields, ___Mixed_5)); }
	inline ContentValidator_t2510151843 * get_Mixed_5() const { return ___Mixed_5; }
	inline ContentValidator_t2510151843 ** get_address_of_Mixed_5() { return &___Mixed_5; }
	inline void set_Mixed_5(ContentValidator_t2510151843 * value)
	{
		___Mixed_5 = value;
		Il2CppCodeGenWriteBarrier((&___Mixed_5), value);
	}

	inline static int32_t get_offset_of_Any_6() { return static_cast<int32_t>(offsetof(ContentValidator_t2510151843_StaticFields, ___Any_6)); }
	inline ContentValidator_t2510151843 * get_Any_6() const { return ___Any_6; }
	inline ContentValidator_t2510151843 ** get_address_of_Any_6() { return &___Any_6; }
	inline void set_Any_6(ContentValidator_t2510151843 * value)
	{
		___Any_6 = value;
		Il2CppCodeGenWriteBarrier((&___Any_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTVALIDATOR_T2510151843_H
#ifndef RESTRICTIONFACETS_T4012658256_H
#define RESTRICTIONFACETS_T4012658256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.RestrictionFacets
struct  RestrictionFacets_t4012658256  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Schema.RestrictionFacets::Length
	int32_t ___Length_0;
	// System.Int32 System.Xml.Schema.RestrictionFacets::MinLength
	int32_t ___MinLength_1;
	// System.Int32 System.Xml.Schema.RestrictionFacets::MaxLength
	int32_t ___MaxLength_2;
	// System.Collections.ArrayList System.Xml.Schema.RestrictionFacets::Patterns
	ArrayList_t4252133567 * ___Patterns_3;
	// System.Collections.ArrayList System.Xml.Schema.RestrictionFacets::Enumeration
	ArrayList_t4252133567 * ___Enumeration_4;
	// System.Xml.Schema.XmlSchemaWhiteSpace System.Xml.Schema.RestrictionFacets::WhiteSpace
	int32_t ___WhiteSpace_5;
	// System.Object System.Xml.Schema.RestrictionFacets::MaxInclusive
	RuntimeObject * ___MaxInclusive_6;
	// System.Object System.Xml.Schema.RestrictionFacets::MaxExclusive
	RuntimeObject * ___MaxExclusive_7;
	// System.Object System.Xml.Schema.RestrictionFacets::MinInclusive
	RuntimeObject * ___MinInclusive_8;
	// System.Object System.Xml.Schema.RestrictionFacets::MinExclusive
	RuntimeObject * ___MinExclusive_9;
	// System.Int32 System.Xml.Schema.RestrictionFacets::TotalDigits
	int32_t ___TotalDigits_10;
	// System.Int32 System.Xml.Schema.RestrictionFacets::FractionDigits
	int32_t ___FractionDigits_11;
	// System.Xml.Schema.RestrictionFlags System.Xml.Schema.RestrictionFacets::Flags
	int32_t ___Flags_12;
	// System.Xml.Schema.RestrictionFlags System.Xml.Schema.RestrictionFacets::FixedFlags
	int32_t ___FixedFlags_13;

public:
	inline static int32_t get_offset_of_Length_0() { return static_cast<int32_t>(offsetof(RestrictionFacets_t4012658256, ___Length_0)); }
	inline int32_t get_Length_0() const { return ___Length_0; }
	inline int32_t* get_address_of_Length_0() { return &___Length_0; }
	inline void set_Length_0(int32_t value)
	{
		___Length_0 = value;
	}

	inline static int32_t get_offset_of_MinLength_1() { return static_cast<int32_t>(offsetof(RestrictionFacets_t4012658256, ___MinLength_1)); }
	inline int32_t get_MinLength_1() const { return ___MinLength_1; }
	inline int32_t* get_address_of_MinLength_1() { return &___MinLength_1; }
	inline void set_MinLength_1(int32_t value)
	{
		___MinLength_1 = value;
	}

	inline static int32_t get_offset_of_MaxLength_2() { return static_cast<int32_t>(offsetof(RestrictionFacets_t4012658256, ___MaxLength_2)); }
	inline int32_t get_MaxLength_2() const { return ___MaxLength_2; }
	inline int32_t* get_address_of_MaxLength_2() { return &___MaxLength_2; }
	inline void set_MaxLength_2(int32_t value)
	{
		___MaxLength_2 = value;
	}

	inline static int32_t get_offset_of_Patterns_3() { return static_cast<int32_t>(offsetof(RestrictionFacets_t4012658256, ___Patterns_3)); }
	inline ArrayList_t4252133567 * get_Patterns_3() const { return ___Patterns_3; }
	inline ArrayList_t4252133567 ** get_address_of_Patterns_3() { return &___Patterns_3; }
	inline void set_Patterns_3(ArrayList_t4252133567 * value)
	{
		___Patterns_3 = value;
		Il2CppCodeGenWriteBarrier((&___Patterns_3), value);
	}

	inline static int32_t get_offset_of_Enumeration_4() { return static_cast<int32_t>(offsetof(RestrictionFacets_t4012658256, ___Enumeration_4)); }
	inline ArrayList_t4252133567 * get_Enumeration_4() const { return ___Enumeration_4; }
	inline ArrayList_t4252133567 ** get_address_of_Enumeration_4() { return &___Enumeration_4; }
	inline void set_Enumeration_4(ArrayList_t4252133567 * value)
	{
		___Enumeration_4 = value;
		Il2CppCodeGenWriteBarrier((&___Enumeration_4), value);
	}

	inline static int32_t get_offset_of_WhiteSpace_5() { return static_cast<int32_t>(offsetof(RestrictionFacets_t4012658256, ___WhiteSpace_5)); }
	inline int32_t get_WhiteSpace_5() const { return ___WhiteSpace_5; }
	inline int32_t* get_address_of_WhiteSpace_5() { return &___WhiteSpace_5; }
	inline void set_WhiteSpace_5(int32_t value)
	{
		___WhiteSpace_5 = value;
	}

	inline static int32_t get_offset_of_MaxInclusive_6() { return static_cast<int32_t>(offsetof(RestrictionFacets_t4012658256, ___MaxInclusive_6)); }
	inline RuntimeObject * get_MaxInclusive_6() const { return ___MaxInclusive_6; }
	inline RuntimeObject ** get_address_of_MaxInclusive_6() { return &___MaxInclusive_6; }
	inline void set_MaxInclusive_6(RuntimeObject * value)
	{
		___MaxInclusive_6 = value;
		Il2CppCodeGenWriteBarrier((&___MaxInclusive_6), value);
	}

	inline static int32_t get_offset_of_MaxExclusive_7() { return static_cast<int32_t>(offsetof(RestrictionFacets_t4012658256, ___MaxExclusive_7)); }
	inline RuntimeObject * get_MaxExclusive_7() const { return ___MaxExclusive_7; }
	inline RuntimeObject ** get_address_of_MaxExclusive_7() { return &___MaxExclusive_7; }
	inline void set_MaxExclusive_7(RuntimeObject * value)
	{
		___MaxExclusive_7 = value;
		Il2CppCodeGenWriteBarrier((&___MaxExclusive_7), value);
	}

	inline static int32_t get_offset_of_MinInclusive_8() { return static_cast<int32_t>(offsetof(RestrictionFacets_t4012658256, ___MinInclusive_8)); }
	inline RuntimeObject * get_MinInclusive_8() const { return ___MinInclusive_8; }
	inline RuntimeObject ** get_address_of_MinInclusive_8() { return &___MinInclusive_8; }
	inline void set_MinInclusive_8(RuntimeObject * value)
	{
		___MinInclusive_8 = value;
		Il2CppCodeGenWriteBarrier((&___MinInclusive_8), value);
	}

	inline static int32_t get_offset_of_MinExclusive_9() { return static_cast<int32_t>(offsetof(RestrictionFacets_t4012658256, ___MinExclusive_9)); }
	inline RuntimeObject * get_MinExclusive_9() const { return ___MinExclusive_9; }
	inline RuntimeObject ** get_address_of_MinExclusive_9() { return &___MinExclusive_9; }
	inline void set_MinExclusive_9(RuntimeObject * value)
	{
		___MinExclusive_9 = value;
		Il2CppCodeGenWriteBarrier((&___MinExclusive_9), value);
	}

	inline static int32_t get_offset_of_TotalDigits_10() { return static_cast<int32_t>(offsetof(RestrictionFacets_t4012658256, ___TotalDigits_10)); }
	inline int32_t get_TotalDigits_10() const { return ___TotalDigits_10; }
	inline int32_t* get_address_of_TotalDigits_10() { return &___TotalDigits_10; }
	inline void set_TotalDigits_10(int32_t value)
	{
		___TotalDigits_10 = value;
	}

	inline static int32_t get_offset_of_FractionDigits_11() { return static_cast<int32_t>(offsetof(RestrictionFacets_t4012658256, ___FractionDigits_11)); }
	inline int32_t get_FractionDigits_11() const { return ___FractionDigits_11; }
	inline int32_t* get_address_of_FractionDigits_11() { return &___FractionDigits_11; }
	inline void set_FractionDigits_11(int32_t value)
	{
		___FractionDigits_11 = value;
	}

	inline static int32_t get_offset_of_Flags_12() { return static_cast<int32_t>(offsetof(RestrictionFacets_t4012658256, ___Flags_12)); }
	inline int32_t get_Flags_12() const { return ___Flags_12; }
	inline int32_t* get_address_of_Flags_12() { return &___Flags_12; }
	inline void set_Flags_12(int32_t value)
	{
		___Flags_12 = value;
	}

	inline static int32_t get_offset_of_FixedFlags_13() { return static_cast<int32_t>(offsetof(RestrictionFacets_t4012658256, ___FixedFlags_13)); }
	inline int32_t get_FixedFlags_13() const { return ___FixedFlags_13; }
	inline int32_t* get_address_of_FixedFlags_13() { return &___FixedFlags_13; }
	inline void set_FixedFlags_13(int32_t value)
	{
		___FixedFlags_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESTRICTIONFACETS_T4012658256_H
#ifndef DATATYPEIMPLEMENTATION_T1152094268_H
#define DATATYPEIMPLEMENTATION_T1152094268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.DatatypeImplementation
struct  DatatypeImplementation_t1152094268  : public XmlSchemaDatatype_t1195946242
{
public:
	// System.Xml.Schema.XmlSchemaDatatypeVariety System.Xml.Schema.DatatypeImplementation::variety
	int32_t ___variety_0;
	// System.Xml.Schema.RestrictionFacets System.Xml.Schema.DatatypeImplementation::restriction
	RestrictionFacets_t4012658256 * ___restriction_1;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::baseType
	DatatypeImplementation_t1152094268 * ___baseType_2;
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.DatatypeImplementation::valueConverter
	XmlValueConverter_t68179724 * ___valueConverter_3;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.DatatypeImplementation::parentSchemaType
	XmlSchemaType_t1795078578 * ___parentSchemaType_4;

public:
	inline static int32_t get_offset_of_variety_0() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268, ___variety_0)); }
	inline int32_t get_variety_0() const { return ___variety_0; }
	inline int32_t* get_address_of_variety_0() { return &___variety_0; }
	inline void set_variety_0(int32_t value)
	{
		___variety_0 = value;
	}

	inline static int32_t get_offset_of_restriction_1() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268, ___restriction_1)); }
	inline RestrictionFacets_t4012658256 * get_restriction_1() const { return ___restriction_1; }
	inline RestrictionFacets_t4012658256 ** get_address_of_restriction_1() { return &___restriction_1; }
	inline void set_restriction_1(RestrictionFacets_t4012658256 * value)
	{
		___restriction_1 = value;
		Il2CppCodeGenWriteBarrier((&___restriction_1), value);
	}

	inline static int32_t get_offset_of_baseType_2() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268, ___baseType_2)); }
	inline DatatypeImplementation_t1152094268 * get_baseType_2() const { return ___baseType_2; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_baseType_2() { return &___baseType_2; }
	inline void set_baseType_2(DatatypeImplementation_t1152094268 * value)
	{
		___baseType_2 = value;
		Il2CppCodeGenWriteBarrier((&___baseType_2), value);
	}

	inline static int32_t get_offset_of_valueConverter_3() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268, ___valueConverter_3)); }
	inline XmlValueConverter_t68179724 * get_valueConverter_3() const { return ___valueConverter_3; }
	inline XmlValueConverter_t68179724 ** get_address_of_valueConverter_3() { return &___valueConverter_3; }
	inline void set_valueConverter_3(XmlValueConverter_t68179724 * value)
	{
		___valueConverter_3 = value;
		Il2CppCodeGenWriteBarrier((&___valueConverter_3), value);
	}

	inline static int32_t get_offset_of_parentSchemaType_4() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268, ___parentSchemaType_4)); }
	inline XmlSchemaType_t1795078578 * get_parentSchemaType_4() const { return ___parentSchemaType_4; }
	inline XmlSchemaType_t1795078578 ** get_address_of_parentSchemaType_4() { return &___parentSchemaType_4; }
	inline void set_parentSchemaType_4(XmlSchemaType_t1795078578 * value)
	{
		___parentSchemaType_4 = value;
		Il2CppCodeGenWriteBarrier((&___parentSchemaType_4), value);
	}
};

struct DatatypeImplementation_t1152094268_StaticFields
{
public:
	// System.Collections.Hashtable System.Xml.Schema.DatatypeImplementation::builtinTypes
	Hashtable_t909839986 * ___builtinTypes_5;
	// System.Xml.Schema.XmlSchemaSimpleType[] System.Xml.Schema.DatatypeImplementation::enumToTypeCode
	XmlSchemaSimpleTypeU5BU5D_t192177157* ___enumToTypeCode_6;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.DatatypeImplementation::anySimpleType
	XmlSchemaSimpleType_t248156492 * ___anySimpleType_7;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.DatatypeImplementation::anyAtomicType
	XmlSchemaSimpleType_t248156492 * ___anyAtomicType_8;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.DatatypeImplementation::untypedAtomicType
	XmlSchemaSimpleType_t248156492 * ___untypedAtomicType_9;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.DatatypeImplementation::yearMonthDurationType
	XmlSchemaSimpleType_t248156492 * ___yearMonthDurationType_10;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.DatatypeImplementation::dayTimeDurationType
	XmlSchemaSimpleType_t248156492 * ___dayTimeDurationType_11;
	// System.Xml.Schema.XmlSchemaSimpleType modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.Schema.DatatypeImplementation::normalizedStringTypeV1Compat
	XmlSchemaSimpleType_t248156492 * ___normalizedStringTypeV1Compat_12;
	// System.Xml.Schema.XmlSchemaSimpleType modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.Schema.DatatypeImplementation::tokenTypeV1Compat
	XmlSchemaSimpleType_t248156492 * ___tokenTypeV1Compat_13;
	// System.Xml.XmlQualifiedName System.Xml.Schema.DatatypeImplementation::QnAnySimpleType
	XmlQualifiedName_t1944712516 * ___QnAnySimpleType_14;
	// System.Xml.XmlQualifiedName System.Xml.Schema.DatatypeImplementation::QnAnyType
	XmlQualifiedName_t1944712516 * ___QnAnyType_15;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::stringFacetsChecker
	FacetsChecker_t1235574227 * ___stringFacetsChecker_16;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::miscFacetsChecker
	FacetsChecker_t1235574227 * ___miscFacetsChecker_17;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::numeric2FacetsChecker
	FacetsChecker_t1235574227 * ___numeric2FacetsChecker_18;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::binaryFacetsChecker
	FacetsChecker_t1235574227 * ___binaryFacetsChecker_19;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::dateTimeFacetsChecker
	FacetsChecker_t1235574227 * ___dateTimeFacetsChecker_20;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::durationFacetsChecker
	FacetsChecker_t1235574227 * ___durationFacetsChecker_21;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::listFacetsChecker
	FacetsChecker_t1235574227 * ___listFacetsChecker_22;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::qnameFacetsChecker
	FacetsChecker_t1235574227 * ___qnameFacetsChecker_23;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::unionFacetsChecker
	FacetsChecker_t1235574227 * ___unionFacetsChecker_24;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_anySimpleType
	DatatypeImplementation_t1152094268 * ___c_anySimpleType_25;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_anyURI
	DatatypeImplementation_t1152094268 * ___c_anyURI_26;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_base64Binary
	DatatypeImplementation_t1152094268 * ___c_base64Binary_27;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_boolean
	DatatypeImplementation_t1152094268 * ___c_boolean_28;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_byte
	DatatypeImplementation_t1152094268 * ___c_byte_29;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_char
	DatatypeImplementation_t1152094268 * ___c_char_30;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_date
	DatatypeImplementation_t1152094268 * ___c_date_31;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_dateTime
	DatatypeImplementation_t1152094268 * ___c_dateTime_32;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_dateTimeNoTz
	DatatypeImplementation_t1152094268 * ___c_dateTimeNoTz_33;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_dateTimeTz
	DatatypeImplementation_t1152094268 * ___c_dateTimeTz_34;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_day
	DatatypeImplementation_t1152094268 * ___c_day_35;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_decimal
	DatatypeImplementation_t1152094268 * ___c_decimal_36;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_double
	DatatypeImplementation_t1152094268 * ___c_double_37;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_doubleXdr
	DatatypeImplementation_t1152094268 * ___c_doubleXdr_38;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_duration
	DatatypeImplementation_t1152094268 * ___c_duration_39;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_ENTITY
	DatatypeImplementation_t1152094268 * ___c_ENTITY_40;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_ENTITIES
	DatatypeImplementation_t1152094268 * ___c_ENTITIES_41;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_ENUMERATION
	DatatypeImplementation_t1152094268 * ___c_ENUMERATION_42;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_fixed
	DatatypeImplementation_t1152094268 * ___c_fixed_43;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_float
	DatatypeImplementation_t1152094268 * ___c_float_44;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_floatXdr
	DatatypeImplementation_t1152094268 * ___c_floatXdr_45;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_hexBinary
	DatatypeImplementation_t1152094268 * ___c_hexBinary_46;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_ID
	DatatypeImplementation_t1152094268 * ___c_ID_47;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_IDREF
	DatatypeImplementation_t1152094268 * ___c_IDREF_48;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_IDREFS
	DatatypeImplementation_t1152094268 * ___c_IDREFS_49;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_int
	DatatypeImplementation_t1152094268 * ___c_int_50;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_integer
	DatatypeImplementation_t1152094268 * ___c_integer_51;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_language
	DatatypeImplementation_t1152094268 * ___c_language_52;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_long
	DatatypeImplementation_t1152094268 * ___c_long_53;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_month
	DatatypeImplementation_t1152094268 * ___c_month_54;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_monthDay
	DatatypeImplementation_t1152094268 * ___c_monthDay_55;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_Name
	DatatypeImplementation_t1152094268 * ___c_Name_56;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_NCName
	DatatypeImplementation_t1152094268 * ___c_NCName_57;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_negativeInteger
	DatatypeImplementation_t1152094268 * ___c_negativeInteger_58;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_NMTOKEN
	DatatypeImplementation_t1152094268 * ___c_NMTOKEN_59;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_NMTOKENS
	DatatypeImplementation_t1152094268 * ___c_NMTOKENS_60;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_nonNegativeInteger
	DatatypeImplementation_t1152094268 * ___c_nonNegativeInteger_61;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_nonPositiveInteger
	DatatypeImplementation_t1152094268 * ___c_nonPositiveInteger_62;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_normalizedString
	DatatypeImplementation_t1152094268 * ___c_normalizedString_63;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_NOTATION
	DatatypeImplementation_t1152094268 * ___c_NOTATION_64;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_positiveInteger
	DatatypeImplementation_t1152094268 * ___c_positiveInteger_65;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_QName
	DatatypeImplementation_t1152094268 * ___c_QName_66;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_QNameXdr
	DatatypeImplementation_t1152094268 * ___c_QNameXdr_67;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_short
	DatatypeImplementation_t1152094268 * ___c_short_68;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_string
	DatatypeImplementation_t1152094268 * ___c_string_69;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_time
	DatatypeImplementation_t1152094268 * ___c_time_70;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_timeNoTz
	DatatypeImplementation_t1152094268 * ___c_timeNoTz_71;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_timeTz
	DatatypeImplementation_t1152094268 * ___c_timeTz_72;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_token
	DatatypeImplementation_t1152094268 * ___c_token_73;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_unsignedByte
	DatatypeImplementation_t1152094268 * ___c_unsignedByte_74;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_unsignedInt
	DatatypeImplementation_t1152094268 * ___c_unsignedInt_75;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_unsignedLong
	DatatypeImplementation_t1152094268 * ___c_unsignedLong_76;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_unsignedShort
	DatatypeImplementation_t1152094268 * ___c_unsignedShort_77;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_uuid
	DatatypeImplementation_t1152094268 * ___c_uuid_78;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_year
	DatatypeImplementation_t1152094268 * ___c_year_79;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_yearMonth
	DatatypeImplementation_t1152094268 * ___c_yearMonth_80;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_normalizedStringV1Compat
	DatatypeImplementation_t1152094268 * ___c_normalizedStringV1Compat_81;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_tokenV1Compat
	DatatypeImplementation_t1152094268 * ___c_tokenV1Compat_82;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_anyAtomicType
	DatatypeImplementation_t1152094268 * ___c_anyAtomicType_83;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_dayTimeDuration
	DatatypeImplementation_t1152094268 * ___c_dayTimeDuration_84;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_untypedAtomicType
	DatatypeImplementation_t1152094268 * ___c_untypedAtomicType_85;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_yearMonthDuration
	DatatypeImplementation_t1152094268 * ___c_yearMonthDuration_86;
	// System.Xml.Schema.DatatypeImplementation[] System.Xml.Schema.DatatypeImplementation::c_tokenizedTypes
	DatatypeImplementationU5BU5D_t3131202389* ___c_tokenizedTypes_87;
	// System.Xml.Schema.DatatypeImplementation[] System.Xml.Schema.DatatypeImplementation::c_tokenizedTypesXsd
	DatatypeImplementationU5BU5D_t3131202389* ___c_tokenizedTypesXsd_88;
	// System.Xml.Schema.DatatypeImplementation/SchemaDatatypeMap[] System.Xml.Schema.DatatypeImplementation::c_XdrTypes
	SchemaDatatypeMapU5BU5D_t863562528* ___c_XdrTypes_89;
	// System.Xml.Schema.DatatypeImplementation/SchemaDatatypeMap[] System.Xml.Schema.DatatypeImplementation::c_XsdTypes
	SchemaDatatypeMapU5BU5D_t863562528* ___c_XsdTypes_90;

public:
	inline static int32_t get_offset_of_builtinTypes_5() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___builtinTypes_5)); }
	inline Hashtable_t909839986 * get_builtinTypes_5() const { return ___builtinTypes_5; }
	inline Hashtable_t909839986 ** get_address_of_builtinTypes_5() { return &___builtinTypes_5; }
	inline void set_builtinTypes_5(Hashtable_t909839986 * value)
	{
		___builtinTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___builtinTypes_5), value);
	}

	inline static int32_t get_offset_of_enumToTypeCode_6() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___enumToTypeCode_6)); }
	inline XmlSchemaSimpleTypeU5BU5D_t192177157* get_enumToTypeCode_6() const { return ___enumToTypeCode_6; }
	inline XmlSchemaSimpleTypeU5BU5D_t192177157** get_address_of_enumToTypeCode_6() { return &___enumToTypeCode_6; }
	inline void set_enumToTypeCode_6(XmlSchemaSimpleTypeU5BU5D_t192177157* value)
	{
		___enumToTypeCode_6 = value;
		Il2CppCodeGenWriteBarrier((&___enumToTypeCode_6), value);
	}

	inline static int32_t get_offset_of_anySimpleType_7() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___anySimpleType_7)); }
	inline XmlSchemaSimpleType_t248156492 * get_anySimpleType_7() const { return ___anySimpleType_7; }
	inline XmlSchemaSimpleType_t248156492 ** get_address_of_anySimpleType_7() { return &___anySimpleType_7; }
	inline void set_anySimpleType_7(XmlSchemaSimpleType_t248156492 * value)
	{
		___anySimpleType_7 = value;
		Il2CppCodeGenWriteBarrier((&___anySimpleType_7), value);
	}

	inline static int32_t get_offset_of_anyAtomicType_8() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___anyAtomicType_8)); }
	inline XmlSchemaSimpleType_t248156492 * get_anyAtomicType_8() const { return ___anyAtomicType_8; }
	inline XmlSchemaSimpleType_t248156492 ** get_address_of_anyAtomicType_8() { return &___anyAtomicType_8; }
	inline void set_anyAtomicType_8(XmlSchemaSimpleType_t248156492 * value)
	{
		___anyAtomicType_8 = value;
		Il2CppCodeGenWriteBarrier((&___anyAtomicType_8), value);
	}

	inline static int32_t get_offset_of_untypedAtomicType_9() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___untypedAtomicType_9)); }
	inline XmlSchemaSimpleType_t248156492 * get_untypedAtomicType_9() const { return ___untypedAtomicType_9; }
	inline XmlSchemaSimpleType_t248156492 ** get_address_of_untypedAtomicType_9() { return &___untypedAtomicType_9; }
	inline void set_untypedAtomicType_9(XmlSchemaSimpleType_t248156492 * value)
	{
		___untypedAtomicType_9 = value;
		Il2CppCodeGenWriteBarrier((&___untypedAtomicType_9), value);
	}

	inline static int32_t get_offset_of_yearMonthDurationType_10() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___yearMonthDurationType_10)); }
	inline XmlSchemaSimpleType_t248156492 * get_yearMonthDurationType_10() const { return ___yearMonthDurationType_10; }
	inline XmlSchemaSimpleType_t248156492 ** get_address_of_yearMonthDurationType_10() { return &___yearMonthDurationType_10; }
	inline void set_yearMonthDurationType_10(XmlSchemaSimpleType_t248156492 * value)
	{
		___yearMonthDurationType_10 = value;
		Il2CppCodeGenWriteBarrier((&___yearMonthDurationType_10), value);
	}

	inline static int32_t get_offset_of_dayTimeDurationType_11() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___dayTimeDurationType_11)); }
	inline XmlSchemaSimpleType_t248156492 * get_dayTimeDurationType_11() const { return ___dayTimeDurationType_11; }
	inline XmlSchemaSimpleType_t248156492 ** get_address_of_dayTimeDurationType_11() { return &___dayTimeDurationType_11; }
	inline void set_dayTimeDurationType_11(XmlSchemaSimpleType_t248156492 * value)
	{
		___dayTimeDurationType_11 = value;
		Il2CppCodeGenWriteBarrier((&___dayTimeDurationType_11), value);
	}

	inline static int32_t get_offset_of_normalizedStringTypeV1Compat_12() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___normalizedStringTypeV1Compat_12)); }
	inline XmlSchemaSimpleType_t248156492 * get_normalizedStringTypeV1Compat_12() const { return ___normalizedStringTypeV1Compat_12; }
	inline XmlSchemaSimpleType_t248156492 ** get_address_of_normalizedStringTypeV1Compat_12() { return &___normalizedStringTypeV1Compat_12; }
	inline void set_normalizedStringTypeV1Compat_12(XmlSchemaSimpleType_t248156492 * value)
	{
		___normalizedStringTypeV1Compat_12 = value;
		Il2CppCodeGenWriteBarrier((&___normalizedStringTypeV1Compat_12), value);
	}

	inline static int32_t get_offset_of_tokenTypeV1Compat_13() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___tokenTypeV1Compat_13)); }
	inline XmlSchemaSimpleType_t248156492 * get_tokenTypeV1Compat_13() const { return ___tokenTypeV1Compat_13; }
	inline XmlSchemaSimpleType_t248156492 ** get_address_of_tokenTypeV1Compat_13() { return &___tokenTypeV1Compat_13; }
	inline void set_tokenTypeV1Compat_13(XmlSchemaSimpleType_t248156492 * value)
	{
		___tokenTypeV1Compat_13 = value;
		Il2CppCodeGenWriteBarrier((&___tokenTypeV1Compat_13), value);
	}

	inline static int32_t get_offset_of_QnAnySimpleType_14() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___QnAnySimpleType_14)); }
	inline XmlQualifiedName_t1944712516 * get_QnAnySimpleType_14() const { return ___QnAnySimpleType_14; }
	inline XmlQualifiedName_t1944712516 ** get_address_of_QnAnySimpleType_14() { return &___QnAnySimpleType_14; }
	inline void set_QnAnySimpleType_14(XmlQualifiedName_t1944712516 * value)
	{
		___QnAnySimpleType_14 = value;
		Il2CppCodeGenWriteBarrier((&___QnAnySimpleType_14), value);
	}

	inline static int32_t get_offset_of_QnAnyType_15() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___QnAnyType_15)); }
	inline XmlQualifiedName_t1944712516 * get_QnAnyType_15() const { return ___QnAnyType_15; }
	inline XmlQualifiedName_t1944712516 ** get_address_of_QnAnyType_15() { return &___QnAnyType_15; }
	inline void set_QnAnyType_15(XmlQualifiedName_t1944712516 * value)
	{
		___QnAnyType_15 = value;
		Il2CppCodeGenWriteBarrier((&___QnAnyType_15), value);
	}

	inline static int32_t get_offset_of_stringFacetsChecker_16() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___stringFacetsChecker_16)); }
	inline FacetsChecker_t1235574227 * get_stringFacetsChecker_16() const { return ___stringFacetsChecker_16; }
	inline FacetsChecker_t1235574227 ** get_address_of_stringFacetsChecker_16() { return &___stringFacetsChecker_16; }
	inline void set_stringFacetsChecker_16(FacetsChecker_t1235574227 * value)
	{
		___stringFacetsChecker_16 = value;
		Il2CppCodeGenWriteBarrier((&___stringFacetsChecker_16), value);
	}

	inline static int32_t get_offset_of_miscFacetsChecker_17() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___miscFacetsChecker_17)); }
	inline FacetsChecker_t1235574227 * get_miscFacetsChecker_17() const { return ___miscFacetsChecker_17; }
	inline FacetsChecker_t1235574227 ** get_address_of_miscFacetsChecker_17() { return &___miscFacetsChecker_17; }
	inline void set_miscFacetsChecker_17(FacetsChecker_t1235574227 * value)
	{
		___miscFacetsChecker_17 = value;
		Il2CppCodeGenWriteBarrier((&___miscFacetsChecker_17), value);
	}

	inline static int32_t get_offset_of_numeric2FacetsChecker_18() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___numeric2FacetsChecker_18)); }
	inline FacetsChecker_t1235574227 * get_numeric2FacetsChecker_18() const { return ___numeric2FacetsChecker_18; }
	inline FacetsChecker_t1235574227 ** get_address_of_numeric2FacetsChecker_18() { return &___numeric2FacetsChecker_18; }
	inline void set_numeric2FacetsChecker_18(FacetsChecker_t1235574227 * value)
	{
		___numeric2FacetsChecker_18 = value;
		Il2CppCodeGenWriteBarrier((&___numeric2FacetsChecker_18), value);
	}

	inline static int32_t get_offset_of_binaryFacetsChecker_19() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___binaryFacetsChecker_19)); }
	inline FacetsChecker_t1235574227 * get_binaryFacetsChecker_19() const { return ___binaryFacetsChecker_19; }
	inline FacetsChecker_t1235574227 ** get_address_of_binaryFacetsChecker_19() { return &___binaryFacetsChecker_19; }
	inline void set_binaryFacetsChecker_19(FacetsChecker_t1235574227 * value)
	{
		___binaryFacetsChecker_19 = value;
		Il2CppCodeGenWriteBarrier((&___binaryFacetsChecker_19), value);
	}

	inline static int32_t get_offset_of_dateTimeFacetsChecker_20() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___dateTimeFacetsChecker_20)); }
	inline FacetsChecker_t1235574227 * get_dateTimeFacetsChecker_20() const { return ___dateTimeFacetsChecker_20; }
	inline FacetsChecker_t1235574227 ** get_address_of_dateTimeFacetsChecker_20() { return &___dateTimeFacetsChecker_20; }
	inline void set_dateTimeFacetsChecker_20(FacetsChecker_t1235574227 * value)
	{
		___dateTimeFacetsChecker_20 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeFacetsChecker_20), value);
	}

	inline static int32_t get_offset_of_durationFacetsChecker_21() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___durationFacetsChecker_21)); }
	inline FacetsChecker_t1235574227 * get_durationFacetsChecker_21() const { return ___durationFacetsChecker_21; }
	inline FacetsChecker_t1235574227 ** get_address_of_durationFacetsChecker_21() { return &___durationFacetsChecker_21; }
	inline void set_durationFacetsChecker_21(FacetsChecker_t1235574227 * value)
	{
		___durationFacetsChecker_21 = value;
		Il2CppCodeGenWriteBarrier((&___durationFacetsChecker_21), value);
	}

	inline static int32_t get_offset_of_listFacetsChecker_22() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___listFacetsChecker_22)); }
	inline FacetsChecker_t1235574227 * get_listFacetsChecker_22() const { return ___listFacetsChecker_22; }
	inline FacetsChecker_t1235574227 ** get_address_of_listFacetsChecker_22() { return &___listFacetsChecker_22; }
	inline void set_listFacetsChecker_22(FacetsChecker_t1235574227 * value)
	{
		___listFacetsChecker_22 = value;
		Il2CppCodeGenWriteBarrier((&___listFacetsChecker_22), value);
	}

	inline static int32_t get_offset_of_qnameFacetsChecker_23() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___qnameFacetsChecker_23)); }
	inline FacetsChecker_t1235574227 * get_qnameFacetsChecker_23() const { return ___qnameFacetsChecker_23; }
	inline FacetsChecker_t1235574227 ** get_address_of_qnameFacetsChecker_23() { return &___qnameFacetsChecker_23; }
	inline void set_qnameFacetsChecker_23(FacetsChecker_t1235574227 * value)
	{
		___qnameFacetsChecker_23 = value;
		Il2CppCodeGenWriteBarrier((&___qnameFacetsChecker_23), value);
	}

	inline static int32_t get_offset_of_unionFacetsChecker_24() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___unionFacetsChecker_24)); }
	inline FacetsChecker_t1235574227 * get_unionFacetsChecker_24() const { return ___unionFacetsChecker_24; }
	inline FacetsChecker_t1235574227 ** get_address_of_unionFacetsChecker_24() { return &___unionFacetsChecker_24; }
	inline void set_unionFacetsChecker_24(FacetsChecker_t1235574227 * value)
	{
		___unionFacetsChecker_24 = value;
		Il2CppCodeGenWriteBarrier((&___unionFacetsChecker_24), value);
	}

	inline static int32_t get_offset_of_c_anySimpleType_25() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_anySimpleType_25)); }
	inline DatatypeImplementation_t1152094268 * get_c_anySimpleType_25() const { return ___c_anySimpleType_25; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_anySimpleType_25() { return &___c_anySimpleType_25; }
	inline void set_c_anySimpleType_25(DatatypeImplementation_t1152094268 * value)
	{
		___c_anySimpleType_25 = value;
		Il2CppCodeGenWriteBarrier((&___c_anySimpleType_25), value);
	}

	inline static int32_t get_offset_of_c_anyURI_26() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_anyURI_26)); }
	inline DatatypeImplementation_t1152094268 * get_c_anyURI_26() const { return ___c_anyURI_26; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_anyURI_26() { return &___c_anyURI_26; }
	inline void set_c_anyURI_26(DatatypeImplementation_t1152094268 * value)
	{
		___c_anyURI_26 = value;
		Il2CppCodeGenWriteBarrier((&___c_anyURI_26), value);
	}

	inline static int32_t get_offset_of_c_base64Binary_27() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_base64Binary_27)); }
	inline DatatypeImplementation_t1152094268 * get_c_base64Binary_27() const { return ___c_base64Binary_27; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_base64Binary_27() { return &___c_base64Binary_27; }
	inline void set_c_base64Binary_27(DatatypeImplementation_t1152094268 * value)
	{
		___c_base64Binary_27 = value;
		Il2CppCodeGenWriteBarrier((&___c_base64Binary_27), value);
	}

	inline static int32_t get_offset_of_c_boolean_28() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_boolean_28)); }
	inline DatatypeImplementation_t1152094268 * get_c_boolean_28() const { return ___c_boolean_28; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_boolean_28() { return &___c_boolean_28; }
	inline void set_c_boolean_28(DatatypeImplementation_t1152094268 * value)
	{
		___c_boolean_28 = value;
		Il2CppCodeGenWriteBarrier((&___c_boolean_28), value);
	}

	inline static int32_t get_offset_of_c_byte_29() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_byte_29)); }
	inline DatatypeImplementation_t1152094268 * get_c_byte_29() const { return ___c_byte_29; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_byte_29() { return &___c_byte_29; }
	inline void set_c_byte_29(DatatypeImplementation_t1152094268 * value)
	{
		___c_byte_29 = value;
		Il2CppCodeGenWriteBarrier((&___c_byte_29), value);
	}

	inline static int32_t get_offset_of_c_char_30() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_char_30)); }
	inline DatatypeImplementation_t1152094268 * get_c_char_30() const { return ___c_char_30; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_char_30() { return &___c_char_30; }
	inline void set_c_char_30(DatatypeImplementation_t1152094268 * value)
	{
		___c_char_30 = value;
		Il2CppCodeGenWriteBarrier((&___c_char_30), value);
	}

	inline static int32_t get_offset_of_c_date_31() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_date_31)); }
	inline DatatypeImplementation_t1152094268 * get_c_date_31() const { return ___c_date_31; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_date_31() { return &___c_date_31; }
	inline void set_c_date_31(DatatypeImplementation_t1152094268 * value)
	{
		___c_date_31 = value;
		Il2CppCodeGenWriteBarrier((&___c_date_31), value);
	}

	inline static int32_t get_offset_of_c_dateTime_32() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_dateTime_32)); }
	inline DatatypeImplementation_t1152094268 * get_c_dateTime_32() const { return ___c_dateTime_32; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_dateTime_32() { return &___c_dateTime_32; }
	inline void set_c_dateTime_32(DatatypeImplementation_t1152094268 * value)
	{
		___c_dateTime_32 = value;
		Il2CppCodeGenWriteBarrier((&___c_dateTime_32), value);
	}

	inline static int32_t get_offset_of_c_dateTimeNoTz_33() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_dateTimeNoTz_33)); }
	inline DatatypeImplementation_t1152094268 * get_c_dateTimeNoTz_33() const { return ___c_dateTimeNoTz_33; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_dateTimeNoTz_33() { return &___c_dateTimeNoTz_33; }
	inline void set_c_dateTimeNoTz_33(DatatypeImplementation_t1152094268 * value)
	{
		___c_dateTimeNoTz_33 = value;
		Il2CppCodeGenWriteBarrier((&___c_dateTimeNoTz_33), value);
	}

	inline static int32_t get_offset_of_c_dateTimeTz_34() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_dateTimeTz_34)); }
	inline DatatypeImplementation_t1152094268 * get_c_dateTimeTz_34() const { return ___c_dateTimeTz_34; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_dateTimeTz_34() { return &___c_dateTimeTz_34; }
	inline void set_c_dateTimeTz_34(DatatypeImplementation_t1152094268 * value)
	{
		___c_dateTimeTz_34 = value;
		Il2CppCodeGenWriteBarrier((&___c_dateTimeTz_34), value);
	}

	inline static int32_t get_offset_of_c_day_35() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_day_35)); }
	inline DatatypeImplementation_t1152094268 * get_c_day_35() const { return ___c_day_35; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_day_35() { return &___c_day_35; }
	inline void set_c_day_35(DatatypeImplementation_t1152094268 * value)
	{
		___c_day_35 = value;
		Il2CppCodeGenWriteBarrier((&___c_day_35), value);
	}

	inline static int32_t get_offset_of_c_decimal_36() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_decimal_36)); }
	inline DatatypeImplementation_t1152094268 * get_c_decimal_36() const { return ___c_decimal_36; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_decimal_36() { return &___c_decimal_36; }
	inline void set_c_decimal_36(DatatypeImplementation_t1152094268 * value)
	{
		___c_decimal_36 = value;
		Il2CppCodeGenWriteBarrier((&___c_decimal_36), value);
	}

	inline static int32_t get_offset_of_c_double_37() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_double_37)); }
	inline DatatypeImplementation_t1152094268 * get_c_double_37() const { return ___c_double_37; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_double_37() { return &___c_double_37; }
	inline void set_c_double_37(DatatypeImplementation_t1152094268 * value)
	{
		___c_double_37 = value;
		Il2CppCodeGenWriteBarrier((&___c_double_37), value);
	}

	inline static int32_t get_offset_of_c_doubleXdr_38() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_doubleXdr_38)); }
	inline DatatypeImplementation_t1152094268 * get_c_doubleXdr_38() const { return ___c_doubleXdr_38; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_doubleXdr_38() { return &___c_doubleXdr_38; }
	inline void set_c_doubleXdr_38(DatatypeImplementation_t1152094268 * value)
	{
		___c_doubleXdr_38 = value;
		Il2CppCodeGenWriteBarrier((&___c_doubleXdr_38), value);
	}

	inline static int32_t get_offset_of_c_duration_39() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_duration_39)); }
	inline DatatypeImplementation_t1152094268 * get_c_duration_39() const { return ___c_duration_39; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_duration_39() { return &___c_duration_39; }
	inline void set_c_duration_39(DatatypeImplementation_t1152094268 * value)
	{
		___c_duration_39 = value;
		Il2CppCodeGenWriteBarrier((&___c_duration_39), value);
	}

	inline static int32_t get_offset_of_c_ENTITY_40() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_ENTITY_40)); }
	inline DatatypeImplementation_t1152094268 * get_c_ENTITY_40() const { return ___c_ENTITY_40; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_ENTITY_40() { return &___c_ENTITY_40; }
	inline void set_c_ENTITY_40(DatatypeImplementation_t1152094268 * value)
	{
		___c_ENTITY_40 = value;
		Il2CppCodeGenWriteBarrier((&___c_ENTITY_40), value);
	}

	inline static int32_t get_offset_of_c_ENTITIES_41() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_ENTITIES_41)); }
	inline DatatypeImplementation_t1152094268 * get_c_ENTITIES_41() const { return ___c_ENTITIES_41; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_ENTITIES_41() { return &___c_ENTITIES_41; }
	inline void set_c_ENTITIES_41(DatatypeImplementation_t1152094268 * value)
	{
		___c_ENTITIES_41 = value;
		Il2CppCodeGenWriteBarrier((&___c_ENTITIES_41), value);
	}

	inline static int32_t get_offset_of_c_ENUMERATION_42() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_ENUMERATION_42)); }
	inline DatatypeImplementation_t1152094268 * get_c_ENUMERATION_42() const { return ___c_ENUMERATION_42; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_ENUMERATION_42() { return &___c_ENUMERATION_42; }
	inline void set_c_ENUMERATION_42(DatatypeImplementation_t1152094268 * value)
	{
		___c_ENUMERATION_42 = value;
		Il2CppCodeGenWriteBarrier((&___c_ENUMERATION_42), value);
	}

	inline static int32_t get_offset_of_c_fixed_43() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_fixed_43)); }
	inline DatatypeImplementation_t1152094268 * get_c_fixed_43() const { return ___c_fixed_43; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_fixed_43() { return &___c_fixed_43; }
	inline void set_c_fixed_43(DatatypeImplementation_t1152094268 * value)
	{
		___c_fixed_43 = value;
		Il2CppCodeGenWriteBarrier((&___c_fixed_43), value);
	}

	inline static int32_t get_offset_of_c_float_44() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_float_44)); }
	inline DatatypeImplementation_t1152094268 * get_c_float_44() const { return ___c_float_44; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_float_44() { return &___c_float_44; }
	inline void set_c_float_44(DatatypeImplementation_t1152094268 * value)
	{
		___c_float_44 = value;
		Il2CppCodeGenWriteBarrier((&___c_float_44), value);
	}

	inline static int32_t get_offset_of_c_floatXdr_45() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_floatXdr_45)); }
	inline DatatypeImplementation_t1152094268 * get_c_floatXdr_45() const { return ___c_floatXdr_45; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_floatXdr_45() { return &___c_floatXdr_45; }
	inline void set_c_floatXdr_45(DatatypeImplementation_t1152094268 * value)
	{
		___c_floatXdr_45 = value;
		Il2CppCodeGenWriteBarrier((&___c_floatXdr_45), value);
	}

	inline static int32_t get_offset_of_c_hexBinary_46() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_hexBinary_46)); }
	inline DatatypeImplementation_t1152094268 * get_c_hexBinary_46() const { return ___c_hexBinary_46; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_hexBinary_46() { return &___c_hexBinary_46; }
	inline void set_c_hexBinary_46(DatatypeImplementation_t1152094268 * value)
	{
		___c_hexBinary_46 = value;
		Il2CppCodeGenWriteBarrier((&___c_hexBinary_46), value);
	}

	inline static int32_t get_offset_of_c_ID_47() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_ID_47)); }
	inline DatatypeImplementation_t1152094268 * get_c_ID_47() const { return ___c_ID_47; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_ID_47() { return &___c_ID_47; }
	inline void set_c_ID_47(DatatypeImplementation_t1152094268 * value)
	{
		___c_ID_47 = value;
		Il2CppCodeGenWriteBarrier((&___c_ID_47), value);
	}

	inline static int32_t get_offset_of_c_IDREF_48() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_IDREF_48)); }
	inline DatatypeImplementation_t1152094268 * get_c_IDREF_48() const { return ___c_IDREF_48; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_IDREF_48() { return &___c_IDREF_48; }
	inline void set_c_IDREF_48(DatatypeImplementation_t1152094268 * value)
	{
		___c_IDREF_48 = value;
		Il2CppCodeGenWriteBarrier((&___c_IDREF_48), value);
	}

	inline static int32_t get_offset_of_c_IDREFS_49() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_IDREFS_49)); }
	inline DatatypeImplementation_t1152094268 * get_c_IDREFS_49() const { return ___c_IDREFS_49; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_IDREFS_49() { return &___c_IDREFS_49; }
	inline void set_c_IDREFS_49(DatatypeImplementation_t1152094268 * value)
	{
		___c_IDREFS_49 = value;
		Il2CppCodeGenWriteBarrier((&___c_IDREFS_49), value);
	}

	inline static int32_t get_offset_of_c_int_50() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_int_50)); }
	inline DatatypeImplementation_t1152094268 * get_c_int_50() const { return ___c_int_50; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_int_50() { return &___c_int_50; }
	inline void set_c_int_50(DatatypeImplementation_t1152094268 * value)
	{
		___c_int_50 = value;
		Il2CppCodeGenWriteBarrier((&___c_int_50), value);
	}

	inline static int32_t get_offset_of_c_integer_51() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_integer_51)); }
	inline DatatypeImplementation_t1152094268 * get_c_integer_51() const { return ___c_integer_51; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_integer_51() { return &___c_integer_51; }
	inline void set_c_integer_51(DatatypeImplementation_t1152094268 * value)
	{
		___c_integer_51 = value;
		Il2CppCodeGenWriteBarrier((&___c_integer_51), value);
	}

	inline static int32_t get_offset_of_c_language_52() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_language_52)); }
	inline DatatypeImplementation_t1152094268 * get_c_language_52() const { return ___c_language_52; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_language_52() { return &___c_language_52; }
	inline void set_c_language_52(DatatypeImplementation_t1152094268 * value)
	{
		___c_language_52 = value;
		Il2CppCodeGenWriteBarrier((&___c_language_52), value);
	}

	inline static int32_t get_offset_of_c_long_53() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_long_53)); }
	inline DatatypeImplementation_t1152094268 * get_c_long_53() const { return ___c_long_53; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_long_53() { return &___c_long_53; }
	inline void set_c_long_53(DatatypeImplementation_t1152094268 * value)
	{
		___c_long_53 = value;
		Il2CppCodeGenWriteBarrier((&___c_long_53), value);
	}

	inline static int32_t get_offset_of_c_month_54() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_month_54)); }
	inline DatatypeImplementation_t1152094268 * get_c_month_54() const { return ___c_month_54; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_month_54() { return &___c_month_54; }
	inline void set_c_month_54(DatatypeImplementation_t1152094268 * value)
	{
		___c_month_54 = value;
		Il2CppCodeGenWriteBarrier((&___c_month_54), value);
	}

	inline static int32_t get_offset_of_c_monthDay_55() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_monthDay_55)); }
	inline DatatypeImplementation_t1152094268 * get_c_monthDay_55() const { return ___c_monthDay_55; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_monthDay_55() { return &___c_monthDay_55; }
	inline void set_c_monthDay_55(DatatypeImplementation_t1152094268 * value)
	{
		___c_monthDay_55 = value;
		Il2CppCodeGenWriteBarrier((&___c_monthDay_55), value);
	}

	inline static int32_t get_offset_of_c_Name_56() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_Name_56)); }
	inline DatatypeImplementation_t1152094268 * get_c_Name_56() const { return ___c_Name_56; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_Name_56() { return &___c_Name_56; }
	inline void set_c_Name_56(DatatypeImplementation_t1152094268 * value)
	{
		___c_Name_56 = value;
		Il2CppCodeGenWriteBarrier((&___c_Name_56), value);
	}

	inline static int32_t get_offset_of_c_NCName_57() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_NCName_57)); }
	inline DatatypeImplementation_t1152094268 * get_c_NCName_57() const { return ___c_NCName_57; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_NCName_57() { return &___c_NCName_57; }
	inline void set_c_NCName_57(DatatypeImplementation_t1152094268 * value)
	{
		___c_NCName_57 = value;
		Il2CppCodeGenWriteBarrier((&___c_NCName_57), value);
	}

	inline static int32_t get_offset_of_c_negativeInteger_58() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_negativeInteger_58)); }
	inline DatatypeImplementation_t1152094268 * get_c_negativeInteger_58() const { return ___c_negativeInteger_58; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_negativeInteger_58() { return &___c_negativeInteger_58; }
	inline void set_c_negativeInteger_58(DatatypeImplementation_t1152094268 * value)
	{
		___c_negativeInteger_58 = value;
		Il2CppCodeGenWriteBarrier((&___c_negativeInteger_58), value);
	}

	inline static int32_t get_offset_of_c_NMTOKEN_59() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_NMTOKEN_59)); }
	inline DatatypeImplementation_t1152094268 * get_c_NMTOKEN_59() const { return ___c_NMTOKEN_59; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_NMTOKEN_59() { return &___c_NMTOKEN_59; }
	inline void set_c_NMTOKEN_59(DatatypeImplementation_t1152094268 * value)
	{
		___c_NMTOKEN_59 = value;
		Il2CppCodeGenWriteBarrier((&___c_NMTOKEN_59), value);
	}

	inline static int32_t get_offset_of_c_NMTOKENS_60() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_NMTOKENS_60)); }
	inline DatatypeImplementation_t1152094268 * get_c_NMTOKENS_60() const { return ___c_NMTOKENS_60; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_NMTOKENS_60() { return &___c_NMTOKENS_60; }
	inline void set_c_NMTOKENS_60(DatatypeImplementation_t1152094268 * value)
	{
		___c_NMTOKENS_60 = value;
		Il2CppCodeGenWriteBarrier((&___c_NMTOKENS_60), value);
	}

	inline static int32_t get_offset_of_c_nonNegativeInteger_61() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_nonNegativeInteger_61)); }
	inline DatatypeImplementation_t1152094268 * get_c_nonNegativeInteger_61() const { return ___c_nonNegativeInteger_61; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_nonNegativeInteger_61() { return &___c_nonNegativeInteger_61; }
	inline void set_c_nonNegativeInteger_61(DatatypeImplementation_t1152094268 * value)
	{
		___c_nonNegativeInteger_61 = value;
		Il2CppCodeGenWriteBarrier((&___c_nonNegativeInteger_61), value);
	}

	inline static int32_t get_offset_of_c_nonPositiveInteger_62() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_nonPositiveInteger_62)); }
	inline DatatypeImplementation_t1152094268 * get_c_nonPositiveInteger_62() const { return ___c_nonPositiveInteger_62; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_nonPositiveInteger_62() { return &___c_nonPositiveInteger_62; }
	inline void set_c_nonPositiveInteger_62(DatatypeImplementation_t1152094268 * value)
	{
		___c_nonPositiveInteger_62 = value;
		Il2CppCodeGenWriteBarrier((&___c_nonPositiveInteger_62), value);
	}

	inline static int32_t get_offset_of_c_normalizedString_63() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_normalizedString_63)); }
	inline DatatypeImplementation_t1152094268 * get_c_normalizedString_63() const { return ___c_normalizedString_63; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_normalizedString_63() { return &___c_normalizedString_63; }
	inline void set_c_normalizedString_63(DatatypeImplementation_t1152094268 * value)
	{
		___c_normalizedString_63 = value;
		Il2CppCodeGenWriteBarrier((&___c_normalizedString_63), value);
	}

	inline static int32_t get_offset_of_c_NOTATION_64() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_NOTATION_64)); }
	inline DatatypeImplementation_t1152094268 * get_c_NOTATION_64() const { return ___c_NOTATION_64; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_NOTATION_64() { return &___c_NOTATION_64; }
	inline void set_c_NOTATION_64(DatatypeImplementation_t1152094268 * value)
	{
		___c_NOTATION_64 = value;
		Il2CppCodeGenWriteBarrier((&___c_NOTATION_64), value);
	}

	inline static int32_t get_offset_of_c_positiveInteger_65() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_positiveInteger_65)); }
	inline DatatypeImplementation_t1152094268 * get_c_positiveInteger_65() const { return ___c_positiveInteger_65; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_positiveInteger_65() { return &___c_positiveInteger_65; }
	inline void set_c_positiveInteger_65(DatatypeImplementation_t1152094268 * value)
	{
		___c_positiveInteger_65 = value;
		Il2CppCodeGenWriteBarrier((&___c_positiveInteger_65), value);
	}

	inline static int32_t get_offset_of_c_QName_66() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_QName_66)); }
	inline DatatypeImplementation_t1152094268 * get_c_QName_66() const { return ___c_QName_66; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_QName_66() { return &___c_QName_66; }
	inline void set_c_QName_66(DatatypeImplementation_t1152094268 * value)
	{
		___c_QName_66 = value;
		Il2CppCodeGenWriteBarrier((&___c_QName_66), value);
	}

	inline static int32_t get_offset_of_c_QNameXdr_67() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_QNameXdr_67)); }
	inline DatatypeImplementation_t1152094268 * get_c_QNameXdr_67() const { return ___c_QNameXdr_67; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_QNameXdr_67() { return &___c_QNameXdr_67; }
	inline void set_c_QNameXdr_67(DatatypeImplementation_t1152094268 * value)
	{
		___c_QNameXdr_67 = value;
		Il2CppCodeGenWriteBarrier((&___c_QNameXdr_67), value);
	}

	inline static int32_t get_offset_of_c_short_68() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_short_68)); }
	inline DatatypeImplementation_t1152094268 * get_c_short_68() const { return ___c_short_68; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_short_68() { return &___c_short_68; }
	inline void set_c_short_68(DatatypeImplementation_t1152094268 * value)
	{
		___c_short_68 = value;
		Il2CppCodeGenWriteBarrier((&___c_short_68), value);
	}

	inline static int32_t get_offset_of_c_string_69() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_string_69)); }
	inline DatatypeImplementation_t1152094268 * get_c_string_69() const { return ___c_string_69; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_string_69() { return &___c_string_69; }
	inline void set_c_string_69(DatatypeImplementation_t1152094268 * value)
	{
		___c_string_69 = value;
		Il2CppCodeGenWriteBarrier((&___c_string_69), value);
	}

	inline static int32_t get_offset_of_c_time_70() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_time_70)); }
	inline DatatypeImplementation_t1152094268 * get_c_time_70() const { return ___c_time_70; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_time_70() { return &___c_time_70; }
	inline void set_c_time_70(DatatypeImplementation_t1152094268 * value)
	{
		___c_time_70 = value;
		Il2CppCodeGenWriteBarrier((&___c_time_70), value);
	}

	inline static int32_t get_offset_of_c_timeNoTz_71() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_timeNoTz_71)); }
	inline DatatypeImplementation_t1152094268 * get_c_timeNoTz_71() const { return ___c_timeNoTz_71; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_timeNoTz_71() { return &___c_timeNoTz_71; }
	inline void set_c_timeNoTz_71(DatatypeImplementation_t1152094268 * value)
	{
		___c_timeNoTz_71 = value;
		Il2CppCodeGenWriteBarrier((&___c_timeNoTz_71), value);
	}

	inline static int32_t get_offset_of_c_timeTz_72() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_timeTz_72)); }
	inline DatatypeImplementation_t1152094268 * get_c_timeTz_72() const { return ___c_timeTz_72; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_timeTz_72() { return &___c_timeTz_72; }
	inline void set_c_timeTz_72(DatatypeImplementation_t1152094268 * value)
	{
		___c_timeTz_72 = value;
		Il2CppCodeGenWriteBarrier((&___c_timeTz_72), value);
	}

	inline static int32_t get_offset_of_c_token_73() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_token_73)); }
	inline DatatypeImplementation_t1152094268 * get_c_token_73() const { return ___c_token_73; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_token_73() { return &___c_token_73; }
	inline void set_c_token_73(DatatypeImplementation_t1152094268 * value)
	{
		___c_token_73 = value;
		Il2CppCodeGenWriteBarrier((&___c_token_73), value);
	}

	inline static int32_t get_offset_of_c_unsignedByte_74() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_unsignedByte_74)); }
	inline DatatypeImplementation_t1152094268 * get_c_unsignedByte_74() const { return ___c_unsignedByte_74; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_unsignedByte_74() { return &___c_unsignedByte_74; }
	inline void set_c_unsignedByte_74(DatatypeImplementation_t1152094268 * value)
	{
		___c_unsignedByte_74 = value;
		Il2CppCodeGenWriteBarrier((&___c_unsignedByte_74), value);
	}

	inline static int32_t get_offset_of_c_unsignedInt_75() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_unsignedInt_75)); }
	inline DatatypeImplementation_t1152094268 * get_c_unsignedInt_75() const { return ___c_unsignedInt_75; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_unsignedInt_75() { return &___c_unsignedInt_75; }
	inline void set_c_unsignedInt_75(DatatypeImplementation_t1152094268 * value)
	{
		___c_unsignedInt_75 = value;
		Il2CppCodeGenWriteBarrier((&___c_unsignedInt_75), value);
	}

	inline static int32_t get_offset_of_c_unsignedLong_76() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_unsignedLong_76)); }
	inline DatatypeImplementation_t1152094268 * get_c_unsignedLong_76() const { return ___c_unsignedLong_76; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_unsignedLong_76() { return &___c_unsignedLong_76; }
	inline void set_c_unsignedLong_76(DatatypeImplementation_t1152094268 * value)
	{
		___c_unsignedLong_76 = value;
		Il2CppCodeGenWriteBarrier((&___c_unsignedLong_76), value);
	}

	inline static int32_t get_offset_of_c_unsignedShort_77() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_unsignedShort_77)); }
	inline DatatypeImplementation_t1152094268 * get_c_unsignedShort_77() const { return ___c_unsignedShort_77; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_unsignedShort_77() { return &___c_unsignedShort_77; }
	inline void set_c_unsignedShort_77(DatatypeImplementation_t1152094268 * value)
	{
		___c_unsignedShort_77 = value;
		Il2CppCodeGenWriteBarrier((&___c_unsignedShort_77), value);
	}

	inline static int32_t get_offset_of_c_uuid_78() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_uuid_78)); }
	inline DatatypeImplementation_t1152094268 * get_c_uuid_78() const { return ___c_uuid_78; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_uuid_78() { return &___c_uuid_78; }
	inline void set_c_uuid_78(DatatypeImplementation_t1152094268 * value)
	{
		___c_uuid_78 = value;
		Il2CppCodeGenWriteBarrier((&___c_uuid_78), value);
	}

	inline static int32_t get_offset_of_c_year_79() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_year_79)); }
	inline DatatypeImplementation_t1152094268 * get_c_year_79() const { return ___c_year_79; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_year_79() { return &___c_year_79; }
	inline void set_c_year_79(DatatypeImplementation_t1152094268 * value)
	{
		___c_year_79 = value;
		Il2CppCodeGenWriteBarrier((&___c_year_79), value);
	}

	inline static int32_t get_offset_of_c_yearMonth_80() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_yearMonth_80)); }
	inline DatatypeImplementation_t1152094268 * get_c_yearMonth_80() const { return ___c_yearMonth_80; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_yearMonth_80() { return &___c_yearMonth_80; }
	inline void set_c_yearMonth_80(DatatypeImplementation_t1152094268 * value)
	{
		___c_yearMonth_80 = value;
		Il2CppCodeGenWriteBarrier((&___c_yearMonth_80), value);
	}

	inline static int32_t get_offset_of_c_normalizedStringV1Compat_81() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_normalizedStringV1Compat_81)); }
	inline DatatypeImplementation_t1152094268 * get_c_normalizedStringV1Compat_81() const { return ___c_normalizedStringV1Compat_81; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_normalizedStringV1Compat_81() { return &___c_normalizedStringV1Compat_81; }
	inline void set_c_normalizedStringV1Compat_81(DatatypeImplementation_t1152094268 * value)
	{
		___c_normalizedStringV1Compat_81 = value;
		Il2CppCodeGenWriteBarrier((&___c_normalizedStringV1Compat_81), value);
	}

	inline static int32_t get_offset_of_c_tokenV1Compat_82() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_tokenV1Compat_82)); }
	inline DatatypeImplementation_t1152094268 * get_c_tokenV1Compat_82() const { return ___c_tokenV1Compat_82; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_tokenV1Compat_82() { return &___c_tokenV1Compat_82; }
	inline void set_c_tokenV1Compat_82(DatatypeImplementation_t1152094268 * value)
	{
		___c_tokenV1Compat_82 = value;
		Il2CppCodeGenWriteBarrier((&___c_tokenV1Compat_82), value);
	}

	inline static int32_t get_offset_of_c_anyAtomicType_83() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_anyAtomicType_83)); }
	inline DatatypeImplementation_t1152094268 * get_c_anyAtomicType_83() const { return ___c_anyAtomicType_83; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_anyAtomicType_83() { return &___c_anyAtomicType_83; }
	inline void set_c_anyAtomicType_83(DatatypeImplementation_t1152094268 * value)
	{
		___c_anyAtomicType_83 = value;
		Il2CppCodeGenWriteBarrier((&___c_anyAtomicType_83), value);
	}

	inline static int32_t get_offset_of_c_dayTimeDuration_84() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_dayTimeDuration_84)); }
	inline DatatypeImplementation_t1152094268 * get_c_dayTimeDuration_84() const { return ___c_dayTimeDuration_84; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_dayTimeDuration_84() { return &___c_dayTimeDuration_84; }
	inline void set_c_dayTimeDuration_84(DatatypeImplementation_t1152094268 * value)
	{
		___c_dayTimeDuration_84 = value;
		Il2CppCodeGenWriteBarrier((&___c_dayTimeDuration_84), value);
	}

	inline static int32_t get_offset_of_c_untypedAtomicType_85() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_untypedAtomicType_85)); }
	inline DatatypeImplementation_t1152094268 * get_c_untypedAtomicType_85() const { return ___c_untypedAtomicType_85; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_untypedAtomicType_85() { return &___c_untypedAtomicType_85; }
	inline void set_c_untypedAtomicType_85(DatatypeImplementation_t1152094268 * value)
	{
		___c_untypedAtomicType_85 = value;
		Il2CppCodeGenWriteBarrier((&___c_untypedAtomicType_85), value);
	}

	inline static int32_t get_offset_of_c_yearMonthDuration_86() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_yearMonthDuration_86)); }
	inline DatatypeImplementation_t1152094268 * get_c_yearMonthDuration_86() const { return ___c_yearMonthDuration_86; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_c_yearMonthDuration_86() { return &___c_yearMonthDuration_86; }
	inline void set_c_yearMonthDuration_86(DatatypeImplementation_t1152094268 * value)
	{
		___c_yearMonthDuration_86 = value;
		Il2CppCodeGenWriteBarrier((&___c_yearMonthDuration_86), value);
	}

	inline static int32_t get_offset_of_c_tokenizedTypes_87() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_tokenizedTypes_87)); }
	inline DatatypeImplementationU5BU5D_t3131202389* get_c_tokenizedTypes_87() const { return ___c_tokenizedTypes_87; }
	inline DatatypeImplementationU5BU5D_t3131202389** get_address_of_c_tokenizedTypes_87() { return &___c_tokenizedTypes_87; }
	inline void set_c_tokenizedTypes_87(DatatypeImplementationU5BU5D_t3131202389* value)
	{
		___c_tokenizedTypes_87 = value;
		Il2CppCodeGenWriteBarrier((&___c_tokenizedTypes_87), value);
	}

	inline static int32_t get_offset_of_c_tokenizedTypesXsd_88() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_tokenizedTypesXsd_88)); }
	inline DatatypeImplementationU5BU5D_t3131202389* get_c_tokenizedTypesXsd_88() const { return ___c_tokenizedTypesXsd_88; }
	inline DatatypeImplementationU5BU5D_t3131202389** get_address_of_c_tokenizedTypesXsd_88() { return &___c_tokenizedTypesXsd_88; }
	inline void set_c_tokenizedTypesXsd_88(DatatypeImplementationU5BU5D_t3131202389* value)
	{
		___c_tokenizedTypesXsd_88 = value;
		Il2CppCodeGenWriteBarrier((&___c_tokenizedTypesXsd_88), value);
	}

	inline static int32_t get_offset_of_c_XdrTypes_89() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_XdrTypes_89)); }
	inline SchemaDatatypeMapU5BU5D_t863562528* get_c_XdrTypes_89() const { return ___c_XdrTypes_89; }
	inline SchemaDatatypeMapU5BU5D_t863562528** get_address_of_c_XdrTypes_89() { return &___c_XdrTypes_89; }
	inline void set_c_XdrTypes_89(SchemaDatatypeMapU5BU5D_t863562528* value)
	{
		___c_XdrTypes_89 = value;
		Il2CppCodeGenWriteBarrier((&___c_XdrTypes_89), value);
	}

	inline static int32_t get_offset_of_c_XsdTypes_90() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t1152094268_StaticFields, ___c_XsdTypes_90)); }
	inline SchemaDatatypeMapU5BU5D_t863562528* get_c_XsdTypes_90() const { return ___c_XsdTypes_90; }
	inline SchemaDatatypeMapU5BU5D_t863562528** get_address_of_c_XsdTypes_90() { return &___c_XsdTypes_90; }
	inline void set_c_XsdTypes_90(SchemaDatatypeMapU5BU5D_t863562528* value)
	{
		___c_XsdTypes_90 = value;
		Il2CppCodeGenWriteBarrier((&___c_XsdTypes_90), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPEIMPLEMENTATION_T1152094268_H
#ifndef ALLELEMENTSCONTENTVALIDATOR_T2095068475_H
#define ALLELEMENTSCONTENTVALIDATOR_T2095068475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.AllElementsContentValidator
struct  AllElementsContentValidator_t2095068475  : public ContentValidator_t2510151843
{
public:
	// System.Collections.Hashtable System.Xml.Schema.AllElementsContentValidator::elements
	Hashtable_t909839986 * ___elements_7;
	// System.Object[] System.Xml.Schema.AllElementsContentValidator::particles
	ObjectU5BU5D_t3614634134* ___particles_8;
	// System.Xml.Schema.BitSet System.Xml.Schema.AllElementsContentValidator::isRequired
	BitSet_t1062448123 * ___isRequired_9;
	// System.Int32 System.Xml.Schema.AllElementsContentValidator::countRequired
	int32_t ___countRequired_10;

public:
	inline static int32_t get_offset_of_elements_7() { return static_cast<int32_t>(offsetof(AllElementsContentValidator_t2095068475, ___elements_7)); }
	inline Hashtable_t909839986 * get_elements_7() const { return ___elements_7; }
	inline Hashtable_t909839986 ** get_address_of_elements_7() { return &___elements_7; }
	inline void set_elements_7(Hashtable_t909839986 * value)
	{
		___elements_7 = value;
		Il2CppCodeGenWriteBarrier((&___elements_7), value);
	}

	inline static int32_t get_offset_of_particles_8() { return static_cast<int32_t>(offsetof(AllElementsContentValidator_t2095068475, ___particles_8)); }
	inline ObjectU5BU5D_t3614634134* get_particles_8() const { return ___particles_8; }
	inline ObjectU5BU5D_t3614634134** get_address_of_particles_8() { return &___particles_8; }
	inline void set_particles_8(ObjectU5BU5D_t3614634134* value)
	{
		___particles_8 = value;
		Il2CppCodeGenWriteBarrier((&___particles_8), value);
	}

	inline static int32_t get_offset_of_isRequired_9() { return static_cast<int32_t>(offsetof(AllElementsContentValidator_t2095068475, ___isRequired_9)); }
	inline BitSet_t1062448123 * get_isRequired_9() const { return ___isRequired_9; }
	inline BitSet_t1062448123 ** get_address_of_isRequired_9() { return &___isRequired_9; }
	inline void set_isRequired_9(BitSet_t1062448123 * value)
	{
		___isRequired_9 = value;
		Il2CppCodeGenWriteBarrier((&___isRequired_9), value);
	}

	inline static int32_t get_offset_of_countRequired_10() { return static_cast<int32_t>(offsetof(AllElementsContentValidator_t2095068475, ___countRequired_10)); }
	inline int32_t get_countRequired_10() const { return ___countRequired_10; }
	inline int32_t* get_address_of_countRequired_10() { return &___countRequired_10; }
	inline void set_countRequired_10(int32_t value)
	{
		___countRequired_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLELEMENTSCONTENTVALIDATOR_T2095068475_H
#ifndef DFACONTENTVALIDATOR_T429624170_H
#define DFACONTENTVALIDATOR_T429624170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.DfaContentValidator
struct  DfaContentValidator_t429624170  : public ContentValidator_t2510151843
{
public:
	// System.Int32[][] System.Xml.Schema.DfaContentValidator::transitionTable
	Int32U5BU5DU5BU5D_t3750818532* ___transitionTable_7;
	// System.Xml.Schema.SymbolsDictionary System.Xml.Schema.DfaContentValidator::symbols
	SymbolsDictionary_t1753655453 * ___symbols_8;

public:
	inline static int32_t get_offset_of_transitionTable_7() { return static_cast<int32_t>(offsetof(DfaContentValidator_t429624170, ___transitionTable_7)); }
	inline Int32U5BU5DU5BU5D_t3750818532* get_transitionTable_7() const { return ___transitionTable_7; }
	inline Int32U5BU5DU5BU5D_t3750818532** get_address_of_transitionTable_7() { return &___transitionTable_7; }
	inline void set_transitionTable_7(Int32U5BU5DU5BU5D_t3750818532* value)
	{
		___transitionTable_7 = value;
		Il2CppCodeGenWriteBarrier((&___transitionTable_7), value);
	}

	inline static int32_t get_offset_of_symbols_8() { return static_cast<int32_t>(offsetof(DfaContentValidator_t429624170, ___symbols_8)); }
	inline SymbolsDictionary_t1753655453 * get_symbols_8() const { return ___symbols_8; }
	inline SymbolsDictionary_t1753655453 ** get_address_of_symbols_8() { return &___symbols_8; }
	inline void set_symbols_8(SymbolsDictionary_t1753655453 * value)
	{
		___symbols_8 = value;
		Il2CppCodeGenWriteBarrier((&___symbols_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DFACONTENTVALIDATOR_T429624170_H
#ifndef NFACONTENTVALIDATOR_T1842871216_H
#define NFACONTENTVALIDATOR_T1842871216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.NfaContentValidator
struct  NfaContentValidator_t1842871216  : public ContentValidator_t2510151843
{
public:
	// System.Xml.Schema.BitSet System.Xml.Schema.NfaContentValidator::firstpos
	BitSet_t1062448123 * ___firstpos_7;
	// System.Xml.Schema.BitSet[] System.Xml.Schema.NfaContentValidator::followpos
	BitSetU5BU5D_t2256991674* ___followpos_8;
	// System.Xml.Schema.SymbolsDictionary System.Xml.Schema.NfaContentValidator::symbols
	SymbolsDictionary_t1753655453 * ___symbols_9;
	// System.Xml.Schema.Positions System.Xml.Schema.NfaContentValidator::positions
	Positions_t3593914952 * ___positions_10;
	// System.Int32 System.Xml.Schema.NfaContentValidator::endMarkerPos
	int32_t ___endMarkerPos_11;

public:
	inline static int32_t get_offset_of_firstpos_7() { return static_cast<int32_t>(offsetof(NfaContentValidator_t1842871216, ___firstpos_7)); }
	inline BitSet_t1062448123 * get_firstpos_7() const { return ___firstpos_7; }
	inline BitSet_t1062448123 ** get_address_of_firstpos_7() { return &___firstpos_7; }
	inline void set_firstpos_7(BitSet_t1062448123 * value)
	{
		___firstpos_7 = value;
		Il2CppCodeGenWriteBarrier((&___firstpos_7), value);
	}

	inline static int32_t get_offset_of_followpos_8() { return static_cast<int32_t>(offsetof(NfaContentValidator_t1842871216, ___followpos_8)); }
	inline BitSetU5BU5D_t2256991674* get_followpos_8() const { return ___followpos_8; }
	inline BitSetU5BU5D_t2256991674** get_address_of_followpos_8() { return &___followpos_8; }
	inline void set_followpos_8(BitSetU5BU5D_t2256991674* value)
	{
		___followpos_8 = value;
		Il2CppCodeGenWriteBarrier((&___followpos_8), value);
	}

	inline static int32_t get_offset_of_symbols_9() { return static_cast<int32_t>(offsetof(NfaContentValidator_t1842871216, ___symbols_9)); }
	inline SymbolsDictionary_t1753655453 * get_symbols_9() const { return ___symbols_9; }
	inline SymbolsDictionary_t1753655453 ** get_address_of_symbols_9() { return &___symbols_9; }
	inline void set_symbols_9(SymbolsDictionary_t1753655453 * value)
	{
		___symbols_9 = value;
		Il2CppCodeGenWriteBarrier((&___symbols_9), value);
	}

	inline static int32_t get_offset_of_positions_10() { return static_cast<int32_t>(offsetof(NfaContentValidator_t1842871216, ___positions_10)); }
	inline Positions_t3593914952 * get_positions_10() const { return ___positions_10; }
	inline Positions_t3593914952 ** get_address_of_positions_10() { return &___positions_10; }
	inline void set_positions_10(Positions_t3593914952 * value)
	{
		___positions_10 = value;
		Il2CppCodeGenWriteBarrier((&___positions_10), value);
	}

	inline static int32_t get_offset_of_endMarkerPos_11() { return static_cast<int32_t>(offsetof(NfaContentValidator_t1842871216, ___endMarkerPos_11)); }
	inline int32_t get_endMarkerPos_11() const { return ___endMarkerPos_11; }
	inline int32_t* get_address_of_endMarkerPos_11() { return &___endMarkerPos_11; }
	inline void set_endMarkerPos_11(int32_t value)
	{
		___endMarkerPos_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NFACONTENTVALIDATOR_T1842871216_H
#ifndef RANGECONTENTVALIDATOR_T857885766_H
#define RANGECONTENTVALIDATOR_T857885766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.RangeContentValidator
struct  RangeContentValidator_t857885766  : public ContentValidator_t2510151843
{
public:
	// System.Xml.Schema.BitSet System.Xml.Schema.RangeContentValidator::firstpos
	BitSet_t1062448123 * ___firstpos_7;
	// System.Xml.Schema.BitSet[] System.Xml.Schema.RangeContentValidator::followpos
	BitSetU5BU5D_t2256991674* ___followpos_8;
	// System.Xml.Schema.BitSet System.Xml.Schema.RangeContentValidator::positionsWithRangeTerminals
	BitSet_t1062448123 * ___positionsWithRangeTerminals_9;
	// System.Xml.Schema.SymbolsDictionary System.Xml.Schema.RangeContentValidator::symbols
	SymbolsDictionary_t1753655453 * ___symbols_10;
	// System.Xml.Schema.Positions System.Xml.Schema.RangeContentValidator::positions
	Positions_t3593914952 * ___positions_11;
	// System.Int32 System.Xml.Schema.RangeContentValidator::minMaxNodesCount
	int32_t ___minMaxNodesCount_12;
	// System.Int32 System.Xml.Schema.RangeContentValidator::endMarkerPos
	int32_t ___endMarkerPos_13;

public:
	inline static int32_t get_offset_of_firstpos_7() { return static_cast<int32_t>(offsetof(RangeContentValidator_t857885766, ___firstpos_7)); }
	inline BitSet_t1062448123 * get_firstpos_7() const { return ___firstpos_7; }
	inline BitSet_t1062448123 ** get_address_of_firstpos_7() { return &___firstpos_7; }
	inline void set_firstpos_7(BitSet_t1062448123 * value)
	{
		___firstpos_7 = value;
		Il2CppCodeGenWriteBarrier((&___firstpos_7), value);
	}

	inline static int32_t get_offset_of_followpos_8() { return static_cast<int32_t>(offsetof(RangeContentValidator_t857885766, ___followpos_8)); }
	inline BitSetU5BU5D_t2256991674* get_followpos_8() const { return ___followpos_8; }
	inline BitSetU5BU5D_t2256991674** get_address_of_followpos_8() { return &___followpos_8; }
	inline void set_followpos_8(BitSetU5BU5D_t2256991674* value)
	{
		___followpos_8 = value;
		Il2CppCodeGenWriteBarrier((&___followpos_8), value);
	}

	inline static int32_t get_offset_of_positionsWithRangeTerminals_9() { return static_cast<int32_t>(offsetof(RangeContentValidator_t857885766, ___positionsWithRangeTerminals_9)); }
	inline BitSet_t1062448123 * get_positionsWithRangeTerminals_9() const { return ___positionsWithRangeTerminals_9; }
	inline BitSet_t1062448123 ** get_address_of_positionsWithRangeTerminals_9() { return &___positionsWithRangeTerminals_9; }
	inline void set_positionsWithRangeTerminals_9(BitSet_t1062448123 * value)
	{
		___positionsWithRangeTerminals_9 = value;
		Il2CppCodeGenWriteBarrier((&___positionsWithRangeTerminals_9), value);
	}

	inline static int32_t get_offset_of_symbols_10() { return static_cast<int32_t>(offsetof(RangeContentValidator_t857885766, ___symbols_10)); }
	inline SymbolsDictionary_t1753655453 * get_symbols_10() const { return ___symbols_10; }
	inline SymbolsDictionary_t1753655453 ** get_address_of_symbols_10() { return &___symbols_10; }
	inline void set_symbols_10(SymbolsDictionary_t1753655453 * value)
	{
		___symbols_10 = value;
		Il2CppCodeGenWriteBarrier((&___symbols_10), value);
	}

	inline static int32_t get_offset_of_positions_11() { return static_cast<int32_t>(offsetof(RangeContentValidator_t857885766, ___positions_11)); }
	inline Positions_t3593914952 * get_positions_11() const { return ___positions_11; }
	inline Positions_t3593914952 ** get_address_of_positions_11() { return &___positions_11; }
	inline void set_positions_11(Positions_t3593914952 * value)
	{
		___positions_11 = value;
		Il2CppCodeGenWriteBarrier((&___positions_11), value);
	}

	inline static int32_t get_offset_of_minMaxNodesCount_12() { return static_cast<int32_t>(offsetof(RangeContentValidator_t857885766, ___minMaxNodesCount_12)); }
	inline int32_t get_minMaxNodesCount_12() const { return ___minMaxNodesCount_12; }
	inline int32_t* get_address_of_minMaxNodesCount_12() { return &___minMaxNodesCount_12; }
	inline void set_minMaxNodesCount_12(int32_t value)
	{
		___minMaxNodesCount_12 = value;
	}

	inline static int32_t get_offset_of_endMarkerPos_13() { return static_cast<int32_t>(offsetof(RangeContentValidator_t857885766, ___endMarkerPos_13)); }
	inline int32_t get_endMarkerPos_13() const { return ___endMarkerPos_13; }
	inline int32_t* get_address_of_endMarkerPos_13() { return &___endMarkerPos_13; }
	inline void set_endMarkerPos_13(int32_t value)
	{
		___endMarkerPos_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGECONTENTVALIDATOR_T857885766_H
#ifndef PARTICLECONTENTVALIDATOR_T1341047977_H
#define PARTICLECONTENTVALIDATOR_T1341047977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.ParticleContentValidator
struct  ParticleContentValidator_t1341047977  : public ContentValidator_t2510151843
{
public:
	// System.Xml.Schema.SymbolsDictionary System.Xml.Schema.ParticleContentValidator::symbols
	SymbolsDictionary_t1753655453 * ___symbols_7;
	// System.Xml.Schema.Positions System.Xml.Schema.ParticleContentValidator::positions
	Positions_t3593914952 * ___positions_8;
	// System.Collections.Stack System.Xml.Schema.ParticleContentValidator::stack
	Stack_t1043988394 * ___stack_9;
	// System.Xml.Schema.SyntaxTreeNode System.Xml.Schema.ParticleContentValidator::contentNode
	SyntaxTreeNode_t2397191729 * ___contentNode_10;
	// System.Boolean System.Xml.Schema.ParticleContentValidator::isPartial
	bool ___isPartial_11;
	// System.Int32 System.Xml.Schema.ParticleContentValidator::minMaxNodesCount
	int32_t ___minMaxNodesCount_12;
	// System.Boolean System.Xml.Schema.ParticleContentValidator::enableUpaCheck
	bool ___enableUpaCheck_13;

public:
	inline static int32_t get_offset_of_symbols_7() { return static_cast<int32_t>(offsetof(ParticleContentValidator_t1341047977, ___symbols_7)); }
	inline SymbolsDictionary_t1753655453 * get_symbols_7() const { return ___symbols_7; }
	inline SymbolsDictionary_t1753655453 ** get_address_of_symbols_7() { return &___symbols_7; }
	inline void set_symbols_7(SymbolsDictionary_t1753655453 * value)
	{
		___symbols_7 = value;
		Il2CppCodeGenWriteBarrier((&___symbols_7), value);
	}

	inline static int32_t get_offset_of_positions_8() { return static_cast<int32_t>(offsetof(ParticleContentValidator_t1341047977, ___positions_8)); }
	inline Positions_t3593914952 * get_positions_8() const { return ___positions_8; }
	inline Positions_t3593914952 ** get_address_of_positions_8() { return &___positions_8; }
	inline void set_positions_8(Positions_t3593914952 * value)
	{
		___positions_8 = value;
		Il2CppCodeGenWriteBarrier((&___positions_8), value);
	}

	inline static int32_t get_offset_of_stack_9() { return static_cast<int32_t>(offsetof(ParticleContentValidator_t1341047977, ___stack_9)); }
	inline Stack_t1043988394 * get_stack_9() const { return ___stack_9; }
	inline Stack_t1043988394 ** get_address_of_stack_9() { return &___stack_9; }
	inline void set_stack_9(Stack_t1043988394 * value)
	{
		___stack_9 = value;
		Il2CppCodeGenWriteBarrier((&___stack_9), value);
	}

	inline static int32_t get_offset_of_contentNode_10() { return static_cast<int32_t>(offsetof(ParticleContentValidator_t1341047977, ___contentNode_10)); }
	inline SyntaxTreeNode_t2397191729 * get_contentNode_10() const { return ___contentNode_10; }
	inline SyntaxTreeNode_t2397191729 ** get_address_of_contentNode_10() { return &___contentNode_10; }
	inline void set_contentNode_10(SyntaxTreeNode_t2397191729 * value)
	{
		___contentNode_10 = value;
		Il2CppCodeGenWriteBarrier((&___contentNode_10), value);
	}

	inline static int32_t get_offset_of_isPartial_11() { return static_cast<int32_t>(offsetof(ParticleContentValidator_t1341047977, ___isPartial_11)); }
	inline bool get_isPartial_11() const { return ___isPartial_11; }
	inline bool* get_address_of_isPartial_11() { return &___isPartial_11; }
	inline void set_isPartial_11(bool value)
	{
		___isPartial_11 = value;
	}

	inline static int32_t get_offset_of_minMaxNodesCount_12() { return static_cast<int32_t>(offsetof(ParticleContentValidator_t1341047977, ___minMaxNodesCount_12)); }
	inline int32_t get_minMaxNodesCount_12() const { return ___minMaxNodesCount_12; }
	inline int32_t* get_address_of_minMaxNodesCount_12() { return &___minMaxNodesCount_12; }
	inline void set_minMaxNodesCount_12(int32_t value)
	{
		___minMaxNodesCount_12 = value;
	}

	inline static int32_t get_offset_of_enableUpaCheck_13() { return static_cast<int32_t>(offsetof(ParticleContentValidator_t1341047977, ___enableUpaCheck_13)); }
	inline bool get_enableUpaCheck_13() const { return ___enableUpaCheck_13; }
	inline bool* get_address_of_enableUpaCheck_13() { return &___enableUpaCheck_13; }
	inline void set_enableUpaCheck_13(bool value)
	{
		___enableUpaCheck_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLECONTENTVALIDATOR_T1341047977_H
#ifndef DATATYPE_ANYSIMPLETYPE_T4012795865_H
#define DATATYPE_ANYSIMPLETYPE_T4012795865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_anySimpleType
struct  Datatype_anySimpleType_t4012795865  : public DatatypeImplementation_t1152094268
{
public:

public:
};

struct Datatype_anySimpleType_t4012795865_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_anySimpleType::atomicValueType
	Type_t * ___atomicValueType_91;
	// System.Type System.Xml.Schema.Datatype_anySimpleType::listValueType
	Type_t * ___listValueType_92;

public:
	inline static int32_t get_offset_of_atomicValueType_91() { return static_cast<int32_t>(offsetof(Datatype_anySimpleType_t4012795865_StaticFields, ___atomicValueType_91)); }
	inline Type_t * get_atomicValueType_91() const { return ___atomicValueType_91; }
	inline Type_t ** get_address_of_atomicValueType_91() { return &___atomicValueType_91; }
	inline void set_atomicValueType_91(Type_t * value)
	{
		___atomicValueType_91 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_91), value);
	}

	inline static int32_t get_offset_of_listValueType_92() { return static_cast<int32_t>(offsetof(Datatype_anySimpleType_t4012795865_StaticFields, ___listValueType_92)); }
	inline Type_t * get_listValueType_92() const { return ___listValueType_92; }
	inline Type_t ** get_address_of_listValueType_92() { return &___listValueType_92; }
	inline void set_listValueType_92(Type_t * value)
	{
		___listValueType_92 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_92), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_ANYSIMPLETYPE_T4012795865_H
#ifndef DATATYPE_CHAR_T534108237_H
#define DATATYPE_CHAR_T534108237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_char
struct  Datatype_char_t534108237  : public Datatype_anySimpleType_t4012795865
{
public:

public:
};

struct Datatype_char_t534108237_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_char::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_char::listValueType
	Type_t * ___listValueType_94;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_char_t534108237_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_char_t534108237_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_CHAR_T534108237_H
#ifndef DATATYPE_QNAMEXDR_T2452527483_H
#define DATATYPE_QNAMEXDR_T2452527483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_QNameXdr
struct  Datatype_QNameXdr_t2452527483  : public Datatype_anySimpleType_t4012795865
{
public:

public:
};

struct Datatype_QNameXdr_t2452527483_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_QNameXdr::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_QNameXdr::listValueType
	Type_t * ___listValueType_94;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_QNameXdr_t2452527483_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_QNameXdr_t2452527483_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_QNAMEXDR_T2452527483_H
#ifndef DATATYPE_NOTATION_T3412197483_H
#define DATATYPE_NOTATION_T3412197483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_NOTATION
struct  Datatype_NOTATION_t3412197483  : public Datatype_anySimpleType_t4012795865
{
public:

public:
};

struct Datatype_NOTATION_t3412197483_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_NOTATION::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_NOTATION::listValueType
	Type_t * ___listValueType_94;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_NOTATION_t3412197483_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_NOTATION_t3412197483_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_NOTATION_T3412197483_H
#ifndef DATATYPE_UUID_T2771989020_H
#define DATATYPE_UUID_T2771989020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_uuid
struct  Datatype_uuid_t2771989020  : public Datatype_anySimpleType_t4012795865
{
public:

public:
};

struct Datatype_uuid_t2771989020_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_uuid::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_uuid::listValueType
	Type_t * ___listValueType_94;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_uuid_t2771989020_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_uuid_t2771989020_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_UUID_T2771989020_H
#ifndef DATATYPE_ANYURI_T2417434093_H
#define DATATYPE_ANYURI_T2417434093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_anyURI
struct  Datatype_anyURI_t2417434093  : public Datatype_anySimpleType_t4012795865
{
public:

public:
};

struct Datatype_anyURI_t2417434093_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_anyURI::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_anyURI::listValueType
	Type_t * ___listValueType_94;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_anyURI_t2417434093_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_anyURI_t2417434093_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_ANYURI_T2417434093_H
#ifndef DATATYPE_QNAME_T2180543649_H
#define DATATYPE_QNAME_T2180543649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_QName
struct  Datatype_QName_t2180543649  : public Datatype_anySimpleType_t4012795865
{
public:

public:
};

struct Datatype_QName_t2180543649_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_QName::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_QName::listValueType
	Type_t * ___listValueType_94;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_QName_t2180543649_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_QName_t2180543649_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_QNAME_T2180543649_H
#ifndef DATATYPE_HEXBINARY_T2599154205_H
#define DATATYPE_HEXBINARY_T2599154205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_hexBinary
struct  Datatype_hexBinary_t2599154205  : public Datatype_anySimpleType_t4012795865
{
public:

public:
};

struct Datatype_hexBinary_t2599154205_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_hexBinary::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_hexBinary::listValueType
	Type_t * ___listValueType_94;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_hexBinary_t2599154205_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_hexBinary_t2599154205_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_HEXBINARY_T2599154205_H
#ifndef DATATYPE_BASE64BINARY_T3902009307_H
#define DATATYPE_BASE64BINARY_T3902009307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_base64Binary
struct  Datatype_base64Binary_t3902009307  : public Datatype_anySimpleType_t4012795865
{
public:

public:
};

struct Datatype_base64Binary_t3902009307_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_base64Binary::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_base64Binary::listValueType
	Type_t * ___listValueType_94;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_base64Binary_t3902009307_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_base64Binary_t3902009307_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_BASE64BINARY_T3902009307_H
#ifndef DATATYPE_ANYATOMICTYPE_T4212901794_H
#define DATATYPE_ANYATOMICTYPE_T4212901794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_anyAtomicType
struct  Datatype_anyAtomicType_t4212901794  : public Datatype_anySimpleType_t4012795865
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_ANYATOMICTYPE_T4212901794_H
#ifndef DATATYPE_DECIMAL_T2973594954_H
#define DATATYPE_DECIMAL_T2973594954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_decimal
struct  Datatype_decimal_t2973594954  : public Datatype_anySimpleType_t4012795865
{
public:

public:
};

struct Datatype_decimal_t2973594954_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_decimal::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_decimal::listValueType
	Type_t * ___listValueType_94;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.Datatype_decimal::numeric10FacetsChecker
	FacetsChecker_t1235574227 * ___numeric10FacetsChecker_95;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_decimal_t2973594954_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_decimal_t2973594954_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}

	inline static int32_t get_offset_of_numeric10FacetsChecker_95() { return static_cast<int32_t>(offsetof(Datatype_decimal_t2973594954_StaticFields, ___numeric10FacetsChecker_95)); }
	inline FacetsChecker_t1235574227 * get_numeric10FacetsChecker_95() const { return ___numeric10FacetsChecker_95; }
	inline FacetsChecker_t1235574227 ** get_address_of_numeric10FacetsChecker_95() { return &___numeric10FacetsChecker_95; }
	inline void set_numeric10FacetsChecker_95(FacetsChecker_t1235574227 * value)
	{
		___numeric10FacetsChecker_95 = value;
		Il2CppCodeGenWriteBarrier((&___numeric10FacetsChecker_95), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_DECIMAL_T2973594954_H
#ifndef DATATYPE_DOUBLE_T1050796240_H
#define DATATYPE_DOUBLE_T1050796240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_double
struct  Datatype_double_t1050796240  : public Datatype_anySimpleType_t4012795865
{
public:

public:
};

struct Datatype_double_t1050796240_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_double::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_double::listValueType
	Type_t * ___listValueType_94;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_double_t1050796240_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_double_t1050796240_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_DOUBLE_T1050796240_H
#ifndef DATATYPE_DATETIMEBASE_T2449194189_H
#define DATATYPE_DATETIMEBASE_T2449194189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_dateTimeBase
struct  Datatype_dateTimeBase_t2449194189  : public Datatype_anySimpleType_t4012795865
{
public:
	// System.Xml.Schema.XsdDateTimeFlags System.Xml.Schema.Datatype_dateTimeBase::dateTimeFlags
	int32_t ___dateTimeFlags_95;

public:
	inline static int32_t get_offset_of_dateTimeFlags_95() { return static_cast<int32_t>(offsetof(Datatype_dateTimeBase_t2449194189, ___dateTimeFlags_95)); }
	inline int32_t get_dateTimeFlags_95() const { return ___dateTimeFlags_95; }
	inline int32_t* get_address_of_dateTimeFlags_95() { return &___dateTimeFlags_95; }
	inline void set_dateTimeFlags_95(int32_t value)
	{
		___dateTimeFlags_95 = value;
	}
};

struct Datatype_dateTimeBase_t2449194189_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_dateTimeBase::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_dateTimeBase::listValueType
	Type_t * ___listValueType_94;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_dateTimeBase_t2449194189_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_dateTimeBase_t2449194189_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_DATETIMEBASE_T2449194189_H
#ifndef DATATYPE_LIST_T1892289229_H
#define DATATYPE_LIST_T1892289229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_List
struct  Datatype_List_t1892289229  : public Datatype_anySimpleType_t4012795865
{
public:
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.Datatype_List::itemType
	DatatypeImplementation_t1152094268 * ___itemType_93;
	// System.Int32 System.Xml.Schema.Datatype_List::minListSize
	int32_t ___minListSize_94;

public:
	inline static int32_t get_offset_of_itemType_93() { return static_cast<int32_t>(offsetof(Datatype_List_t1892289229, ___itemType_93)); }
	inline DatatypeImplementation_t1152094268 * get_itemType_93() const { return ___itemType_93; }
	inline DatatypeImplementation_t1152094268 ** get_address_of_itemType_93() { return &___itemType_93; }
	inline void set_itemType_93(DatatypeImplementation_t1152094268 * value)
	{
		___itemType_93 = value;
		Il2CppCodeGenWriteBarrier((&___itemType_93), value);
	}

	inline static int32_t get_offset_of_minListSize_94() { return static_cast<int32_t>(offsetof(Datatype_List_t1892289229, ___minListSize_94)); }
	inline int32_t get_minListSize_94() const { return ___minListSize_94; }
	inline int32_t* get_address_of_minListSize_94() { return &___minListSize_94; }
	inline void set_minListSize_94(int32_t value)
	{
		___minListSize_94 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_LIST_T1892289229_H
#ifndef DATATYPE_DURATION_T1871787273_H
#define DATATYPE_DURATION_T1871787273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_duration
struct  Datatype_duration_t1871787273  : public Datatype_anySimpleType_t4012795865
{
public:

public:
};

struct Datatype_duration_t1871787273_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_duration::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_duration::listValueType
	Type_t * ___listValueType_94;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_duration_t1871787273_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_duration_t1871787273_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_DURATION_T1871787273_H
#ifndef DATATYPE_STRING_T995037180_H
#define DATATYPE_STRING_T995037180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_string
struct  Datatype_string_t995037180  : public Datatype_anySimpleType_t4012795865
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_STRING_T995037180_H
#ifndef DATATYPE_UNION_T2515141346_H
#define DATATYPE_UNION_T2515141346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_union
struct  Datatype_union_t2515141346  : public Datatype_anySimpleType_t4012795865
{
public:
	// System.Xml.Schema.XmlSchemaSimpleType[] System.Xml.Schema.Datatype_union::types
	XmlSchemaSimpleTypeU5BU5D_t192177157* ___types_95;

public:
	inline static int32_t get_offset_of_types_95() { return static_cast<int32_t>(offsetof(Datatype_union_t2515141346, ___types_95)); }
	inline XmlSchemaSimpleTypeU5BU5D_t192177157* get_types_95() const { return ___types_95; }
	inline XmlSchemaSimpleTypeU5BU5D_t192177157** get_address_of_types_95() { return &___types_95; }
	inline void set_types_95(XmlSchemaSimpleTypeU5BU5D_t192177157* value)
	{
		___types_95 = value;
		Il2CppCodeGenWriteBarrier((&___types_95), value);
	}
};

struct Datatype_union_t2515141346_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_union::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_union::listValueType
	Type_t * ___listValueType_94;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_union_t2515141346_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_union_t2515141346_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_UNION_T2515141346_H
#ifndef DATATYPE_BOOLEAN_T293982753_H
#define DATATYPE_BOOLEAN_T293982753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_boolean
struct  Datatype_boolean_t293982753  : public Datatype_anySimpleType_t4012795865
{
public:

public:
};

struct Datatype_boolean_t293982753_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_boolean::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_boolean::listValueType
	Type_t * ___listValueType_94;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_boolean_t293982753_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_boolean_t293982753_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_BOOLEAN_T293982753_H
#ifndef DATATYPE_FLOAT_T3149441939_H
#define DATATYPE_FLOAT_T3149441939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_float
struct  Datatype_float_t3149441939  : public Datatype_anySimpleType_t4012795865
{
public:

public:
};

struct Datatype_float_t3149441939_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_float::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_float::listValueType
	Type_t * ___listValueType_94;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_float_t3149441939_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_float_t3149441939_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_FLOAT_T3149441939_H
#ifndef DATATYPE_INTEGER_T404053727_H
#define DATATYPE_INTEGER_T404053727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_integer
struct  Datatype_integer_t404053727  : public Datatype_decimal_t2973594954
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_INTEGER_T404053727_H
#ifndef DATATYPE_FIXED_T1126112663_H
#define DATATYPE_FIXED_T1126112663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_fixed
struct  Datatype_fixed_t1126112663  : public Datatype_decimal_t2973594954
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_FIXED_T1126112663_H
#ifndef DATATYPE_FLOATXDR_T1510312673_H
#define DATATYPE_FLOATXDR_T1510312673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_floatXdr
struct  Datatype_floatXdr_t1510312673  : public Datatype_float_t3149441939
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_FLOATXDR_T1510312673_H
#ifndef DATATYPE_DOUBLEXDR_T2833069974_H
#define DATATYPE_DOUBLEXDR_T2833069974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_doubleXdr
struct  Datatype_doubleXdr_t2833069974  : public Datatype_double_t1050796240
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_DOUBLEXDR_T2833069974_H
#ifndef DATATYPE_TIMENOTIMEZONE_T1747796622_H
#define DATATYPE_TIMENOTIMEZONE_T1747796622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_timeNoTimeZone
struct  Datatype_timeNoTimeZone_t1747796622  : public Datatype_dateTimeBase_t2449194189
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_TIMENOTIMEZONE_T1747796622_H
#ifndef DATATYPE_DATE_T903634781_H
#define DATATYPE_DATE_T903634781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_date
struct  Datatype_date_t903634781  : public Datatype_dateTimeBase_t2449194189
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_DATE_T903634781_H
#ifndef DATATYPE_YEARMONTH_T1775492394_H
#define DATATYPE_YEARMONTH_T1775492394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_yearMonth
struct  Datatype_yearMonth_t1775492394  : public Datatype_dateTimeBase_t2449194189
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_YEARMONTH_T1775492394_H
#ifndef DATATYPE_NORMALIZEDSTRINGV1COMPAT_T2394903178_H
#define DATATYPE_NORMALIZEDSTRINGV1COMPAT_T2394903178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_normalizedStringV1Compat
struct  Datatype_normalizedStringV1Compat_t2394903178  : public Datatype_string_t995037180
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_NORMALIZEDSTRINGV1COMPAT_T2394903178_H
#ifndef DATATYPE_TIME_T305227304_H
#define DATATYPE_TIME_T305227304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_time
struct  Datatype_time_t305227304  : public Datatype_dateTimeBase_t2449194189
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_TIME_T305227304_H
#ifndef DATATYPE_YEAR_T527201590_H
#define DATATYPE_YEAR_T527201590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_year
struct  Datatype_year_t527201590  : public Datatype_dateTimeBase_t2449194189
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_YEAR_T527201590_H
#ifndef DATATYPE_MONTH_T2424718095_H
#define DATATYPE_MONTH_T2424718095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_month
struct  Datatype_month_t2424718095  : public Datatype_dateTimeBase_t2449194189
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_MONTH_T2424718095_H
#ifndef DATATYPE_NORMALIZEDSTRING_T2314411649_H
#define DATATYPE_NORMALIZEDSTRING_T2314411649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_normalizedString
struct  Datatype_normalizedString_t2314411649  : public Datatype_string_t995037180
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_NORMALIZEDSTRING_T2314411649_H
#ifndef DATATYPE_MONTHDAY_T1515801313_H
#define DATATYPE_MONTHDAY_T1515801313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_monthDay
struct  Datatype_monthDay_t1515801313  : public Datatype_dateTimeBase_t2449194189
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_MONTHDAY_T1515801313_H
#ifndef DATATYPE_DAY_T3625353511_H
#define DATATYPE_DAY_T3625353511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_day
struct  Datatype_day_t3625353511  : public Datatype_dateTimeBase_t2449194189
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_DAY_T3625353511_H
#ifndef DATATYPE_TIMETIMEZONE_T3702809551_H
#define DATATYPE_TIMETIMEZONE_T3702809551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_timeTimeZone
struct  Datatype_timeTimeZone_t3702809551  : public Datatype_dateTimeBase_t2449194189
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_TIMETIMEZONE_T3702809551_H
#ifndef DATATYPE_YEARMONTHDURATION_T1235863080_H
#define DATATYPE_YEARMONTHDURATION_T1235863080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_yearMonthDuration
struct  Datatype_yearMonthDuration_t1235863080  : public Datatype_duration_t1871787273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_YEARMONTHDURATION_T1235863080_H
#ifndef DATATYPE_DAYTIMEDURATION_T2638197894_H
#define DATATYPE_DAYTIMEDURATION_T2638197894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_dayTimeDuration
struct  Datatype_dayTimeDuration_t2638197894  : public Datatype_duration_t1871787273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_DAYTIMEDURATION_T2638197894_H
#ifndef DATATYPE_DATETIMENOTIMEZONE_T3887107098_H
#define DATATYPE_DATETIMENOTIMEZONE_T3887107098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_dateTimeNoTimeZone
struct  Datatype_dateTimeNoTimeZone_t3887107098  : public Datatype_dateTimeBase_t2449194189
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_DATETIMENOTIMEZONE_T3887107098_H
#ifndef DATATYPE_DATETIME_T1101103220_H
#define DATATYPE_DATETIME_T1101103220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_dateTime
struct  Datatype_dateTime_t1101103220  : public Datatype_dateTimeBase_t2449194189
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_DATETIME_T1101103220_H
#ifndef DATATYPE_DATETIMETIMEZONE_T3703324323_H
#define DATATYPE_DATETIMETIMEZONE_T3703324323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_dateTimeTimeZone
struct  Datatype_dateTimeTimeZone_t3703324323  : public Datatype_dateTimeBase_t2449194189
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_DATETIMETIMEZONE_T3703324323_H
#ifndef DATATYPE_UNTYPEDATOMICTYPE_T3332440493_H
#define DATATYPE_UNTYPEDATOMICTYPE_T3332440493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_untypedAtomicType
struct  Datatype_untypedAtomicType_t3332440493  : public Datatype_anyAtomicType_t4212901794
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_UNTYPEDATOMICTYPE_T3332440493_H
#ifndef DATATYPE_LONG_T513905339_H
#define DATATYPE_LONG_T513905339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_long
struct  Datatype_long_t513905339  : public Datatype_integer_t404053727
{
public:

public:
};

struct Datatype_long_t513905339_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_long::atomicValueType
	Type_t * ___atomicValueType_96;
	// System.Type System.Xml.Schema.Datatype_long::listValueType
	Type_t * ___listValueType_97;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.Datatype_long::numeric10FacetsChecker
	FacetsChecker_t1235574227 * ___numeric10FacetsChecker_98;

public:
	inline static int32_t get_offset_of_atomicValueType_96() { return static_cast<int32_t>(offsetof(Datatype_long_t513905339_StaticFields, ___atomicValueType_96)); }
	inline Type_t * get_atomicValueType_96() const { return ___atomicValueType_96; }
	inline Type_t ** get_address_of_atomicValueType_96() { return &___atomicValueType_96; }
	inline void set_atomicValueType_96(Type_t * value)
	{
		___atomicValueType_96 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_96), value);
	}

	inline static int32_t get_offset_of_listValueType_97() { return static_cast<int32_t>(offsetof(Datatype_long_t513905339_StaticFields, ___listValueType_97)); }
	inline Type_t * get_listValueType_97() const { return ___listValueType_97; }
	inline Type_t ** get_address_of_listValueType_97() { return &___listValueType_97; }
	inline void set_listValueType_97(Type_t * value)
	{
		___listValueType_97 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_97), value);
	}

	inline static int32_t get_offset_of_numeric10FacetsChecker_98() { return static_cast<int32_t>(offsetof(Datatype_long_t513905339_StaticFields, ___numeric10FacetsChecker_98)); }
	inline FacetsChecker_t1235574227 * get_numeric10FacetsChecker_98() const { return ___numeric10FacetsChecker_98; }
	inline FacetsChecker_t1235574227 ** get_address_of_numeric10FacetsChecker_98() { return &___numeric10FacetsChecker_98; }
	inline void set_numeric10FacetsChecker_98(FacetsChecker_t1235574227 * value)
	{
		___numeric10FacetsChecker_98 = value;
		Il2CppCodeGenWriteBarrier((&___numeric10FacetsChecker_98), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_LONG_T513905339_H
#ifndef DATATYPE_TOKENV1COMPAT_T64797735_H
#define DATATYPE_TOKENV1COMPAT_T64797735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_tokenV1Compat
struct  Datatype_tokenV1Compat_t64797735  : public Datatype_normalizedStringV1Compat_t2394903178
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_TOKENV1COMPAT_T64797735_H
#ifndef DATATYPE_TOKEN_T464702686_H
#define DATATYPE_TOKEN_T464702686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_token
struct  Datatype_token_t464702686  : public Datatype_normalizedString_t2314411649
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_TOKEN_T464702686_H
#ifndef DATATYPE_NONPOSITIVEINTEGER_T863439515_H
#define DATATYPE_NONPOSITIVEINTEGER_T863439515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_nonPositiveInteger
struct  Datatype_nonPositiveInteger_t863439515  : public Datatype_integer_t404053727
{
public:

public:
};

struct Datatype_nonPositiveInteger_t863439515_StaticFields
{
public:
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.Datatype_nonPositiveInteger::numeric10FacetsChecker
	FacetsChecker_t1235574227 * ___numeric10FacetsChecker_96;

public:
	inline static int32_t get_offset_of_numeric10FacetsChecker_96() { return static_cast<int32_t>(offsetof(Datatype_nonPositiveInteger_t863439515_StaticFields, ___numeric10FacetsChecker_96)); }
	inline FacetsChecker_t1235574227 * get_numeric10FacetsChecker_96() const { return ___numeric10FacetsChecker_96; }
	inline FacetsChecker_t1235574227 ** get_address_of_numeric10FacetsChecker_96() { return &___numeric10FacetsChecker_96; }
	inline void set_numeric10FacetsChecker_96(FacetsChecker_t1235574227 * value)
	{
		___numeric10FacetsChecker_96 = value;
		Il2CppCodeGenWriteBarrier((&___numeric10FacetsChecker_96), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_NONPOSITIVEINTEGER_T863439515_H
#ifndef DATATYPE_NONNEGATIVEINTEGER_T1851861419_H
#define DATATYPE_NONNEGATIVEINTEGER_T1851861419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_nonNegativeInteger
struct  Datatype_nonNegativeInteger_t1851861419  : public Datatype_integer_t404053727
{
public:

public:
};

struct Datatype_nonNegativeInteger_t1851861419_StaticFields
{
public:
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.Datatype_nonNegativeInteger::numeric10FacetsChecker
	FacetsChecker_t1235574227 * ___numeric10FacetsChecker_96;

public:
	inline static int32_t get_offset_of_numeric10FacetsChecker_96() { return static_cast<int32_t>(offsetof(Datatype_nonNegativeInteger_t1851861419_StaticFields, ___numeric10FacetsChecker_96)); }
	inline FacetsChecker_t1235574227 * get_numeric10FacetsChecker_96() const { return ___numeric10FacetsChecker_96; }
	inline FacetsChecker_t1235574227 ** get_address_of_numeric10FacetsChecker_96() { return &___numeric10FacetsChecker_96; }
	inline void set_numeric10FacetsChecker_96(FacetsChecker_t1235574227 * value)
	{
		___numeric10FacetsChecker_96 = value;
		Il2CppCodeGenWriteBarrier((&___numeric10FacetsChecker_96), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_NONNEGATIVEINTEGER_T1851861419_H
#ifndef DATATYPE_INT_T2281243990_H
#define DATATYPE_INT_T2281243990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_int
struct  Datatype_int_t2281243990  : public Datatype_long_t513905339
{
public:

public:
};

struct Datatype_int_t2281243990_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_int::atomicValueType
	Type_t * ___atomicValueType_99;
	// System.Type System.Xml.Schema.Datatype_int::listValueType
	Type_t * ___listValueType_100;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.Datatype_int::numeric10FacetsChecker
	FacetsChecker_t1235574227 * ___numeric10FacetsChecker_101;

public:
	inline static int32_t get_offset_of_atomicValueType_99() { return static_cast<int32_t>(offsetof(Datatype_int_t2281243990_StaticFields, ___atomicValueType_99)); }
	inline Type_t * get_atomicValueType_99() const { return ___atomicValueType_99; }
	inline Type_t ** get_address_of_atomicValueType_99() { return &___atomicValueType_99; }
	inline void set_atomicValueType_99(Type_t * value)
	{
		___atomicValueType_99 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_99), value);
	}

	inline static int32_t get_offset_of_listValueType_100() { return static_cast<int32_t>(offsetof(Datatype_int_t2281243990_StaticFields, ___listValueType_100)); }
	inline Type_t * get_listValueType_100() const { return ___listValueType_100; }
	inline Type_t ** get_address_of_listValueType_100() { return &___listValueType_100; }
	inline void set_listValueType_100(Type_t * value)
	{
		___listValueType_100 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_100), value);
	}

	inline static int32_t get_offset_of_numeric10FacetsChecker_101() { return static_cast<int32_t>(offsetof(Datatype_int_t2281243990_StaticFields, ___numeric10FacetsChecker_101)); }
	inline FacetsChecker_t1235574227 * get_numeric10FacetsChecker_101() const { return ___numeric10FacetsChecker_101; }
	inline FacetsChecker_t1235574227 ** get_address_of_numeric10FacetsChecker_101() { return &___numeric10FacetsChecker_101; }
	inline void set_numeric10FacetsChecker_101(FacetsChecker_t1235574227 * value)
	{
		___numeric10FacetsChecker_101 = value;
		Il2CppCodeGenWriteBarrier((&___numeric10FacetsChecker_101), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_INT_T2281243990_H
#ifndef DATATYPE_UNSIGNEDLONG_T3462046402_H
#define DATATYPE_UNSIGNEDLONG_T3462046402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_unsignedLong
struct  Datatype_unsignedLong_t3462046402  : public Datatype_nonNegativeInteger_t1851861419
{
public:

public:
};

struct Datatype_unsignedLong_t3462046402_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_unsignedLong::atomicValueType
	Type_t * ___atomicValueType_97;
	// System.Type System.Xml.Schema.Datatype_unsignedLong::listValueType
	Type_t * ___listValueType_98;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.Datatype_unsignedLong::numeric10FacetsChecker
	FacetsChecker_t1235574227 * ___numeric10FacetsChecker_99;

public:
	inline static int32_t get_offset_of_atomicValueType_97() { return static_cast<int32_t>(offsetof(Datatype_unsignedLong_t3462046402_StaticFields, ___atomicValueType_97)); }
	inline Type_t * get_atomicValueType_97() const { return ___atomicValueType_97; }
	inline Type_t ** get_address_of_atomicValueType_97() { return &___atomicValueType_97; }
	inline void set_atomicValueType_97(Type_t * value)
	{
		___atomicValueType_97 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_97), value);
	}

	inline static int32_t get_offset_of_listValueType_98() { return static_cast<int32_t>(offsetof(Datatype_unsignedLong_t3462046402_StaticFields, ___listValueType_98)); }
	inline Type_t * get_listValueType_98() const { return ___listValueType_98; }
	inline Type_t ** get_address_of_listValueType_98() { return &___listValueType_98; }
	inline void set_listValueType_98(Type_t * value)
	{
		___listValueType_98 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_98), value);
	}

	inline static int32_t get_offset_of_numeric10FacetsChecker_99() { return static_cast<int32_t>(offsetof(Datatype_unsignedLong_t3462046402_StaticFields, ___numeric10FacetsChecker_99)); }
	inline FacetsChecker_t1235574227 * get_numeric10FacetsChecker_99() const { return ___numeric10FacetsChecker_99; }
	inline FacetsChecker_t1235574227 ** get_address_of_numeric10FacetsChecker_99() { return &___numeric10FacetsChecker_99; }
	inline void set_numeric10FacetsChecker_99(FacetsChecker_t1235574227 * value)
	{
		___numeric10FacetsChecker_99 = value;
		Il2CppCodeGenWriteBarrier((&___numeric10FacetsChecker_99), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_UNSIGNEDLONG_T3462046402_H
#ifndef DATATYPE_NEGATIVEINTEGER_T1070964020_H
#define DATATYPE_NEGATIVEINTEGER_T1070964020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_negativeInteger
struct  Datatype_negativeInteger_t1070964020  : public Datatype_nonPositiveInteger_t863439515
{
public:

public:
};

struct Datatype_negativeInteger_t1070964020_StaticFields
{
public:
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.Datatype_negativeInteger::numeric10FacetsChecker
	FacetsChecker_t1235574227 * ___numeric10FacetsChecker_97;

public:
	inline static int32_t get_offset_of_numeric10FacetsChecker_97() { return static_cast<int32_t>(offsetof(Datatype_negativeInteger_t1070964020_StaticFields, ___numeric10FacetsChecker_97)); }
	inline FacetsChecker_t1235574227 * get_numeric10FacetsChecker_97() const { return ___numeric10FacetsChecker_97; }
	inline FacetsChecker_t1235574227 ** get_address_of_numeric10FacetsChecker_97() { return &___numeric10FacetsChecker_97; }
	inline void set_numeric10FacetsChecker_97(FacetsChecker_t1235574227 * value)
	{
		___numeric10FacetsChecker_97 = value;
		Il2CppCodeGenWriteBarrier((&___numeric10FacetsChecker_97), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_NEGATIVEINTEGER_T1070964020_H
#ifndef DATATYPE_NMTOKEN_T2677332311_H
#define DATATYPE_NMTOKEN_T2677332311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_NMTOKEN
struct  Datatype_NMTOKEN_t2677332311  : public Datatype_token_t464702686
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_NMTOKEN_T2677332311_H
#ifndef DATATYPE_NAME_T2060302642_H
#define DATATYPE_NAME_T2060302642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_Name
struct  Datatype_Name_t2060302642  : public Datatype_token_t464702686
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_NAME_T2060302642_H
#ifndef DATATYPE_POSITIVEINTEGER_T3806316496_H
#define DATATYPE_POSITIVEINTEGER_T3806316496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_positiveInteger
struct  Datatype_positiveInteger_t3806316496  : public Datatype_nonNegativeInteger_t1851861419
{
public:

public:
};

struct Datatype_positiveInteger_t3806316496_StaticFields
{
public:
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.Datatype_positiveInteger::numeric10FacetsChecker
	FacetsChecker_t1235574227 * ___numeric10FacetsChecker_97;

public:
	inline static int32_t get_offset_of_numeric10FacetsChecker_97() { return static_cast<int32_t>(offsetof(Datatype_positiveInteger_t3806316496_StaticFields, ___numeric10FacetsChecker_97)); }
	inline FacetsChecker_t1235574227 * get_numeric10FacetsChecker_97() const { return ___numeric10FacetsChecker_97; }
	inline FacetsChecker_t1235574227 ** get_address_of_numeric10FacetsChecker_97() { return &___numeric10FacetsChecker_97; }
	inline void set_numeric10FacetsChecker_97(FacetsChecker_t1235574227 * value)
	{
		___numeric10FacetsChecker_97 = value;
		Il2CppCodeGenWriteBarrier((&___numeric10FacetsChecker_97), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_POSITIVEINTEGER_T3806316496_H
#ifndef DATATYPE_LANGUAGE_T2173537947_H
#define DATATYPE_LANGUAGE_T2173537947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_language
struct  Datatype_language_t2173537947  : public Datatype_token_t464702686
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_LANGUAGE_T2173537947_H
#ifndef DATATYPE_ENUMERATION_T3978335496_H
#define DATATYPE_ENUMERATION_T3978335496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_ENUMERATION
struct  Datatype_ENUMERATION_t3978335496  : public Datatype_NMTOKEN_t2677332311
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_ENUMERATION_T3978335496_H
#ifndef DATATYPE_NCNAME_T1627675837_H
#define DATATYPE_NCNAME_T1627675837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_NCName
struct  Datatype_NCName_t1627675837  : public Datatype_Name_t2060302642
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_NCNAME_T1627675837_H
#ifndef DATATYPE_SHORT_T3426858539_H
#define DATATYPE_SHORT_T3426858539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_short
struct  Datatype_short_t3426858539  : public Datatype_int_t2281243990
{
public:

public:
};

struct Datatype_short_t3426858539_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_short::atomicValueType
	Type_t * ___atomicValueType_102;
	// System.Type System.Xml.Schema.Datatype_short::listValueType
	Type_t * ___listValueType_103;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.Datatype_short::numeric10FacetsChecker
	FacetsChecker_t1235574227 * ___numeric10FacetsChecker_104;

public:
	inline static int32_t get_offset_of_atomicValueType_102() { return static_cast<int32_t>(offsetof(Datatype_short_t3426858539_StaticFields, ___atomicValueType_102)); }
	inline Type_t * get_atomicValueType_102() const { return ___atomicValueType_102; }
	inline Type_t ** get_address_of_atomicValueType_102() { return &___atomicValueType_102; }
	inline void set_atomicValueType_102(Type_t * value)
	{
		___atomicValueType_102 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_102), value);
	}

	inline static int32_t get_offset_of_listValueType_103() { return static_cast<int32_t>(offsetof(Datatype_short_t3426858539_StaticFields, ___listValueType_103)); }
	inline Type_t * get_listValueType_103() const { return ___listValueType_103; }
	inline Type_t ** get_address_of_listValueType_103() { return &___listValueType_103; }
	inline void set_listValueType_103(Type_t * value)
	{
		___listValueType_103 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_103), value);
	}

	inline static int32_t get_offset_of_numeric10FacetsChecker_104() { return static_cast<int32_t>(offsetof(Datatype_short_t3426858539_StaticFields, ___numeric10FacetsChecker_104)); }
	inline FacetsChecker_t1235574227 * get_numeric10FacetsChecker_104() const { return ___numeric10FacetsChecker_104; }
	inline FacetsChecker_t1235574227 ** get_address_of_numeric10FacetsChecker_104() { return &___numeric10FacetsChecker_104; }
	inline void set_numeric10FacetsChecker_104(FacetsChecker_t1235574227 * value)
	{
		___numeric10FacetsChecker_104 = value;
		Il2CppCodeGenWriteBarrier((&___numeric10FacetsChecker_104), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_SHORT_T3426858539_H
#ifndef DATATYPE_UNSIGNEDINT_T4210266973_H
#define DATATYPE_UNSIGNEDINT_T4210266973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_unsignedInt
struct  Datatype_unsignedInt_t4210266973  : public Datatype_unsignedLong_t3462046402
{
public:

public:
};

struct Datatype_unsignedInt_t4210266973_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_unsignedInt::atomicValueType
	Type_t * ___atomicValueType_100;
	// System.Type System.Xml.Schema.Datatype_unsignedInt::listValueType
	Type_t * ___listValueType_101;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.Datatype_unsignedInt::numeric10FacetsChecker
	FacetsChecker_t1235574227 * ___numeric10FacetsChecker_102;

public:
	inline static int32_t get_offset_of_atomicValueType_100() { return static_cast<int32_t>(offsetof(Datatype_unsignedInt_t4210266973_StaticFields, ___atomicValueType_100)); }
	inline Type_t * get_atomicValueType_100() const { return ___atomicValueType_100; }
	inline Type_t ** get_address_of_atomicValueType_100() { return &___atomicValueType_100; }
	inline void set_atomicValueType_100(Type_t * value)
	{
		___atomicValueType_100 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_100), value);
	}

	inline static int32_t get_offset_of_listValueType_101() { return static_cast<int32_t>(offsetof(Datatype_unsignedInt_t4210266973_StaticFields, ___listValueType_101)); }
	inline Type_t * get_listValueType_101() const { return ___listValueType_101; }
	inline Type_t ** get_address_of_listValueType_101() { return &___listValueType_101; }
	inline void set_listValueType_101(Type_t * value)
	{
		___listValueType_101 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_101), value);
	}

	inline static int32_t get_offset_of_numeric10FacetsChecker_102() { return static_cast<int32_t>(offsetof(Datatype_unsignedInt_t4210266973_StaticFields, ___numeric10FacetsChecker_102)); }
	inline FacetsChecker_t1235574227 * get_numeric10FacetsChecker_102() const { return ___numeric10FacetsChecker_102; }
	inline FacetsChecker_t1235574227 ** get_address_of_numeric10FacetsChecker_102() { return &___numeric10FacetsChecker_102; }
	inline void set_numeric10FacetsChecker_102(FacetsChecker_t1235574227 * value)
	{
		___numeric10FacetsChecker_102 = value;
		Il2CppCodeGenWriteBarrier((&___numeric10FacetsChecker_102), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_UNSIGNEDINT_T4210266973_H
#ifndef DATATYPE_ID_T3661482256_H
#define DATATYPE_ID_T3661482256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_ID
struct  Datatype_ID_t3661482256  : public Datatype_NCName_t1627675837
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_ID_T3661482256_H
#ifndef DATATYPE_UNSIGNEDSHORT_T2975932210_H
#define DATATYPE_UNSIGNEDSHORT_T2975932210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_unsignedShort
struct  Datatype_unsignedShort_t2975932210  : public Datatype_unsignedInt_t4210266973
{
public:

public:
};

struct Datatype_unsignedShort_t2975932210_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_unsignedShort::atomicValueType
	Type_t * ___atomicValueType_103;
	// System.Type System.Xml.Schema.Datatype_unsignedShort::listValueType
	Type_t * ___listValueType_104;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.Datatype_unsignedShort::numeric10FacetsChecker
	FacetsChecker_t1235574227 * ___numeric10FacetsChecker_105;

public:
	inline static int32_t get_offset_of_atomicValueType_103() { return static_cast<int32_t>(offsetof(Datatype_unsignedShort_t2975932210_StaticFields, ___atomicValueType_103)); }
	inline Type_t * get_atomicValueType_103() const { return ___atomicValueType_103; }
	inline Type_t ** get_address_of_atomicValueType_103() { return &___atomicValueType_103; }
	inline void set_atomicValueType_103(Type_t * value)
	{
		___atomicValueType_103 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_103), value);
	}

	inline static int32_t get_offset_of_listValueType_104() { return static_cast<int32_t>(offsetof(Datatype_unsignedShort_t2975932210_StaticFields, ___listValueType_104)); }
	inline Type_t * get_listValueType_104() const { return ___listValueType_104; }
	inline Type_t ** get_address_of_listValueType_104() { return &___listValueType_104; }
	inline void set_listValueType_104(Type_t * value)
	{
		___listValueType_104 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_104), value);
	}

	inline static int32_t get_offset_of_numeric10FacetsChecker_105() { return static_cast<int32_t>(offsetof(Datatype_unsignedShort_t2975932210_StaticFields, ___numeric10FacetsChecker_105)); }
	inline FacetsChecker_t1235574227 * get_numeric10FacetsChecker_105() const { return ___numeric10FacetsChecker_105; }
	inline FacetsChecker_t1235574227 ** get_address_of_numeric10FacetsChecker_105() { return &___numeric10FacetsChecker_105; }
	inline void set_numeric10FacetsChecker_105(FacetsChecker_t1235574227 * value)
	{
		___numeric10FacetsChecker_105 = value;
		Il2CppCodeGenWriteBarrier((&___numeric10FacetsChecker_105), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_UNSIGNEDSHORT_T2975932210_H
#ifndef DATATYPE_BYTE_T702122475_H
#define DATATYPE_BYTE_T702122475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_byte
struct  Datatype_byte_t702122475  : public Datatype_short_t3426858539
{
public:

public:
};

struct Datatype_byte_t702122475_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_byte::atomicValueType
	Type_t * ___atomicValueType_105;
	// System.Type System.Xml.Schema.Datatype_byte::listValueType
	Type_t * ___listValueType_106;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.Datatype_byte::numeric10FacetsChecker
	FacetsChecker_t1235574227 * ___numeric10FacetsChecker_107;

public:
	inline static int32_t get_offset_of_atomicValueType_105() { return static_cast<int32_t>(offsetof(Datatype_byte_t702122475_StaticFields, ___atomicValueType_105)); }
	inline Type_t * get_atomicValueType_105() const { return ___atomicValueType_105; }
	inline Type_t ** get_address_of_atomicValueType_105() { return &___atomicValueType_105; }
	inline void set_atomicValueType_105(Type_t * value)
	{
		___atomicValueType_105 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_105), value);
	}

	inline static int32_t get_offset_of_listValueType_106() { return static_cast<int32_t>(offsetof(Datatype_byte_t702122475_StaticFields, ___listValueType_106)); }
	inline Type_t * get_listValueType_106() const { return ___listValueType_106; }
	inline Type_t ** get_address_of_listValueType_106() { return &___listValueType_106; }
	inline void set_listValueType_106(Type_t * value)
	{
		___listValueType_106 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_106), value);
	}

	inline static int32_t get_offset_of_numeric10FacetsChecker_107() { return static_cast<int32_t>(offsetof(Datatype_byte_t702122475_StaticFields, ___numeric10FacetsChecker_107)); }
	inline FacetsChecker_t1235574227 * get_numeric10FacetsChecker_107() const { return ___numeric10FacetsChecker_107; }
	inline FacetsChecker_t1235574227 ** get_address_of_numeric10FacetsChecker_107() { return &___numeric10FacetsChecker_107; }
	inline void set_numeric10FacetsChecker_107(FacetsChecker_t1235574227 * value)
	{
		___numeric10FacetsChecker_107 = value;
		Il2CppCodeGenWriteBarrier((&___numeric10FacetsChecker_107), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_BYTE_T702122475_H
#ifndef DATATYPE_IDREF_T3125569863_H
#define DATATYPE_IDREF_T3125569863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_IDREF
struct  Datatype_IDREF_t3125569863  : public Datatype_NCName_t1627675837
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_IDREF_T3125569863_H
#ifndef DATATYPE_ENTITY_T863271950_H
#define DATATYPE_ENTITY_T863271950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_ENTITY
struct  Datatype_ENTITY_t863271950  : public Datatype_NCName_t1627675837
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_ENTITY_T863271950_H
#ifndef DATATYPE_UNSIGNEDBYTE_T322972434_H
#define DATATYPE_UNSIGNEDBYTE_T322972434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_unsignedByte
struct  Datatype_unsignedByte_t322972434  : public Datatype_unsignedShort_t2975932210
{
public:

public:
};

struct Datatype_unsignedByte_t322972434_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_unsignedByte::atomicValueType
	Type_t * ___atomicValueType_106;
	// System.Type System.Xml.Schema.Datatype_unsignedByte::listValueType
	Type_t * ___listValueType_107;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.Datatype_unsignedByte::numeric10FacetsChecker
	FacetsChecker_t1235574227 * ___numeric10FacetsChecker_108;

public:
	inline static int32_t get_offset_of_atomicValueType_106() { return static_cast<int32_t>(offsetof(Datatype_unsignedByte_t322972434_StaticFields, ___atomicValueType_106)); }
	inline Type_t * get_atomicValueType_106() const { return ___atomicValueType_106; }
	inline Type_t ** get_address_of_atomicValueType_106() { return &___atomicValueType_106; }
	inline void set_atomicValueType_106(Type_t * value)
	{
		___atomicValueType_106 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_106), value);
	}

	inline static int32_t get_offset_of_listValueType_107() { return static_cast<int32_t>(offsetof(Datatype_unsignedByte_t322972434_StaticFields, ___listValueType_107)); }
	inline Type_t * get_listValueType_107() const { return ___listValueType_107; }
	inline Type_t ** get_address_of_listValueType_107() { return &___listValueType_107; }
	inline void set_listValueType_107(Type_t * value)
	{
		___listValueType_107 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_107), value);
	}

	inline static int32_t get_offset_of_numeric10FacetsChecker_108() { return static_cast<int32_t>(offsetof(Datatype_unsignedByte_t322972434_StaticFields, ___numeric10FacetsChecker_108)); }
	inline FacetsChecker_t1235574227 * get_numeric10FacetsChecker_108() const { return ___numeric10FacetsChecker_108; }
	inline FacetsChecker_t1235574227 ** get_address_of_numeric10FacetsChecker_108() { return &___numeric10FacetsChecker_108; }
	inline void set_numeric10FacetsChecker_108(FacetsChecker_t1235574227 * value)
	{
		___numeric10FacetsChecker_108 = value;
		Il2CppCodeGenWriteBarrier((&___numeric10FacetsChecker_108), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_UNSIGNEDBYTE_T322972434_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2100 = { sizeof (ConstraintRole_t3811561833)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2100[4] = 
{
	ConstraintRole_t3811561833::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2101 = { sizeof (ConstraintStruct_t2462842120), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2101[6] = 
{
	ConstraintStruct_t2462842120::get_offset_of_constraint_0(),
	ConstraintStruct_t2462842120::get_offset_of_axisSelector_1(),
	ConstraintStruct_t2462842120::get_offset_of_axisFields_2(),
	ConstraintStruct_t2462842120::get_offset_of_qualifiedTable_3(),
	ConstraintStruct_t2462842120::get_offset_of_keyrefTable_4(),
	ConstraintStruct_t2462842120::get_offset_of_tableDim_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2102 = { sizeof (LocatedActiveAxis_t90453917), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2102[3] = 
{
	LocatedActiveAxis_t90453917::get_offset_of_column_4(),
	LocatedActiveAxis_t90453917::get_offset_of_isMatched_5(),
	LocatedActiveAxis_t90453917::get_offset_of_Ks_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2103 = { sizeof (SelectorActiveAxis_t789423304), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2103[3] = 
{
	SelectorActiveAxis_t789423304::get_offset_of_cs_4(),
	SelectorActiveAxis_t789423304::get_offset_of_KSs_5(),
	SelectorActiveAxis_t789423304::get_offset_of_KSpointer_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2104 = { sizeof (KSStruct_t704598349), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2104[3] = 
{
	KSStruct_t704598349::get_offset_of_depth_0(),
	KSStruct_t704598349::get_offset_of_ks_1(),
	KSStruct_t704598349::get_offset_of_fields_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2105 = { sizeof (TypedObject_t1797374135), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2105[6] = 
{
	TypedObject_t1797374135::get_offset_of_dstruct_0(),
	TypedObject_t1797374135::get_offset_of_ovalue_1(),
	TypedObject_t1797374135::get_offset_of_svalue_2(),
	TypedObject_t1797374135::get_offset_of_xsdtype_3(),
	TypedObject_t1797374135::get_offset_of_dim_4(),
	TypedObject_t1797374135::get_offset_of_isList_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2106 = { sizeof (DecimalStruct_t715828147), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2106[2] = 
{
	DecimalStruct_t715828147::get_offset_of_isDecimal_0(),
	DecimalStruct_t715828147::get_offset_of_dvalue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2107 = { sizeof (KeySequence_t746093258), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2107[5] = 
{
	KeySequence_t746093258::get_offset_of_ks_0(),
	KeySequence_t746093258::get_offset_of_dim_1(),
	KeySequence_t746093258::get_offset_of_hashcode_2(),
	KeySequence_t746093258::get_offset_of_posline_3(),
	KeySequence_t746093258::get_offset_of_poscol_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2108 = { sizeof (UpaException_t656169215), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2108[2] = 
{
	UpaException_t656169215::get_offset_of_particle1_16(),
	UpaException_t656169215::get_offset_of_particle2_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2109 = { sizeof (SymbolsDictionary_t1753655453), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2109[6] = 
{
	SymbolsDictionary_t1753655453::get_offset_of_last_0(),
	SymbolsDictionary_t1753655453::get_offset_of_names_1(),
	SymbolsDictionary_t1753655453::get_offset_of_wildcards_2(),
	SymbolsDictionary_t1753655453::get_offset_of_particles_3(),
	SymbolsDictionary_t1753655453::get_offset_of_particleLast_4(),
	SymbolsDictionary_t1753655453::get_offset_of_isUpaEnforced_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2110 = { sizeof (Position_t1796812729)+ sizeof (RuntimeObject), sizeof(Position_t1796812729_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2110[2] = 
{
	Position_t1796812729::get_offset_of_symbol_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Position_t1796812729::get_offset_of_particle_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2111 = { sizeof (Positions_t3593914952), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2111[1] = 
{
	Positions_t3593914952::get_offset_of_positions_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2112 = { sizeof (SyntaxTreeNode_t2397191729), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2113 = { sizeof (LeafNode_t3748718316), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2113[1] = 
{
	LeafNode_t3748718316::get_offset_of_pos_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2114 = { sizeof (NamespaceListNode_t2509262495), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2114[2] = 
{
	NamespaceListNode_t2509262495::get_offset_of_namespaceList_0(),
	NamespaceListNode_t2509262495::get_offset_of_particle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2115 = { sizeof (InteriorNode_t2716368958), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2115[2] = 
{
	InteriorNode_t2716368958::get_offset_of_leftChild_0(),
	InteriorNode_t2716368958::get_offset_of_rightChild_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2116 = { sizeof (SequenceNode_t4039907291), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2117 = { sizeof (SequenceConstructPosContext_t3853454650)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2117[5] = 
{
	SequenceConstructPosContext_t3853454650::get_offset_of_this__0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SequenceConstructPosContext_t3853454650::get_offset_of_firstpos_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SequenceConstructPosContext_t3853454650::get_offset_of_lastpos_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SequenceConstructPosContext_t3853454650::get_offset_of_lastposLeft_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SequenceConstructPosContext_t3853454650::get_offset_of_firstposRight_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2118 = { sizeof (ChoiceNode_t3123692209), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2119 = { sizeof (PlusNode_t3494526928), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2120 = { sizeof (QmarkNode_t902109702), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2121 = { sizeof (StarNode_t2416964522), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2122 = { sizeof (LeafRangeNode_t2572019409), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2122[3] = 
{
	LeafRangeNode_t2572019409::get_offset_of_min_1(),
	LeafRangeNode_t2572019409::get_offset_of_max_2(),
	LeafRangeNode_t2572019409::get_offset_of_nextIteration_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2123 = { sizeof (ContentValidator_t2510151843), -1, sizeof(ContentValidator_t2510151843_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2123[7] = 
{
	ContentValidator_t2510151843::get_offset_of_contentType_0(),
	ContentValidator_t2510151843::get_offset_of_isOpen_1(),
	ContentValidator_t2510151843::get_offset_of_isEmptiable_2(),
	ContentValidator_t2510151843_StaticFields::get_offset_of_Empty_3(),
	ContentValidator_t2510151843_StaticFields::get_offset_of_TextOnly_4(),
	ContentValidator_t2510151843_StaticFields::get_offset_of_Mixed_5(),
	ContentValidator_t2510151843_StaticFields::get_offset_of_Any_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2124 = { sizeof (ParticleContentValidator_t1341047977), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2124[7] = 
{
	ParticleContentValidator_t1341047977::get_offset_of_symbols_7(),
	ParticleContentValidator_t1341047977::get_offset_of_positions_8(),
	ParticleContentValidator_t1341047977::get_offset_of_stack_9(),
	ParticleContentValidator_t1341047977::get_offset_of_contentNode_10(),
	ParticleContentValidator_t1341047977::get_offset_of_isPartial_11(),
	ParticleContentValidator_t1341047977::get_offset_of_minMaxNodesCount_12(),
	ParticleContentValidator_t1341047977::get_offset_of_enableUpaCheck_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2125 = { sizeof (DfaContentValidator_t429624170), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2125[2] = 
{
	DfaContentValidator_t429624170::get_offset_of_transitionTable_7(),
	DfaContentValidator_t429624170::get_offset_of_symbols_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2126 = { sizeof (NfaContentValidator_t1842871216), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2126[5] = 
{
	NfaContentValidator_t1842871216::get_offset_of_firstpos_7(),
	NfaContentValidator_t1842871216::get_offset_of_followpos_8(),
	NfaContentValidator_t1842871216::get_offset_of_symbols_9(),
	NfaContentValidator_t1842871216::get_offset_of_positions_10(),
	NfaContentValidator_t1842871216::get_offset_of_endMarkerPos_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2127 = { sizeof (RangePositionInfo_t2780802922)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2127[2] = 
{
	RangePositionInfo_t2780802922::get_offset_of_curpos_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RangePositionInfo_t2780802922::get_offset_of_rangeCounters_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2128 = { sizeof (RangeContentValidator_t857885766), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2128[7] = 
{
	RangeContentValidator_t857885766::get_offset_of_firstpos_7(),
	RangeContentValidator_t857885766::get_offset_of_followpos_8(),
	RangeContentValidator_t857885766::get_offset_of_positionsWithRangeTerminals_9(),
	RangeContentValidator_t857885766::get_offset_of_symbols_10(),
	RangeContentValidator_t857885766::get_offset_of_positions_11(),
	RangeContentValidator_t857885766::get_offset_of_minMaxNodesCount_12(),
	RangeContentValidator_t857885766::get_offset_of_endMarkerPos_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2129 = { sizeof (AllElementsContentValidator_t2095068475), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2129[4] = 
{
	AllElementsContentValidator_t2095068475::get_offset_of_elements_7(),
	AllElementsContentValidator_t2095068475::get_offset_of_particles_8(),
	AllElementsContentValidator_t2095068475::get_offset_of_isRequired_9(),
	AllElementsContentValidator_t2095068475::get_offset_of_countRequired_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2130 = { sizeof (XmlSchemaDatatypeVariety_t2237606318)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2130[4] = 
{
	XmlSchemaDatatypeVariety_t2237606318::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2131 = { sizeof (XsdSimpleValue_t478440528), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2131[2] = 
{
	XsdSimpleValue_t478440528::get_offset_of_xmlType_0(),
	XsdSimpleValue_t478440528::get_offset_of_typedValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2132 = { sizeof (RestrictionFlags_t2588355947)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2132[13] = 
{
	RestrictionFlags_t2588355947::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2133 = { sizeof (XmlSchemaWhiteSpace_t3746245107)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2133[4] = 
{
	XmlSchemaWhiteSpace_t3746245107::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2134 = { sizeof (RestrictionFacets_t4012658256), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2134[14] = 
{
	RestrictionFacets_t4012658256::get_offset_of_Length_0(),
	RestrictionFacets_t4012658256::get_offset_of_MinLength_1(),
	RestrictionFacets_t4012658256::get_offset_of_MaxLength_2(),
	RestrictionFacets_t4012658256::get_offset_of_Patterns_3(),
	RestrictionFacets_t4012658256::get_offset_of_Enumeration_4(),
	RestrictionFacets_t4012658256::get_offset_of_WhiteSpace_5(),
	RestrictionFacets_t4012658256::get_offset_of_MaxInclusive_6(),
	RestrictionFacets_t4012658256::get_offset_of_MaxExclusive_7(),
	RestrictionFacets_t4012658256::get_offset_of_MinInclusive_8(),
	RestrictionFacets_t4012658256::get_offset_of_MinExclusive_9(),
	RestrictionFacets_t4012658256::get_offset_of_TotalDigits_10(),
	RestrictionFacets_t4012658256::get_offset_of_FractionDigits_11(),
	RestrictionFacets_t4012658256::get_offset_of_Flags_12(),
	RestrictionFacets_t4012658256::get_offset_of_FixedFlags_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2135 = { sizeof (DatatypeImplementation_t1152094268), -1, sizeof(DatatypeImplementation_t1152094268_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2135[91] = 
{
	DatatypeImplementation_t1152094268::get_offset_of_variety_0(),
	DatatypeImplementation_t1152094268::get_offset_of_restriction_1(),
	DatatypeImplementation_t1152094268::get_offset_of_baseType_2(),
	DatatypeImplementation_t1152094268::get_offset_of_valueConverter_3(),
	DatatypeImplementation_t1152094268::get_offset_of_parentSchemaType_4(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_builtinTypes_5(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_enumToTypeCode_6(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_anySimpleType_7(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_anyAtomicType_8(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_untypedAtomicType_9(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_yearMonthDurationType_10(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_dayTimeDurationType_11(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_normalizedStringTypeV1Compat_12(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_tokenTypeV1Compat_13(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_QnAnySimpleType_14(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_QnAnyType_15(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_stringFacetsChecker_16(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_miscFacetsChecker_17(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_numeric2FacetsChecker_18(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_binaryFacetsChecker_19(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_dateTimeFacetsChecker_20(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_durationFacetsChecker_21(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_listFacetsChecker_22(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_qnameFacetsChecker_23(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_unionFacetsChecker_24(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_anySimpleType_25(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_anyURI_26(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_base64Binary_27(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_boolean_28(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_byte_29(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_char_30(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_date_31(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_dateTime_32(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_dateTimeNoTz_33(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_dateTimeTz_34(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_day_35(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_decimal_36(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_double_37(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_doubleXdr_38(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_duration_39(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_ENTITY_40(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_ENTITIES_41(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_ENUMERATION_42(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_fixed_43(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_float_44(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_floatXdr_45(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_hexBinary_46(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_ID_47(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_IDREF_48(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_IDREFS_49(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_int_50(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_integer_51(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_language_52(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_long_53(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_month_54(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_monthDay_55(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_Name_56(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_NCName_57(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_negativeInteger_58(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_NMTOKEN_59(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_NMTOKENS_60(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_nonNegativeInteger_61(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_nonPositiveInteger_62(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_normalizedString_63(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_NOTATION_64(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_positiveInteger_65(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_QName_66(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_QNameXdr_67(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_short_68(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_string_69(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_time_70(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_timeNoTz_71(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_timeTz_72(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_token_73(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_unsignedByte_74(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_unsignedInt_75(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_unsignedLong_76(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_unsignedShort_77(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_uuid_78(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_year_79(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_yearMonth_80(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_normalizedStringV1Compat_81(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_tokenV1Compat_82(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_anyAtomicType_83(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_dayTimeDuration_84(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_untypedAtomicType_85(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_yearMonthDuration_86(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_tokenizedTypes_87(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_tokenizedTypesXsd_88(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_XdrTypes_89(),
	DatatypeImplementation_t1152094268_StaticFields::get_offset_of_c_XsdTypes_90(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2136 = { sizeof (SchemaDatatypeMap_t2661667341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2136[3] = 
{
	SchemaDatatypeMap_t2661667341::get_offset_of_name_0(),
	SchemaDatatypeMap_t2661667341::get_offset_of_type_1(),
	SchemaDatatypeMap_t2661667341::get_offset_of_parentIndex_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2137 = { sizeof (Datatype_List_t1892289229), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2137[2] = 
{
	Datatype_List_t1892289229::get_offset_of_itemType_93(),
	Datatype_List_t1892289229::get_offset_of_minListSize_94(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2138 = { sizeof (Datatype_union_t2515141346), -1, sizeof(Datatype_union_t2515141346_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2138[3] = 
{
	Datatype_union_t2515141346_StaticFields::get_offset_of_atomicValueType_93(),
	Datatype_union_t2515141346_StaticFields::get_offset_of_listValueType_94(),
	Datatype_union_t2515141346::get_offset_of_types_95(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2139 = { sizeof (Datatype_anySimpleType_t4012795865), -1, sizeof(Datatype_anySimpleType_t4012795865_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2139[2] = 
{
	Datatype_anySimpleType_t4012795865_StaticFields::get_offset_of_atomicValueType_91(),
	Datatype_anySimpleType_t4012795865_StaticFields::get_offset_of_listValueType_92(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2140 = { sizeof (Datatype_anyAtomicType_t4212901794), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2141 = { sizeof (Datatype_untypedAtomicType_t3332440493), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2142 = { sizeof (Datatype_string_t995037180), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2143 = { sizeof (Datatype_boolean_t293982753), -1, sizeof(Datatype_boolean_t293982753_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2143[2] = 
{
	Datatype_boolean_t293982753_StaticFields::get_offset_of_atomicValueType_93(),
	Datatype_boolean_t293982753_StaticFields::get_offset_of_listValueType_94(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2144 = { sizeof (Datatype_float_t3149441939), -1, sizeof(Datatype_float_t3149441939_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2144[2] = 
{
	Datatype_float_t3149441939_StaticFields::get_offset_of_atomicValueType_93(),
	Datatype_float_t3149441939_StaticFields::get_offset_of_listValueType_94(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2145 = { sizeof (Datatype_double_t1050796240), -1, sizeof(Datatype_double_t1050796240_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2145[2] = 
{
	Datatype_double_t1050796240_StaticFields::get_offset_of_atomicValueType_93(),
	Datatype_double_t1050796240_StaticFields::get_offset_of_listValueType_94(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2146 = { sizeof (Datatype_decimal_t2973594954), -1, sizeof(Datatype_decimal_t2973594954_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2146[3] = 
{
	Datatype_decimal_t2973594954_StaticFields::get_offset_of_atomicValueType_93(),
	Datatype_decimal_t2973594954_StaticFields::get_offset_of_listValueType_94(),
	Datatype_decimal_t2973594954_StaticFields::get_offset_of_numeric10FacetsChecker_95(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2147 = { sizeof (Datatype_duration_t1871787273), -1, sizeof(Datatype_duration_t1871787273_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2147[2] = 
{
	Datatype_duration_t1871787273_StaticFields::get_offset_of_atomicValueType_93(),
	Datatype_duration_t1871787273_StaticFields::get_offset_of_listValueType_94(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2148 = { sizeof (Datatype_yearMonthDuration_t1235863080), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2149 = { sizeof (Datatype_dayTimeDuration_t2638197894), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2150 = { sizeof (Datatype_dateTimeBase_t2449194189), -1, sizeof(Datatype_dateTimeBase_t2449194189_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2150[3] = 
{
	Datatype_dateTimeBase_t2449194189_StaticFields::get_offset_of_atomicValueType_93(),
	Datatype_dateTimeBase_t2449194189_StaticFields::get_offset_of_listValueType_94(),
	Datatype_dateTimeBase_t2449194189::get_offset_of_dateTimeFlags_95(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2151 = { sizeof (Datatype_dateTimeNoTimeZone_t3887107098), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2152 = { sizeof (Datatype_dateTimeTimeZone_t3703324323), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2153 = { sizeof (Datatype_dateTime_t1101103220), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2154 = { sizeof (Datatype_timeNoTimeZone_t1747796622), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2155 = { sizeof (Datatype_timeTimeZone_t3702809551), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2156 = { sizeof (Datatype_time_t305227304), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2157 = { sizeof (Datatype_date_t903634781), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2158 = { sizeof (Datatype_yearMonth_t1775492394), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2159 = { sizeof (Datatype_year_t527201590), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2160 = { sizeof (Datatype_monthDay_t1515801313), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2161 = { sizeof (Datatype_day_t3625353511), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2162 = { sizeof (Datatype_month_t2424718095), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2163 = { sizeof (Datatype_hexBinary_t2599154205), -1, sizeof(Datatype_hexBinary_t2599154205_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2163[2] = 
{
	Datatype_hexBinary_t2599154205_StaticFields::get_offset_of_atomicValueType_93(),
	Datatype_hexBinary_t2599154205_StaticFields::get_offset_of_listValueType_94(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2164 = { sizeof (Datatype_base64Binary_t3902009307), -1, sizeof(Datatype_base64Binary_t3902009307_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2164[2] = 
{
	Datatype_base64Binary_t3902009307_StaticFields::get_offset_of_atomicValueType_93(),
	Datatype_base64Binary_t3902009307_StaticFields::get_offset_of_listValueType_94(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2165 = { sizeof (Datatype_anyURI_t2417434093), -1, sizeof(Datatype_anyURI_t2417434093_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2165[2] = 
{
	Datatype_anyURI_t2417434093_StaticFields::get_offset_of_atomicValueType_93(),
	Datatype_anyURI_t2417434093_StaticFields::get_offset_of_listValueType_94(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2166 = { sizeof (Datatype_QName_t2180543649), -1, sizeof(Datatype_QName_t2180543649_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2166[2] = 
{
	Datatype_QName_t2180543649_StaticFields::get_offset_of_atomicValueType_93(),
	Datatype_QName_t2180543649_StaticFields::get_offset_of_listValueType_94(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2167 = { sizeof (Datatype_normalizedString_t2314411649), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2168 = { sizeof (Datatype_normalizedStringV1Compat_t2394903178), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2169 = { sizeof (Datatype_token_t464702686), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2170 = { sizeof (Datatype_tokenV1Compat_t64797735), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2171 = { sizeof (Datatype_language_t2173537947), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2172 = { sizeof (Datatype_NMTOKEN_t2677332311), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2173 = { sizeof (Datatype_Name_t2060302642), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2174 = { sizeof (Datatype_NCName_t1627675837), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2175 = { sizeof (Datatype_ID_t3661482256), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2176 = { sizeof (Datatype_IDREF_t3125569863), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2177 = { sizeof (Datatype_ENTITY_t863271950), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2178 = { sizeof (Datatype_NOTATION_t3412197483), -1, sizeof(Datatype_NOTATION_t3412197483_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2178[2] = 
{
	Datatype_NOTATION_t3412197483_StaticFields::get_offset_of_atomicValueType_93(),
	Datatype_NOTATION_t3412197483_StaticFields::get_offset_of_listValueType_94(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2179 = { sizeof (Datatype_integer_t404053727), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2180 = { sizeof (Datatype_nonPositiveInteger_t863439515), -1, sizeof(Datatype_nonPositiveInteger_t863439515_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2180[1] = 
{
	Datatype_nonPositiveInteger_t863439515_StaticFields::get_offset_of_numeric10FacetsChecker_96(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2181 = { sizeof (Datatype_negativeInteger_t1070964020), -1, sizeof(Datatype_negativeInteger_t1070964020_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2181[1] = 
{
	Datatype_negativeInteger_t1070964020_StaticFields::get_offset_of_numeric10FacetsChecker_97(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2182 = { sizeof (Datatype_long_t513905339), -1, sizeof(Datatype_long_t513905339_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2182[3] = 
{
	Datatype_long_t513905339_StaticFields::get_offset_of_atomicValueType_96(),
	Datatype_long_t513905339_StaticFields::get_offset_of_listValueType_97(),
	Datatype_long_t513905339_StaticFields::get_offset_of_numeric10FacetsChecker_98(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2183 = { sizeof (Datatype_int_t2281243990), -1, sizeof(Datatype_int_t2281243990_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2183[3] = 
{
	Datatype_int_t2281243990_StaticFields::get_offset_of_atomicValueType_99(),
	Datatype_int_t2281243990_StaticFields::get_offset_of_listValueType_100(),
	Datatype_int_t2281243990_StaticFields::get_offset_of_numeric10FacetsChecker_101(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2184 = { sizeof (Datatype_short_t3426858539), -1, sizeof(Datatype_short_t3426858539_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2184[3] = 
{
	Datatype_short_t3426858539_StaticFields::get_offset_of_atomicValueType_102(),
	Datatype_short_t3426858539_StaticFields::get_offset_of_listValueType_103(),
	Datatype_short_t3426858539_StaticFields::get_offset_of_numeric10FacetsChecker_104(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2185 = { sizeof (Datatype_byte_t702122475), -1, sizeof(Datatype_byte_t702122475_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2185[3] = 
{
	Datatype_byte_t702122475_StaticFields::get_offset_of_atomicValueType_105(),
	Datatype_byte_t702122475_StaticFields::get_offset_of_listValueType_106(),
	Datatype_byte_t702122475_StaticFields::get_offset_of_numeric10FacetsChecker_107(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2186 = { sizeof (Datatype_nonNegativeInteger_t1851861419), -1, sizeof(Datatype_nonNegativeInteger_t1851861419_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2186[1] = 
{
	Datatype_nonNegativeInteger_t1851861419_StaticFields::get_offset_of_numeric10FacetsChecker_96(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2187 = { sizeof (Datatype_unsignedLong_t3462046402), -1, sizeof(Datatype_unsignedLong_t3462046402_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2187[3] = 
{
	Datatype_unsignedLong_t3462046402_StaticFields::get_offset_of_atomicValueType_97(),
	Datatype_unsignedLong_t3462046402_StaticFields::get_offset_of_listValueType_98(),
	Datatype_unsignedLong_t3462046402_StaticFields::get_offset_of_numeric10FacetsChecker_99(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2188 = { sizeof (Datatype_unsignedInt_t4210266973), -1, sizeof(Datatype_unsignedInt_t4210266973_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2188[3] = 
{
	Datatype_unsignedInt_t4210266973_StaticFields::get_offset_of_atomicValueType_100(),
	Datatype_unsignedInt_t4210266973_StaticFields::get_offset_of_listValueType_101(),
	Datatype_unsignedInt_t4210266973_StaticFields::get_offset_of_numeric10FacetsChecker_102(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2189 = { sizeof (Datatype_unsignedShort_t2975932210), -1, sizeof(Datatype_unsignedShort_t2975932210_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2189[3] = 
{
	Datatype_unsignedShort_t2975932210_StaticFields::get_offset_of_atomicValueType_103(),
	Datatype_unsignedShort_t2975932210_StaticFields::get_offset_of_listValueType_104(),
	Datatype_unsignedShort_t2975932210_StaticFields::get_offset_of_numeric10FacetsChecker_105(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2190 = { sizeof (Datatype_unsignedByte_t322972434), -1, sizeof(Datatype_unsignedByte_t322972434_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2190[3] = 
{
	Datatype_unsignedByte_t322972434_StaticFields::get_offset_of_atomicValueType_106(),
	Datatype_unsignedByte_t322972434_StaticFields::get_offset_of_listValueType_107(),
	Datatype_unsignedByte_t322972434_StaticFields::get_offset_of_numeric10FacetsChecker_108(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2191 = { sizeof (Datatype_positiveInteger_t3806316496), -1, sizeof(Datatype_positiveInteger_t3806316496_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2191[1] = 
{
	Datatype_positiveInteger_t3806316496_StaticFields::get_offset_of_numeric10FacetsChecker_97(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2192 = { sizeof (Datatype_doubleXdr_t2833069974), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2193 = { sizeof (Datatype_floatXdr_t1510312673), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2194 = { sizeof (Datatype_QNameXdr_t2452527483), -1, sizeof(Datatype_QNameXdr_t2452527483_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2194[2] = 
{
	Datatype_QNameXdr_t2452527483_StaticFields::get_offset_of_atomicValueType_93(),
	Datatype_QNameXdr_t2452527483_StaticFields::get_offset_of_listValueType_94(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2195 = { sizeof (Datatype_ENUMERATION_t3978335496), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2196 = { sizeof (Datatype_char_t534108237), -1, sizeof(Datatype_char_t534108237_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2196[2] = 
{
	Datatype_char_t534108237_StaticFields::get_offset_of_atomicValueType_93(),
	Datatype_char_t534108237_StaticFields::get_offset_of_listValueType_94(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2197 = { sizeof (Datatype_fixed_t1126112663), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2198 = { sizeof (Datatype_uuid_t2771989020), -1, sizeof(Datatype_uuid_t2771989020_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2198[2] = 
{
	Datatype_uuid_t2771989020_StaticFields::get_offset_of_atomicValueType_93(),
	Datatype_uuid_t2771989020_StaticFields::get_offset_of_listValueType_94(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2199 = { sizeof (DtdValidator_t1639720164), -1, sizeof(DtdValidator_t1639720164_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2199[7] = 
{
	DtdValidator_t1639720164_StaticFields::get_offset_of_namespaceManager_15(),
	DtdValidator_t1639720164::get_offset_of_validationStack_16(),
	DtdValidator_t1639720164::get_offset_of_attPresence_17(),
	DtdValidator_t1639720164::get_offset_of_name_18(),
	DtdValidator_t1639720164::get_offset_of_IDs_19(),
	DtdValidator_t1639720164::get_offset_of_idRefListHead_20(),
	DtdValidator_t1639720164::get_offset_of_processIdentityConstraints_21(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
