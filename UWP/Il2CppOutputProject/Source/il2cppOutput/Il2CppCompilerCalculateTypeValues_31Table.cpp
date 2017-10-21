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

// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t3015504955;
// System.Type
struct Type_t;
// System.Linq.Expressions.Expression
struct Expression_t114864668;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t300650360;
// System.Linq.Expressions.BlockExpressionList
struct BlockExpressionList_t2441099961;
// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>
struct Func_2_t2343678841;
// System.Linq.Expressions.BlockExpression
struct BlockExpression_t707433991;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_t3259078812;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t3704543592;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t2398207075;
// System.String
struct String_t;
// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression>
struct IReadOnlyList_1_t1813243055;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1663937576;
// System.Linq.Expressions.NewExpression
struct NewExpression_t1045017810;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t4083992128;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t3673584233;
// System.Linq.Expressions.LabelTarget
struct LabelTarget_t2114570595;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo>
struct ReadOnlyCollection_1_t4228882952;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t3201290647;
// System.Linq.Expressions.SymbolDocumentInfo
struct SymbolDocumentInfo_t3710961819;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.ParameterExpression>
struct IReadOnlyList_1_t418916046;
// System.Reflection.MemberInfo
struct MemberInfo_t;




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
#ifndef CATCHBLOCK_T4020249662_H
#define CATCHBLOCK_T4020249662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.CatchBlock
struct  CatchBlock_t4020249662  : public RuntimeObject
{
public:
	// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.CatchBlock::<Variable>k__BackingField
	ParameterExpression_t3015504955 * ___U3CVariableU3Ek__BackingField_0;
	// System.Type System.Linq.Expressions.CatchBlock::<Test>k__BackingField
	Type_t * ___U3CTestU3Ek__BackingField_1;
	// System.Linq.Expressions.Expression System.Linq.Expressions.CatchBlock::<Body>k__BackingField
	Expression_t114864668 * ___U3CBodyU3Ek__BackingField_2;
	// System.Linq.Expressions.Expression System.Linq.Expressions.CatchBlock::<Filter>k__BackingField
	Expression_t114864668 * ___U3CFilterU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CVariableU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CatchBlock_t4020249662, ___U3CVariableU3Ek__BackingField_0)); }
	inline ParameterExpression_t3015504955 * get_U3CVariableU3Ek__BackingField_0() const { return ___U3CVariableU3Ek__BackingField_0; }
	inline ParameterExpression_t3015504955 ** get_address_of_U3CVariableU3Ek__BackingField_0() { return &___U3CVariableU3Ek__BackingField_0; }
	inline void set_U3CVariableU3Ek__BackingField_0(ParameterExpression_t3015504955 * value)
	{
		___U3CVariableU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CVariableU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CTestU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CatchBlock_t4020249662, ___U3CTestU3Ek__BackingField_1)); }
	inline Type_t * get_U3CTestU3Ek__BackingField_1() const { return ___U3CTestU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CTestU3Ek__BackingField_1() { return &___U3CTestU3Ek__BackingField_1; }
	inline void set_U3CTestU3Ek__BackingField_1(Type_t * value)
	{
		___U3CTestU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTestU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CBodyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CatchBlock_t4020249662, ___U3CBodyU3Ek__BackingField_2)); }
	inline Expression_t114864668 * get_U3CBodyU3Ek__BackingField_2() const { return ___U3CBodyU3Ek__BackingField_2; }
	inline Expression_t114864668 ** get_address_of_U3CBodyU3Ek__BackingField_2() { return &___U3CBodyU3Ek__BackingField_2; }
	inline void set_U3CBodyU3Ek__BackingField_2(Expression_t114864668 * value)
	{
		___U3CBodyU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBodyU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CFilterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CatchBlock_t4020249662, ___U3CFilterU3Ek__BackingField_3)); }
	inline Expression_t114864668 * get_U3CFilterU3Ek__BackingField_3() const { return ___U3CFilterU3Ek__BackingField_3; }
	inline Expression_t114864668 ** get_address_of_U3CFilterU3Ek__BackingField_3() { return &___U3CFilterU3Ek__BackingField_3; }
	inline void set_U3CFilterU3Ek__BackingField_3(Expression_t114864668 * value)
	{
		___U3CFilterU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFilterU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATCHBLOCK_T4020249662_H
#ifndef ELEMENTINIT_T3898206436_H
#define ELEMENTINIT_T3898206436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ElementInit
struct  ElementInit_t3898206436  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo System.Linq.Expressions.ElementInit::<AddMethod>k__BackingField
	MethodInfo_t * ___U3CAddMethodU3Ek__BackingField_0;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.ElementInit::<Arguments>k__BackingField
	ReadOnlyCollection_1_t300650360 * ___U3CArgumentsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAddMethodU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ElementInit_t3898206436, ___U3CAddMethodU3Ek__BackingField_0)); }
	inline MethodInfo_t * get_U3CAddMethodU3Ek__BackingField_0() const { return ___U3CAddMethodU3Ek__BackingField_0; }
	inline MethodInfo_t ** get_address_of_U3CAddMethodU3Ek__BackingField_0() { return &___U3CAddMethodU3Ek__BackingField_0; }
	inline void set_U3CAddMethodU3Ek__BackingField_0(MethodInfo_t * value)
	{
		___U3CAddMethodU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAddMethodU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CArgumentsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ElementInit_t3898206436, ___U3CArgumentsU3Ek__BackingField_1)); }
	inline ReadOnlyCollection_1_t300650360 * get_U3CArgumentsU3Ek__BackingField_1() const { return ___U3CArgumentsU3Ek__BackingField_1; }
	inline ReadOnlyCollection_1_t300650360 ** get_address_of_U3CArgumentsU3Ek__BackingField_1() { return &___U3CArgumentsU3Ek__BackingField_1; }
	inline void set_U3CArgumentsU3Ek__BackingField_1(ReadOnlyCollection_1_t300650360 * value)
	{
		___U3CArgumentsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CArgumentsU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEMENTINIT_T3898206436_H
#ifndef U3CGETENUMERATORU3ED__18_T2113259017_H
#define U3CGETENUMERATORU3ED__18_T2113259017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.BlockExpressionList/<GetEnumerator>d__18
struct  U3CGetEnumeratorU3Ed__18_t2113259017  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Expressions.BlockExpressionList/<GetEnumerator>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BlockExpressionList/<GetEnumerator>d__18::<>2__current
	Expression_t114864668 * ___U3CU3E2__current_1;
	// System.Linq.Expressions.BlockExpressionList System.Linq.Expressions.BlockExpressionList/<GetEnumerator>d__18::<>4__this
	BlockExpressionList_t2441099961 * ___U3CU3E4__this_2;
	// System.Int32 System.Linq.Expressions.BlockExpressionList/<GetEnumerator>d__18::<i>5__1
	int32_t ___U3CiU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_t2113259017, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_t2113259017, ___U3CU3E2__current_1)); }
	inline Expression_t114864668 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Expression_t114864668 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Expression_t114864668 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_t2113259017, ___U3CU3E4__this_2)); }
	inline BlockExpressionList_t2441099961 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BlockExpressionList_t2441099961 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BlockExpressionList_t2441099961 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_t2113259017, ___U3CiU3E5__1_3)); }
	inline int32_t get_U3CiU3E5__1_3() const { return ___U3CiU3E5__1_3; }
	inline int32_t* get_address_of_U3CiU3E5__1_3() { return &___U3CiU3E5__1_3; }
	inline void set_U3CiU3E5__1_3(int32_t value)
	{
		___U3CiU3E5__1_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETENUMERATORU3ED__18_T2113259017_H
#ifndef U3CU3EC_T1368195862_H
#define U3CU3EC_T1368195862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/<>c
struct  U3CU3Ec_t1368195862  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1368195862_StaticFields
{
public:
	// System.Linq.Expressions.Expression/<>c System.Linq.Expressions.Expression/<>c::<>9
	U3CU3Ec_t1368195862 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> System.Linq.Expressions.Expression/<>c::<>9__364_0
	Func_2_t2343678841 * ___U3CU3E9__364_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1368195862_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1368195862 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1368195862 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1368195862 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__364_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1368195862_StaticFields, ___U3CU3E9__364_0_1)); }
	inline Func_2_t2343678841 * get_U3CU3E9__364_0_1() const { return ___U3CU3E9__364_0_1; }
	inline Func_2_t2343678841 ** get_address_of_U3CU3E9__364_0_1() { return &___U3CU3E9__364_0_1; }
	inline void set_U3CU3E9__364_0_1(Func_2_t2343678841 * value)
	{
		___U3CU3E9__364_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__364_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T1368195862_H
#ifndef BLOCKEXPRESSIONLIST_T2441099961_H
#define BLOCKEXPRESSIONLIST_T2441099961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.BlockExpressionList
struct  BlockExpressionList_t2441099961  : public RuntimeObject
{
public:
	// System.Linq.Expressions.BlockExpression System.Linq.Expressions.BlockExpressionList::_block
	BlockExpression_t707433991 * ____block_0;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BlockExpressionList::_arg0
	Expression_t114864668 * ____arg0_1;

public:
	inline static int32_t get_offset_of__block_0() { return static_cast<int32_t>(offsetof(BlockExpressionList_t2441099961, ____block_0)); }
	inline BlockExpression_t707433991 * get__block_0() const { return ____block_0; }
	inline BlockExpression_t707433991 ** get_address_of__block_0() { return &____block_0; }
	inline void set__block_0(BlockExpression_t707433991 * value)
	{
		____block_0 = value;
		Il2CppCodeGenWriteBarrier((&____block_0), value);
	}

	inline static int32_t get_offset_of__arg0_1() { return static_cast<int32_t>(offsetof(BlockExpressionList_t2441099961, ____arg0_1)); }
	inline Expression_t114864668 * get__arg0_1() const { return ____arg0_1; }
	inline Expression_t114864668 ** get_address_of__arg0_1() { return &____arg0_1; }
	inline void set__arg0_1(Expression_t114864668 * value)
	{
		____arg0_1 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCKEXPRESSIONLIST_T2441099961_H
#ifndef ERROR_T4281176116_H
#define ERROR_T4281176116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Error
struct  Error_t4281176116  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERROR_T4281176116_H
#ifndef STACKGUARD_T935784647_H
#define STACKGUARD_T935784647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.StackGuard
struct  StackGuard_t935784647  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Expressions.StackGuard::_executionStackCount
	int32_t ____executionStackCount_0;

public:
	inline static int32_t get_offset_of__executionStackCount_0() { return static_cast<int32_t>(offsetof(StackGuard_t935784647, ____executionStackCount_0)); }
	inline int32_t get__executionStackCount_0() const { return ____executionStackCount_0; }
	inline int32_t* get_address_of__executionStackCount_0() { return &____executionStackCount_0; }
	inline void set__executionStackCount_0(int32_t value)
	{
		____executionStackCount_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKGUARD_T935784647_H
#ifndef EXPRESSION_T114864668_H
#define EXPRESSION_T114864668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression
struct  Expression_t114864668  : public RuntimeObject
{
public:

public:
};

struct Expression_t114864668_StaticFields
{
public:
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_t3259078812 * ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t3704543592 * ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t2398207075 * ___s_legacyCtorSupportTable_2;

public:
	inline static int32_t get_offset_of_s_lambdaDelegateCache_0() { return static_cast<int32_t>(offsetof(Expression_t114864668_StaticFields, ___s_lambdaDelegateCache_0)); }
	inline CacheDict_2_t3259078812 * get_s_lambdaDelegateCache_0() const { return ___s_lambdaDelegateCache_0; }
	inline CacheDict_2_t3259078812 ** get_address_of_s_lambdaDelegateCache_0() { return &___s_lambdaDelegateCache_0; }
	inline void set_s_lambdaDelegateCache_0(CacheDict_2_t3259078812 * value)
	{
		___s_lambdaDelegateCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_lambdaDelegateCache_0), value);
	}

	inline static int32_t get_offset_of_s_lambdaFactories_1() { return static_cast<int32_t>(offsetof(Expression_t114864668_StaticFields, ___s_lambdaFactories_1)); }
	inline CacheDict_2_t3704543592 * get_s_lambdaFactories_1() const { return ___s_lambdaFactories_1; }
	inline CacheDict_2_t3704543592 ** get_address_of_s_lambdaFactories_1() { return &___s_lambdaFactories_1; }
	inline void set_s_lambdaFactories_1(CacheDict_2_t3704543592 * value)
	{
		___s_lambdaFactories_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_lambdaFactories_1), value);
	}

	inline static int32_t get_offset_of_s_legacyCtorSupportTable_2() { return static_cast<int32_t>(offsetof(Expression_t114864668_StaticFields, ___s_legacyCtorSupportTable_2)); }
	inline ConditionalWeakTable_2_t2398207075 * get_s_legacyCtorSupportTable_2() const { return ___s_legacyCtorSupportTable_2; }
	inline ConditionalWeakTable_2_t2398207075 ** get_address_of_s_legacyCtorSupportTable_2() { return &___s_legacyCtorSupportTable_2; }
	inline void set_s_legacyCtorSupportTable_2(ConditionalWeakTable_2_t2398207075 * value)
	{
		___s_legacyCtorSupportTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_legacyCtorSupportTable_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_T114864668_H
#ifndef LABELTARGET_T2114570595_H
#define LABELTARGET_T2114570595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.LabelTarget
struct  LabelTarget_t2114570595  : public RuntimeObject
{
public:
	// System.String System.Linq.Expressions.LabelTarget::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Type System.Linq.Expressions.LabelTarget::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LabelTarget_t2114570595, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LabelTarget_t2114570595, ___U3CTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELTARGET_T2114570595_H
#ifndef EXPRESSIONVISITOR_T1427178562_H
#define EXPRESSIONVISITOR_T1427178562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ExpressionVisitor
struct  ExpressionVisitor_t1427178562  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONVISITOR_T1427178562_H
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
#ifndef UNARYEXPRESSIONPROXY_T2833566940_H
#define UNARYEXPRESSIONPROXY_T2833566940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/UnaryExpressionProxy
struct  UnaryExpressionProxy_t2833566940  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNARYEXPRESSIONPROXY_T2833566940_H
#ifndef SWITCHEXPRESSIONPROXY_T2036506531_H
#define SWITCHEXPRESSIONPROXY_T2036506531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/SwitchExpressionProxy
struct  SwitchExpressionProxy_t2036506531  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWITCHEXPRESSIONPROXY_T2036506531_H
#ifndef NEWEXPRESSIONPROXY_T4240405025_H
#define NEWEXPRESSIONPROXY_T4240405025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/NewExpressionProxy
struct  NewExpressionProxy_t4240405025  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWEXPRESSIONPROXY_T4240405025_H
#ifndef TYPEBINARYEXPRESSIONPROXY_T1615990160_H
#define TYPEBINARYEXPRESSIONPROXY_T1615990160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/TypeBinaryExpressionProxy
struct  TypeBinaryExpressionProxy_t1615990160  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEBINARYEXPRESSIONPROXY_T1615990160_H
#ifndef RUNTIMEVARIABLESEXPRESSIONPROXY_T3333977548_H
#define RUNTIMEVARIABLESEXPRESSIONPROXY_T3333977548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/RuntimeVariablesExpressionProxy
struct  RuntimeVariablesExpressionProxy_t3333977548  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEVARIABLESEXPRESSIONPROXY_T3333977548_H
#ifndef PARAMETEREXPRESSIONPROXY_T675893708_H
#define PARAMETEREXPRESSIONPROXY_T675893708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/ParameterExpressionProxy
struct  ParameterExpressionProxy_t675893708  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEREXPRESSIONPROXY_T675893708_H
#ifndef TRYEXPRESSIONPROXY_T1231208850_H
#define TRYEXPRESSIONPROXY_T1231208850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/TryExpressionProxy
struct  TryExpressionProxy_t1231208850  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRYEXPRESSIONPROXY_T1231208850_H
#ifndef MEMBERINITEXPRESSIONPROXY_T1660440611_H
#define MEMBERINITEXPRESSIONPROXY_T1660440611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/MemberInitExpressionProxy
struct  MemberInitExpressionProxy_t1660440611  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINITEXPRESSIONPROXY_T1660440611_H
#ifndef METHODCALLEXPRESSIONPROXY_T1816147720_H
#define METHODCALLEXPRESSIONPROXY_T1816147720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/MethodCallExpressionProxy
struct  MethodCallExpressionProxy_t1816147720  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALLEXPRESSIONPROXY_T1816147720_H
#ifndef SWITCHCASEPROXY_T2312313025_H
#define SWITCHCASEPROXY_T2312313025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/SwitchCaseProxy
struct  SwitchCaseProxy_t2312313025  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWITCHCASEPROXY_T2312313025_H
#ifndef NEWARRAYEXPRESSIONPROXY_T1236297982_H
#define NEWARRAYEXPRESSIONPROXY_T1236297982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/NewArrayExpressionProxy
struct  NewArrayExpressionProxy_t1236297982  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWARRAYEXPRESSIONPROXY_T1236297982_H
#ifndef INDEXEXPRESSION_T1657543884_H
#define INDEXEXPRESSION_T1657543884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.IndexExpression
struct  IndexExpression_t1657543884  : public Expression_t114864668
{
public:
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.IndexExpression::_arguments
	RuntimeObject* ____arguments_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.IndexExpression::<Object>k__BackingField
	Expression_t114864668 * ___U3CObjectU3Ek__BackingField_4;
	// System.Reflection.PropertyInfo System.Linq.Expressions.IndexExpression::<Indexer>k__BackingField
	PropertyInfo_t * ___U3CIndexerU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__arguments_3() { return static_cast<int32_t>(offsetof(IndexExpression_t1657543884, ____arguments_3)); }
	inline RuntimeObject* get__arguments_3() const { return ____arguments_3; }
	inline RuntimeObject** get_address_of__arguments_3() { return &____arguments_3; }
	inline void set__arguments_3(RuntimeObject* value)
	{
		____arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&____arguments_3), value);
	}

	inline static int32_t get_offset_of_U3CObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(IndexExpression_t1657543884, ___U3CObjectU3Ek__BackingField_4)); }
	inline Expression_t114864668 * get_U3CObjectU3Ek__BackingField_4() const { return ___U3CObjectU3Ek__BackingField_4; }
	inline Expression_t114864668 ** get_address_of_U3CObjectU3Ek__BackingField_4() { return &___U3CObjectU3Ek__BackingField_4; }
	inline void set_U3CObjectU3Ek__BackingField_4(Expression_t114864668 * value)
	{
		___U3CObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CObjectU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CIndexerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(IndexExpression_t1657543884, ___U3CIndexerU3Ek__BackingField_5)); }
	inline PropertyInfo_t * get_U3CIndexerU3Ek__BackingField_5() const { return ___U3CIndexerU3Ek__BackingField_5; }
	inline PropertyInfo_t ** get_address_of_U3CIndexerU3Ek__BackingField_5() { return &___U3CIndexerU3Ek__BackingField_5; }
	inline void set_U3CIndexerU3Ek__BackingField_5(PropertyInfo_t * value)
	{
		___U3CIndexerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIndexerU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXEXPRESSION_T1657543884_H
#ifndef LAMBDAEXPRESSION_T2811402413_H
#define LAMBDAEXPRESSION_T2811402413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.LambdaExpression
struct  LambdaExpression_t2811402413  : public Expression_t114864668
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t114864668 * ____body_3;

public:
	inline static int32_t get_offset_of__body_3() { return static_cast<int32_t>(offsetof(LambdaExpression_t2811402413, ____body_3)); }
	inline Expression_t114864668 * get__body_3() const { return ____body_3; }
	inline Expression_t114864668 ** get_address_of__body_3() { return &____body_3; }
	inline void set__body_3(Expression_t114864668 * value)
	{
		____body_3 = value;
		Il2CppCodeGenWriteBarrier((&____body_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAMBDAEXPRESSION_T2811402413_H
#ifndef EXPRESSIONSTRINGBUILDER_T2533574192_H
#define EXPRESSIONSTRINGBUILDER_T2533574192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ExpressionStringBuilder
struct  ExpressionStringBuilder_t2533574192  : public ExpressionVisitor_t1427178562
{
public:
	// System.Text.StringBuilder System.Linq.Expressions.ExpressionStringBuilder::_out
	StringBuilder_t1221177846 * ____out_0;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Int32> System.Linq.Expressions.ExpressionStringBuilder::_ids
	Dictionary_2_t1663937576 * ____ids_1;

public:
	inline static int32_t get_offset_of__out_0() { return static_cast<int32_t>(offsetof(ExpressionStringBuilder_t2533574192, ____out_0)); }
	inline StringBuilder_t1221177846 * get__out_0() const { return ____out_0; }
	inline StringBuilder_t1221177846 ** get_address_of__out_0() { return &____out_0; }
	inline void set__out_0(StringBuilder_t1221177846 * value)
	{
		____out_0 = value;
		Il2CppCodeGenWriteBarrier((&____out_0), value);
	}

	inline static int32_t get_offset_of__ids_1() { return static_cast<int32_t>(offsetof(ExpressionStringBuilder_t2533574192, ____ids_1)); }
	inline Dictionary_2_t1663937576 * get__ids_1() const { return ____ids_1; }
	inline Dictionary_2_t1663937576 ** get_address_of__ids_1() { return &____ids_1; }
	inline void set__ids_1(Dictionary_2_t1663937576 * value)
	{
		____ids_1 = value;
		Il2CppCodeGenWriteBarrier((&____ids_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONSTRINGBUILDER_T2533574192_H
#ifndef METHODCALLEXPRESSION_T3367820543_H
#define METHODCALLEXPRESSION_T3367820543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MethodCallExpression
struct  MethodCallExpression_t3367820543  : public Expression_t114864668
{
public:
	// System.Reflection.MethodInfo System.Linq.Expressions.MethodCallExpression::<Method>k__BackingField
	MethodInfo_t * ___U3CMethodU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CMethodU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MethodCallExpression_t3367820543, ___U3CMethodU3Ek__BackingField_3)); }
	inline MethodInfo_t * get_U3CMethodU3Ek__BackingField_3() const { return ___U3CMethodU3Ek__BackingField_3; }
	inline MethodInfo_t ** get_address_of_U3CMethodU3Ek__BackingField_3() { return &___U3CMethodU3Ek__BackingField_3; }
	inline void set_U3CMethodU3Ek__BackingField_3(MethodInfo_t * value)
	{
		___U3CMethodU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMethodU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALLEXPRESSION_T3367820543_H
#ifndef INVOCATIONEXPRESSION_T267914806_H
#define INVOCATIONEXPRESSION_T267914806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InvocationExpression
struct  InvocationExpression_t267914806  : public Expression_t114864668
{
public:
	// System.Type System.Linq.Expressions.InvocationExpression::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression::<Expression>k__BackingField
	Expression_t114864668 * ___U3CExpressionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(InvocationExpression_t267914806, ___U3CTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_3() const { return ___U3CTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_3() { return &___U3CTypeU3Ek__BackingField_3; }
	inline void set_U3CTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CExpressionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(InvocationExpression_t267914806, ___U3CExpressionU3Ek__BackingField_4)); }
	inline Expression_t114864668 * get_U3CExpressionU3Ek__BackingField_4() const { return ___U3CExpressionU3Ek__BackingField_4; }
	inline Expression_t114864668 ** get_address_of_U3CExpressionU3Ek__BackingField_4() { return &___U3CExpressionU3Ek__BackingField_4; }
	inline void set_U3CExpressionU3Ek__BackingField_4(Expression_t114864668 * value)
	{
		___U3CExpressionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CExpressionU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOCATIONEXPRESSION_T267914806_H
#ifndef LISTINITEXPRESSION_T1376237998_H
#define LISTINITEXPRESSION_T1376237998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ListInitExpression
struct  ListInitExpression_t1376237998  : public Expression_t114864668
{
public:
	// System.Linq.Expressions.NewExpression System.Linq.Expressions.ListInitExpression::<NewExpression>k__BackingField
	NewExpression_t1045017810 * ___U3CNewExpressionU3Ek__BackingField_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> System.Linq.Expressions.ListInitExpression::<Initializers>k__BackingField
	ReadOnlyCollection_1_t4083992128 * ___U3CInitializersU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CNewExpressionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ListInitExpression_t1376237998, ___U3CNewExpressionU3Ek__BackingField_3)); }
	inline NewExpression_t1045017810 * get_U3CNewExpressionU3Ek__BackingField_3() const { return ___U3CNewExpressionU3Ek__BackingField_3; }
	inline NewExpression_t1045017810 ** get_address_of_U3CNewExpressionU3Ek__BackingField_3() { return &___U3CNewExpressionU3Ek__BackingField_3; }
	inline void set_U3CNewExpressionU3Ek__BackingField_3(NewExpression_t1045017810 * value)
	{
		___U3CNewExpressionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNewExpressionU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CInitializersU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ListInitExpression_t1376237998, ___U3CInitializersU3Ek__BackingField_4)); }
	inline ReadOnlyCollection_1_t4083992128 * get_U3CInitializersU3Ek__BackingField_4() const { return ___U3CInitializersU3Ek__BackingField_4; }
	inline ReadOnlyCollection_1_t4083992128 ** get_address_of_U3CInitializersU3Ek__BackingField_4() { return &___U3CInitializersU3Ek__BackingField_4; }
	inline void set_U3CInitializersU3Ek__BackingField_4(ReadOnlyCollection_1_t4083992128 * value)
	{
		___U3CInitializersU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInitializersU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTINITEXPRESSION_T1376237998_H
#ifndef MEMBERINITEXPRESSION_T137172540_H
#define MEMBERINITEXPRESSION_T137172540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberInitExpression
struct  MemberInitExpression_t137172540  : public Expression_t114864668
{
public:
	// System.Linq.Expressions.NewExpression System.Linq.Expressions.MemberInitExpression::<NewExpression>k__BackingField
	NewExpression_t1045017810 * ___U3CNewExpressionU3Ek__BackingField_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding> System.Linq.Expressions.MemberInitExpression::<Bindings>k__BackingField
	ReadOnlyCollection_1_t3673584233 * ___U3CBindingsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CNewExpressionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MemberInitExpression_t137172540, ___U3CNewExpressionU3Ek__BackingField_3)); }
	inline NewExpression_t1045017810 * get_U3CNewExpressionU3Ek__BackingField_3() const { return ___U3CNewExpressionU3Ek__BackingField_3; }
	inline NewExpression_t1045017810 ** get_address_of_U3CNewExpressionU3Ek__BackingField_3() { return &___U3CNewExpressionU3Ek__BackingField_3; }
	inline void set_U3CNewExpressionU3Ek__BackingField_3(NewExpression_t1045017810 * value)
	{
		___U3CNewExpressionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNewExpressionU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CBindingsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MemberInitExpression_t137172540, ___U3CBindingsU3Ek__BackingField_4)); }
	inline ReadOnlyCollection_1_t3673584233 * get_U3CBindingsU3Ek__BackingField_4() const { return ___U3CBindingsU3Ek__BackingField_4; }
	inline ReadOnlyCollection_1_t3673584233 ** get_address_of_U3CBindingsU3Ek__BackingField_4() { return &___U3CBindingsU3Ek__BackingField_4; }
	inline void set_U3CBindingsU3Ek__BackingField_4(ReadOnlyCollection_1_t3673584233 * value)
	{
		___U3CBindingsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBindingsU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINITEXPRESSION_T137172540_H
#ifndef LABELEXPRESSION_T3720407902_H
#define LABELEXPRESSION_T3720407902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.LabelExpression
struct  LabelExpression_t3720407902  : public Expression_t114864668
{
public:
	// System.Linq.Expressions.LabelTarget System.Linq.Expressions.LabelExpression::<Target>k__BackingField
	LabelTarget_t2114570595 * ___U3CTargetU3Ek__BackingField_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.LabelExpression::<DefaultValue>k__BackingField
	Expression_t114864668 * ___U3CDefaultValueU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LabelExpression_t3720407902, ___U3CTargetU3Ek__BackingField_3)); }
	inline LabelTarget_t2114570595 * get_U3CTargetU3Ek__BackingField_3() const { return ___U3CTargetU3Ek__BackingField_3; }
	inline LabelTarget_t2114570595 ** get_address_of_U3CTargetU3Ek__BackingField_3() { return &___U3CTargetU3Ek__BackingField_3; }
	inline void set_U3CTargetU3Ek__BackingField_3(LabelTarget_t2114570595 * value)
	{
		___U3CTargetU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTargetU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CDefaultValueU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LabelExpression_t3720407902, ___U3CDefaultValueU3Ek__BackingField_4)); }
	inline Expression_t114864668 * get_U3CDefaultValueU3Ek__BackingField_4() const { return ___U3CDefaultValueU3Ek__BackingField_4; }
	inline Expression_t114864668 ** get_address_of_U3CDefaultValueU3Ek__BackingField_4() { return &___U3CDefaultValueU3Ek__BackingField_4; }
	inline void set_U3CDefaultValueU3Ek__BackingField_4(Expression_t114864668 * value)
	{
		___U3CDefaultValueU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultValueU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELEXPRESSION_T3720407902_H
#ifndef MEMBEREXPRESSION_T1790982958_H
#define MEMBEREXPRESSION_T1790982958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberExpression
struct  MemberExpression_t1790982958  : public Expression_t114864668
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::<Expression>k__BackingField
	Expression_t114864668 * ___U3CExpressionU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CExpressionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MemberExpression_t1790982958, ___U3CExpressionU3Ek__BackingField_3)); }
	inline Expression_t114864668 * get_U3CExpressionU3Ek__BackingField_3() const { return ___U3CExpressionU3Ek__BackingField_3; }
	inline Expression_t114864668 ** get_address_of_U3CExpressionU3Ek__BackingField_3() { return &___U3CExpressionU3Ek__BackingField_3; }
	inline void set_U3CExpressionU3Ek__BackingField_3(Expression_t114864668 * value)
	{
		___U3CExpressionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CExpressionU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBEREXPRESSION_T1790982958_H
#ifndef LOOPEXPRESSION_T3712177490_H
#define LOOPEXPRESSION_T3712177490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.LoopExpression
struct  LoopExpression_t3712177490  : public Expression_t114864668
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.LoopExpression::<Body>k__BackingField
	Expression_t114864668 * ___U3CBodyU3Ek__BackingField_3;
	// System.Linq.Expressions.LabelTarget System.Linq.Expressions.LoopExpression::<BreakLabel>k__BackingField
	LabelTarget_t2114570595 * ___U3CBreakLabelU3Ek__BackingField_4;
	// System.Linq.Expressions.LabelTarget System.Linq.Expressions.LoopExpression::<ContinueLabel>k__BackingField
	LabelTarget_t2114570595 * ___U3CContinueLabelU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CBodyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LoopExpression_t3712177490, ___U3CBodyU3Ek__BackingField_3)); }
	inline Expression_t114864668 * get_U3CBodyU3Ek__BackingField_3() const { return ___U3CBodyU3Ek__BackingField_3; }
	inline Expression_t114864668 ** get_address_of_U3CBodyU3Ek__BackingField_3() { return &___U3CBodyU3Ek__BackingField_3; }
	inline void set_U3CBodyU3Ek__BackingField_3(Expression_t114864668 * value)
	{
		___U3CBodyU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBodyU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CBreakLabelU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LoopExpression_t3712177490, ___U3CBreakLabelU3Ek__BackingField_4)); }
	inline LabelTarget_t2114570595 * get_U3CBreakLabelU3Ek__BackingField_4() const { return ___U3CBreakLabelU3Ek__BackingField_4; }
	inline LabelTarget_t2114570595 ** get_address_of_U3CBreakLabelU3Ek__BackingField_4() { return &___U3CBreakLabelU3Ek__BackingField_4; }
	inline void set_U3CBreakLabelU3Ek__BackingField_4(LabelTarget_t2114570595 * value)
	{
		___U3CBreakLabelU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBreakLabelU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CContinueLabelU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(LoopExpression_t3712177490, ___U3CContinueLabelU3Ek__BackingField_5)); }
	inline LabelTarget_t2114570595 * get_U3CContinueLabelU3Ek__BackingField_5() const { return ___U3CContinueLabelU3Ek__BackingField_5; }
	inline LabelTarget_t2114570595 ** get_address_of_U3CContinueLabelU3Ek__BackingField_5() { return &___U3CContinueLabelU3Ek__BackingField_5; }
	inline void set_U3CContinueLabelU3Ek__BackingField_5(LabelTarget_t2114570595 * value)
	{
		___U3CContinueLabelU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CContinueLabelU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOOPEXPRESSION_T3712177490_H
#ifndef NEWEXPRESSION_T1045017810_H
#define NEWEXPRESSION_T1045017810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.NewExpression
struct  NewExpression_t1045017810  : public Expression_t114864668
{
public:
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewExpression::_arguments
	RuntimeObject* ____arguments_3;
	// System.Reflection.ConstructorInfo System.Linq.Expressions.NewExpression::<Constructor>k__BackingField
	ConstructorInfo_t2851816542 * ___U3CConstructorU3Ek__BackingField_4;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo> System.Linq.Expressions.NewExpression::<Members>k__BackingField
	ReadOnlyCollection_1_t4228882952 * ___U3CMembersU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__arguments_3() { return static_cast<int32_t>(offsetof(NewExpression_t1045017810, ____arguments_3)); }
	inline RuntimeObject* get__arguments_3() const { return ____arguments_3; }
	inline RuntimeObject** get_address_of__arguments_3() { return &____arguments_3; }
	inline void set__arguments_3(RuntimeObject* value)
	{
		____arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&____arguments_3), value);
	}

	inline static int32_t get_offset_of_U3CConstructorU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(NewExpression_t1045017810, ___U3CConstructorU3Ek__BackingField_4)); }
	inline ConstructorInfo_t2851816542 * get_U3CConstructorU3Ek__BackingField_4() const { return ___U3CConstructorU3Ek__BackingField_4; }
	inline ConstructorInfo_t2851816542 ** get_address_of_U3CConstructorU3Ek__BackingField_4() { return &___U3CConstructorU3Ek__BackingField_4; }
	inline void set_U3CConstructorU3Ek__BackingField_4(ConstructorInfo_t2851816542 * value)
	{
		___U3CConstructorU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CConstructorU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CMembersU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(NewExpression_t1045017810, ___U3CMembersU3Ek__BackingField_5)); }
	inline ReadOnlyCollection_1_t4228882952 * get_U3CMembersU3Ek__BackingField_5() const { return ___U3CMembersU3Ek__BackingField_5; }
	inline ReadOnlyCollection_1_t4228882952 ** get_address_of_U3CMembersU3Ek__BackingField_5() { return &___U3CMembersU3Ek__BackingField_5; }
	inline void set_U3CMembersU3Ek__BackingField_5(ReadOnlyCollection_1_t4228882952 * value)
	{
		___U3CMembersU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMembersU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWEXPRESSION_T1045017810_H
#ifndef CONDITIONALEXPRESSION_T4183435840_H
#define CONDITIONALEXPRESSION_T4183435840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ConditionalExpression
struct  ConditionalExpression_t4183435840  : public Expression_t114864668
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::<Test>k__BackingField
	Expression_t114864668 * ___U3CTestU3Ek__BackingField_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::<IfTrue>k__BackingField
	Expression_t114864668 * ___U3CIfTrueU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CTestU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ConditionalExpression_t4183435840, ___U3CTestU3Ek__BackingField_3)); }
	inline Expression_t114864668 * get_U3CTestU3Ek__BackingField_3() const { return ___U3CTestU3Ek__BackingField_3; }
	inline Expression_t114864668 ** get_address_of_U3CTestU3Ek__BackingField_3() { return &___U3CTestU3Ek__BackingField_3; }
	inline void set_U3CTestU3Ek__BackingField_3(Expression_t114864668 * value)
	{
		___U3CTestU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTestU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CIfTrueU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ConditionalExpression_t4183435840, ___U3CIfTrueU3Ek__BackingField_4)); }
	inline Expression_t114864668 * get_U3CIfTrueU3Ek__BackingField_4() const { return ___U3CIfTrueU3Ek__BackingField_4; }
	inline Expression_t114864668 ** get_address_of_U3CIfTrueU3Ek__BackingField_4() { return &___U3CIfTrueU3Ek__BackingField_4; }
	inline void set_U3CIfTrueU3Ek__BackingField_4(Expression_t114864668 * value)
	{
		___U3CIfTrueU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIfTrueU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONDITIONALEXPRESSION_T4183435840_H
#ifndef BLOCKEXPRESSION_T707433991_H
#define BLOCKEXPRESSION_T707433991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.BlockExpression
struct  BlockExpression_t707433991  : public Expression_t114864668
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCKEXPRESSION_T707433991_H
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
#ifndef RUNTIMEVARIABLESEXPRESSION_T3592289155_H
#define RUNTIMEVARIABLESEXPRESSION_T3592289155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.RuntimeVariablesExpression
struct  RuntimeVariablesExpression_t3592289155  : public Expression_t114864668
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.RuntimeVariablesExpression::<Variables>k__BackingField
	ReadOnlyCollection_1_t3201290647 * ___U3CVariablesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CVariablesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RuntimeVariablesExpression_t3592289155, ___U3CVariablesU3Ek__BackingField_3)); }
	inline ReadOnlyCollection_1_t3201290647 * get_U3CVariablesU3Ek__BackingField_3() const { return ___U3CVariablesU3Ek__BackingField_3; }
	inline ReadOnlyCollection_1_t3201290647 ** get_address_of_U3CVariablesU3Ek__BackingField_3() { return &___U3CVariablesU3Ek__BackingField_3; }
	inline void set_U3CVariablesU3Ek__BackingField_3(ReadOnlyCollection_1_t3201290647 * value)
	{
		___U3CVariablesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CVariablesU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEVARIABLESEXPRESSION_T3592289155_H
#ifndef PARAMETEREXPRESSION_T3015504955_H
#define PARAMETEREXPRESSION_T3015504955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ParameterExpression
struct  ParameterExpression_t3015504955  : public Expression_t114864668
{
public:
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ParameterExpression_t3015504955, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEREXPRESSION_T3015504955_H
#ifndef DEFAULTEXPRESSION_T181724441_H
#define DEFAULTEXPRESSION_T181724441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.DefaultExpression
struct  DefaultExpression_t181724441  : public Expression_t114864668
{
public:
	// System.Type System.Linq.Expressions.DefaultExpression::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DefaultExpression_t181724441, ___U3CTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_3() const { return ___U3CTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_3() { return &___U3CTypeU3Ek__BackingField_3; }
	inline void set_U3CTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEXPRESSION_T181724441_H
#ifndef CONSTANTEXPRESSION_T305952364_H
#define CONSTANTEXPRESSION_T305952364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ConstantExpression
struct  ConstantExpression_t305952364  : public Expression_t114864668
{
public:
	// System.Object System.Linq.Expressions.ConstantExpression::<Value>k__BackingField
	RuntimeObject * ___U3CValueU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ConstantExpression_t305952364, ___U3CValueU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CValueU3Ek__BackingField_3() const { return ___U3CValueU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CValueU3Ek__BackingField_3() { return &___U3CValueU3Ek__BackingField_3; }
	inline void set_U3CValueU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CValueU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CValueU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTEXPRESSION_T305952364_H
#ifndef NEWARRAYEXPRESSION_T2420949259_H
#define NEWARRAYEXPRESSION_T2420949259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.NewArrayExpression
struct  NewArrayExpression_t2420949259  : public Expression_t114864668
{
public:
	// System.Type System.Linq.Expressions.NewArrayExpression::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewArrayExpression::<Expressions>k__BackingField
	ReadOnlyCollection_1_t300650360 * ___U3CExpressionsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(NewArrayExpression_t2420949259, ___U3CTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_3() const { return ___U3CTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_3() { return &___U3CTypeU3Ek__BackingField_3; }
	inline void set_U3CTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CExpressionsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(NewArrayExpression_t2420949259, ___U3CExpressionsU3Ek__BackingField_4)); }
	inline ReadOnlyCollection_1_t300650360 * get_U3CExpressionsU3Ek__BackingField_4() const { return ___U3CExpressionsU3Ek__BackingField_4; }
	inline ReadOnlyCollection_1_t300650360 ** get_address_of_U3CExpressionsU3Ek__BackingField_4() { return &___U3CExpressionsU3Ek__BackingField_4; }
	inline void set_U3CExpressionsU3Ek__BackingField_4(ReadOnlyCollection_1_t300650360 * value)
	{
		___U3CExpressionsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CExpressionsU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWARRAYEXPRESSION_T2420949259_H
#ifndef DEBUGINFOEXPRESSION_T307709501_H
#define DEBUGINFOEXPRESSION_T307709501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.DebugInfoExpression
struct  DebugInfoExpression_t307709501  : public Expression_t114864668
{
public:
	// System.Linq.Expressions.SymbolDocumentInfo System.Linq.Expressions.DebugInfoExpression::<Document>k__BackingField
	SymbolDocumentInfo_t3710961819 * ___U3CDocumentU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CDocumentU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DebugInfoExpression_t307709501, ___U3CDocumentU3Ek__BackingField_3)); }
	inline SymbolDocumentInfo_t3710961819 * get_U3CDocumentU3Ek__BackingField_3() const { return ___U3CDocumentU3Ek__BackingField_3; }
	inline SymbolDocumentInfo_t3710961819 ** get_address_of_U3CDocumentU3Ek__BackingField_3() { return &___U3CDocumentU3Ek__BackingField_3; }
	inline void set_U3CDocumentU3Ek__BackingField_3(SymbolDocumentInfo_t3710961819 * value)
	{
		___U3CDocumentU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDocumentU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGINFOEXPRESSION_T307709501_H
#ifndef NEWVALUETYPEEXPRESSION_T2577224997_H
#define NEWVALUETYPEEXPRESSION_T2577224997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.NewValueTypeExpression
struct  NewValueTypeExpression_t2577224997  : public NewExpression_t1045017810
{
public:
	// System.Type System.Linq.Expressions.NewValueTypeExpression::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(NewValueTypeExpression_t2577224997, ___U3CTypeU3Ek__BackingField_6)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_6() const { return ___U3CTypeU3Ek__BackingField_6; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_6() { return &___U3CTypeU3Ek__BackingField_6; }
	inline void set_U3CTypeU3Ek__BackingField_6(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWVALUETYPEEXPRESSION_T2577224997_H
#ifndef TYPEDPARAMETEREXPRESSION_T544487603_H
#define TYPEDPARAMETEREXPRESSION_T544487603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.TypedParameterExpression
struct  TypedParameterExpression_t544487603  : public ParameterExpression_t3015504955
{
public:
	// System.Type System.Linq.Expressions.TypedParameterExpression::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TypedParameterExpression_t544487603, ___U3CTypeU3Ek__BackingField_4)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_4() const { return ___U3CTypeU3Ek__BackingField_4; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_4() { return &___U3CTypeU3Ek__BackingField_4; }
	inline void set_U3CTypeU3Ek__BackingField_4(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDPARAMETEREXPRESSION_T544487603_H
#ifndef FIELDEXPRESSION_T2735218324_H
#define FIELDEXPRESSION_T2735218324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.FieldExpression
struct  FieldExpression_t2735218324  : public MemberExpression_t1790982958
{
public:
	// System.Reflection.FieldInfo System.Linq.Expressions.FieldExpression::_field
	FieldInfo_t * ____field_4;

public:
	inline static int32_t get_offset_of__field_4() { return static_cast<int32_t>(offsetof(FieldExpression_t2735218324, ____field_4)); }
	inline FieldInfo_t * get__field_4() const { return ____field_4; }
	inline FieldInfo_t ** get_address_of__field_4() { return &____field_4; }
	inline void set__field_4(FieldInfo_t * value)
	{
		____field_4 = value;
		Il2CppCodeGenWriteBarrier((&____field_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDEXPRESSION_T2735218324_H
#ifndef PROPERTYEXPRESSION_T3346955077_H
#define PROPERTYEXPRESSION_T3346955077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.PropertyExpression
struct  PropertyExpression_t3346955077  : public MemberExpression_t1790982958
{
public:
	// System.Reflection.PropertyInfo System.Linq.Expressions.PropertyExpression::_property
	PropertyInfo_t * ____property_4;

public:
	inline static int32_t get_offset_of__property_4() { return static_cast<int32_t>(offsetof(PropertyExpression_t3346955077, ____property_4)); }
	inline PropertyInfo_t * get__property_4() const { return ____property_4; }
	inline PropertyInfo_t ** get_address_of__property_4() { return &____property_4; }
	inline void set__property_4(PropertyInfo_t * value)
	{
		____property_4 = value;
		Il2CppCodeGenWriteBarrier((&____property_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYEXPRESSION_T3346955077_H
#ifndef METHODCALLEXPRESSION0_T1873078415_H
#define METHODCALLEXPRESSION0_T1873078415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MethodCallExpression0
struct  MethodCallExpression0_t1873078415  : public MethodCallExpression_t3367820543
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALLEXPRESSION0_T1873078415_H
#ifndef METHODCALLEXPRESSION5_T1873078412_H
#define METHODCALLEXPRESSION5_T1873078412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MethodCallExpression5
struct  MethodCallExpression5_t1873078412  : public MethodCallExpression_t3367820543
{
public:
	// System.Object System.Linq.Expressions.MethodCallExpression5::_arg0
	RuntimeObject * ____arg0_4;
	// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression5::_arg1
	Expression_t114864668 * ____arg1_5;
	// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression5::_arg2
	Expression_t114864668 * ____arg2_6;
	// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression5::_arg3
	Expression_t114864668 * ____arg3_7;
	// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression5::_arg4
	Expression_t114864668 * ____arg4_8;

public:
	inline static int32_t get_offset_of__arg0_4() { return static_cast<int32_t>(offsetof(MethodCallExpression5_t1873078412, ____arg0_4)); }
	inline RuntimeObject * get__arg0_4() const { return ____arg0_4; }
	inline RuntimeObject ** get_address_of__arg0_4() { return &____arg0_4; }
	inline void set__arg0_4(RuntimeObject * value)
	{
		____arg0_4 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_4), value);
	}

	inline static int32_t get_offset_of__arg1_5() { return static_cast<int32_t>(offsetof(MethodCallExpression5_t1873078412, ____arg1_5)); }
	inline Expression_t114864668 * get__arg1_5() const { return ____arg1_5; }
	inline Expression_t114864668 ** get_address_of__arg1_5() { return &____arg1_5; }
	inline void set__arg1_5(Expression_t114864668 * value)
	{
		____arg1_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_5), value);
	}

	inline static int32_t get_offset_of__arg2_6() { return static_cast<int32_t>(offsetof(MethodCallExpression5_t1873078412, ____arg2_6)); }
	inline Expression_t114864668 * get__arg2_6() const { return ____arg2_6; }
	inline Expression_t114864668 ** get_address_of__arg2_6() { return &____arg2_6; }
	inline void set__arg2_6(Expression_t114864668 * value)
	{
		____arg2_6 = value;
		Il2CppCodeGenWriteBarrier((&____arg2_6), value);
	}

	inline static int32_t get_offset_of__arg3_7() { return static_cast<int32_t>(offsetof(MethodCallExpression5_t1873078412, ____arg3_7)); }
	inline Expression_t114864668 * get__arg3_7() const { return ____arg3_7; }
	inline Expression_t114864668 ** get_address_of__arg3_7() { return &____arg3_7; }
	inline void set__arg3_7(Expression_t114864668 * value)
	{
		____arg3_7 = value;
		Il2CppCodeGenWriteBarrier((&____arg3_7), value);
	}

	inline static int32_t get_offset_of__arg4_8() { return static_cast<int32_t>(offsetof(MethodCallExpression5_t1873078412, ____arg4_8)); }
	inline Expression_t114864668 * get__arg4_8() const { return ____arg4_8; }
	inline Expression_t114864668 ** get_address_of__arg4_8() { return &____arg4_8; }
	inline void set__arg4_8(Expression_t114864668 * value)
	{
		____arg4_8 = value;
		Il2CppCodeGenWriteBarrier((&____arg4_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALLEXPRESSION5_T1873078412_H
#ifndef NEWARRAYBOUNDSEXPRESSION_T3646602802_H
#define NEWARRAYBOUNDSEXPRESSION_T3646602802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.NewArrayBoundsExpression
struct  NewArrayBoundsExpression_t3646602802  : public NewArrayExpression_t2420949259
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWARRAYBOUNDSEXPRESSION_T3646602802_H
#ifndef METHODCALLEXPRESSION2_T1873078417_H
#define METHODCALLEXPRESSION2_T1873078417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MethodCallExpression2
struct  MethodCallExpression2_t1873078417  : public MethodCallExpression_t3367820543
{
public:
	// System.Object System.Linq.Expressions.MethodCallExpression2::_arg0
	RuntimeObject * ____arg0_4;
	// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression2::_arg1
	Expression_t114864668 * ____arg1_5;

public:
	inline static int32_t get_offset_of__arg0_4() { return static_cast<int32_t>(offsetof(MethodCallExpression2_t1873078417, ____arg0_4)); }
	inline RuntimeObject * get__arg0_4() const { return ____arg0_4; }
	inline RuntimeObject ** get_address_of__arg0_4() { return &____arg0_4; }
	inline void set__arg0_4(RuntimeObject * value)
	{
		____arg0_4 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_4), value);
	}

	inline static int32_t get_offset_of__arg1_5() { return static_cast<int32_t>(offsetof(MethodCallExpression2_t1873078417, ____arg1_5)); }
	inline Expression_t114864668 * get__arg1_5() const { return ____arg1_5; }
	inline Expression_t114864668 ** get_address_of__arg1_5() { return &____arg1_5; }
	inline void set__arg1_5(Expression_t114864668 * value)
	{
		____arg1_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALLEXPRESSION2_T1873078417_H
#ifndef METHODCALLEXPRESSION3_T1873078418_H
#define METHODCALLEXPRESSION3_T1873078418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MethodCallExpression3
struct  MethodCallExpression3_t1873078418  : public MethodCallExpression_t3367820543
{
public:
	// System.Object System.Linq.Expressions.MethodCallExpression3::_arg0
	RuntimeObject * ____arg0_4;
	// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression3::_arg1
	Expression_t114864668 * ____arg1_5;
	// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression3::_arg2
	Expression_t114864668 * ____arg2_6;

public:
	inline static int32_t get_offset_of__arg0_4() { return static_cast<int32_t>(offsetof(MethodCallExpression3_t1873078418, ____arg0_4)); }
	inline RuntimeObject * get__arg0_4() const { return ____arg0_4; }
	inline RuntimeObject ** get_address_of__arg0_4() { return &____arg0_4; }
	inline void set__arg0_4(RuntimeObject * value)
	{
		____arg0_4 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_4), value);
	}

	inline static int32_t get_offset_of__arg1_5() { return static_cast<int32_t>(offsetof(MethodCallExpression3_t1873078418, ____arg1_5)); }
	inline Expression_t114864668 * get__arg1_5() const { return ____arg1_5; }
	inline Expression_t114864668 ** get_address_of__arg1_5() { return &____arg1_5; }
	inline void set__arg1_5(Expression_t114864668 * value)
	{
		____arg1_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_5), value);
	}

	inline static int32_t get_offset_of__arg2_6() { return static_cast<int32_t>(offsetof(MethodCallExpression3_t1873078418, ____arg2_6)); }
	inline Expression_t114864668 * get__arg2_6() const { return ____arg2_6; }
	inline Expression_t114864668 ** get_address_of__arg2_6() { return &____arg2_6; }
	inline void set__arg2_6(Expression_t114864668 * value)
	{
		____arg2_6 = value;
		Il2CppCodeGenWriteBarrier((&____arg2_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALLEXPRESSION3_T1873078418_H
#ifndef NEWARRAYINITEXPRESSION_T518684349_H
#define NEWARRAYINITEXPRESSION_T518684349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.NewArrayInitExpression
struct  NewArrayInitExpression_t518684349  : public NewArrayExpression_t2420949259
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWARRAYINITEXPRESSION_T518684349_H
#ifndef METHODCALLEXPRESSIONN_T1873078325_H
#define METHODCALLEXPRESSIONN_T1873078325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MethodCallExpressionN
struct  MethodCallExpressionN_t1873078325  : public MethodCallExpression_t3367820543
{
public:
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.MethodCallExpressionN::_arguments
	RuntimeObject* ____arguments_4;

public:
	inline static int32_t get_offset_of__arguments_4() { return static_cast<int32_t>(offsetof(MethodCallExpressionN_t1873078325, ____arguments_4)); }
	inline RuntimeObject* get__arguments_4() const { return ____arguments_4; }
	inline RuntimeObject** get_address_of__arguments_4() { return &____arguments_4; }
	inline void set__arguments_4(RuntimeObject* value)
	{
		____arguments_4 = value;
		Il2CppCodeGenWriteBarrier((&____arguments_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALLEXPRESSIONN_T1873078325_H
#ifndef INSTANCEMETHODCALLEXPRESSION_T3007467826_H
#define INSTANCEMETHODCALLEXPRESSION_T3007467826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InstanceMethodCallExpression
struct  InstanceMethodCallExpression_t3007467826  : public MethodCallExpression_t3367820543
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.InstanceMethodCallExpression::_instance
	Expression_t114864668 * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(InstanceMethodCallExpression_t3007467826, ____instance_4)); }
	inline Expression_t114864668 * get__instance_4() const { return ____instance_4; }
	inline Expression_t114864668 ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(Expression_t114864668 * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((&____instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEMETHODCALLEXPRESSION_T3007467826_H
#ifndef METHODCALLEXPRESSION1_T1873078416_H
#define METHODCALLEXPRESSION1_T1873078416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MethodCallExpression1
struct  MethodCallExpression1_t1873078416  : public MethodCallExpression_t3367820543
{
public:
	// System.Object System.Linq.Expressions.MethodCallExpression1::_arg0
	RuntimeObject * ____arg0_4;

public:
	inline static int32_t get_offset_of__arg0_4() { return static_cast<int32_t>(offsetof(MethodCallExpression1_t1873078416, ____arg0_4)); }
	inline RuntimeObject * get__arg0_4() const { return ____arg0_4; }
	inline RuntimeObject ** get_address_of__arg0_4() { return &____arg0_4; }
	inline void set__arg0_4(RuntimeObject * value)
	{
		____arg0_4 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALLEXPRESSION1_T1873078416_H
#ifndef METHODCALLEXPRESSION4_T1873078411_H
#define METHODCALLEXPRESSION4_T1873078411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MethodCallExpression4
struct  MethodCallExpression4_t1873078411  : public MethodCallExpression_t3367820543
{
public:
	// System.Object System.Linq.Expressions.MethodCallExpression4::_arg0
	RuntimeObject * ____arg0_4;
	// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression4::_arg1
	Expression_t114864668 * ____arg1_5;
	// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression4::_arg2
	Expression_t114864668 * ____arg2_6;
	// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression4::_arg3
	Expression_t114864668 * ____arg3_7;

public:
	inline static int32_t get_offset_of__arg0_4() { return static_cast<int32_t>(offsetof(MethodCallExpression4_t1873078411, ____arg0_4)); }
	inline RuntimeObject * get__arg0_4() const { return ____arg0_4; }
	inline RuntimeObject ** get_address_of__arg0_4() { return &____arg0_4; }
	inline void set__arg0_4(RuntimeObject * value)
	{
		____arg0_4 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_4), value);
	}

	inline static int32_t get_offset_of__arg1_5() { return static_cast<int32_t>(offsetof(MethodCallExpression4_t1873078411, ____arg1_5)); }
	inline Expression_t114864668 * get__arg1_5() const { return ____arg1_5; }
	inline Expression_t114864668 ** get_address_of__arg1_5() { return &____arg1_5; }
	inline void set__arg1_5(Expression_t114864668 * value)
	{
		____arg1_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_5), value);
	}

	inline static int32_t get_offset_of__arg2_6() { return static_cast<int32_t>(offsetof(MethodCallExpression4_t1873078411, ____arg2_6)); }
	inline Expression_t114864668 * get__arg2_6() const { return ____arg2_6; }
	inline Expression_t114864668 ** get_address_of__arg2_6() { return &____arg2_6; }
	inline void set__arg2_6(Expression_t114864668 * value)
	{
		____arg2_6 = value;
		Il2CppCodeGenWriteBarrier((&____arg2_6), value);
	}

	inline static int32_t get_offset_of__arg3_7() { return static_cast<int32_t>(offsetof(MethodCallExpression4_t1873078411, ____arg3_7)); }
	inline Expression_t114864668 * get__arg3_7() const { return ____arg3_7; }
	inline Expression_t114864668 ** get_address_of__arg3_7() { return &____arg3_7; }
	inline void set__arg3_7(Expression_t114864668 * value)
	{
		____arg3_7 = value;
		Il2CppCodeGenWriteBarrier((&____arg3_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALLEXPRESSION4_T1873078411_H
#ifndef INVOCATIONEXPRESSION0_T4057233062_H
#define INVOCATIONEXPRESSION0_T4057233062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InvocationExpression0
struct  InvocationExpression0_t4057233062  : public InvocationExpression_t267914806
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOCATIONEXPRESSION0_T4057233062_H
#ifndef INVOCATIONEXPRESSIONN_T4057233088_H
#define INVOCATIONEXPRESSIONN_T4057233088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InvocationExpressionN
struct  InvocationExpressionN_t4057233088  : public InvocationExpression_t267914806
{
public:
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.InvocationExpressionN::_arguments
	RuntimeObject* ____arguments_5;

public:
	inline static int32_t get_offset_of__arguments_5() { return static_cast<int32_t>(offsetof(InvocationExpressionN_t4057233088, ____arguments_5)); }
	inline RuntimeObject* get__arguments_5() const { return ____arguments_5; }
	inline RuntimeObject** get_address_of__arguments_5() { return &____arguments_5; }
	inline void set__arguments_5(RuntimeObject* value)
	{
		____arguments_5 = value;
		Il2CppCodeGenWriteBarrier((&____arguments_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOCATIONEXPRESSIONN_T4057233088_H
#ifndef BLOCK5_T3982705682_H
#define BLOCK5_T3982705682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Block5
struct  Block5_t3982705682  : public BlockExpression_t707433991
{
public:
	// System.Object System.Linq.Expressions.Block5::_arg0
	RuntimeObject * ____arg0_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Block5::_arg1
	Expression_t114864668 * ____arg1_4;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Block5::_arg2
	Expression_t114864668 * ____arg2_5;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Block5::_arg3
	Expression_t114864668 * ____arg3_6;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Block5::_arg4
	Expression_t114864668 * ____arg4_7;

public:
	inline static int32_t get_offset_of__arg0_3() { return static_cast<int32_t>(offsetof(Block5_t3982705682, ____arg0_3)); }
	inline RuntimeObject * get__arg0_3() const { return ____arg0_3; }
	inline RuntimeObject ** get_address_of__arg0_3() { return &____arg0_3; }
	inline void set__arg0_3(RuntimeObject * value)
	{
		____arg0_3 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_3), value);
	}

	inline static int32_t get_offset_of__arg1_4() { return static_cast<int32_t>(offsetof(Block5_t3982705682, ____arg1_4)); }
	inline Expression_t114864668 * get__arg1_4() const { return ____arg1_4; }
	inline Expression_t114864668 ** get_address_of__arg1_4() { return &____arg1_4; }
	inline void set__arg1_4(Expression_t114864668 * value)
	{
		____arg1_4 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_4), value);
	}

	inline static int32_t get_offset_of__arg2_5() { return static_cast<int32_t>(offsetof(Block5_t3982705682, ____arg2_5)); }
	inline Expression_t114864668 * get__arg2_5() const { return ____arg2_5; }
	inline Expression_t114864668 ** get_address_of__arg2_5() { return &____arg2_5; }
	inline void set__arg2_5(Expression_t114864668 * value)
	{
		____arg2_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg2_5), value);
	}

	inline static int32_t get_offset_of__arg3_6() { return static_cast<int32_t>(offsetof(Block5_t3982705682, ____arg3_6)); }
	inline Expression_t114864668 * get__arg3_6() const { return ____arg3_6; }
	inline Expression_t114864668 ** get_address_of__arg3_6() { return &____arg3_6; }
	inline void set__arg3_6(Expression_t114864668 * value)
	{
		____arg3_6 = value;
		Il2CppCodeGenWriteBarrier((&____arg3_6), value);
	}

	inline static int32_t get_offset_of__arg4_7() { return static_cast<int32_t>(offsetof(Block5_t3982705682, ____arg4_7)); }
	inline Expression_t114864668 * get__arg4_7() const { return ____arg4_7; }
	inline Expression_t114864668 ** get_address_of__arg4_7() { return &____arg4_7; }
	inline void set__arg4_7(Expression_t114864668 * value)
	{
		____arg4_7 = value;
		Il2CppCodeGenWriteBarrier((&____arg4_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCK5_T3982705682_H
#ifndef FULLCONDITIONALEXPRESSION_T270415639_H
#define FULLCONDITIONALEXPRESSION_T270415639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.FullConditionalExpression
struct  FullConditionalExpression_t270415639  : public ConditionalExpression_t4183435840
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.FullConditionalExpression::_false
	Expression_t114864668 * ____false_5;

public:
	inline static int32_t get_offset_of__false_5() { return static_cast<int32_t>(offsetof(FullConditionalExpression_t270415639, ____false_5)); }
	inline Expression_t114864668 * get__false_5() const { return ____false_5; }
	inline Expression_t114864668 ** get_address_of__false_5() { return &____false_5; }
	inline void set__false_5(Expression_t114864668 * value)
	{
		____false_5 = value;
		Il2CppCodeGenWriteBarrier((&____false_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FULLCONDITIONALEXPRESSION_T270415639_H
#ifndef BLOCKN_T2490527099_H
#define BLOCKN_T2490527099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.BlockN
struct  BlockN_t2490527099  : public BlockExpression_t707433991
{
public:
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.BlockN::_expressions
	RuntimeObject* ____expressions_3;

public:
	inline static int32_t get_offset_of__expressions_3() { return static_cast<int32_t>(offsetof(BlockN_t2490527099, ____expressions_3)); }
	inline RuntimeObject* get__expressions_3() const { return ____expressions_3; }
	inline RuntimeObject** get_address_of__expressions_3() { return &____expressions_3; }
	inline void set__expressions_3(RuntimeObject* value)
	{
		____expressions_3 = value;
		Il2CppCodeGenWriteBarrier((&____expressions_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCKN_T2490527099_H
#ifndef SCOPEEXPRESSION_T2120595424_H
#define SCOPEEXPRESSION_T2120595424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ScopeExpression
struct  ScopeExpression_t2120595424  : public BlockExpression_t707433991
{
public:
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.ScopeExpression::_variables
	RuntimeObject* ____variables_3;

public:
	inline static int32_t get_offset_of__variables_3() { return static_cast<int32_t>(offsetof(ScopeExpression_t2120595424, ____variables_3)); }
	inline RuntimeObject* get__variables_3() const { return ____variables_3; }
	inline RuntimeObject** get_address_of__variables_3() { return &____variables_3; }
	inline void set__variables_3(RuntimeObject* value)
	{
		____variables_3 = value;
		Il2CppCodeGenWriteBarrier((&____variables_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCOPEEXPRESSION_T2120595424_H
#ifndef TYPEDCONSTANTEXPRESSION_T728025800_H
#define TYPEDCONSTANTEXPRESSION_T728025800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.TypedConstantExpression
struct  TypedConstantExpression_t728025800  : public ConstantExpression_t305952364
{
public:
	// System.Type System.Linq.Expressions.TypedConstantExpression::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TypedConstantExpression_t728025800, ___U3CTypeU3Ek__BackingField_4)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_4() const { return ___U3CTypeU3Ek__BackingField_4; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_4() { return &___U3CTypeU3Ek__BackingField_4; }
	inline void set_U3CTypeU3Ek__BackingField_4(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDCONSTANTEXPRESSION_T728025800_H
#ifndef GOTOEXPRESSIONKIND_T2358977977_H
#define GOTOEXPRESSIONKIND_T2358977977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.GotoExpressionKind
struct  GotoExpressionKind_t2358977977 
{
public:
	// System.Int32 System.Linq.Expressions.GotoExpressionKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GotoExpressionKind_t2358977977, ___value___2)); }
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
#endif // GOTOEXPRESSIONKIND_T2358977977_H
#ifndef EXPRESSIONTYPE_T1567188220_H
#define EXPRESSIONTYPE_T1567188220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ExpressionType
struct  ExpressionType_t1567188220 
{
public:
	// System.Int32 System.Linq.Expressions.ExpressionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExpressionType_t1567188220, ___value___2)); }
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
#endif // EXPRESSIONTYPE_T1567188220_H
#ifndef BLOCK2_T1253822327_H
#define BLOCK2_T1253822327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Block2
struct  Block2_t1253822327  : public BlockExpression_t707433991
{
public:
	// System.Object System.Linq.Expressions.Block2::_arg0
	RuntimeObject * ____arg0_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Block2::_arg1
	Expression_t114864668 * ____arg1_4;

public:
	inline static int32_t get_offset_of__arg0_3() { return static_cast<int32_t>(offsetof(Block2_t1253822327, ____arg0_3)); }
	inline RuntimeObject * get__arg0_3() const { return ____arg0_3; }
	inline RuntimeObject ** get_address_of__arg0_3() { return &____arg0_3; }
	inline void set__arg0_3(RuntimeObject * value)
	{
		____arg0_3 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_3), value);
	}

	inline static int32_t get_offset_of__arg1_4() { return static_cast<int32_t>(offsetof(Block2_t1253822327, ____arg1_4)); }
	inline Expression_t114864668 * get__arg1_4() const { return ____arg1_4; }
	inline Expression_t114864668 ** get_address_of__arg1_4() { return &____arg1_4; }
	inline void set__arg1_4(Expression_t114864668 * value)
	{
		____arg1_4 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCK2_T1253822327_H
#ifndef INVOCATIONEXPRESSION2_T4057233060_H
#define INVOCATIONEXPRESSION2_T4057233060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InvocationExpression2
struct  InvocationExpression2_t4057233060  : public InvocationExpression_t267914806
{
public:
	// System.Object System.Linq.Expressions.InvocationExpression2::_arg0
	RuntimeObject * ____arg0_5;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression2::_arg1
	Expression_t114864668 * ____arg1_6;

public:
	inline static int32_t get_offset_of__arg0_5() { return static_cast<int32_t>(offsetof(InvocationExpression2_t4057233060, ____arg0_5)); }
	inline RuntimeObject * get__arg0_5() const { return ____arg0_5; }
	inline RuntimeObject ** get_address_of__arg0_5() { return &____arg0_5; }
	inline void set__arg0_5(RuntimeObject * value)
	{
		____arg0_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_5), value);
	}

	inline static int32_t get_offset_of__arg1_6() { return static_cast<int32_t>(offsetof(InvocationExpression2_t4057233060, ____arg1_6)); }
	inline Expression_t114864668 * get__arg1_6() const { return ____arg1_6; }
	inline Expression_t114864668 ** get_address_of__arg1_6() { return &____arg1_6; }
	inline void set__arg1_6(Expression_t114864668 * value)
	{
		____arg1_6 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOCATIONEXPRESSION2_T4057233060_H
#ifndef INVOCATIONEXPRESSION1_T4057233063_H
#define INVOCATIONEXPRESSION1_T4057233063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InvocationExpression1
struct  InvocationExpression1_t4057233063  : public InvocationExpression_t267914806
{
public:
	// System.Object System.Linq.Expressions.InvocationExpression1::_arg0
	RuntimeObject * ____arg0_5;

public:
	inline static int32_t get_offset_of__arg0_5() { return static_cast<int32_t>(offsetof(InvocationExpression1_t4057233063, ____arg0_5)); }
	inline RuntimeObject * get__arg0_5() const { return ____arg0_5; }
	inline RuntimeObject ** get_address_of__arg0_5() { return &____arg0_5; }
	inline void set__arg0_5(RuntimeObject * value)
	{
		____arg0_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOCATIONEXPRESSION1_T4057233063_H
#ifndef MEMBERBINDINGTYPE_T1835863933_H
#define MEMBERBINDINGTYPE_T1835863933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberBindingType
struct  MemberBindingType_t1835863933 
{
public:
	// System.Int32 System.Linq.Expressions.MemberBindingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MemberBindingType_t1835863933, ___value___2)); }
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
#endif // MEMBERBINDINGTYPE_T1835863933_H
#ifndef BLOCK3_T2819906268_H
#define BLOCK3_T2819906268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Block3
struct  Block3_t2819906268  : public BlockExpression_t707433991
{
public:
	// System.Object System.Linq.Expressions.Block3::_arg0
	RuntimeObject * ____arg0_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Block3::_arg1
	Expression_t114864668 * ____arg1_4;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Block3::_arg2
	Expression_t114864668 * ____arg2_5;

public:
	inline static int32_t get_offset_of__arg0_3() { return static_cast<int32_t>(offsetof(Block3_t2819906268, ____arg0_3)); }
	inline RuntimeObject * get__arg0_3() const { return ____arg0_3; }
	inline RuntimeObject ** get_address_of__arg0_3() { return &____arg0_3; }
	inline void set__arg0_3(RuntimeObject * value)
	{
		____arg0_3 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_3), value);
	}

	inline static int32_t get_offset_of__arg1_4() { return static_cast<int32_t>(offsetof(Block3_t2819906268, ____arg1_4)); }
	inline Expression_t114864668 * get__arg1_4() const { return ____arg1_4; }
	inline Expression_t114864668 ** get_address_of__arg1_4() { return &____arg1_4; }
	inline void set__arg1_4(Expression_t114864668 * value)
	{
		____arg1_4 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_4), value);
	}

	inline static int32_t get_offset_of__arg2_5() { return static_cast<int32_t>(offsetof(Block3_t2819906268, ____arg2_5)); }
	inline Expression_t114864668 * get__arg2_5() const { return ____arg2_5; }
	inline Expression_t114864668 ** get_address_of__arg2_5() { return &____arg2_5; }
	inline void set__arg2_5(Expression_t114864668 * value)
	{
		____arg2_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg2_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCK3_T2819906268_H
#ifndef INVOCATIONEXPRESSION4_T4057233066_H
#define INVOCATIONEXPRESSION4_T4057233066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InvocationExpression4
struct  InvocationExpression4_t4057233066  : public InvocationExpression_t267914806
{
public:
	// System.Object System.Linq.Expressions.InvocationExpression4::_arg0
	RuntimeObject * ____arg0_5;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression4::_arg1
	Expression_t114864668 * ____arg1_6;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression4::_arg2
	Expression_t114864668 * ____arg2_7;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression4::_arg3
	Expression_t114864668 * ____arg3_8;

public:
	inline static int32_t get_offset_of__arg0_5() { return static_cast<int32_t>(offsetof(InvocationExpression4_t4057233066, ____arg0_5)); }
	inline RuntimeObject * get__arg0_5() const { return ____arg0_5; }
	inline RuntimeObject ** get_address_of__arg0_5() { return &____arg0_5; }
	inline void set__arg0_5(RuntimeObject * value)
	{
		____arg0_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_5), value);
	}

	inline static int32_t get_offset_of__arg1_6() { return static_cast<int32_t>(offsetof(InvocationExpression4_t4057233066, ____arg1_6)); }
	inline Expression_t114864668 * get__arg1_6() const { return ____arg1_6; }
	inline Expression_t114864668 ** get_address_of__arg1_6() { return &____arg1_6; }
	inline void set__arg1_6(Expression_t114864668 * value)
	{
		____arg1_6 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_6), value);
	}

	inline static int32_t get_offset_of__arg2_7() { return static_cast<int32_t>(offsetof(InvocationExpression4_t4057233066, ____arg2_7)); }
	inline Expression_t114864668 * get__arg2_7() const { return ____arg2_7; }
	inline Expression_t114864668 ** get_address_of__arg2_7() { return &____arg2_7; }
	inline void set__arg2_7(Expression_t114864668 * value)
	{
		____arg2_7 = value;
		Il2CppCodeGenWriteBarrier((&____arg2_7), value);
	}

	inline static int32_t get_offset_of__arg3_8() { return static_cast<int32_t>(offsetof(InvocationExpression4_t4057233066, ____arg3_8)); }
	inline Expression_t114864668 * get__arg3_8() const { return ____arg3_8; }
	inline Expression_t114864668 ** get_address_of__arg3_8() { return &____arg3_8; }
	inline void set__arg3_8(Expression_t114864668 * value)
	{
		____arg3_8 = value;
		Il2CppCodeGenWriteBarrier((&____arg3_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOCATIONEXPRESSION4_T4057233066_H
#ifndef INVOCATIONEXPRESSION3_T4057233061_H
#define INVOCATIONEXPRESSION3_T4057233061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InvocationExpression3
struct  InvocationExpression3_t4057233061  : public InvocationExpression_t267914806
{
public:
	// System.Object System.Linq.Expressions.InvocationExpression3::_arg0
	RuntimeObject * ____arg0_5;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression3::_arg1
	Expression_t114864668 * ____arg1_6;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression3::_arg2
	Expression_t114864668 * ____arg2_7;

public:
	inline static int32_t get_offset_of__arg0_5() { return static_cast<int32_t>(offsetof(InvocationExpression3_t4057233061, ____arg0_5)); }
	inline RuntimeObject * get__arg0_5() const { return ____arg0_5; }
	inline RuntimeObject ** get_address_of__arg0_5() { return &____arg0_5; }
	inline void set__arg0_5(RuntimeObject * value)
	{
		____arg0_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_5), value);
	}

	inline static int32_t get_offset_of__arg1_6() { return static_cast<int32_t>(offsetof(InvocationExpression3_t4057233061, ____arg1_6)); }
	inline Expression_t114864668 * get__arg1_6() const { return ____arg1_6; }
	inline Expression_t114864668 ** get_address_of__arg1_6() { return &____arg1_6; }
	inline void set__arg1_6(Expression_t114864668 * value)
	{
		____arg1_6 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_6), value);
	}

	inline static int32_t get_offset_of__arg2_7() { return static_cast<int32_t>(offsetof(InvocationExpression3_t4057233061, ____arg2_7)); }
	inline Expression_t114864668 * get__arg2_7() const { return ____arg2_7; }
	inline Expression_t114864668 ** get_address_of__arg2_7() { return &____arg2_7; }
	inline void set__arg2_7(Expression_t114864668 * value)
	{
		____arg2_7 = value;
		Il2CppCodeGenWriteBarrier((&____arg2_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOCATIONEXPRESSION3_T4057233061_H
#ifndef BLOCK4_T2416621741_H
#define BLOCK4_T2416621741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Block4
struct  Block4_t2416621741  : public BlockExpression_t707433991
{
public:
	// System.Object System.Linq.Expressions.Block4::_arg0
	RuntimeObject * ____arg0_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Block4::_arg1
	Expression_t114864668 * ____arg1_4;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Block4::_arg2
	Expression_t114864668 * ____arg2_5;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Block4::_arg3
	Expression_t114864668 * ____arg3_6;

public:
	inline static int32_t get_offset_of__arg0_3() { return static_cast<int32_t>(offsetof(Block4_t2416621741, ____arg0_3)); }
	inline RuntimeObject * get__arg0_3() const { return ____arg0_3; }
	inline RuntimeObject ** get_address_of__arg0_3() { return &____arg0_3; }
	inline void set__arg0_3(RuntimeObject * value)
	{
		____arg0_3 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_3), value);
	}

	inline static int32_t get_offset_of__arg1_4() { return static_cast<int32_t>(offsetof(Block4_t2416621741, ____arg1_4)); }
	inline Expression_t114864668 * get__arg1_4() const { return ____arg1_4; }
	inline Expression_t114864668 ** get_address_of__arg1_4() { return &____arg1_4; }
	inline void set__arg1_4(Expression_t114864668 * value)
	{
		____arg1_4 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_4), value);
	}

	inline static int32_t get_offset_of__arg2_5() { return static_cast<int32_t>(offsetof(Block4_t2416621741, ____arg2_5)); }
	inline Expression_t114864668 * get__arg2_5() const { return ____arg2_5; }
	inline Expression_t114864668 ** get_address_of__arg2_5() { return &____arg2_5; }
	inline void set__arg2_5(Expression_t114864668 * value)
	{
		____arg2_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg2_5), value);
	}

	inline static int32_t get_offset_of__arg3_6() { return static_cast<int32_t>(offsetof(Block4_t2416621741, ____arg3_6)); }
	inline Expression_t114864668 * get__arg3_6() const { return ____arg3_6; }
	inline Expression_t114864668 ** get_address_of__arg3_6() { return &____arg3_6; }
	inline void set__arg3_6(Expression_t114864668 * value)
	{
		____arg3_6 = value;
		Il2CppCodeGenWriteBarrier((&____arg3_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCK4_T2416621741_H
#ifndef INVOCATIONEXPRESSION5_T4057233067_H
#define INVOCATIONEXPRESSION5_T4057233067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InvocationExpression5
struct  InvocationExpression5_t4057233067  : public InvocationExpression_t267914806
{
public:
	// System.Object System.Linq.Expressions.InvocationExpression5::_arg0
	RuntimeObject * ____arg0_5;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression5::_arg1
	Expression_t114864668 * ____arg1_6;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression5::_arg2
	Expression_t114864668 * ____arg2_7;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression5::_arg3
	Expression_t114864668 * ____arg3_8;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression5::_arg4
	Expression_t114864668 * ____arg4_9;

public:
	inline static int32_t get_offset_of__arg0_5() { return static_cast<int32_t>(offsetof(InvocationExpression5_t4057233067, ____arg0_5)); }
	inline RuntimeObject * get__arg0_5() const { return ____arg0_5; }
	inline RuntimeObject ** get_address_of__arg0_5() { return &____arg0_5; }
	inline void set__arg0_5(RuntimeObject * value)
	{
		____arg0_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_5), value);
	}

	inline static int32_t get_offset_of__arg1_6() { return static_cast<int32_t>(offsetof(InvocationExpression5_t4057233067, ____arg1_6)); }
	inline Expression_t114864668 * get__arg1_6() const { return ____arg1_6; }
	inline Expression_t114864668 ** get_address_of__arg1_6() { return &____arg1_6; }
	inline void set__arg1_6(Expression_t114864668 * value)
	{
		____arg1_6 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_6), value);
	}

	inline static int32_t get_offset_of__arg2_7() { return static_cast<int32_t>(offsetof(InvocationExpression5_t4057233067, ____arg2_7)); }
	inline Expression_t114864668 * get__arg2_7() const { return ____arg2_7; }
	inline Expression_t114864668 ** get_address_of__arg2_7() { return &____arg2_7; }
	inline void set__arg2_7(Expression_t114864668 * value)
	{
		____arg2_7 = value;
		Il2CppCodeGenWriteBarrier((&____arg2_7), value);
	}

	inline static int32_t get_offset_of__arg3_8() { return static_cast<int32_t>(offsetof(InvocationExpression5_t4057233067, ____arg3_8)); }
	inline Expression_t114864668 * get__arg3_8() const { return ____arg3_8; }
	inline Expression_t114864668 ** get_address_of__arg3_8() { return &____arg3_8; }
	inline void set__arg3_8(Expression_t114864668 * value)
	{
		____arg3_8 = value;
		Il2CppCodeGenWriteBarrier((&____arg3_8), value);
	}

	inline static int32_t get_offset_of__arg4_9() { return static_cast<int32_t>(offsetof(InvocationExpression5_t4057233067, ____arg4_9)); }
	inline Expression_t114864668 * get__arg4_9() const { return ____arg4_9; }
	inline Expression_t114864668 ** get_address_of__arg4_9() { return &____arg4_9; }
	inline void set__arg4_9(Expression_t114864668 * value)
	{
		____arg4_9 = value;
		Il2CppCodeGenWriteBarrier((&____arg4_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOCATIONEXPRESSION5_T4057233067_H
#ifndef EXTENSIONINFO_T2953850916_H
#define EXTENSIONINFO_T2953850916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/ExtensionInfo
struct  ExtensionInfo_t2953850916  : public RuntimeObject
{
public:
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression/ExtensionInfo::NodeType
	int32_t ___NodeType_0;
	// System.Type System.Linq.Expressions.Expression/ExtensionInfo::Type
	Type_t * ___Type_1;

public:
	inline static int32_t get_offset_of_NodeType_0() { return static_cast<int32_t>(offsetof(ExtensionInfo_t2953850916, ___NodeType_0)); }
	inline int32_t get_NodeType_0() const { return ___NodeType_0; }
	inline int32_t* get_address_of_NodeType_0() { return &___NodeType_0; }
	inline void set_NodeType_0(int32_t value)
	{
		___NodeType_0 = value;
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(ExtensionInfo_t2953850916, ___Type_1)); }
	inline Type_t * get_Type_1() const { return ___Type_1; }
	inline Type_t ** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(Type_t * value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((&___Type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONINFO_T2953850916_H
#ifndef SCOPEN_T2192667448_H
#define SCOPEN_T2192667448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ScopeN
struct  ScopeN_t2192667448  : public ScopeExpression_t2120595424
{
public:
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.ScopeN::_body
	RuntimeObject* ____body_4;

public:
	inline static int32_t get_offset_of__body_4() { return static_cast<int32_t>(offsetof(ScopeN_t2192667448, ____body_4)); }
	inline RuntimeObject* get__body_4() const { return ____body_4; }
	inline RuntimeObject** get_address_of__body_4() { return &____body_4; }
	inline void set__body_4(RuntimeObject* value)
	{
		____body_4 = value;
		Il2CppCodeGenWriteBarrier((&____body_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCOPEN_T2192667448_H
#ifndef BYREFPARAMETEREXPRESSION_T71308129_H
#define BYREFPARAMETEREXPRESSION_T71308129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ByRefParameterExpression
struct  ByRefParameterExpression_t71308129  : public TypedParameterExpression_t544487603
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYREFPARAMETEREXPRESSION_T71308129_H
#ifndef SCOPE1_T3832656747_H
#define SCOPE1_T3832656747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Scope1
struct  Scope1_t3832656747  : public ScopeExpression_t2120595424
{
public:
	// System.Object System.Linq.Expressions.Scope1::_body
	RuntimeObject * ____body_4;

public:
	inline static int32_t get_offset_of__body_4() { return static_cast<int32_t>(offsetof(Scope1_t3832656747, ____body_4)); }
	inline RuntimeObject * get__body_4() const { return ____body_4; }
	inline RuntimeObject ** get_address_of__body_4() { return &____body_4; }
	inline void set__body_4(RuntimeObject * value)
	{
		____body_4 = value;
		Il2CppCodeGenWriteBarrier((&____body_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCOPE1_T3832656747_H
#ifndef GOTOEXPRESSION_T2835570157_H
#define GOTOEXPRESSION_T2835570157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.GotoExpression
struct  GotoExpression_t2835570157  : public Expression_t114864668
{
public:
	// System.Type System.Linq.Expressions.GotoExpression::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.GotoExpression::<Value>k__BackingField
	Expression_t114864668 * ___U3CValueU3Ek__BackingField_4;
	// System.Linq.Expressions.LabelTarget System.Linq.Expressions.GotoExpression::<Target>k__BackingField
	LabelTarget_t2114570595 * ___U3CTargetU3Ek__BackingField_5;
	// System.Linq.Expressions.GotoExpressionKind System.Linq.Expressions.GotoExpression::<Kind>k__BackingField
	int32_t ___U3CKindU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GotoExpression_t2835570157, ___U3CTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_3() const { return ___U3CTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_3() { return &___U3CTypeU3Ek__BackingField_3; }
	inline void set_U3CTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GotoExpression_t2835570157, ___U3CValueU3Ek__BackingField_4)); }
	inline Expression_t114864668 * get_U3CValueU3Ek__BackingField_4() const { return ___U3CValueU3Ek__BackingField_4; }
	inline Expression_t114864668 ** get_address_of_U3CValueU3Ek__BackingField_4() { return &___U3CValueU3Ek__BackingField_4; }
	inline void set_U3CValueU3Ek__BackingField_4(Expression_t114864668 * value)
	{
		___U3CValueU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CValueU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GotoExpression_t2835570157, ___U3CTargetU3Ek__BackingField_5)); }
	inline LabelTarget_t2114570595 * get_U3CTargetU3Ek__BackingField_5() const { return ___U3CTargetU3Ek__BackingField_5; }
	inline LabelTarget_t2114570595 ** get_address_of_U3CTargetU3Ek__BackingField_5() { return &___U3CTargetU3Ek__BackingField_5; }
	inline void set_U3CTargetU3Ek__BackingField_5(LabelTarget_t2114570595 * value)
	{
		___U3CTargetU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTargetU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CKindU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GotoExpression_t2835570157, ___U3CKindU3Ek__BackingField_6)); }
	inline int32_t get_U3CKindU3Ek__BackingField_6() const { return ___U3CKindU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CKindU3Ek__BackingField_6() { return &___U3CKindU3Ek__BackingField_6; }
	inline void set_U3CKindU3Ek__BackingField_6(int32_t value)
	{
		___U3CKindU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOTOEXPRESSION_T2835570157_H
#ifndef INSTANCEMETHODCALLEXPRESSION0_T3329189282_H
#define INSTANCEMETHODCALLEXPRESSION0_T3329189282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InstanceMethodCallExpression0
struct  InstanceMethodCallExpression0_t3329189282  : public InstanceMethodCallExpression_t3007467826
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEMETHODCALLEXPRESSION0_T3329189282_H
#ifndef MEMBERBINDING_T3487798541_H
#define MEMBERBINDING_T3487798541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberBinding
struct  MemberBinding_t3487798541  : public RuntimeObject
{
public:
	// System.Linq.Expressions.MemberBindingType System.Linq.Expressions.MemberBinding::<BindingType>k__BackingField
	int32_t ___U3CBindingTypeU3Ek__BackingField_0;
	// System.Reflection.MemberInfo System.Linq.Expressions.MemberBinding::<Member>k__BackingField
	MemberInfo_t * ___U3CMemberU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CBindingTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MemberBinding_t3487798541, ___U3CBindingTypeU3Ek__BackingField_0)); }
	inline int32_t get_U3CBindingTypeU3Ek__BackingField_0() const { return ___U3CBindingTypeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CBindingTypeU3Ek__BackingField_0() { return &___U3CBindingTypeU3Ek__BackingField_0; }
	inline void set_U3CBindingTypeU3Ek__BackingField_0(int32_t value)
	{
		___U3CBindingTypeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMemberU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MemberBinding_t3487798541, ___U3CMemberU3Ek__BackingField_1)); }
	inline MemberInfo_t * get_U3CMemberU3Ek__BackingField_1() const { return ___U3CMemberU3Ek__BackingField_1; }
	inline MemberInfo_t ** get_address_of_U3CMemberU3Ek__BackingField_1() { return &___U3CMemberU3Ek__BackingField_1; }
	inline void set_U3CMemberU3Ek__BackingField_1(MemberInfo_t * value)
	{
		___U3CMemberU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMemberU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERBINDING_T3487798541_H
#ifndef INSTANCEMETHODCALLEXPRESSIONN_T3329189368_H
#define INSTANCEMETHODCALLEXPRESSIONN_T3329189368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InstanceMethodCallExpressionN
struct  InstanceMethodCallExpressionN_t3329189368  : public InstanceMethodCallExpression_t3007467826
{
public:
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.InstanceMethodCallExpressionN::_arguments
	RuntimeObject* ____arguments_5;

public:
	inline static int32_t get_offset_of__arguments_5() { return static_cast<int32_t>(offsetof(InstanceMethodCallExpressionN_t3329189368, ____arguments_5)); }
	inline RuntimeObject* get__arguments_5() const { return ____arguments_5; }
	inline RuntimeObject** get_address_of__arguments_5() { return &____arguments_5; }
	inline void set__arguments_5(RuntimeObject* value)
	{
		____arguments_5 = value;
		Il2CppCodeGenWriteBarrier((&____arguments_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEMETHODCALLEXPRESSIONN_T3329189368_H
#ifndef INSTANCEMETHODCALLEXPRESSION1_T3329189283_H
#define INSTANCEMETHODCALLEXPRESSION1_T3329189283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InstanceMethodCallExpression1
struct  InstanceMethodCallExpression1_t3329189283  : public InstanceMethodCallExpression_t3007467826
{
public:
	// System.Object System.Linq.Expressions.InstanceMethodCallExpression1::_arg0
	RuntimeObject * ____arg0_5;

public:
	inline static int32_t get_offset_of__arg0_5() { return static_cast<int32_t>(offsetof(InstanceMethodCallExpression1_t3329189283, ____arg0_5)); }
	inline RuntimeObject * get__arg0_5() const { return ____arg0_5; }
	inline RuntimeObject ** get_address_of__arg0_5() { return &____arg0_5; }
	inline void set__arg0_5(RuntimeObject * value)
	{
		____arg0_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEMETHODCALLEXPRESSION1_T3329189283_H
#ifndef FULLCONDITIONALEXPRESSIONWITHTYPE_T1947076677_H
#define FULLCONDITIONALEXPRESSIONWITHTYPE_T1947076677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.FullConditionalExpressionWithType
struct  FullConditionalExpressionWithType_t1947076677  : public FullConditionalExpression_t270415639
{
public:
	// System.Type System.Linq.Expressions.FullConditionalExpressionWithType::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FullConditionalExpressionWithType_t1947076677, ___U3CTypeU3Ek__BackingField_6)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_6() const { return ___U3CTypeU3Ek__BackingField_6; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_6() { return &___U3CTypeU3Ek__BackingField_6; }
	inline void set_U3CTypeU3Ek__BackingField_6(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FULLCONDITIONALEXPRESSIONWITHTYPE_T1947076677_H
#ifndef INSTANCEMETHODCALLEXPRESSION3_T3329189285_H
#define INSTANCEMETHODCALLEXPRESSION3_T3329189285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InstanceMethodCallExpression3
struct  InstanceMethodCallExpression3_t3329189285  : public InstanceMethodCallExpression_t3007467826
{
public:
	// System.Object System.Linq.Expressions.InstanceMethodCallExpression3::_arg0
	RuntimeObject * ____arg0_5;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InstanceMethodCallExpression3::_arg1
	Expression_t114864668 * ____arg1_6;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InstanceMethodCallExpression3::_arg2
	Expression_t114864668 * ____arg2_7;

public:
	inline static int32_t get_offset_of__arg0_5() { return static_cast<int32_t>(offsetof(InstanceMethodCallExpression3_t3329189285, ____arg0_5)); }
	inline RuntimeObject * get__arg0_5() const { return ____arg0_5; }
	inline RuntimeObject ** get_address_of__arg0_5() { return &____arg0_5; }
	inline void set__arg0_5(RuntimeObject * value)
	{
		____arg0_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_5), value);
	}

	inline static int32_t get_offset_of__arg1_6() { return static_cast<int32_t>(offsetof(InstanceMethodCallExpression3_t3329189285, ____arg1_6)); }
	inline Expression_t114864668 * get__arg1_6() const { return ____arg1_6; }
	inline Expression_t114864668 ** get_address_of__arg1_6() { return &____arg1_6; }
	inline void set__arg1_6(Expression_t114864668 * value)
	{
		____arg1_6 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_6), value);
	}

	inline static int32_t get_offset_of__arg2_7() { return static_cast<int32_t>(offsetof(InstanceMethodCallExpression3_t3329189285, ____arg2_7)); }
	inline Expression_t114864668 * get__arg2_7() const { return ____arg2_7; }
	inline Expression_t114864668 ** get_address_of__arg2_7() { return &____arg2_7; }
	inline void set__arg2_7(Expression_t114864668 * value)
	{
		____arg2_7 = value;
		Il2CppCodeGenWriteBarrier((&____arg2_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEMETHODCALLEXPRESSION3_T3329189285_H
#ifndef INSTANCEMETHODCALLEXPRESSION2_T3329189284_H
#define INSTANCEMETHODCALLEXPRESSION2_T3329189284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InstanceMethodCallExpression2
struct  InstanceMethodCallExpression2_t3329189284  : public InstanceMethodCallExpression_t3007467826
{
public:
	// System.Object System.Linq.Expressions.InstanceMethodCallExpression2::_arg0
	RuntimeObject * ____arg0_5;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InstanceMethodCallExpression2::_arg1
	Expression_t114864668 * ____arg1_6;

public:
	inline static int32_t get_offset_of__arg0_5() { return static_cast<int32_t>(offsetof(InstanceMethodCallExpression2_t3329189284, ____arg0_5)); }
	inline RuntimeObject * get__arg0_5() const { return ____arg0_5; }
	inline RuntimeObject ** get_address_of__arg0_5() { return &____arg0_5; }
	inline void set__arg0_5(RuntimeObject * value)
	{
		____arg0_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_5), value);
	}

	inline static int32_t get_offset_of__arg1_6() { return static_cast<int32_t>(offsetof(InstanceMethodCallExpression2_t3329189284, ____arg1_6)); }
	inline Expression_t114864668 * get__arg1_6() const { return ____arg1_6; }
	inline Expression_t114864668 ** get_address_of__arg1_6() { return &____arg1_6; }
	inline void set__arg1_6(Expression_t114864668 * value)
	{
		____arg1_6 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEMETHODCALLEXPRESSION2_T3329189284_H
#ifndef MEMBERASSIGNMENT_T3987033531_H
#define MEMBERASSIGNMENT_T3987033531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberAssignment
struct  MemberAssignment_t3987033531  : public MemberBinding_t3487798541
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.MemberAssignment::_expression
	Expression_t114864668 * ____expression_2;

public:
	inline static int32_t get_offset_of__expression_2() { return static_cast<int32_t>(offsetof(MemberAssignment_t3987033531, ____expression_2)); }
	inline Expression_t114864668 * get__expression_2() const { return ____expression_2; }
	inline Expression_t114864668 ** get_address_of__expression_2() { return &____expression_2; }
	inline void set__expression_2(Expression_t114864668 * value)
	{
		____expression_2 = value;
		Il2CppCodeGenWriteBarrier((&____expression_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERASSIGNMENT_T3987033531_H
#ifndef MEMBERMEMBERBINDING_T950649153_H
#define MEMBERMEMBERBINDING_T950649153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberMemberBinding
struct  MemberMemberBinding_t950649153  : public MemberBinding_t3487798541
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding> System.Linq.Expressions.MemberMemberBinding::<Bindings>k__BackingField
	ReadOnlyCollection_1_t3673584233 * ___U3CBindingsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CBindingsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MemberMemberBinding_t950649153, ___U3CBindingsU3Ek__BackingField_2)); }
	inline ReadOnlyCollection_1_t3673584233 * get_U3CBindingsU3Ek__BackingField_2() const { return ___U3CBindingsU3Ek__BackingField_2; }
	inline ReadOnlyCollection_1_t3673584233 ** get_address_of_U3CBindingsU3Ek__BackingField_2() { return &___U3CBindingsU3Ek__BackingField_2; }
	inline void set_U3CBindingsU3Ek__BackingField_2(ReadOnlyCollection_1_t3673584233 * value)
	{
		___U3CBindingsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBindingsU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERMEMBERBINDING_T950649153_H
#ifndef SCOPEWITHTYPE_T1515621858_H
#define SCOPEWITHTYPE_T1515621858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ScopeWithType
struct  ScopeWithType_t1515621858  : public ScopeN_t2192667448
{
public:
	// System.Type System.Linq.Expressions.ScopeWithType::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ScopeWithType_t1515621858, ___U3CTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_5() const { return ___U3CTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_5() { return &___U3CTypeU3Ek__BackingField_5; }
	inline void set_U3CTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCOPEWITHTYPE_T1515621858_H
#ifndef MEMBERLISTBINDING_T1321006879_H
#define MEMBERLISTBINDING_T1321006879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberListBinding
struct  MemberListBinding_t1321006879  : public MemberBinding_t3487798541
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> System.Linq.Expressions.MemberListBinding::<Initializers>k__BackingField
	ReadOnlyCollection_1_t4083992128 * ___U3CInitializersU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CInitializersU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MemberListBinding_t1321006879, ___U3CInitializersU3Ek__BackingField_2)); }
	inline ReadOnlyCollection_1_t4083992128 * get_U3CInitializersU3Ek__BackingField_2() const { return ___U3CInitializersU3Ek__BackingField_2; }
	inline ReadOnlyCollection_1_t4083992128 ** get_address_of_U3CInitializersU3Ek__BackingField_2() { return &___U3CInitializersU3Ek__BackingField_2; }
	inline void set_U3CInitializersU3Ek__BackingField_2(ReadOnlyCollection_1_t4083992128 * value)
	{
		___U3CInitializersU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInitializersU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERLISTBINDING_T1321006879_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3100 = { sizeof (MemberInitExpressionProxy_t1660440611), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3101 = { sizeof (MethodCallExpressionProxy_t1816147720), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3102 = { sizeof (NewArrayExpressionProxy_t1236297982), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3103 = { sizeof (NewExpressionProxy_t4240405025), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3104 = { sizeof (ParameterExpressionProxy_t675893708), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3105 = { sizeof (RuntimeVariablesExpressionProxy_t3333977548), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3106 = { sizeof (SwitchCaseProxy_t2312313025), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3107 = { sizeof (SwitchExpressionProxy_t2036506531), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3108 = { sizeof (TryExpressionProxy_t1231208850), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3109 = { sizeof (TypeBinaryExpressionProxy_t1615990160), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3110 = { sizeof (UnaryExpressionProxy_t2833566940), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3111 = { sizeof (ExtensionInfo_t2953850916), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3111[2] = 
{
	ExtensionInfo_t2953850916::get_offset_of_NodeType_0(),
	ExtensionInfo_t2953850916::get_offset_of_Type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3112 = { sizeof (U3CU3Ec_t1368195862), -1, sizeof(U3CU3Ec_t1368195862_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3112[2] = 
{
	U3CU3Ec_t1368195862_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t1368195862_StaticFields::get_offset_of_U3CU3E9__364_0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3113 = { sizeof (BlockExpression_t707433991), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3114 = { sizeof (Block2_t1253822327), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3114[2] = 
{
	Block2_t1253822327::get_offset_of__arg0_3(),
	Block2_t1253822327::get_offset_of__arg1_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3115 = { sizeof (Block3_t2819906268), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3115[3] = 
{
	Block3_t2819906268::get_offset_of__arg0_3(),
	Block3_t2819906268::get_offset_of__arg1_4(),
	Block3_t2819906268::get_offset_of__arg2_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3116 = { sizeof (Block4_t2416621741), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3116[4] = 
{
	Block4_t2416621741::get_offset_of__arg0_3(),
	Block4_t2416621741::get_offset_of__arg1_4(),
	Block4_t2416621741::get_offset_of__arg2_5(),
	Block4_t2416621741::get_offset_of__arg3_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3117 = { sizeof (Block5_t3982705682), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3117[5] = 
{
	Block5_t3982705682::get_offset_of__arg0_3(),
	Block5_t3982705682::get_offset_of__arg1_4(),
	Block5_t3982705682::get_offset_of__arg2_5(),
	Block5_t3982705682::get_offset_of__arg3_6(),
	Block5_t3982705682::get_offset_of__arg4_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3118 = { sizeof (BlockN_t2490527099), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3118[1] = 
{
	BlockN_t2490527099::get_offset_of__expressions_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3119 = { sizeof (ScopeExpression_t2120595424), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3119[1] = 
{
	ScopeExpression_t2120595424::get_offset_of__variables_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3120 = { sizeof (Scope1_t3832656747), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3120[1] = 
{
	Scope1_t3832656747::get_offset_of__body_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3121 = { sizeof (ScopeN_t2192667448), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3121[1] = 
{
	ScopeN_t2192667448::get_offset_of__body_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3122 = { sizeof (ScopeWithType_t1515621858), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3122[1] = 
{
	ScopeWithType_t1515621858::get_offset_of_U3CTypeU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3123 = { sizeof (BlockExpressionList_t2441099961), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3123[2] = 
{
	BlockExpressionList_t2441099961::get_offset_of__block_0(),
	BlockExpressionList_t2441099961::get_offset_of__arg0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3124 = { sizeof (U3CGetEnumeratorU3Ed__18_t2113259017), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3124[4] = 
{
	U3CGetEnumeratorU3Ed__18_t2113259017::get_offset_of_U3CU3E1__state_0(),
	U3CGetEnumeratorU3Ed__18_t2113259017::get_offset_of_U3CU3E2__current_1(),
	U3CGetEnumeratorU3Ed__18_t2113259017::get_offset_of_U3CU3E4__this_2(),
	U3CGetEnumeratorU3Ed__18_t2113259017::get_offset_of_U3CiU3E5__1_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3125 = { sizeof (CatchBlock_t4020249662), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3125[4] = 
{
	CatchBlock_t4020249662::get_offset_of_U3CVariableU3Ek__BackingField_0(),
	CatchBlock_t4020249662::get_offset_of_U3CTestU3Ek__BackingField_1(),
	CatchBlock_t4020249662::get_offset_of_U3CBodyU3Ek__BackingField_2(),
	CatchBlock_t4020249662::get_offset_of_U3CFilterU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3126 = { sizeof (ConditionalExpression_t4183435840), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3126[2] = 
{
	ConditionalExpression_t4183435840::get_offset_of_U3CTestU3Ek__BackingField_3(),
	ConditionalExpression_t4183435840::get_offset_of_U3CIfTrueU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3127 = { sizeof (FullConditionalExpression_t270415639), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3127[1] = 
{
	FullConditionalExpression_t270415639::get_offset_of__false_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3128 = { sizeof (FullConditionalExpressionWithType_t1947076677), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3128[1] = 
{
	FullConditionalExpressionWithType_t1947076677::get_offset_of_U3CTypeU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3129 = { sizeof (ConstantExpression_t305952364), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3129[1] = 
{
	ConstantExpression_t305952364::get_offset_of_U3CValueU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3130 = { sizeof (TypedConstantExpression_t728025800), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3130[1] = 
{
	TypedConstantExpression_t728025800::get_offset_of_U3CTypeU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3131 = { sizeof (DebugInfoExpression_t307709501), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3131[1] = 
{
	DebugInfoExpression_t307709501::get_offset_of_U3CDocumentU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3132 = { sizeof (DefaultExpression_t181724441), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3132[1] = 
{
	DefaultExpression_t181724441::get_offset_of_U3CTypeU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3133 = { sizeof (ElementInit_t3898206436), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3133[2] = 
{
	ElementInit_t3898206436::get_offset_of_U3CAddMethodU3Ek__BackingField_0(),
	ElementInit_t3898206436::get_offset_of_U3CArgumentsU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3134 = { sizeof (Error_t4281176116), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3135 = { sizeof (ExpressionStringBuilder_t2533574192), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3135[2] = 
{
	ExpressionStringBuilder_t2533574192::get_offset_of__out_0(),
	ExpressionStringBuilder_t2533574192::get_offset_of__ids_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3136 = { sizeof (ExpressionType_t1567188220)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3136[86] = 
{
	ExpressionType_t1567188220::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3137 = { sizeof (ExpressionVisitor_t1427178562), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3138 = { sizeof (GotoExpressionKind_t2358977977)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3138[5] = 
{
	GotoExpressionKind_t2358977977::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3139 = { sizeof (GotoExpression_t2835570157), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3139[4] = 
{
	GotoExpression_t2835570157::get_offset_of_U3CTypeU3Ek__BackingField_3(),
	GotoExpression_t2835570157::get_offset_of_U3CValueU3Ek__BackingField_4(),
	GotoExpression_t2835570157::get_offset_of_U3CTargetU3Ek__BackingField_5(),
	GotoExpression_t2835570157::get_offset_of_U3CKindU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3140 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3141 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3142 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3143 = { sizeof (IndexExpression_t1657543884), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3143[3] = 
{
	IndexExpression_t1657543884::get_offset_of__arguments_3(),
	IndexExpression_t1657543884::get_offset_of_U3CObjectU3Ek__BackingField_4(),
	IndexExpression_t1657543884::get_offset_of_U3CIndexerU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3144 = { sizeof (InvocationExpression_t267914806), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3144[2] = 
{
	InvocationExpression_t267914806::get_offset_of_U3CTypeU3Ek__BackingField_3(),
	InvocationExpression_t267914806::get_offset_of_U3CExpressionU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3145 = { sizeof (InvocationExpressionN_t4057233088), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3145[1] = 
{
	InvocationExpressionN_t4057233088::get_offset_of__arguments_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3146 = { sizeof (InvocationExpression0_t4057233062), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3147 = { sizeof (InvocationExpression1_t4057233063), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3147[1] = 
{
	InvocationExpression1_t4057233063::get_offset_of__arg0_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3148 = { sizeof (InvocationExpression2_t4057233060), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3148[2] = 
{
	InvocationExpression2_t4057233060::get_offset_of__arg0_5(),
	InvocationExpression2_t4057233060::get_offset_of__arg1_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3149 = { sizeof (InvocationExpression3_t4057233061), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3149[3] = 
{
	InvocationExpression3_t4057233061::get_offset_of__arg0_5(),
	InvocationExpression3_t4057233061::get_offset_of__arg1_6(),
	InvocationExpression3_t4057233061::get_offset_of__arg2_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3150 = { sizeof (InvocationExpression4_t4057233066), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3150[4] = 
{
	InvocationExpression4_t4057233066::get_offset_of__arg0_5(),
	InvocationExpression4_t4057233066::get_offset_of__arg1_6(),
	InvocationExpression4_t4057233066::get_offset_of__arg2_7(),
	InvocationExpression4_t4057233066::get_offset_of__arg3_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3151 = { sizeof (InvocationExpression5_t4057233067), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3151[5] = 
{
	InvocationExpression5_t4057233067::get_offset_of__arg0_5(),
	InvocationExpression5_t4057233067::get_offset_of__arg1_6(),
	InvocationExpression5_t4057233067::get_offset_of__arg2_7(),
	InvocationExpression5_t4057233067::get_offset_of__arg3_8(),
	InvocationExpression5_t4057233067::get_offset_of__arg4_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3152 = { sizeof (LabelExpression_t3720407902), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3152[2] = 
{
	LabelExpression_t3720407902::get_offset_of_U3CTargetU3Ek__BackingField_3(),
	LabelExpression_t3720407902::get_offset_of_U3CDefaultValueU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3153 = { sizeof (LabelTarget_t2114570595), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3153[2] = 
{
	LabelTarget_t2114570595::get_offset_of_U3CNameU3Ek__BackingField_0(),
	LabelTarget_t2114570595::get_offset_of_U3CTypeU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3154 = { sizeof (LambdaExpression_t2811402413), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3154[1] = 
{
	LambdaExpression_t2811402413::get_offset_of__body_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3155 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3156 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3157 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3157[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3158 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3158[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3159 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3159[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3160 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3160[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3161 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3161[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3162 = { sizeof (ListInitExpression_t1376237998), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3162[2] = 
{
	ListInitExpression_t1376237998::get_offset_of_U3CNewExpressionU3Ek__BackingField_3(),
	ListInitExpression_t1376237998::get_offset_of_U3CInitializersU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3163 = { sizeof (LoopExpression_t3712177490), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3163[3] = 
{
	LoopExpression_t3712177490::get_offset_of_U3CBodyU3Ek__BackingField_3(),
	LoopExpression_t3712177490::get_offset_of_U3CBreakLabelU3Ek__BackingField_4(),
	LoopExpression_t3712177490::get_offset_of_U3CContinueLabelU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3164 = { sizeof (MemberAssignment_t3987033531), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3164[1] = 
{
	MemberAssignment_t3987033531::get_offset_of__expression_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3165 = { sizeof (MemberBindingType_t1835863933)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3165[4] = 
{
	MemberBindingType_t1835863933::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3166 = { sizeof (MemberBinding_t3487798541), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3166[2] = 
{
	MemberBinding_t3487798541::get_offset_of_U3CBindingTypeU3Ek__BackingField_0(),
	MemberBinding_t3487798541::get_offset_of_U3CMemberU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3167 = { sizeof (MemberExpression_t1790982958), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3167[1] = 
{
	MemberExpression_t1790982958::get_offset_of_U3CExpressionU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3168 = { sizeof (FieldExpression_t2735218324), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3168[1] = 
{
	FieldExpression_t2735218324::get_offset_of__field_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3169 = { sizeof (PropertyExpression_t3346955077), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3169[1] = 
{
	PropertyExpression_t3346955077::get_offset_of__property_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3170 = { sizeof (MemberInitExpression_t137172540), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3170[2] = 
{
	MemberInitExpression_t137172540::get_offset_of_U3CNewExpressionU3Ek__BackingField_3(),
	MemberInitExpression_t137172540::get_offset_of_U3CBindingsU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3171 = { sizeof (MemberListBinding_t1321006879), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3171[1] = 
{
	MemberListBinding_t1321006879::get_offset_of_U3CInitializersU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3172 = { sizeof (MemberMemberBinding_t950649153), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3172[1] = 
{
	MemberMemberBinding_t950649153::get_offset_of_U3CBindingsU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3173 = { sizeof (MethodCallExpression_t3367820543), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3173[1] = 
{
	MethodCallExpression_t3367820543::get_offset_of_U3CMethodU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3174 = { sizeof (InstanceMethodCallExpression_t3007467826), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3174[1] = 
{
	InstanceMethodCallExpression_t3007467826::get_offset_of__instance_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3175 = { sizeof (MethodCallExpressionN_t1873078325), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3175[1] = 
{
	MethodCallExpressionN_t1873078325::get_offset_of__arguments_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3176 = { sizeof (InstanceMethodCallExpressionN_t3329189368), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3176[1] = 
{
	InstanceMethodCallExpressionN_t3329189368::get_offset_of__arguments_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3177 = { sizeof (MethodCallExpression0_t1873078415), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3178 = { sizeof (MethodCallExpression1_t1873078416), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3178[1] = 
{
	MethodCallExpression1_t1873078416::get_offset_of__arg0_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3179 = { sizeof (MethodCallExpression2_t1873078417), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3179[2] = 
{
	MethodCallExpression2_t1873078417::get_offset_of__arg0_4(),
	MethodCallExpression2_t1873078417::get_offset_of__arg1_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3180 = { sizeof (MethodCallExpression3_t1873078418), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3180[3] = 
{
	MethodCallExpression3_t1873078418::get_offset_of__arg0_4(),
	MethodCallExpression3_t1873078418::get_offset_of__arg1_5(),
	MethodCallExpression3_t1873078418::get_offset_of__arg2_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3181 = { sizeof (MethodCallExpression4_t1873078411), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3181[4] = 
{
	MethodCallExpression4_t1873078411::get_offset_of__arg0_4(),
	MethodCallExpression4_t1873078411::get_offset_of__arg1_5(),
	MethodCallExpression4_t1873078411::get_offset_of__arg2_6(),
	MethodCallExpression4_t1873078411::get_offset_of__arg3_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3182 = { sizeof (MethodCallExpression5_t1873078412), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3182[5] = 
{
	MethodCallExpression5_t1873078412::get_offset_of__arg0_4(),
	MethodCallExpression5_t1873078412::get_offset_of__arg1_5(),
	MethodCallExpression5_t1873078412::get_offset_of__arg2_6(),
	MethodCallExpression5_t1873078412::get_offset_of__arg3_7(),
	MethodCallExpression5_t1873078412::get_offset_of__arg4_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3183 = { sizeof (InstanceMethodCallExpression0_t3329189282), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3184 = { sizeof (InstanceMethodCallExpression1_t3329189283), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3184[1] = 
{
	InstanceMethodCallExpression1_t3329189283::get_offset_of__arg0_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3185 = { sizeof (InstanceMethodCallExpression2_t3329189284), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3185[2] = 
{
	InstanceMethodCallExpression2_t3329189284::get_offset_of__arg0_5(),
	InstanceMethodCallExpression2_t3329189284::get_offset_of__arg1_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3186 = { sizeof (InstanceMethodCallExpression3_t3329189285), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3186[3] = 
{
	InstanceMethodCallExpression3_t3329189285::get_offset_of__arg0_5(),
	InstanceMethodCallExpression3_t3329189285::get_offset_of__arg1_6(),
	InstanceMethodCallExpression3_t3329189285::get_offset_of__arg2_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3187 = { sizeof (NewArrayExpression_t2420949259), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3187[2] = 
{
	NewArrayExpression_t2420949259::get_offset_of_U3CTypeU3Ek__BackingField_3(),
	NewArrayExpression_t2420949259::get_offset_of_U3CExpressionsU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3188 = { sizeof (NewArrayInitExpression_t518684349), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3189 = { sizeof (NewArrayBoundsExpression_t3646602802), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3190 = { sizeof (NewExpression_t1045017810), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3190[3] = 
{
	NewExpression_t1045017810::get_offset_of__arguments_3(),
	NewExpression_t1045017810::get_offset_of_U3CConstructorU3Ek__BackingField_4(),
	NewExpression_t1045017810::get_offset_of_U3CMembersU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3191 = { sizeof (NewValueTypeExpression_t2577224997), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3191[1] = 
{
	NewValueTypeExpression_t2577224997::get_offset_of_U3CTypeU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3192 = { sizeof (ParameterExpression_t3015504955), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3192[1] = 
{
	ParameterExpression_t3015504955::get_offset_of_U3CNameU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3193 = { sizeof (ByRefParameterExpression_t71308129), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3194 = { sizeof (TypedParameterExpression_t544487603), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3194[1] = 
{
	TypedParameterExpression_t544487603::get_offset_of_U3CTypeU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3195 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3196 = { sizeof (RuntimeVariablesExpression_t3592289155), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3196[1] = 
{
	RuntimeVariablesExpression_t3592289155::get_offset_of_U3CVariablesU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3197 = { sizeof (StackGuard_t935784647), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3197[1] = 
{
	StackGuard_t935784647::get_offset_of__executionStackCount_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3198 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3198[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3199 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3199[2] = 
{
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
