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

// HoloToolkit.Unity.InputModule.SpeechInputHandler
struct SpeechInputHandler_t4153622436;
// System.String
struct String_t;
// HoloToolkit.Unity.InputModule.DebugInteractionSourcePose
struct DebugInteractionSourcePose_t514846003;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t408735097;
// HoloToolkit.Unity.InputModule.IInputSource
struct IInputSource_t3421750344;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t3466835263;
// System.Void
struct Void_t1841601450;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Char[]
struct CharU5BU5D_t1328083999;
// UnityEngine.Collider
struct Collider_t3497673348;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1572802995;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t2336171397;
// HoloToolkit.Unity.InputModule.IPointingSource
struct IPointingSource_t1698930222;
// System.Delegate[]
struct DelegateU5BU5D_t1606206610;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.Windows.Speech.SemanticMeaning[]
struct SemanticMeaningU5BU5D_t2038511870;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// HoloToolkit.Unity.InputModule.KeyboardManager/KeyboardCallback
struct KeyboardCallback_t3674756476;
// HoloToolkit.Unity.InputModule.InputManager
struct InputManager_t1871732949;
// HoloToolkit.Unity.InputModule.HandGuidance
struct HandGuidance_t3680881389;
// HoloToolkit.Unity.InputModule.MixedRealityCameraManager
struct MixedRealityCameraManager_t2099335769;
// HoloToolkit.Unity.InputModule.KeyboardManager
struct KeyboardManager_t2660186888;
// HoloToolkit.Unity.InputModule.AxisController
struct AxisController_t3747398803;
// HoloToolkit.Unity.InputModule.ButtonController
struct ButtonController_t521134000;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t3303648957;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Action
struct Action_t3226471752;
// HoloToolkit.Unity.InputModule.SpeechInputHandler/KeywordAndResponse[]
struct KeywordAndResponseU5BU5D_t1823811952;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>
struct Dictionary_2_t2323514359;
// HoloToolkit.Unity.InputModule.DictationInputManager
struct DictationInputManager_t1394975144;
// HoloToolkit.Unity.InputModule.GazeManager
struct GazeManager_t1037029152;
// HoloToolkit.Unity.Interpolator
struct Interpolator_t871480351;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>
struct Dictionary_2_t1107255596;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// UnityEngine.Windows.Speech.DictationRecognizer
struct DictationRecognizer_t894834159;
// HoloToolkit.Unity.InputModule.CustomInputSource/ButtonStates
struct ButtonStates_t3673093364;
// HoloToolkit.Unity.InputModule.CustomInputControl
struct CustomInputControl_t530759532;
// HoloToolkit.Unity.InputModule.GazeManager/FocusedChangedDelegate
struct FocusedChangedDelegate_t2430817330;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_t1922075232;
// HoloToolkit.Unity.InputModule.BaseRayStabilizer
struct BaseRayStabilizer_t2987552384;
// HoloToolkit.Unity.VectorRollingStatistics
struct VectorRollingStatistics_t3452194611;
// System.Collections.Generic.Dictionary`2<System.UInt32,HoloToolkit.Unity.InputModule.RawInteractionInputSource/SourceData>
struct Dictionary_2_t3644863136;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t1518803153;
// System.Collections.Generic.HashSet`1<System.UInt32>
struct HashSet_1_t483142875;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.Dictionary`2<HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair,System.Collections.Generic.List`1<HoloToolkit.Unity.InputModule.KeyboardManager/KeyboardCallback>>
struct Dictionary_2_t3895680351;
// System.Collections.Generic.List`1<HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair>
struct List_1_t3717024176;
// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_t2844261301;
// HoloToolkit.Unity.InputModule.InputEventData
struct InputEventData_t2710196284;
// HoloToolkit.Unity.InputModule.InputClickedEventData
struct InputClickedEventData_t3434086547;
// HoloToolkit.Unity.InputModule.SourceStateEventData
struct SourceStateEventData_t2946150088;
// HoloToolkit.Unity.InputModule.ManipulationEventData
struct ManipulationEventData_t3279489987;
// HoloToolkit.Unity.InputModule.HoldEventData
struct HoldEventData_t2900733459;
// HoloToolkit.Unity.InputModule.NavigationEventData
struct NavigationEventData_t1538884580;
// HoloToolkit.Unity.InputModule.GamePadEventData
struct GamePadEventData_t912895835;
// HoloToolkit.Unity.InputModule.XboxControllerEventData
struct XboxControllerEventData_t2888026507;
// HoloToolkit.Unity.InputModule.SourceRotationEventData
struct SourceRotationEventData_t1790094301;
// HoloToolkit.Unity.InputModule.SourcePositionEventData
struct SourcePositionEventData_t4286406546;
// HoloToolkit.Unity.InputModule.PointerSpecificEventData
struct PointerSpecificEventData_t1451959381;
// HoloToolkit.Unity.InputModule.InputPositionEventData
struct InputPositionEventData_t1718411395;
// HoloToolkit.Unity.InputModule.SelectPressedEventData
struct SelectPressedEventData_t531650428;
// HoloToolkit.Unity.InputModule.SpeechEventData
struct SpeechEventData_t3647170294;
// HoloToolkit.Unity.InputModule.DictationEventData
struct DictationEventData_t3232161633;
// System.Collections.Generic.List`1<HoloToolkit.Unity.InputModule.InputSourceInfo>
struct List_1_t1333157385;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IFocusable>
struct EventFunction_1_t1247636477;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IPointerSpecificFocusable>
struct EventFunction_1_t605264588;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IInputClickHandler>
struct EventFunction_1_t1390223529;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IInputHandler>
struct EventFunction_1_t1950350445;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.ISourceStateHandler>
struct EventFunction_1_t3646233467;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IManipulationHandler>
struct EventFunction_1_t3062996938;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IHoldHandler>
struct EventFunction_1_t3710245626;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.INavigationHandler>
struct EventFunction_1_t1634119807;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IControllerInputHandler>
struct EventFunction_1_t162153717;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.ISelectHandler>
struct EventFunction_1_t3625946465;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IControllerTouchpadHandler>
struct EventFunction_1_t2143617989;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.ISourcePositionHandler>
struct EventFunction_1_t3301505711;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.ISourceRotationHandler>
struct EventFunction_1_t4246854704;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IGamePadHandler>
struct EventFunction_1_t3465969818;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IXboxControllerHandler>
struct EventFunction_1_t1726907556;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.ISpeechHandler>
struct EventFunction_1_t1772443227;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IDictationHandler>
struct EventFunction_1_t1998685734;
// HoloToolkit.Unity.InputModule.MixedRealityCameraManager/DisplayEventHandler
struct DisplayEventHandler_t2174504173;
// UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_t1861500035;
// System.Collections.Generic.Dictionary`2<System.UInt32,HoloToolkit.Unity.InputModule.InteractionInputSource/SourceData>
struct Dictionary_2_t810643408;
// HoloToolkit.Unity.InputModule.KeywordAndKeyCode[]
struct KeywordAndKeyCodeU5BU5D_t2710217503;
// UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t1990977981;
// System.Collections.Generic.Dictionary`2<System.UInt32,HoloToolkit.Unity.InputModule.XboxControllerData>
struct Dictionary_2_t2350522257;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_t70867863;
// HoloToolkit.Unity.InputModule.XboxControllerInputSource/MappingEntry[]
struct MappingEntryU5BU5D_t3398603975;




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
#ifndef U3CSTARTRECORDINGU3ED__15_T969720811_H
#define U3CSTARTRECORDINGU3ED__15_T969720811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.DictationInputManager/<StartRecording>d__15
struct  U3CStartRecordingU3Ed__15_t969720811  : public RuntimeObject
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.DictationInputManager/<StartRecording>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HoloToolkit.Unity.InputModule.DictationInputManager/<StartRecording>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single HoloToolkit.Unity.InputModule.DictationInputManager/<StartRecording>d__15::initialSilenceTimeout
	float ___initialSilenceTimeout_2;
	// System.Single HoloToolkit.Unity.InputModule.DictationInputManager/<StartRecording>d__15::autoSilenceTimeout
	float ___autoSilenceTimeout_3;
	// System.Int32 HoloToolkit.Unity.InputModule.DictationInputManager/<StartRecording>d__15::recordingTime
	int32_t ___recordingTime_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__15_t969720811, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__15_t969720811, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_initialSilenceTimeout_2() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__15_t969720811, ___initialSilenceTimeout_2)); }
	inline float get_initialSilenceTimeout_2() const { return ___initialSilenceTimeout_2; }
	inline float* get_address_of_initialSilenceTimeout_2() { return &___initialSilenceTimeout_2; }
	inline void set_initialSilenceTimeout_2(float value)
	{
		___initialSilenceTimeout_2 = value;
	}

	inline static int32_t get_offset_of_autoSilenceTimeout_3() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__15_t969720811, ___autoSilenceTimeout_3)); }
	inline float get_autoSilenceTimeout_3() const { return ___autoSilenceTimeout_3; }
	inline float* get_address_of_autoSilenceTimeout_3() { return &___autoSilenceTimeout_3; }
	inline void set_autoSilenceTimeout_3(float value)
	{
		___autoSilenceTimeout_3 = value;
	}

	inline static int32_t get_offset_of_recordingTime_4() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__15_t969720811, ___recordingTime_4)); }
	inline int32_t get_recordingTime_4() const { return ___recordingTime_4; }
	inline int32_t* get_address_of_recordingTime_4() { return &___recordingTime_4; }
	inline void set_recordingTime_4(int32_t value)
	{
		___recordingTime_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTRECORDINGU3ED__15_T969720811_H
#ifndef U3CSTOPRECORDINGU3ED__16_T1595603704_H
#define U3CSTOPRECORDINGU3ED__16_T1595603704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.DictationInputManager/<StopRecording>d__16
struct  U3CStopRecordingU3Ed__16_t1595603704  : public RuntimeObject
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.DictationInputManager/<StopRecording>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HoloToolkit.Unity.InputModule.DictationInputManager/<StopRecording>d__16::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__16_t1595603704, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__16_t1595603704, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTOPRECORDINGU3ED__16_T1595603704_H
#ifndef U3CU3EC_T299385576_H
#define U3CU3EC_T299385576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InputManager/<>c
struct  U3CU3Ec_t299385576  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t299385576_StaticFields
{
public:
	// HoloToolkit.Unity.InputModule.InputManager/<>c HoloToolkit.Unity.InputModule.InputManager/<>c::<>9
	U3CU3Ec_t299385576 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t299385576_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t299385576 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t299385576 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t299385576 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T299385576_H
#ifndef U3CATTACHTOINPUTMANAGERINSTANCEU3ED__8_T1100151762_H
#define U3CATTACHTOINPUTMANAGERINSTANCEU3ED__8_T1100151762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.SpeechInputHandler/<AttachToInputManagerInstance>d__8
struct  U3CAttachToInputManagerInstanceU3Ed__8_t1100151762  : public RuntimeObject
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.SpeechInputHandler/<AttachToInputManagerInstance>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HoloToolkit.Unity.InputModule.SpeechInputHandler/<AttachToInputManagerInstance>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// HoloToolkit.Unity.InputModule.SpeechInputHandler HoloToolkit.Unity.InputModule.SpeechInputHandler/<AttachToInputManagerInstance>d__8::<>4__this
	SpeechInputHandler_t4153622436 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAttachToInputManagerInstanceU3Ed__8_t1100151762, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAttachToInputManagerInstanceU3Ed__8_t1100151762, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAttachToInputManagerInstanceU3Ed__8_t1100151762, ___U3CU3E4__this_2)); }
	inline SpeechInputHandler_t4153622436 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SpeechInputHandler_t4153622436 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SpeechInputHandler_t4153622436 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CATTACHTOINPUTMANAGERINSTANCEU3ED__8_T1100151762_H
#ifndef ABSTRACTEVENTDATA_T1333959294_H
#define ABSTRACTEVENTDATA_T1333959294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t1333959294  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t1333959294, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T1333959294_H
#ifndef XBOXCONTROLLERMAPPING_T2384037093_H
#define XBOXCONTROLLERMAPPING_T2384037093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.XboxControllerMapping
struct  XboxControllerMapping_t2384037093  : public RuntimeObject
{
public:

public:
};

struct XboxControllerMapping_t2384037093_StaticFields
{
public:
	// System.String HoloToolkit.Unity.InputModule.XboxControllerMapping::<XboxLeftStickHorizontal>k__BackingField
	String_t* ___U3CXboxLeftStickHorizontalU3Ek__BackingField_0;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerMapping::<XboxLeftStickVertical>k__BackingField
	String_t* ___U3CXboxLeftStickVerticalU3Ek__BackingField_1;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerMapping::<XboxRightStickHorizontal>k__BackingField
	String_t* ___U3CXboxRightStickHorizontalU3Ek__BackingField_2;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerMapping::<XboxRightStickVertical>k__BackingField
	String_t* ___U3CXboxRightStickVerticalU3Ek__BackingField_3;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerMapping::<XboxDpadHorizontal>k__BackingField
	String_t* ___U3CXboxDpadHorizontalU3Ek__BackingField_4;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerMapping::<XboxDpadVertical>k__BackingField
	String_t* ___U3CXboxDpadVerticalU3Ek__BackingField_5;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerMapping::<XboxLeftTrigger>k__BackingField
	String_t* ___U3CXboxLeftTriggerU3Ek__BackingField_6;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerMapping::<XboxRightTrigger>k__BackingField
	String_t* ___U3CXboxRightTriggerU3Ek__BackingField_7;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerMapping::<XboxSharedTrigger>k__BackingField
	String_t* ___U3CXboxSharedTriggerU3Ek__BackingField_8;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerMapping::<XboxA>k__BackingField
	String_t* ___U3CXboxAU3Ek__BackingField_9;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerMapping::<XboxB>k__BackingField
	String_t* ___U3CXboxBU3Ek__BackingField_10;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerMapping::<XboxX>k__BackingField
	String_t* ___U3CXboxXU3Ek__BackingField_11;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerMapping::<XboxY>k__BackingField
	String_t* ___U3CXboxYU3Ek__BackingField_12;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerMapping::<XboxLeftBumper>k__BackingField
	String_t* ___U3CXboxLeftBumperU3Ek__BackingField_13;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerMapping::<XboxRightBumper>k__BackingField
	String_t* ___U3CXboxRightBumperU3Ek__BackingField_14;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerMapping::<XboxLeftStickClick>k__BackingField
	String_t* ___U3CXboxLeftStickClickU3Ek__BackingField_15;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerMapping::<XboxRightStickClick>k__BackingField
	String_t* ___U3CXboxRightStickClickU3Ek__BackingField_16;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerMapping::<XboxView>k__BackingField
	String_t* ___U3CXboxViewU3Ek__BackingField_17;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerMapping::<XboxMenu>k__BackingField
	String_t* ___U3CXboxMenuU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CXboxLeftStickHorizontalU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XboxControllerMapping_t2384037093_StaticFields, ___U3CXboxLeftStickHorizontalU3Ek__BackingField_0)); }
	inline String_t* get_U3CXboxLeftStickHorizontalU3Ek__BackingField_0() const { return ___U3CXboxLeftStickHorizontalU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CXboxLeftStickHorizontalU3Ek__BackingField_0() { return &___U3CXboxLeftStickHorizontalU3Ek__BackingField_0; }
	inline void set_U3CXboxLeftStickHorizontalU3Ek__BackingField_0(String_t* value)
	{
		___U3CXboxLeftStickHorizontalU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CXboxLeftStickHorizontalU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CXboxLeftStickVerticalU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XboxControllerMapping_t2384037093_StaticFields, ___U3CXboxLeftStickVerticalU3Ek__BackingField_1)); }
	inline String_t* get_U3CXboxLeftStickVerticalU3Ek__BackingField_1() const { return ___U3CXboxLeftStickVerticalU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CXboxLeftStickVerticalU3Ek__BackingField_1() { return &___U3CXboxLeftStickVerticalU3Ek__BackingField_1; }
	inline void set_U3CXboxLeftStickVerticalU3Ek__BackingField_1(String_t* value)
	{
		___U3CXboxLeftStickVerticalU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CXboxLeftStickVerticalU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CXboxRightStickHorizontalU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XboxControllerMapping_t2384037093_StaticFields, ___U3CXboxRightStickHorizontalU3Ek__BackingField_2)); }
	inline String_t* get_U3CXboxRightStickHorizontalU3Ek__BackingField_2() const { return ___U3CXboxRightStickHorizontalU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CXboxRightStickHorizontalU3Ek__BackingField_2() { return &___U3CXboxRightStickHorizontalU3Ek__BackingField_2; }
	inline void set_U3CXboxRightStickHorizontalU3Ek__BackingField_2(String_t* value)
	{
		___U3CXboxRightStickHorizontalU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CXboxRightStickHorizontalU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CXboxRightStickVerticalU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XboxControllerMapping_t2384037093_StaticFields, ___U3CXboxRightStickVerticalU3Ek__BackingField_3)); }
	inline String_t* get_U3CXboxRightStickVerticalU3Ek__BackingField_3() const { return ___U3CXboxRightStickVerticalU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CXboxRightStickVerticalU3Ek__BackingField_3() { return &___U3CXboxRightStickVerticalU3Ek__BackingField_3; }
	inline void set_U3CXboxRightStickVerticalU3Ek__BackingField_3(String_t* value)
	{
		___U3CXboxRightStickVerticalU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CXboxRightStickVerticalU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CXboxDpadHorizontalU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XboxControllerMapping_t2384037093_StaticFields, ___U3CXboxDpadHorizontalU3Ek__BackingField_4)); }
	inline String_t* get_U3CXboxDpadHorizontalU3Ek__BackingField_4() const { return ___U3CXboxDpadHorizontalU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CXboxDpadHorizontalU3Ek__BackingField_4() { return &___U3CXboxDpadHorizontalU3Ek__BackingField_4; }
	inline void set_U3CXboxDpadHorizontalU3Ek__BackingField_4(String_t* value)
	{
		___U3CXboxDpadHorizontalU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CXboxDpadHorizontalU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CXboxDpadVerticalU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XboxControllerMapping_t2384037093_StaticFields, ___U3CXboxDpadVerticalU3Ek__BackingField_5)); }
	inline String_t* get_U3CXboxDpadVerticalU3Ek__BackingField_5() const { return ___U3CXboxDpadVerticalU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CXboxDpadVerticalU3Ek__BackingField_5() { return &___U3CXboxDpadVerticalU3Ek__BackingField_5; }
	inline void set_U3CXboxDpadVerticalU3Ek__BackingField_5(String_t* value)
	{
		___U3CXboxDpadVerticalU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CXboxDpadVerticalU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CXboxLeftTriggerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XboxControllerMapping_t2384037093_StaticFields, ___U3CXboxLeftTriggerU3Ek__BackingField_6)); }
	inline String_t* get_U3CXboxLeftTriggerU3Ek__BackingField_6() const { return ___U3CXboxLeftTriggerU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CXboxLeftTriggerU3Ek__BackingField_6() { return &___U3CXboxLeftTriggerU3Ek__BackingField_6; }
	inline void set_U3CXboxLeftTriggerU3Ek__BackingField_6(String_t* value)
	{
		___U3CXboxLeftTriggerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CXboxLeftTriggerU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CXboxRightTriggerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(XboxControllerMapping_t2384037093_StaticFields, ___U3CXboxRightTriggerU3Ek__BackingField_7)); }
	inline String_t* get_U3CXboxRightTriggerU3Ek__BackingField_7() const { return ___U3CXboxRightTriggerU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CXboxRightTriggerU3Ek__BackingField_7() { return &___U3CXboxRightTriggerU3Ek__BackingField_7; }
	inline void set_U3CXboxRightTriggerU3Ek__BackingField_7(String_t* value)
	{
		___U3CXboxRightTriggerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CXboxRightTriggerU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CXboxSharedTriggerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(XboxControllerMapping_t2384037093_StaticFields, ___U3CXboxSharedTriggerU3Ek__BackingField_8)); }
	inline String_t* get_U3CXboxSharedTriggerU3Ek__BackingField_8() const { return ___U3CXboxSharedTriggerU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CXboxSharedTriggerU3Ek__BackingField_8() { return &___U3CXboxSharedTriggerU3Ek__BackingField_8; }
	inline void set_U3CXboxSharedTriggerU3Ek__BackingField_8(String_t* value)
	{
		___U3CXboxSharedTriggerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CXboxSharedTriggerU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CXboxAU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(XboxControllerMapping_t2384037093_StaticFields, ___U3CXboxAU3Ek__BackingField_9)); }
	inline String_t* get_U3CXboxAU3Ek__BackingField_9() const { return ___U3CXboxAU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CXboxAU3Ek__BackingField_9() { return &___U3CXboxAU3Ek__BackingField_9; }
	inline void set_U3CXboxAU3Ek__BackingField_9(String_t* value)
	{
		___U3CXboxAU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CXboxAU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_U3CXboxBU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XboxControllerMapping_t2384037093_StaticFields, ___U3CXboxBU3Ek__BackingField_10)); }
	inline String_t* get_U3CXboxBU3Ek__BackingField_10() const { return ___U3CXboxBU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CXboxBU3Ek__BackingField_10() { return &___U3CXboxBU3Ek__BackingField_10; }
	inline void set_U3CXboxBU3Ek__BackingField_10(String_t* value)
	{
		___U3CXboxBU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CXboxBU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3CXboxXU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(XboxControllerMapping_t2384037093_StaticFields, ___U3CXboxXU3Ek__BackingField_11)); }
	inline String_t* get_U3CXboxXU3Ek__BackingField_11() const { return ___U3CXboxXU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CXboxXU3Ek__BackingField_11() { return &___U3CXboxXU3Ek__BackingField_11; }
	inline void set_U3CXboxXU3Ek__BackingField_11(String_t* value)
	{
		___U3CXboxXU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CXboxXU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CXboxYU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(XboxControllerMapping_t2384037093_StaticFields, ___U3CXboxYU3Ek__BackingField_12)); }
	inline String_t* get_U3CXboxYU3Ek__BackingField_12() const { return ___U3CXboxYU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CXboxYU3Ek__BackingField_12() { return &___U3CXboxYU3Ek__BackingField_12; }
	inline void set_U3CXboxYU3Ek__BackingField_12(String_t* value)
	{
		___U3CXboxYU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CXboxYU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_U3CXboxLeftBumperU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(XboxControllerMapping_t2384037093_StaticFields, ___U3CXboxLeftBumperU3Ek__BackingField_13)); }
	inline String_t* get_U3CXboxLeftBumperU3Ek__BackingField_13() const { return ___U3CXboxLeftBumperU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CXboxLeftBumperU3Ek__BackingField_13() { return &___U3CXboxLeftBumperU3Ek__BackingField_13; }
	inline void set_U3CXboxLeftBumperU3Ek__BackingField_13(String_t* value)
	{
		___U3CXboxLeftBumperU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CXboxLeftBumperU3Ek__BackingField_13), value);
	}

	inline static int32_t get_offset_of_U3CXboxRightBumperU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(XboxControllerMapping_t2384037093_StaticFields, ___U3CXboxRightBumperU3Ek__BackingField_14)); }
	inline String_t* get_U3CXboxRightBumperU3Ek__BackingField_14() const { return ___U3CXboxRightBumperU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CXboxRightBumperU3Ek__BackingField_14() { return &___U3CXboxRightBumperU3Ek__BackingField_14; }
	inline void set_U3CXboxRightBumperU3Ek__BackingField_14(String_t* value)
	{
		___U3CXboxRightBumperU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CXboxRightBumperU3Ek__BackingField_14), value);
	}

	inline static int32_t get_offset_of_U3CXboxLeftStickClickU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(XboxControllerMapping_t2384037093_StaticFields, ___U3CXboxLeftStickClickU3Ek__BackingField_15)); }
	inline String_t* get_U3CXboxLeftStickClickU3Ek__BackingField_15() const { return ___U3CXboxLeftStickClickU3Ek__BackingField_15; }
	inline String_t** get_address_of_U3CXboxLeftStickClickU3Ek__BackingField_15() { return &___U3CXboxLeftStickClickU3Ek__BackingField_15; }
	inline void set_U3CXboxLeftStickClickU3Ek__BackingField_15(String_t* value)
	{
		___U3CXboxLeftStickClickU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CXboxLeftStickClickU3Ek__BackingField_15), value);
	}

	inline static int32_t get_offset_of_U3CXboxRightStickClickU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(XboxControllerMapping_t2384037093_StaticFields, ___U3CXboxRightStickClickU3Ek__BackingField_16)); }
	inline String_t* get_U3CXboxRightStickClickU3Ek__BackingField_16() const { return ___U3CXboxRightStickClickU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CXboxRightStickClickU3Ek__BackingField_16() { return &___U3CXboxRightStickClickU3Ek__BackingField_16; }
	inline void set_U3CXboxRightStickClickU3Ek__BackingField_16(String_t* value)
	{
		___U3CXboxRightStickClickU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CXboxRightStickClickU3Ek__BackingField_16), value);
	}

	inline static int32_t get_offset_of_U3CXboxViewU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(XboxControllerMapping_t2384037093_StaticFields, ___U3CXboxViewU3Ek__BackingField_17)); }
	inline String_t* get_U3CXboxViewU3Ek__BackingField_17() const { return ___U3CXboxViewU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CXboxViewU3Ek__BackingField_17() { return &___U3CXboxViewU3Ek__BackingField_17; }
	inline void set_U3CXboxViewU3Ek__BackingField_17(String_t* value)
	{
		___U3CXboxViewU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CXboxViewU3Ek__BackingField_17), value);
	}

	inline static int32_t get_offset_of_U3CXboxMenuU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(XboxControllerMapping_t2384037093_StaticFields, ___U3CXboxMenuU3Ek__BackingField_18)); }
	inline String_t* get_U3CXboxMenuU3Ek__BackingField_18() const { return ___U3CXboxMenuU3Ek__BackingField_18; }
	inline String_t** get_address_of_U3CXboxMenuU3Ek__BackingField_18() { return &___U3CXboxMenuU3Ek__BackingField_18; }
	inline void set_U3CXboxMenuU3Ek__BackingField_18(String_t* value)
	{
		___U3CXboxMenuU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CXboxMenuU3Ek__BackingField_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOXCONTROLLERMAPPING_T2384037093_H
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
#ifndef AXISBUTTON1D_T2446182327_H
#define AXISBUTTON1D_T2446182327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InteractionInputSource/AxisButton1D
struct  AxisButton1D_t2446182327 
{
public:
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/AxisButton1D::Pressed
	bool ___Pressed_0;
	// System.Double HoloToolkit.Unity.InputModule.InteractionInputSource/AxisButton1D::PressedAmount
	double ___PressedAmount_1;

public:
	inline static int32_t get_offset_of_Pressed_0() { return static_cast<int32_t>(offsetof(AxisButton1D_t2446182327, ___Pressed_0)); }
	inline bool get_Pressed_0() const { return ___Pressed_0; }
	inline bool* get_address_of_Pressed_0() { return &___Pressed_0; }
	inline void set_Pressed_0(bool value)
	{
		___Pressed_0 = value;
	}

	inline static int32_t get_offset_of_PressedAmount_1() { return static_cast<int32_t>(offsetof(AxisButton1D_t2446182327, ___PressedAmount_1)); }
	inline double get_PressedAmount_1() const { return ___PressedAmount_1; }
	inline double* get_address_of_PressedAmount_1() { return &___PressedAmount_1; }
	inline void set_PressedAmount_1(double value)
	{
		___PressedAmount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of HoloToolkit.Unity.InputModule.InteractionInputSource/AxisButton1D
struct AxisButton1D_t2446182327_marshaled_pinvoke
{
	int32_t ___Pressed_0;
	double ___PressedAmount_1;
};
// Native definition for COM marshalling of HoloToolkit.Unity.InputModule.InteractionInputSource/AxisButton1D
struct AxisButton1D_t2446182327_marshaled_com
{
	int32_t ___Pressed_0;
	double ___PressedAmount_1;
};
#endif // AXISBUTTON1D_T2446182327_H
#ifndef COLOR_T2020392075_H
#define COLOR_T2020392075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2020392075 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2020392075_H
#ifndef XBOXCONTROLLERDATA_T2018742751_H
#define XBOXCONTROLLERDATA_T2018742751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.XboxControllerData
struct  XboxControllerData_t2018742751 
{
public:
	// System.Single HoloToolkit.Unity.InputModule.XboxControllerData::<XboxLeftStickHorizontalAxis>k__BackingField
	float ___U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_0;
	// System.Single HoloToolkit.Unity.InputModule.XboxControllerData::<XboxLeftStickVerticalAxis>k__BackingField
	float ___U3CXboxLeftStickVerticalAxisU3Ek__BackingField_1;
	// System.Single HoloToolkit.Unity.InputModule.XboxControllerData::<XboxRightStickHorizontalAxis>k__BackingField
	float ___U3CXboxRightStickHorizontalAxisU3Ek__BackingField_2;
	// System.Single HoloToolkit.Unity.InputModule.XboxControllerData::<XboxRightStickVerticalAxis>k__BackingField
	float ___U3CXboxRightStickVerticalAxisU3Ek__BackingField_3;
	// System.Single HoloToolkit.Unity.InputModule.XboxControllerData::<XboxDpadHorizontalAxis>k__BackingField
	float ___U3CXboxDpadHorizontalAxisU3Ek__BackingField_4;
	// System.Single HoloToolkit.Unity.InputModule.XboxControllerData::<XboxDpadVerticalAxis>k__BackingField
	float ___U3CXboxDpadVerticalAxisU3Ek__BackingField_5;
	// System.Single HoloToolkit.Unity.InputModule.XboxControllerData::<XboxLeftTriggerAxis>k__BackingField
	float ___U3CXboxLeftTriggerAxisU3Ek__BackingField_6;
	// System.Single HoloToolkit.Unity.InputModule.XboxControllerData::<XboxRightTriggerAxis>k__BackingField
	float ___U3CXboxRightTriggerAxisU3Ek__BackingField_7;
	// System.Single HoloToolkit.Unity.InputModule.XboxControllerData::<XboxSharedTriggerAxis>k__BackingField
	float ___U3CXboxSharedTriggerAxisU3Ek__BackingField_8;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxA_Pressed>k__BackingField
	bool ___U3CXboxA_PressedU3Ek__BackingField_9;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxB_Pressed>k__BackingField
	bool ___U3CXboxB_PressedU3Ek__BackingField_10;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxX_Pressed>k__BackingField
	bool ___U3CXboxX_PressedU3Ek__BackingField_11;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxY_Pressed>k__BackingField
	bool ___U3CXboxY_PressedU3Ek__BackingField_12;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxLeftBumper_Pressed>k__BackingField
	bool ___U3CXboxLeftBumper_PressedU3Ek__BackingField_13;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxRightBumper_Pressed>k__BackingField
	bool ___U3CXboxRightBumper_PressedU3Ek__BackingField_14;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxLeftStick_Pressed>k__BackingField
	bool ___U3CXboxLeftStick_PressedU3Ek__BackingField_15;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxRightStick_Pressed>k__BackingField
	bool ___U3CXboxRightStick_PressedU3Ek__BackingField_16;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxView_Pressed>k__BackingField
	bool ___U3CXboxView_PressedU3Ek__BackingField_17;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxMenu_Pressed>k__BackingField
	bool ___U3CXboxMenu_PressedU3Ek__BackingField_18;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxA_Up>k__BackingField
	bool ___U3CXboxA_UpU3Ek__BackingField_19;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxB_Up>k__BackingField
	bool ___U3CXboxB_UpU3Ek__BackingField_20;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxX_Up>k__BackingField
	bool ___U3CXboxX_UpU3Ek__BackingField_21;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxY_Up>k__BackingField
	bool ___U3CXboxY_UpU3Ek__BackingField_22;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxLeftBumper_Up>k__BackingField
	bool ___U3CXboxLeftBumper_UpU3Ek__BackingField_23;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxRightBumper_Up>k__BackingField
	bool ___U3CXboxRightBumper_UpU3Ek__BackingField_24;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxLeftStick_Up>k__BackingField
	bool ___U3CXboxLeftStick_UpU3Ek__BackingField_25;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxRightStick_Up>k__BackingField
	bool ___U3CXboxRightStick_UpU3Ek__BackingField_26;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxView_Up>k__BackingField
	bool ___U3CXboxView_UpU3Ek__BackingField_27;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxMenu_Up>k__BackingField
	bool ___U3CXboxMenu_UpU3Ek__BackingField_28;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxA_Down>k__BackingField
	bool ___U3CXboxA_DownU3Ek__BackingField_29;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxB_Down>k__BackingField
	bool ___U3CXboxB_DownU3Ek__BackingField_30;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxX_Down>k__BackingField
	bool ___U3CXboxX_DownU3Ek__BackingField_31;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxY_Down>k__BackingField
	bool ___U3CXboxY_DownU3Ek__BackingField_32;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxLeftBumper_Down>k__BackingField
	bool ___U3CXboxLeftBumper_DownU3Ek__BackingField_33;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxRightBumper_Down>k__BackingField
	bool ___U3CXboxRightBumper_DownU3Ek__BackingField_34;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxLeftStick_Down>k__BackingField
	bool ___U3CXboxLeftStick_DownU3Ek__BackingField_35;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxRightStick_Down>k__BackingField
	bool ___U3CXboxRightStick_DownU3Ek__BackingField_36;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxView_Down>k__BackingField
	bool ___U3CXboxView_DownU3Ek__BackingField_37;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerData::<XboxMenu_Down>k__BackingField
	bool ___U3CXboxMenu_DownU3Ek__BackingField_38;

public:
	inline static int32_t get_offset_of_U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_0)); }
	inline float get_U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_0() const { return ___U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_0; }
	inline float* get_address_of_U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_0() { return &___U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_0; }
	inline void set_U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_0(float value)
	{
		___U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CXboxLeftStickVerticalAxisU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxLeftStickVerticalAxisU3Ek__BackingField_1)); }
	inline float get_U3CXboxLeftStickVerticalAxisU3Ek__BackingField_1() const { return ___U3CXboxLeftStickVerticalAxisU3Ek__BackingField_1; }
	inline float* get_address_of_U3CXboxLeftStickVerticalAxisU3Ek__BackingField_1() { return &___U3CXboxLeftStickVerticalAxisU3Ek__BackingField_1; }
	inline void set_U3CXboxLeftStickVerticalAxisU3Ek__BackingField_1(float value)
	{
		___U3CXboxLeftStickVerticalAxisU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CXboxRightStickHorizontalAxisU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxRightStickHorizontalAxisU3Ek__BackingField_2)); }
	inline float get_U3CXboxRightStickHorizontalAxisU3Ek__BackingField_2() const { return ___U3CXboxRightStickHorizontalAxisU3Ek__BackingField_2; }
	inline float* get_address_of_U3CXboxRightStickHorizontalAxisU3Ek__BackingField_2() { return &___U3CXboxRightStickHorizontalAxisU3Ek__BackingField_2; }
	inline void set_U3CXboxRightStickHorizontalAxisU3Ek__BackingField_2(float value)
	{
		___U3CXboxRightStickHorizontalAxisU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CXboxRightStickVerticalAxisU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxRightStickVerticalAxisU3Ek__BackingField_3)); }
	inline float get_U3CXboxRightStickVerticalAxisU3Ek__BackingField_3() const { return ___U3CXboxRightStickVerticalAxisU3Ek__BackingField_3; }
	inline float* get_address_of_U3CXboxRightStickVerticalAxisU3Ek__BackingField_3() { return &___U3CXboxRightStickVerticalAxisU3Ek__BackingField_3; }
	inline void set_U3CXboxRightStickVerticalAxisU3Ek__BackingField_3(float value)
	{
		___U3CXboxRightStickVerticalAxisU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CXboxDpadHorizontalAxisU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxDpadHorizontalAxisU3Ek__BackingField_4)); }
	inline float get_U3CXboxDpadHorizontalAxisU3Ek__BackingField_4() const { return ___U3CXboxDpadHorizontalAxisU3Ek__BackingField_4; }
	inline float* get_address_of_U3CXboxDpadHorizontalAxisU3Ek__BackingField_4() { return &___U3CXboxDpadHorizontalAxisU3Ek__BackingField_4; }
	inline void set_U3CXboxDpadHorizontalAxisU3Ek__BackingField_4(float value)
	{
		___U3CXboxDpadHorizontalAxisU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CXboxDpadVerticalAxisU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxDpadVerticalAxisU3Ek__BackingField_5)); }
	inline float get_U3CXboxDpadVerticalAxisU3Ek__BackingField_5() const { return ___U3CXboxDpadVerticalAxisU3Ek__BackingField_5; }
	inline float* get_address_of_U3CXboxDpadVerticalAxisU3Ek__BackingField_5() { return &___U3CXboxDpadVerticalAxisU3Ek__BackingField_5; }
	inline void set_U3CXboxDpadVerticalAxisU3Ek__BackingField_5(float value)
	{
		___U3CXboxDpadVerticalAxisU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CXboxLeftTriggerAxisU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxLeftTriggerAxisU3Ek__BackingField_6)); }
	inline float get_U3CXboxLeftTriggerAxisU3Ek__BackingField_6() const { return ___U3CXboxLeftTriggerAxisU3Ek__BackingField_6; }
	inline float* get_address_of_U3CXboxLeftTriggerAxisU3Ek__BackingField_6() { return &___U3CXboxLeftTriggerAxisU3Ek__BackingField_6; }
	inline void set_U3CXboxLeftTriggerAxisU3Ek__BackingField_6(float value)
	{
		___U3CXboxLeftTriggerAxisU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CXboxRightTriggerAxisU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxRightTriggerAxisU3Ek__BackingField_7)); }
	inline float get_U3CXboxRightTriggerAxisU3Ek__BackingField_7() const { return ___U3CXboxRightTriggerAxisU3Ek__BackingField_7; }
	inline float* get_address_of_U3CXboxRightTriggerAxisU3Ek__BackingField_7() { return &___U3CXboxRightTriggerAxisU3Ek__BackingField_7; }
	inline void set_U3CXboxRightTriggerAxisU3Ek__BackingField_7(float value)
	{
		___U3CXboxRightTriggerAxisU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CXboxSharedTriggerAxisU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxSharedTriggerAxisU3Ek__BackingField_8)); }
	inline float get_U3CXboxSharedTriggerAxisU3Ek__BackingField_8() const { return ___U3CXboxSharedTriggerAxisU3Ek__BackingField_8; }
	inline float* get_address_of_U3CXboxSharedTriggerAxisU3Ek__BackingField_8() { return &___U3CXboxSharedTriggerAxisU3Ek__BackingField_8; }
	inline void set_U3CXboxSharedTriggerAxisU3Ek__BackingField_8(float value)
	{
		___U3CXboxSharedTriggerAxisU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CXboxA_PressedU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxA_PressedU3Ek__BackingField_9)); }
	inline bool get_U3CXboxA_PressedU3Ek__BackingField_9() const { return ___U3CXboxA_PressedU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CXboxA_PressedU3Ek__BackingField_9() { return &___U3CXboxA_PressedU3Ek__BackingField_9; }
	inline void set_U3CXboxA_PressedU3Ek__BackingField_9(bool value)
	{
		___U3CXboxA_PressedU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CXboxB_PressedU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxB_PressedU3Ek__BackingField_10)); }
	inline bool get_U3CXboxB_PressedU3Ek__BackingField_10() const { return ___U3CXboxB_PressedU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CXboxB_PressedU3Ek__BackingField_10() { return &___U3CXboxB_PressedU3Ek__BackingField_10; }
	inline void set_U3CXboxB_PressedU3Ek__BackingField_10(bool value)
	{
		___U3CXboxB_PressedU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CXboxX_PressedU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxX_PressedU3Ek__BackingField_11)); }
	inline bool get_U3CXboxX_PressedU3Ek__BackingField_11() const { return ___U3CXboxX_PressedU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CXboxX_PressedU3Ek__BackingField_11() { return &___U3CXboxX_PressedU3Ek__BackingField_11; }
	inline void set_U3CXboxX_PressedU3Ek__BackingField_11(bool value)
	{
		___U3CXboxX_PressedU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CXboxY_PressedU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxY_PressedU3Ek__BackingField_12)); }
	inline bool get_U3CXboxY_PressedU3Ek__BackingField_12() const { return ___U3CXboxY_PressedU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CXboxY_PressedU3Ek__BackingField_12() { return &___U3CXboxY_PressedU3Ek__BackingField_12; }
	inline void set_U3CXboxY_PressedU3Ek__BackingField_12(bool value)
	{
		___U3CXboxY_PressedU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CXboxLeftBumper_PressedU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxLeftBumper_PressedU3Ek__BackingField_13)); }
	inline bool get_U3CXboxLeftBumper_PressedU3Ek__BackingField_13() const { return ___U3CXboxLeftBumper_PressedU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CXboxLeftBumper_PressedU3Ek__BackingField_13() { return &___U3CXboxLeftBumper_PressedU3Ek__BackingField_13; }
	inline void set_U3CXboxLeftBumper_PressedU3Ek__BackingField_13(bool value)
	{
		___U3CXboxLeftBumper_PressedU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CXboxRightBumper_PressedU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxRightBumper_PressedU3Ek__BackingField_14)); }
	inline bool get_U3CXboxRightBumper_PressedU3Ek__BackingField_14() const { return ___U3CXboxRightBumper_PressedU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CXboxRightBumper_PressedU3Ek__BackingField_14() { return &___U3CXboxRightBumper_PressedU3Ek__BackingField_14; }
	inline void set_U3CXboxRightBumper_PressedU3Ek__BackingField_14(bool value)
	{
		___U3CXboxRightBumper_PressedU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CXboxLeftStick_PressedU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxLeftStick_PressedU3Ek__BackingField_15)); }
	inline bool get_U3CXboxLeftStick_PressedU3Ek__BackingField_15() const { return ___U3CXboxLeftStick_PressedU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CXboxLeftStick_PressedU3Ek__BackingField_15() { return &___U3CXboxLeftStick_PressedU3Ek__BackingField_15; }
	inline void set_U3CXboxLeftStick_PressedU3Ek__BackingField_15(bool value)
	{
		___U3CXboxLeftStick_PressedU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CXboxRightStick_PressedU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxRightStick_PressedU3Ek__BackingField_16)); }
	inline bool get_U3CXboxRightStick_PressedU3Ek__BackingField_16() const { return ___U3CXboxRightStick_PressedU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CXboxRightStick_PressedU3Ek__BackingField_16() { return &___U3CXboxRightStick_PressedU3Ek__BackingField_16; }
	inline void set_U3CXboxRightStick_PressedU3Ek__BackingField_16(bool value)
	{
		___U3CXboxRightStick_PressedU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CXboxView_PressedU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxView_PressedU3Ek__BackingField_17)); }
	inline bool get_U3CXboxView_PressedU3Ek__BackingField_17() const { return ___U3CXboxView_PressedU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CXboxView_PressedU3Ek__BackingField_17() { return &___U3CXboxView_PressedU3Ek__BackingField_17; }
	inline void set_U3CXboxView_PressedU3Ek__BackingField_17(bool value)
	{
		___U3CXboxView_PressedU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CXboxMenu_PressedU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxMenu_PressedU3Ek__BackingField_18)); }
	inline bool get_U3CXboxMenu_PressedU3Ek__BackingField_18() const { return ___U3CXboxMenu_PressedU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CXboxMenu_PressedU3Ek__BackingField_18() { return &___U3CXboxMenu_PressedU3Ek__BackingField_18; }
	inline void set_U3CXboxMenu_PressedU3Ek__BackingField_18(bool value)
	{
		___U3CXboxMenu_PressedU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CXboxA_UpU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxA_UpU3Ek__BackingField_19)); }
	inline bool get_U3CXboxA_UpU3Ek__BackingField_19() const { return ___U3CXboxA_UpU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CXboxA_UpU3Ek__BackingField_19() { return &___U3CXboxA_UpU3Ek__BackingField_19; }
	inline void set_U3CXboxA_UpU3Ek__BackingField_19(bool value)
	{
		___U3CXboxA_UpU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CXboxB_UpU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxB_UpU3Ek__BackingField_20)); }
	inline bool get_U3CXboxB_UpU3Ek__BackingField_20() const { return ___U3CXboxB_UpU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CXboxB_UpU3Ek__BackingField_20() { return &___U3CXboxB_UpU3Ek__BackingField_20; }
	inline void set_U3CXboxB_UpU3Ek__BackingField_20(bool value)
	{
		___U3CXboxB_UpU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CXboxX_UpU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxX_UpU3Ek__BackingField_21)); }
	inline bool get_U3CXboxX_UpU3Ek__BackingField_21() const { return ___U3CXboxX_UpU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CXboxX_UpU3Ek__BackingField_21() { return &___U3CXboxX_UpU3Ek__BackingField_21; }
	inline void set_U3CXboxX_UpU3Ek__BackingField_21(bool value)
	{
		___U3CXboxX_UpU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CXboxY_UpU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxY_UpU3Ek__BackingField_22)); }
	inline bool get_U3CXboxY_UpU3Ek__BackingField_22() const { return ___U3CXboxY_UpU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CXboxY_UpU3Ek__BackingField_22() { return &___U3CXboxY_UpU3Ek__BackingField_22; }
	inline void set_U3CXboxY_UpU3Ek__BackingField_22(bool value)
	{
		___U3CXboxY_UpU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CXboxLeftBumper_UpU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxLeftBumper_UpU3Ek__BackingField_23)); }
	inline bool get_U3CXboxLeftBumper_UpU3Ek__BackingField_23() const { return ___U3CXboxLeftBumper_UpU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CXboxLeftBumper_UpU3Ek__BackingField_23() { return &___U3CXboxLeftBumper_UpU3Ek__BackingField_23; }
	inline void set_U3CXboxLeftBumper_UpU3Ek__BackingField_23(bool value)
	{
		___U3CXboxLeftBumper_UpU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CXboxRightBumper_UpU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxRightBumper_UpU3Ek__BackingField_24)); }
	inline bool get_U3CXboxRightBumper_UpU3Ek__BackingField_24() const { return ___U3CXboxRightBumper_UpU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CXboxRightBumper_UpU3Ek__BackingField_24() { return &___U3CXboxRightBumper_UpU3Ek__BackingField_24; }
	inline void set_U3CXboxRightBumper_UpU3Ek__BackingField_24(bool value)
	{
		___U3CXboxRightBumper_UpU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CXboxLeftStick_UpU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxLeftStick_UpU3Ek__BackingField_25)); }
	inline bool get_U3CXboxLeftStick_UpU3Ek__BackingField_25() const { return ___U3CXboxLeftStick_UpU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CXboxLeftStick_UpU3Ek__BackingField_25() { return &___U3CXboxLeftStick_UpU3Ek__BackingField_25; }
	inline void set_U3CXboxLeftStick_UpU3Ek__BackingField_25(bool value)
	{
		___U3CXboxLeftStick_UpU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CXboxRightStick_UpU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxRightStick_UpU3Ek__BackingField_26)); }
	inline bool get_U3CXboxRightStick_UpU3Ek__BackingField_26() const { return ___U3CXboxRightStick_UpU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CXboxRightStick_UpU3Ek__BackingField_26() { return &___U3CXboxRightStick_UpU3Ek__BackingField_26; }
	inline void set_U3CXboxRightStick_UpU3Ek__BackingField_26(bool value)
	{
		___U3CXboxRightStick_UpU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CXboxView_UpU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxView_UpU3Ek__BackingField_27)); }
	inline bool get_U3CXboxView_UpU3Ek__BackingField_27() const { return ___U3CXboxView_UpU3Ek__BackingField_27; }
	inline bool* get_address_of_U3CXboxView_UpU3Ek__BackingField_27() { return &___U3CXboxView_UpU3Ek__BackingField_27; }
	inline void set_U3CXboxView_UpU3Ek__BackingField_27(bool value)
	{
		___U3CXboxView_UpU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CXboxMenu_UpU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxMenu_UpU3Ek__BackingField_28)); }
	inline bool get_U3CXboxMenu_UpU3Ek__BackingField_28() const { return ___U3CXboxMenu_UpU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CXboxMenu_UpU3Ek__BackingField_28() { return &___U3CXboxMenu_UpU3Ek__BackingField_28; }
	inline void set_U3CXboxMenu_UpU3Ek__BackingField_28(bool value)
	{
		___U3CXboxMenu_UpU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CXboxA_DownU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxA_DownU3Ek__BackingField_29)); }
	inline bool get_U3CXboxA_DownU3Ek__BackingField_29() const { return ___U3CXboxA_DownU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CXboxA_DownU3Ek__BackingField_29() { return &___U3CXboxA_DownU3Ek__BackingField_29; }
	inline void set_U3CXboxA_DownU3Ek__BackingField_29(bool value)
	{
		___U3CXboxA_DownU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CXboxB_DownU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxB_DownU3Ek__BackingField_30)); }
	inline bool get_U3CXboxB_DownU3Ek__BackingField_30() const { return ___U3CXboxB_DownU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CXboxB_DownU3Ek__BackingField_30() { return &___U3CXboxB_DownU3Ek__BackingField_30; }
	inline void set_U3CXboxB_DownU3Ek__BackingField_30(bool value)
	{
		___U3CXboxB_DownU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CXboxX_DownU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxX_DownU3Ek__BackingField_31)); }
	inline bool get_U3CXboxX_DownU3Ek__BackingField_31() const { return ___U3CXboxX_DownU3Ek__BackingField_31; }
	inline bool* get_address_of_U3CXboxX_DownU3Ek__BackingField_31() { return &___U3CXboxX_DownU3Ek__BackingField_31; }
	inline void set_U3CXboxX_DownU3Ek__BackingField_31(bool value)
	{
		___U3CXboxX_DownU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CXboxY_DownU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxY_DownU3Ek__BackingField_32)); }
	inline bool get_U3CXboxY_DownU3Ek__BackingField_32() const { return ___U3CXboxY_DownU3Ek__BackingField_32; }
	inline bool* get_address_of_U3CXboxY_DownU3Ek__BackingField_32() { return &___U3CXboxY_DownU3Ek__BackingField_32; }
	inline void set_U3CXboxY_DownU3Ek__BackingField_32(bool value)
	{
		___U3CXboxY_DownU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CXboxLeftBumper_DownU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxLeftBumper_DownU3Ek__BackingField_33)); }
	inline bool get_U3CXboxLeftBumper_DownU3Ek__BackingField_33() const { return ___U3CXboxLeftBumper_DownU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CXboxLeftBumper_DownU3Ek__BackingField_33() { return &___U3CXboxLeftBumper_DownU3Ek__BackingField_33; }
	inline void set_U3CXboxLeftBumper_DownU3Ek__BackingField_33(bool value)
	{
		___U3CXboxLeftBumper_DownU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CXboxRightBumper_DownU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxRightBumper_DownU3Ek__BackingField_34)); }
	inline bool get_U3CXboxRightBumper_DownU3Ek__BackingField_34() const { return ___U3CXboxRightBumper_DownU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CXboxRightBumper_DownU3Ek__BackingField_34() { return &___U3CXboxRightBumper_DownU3Ek__BackingField_34; }
	inline void set_U3CXboxRightBumper_DownU3Ek__BackingField_34(bool value)
	{
		___U3CXboxRightBumper_DownU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CXboxLeftStick_DownU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxLeftStick_DownU3Ek__BackingField_35)); }
	inline bool get_U3CXboxLeftStick_DownU3Ek__BackingField_35() const { return ___U3CXboxLeftStick_DownU3Ek__BackingField_35; }
	inline bool* get_address_of_U3CXboxLeftStick_DownU3Ek__BackingField_35() { return &___U3CXboxLeftStick_DownU3Ek__BackingField_35; }
	inline void set_U3CXboxLeftStick_DownU3Ek__BackingField_35(bool value)
	{
		___U3CXboxLeftStick_DownU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CXboxRightStick_DownU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxRightStick_DownU3Ek__BackingField_36)); }
	inline bool get_U3CXboxRightStick_DownU3Ek__BackingField_36() const { return ___U3CXboxRightStick_DownU3Ek__BackingField_36; }
	inline bool* get_address_of_U3CXboxRightStick_DownU3Ek__BackingField_36() { return &___U3CXboxRightStick_DownU3Ek__BackingField_36; }
	inline void set_U3CXboxRightStick_DownU3Ek__BackingField_36(bool value)
	{
		___U3CXboxRightStick_DownU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CXboxView_DownU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxView_DownU3Ek__BackingField_37)); }
	inline bool get_U3CXboxView_DownU3Ek__BackingField_37() const { return ___U3CXboxView_DownU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CXboxView_DownU3Ek__BackingField_37() { return &___U3CXboxView_DownU3Ek__BackingField_37; }
	inline void set_U3CXboxView_DownU3Ek__BackingField_37(bool value)
	{
		___U3CXboxView_DownU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3CXboxMenu_DownU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(XboxControllerData_t2018742751, ___U3CXboxMenu_DownU3Ek__BackingField_38)); }
	inline bool get_U3CXboxMenu_DownU3Ek__BackingField_38() const { return ___U3CXboxMenu_DownU3Ek__BackingField_38; }
	inline bool* get_address_of_U3CXboxMenu_DownU3Ek__BackingField_38() { return &___U3CXboxMenu_DownU3Ek__BackingField_38; }
	inline void set_U3CXboxMenu_DownU3Ek__BackingField_38(bool value)
	{
		___U3CXboxMenu_DownU3Ek__BackingField_38 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of HoloToolkit.Unity.InputModule.XboxControllerData
struct XboxControllerData_t2018742751_marshaled_pinvoke
{
	float ___U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_0;
	float ___U3CXboxLeftStickVerticalAxisU3Ek__BackingField_1;
	float ___U3CXboxRightStickHorizontalAxisU3Ek__BackingField_2;
	float ___U3CXboxRightStickVerticalAxisU3Ek__BackingField_3;
	float ___U3CXboxDpadHorizontalAxisU3Ek__BackingField_4;
	float ___U3CXboxDpadVerticalAxisU3Ek__BackingField_5;
	float ___U3CXboxLeftTriggerAxisU3Ek__BackingField_6;
	float ___U3CXboxRightTriggerAxisU3Ek__BackingField_7;
	float ___U3CXboxSharedTriggerAxisU3Ek__BackingField_8;
	int32_t ___U3CXboxA_PressedU3Ek__BackingField_9;
	int32_t ___U3CXboxB_PressedU3Ek__BackingField_10;
	int32_t ___U3CXboxX_PressedU3Ek__BackingField_11;
	int32_t ___U3CXboxY_PressedU3Ek__BackingField_12;
	int32_t ___U3CXboxLeftBumper_PressedU3Ek__BackingField_13;
	int32_t ___U3CXboxRightBumper_PressedU3Ek__BackingField_14;
	int32_t ___U3CXboxLeftStick_PressedU3Ek__BackingField_15;
	int32_t ___U3CXboxRightStick_PressedU3Ek__BackingField_16;
	int32_t ___U3CXboxView_PressedU3Ek__BackingField_17;
	int32_t ___U3CXboxMenu_PressedU3Ek__BackingField_18;
	int32_t ___U3CXboxA_UpU3Ek__BackingField_19;
	int32_t ___U3CXboxB_UpU3Ek__BackingField_20;
	int32_t ___U3CXboxX_UpU3Ek__BackingField_21;
	int32_t ___U3CXboxY_UpU3Ek__BackingField_22;
	int32_t ___U3CXboxLeftBumper_UpU3Ek__BackingField_23;
	int32_t ___U3CXboxRightBumper_UpU3Ek__BackingField_24;
	int32_t ___U3CXboxLeftStick_UpU3Ek__BackingField_25;
	int32_t ___U3CXboxRightStick_UpU3Ek__BackingField_26;
	int32_t ___U3CXboxView_UpU3Ek__BackingField_27;
	int32_t ___U3CXboxMenu_UpU3Ek__BackingField_28;
	int32_t ___U3CXboxA_DownU3Ek__BackingField_29;
	int32_t ___U3CXboxB_DownU3Ek__BackingField_30;
	int32_t ___U3CXboxX_DownU3Ek__BackingField_31;
	int32_t ___U3CXboxY_DownU3Ek__BackingField_32;
	int32_t ___U3CXboxLeftBumper_DownU3Ek__BackingField_33;
	int32_t ___U3CXboxRightBumper_DownU3Ek__BackingField_34;
	int32_t ___U3CXboxLeftStick_DownU3Ek__BackingField_35;
	int32_t ___U3CXboxRightStick_DownU3Ek__BackingField_36;
	int32_t ___U3CXboxView_DownU3Ek__BackingField_37;
	int32_t ___U3CXboxMenu_DownU3Ek__BackingField_38;
};
// Native definition for COM marshalling of HoloToolkit.Unity.InputModule.XboxControllerData
struct XboxControllerData_t2018742751_marshaled_com
{
	float ___U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_0;
	float ___U3CXboxLeftStickVerticalAxisU3Ek__BackingField_1;
	float ___U3CXboxRightStickHorizontalAxisU3Ek__BackingField_2;
	float ___U3CXboxRightStickVerticalAxisU3Ek__BackingField_3;
	float ___U3CXboxDpadHorizontalAxisU3Ek__BackingField_4;
	float ___U3CXboxDpadVerticalAxisU3Ek__BackingField_5;
	float ___U3CXboxLeftTriggerAxisU3Ek__BackingField_6;
	float ___U3CXboxRightTriggerAxisU3Ek__BackingField_7;
	float ___U3CXboxSharedTriggerAxisU3Ek__BackingField_8;
	int32_t ___U3CXboxA_PressedU3Ek__BackingField_9;
	int32_t ___U3CXboxB_PressedU3Ek__BackingField_10;
	int32_t ___U3CXboxX_PressedU3Ek__BackingField_11;
	int32_t ___U3CXboxY_PressedU3Ek__BackingField_12;
	int32_t ___U3CXboxLeftBumper_PressedU3Ek__BackingField_13;
	int32_t ___U3CXboxRightBumper_PressedU3Ek__BackingField_14;
	int32_t ___U3CXboxLeftStick_PressedU3Ek__BackingField_15;
	int32_t ___U3CXboxRightStick_PressedU3Ek__BackingField_16;
	int32_t ___U3CXboxView_PressedU3Ek__BackingField_17;
	int32_t ___U3CXboxMenu_PressedU3Ek__BackingField_18;
	int32_t ___U3CXboxA_UpU3Ek__BackingField_19;
	int32_t ___U3CXboxB_UpU3Ek__BackingField_20;
	int32_t ___U3CXboxX_UpU3Ek__BackingField_21;
	int32_t ___U3CXboxY_UpU3Ek__BackingField_22;
	int32_t ___U3CXboxLeftBumper_UpU3Ek__BackingField_23;
	int32_t ___U3CXboxRightBumper_UpU3Ek__BackingField_24;
	int32_t ___U3CXboxLeftStick_UpU3Ek__BackingField_25;
	int32_t ___U3CXboxRightStick_UpU3Ek__BackingField_26;
	int32_t ___U3CXboxView_UpU3Ek__BackingField_27;
	int32_t ___U3CXboxMenu_UpU3Ek__BackingField_28;
	int32_t ___U3CXboxA_DownU3Ek__BackingField_29;
	int32_t ___U3CXboxB_DownU3Ek__BackingField_30;
	int32_t ___U3CXboxX_DownU3Ek__BackingField_31;
	int32_t ___U3CXboxY_DownU3Ek__BackingField_32;
	int32_t ___U3CXboxLeftBumper_DownU3Ek__BackingField_33;
	int32_t ___U3CXboxRightBumper_DownU3Ek__BackingField_34;
	int32_t ___U3CXboxLeftStick_DownU3Ek__BackingField_35;
	int32_t ___U3CXboxRightStick_DownU3Ek__BackingField_36;
	int32_t ___U3CXboxView_DownU3Ek__BackingField_37;
	int32_t ___U3CXboxMenu_DownU3Ek__BackingField_38;
};
#endif // XBOXCONTROLLERDATA_T2018742751_H
#ifndef NULLABLE_1_T412748336_H
#define NULLABLE_1_T412748336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.UInt32>
struct  Nullable_1_t412748336 
{
public:
	// T System.Nullable`1::value
	uint32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t412748336, ___value_0)); }
	inline uint32_t get_value_0() const { return ___value_0; }
	inline uint32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t412748336, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T412748336_H
#ifndef BOOLEAN_T3825574718_H
#define BOOLEAN_T3825574718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3825574718 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t3825574718, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t3825574718_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3825574718_H
#ifndef DEBUGINTERACTIONSOURCESTATE_T2903268065_H
#define DEBUGINTERACTIONSOURCESTATE_T2903268065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.DebugInteractionSourceState
struct  DebugInteractionSourceState_t2903268065 
{
public:
	// System.Boolean HoloToolkit.Unity.InputModule.DebugInteractionSourceState::Pressed
	bool ___Pressed_0;
	// System.Boolean HoloToolkit.Unity.InputModule.DebugInteractionSourceState::Grasped
	bool ___Grasped_1;
	// System.Boolean HoloToolkit.Unity.InputModule.DebugInteractionSourceState::MenuPressed
	bool ___MenuPressed_2;
	// System.Boolean HoloToolkit.Unity.InputModule.DebugInteractionSourceState::SelectPressed
	bool ___SelectPressed_3;
	// HoloToolkit.Unity.InputModule.DebugInteractionSourcePose HoloToolkit.Unity.InputModule.DebugInteractionSourceState::SourcePose
	DebugInteractionSourcePose_t514846003 * ___SourcePose_4;

public:
	inline static int32_t get_offset_of_Pressed_0() { return static_cast<int32_t>(offsetof(DebugInteractionSourceState_t2903268065, ___Pressed_0)); }
	inline bool get_Pressed_0() const { return ___Pressed_0; }
	inline bool* get_address_of_Pressed_0() { return &___Pressed_0; }
	inline void set_Pressed_0(bool value)
	{
		___Pressed_0 = value;
	}

	inline static int32_t get_offset_of_Grasped_1() { return static_cast<int32_t>(offsetof(DebugInteractionSourceState_t2903268065, ___Grasped_1)); }
	inline bool get_Grasped_1() const { return ___Grasped_1; }
	inline bool* get_address_of_Grasped_1() { return &___Grasped_1; }
	inline void set_Grasped_1(bool value)
	{
		___Grasped_1 = value;
	}

	inline static int32_t get_offset_of_MenuPressed_2() { return static_cast<int32_t>(offsetof(DebugInteractionSourceState_t2903268065, ___MenuPressed_2)); }
	inline bool get_MenuPressed_2() const { return ___MenuPressed_2; }
	inline bool* get_address_of_MenuPressed_2() { return &___MenuPressed_2; }
	inline void set_MenuPressed_2(bool value)
	{
		___MenuPressed_2 = value;
	}

	inline static int32_t get_offset_of_SelectPressed_3() { return static_cast<int32_t>(offsetof(DebugInteractionSourceState_t2903268065, ___SelectPressed_3)); }
	inline bool get_SelectPressed_3() const { return ___SelectPressed_3; }
	inline bool* get_address_of_SelectPressed_3() { return &___SelectPressed_3; }
	inline void set_SelectPressed_3(bool value)
	{
		___SelectPressed_3 = value;
	}

	inline static int32_t get_offset_of_SourcePose_4() { return static_cast<int32_t>(offsetof(DebugInteractionSourceState_t2903268065, ___SourcePose_4)); }
	inline DebugInteractionSourcePose_t514846003 * get_SourcePose_4() const { return ___SourcePose_4; }
	inline DebugInteractionSourcePose_t514846003 ** get_address_of_SourcePose_4() { return &___SourcePose_4; }
	inline void set_SourcePose_4(DebugInteractionSourcePose_t514846003 * value)
	{
		___SourcePose_4 = value;
		Il2CppCodeGenWriteBarrier((&___SourcePose_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of HoloToolkit.Unity.InputModule.DebugInteractionSourceState
struct DebugInteractionSourceState_t2903268065_marshaled_pinvoke
{
	int32_t ___Pressed_0;
	int32_t ___Grasped_1;
	int32_t ___MenuPressed_2;
	int32_t ___SelectPressed_3;
	DebugInteractionSourcePose_t514846003 * ___SourcePose_4;
};
// Native definition for COM marshalling of HoloToolkit.Unity.InputModule.DebugInteractionSourceState
struct DebugInteractionSourceState_t2903268065_marshaled_com
{
	int32_t ___Pressed_0;
	int32_t ___Grasped_1;
	int32_t ___MenuPressed_2;
	int32_t ___SelectPressed_3;
	DebugInteractionSourcePose_t514846003 * ___SourcePose_4;
};
#endif // DEBUGINTERACTIONSOURCESTATE_T2903268065_H
#ifndef KEYWORDANDRESPONSE_T690411005_H
#define KEYWORDANDRESPONSE_T690411005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.SpeechInputHandler/KeywordAndResponse
struct  KeywordAndResponse_t690411005 
{
public:
	// System.String HoloToolkit.Unity.InputModule.SpeechInputHandler/KeywordAndResponse::Keyword
	String_t* ___Keyword_0;
	// UnityEngine.Events.UnityEvent HoloToolkit.Unity.InputModule.SpeechInputHandler/KeywordAndResponse::Response
	UnityEvent_t408735097 * ___Response_1;

public:
	inline static int32_t get_offset_of_Keyword_0() { return static_cast<int32_t>(offsetof(KeywordAndResponse_t690411005, ___Keyword_0)); }
	inline String_t* get_Keyword_0() const { return ___Keyword_0; }
	inline String_t** get_address_of_Keyword_0() { return &___Keyword_0; }
	inline void set_Keyword_0(String_t* value)
	{
		___Keyword_0 = value;
		Il2CppCodeGenWriteBarrier((&___Keyword_0), value);
	}

	inline static int32_t get_offset_of_Response_1() { return static_cast<int32_t>(offsetof(KeywordAndResponse_t690411005, ___Response_1)); }
	inline UnityEvent_t408735097 * get_Response_1() const { return ___Response_1; }
	inline UnityEvent_t408735097 ** get_address_of_Response_1() { return &___Response_1; }
	inline void set_Response_1(UnityEvent_t408735097 * value)
	{
		___Response_1 = value;
		Il2CppCodeGenWriteBarrier((&___Response_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of HoloToolkit.Unity.InputModule.SpeechInputHandler/KeywordAndResponse
struct KeywordAndResponse_t690411005_marshaled_pinvoke
{
	char* ___Keyword_0;
	UnityEvent_t408735097 * ___Response_1;
};
// Native definition for COM marshalling of HoloToolkit.Unity.InputModule.SpeechInputHandler/KeywordAndResponse
struct KeywordAndResponse_t690411005_marshaled_com
{
	Il2CppChar* ___Keyword_0;
	UnityEvent_t408735097 * ___Response_1;
};
#endif // KEYWORDANDRESPONSE_T690411005_H
#ifndef INPUTSOURCEINFO_T1964036253_H
#define INPUTSOURCEINFO_T1964036253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InputSourceInfo
struct  InputSourceInfo_t1964036253 
{
public:
	// HoloToolkit.Unity.InputModule.IInputSource HoloToolkit.Unity.InputModule.InputSourceInfo::InputSource
	RuntimeObject* ___InputSource_0;
	// System.UInt32 HoloToolkit.Unity.InputModule.InputSourceInfo::SourceId
	uint32_t ___SourceId_1;

public:
	inline static int32_t get_offset_of_InputSource_0() { return static_cast<int32_t>(offsetof(InputSourceInfo_t1964036253, ___InputSource_0)); }
	inline RuntimeObject* get_InputSource_0() const { return ___InputSource_0; }
	inline RuntimeObject** get_address_of_InputSource_0() { return &___InputSource_0; }
	inline void set_InputSource_0(RuntimeObject* value)
	{
		___InputSource_0 = value;
		Il2CppCodeGenWriteBarrier((&___InputSource_0), value);
	}

	inline static int32_t get_offset_of_SourceId_1() { return static_cast<int32_t>(offsetof(InputSourceInfo_t1964036253, ___SourceId_1)); }
	inline uint32_t get_SourceId_1() const { return ___SourceId_1; }
	inline uint32_t* get_address_of_SourceId_1() { return &___SourceId_1; }
	inline void set_SourceId_1(uint32_t value)
	{
		___SourceId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of HoloToolkit.Unity.InputModule.InputSourceInfo
struct InputSourceInfo_t1964036253_marshaled_pinvoke
{
	RuntimeObject* ___InputSource_0;
	uint32_t ___SourceId_1;
};
// Native definition for COM marshalling of HoloToolkit.Unity.InputModule.InputSourceInfo
struct InputSourceInfo_t1964036253_marshaled_com
{
	RuntimeObject* ___InputSource_0;
	uint32_t ___SourceId_1;
};
#endif // INPUTSOURCEINFO_T1964036253_H
#ifndef SOURCECAPABILITY_1_T1574070414_H
#define SOURCECAPABILITY_1_T1574070414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1<System.Boolean>
struct  SourceCapability_1_t1574070414 
{
public:
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::IsSupported
	bool ___IsSupported_0;
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::IsAvailable
	bool ___IsAvailable_1;
	// TReading HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::CurrentReading
	bool ___CurrentReading_2;

public:
	inline static int32_t get_offset_of_IsSupported_0() { return static_cast<int32_t>(offsetof(SourceCapability_1_t1574070414, ___IsSupported_0)); }
	inline bool get_IsSupported_0() const { return ___IsSupported_0; }
	inline bool* get_address_of_IsSupported_0() { return &___IsSupported_0; }
	inline void set_IsSupported_0(bool value)
	{
		___IsSupported_0 = value;
	}

	inline static int32_t get_offset_of_IsAvailable_1() { return static_cast<int32_t>(offsetof(SourceCapability_1_t1574070414, ___IsAvailable_1)); }
	inline bool get_IsAvailable_1() const { return ___IsAvailable_1; }
	inline bool* get_address_of_IsAvailable_1() { return &___IsAvailable_1; }
	inline void set_IsAvailable_1(bool value)
	{
		___IsAvailable_1 = value;
	}

	inline static int32_t get_offset_of_CurrentReading_2() { return static_cast<int32_t>(offsetof(SourceCapability_1_t1574070414, ___CurrentReading_2)); }
	inline bool get_CurrentReading_2() const { return ___CurrentReading_2; }
	inline bool* get_address_of_CurrentReading_2() { return &___CurrentReading_2; }
	inline void set_CurrentReading_2(bool value)
	{
		___CurrentReading_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCECAPABILITY_1_T1574070414_H
#ifndef BASEEVENTDATA_T2681005625_H
#define BASEEVENTDATA_T2681005625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t2681005625  : public AbstractEventData_t1333959294
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t3466835263 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t2681005625, ___m_EventSystem_1)); }
	inline EventSystem_t3466835263 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t3466835263 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t3466835263 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T2681005625_H
#ifndef QUATERNION_T4030073918_H
#define QUATERNION_T4030073918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t4030073918 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t4030073918_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t4030073918  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t4030073918  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t4030073918 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t4030073918  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T4030073918_H
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
#ifndef VECTOR2_T2243707579_H
#define VECTOR2_T2243707579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2243707579 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2243707579_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2243707579  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2243707579  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2243707579  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2243707579  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2243707579  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2243707579  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2243707579  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2243707579  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2243707579  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2243707579 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2243707579  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___oneVector_3)); }
	inline Vector2_t2243707579  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2243707579 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2243707579  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___upVector_4)); }
	inline Vector2_t2243707579  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2243707579 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2243707579  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___downVector_5)); }
	inline Vector2_t2243707579  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2243707579 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2243707579  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___leftVector_6)); }
	inline Vector2_t2243707579  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2243707579 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2243707579  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___rightVector_7)); }
	inline Vector2_t2243707579  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2243707579 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2243707579  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2243707579  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2243707579 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2243707579  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2243707579  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2243707579 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2243707579  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2243707579_H
#ifndef VECTOR3_T2243707580_H
#define VECTOR3_T2243707580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2243707580 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2243707580_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2243707580  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2243707580  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2243707580  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2243707580  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2243707580  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2243707580  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2243707580  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2243707580  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2243707580  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2243707580  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2243707580  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2243707580 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2243707580  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___oneVector_5)); }
	inline Vector3_t2243707580  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2243707580 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2243707580  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___upVector_6)); }
	inline Vector3_t2243707580  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2243707580 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2243707580  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___downVector_7)); }
	inline Vector3_t2243707580  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2243707580 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2243707580  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___leftVector_8)); }
	inline Vector3_t2243707580  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2243707580 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2243707580  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___rightVector_9)); }
	inline Vector3_t2243707580  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2243707580 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2243707580  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2243707580  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2243707580 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2243707580  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___backVector_11)); }
	inline Vector3_t2243707580  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2243707580 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2243707580  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2243707580  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2243707580 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2243707580  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2243707580  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2243707580 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2243707580  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2243707580_H
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
#ifndef SUPPORTEDINPUTINFO_T919168532_H
#define SUPPORTEDINPUTINFO_T919168532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.SupportedInputInfo
struct  SupportedInputInfo_t919168532 
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.SupportedInputInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedInputInfo_t919168532, ___value___2)); }
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
#endif // SUPPORTEDINPUTINFO_T919168532_H
#ifndef AXISDESTINATION_T2593072858_H
#define AXISDESTINATION_T2593072858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.AxisController/AxisDestination
struct  AxisDestination_t2593072858 
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.AxisController/AxisDestination::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisDestination_t2593072858, ___value___2)); }
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
#endif // AXISDESTINATION_T2593072858_H
#ifndef RECOGNIZERSTARTBEHAVIOR_T1746898251_H
#define RECOGNIZERSTARTBEHAVIOR_T1746898251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.SpeechInputSource/RecognizerStartBehavior
struct  RecognizerStartBehavior_t1746898251 
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.SpeechInputSource/RecognizerStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognizerStartBehavior_t1746898251, ___value___2)); }
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
#endif // RECOGNIZERSTARTBEHAVIOR_T1746898251_H
#ifndef AXISTYPE_T1271521318_H
#define AXISTYPE_T1271521318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.AxisController/AxisType
struct  AxisType_t1271521318 
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.AxisController/AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t1271521318, ___value___2)); }
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
#endif // AXISTYPE_T1271521318_H
#ifndef INPUTSOURCETYPE_T2360810653_H
#define INPUTSOURCETYPE_T2360810653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.CustomInputSelector/InputSourceType
struct  InputSourceType_t2360810653 
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.CustomInputSelector/InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_t2360810653, ___value___2)); }
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
#endif // INPUTSOURCETYPE_T2360810653_H
#ifndef CAMERACLEARFLAGS_T452084705_H
#define CAMERACLEARFLAGS_T452084705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t452084705 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraClearFlags_t452084705, ___value___2)); }
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
#endif // CAMERACLEARFLAGS_T452084705_H
#ifndef BUTTONTYPE_T281723324_H
#define BUTTONTYPE_T281723324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.ButtonController/ButtonType
struct  ButtonType_t281723324 
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.ButtonController/ButtonType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ButtonType_t281723324, ___value___2)); }
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
#endif // BUTTONTYPE_T281723324_H
#ifndef INPUTSOURCENUMBER_T2185102670_H
#define INPUTSOURCENUMBER_T2185102670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.CustomInputSelector/InputSourceNumber
struct  InputSourceNumber_t2185102670 
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.CustomInputSelector/InputSourceNumber::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceNumber_t2185102670, ___value___2)); }
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
#endif // INPUTSOURCENUMBER_T2185102670_H
#ifndef RAY_T2469606224_H
#define RAY_T2469606224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t2469606224 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t2243707580  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t2243707580  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2469606224, ___m_Origin_0)); }
	inline Vector3_t2243707580  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t2243707580 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t2243707580  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2469606224, ___m_Direction_1)); }
	inline Vector3_t2243707580  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t2243707580 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t2243707580  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T2469606224_H
#ifndef RAYCASTHIT_T87180320_H
#define RAYCASTHIT_T87180320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t87180320 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t2243707580  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t2243707580  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2243707579  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t3497673348 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_Point_0)); }
	inline Vector3_t2243707580  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t2243707580 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t2243707580  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_Normal_1)); }
	inline Vector3_t2243707580  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t2243707580 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t2243707580  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_UV_4)); }
	inline Vector2_t2243707579  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2243707579 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2243707579  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_Collider_5)); }
	inline Collider_t3497673348 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t3497673348 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t3497673348 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t87180320_marshaled_pinvoke
{
	Vector3_t2243707580  ___m_Point_0;
	Vector3_t2243707580  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2243707579  ___m_UV_4;
	Collider_t3497673348 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t87180320_marshaled_com
{
	Vector3_t2243707580  ___m_Point_0;
	Vector3_t2243707580  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2243707579  ___m_UV_4;
	Collider_t3497673348 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T87180320_H
#ifndef TIMESPAN_T3430258949_H
#define TIMESPAN_T3430258949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t3430258949 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t3430258949_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t3430258949  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t3430258949  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t3430258949  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ___Zero_19)); }
	inline TimeSpan_t3430258949  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t3430258949 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t3430258949  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t3430258949  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t3430258949 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t3430258949  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t3430258949  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t3430258949 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t3430258949  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T3430258949_H
#ifndef SOURCECAPABILITY_1_T1778569614_H
#define SOURCECAPABILITY_1_T1778569614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1<UnityEngine.Quaternion>
struct  SourceCapability_1_t1778569614 
{
public:
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::IsSupported
	bool ___IsSupported_0;
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::IsAvailable
	bool ___IsAvailable_1;
	// TReading HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::CurrentReading
	Quaternion_t4030073918  ___CurrentReading_2;

public:
	inline static int32_t get_offset_of_IsSupported_0() { return static_cast<int32_t>(offsetof(SourceCapability_1_t1778569614, ___IsSupported_0)); }
	inline bool get_IsSupported_0() const { return ___IsSupported_0; }
	inline bool* get_address_of_IsSupported_0() { return &___IsSupported_0; }
	inline void set_IsSupported_0(bool value)
	{
		___IsSupported_0 = value;
	}

	inline static int32_t get_offset_of_IsAvailable_1() { return static_cast<int32_t>(offsetof(SourceCapability_1_t1778569614, ___IsAvailable_1)); }
	inline bool get_IsAvailable_1() const { return ___IsAvailable_1; }
	inline bool* get_address_of_IsAvailable_1() { return &___IsAvailable_1; }
	inline void set_IsAvailable_1(bool value)
	{
		___IsAvailable_1 = value;
	}

	inline static int32_t get_offset_of_CurrentReading_2() { return static_cast<int32_t>(offsetof(SourceCapability_1_t1778569614, ___CurrentReading_2)); }
	inline Quaternion_t4030073918  get_CurrentReading_2() const { return ___CurrentReading_2; }
	inline Quaternion_t4030073918 * get_address_of_CurrentReading_2() { return &___CurrentReading_2; }
	inline void set_CurrentReading_2(Quaternion_t4030073918  value)
	{
		___CurrentReading_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCECAPABILITY_1_T1778569614_H
#ifndef CONFIDENCELEVEL_T3540086540_H
#define CONFIDENCELEVEL_T3540086540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.ConfidenceLevel
struct  ConfidenceLevel_t3540086540 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.ConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfidenceLevel_t3540086540, ___value___2)); }
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
#endif // CONFIDENCELEVEL_T3540086540_H
#ifndef DISPLAYTYPE_T3313923409_H
#define DISPLAYTYPE_T3313923409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.MixedRealityCameraManager/DisplayType
struct  DisplayType_t3313923409 
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.MixedRealityCameraManager/DisplayType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayType_t3313923409, ___value___2)); }
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
#endif // DISPLAYTYPE_T3313923409_H
#ifndef KEYCODE_T2283395152_H
#define KEYCODE_T2283395152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2283395152 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t2283395152, ___value___2)); }
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
#endif // KEYCODE_T2283395152_H
#ifndef ROTATIONMODEENUM_T853202994_H
#define ROTATIONMODEENUM_T853202994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.HandDraggable/RotationModeEnum
struct  RotationModeEnum_t853202994 
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.HandDraggable/RotationModeEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RotationModeEnum_t853202994, ___value___2)); }
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
#endif // ROTATIONMODEENUM_T853202994_H
#ifndef SOURCECAPABILITY_1_T4287170572_H
#define SOURCECAPABILITY_1_T4287170572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1<UnityEngine.Vector3>
struct  SourceCapability_1_t4287170572 
{
public:
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::IsSupported
	bool ___IsSupported_0;
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::IsAvailable
	bool ___IsAvailable_1;
	// TReading HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::CurrentReading
	Vector3_t2243707580  ___CurrentReading_2;

public:
	inline static int32_t get_offset_of_IsSupported_0() { return static_cast<int32_t>(offsetof(SourceCapability_1_t4287170572, ___IsSupported_0)); }
	inline bool get_IsSupported_0() const { return ___IsSupported_0; }
	inline bool* get_address_of_IsSupported_0() { return &___IsSupported_0; }
	inline void set_IsSupported_0(bool value)
	{
		___IsSupported_0 = value;
	}

	inline static int32_t get_offset_of_IsAvailable_1() { return static_cast<int32_t>(offsetof(SourceCapability_1_t4287170572, ___IsAvailable_1)); }
	inline bool get_IsAvailable_1() const { return ___IsAvailable_1; }
	inline bool* get_address_of_IsAvailable_1() { return &___IsAvailable_1; }
	inline void set_IsAvailable_1(bool value)
	{
		___IsAvailable_1 = value;
	}

	inline static int32_t get_offset_of_CurrentReading_2() { return static_cast<int32_t>(offsetof(SourceCapability_1_t4287170572, ___CurrentReading_2)); }
	inline Vector3_t2243707580  get_CurrentReading_2() const { return ___CurrentReading_2; }
	inline Vector3_t2243707580 * get_address_of_CurrentReading_2() { return &___CurrentReading_2; }
	inline void set_CurrentReading_2(Vector3_t2243707580  value)
	{
		___CurrentReading_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCECAPABILITY_1_T4287170572_H
#ifndef KEYEVENT_T2687587287_H
#define KEYEVENT_T2687587287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.KeyboardManager/KeyEvent
struct  KeyEvent_t2687587287 
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.KeyboardManager/KeyEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyEvent_t2687587287, ___value___2)); }
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
#endif // KEYEVENT_T2687587287_H
#ifndef SOURCECAPABILITY_1_T194678023_H
#define SOURCECAPABILITY_1_T194678023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1<HoloToolkit.Unity.InputModule.InteractionInputSource/AxisButton1D>
struct  SourceCapability_1_t194678023 
{
public:
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::IsSupported
	bool ___IsSupported_0;
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::IsAvailable
	bool ___IsAvailable_1;
	// TReading HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::CurrentReading
	AxisButton1D_t2446182327  ___CurrentReading_2;

public:
	inline static int32_t get_offset_of_IsSupported_0() { return static_cast<int32_t>(offsetof(SourceCapability_1_t194678023, ___IsSupported_0)); }
	inline bool get_IsSupported_0() const { return ___IsSupported_0; }
	inline bool* get_address_of_IsSupported_0() { return &___IsSupported_0; }
	inline void set_IsSupported_0(bool value)
	{
		___IsSupported_0 = value;
	}

	inline static int32_t get_offset_of_IsAvailable_1() { return static_cast<int32_t>(offsetof(SourceCapability_1_t194678023, ___IsAvailable_1)); }
	inline bool get_IsAvailable_1() const { return ___IsAvailable_1; }
	inline bool* get_address_of_IsAvailable_1() { return &___IsAvailable_1; }
	inline void set_IsAvailable_1(bool value)
	{
		___IsAvailable_1 = value;
	}

	inline static int32_t get_offset_of_CurrentReading_2() { return static_cast<int32_t>(offsetof(SourceCapability_1_t194678023, ___CurrentReading_2)); }
	inline AxisButton1D_t2446182327  get_CurrentReading_2() const { return ___CurrentReading_2; }
	inline AxisButton1D_t2446182327 * get_address_of_CurrentReading_2() { return &___CurrentReading_2; }
	inline void set_CurrentReading_2(AxisButton1D_t2446182327  value)
	{
		___CurrentReading_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCECAPABILITY_1_T194678023_H
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
#ifndef INTERACTIONSOURCEKIND_T3133808913_H
#define INTERACTIONSOURCEKIND_T3133808913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceKind
struct  InteractionSourceKind_t3133808913 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceKind_t3133808913, ___value___2)); }
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
#endif // INTERACTIONSOURCEKIND_T3133808913_H
#ifndef BUTTONSTATES_T3673093364_H
#define BUTTONSTATES_T3673093364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.CustomInputSource/ButtonStates
struct  ButtonStates_t3673093364  : public RuntimeObject
{
public:
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputSource/ButtonStates::IsSelectButtonDown
	bool ___IsSelectButtonDown_0;
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputSource/ButtonStates::SelectButtonStateChanged
	bool ___SelectButtonStateChanged_1;
	// System.Single HoloToolkit.Unity.InputModule.CustomInputSource/ButtonStates::SelectDownStartTime
	float ___SelectDownStartTime_2;
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputSource/ButtonStates::IsMenuButtonDown
	bool ___IsMenuButtonDown_3;
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputSource/ButtonStates::MenuButtonStateChanged
	bool ___MenuButtonStateChanged_4;
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputSource/ButtonStates::IsGrasped
	bool ___IsGrasped_5;
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputSource/ButtonStates::GraspStateChanged
	bool ___GraspStateChanged_6;
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputSource/ButtonStates::ManipulationInProgress
	bool ___ManipulationInProgress_7;
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputSource/ButtonStates::HoldInProgress
	bool ___HoldInProgress_8;
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.CustomInputSource/ButtonStates::CumulativeDelta
	Vector3_t2243707580  ___CumulativeDelta_9;

public:
	inline static int32_t get_offset_of_IsSelectButtonDown_0() { return static_cast<int32_t>(offsetof(ButtonStates_t3673093364, ___IsSelectButtonDown_0)); }
	inline bool get_IsSelectButtonDown_0() const { return ___IsSelectButtonDown_0; }
	inline bool* get_address_of_IsSelectButtonDown_0() { return &___IsSelectButtonDown_0; }
	inline void set_IsSelectButtonDown_0(bool value)
	{
		___IsSelectButtonDown_0 = value;
	}

	inline static int32_t get_offset_of_SelectButtonStateChanged_1() { return static_cast<int32_t>(offsetof(ButtonStates_t3673093364, ___SelectButtonStateChanged_1)); }
	inline bool get_SelectButtonStateChanged_1() const { return ___SelectButtonStateChanged_1; }
	inline bool* get_address_of_SelectButtonStateChanged_1() { return &___SelectButtonStateChanged_1; }
	inline void set_SelectButtonStateChanged_1(bool value)
	{
		___SelectButtonStateChanged_1 = value;
	}

	inline static int32_t get_offset_of_SelectDownStartTime_2() { return static_cast<int32_t>(offsetof(ButtonStates_t3673093364, ___SelectDownStartTime_2)); }
	inline float get_SelectDownStartTime_2() const { return ___SelectDownStartTime_2; }
	inline float* get_address_of_SelectDownStartTime_2() { return &___SelectDownStartTime_2; }
	inline void set_SelectDownStartTime_2(float value)
	{
		___SelectDownStartTime_2 = value;
	}

	inline static int32_t get_offset_of_IsMenuButtonDown_3() { return static_cast<int32_t>(offsetof(ButtonStates_t3673093364, ___IsMenuButtonDown_3)); }
	inline bool get_IsMenuButtonDown_3() const { return ___IsMenuButtonDown_3; }
	inline bool* get_address_of_IsMenuButtonDown_3() { return &___IsMenuButtonDown_3; }
	inline void set_IsMenuButtonDown_3(bool value)
	{
		___IsMenuButtonDown_3 = value;
	}

	inline static int32_t get_offset_of_MenuButtonStateChanged_4() { return static_cast<int32_t>(offsetof(ButtonStates_t3673093364, ___MenuButtonStateChanged_4)); }
	inline bool get_MenuButtonStateChanged_4() const { return ___MenuButtonStateChanged_4; }
	inline bool* get_address_of_MenuButtonStateChanged_4() { return &___MenuButtonStateChanged_4; }
	inline void set_MenuButtonStateChanged_4(bool value)
	{
		___MenuButtonStateChanged_4 = value;
	}

	inline static int32_t get_offset_of_IsGrasped_5() { return static_cast<int32_t>(offsetof(ButtonStates_t3673093364, ___IsGrasped_5)); }
	inline bool get_IsGrasped_5() const { return ___IsGrasped_5; }
	inline bool* get_address_of_IsGrasped_5() { return &___IsGrasped_5; }
	inline void set_IsGrasped_5(bool value)
	{
		___IsGrasped_5 = value;
	}

	inline static int32_t get_offset_of_GraspStateChanged_6() { return static_cast<int32_t>(offsetof(ButtonStates_t3673093364, ___GraspStateChanged_6)); }
	inline bool get_GraspStateChanged_6() const { return ___GraspStateChanged_6; }
	inline bool* get_address_of_GraspStateChanged_6() { return &___GraspStateChanged_6; }
	inline void set_GraspStateChanged_6(bool value)
	{
		___GraspStateChanged_6 = value;
	}

	inline static int32_t get_offset_of_ManipulationInProgress_7() { return static_cast<int32_t>(offsetof(ButtonStates_t3673093364, ___ManipulationInProgress_7)); }
	inline bool get_ManipulationInProgress_7() const { return ___ManipulationInProgress_7; }
	inline bool* get_address_of_ManipulationInProgress_7() { return &___ManipulationInProgress_7; }
	inline void set_ManipulationInProgress_7(bool value)
	{
		___ManipulationInProgress_7 = value;
	}

	inline static int32_t get_offset_of_HoldInProgress_8() { return static_cast<int32_t>(offsetof(ButtonStates_t3673093364, ___HoldInProgress_8)); }
	inline bool get_HoldInProgress_8() const { return ___HoldInProgress_8; }
	inline bool* get_address_of_HoldInProgress_8() { return &___HoldInProgress_8; }
	inline void set_HoldInProgress_8(bool value)
	{
		___HoldInProgress_8 = value;
	}

	inline static int32_t get_offset_of_CumulativeDelta_9() { return static_cast<int32_t>(offsetof(ButtonStates_t3673093364, ___CumulativeDelta_9)); }
	inline Vector3_t2243707580  get_CumulativeDelta_9() const { return ___CumulativeDelta_9; }
	inline Vector3_t2243707580 * get_address_of_CumulativeDelta_9() { return &___CumulativeDelta_9; }
	inline void set_CumulativeDelta_9(Vector3_t2243707580  value)
	{
		___CumulativeDelta_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONSTATES_T3673093364_H
#ifndef GESTURESTATE_T2223105763_H
#define GESTURESTATE_T2223105763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.GamepadInput/GestureState
struct  GestureState_t2223105763 
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.GamepadInput/GestureState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureState_t2223105763, ___value___2)); }
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
#endif // GESTURESTATE_T2223105763_H
#ifndef RAYCASTRESULT_T21186376_H
#define RAYCASTRESULT_T21186376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t21186376 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1756533147 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t2336171397 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t2243707580  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t2243707580  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2243707579  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t21186376, ___m_GameObject_0)); }
	inline GameObject_t1756533147 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1756533147 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1756533147 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t21186376, ___module_1)); }
	inline BaseRaycaster_t2336171397 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t2336171397 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t2336171397 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t21186376, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t21186376, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t21186376, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t21186376, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t21186376, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t21186376, ___worldPosition_7)); }
	inline Vector3_t2243707580  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t2243707580 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t2243707580  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t21186376, ___worldNormal_8)); }
	inline Vector3_t2243707580  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t2243707580 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t2243707580  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t21186376, ___screenPosition_9)); }
	inline Vector2_t2243707579  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2243707579 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2243707579  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t21186376_marshaled_pinvoke
{
	GameObject_t1756533147 * ___m_GameObject_0;
	BaseRaycaster_t2336171397 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t2243707580  ___worldPosition_7;
	Vector3_t2243707580  ___worldNormal_8;
	Vector2_t2243707579  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t21186376_marshaled_com
{
	GameObject_t1756533147 * ___m_GameObject_0;
	BaseRaycaster_t2336171397 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t2243707580  ___worldPosition_7;
	Vector3_t2243707580  ___worldNormal_8;
	Vector2_t2243707579  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T21186376_H
#ifndef INPUTBUTTON_T2981963041_H
#define INPUTBUTTON_T2981963041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_t2981963041 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_t2981963041, ___value___2)); }
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
#endif // INPUTBUTTON_T2981963041_H
#ifndef INTERACTIONSOURCEHANDEDNESS_T2316492088_H
#define INTERACTIONSOURCEHANDEDNESS_T2316492088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceHandedness
struct  InteractionSourceHandedness_t2316492088 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceHandedness_t2316492088, ___value___2)); }
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
#endif // INTERACTIONSOURCEHANDEDNESS_T2316492088_H
#ifndef BASEINPUTEVENTDATA_T2199373599_H
#define BASEINPUTEVENTDATA_T2199373599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.BaseInputEventData
struct  BaseInputEventData_t2199373599  : public BaseEventData_t2681005625
{
public:
	// HoloToolkit.Unity.InputModule.IInputSource HoloToolkit.Unity.InputModule.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_2;
	// System.UInt32 HoloToolkit.Unity.InputModule.BaseInputEventData::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_3;
	// System.Object HoloToolkit.Unity.InputModule.BaseInputEventData::<Tag>k__BackingField
	RuntimeObject * ___U3CTagU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_t2199373599, ___U3CInputSourceU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_2() const { return ___U3CInputSourceU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_2() { return &___U3CInputSourceU3Ek__BackingField_2; }
	inline void set_U3CInputSourceU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInputSourceU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_t2199373599, ___U3CSourceIdU3Ek__BackingField_3)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_3() const { return ___U3CSourceIdU3Ek__BackingField_3; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_3() { return &___U3CSourceIdU3Ek__BackingField_3; }
	inline void set_U3CSourceIdU3Ek__BackingField_3(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTagU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_t2199373599, ___U3CTagU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CTagU3Ek__BackingField_4() const { return ___U3CTagU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CTagU3Ek__BackingField_4() { return &___U3CTagU3Ek__BackingField_4; }
	inline void set_U3CTagU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CTagU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTagU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINPUTEVENTDATA_T2199373599_H
#ifndef XBOXCONTROLLERMAPPINGTYPES_T2404135392_H
#define XBOXCONTROLLERMAPPINGTYPES_T2404135392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.XboxControllerMappingTypes
struct  XboxControllerMappingTypes_t2404135392 
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.XboxControllerMappingTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XboxControllerMappingTypes_t2404135392, ___value___2)); }
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
#endif // XBOXCONTROLLERMAPPINGTYPES_T2404135392_H
#ifndef POINTERSPECIFICEVENTDATA_T1451959381_H
#define POINTERSPECIFICEVENTDATA_T1451959381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.PointerSpecificEventData
struct  PointerSpecificEventData_t1451959381  : public BaseEventData_t2681005625
{
public:
	// HoloToolkit.Unity.InputModule.IPointingSource HoloToolkit.Unity.InputModule.PointerSpecificEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerSpecificEventData_t1451959381, ___U3CPointerU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_2() const { return ___U3CPointerU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_2() { return &___U3CPointerU3Ek__BackingField_2; }
	inline void set_U3CPointerU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPointerU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTERSPECIFICEVENTDATA_T1451959381_H
#ifndef INTERACTIONSOURCEFLAGS_T1321125930_H
#define INTERACTIONSOURCEFLAGS_T1321125930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceFlags
struct  InteractionSourceFlags_t1321125930 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceFlags_t1321125930, ___value___2)); }
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
#endif // INTERACTIONSOURCEFLAGS_T1321125930_H
#ifndef OBJECT_T1021602117_H
#define OBJECT_T1021602117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1021602117  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1021602117, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1021602117_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1021602117_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1021602117_H
#ifndef RECOGNIZERSTARTBEHAVIOR_T1219220197_H
#define RECOGNIZERSTARTBEHAVIOR_T1219220197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InteractionInputSource/RecognizerStartBehavior
struct  RecognizerStartBehavior_t1219220197 
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.InteractionInputSource/RecognizerStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognizerStartBehavior_t1219220197, ___value___2)); }
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
#endif // RECOGNIZERSTARTBEHAVIOR_T1219220197_H
#ifndef INTERACTIONSOURCEPRESSINFO_T264698800_H
#define INTERACTIONSOURCEPRESSINFO_T264698800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InteractionSourcePressInfo
struct  InteractionSourcePressInfo_t264698800 
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.InteractionSourcePressInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePressInfo_t264698800, ___value___2)); }
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
#endif // INTERACTIONSOURCEPRESSINFO_T264698800_H
#ifndef AXISBUTTON2D_T4012266268_H
#define AXISBUTTON2D_T4012266268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InteractionInputSource/AxisButton2D
struct  AxisButton2D_t4012266268 
{
public:
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/AxisButton2D::Pressed
	bool ___Pressed_0;
	// UnityEngine.Vector2 HoloToolkit.Unity.InputModule.InteractionInputSource/AxisButton2D::Position
	Vector2_t2243707579  ___Position_1;

public:
	inline static int32_t get_offset_of_Pressed_0() { return static_cast<int32_t>(offsetof(AxisButton2D_t4012266268, ___Pressed_0)); }
	inline bool get_Pressed_0() const { return ___Pressed_0; }
	inline bool* get_address_of_Pressed_0() { return &___Pressed_0; }
	inline void set_Pressed_0(bool value)
	{
		___Pressed_0 = value;
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(AxisButton2D_t4012266268, ___Position_1)); }
	inline Vector2_t2243707579  get_Position_1() const { return ___Position_1; }
	inline Vector2_t2243707579 * get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(Vector2_t2243707579  value)
	{
		___Position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of HoloToolkit.Unity.InputModule.InteractionInputSource/AxisButton2D
struct AxisButton2D_t4012266268_marshaled_pinvoke
{
	int32_t ___Pressed_0;
	Vector2_t2243707579  ___Position_1;
};
// Native definition for COM marshalling of HoloToolkit.Unity.InputModule.InteractionInputSource/AxisButton2D
struct AxisButton2D_t4012266268_marshaled_com
{
	int32_t ___Pressed_0;
	Vector2_t2243707579  ___Position_1;
};
#endif // AXISBUTTON2D_T4012266268_H
#ifndef INTERACTIONSOURCEINFO_T1647346441_H
#define INTERACTIONSOURCEINFO_T1647346441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InteractionSourceInfo
struct  InteractionSourceInfo_t1647346441 
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.InteractionSourceInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceInfo_t1647346441, ___value___2)); }
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
#endif // INTERACTIONSOURCEINFO_T1647346441_H
#ifndef SOURCEDATA_T3313083630_H
#define SOURCEDATA_T3313083630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.RawInteractionInputSource/SourceData
struct  SourceData_t3313083630  : public RuntimeObject
{
public:
	// System.UInt32 HoloToolkit.Unity.InputModule.RawInteractionInputSource/SourceData::SourceId
	uint32_t ___SourceId_0;
	// System.Boolean HoloToolkit.Unity.InputModule.RawInteractionInputSource/SourceData::HasPosition
	bool ___HasPosition_1;
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.RawInteractionInputSource/SourceData::SourcePosition
	Vector3_t2243707580  ___SourcePosition_2;
	// System.Boolean HoloToolkit.Unity.InputModule.RawInteractionInputSource/SourceData::IsSourceDown
	bool ___IsSourceDown_3;
	// System.Boolean HoloToolkit.Unity.InputModule.RawInteractionInputSource/SourceData::IsSourceDownPending
	bool ___IsSourceDownPending_4;
	// System.Boolean HoloToolkit.Unity.InputModule.RawInteractionInputSource/SourceData::SourceStateChanged
	bool ___SourceStateChanged_5;
	// System.Single HoloToolkit.Unity.InputModule.RawInteractionInputSource/SourceData::SourceStateUpdateTimer
	float ___SourceStateUpdateTimer_6;

public:
	inline static int32_t get_offset_of_SourceId_0() { return static_cast<int32_t>(offsetof(SourceData_t3313083630, ___SourceId_0)); }
	inline uint32_t get_SourceId_0() const { return ___SourceId_0; }
	inline uint32_t* get_address_of_SourceId_0() { return &___SourceId_0; }
	inline void set_SourceId_0(uint32_t value)
	{
		___SourceId_0 = value;
	}

	inline static int32_t get_offset_of_HasPosition_1() { return static_cast<int32_t>(offsetof(SourceData_t3313083630, ___HasPosition_1)); }
	inline bool get_HasPosition_1() const { return ___HasPosition_1; }
	inline bool* get_address_of_HasPosition_1() { return &___HasPosition_1; }
	inline void set_HasPosition_1(bool value)
	{
		___HasPosition_1 = value;
	}

	inline static int32_t get_offset_of_SourcePosition_2() { return static_cast<int32_t>(offsetof(SourceData_t3313083630, ___SourcePosition_2)); }
	inline Vector3_t2243707580  get_SourcePosition_2() const { return ___SourcePosition_2; }
	inline Vector3_t2243707580 * get_address_of_SourcePosition_2() { return &___SourcePosition_2; }
	inline void set_SourcePosition_2(Vector3_t2243707580  value)
	{
		___SourcePosition_2 = value;
	}

	inline static int32_t get_offset_of_IsSourceDown_3() { return static_cast<int32_t>(offsetof(SourceData_t3313083630, ___IsSourceDown_3)); }
	inline bool get_IsSourceDown_3() const { return ___IsSourceDown_3; }
	inline bool* get_address_of_IsSourceDown_3() { return &___IsSourceDown_3; }
	inline void set_IsSourceDown_3(bool value)
	{
		___IsSourceDown_3 = value;
	}

	inline static int32_t get_offset_of_IsSourceDownPending_4() { return static_cast<int32_t>(offsetof(SourceData_t3313083630, ___IsSourceDownPending_4)); }
	inline bool get_IsSourceDownPending_4() const { return ___IsSourceDownPending_4; }
	inline bool* get_address_of_IsSourceDownPending_4() { return &___IsSourceDownPending_4; }
	inline void set_IsSourceDownPending_4(bool value)
	{
		___IsSourceDownPending_4 = value;
	}

	inline static int32_t get_offset_of_SourceStateChanged_5() { return static_cast<int32_t>(offsetof(SourceData_t3313083630, ___SourceStateChanged_5)); }
	inline bool get_SourceStateChanged_5() const { return ___SourceStateChanged_5; }
	inline bool* get_address_of_SourceStateChanged_5() { return &___SourceStateChanged_5; }
	inline void set_SourceStateChanged_5(bool value)
	{
		___SourceStateChanged_5 = value;
	}

	inline static int32_t get_offset_of_SourceStateUpdateTimer_6() { return static_cast<int32_t>(offsetof(SourceData_t3313083630, ___SourceStateUpdateTimer_6)); }
	inline float get_SourceStateUpdateTimer_6() const { return ___SourceStateUpdateTimer_6; }
	inline float* get_address_of_SourceStateUpdateTimer_6() { return &___SourceStateUpdateTimer_6; }
	inline void set_SourceStateUpdateTimer_6(float value)
	{
		___SourceStateUpdateTimer_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCEDATA_T3313083630_H
#ifndef SOURCECAPABILITY_1_T1760761964_H
#define SOURCECAPABILITY_1_T1760761964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1<HoloToolkit.Unity.InputModule.InteractionInputSource/AxisButton2D>
struct  SourceCapability_1_t1760761964 
{
public:
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::IsSupported
	bool ___IsSupported_0;
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::IsAvailable
	bool ___IsAvailable_1;
	// TReading HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::CurrentReading
	AxisButton2D_t4012266268  ___CurrentReading_2;

public:
	inline static int32_t get_offset_of_IsSupported_0() { return static_cast<int32_t>(offsetof(SourceCapability_1_t1760761964, ___IsSupported_0)); }
	inline bool get_IsSupported_0() const { return ___IsSupported_0; }
	inline bool* get_address_of_IsSupported_0() { return &___IsSupported_0; }
	inline void set_IsSupported_0(bool value)
	{
		___IsSupported_0 = value;
	}

	inline static int32_t get_offset_of_IsAvailable_1() { return static_cast<int32_t>(offsetof(SourceCapability_1_t1760761964, ___IsAvailable_1)); }
	inline bool get_IsAvailable_1() const { return ___IsAvailable_1; }
	inline bool* get_address_of_IsAvailable_1() { return &___IsAvailable_1; }
	inline void set_IsAvailable_1(bool value)
	{
		___IsAvailable_1 = value;
	}

	inline static int32_t get_offset_of_CurrentReading_2() { return static_cast<int32_t>(offsetof(SourceCapability_1_t1760761964, ___CurrentReading_2)); }
	inline AxisButton2D_t4012266268  get_CurrentReading_2() const { return ___CurrentReading_2; }
	inline AxisButton2D_t4012266268 * get_address_of_CurrentReading_2() { return &___CurrentReading_2; }
	inline void set_CurrentReading_2(AxisButton2D_t4012266268  value)
	{
		___CurrentReading_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCECAPABILITY_1_T1760761964_H
#ifndef SOURCEPOSITIONEVENTDATA_T4286406546_H
#define SOURCEPOSITIONEVENTDATA_T4286406546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.SourcePositionEventData
struct  SourcePositionEventData_t4286406546  : public BaseInputEventData_t2199373599
{
public:
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.SourcePositionEventData::<PointerPosition>k__BackingField
	Vector3_t2243707580  ___U3CPointerPositionU3Ek__BackingField_5;
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.SourcePositionEventData::<GripPosition>k__BackingField
	Vector3_t2243707580  ___U3CGripPositionU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CPointerPositionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SourcePositionEventData_t4286406546, ___U3CPointerPositionU3Ek__BackingField_5)); }
	inline Vector3_t2243707580  get_U3CPointerPositionU3Ek__BackingField_5() const { return ___U3CPointerPositionU3Ek__BackingField_5; }
	inline Vector3_t2243707580 * get_address_of_U3CPointerPositionU3Ek__BackingField_5() { return &___U3CPointerPositionU3Ek__BackingField_5; }
	inline void set_U3CPointerPositionU3Ek__BackingField_5(Vector3_t2243707580  value)
	{
		___U3CPointerPositionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CGripPositionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePositionEventData_t4286406546, ___U3CGripPositionU3Ek__BackingField_6)); }
	inline Vector3_t2243707580  get_U3CGripPositionU3Ek__BackingField_6() const { return ___U3CGripPositionU3Ek__BackingField_6; }
	inline Vector3_t2243707580 * get_address_of_U3CGripPositionU3Ek__BackingField_6() { return &___U3CGripPositionU3Ek__BackingField_6; }
	inline void set_U3CGripPositionU3Ek__BackingField_6(Vector3_t2243707580  value)
	{
		___U3CGripPositionU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCEPOSITIONEVENTDATA_T4286406546_H
#ifndef MAPPINGENTRY_T711995954_H
#define MAPPINGENTRY_T711995954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.XboxControllerInputSource/MappingEntry
struct  MappingEntry_t711995954  : public RuntimeObject
{
public:
	// HoloToolkit.Unity.InputModule.XboxControllerMappingTypes HoloToolkit.Unity.InputModule.XboxControllerInputSource/MappingEntry::Type
	int32_t ___Type_0;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerInputSource/MappingEntry::Value
	String_t* ___Value_1;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(MappingEntry_t711995954, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(MappingEntry_t711995954, ___Value_1)); }
	inline String_t* get_Value_1() const { return ___Value_1; }
	inline String_t** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(String_t* value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier((&___Value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPPINGENTRY_T711995954_H
#ifndef SELECTPRESSEDEVENTDATA_T531650428_H
#define SELECTPRESSEDEVENTDATA_T531650428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.SelectPressedEventData
struct  SelectPressedEventData_t531650428  : public BaseInputEventData_t2199373599
{
public:
	// System.Double HoloToolkit.Unity.InputModule.SelectPressedEventData::<PressedAmount>k__BackingField
	double ___U3CPressedAmountU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CPressedAmountU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SelectPressedEventData_t531650428, ___U3CPressedAmountU3Ek__BackingField_5)); }
	inline double get_U3CPressedAmountU3Ek__BackingField_5() const { return ___U3CPressedAmountU3Ek__BackingField_5; }
	inline double* get_address_of_U3CPressedAmountU3Ek__BackingField_5() { return &___U3CPressedAmountU3Ek__BackingField_5; }
	inline void set_U3CPressedAmountU3Ek__BackingField_5(double value)
	{
		___U3CPressedAmountU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTPRESSEDEVENTDATA_T531650428_H
#ifndef KEYCODEEVENTPAIR_T52935748_H
#define KEYCODEEVENTPAIR_T52935748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair
struct  KeyCodeEventPair_t52935748 
{
public:
	// UnityEngine.KeyCode HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair::KeyCode
	int32_t ___KeyCode_0;
	// HoloToolkit.Unity.InputModule.KeyboardManager/KeyEvent HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair::KeyEvent
	int32_t ___KeyEvent_1;

public:
	inline static int32_t get_offset_of_KeyCode_0() { return static_cast<int32_t>(offsetof(KeyCodeEventPair_t52935748, ___KeyCode_0)); }
	inline int32_t get_KeyCode_0() const { return ___KeyCode_0; }
	inline int32_t* get_address_of_KeyCode_0() { return &___KeyCode_0; }
	inline void set_KeyCode_0(int32_t value)
	{
		___KeyCode_0 = value;
	}

	inline static int32_t get_offset_of_KeyEvent_1() { return static_cast<int32_t>(offsetof(KeyCodeEventPair_t52935748, ___KeyEvent_1)); }
	inline int32_t get_KeyEvent_1() const { return ___KeyEvent_1; }
	inline int32_t* get_address_of_KeyEvent_1() { return &___KeyEvent_1; }
	inline void set_KeyEvent_1(int32_t value)
	{
		___KeyEvent_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODEEVENTPAIR_T52935748_H
#ifndef SOURCECAPABILITY_1_T218101920_H
#define SOURCECAPABILITY_1_T218101920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1<UnityEngine.Ray>
struct  SourceCapability_1_t218101920 
{
public:
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::IsSupported
	bool ___IsSupported_0;
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::IsAvailable
	bool ___IsAvailable_1;
	// TReading HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::CurrentReading
	Ray_t2469606224  ___CurrentReading_2;

public:
	inline static int32_t get_offset_of_IsSupported_0() { return static_cast<int32_t>(offsetof(SourceCapability_1_t218101920, ___IsSupported_0)); }
	inline bool get_IsSupported_0() const { return ___IsSupported_0; }
	inline bool* get_address_of_IsSupported_0() { return &___IsSupported_0; }
	inline void set_IsSupported_0(bool value)
	{
		___IsSupported_0 = value;
	}

	inline static int32_t get_offset_of_IsAvailable_1() { return static_cast<int32_t>(offsetof(SourceCapability_1_t218101920, ___IsAvailable_1)); }
	inline bool get_IsAvailable_1() const { return ___IsAvailable_1; }
	inline bool* get_address_of_IsAvailable_1() { return &___IsAvailable_1; }
	inline void set_IsAvailable_1(bool value)
	{
		___IsAvailable_1 = value;
	}

	inline static int32_t get_offset_of_CurrentReading_2() { return static_cast<int32_t>(offsetof(SourceCapability_1_t218101920, ___CurrentReading_2)); }
	inline Ray_t2469606224  get_CurrentReading_2() const { return ___CurrentReading_2; }
	inline Ray_t2469606224 * get_address_of_CurrentReading_2() { return &___CurrentReading_2; }
	inline void set_CurrentReading_2(Ray_t2469606224  value)
	{
		___CurrentReading_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCECAPABILITY_1_T218101920_H
#ifndef MANIPULATIONEVENTDATA_T3279489987_H
#define MANIPULATIONEVENTDATA_T3279489987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.ManipulationEventData
struct  ManipulationEventData_t3279489987  : public BaseInputEventData_t2199373599
{
public:
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.ManipulationEventData::<CumulativeDelta>k__BackingField
	Vector3_t2243707580  ___U3CCumulativeDeltaU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CCumulativeDeltaU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ManipulationEventData_t3279489987, ___U3CCumulativeDeltaU3Ek__BackingField_5)); }
	inline Vector3_t2243707580  get_U3CCumulativeDeltaU3Ek__BackingField_5() const { return ___U3CCumulativeDeltaU3Ek__BackingField_5; }
	inline Vector3_t2243707580 * get_address_of_U3CCumulativeDeltaU3Ek__BackingField_5() { return &___U3CCumulativeDeltaU3Ek__BackingField_5; }
	inline void set_U3CCumulativeDeltaU3Ek__BackingField_5(Vector3_t2243707580  value)
	{
		___U3CCumulativeDeltaU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIPULATIONEVENTDATA_T3279489987_H
#ifndef INPUTEVENTDATA_T2710196284_H
#define INPUTEVENTDATA_T2710196284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InputEventData
struct  InputEventData_t2710196284  : public BaseInputEventData_t2199373599
{
public:
	// HoloToolkit.Unity.InputModule.InteractionSourcePressInfo HoloToolkit.Unity.InputModule.InputEventData::<PressType>k__BackingField
	int32_t ___U3CPressTypeU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CPressTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputEventData_t2710196284, ___U3CPressTypeU3Ek__BackingField_5)); }
	inline int32_t get_U3CPressTypeU3Ek__BackingField_5() const { return ___U3CPressTypeU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CPressTypeU3Ek__BackingField_5() { return &___U3CPressTypeU3Ek__BackingField_5; }
	inline void set_U3CPressTypeU3Ek__BackingField_5(int32_t value)
	{
		___U3CPressTypeU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTEVENTDATA_T2710196284_H
#ifndef HOLDEVENTDATA_T2900733459_H
#define HOLDEVENTDATA_T2900733459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.HoldEventData
struct  HoldEventData_t2900733459  : public BaseInputEventData_t2199373599
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLDEVENTDATA_T2900733459_H
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
#ifndef TOUCHPADDATA_T1535237815_H
#define TOUCHPADDATA_T1535237815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InteractionInputSource/TouchpadData
struct  TouchpadData_t1535237815 
{
public:
	// HoloToolkit.Unity.InputModule.InteractionInputSource/AxisButton2D HoloToolkit.Unity.InputModule.InteractionInputSource/TouchpadData::AxisButton
	AxisButton2D_t4012266268  ___AxisButton_0;
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/TouchpadData::Touched
	bool ___Touched_1;

public:
	inline static int32_t get_offset_of_AxisButton_0() { return static_cast<int32_t>(offsetof(TouchpadData_t1535237815, ___AxisButton_0)); }
	inline AxisButton2D_t4012266268  get_AxisButton_0() const { return ___AxisButton_0; }
	inline AxisButton2D_t4012266268 * get_address_of_AxisButton_0() { return &___AxisButton_0; }
	inline void set_AxisButton_0(AxisButton2D_t4012266268  value)
	{
		___AxisButton_0 = value;
	}

	inline static int32_t get_offset_of_Touched_1() { return static_cast<int32_t>(offsetof(TouchpadData_t1535237815, ___Touched_1)); }
	inline bool get_Touched_1() const { return ___Touched_1; }
	inline bool* get_address_of_Touched_1() { return &___Touched_1; }
	inline void set_Touched_1(bool value)
	{
		___Touched_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of HoloToolkit.Unity.InputModule.InteractionInputSource/TouchpadData
struct TouchpadData_t1535237815_marshaled_pinvoke
{
	AxisButton2D_t4012266268_marshaled_pinvoke ___AxisButton_0;
	int32_t ___Touched_1;
};
// Native definition for COM marshalling of HoloToolkit.Unity.InputModule.InteractionInputSource/TouchpadData
struct TouchpadData_t1535237815_marshaled_com
{
	AxisButton2D_t4012266268_marshaled_com ___AxisButton_0;
	int32_t ___Touched_1;
};
#endif // TOUCHPADDATA_T1535237815_H
#ifndef POINTEREVENTDATA_T1599784723_H
#define POINTEREVENTDATA_T1599784723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_t1599784723  : public BaseEventData_t2681005625
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t1756533147 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t1756533147 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t1756533147 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t1756533147 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t1756533147 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t21186376  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t21186376  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t1125654279 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t2243707579  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t2243707579  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t2243707579  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t2243707580  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t2243707580  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t2243707579  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_t1756533147 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_t1756533147 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_t1756533147 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerEnterU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___m_PointerPress_3)); }
	inline GameObject_t1756533147 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_t1756533147 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_t1756533147 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerPress_3), value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_t1756533147 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_t1756533147 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_t1756533147 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClastPressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_t1756533147 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_t1756533147 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_t1756533147 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrawPointerPressU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_t1756533147 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_t1756533147 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_t1756533147 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerDragU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t21186376  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t21186376 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t21186376  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t21186376  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t21186376 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t21186376  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___hovered_9)); }
	inline List_1_t1125654279 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t1125654279 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t1125654279 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((&___hovered_9), value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_t2243707579  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_t2243707579 * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_t2243707579  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_t2243707579  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_t2243707579 * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_t2243707579  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_t2243707579  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_t2243707579 * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_t2243707579  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_t2243707580  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_t2243707580 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_t2243707580  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_t2243707580  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_t2243707580 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_t2243707580  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_t2243707579  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_t2243707579 * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_t2243707579  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_t1599784723, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTDATA_T1599784723_H
#ifndef COMPONENT_T3819376471_H
#define COMPONENT_T3819376471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3819376471  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3819376471_H
#ifndef INTERACTIONSOURCE_T49254013_H
#define INTERACTIONSOURCE_T49254013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSource
struct  InteractionSource_t49254013 
{
public:
	// System.UInt32 UnityEngine.XR.WSA.Input.InteractionSource::m_Id
	uint32_t ___m_Id_0;
	// UnityEngine.XR.WSA.Input.InteractionSourceKind UnityEngine.XR.WSA.Input.InteractionSource::m_SourceKind
	int32_t ___m_SourceKind_1;
	// UnityEngine.XR.WSA.Input.InteractionSourceHandedness UnityEngine.XR.WSA.Input.InteractionSource::m_Handedness
	int32_t ___m_Handedness_2;
	// UnityEngine.XR.WSA.Input.InteractionSourceFlags UnityEngine.XR.WSA.Input.InteractionSource::m_Flags
	int32_t ___m_Flags_3;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_VendorId
	uint16_t ___m_VendorId_4;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductId
	uint16_t ___m_ProductId_5;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductVersion
	uint16_t ___m_ProductVersion_6;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(InteractionSource_t49254013, ___m_Id_0)); }
	inline uint32_t get_m_Id_0() const { return ___m_Id_0; }
	inline uint32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(uint32_t value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceKind_1() { return static_cast<int32_t>(offsetof(InteractionSource_t49254013, ___m_SourceKind_1)); }
	inline int32_t get_m_SourceKind_1() const { return ___m_SourceKind_1; }
	inline int32_t* get_address_of_m_SourceKind_1() { return &___m_SourceKind_1; }
	inline void set_m_SourceKind_1(int32_t value)
	{
		___m_SourceKind_1 = value;
	}

	inline static int32_t get_offset_of_m_Handedness_2() { return static_cast<int32_t>(offsetof(InteractionSource_t49254013, ___m_Handedness_2)); }
	inline int32_t get_m_Handedness_2() const { return ___m_Handedness_2; }
	inline int32_t* get_address_of_m_Handedness_2() { return &___m_Handedness_2; }
	inline void set_m_Handedness_2(int32_t value)
	{
		___m_Handedness_2 = value;
	}

	inline static int32_t get_offset_of_m_Flags_3() { return static_cast<int32_t>(offsetof(InteractionSource_t49254013, ___m_Flags_3)); }
	inline int32_t get_m_Flags_3() const { return ___m_Flags_3; }
	inline int32_t* get_address_of_m_Flags_3() { return &___m_Flags_3; }
	inline void set_m_Flags_3(int32_t value)
	{
		___m_Flags_3 = value;
	}

	inline static int32_t get_offset_of_m_VendorId_4() { return static_cast<int32_t>(offsetof(InteractionSource_t49254013, ___m_VendorId_4)); }
	inline uint16_t get_m_VendorId_4() const { return ___m_VendorId_4; }
	inline uint16_t* get_address_of_m_VendorId_4() { return &___m_VendorId_4; }
	inline void set_m_VendorId_4(uint16_t value)
	{
		___m_VendorId_4 = value;
	}

	inline static int32_t get_offset_of_m_ProductId_5() { return static_cast<int32_t>(offsetof(InteractionSource_t49254013, ___m_ProductId_5)); }
	inline uint16_t get_m_ProductId_5() const { return ___m_ProductId_5; }
	inline uint16_t* get_address_of_m_ProductId_5() { return &___m_ProductId_5; }
	inline void set_m_ProductId_5(uint16_t value)
	{
		___m_ProductId_5 = value;
	}

	inline static int32_t get_offset_of_m_ProductVersion_6() { return static_cast<int32_t>(offsetof(InteractionSource_t49254013, ___m_ProductVersion_6)); }
	inline uint16_t get_m_ProductVersion_6() const { return ___m_ProductVersion_6; }
	inline uint16_t* get_address_of_m_ProductVersion_6() { return &___m_ProductVersion_6; }
	inline void set_m_ProductVersion_6(uint16_t value)
	{
		___m_ProductVersion_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCE_T49254013_H
#ifndef NULLABLE_1_T732672539_H
#define NULLABLE_1_T732672539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<UnityEngine.Ray>
struct  Nullable_1_t732672539 
{
public:
	// T System.Nullable`1::value
	Ray_t2469606224  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t732672539, ___value_0)); }
	inline Ray_t2469606224  get_value_0() const { return ___value_0; }
	inline Ray_t2469606224 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Ray_t2469606224  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t732672539, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T732672539_H
#ifndef SOURCEROTATIONEVENTDATA_T1790094301_H
#define SOURCEROTATIONEVENTDATA_T1790094301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.SourceRotationEventData
struct  SourceRotationEventData_t1790094301  : public BaseInputEventData_t2199373599
{
public:
	// UnityEngine.Quaternion HoloToolkit.Unity.InputModule.SourceRotationEventData::<PointerRotation>k__BackingField
	Quaternion_t4030073918  ___U3CPointerRotationU3Ek__BackingField_5;
	// UnityEngine.Quaternion HoloToolkit.Unity.InputModule.SourceRotationEventData::<GripRotation>k__BackingField
	Quaternion_t4030073918  ___U3CGripRotationU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CPointerRotationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SourceRotationEventData_t1790094301, ___U3CPointerRotationU3Ek__BackingField_5)); }
	inline Quaternion_t4030073918  get_U3CPointerRotationU3Ek__BackingField_5() const { return ___U3CPointerRotationU3Ek__BackingField_5; }
	inline Quaternion_t4030073918 * get_address_of_U3CPointerRotationU3Ek__BackingField_5() { return &___U3CPointerRotationU3Ek__BackingField_5; }
	inline void set_U3CPointerRotationU3Ek__BackingField_5(Quaternion_t4030073918  value)
	{
		___U3CPointerRotationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CGripRotationU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourceRotationEventData_t1790094301, ___U3CGripRotationU3Ek__BackingField_6)); }
	inline Quaternion_t4030073918  get_U3CGripRotationU3Ek__BackingField_6() const { return ___U3CGripRotationU3Ek__BackingField_6; }
	inline Quaternion_t4030073918 * get_address_of_U3CGripRotationU3Ek__BackingField_6() { return &___U3CGripRotationU3Ek__BackingField_6; }
	inline void set_U3CGripRotationU3Ek__BackingField_6(Quaternion_t4030073918  value)
	{
		___U3CGripRotationU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCEROTATIONEVENTDATA_T1790094301_H
#ifndef SOURCESTATEEVENTDATA_T2946150088_H
#define SOURCESTATEEVENTDATA_T2946150088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.SourceStateEventData
struct  SourceStateEventData_t2946150088  : public BaseInputEventData_t2199373599
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCESTATEEVENTDATA_T2946150088_H
#ifndef SPEECHEVENTDATA_T3647170294_H
#define SPEECHEVENTDATA_T3647170294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.SpeechEventData
struct  SpeechEventData_t3647170294  : public BaseInputEventData_t2199373599
{
public:
	// System.TimeSpan HoloToolkit.Unity.InputModule.SpeechEventData::<PhraseDuration>k__BackingField
	TimeSpan_t3430258949  ___U3CPhraseDurationU3Ek__BackingField_5;
	// System.DateTime HoloToolkit.Unity.InputModule.SpeechEventData::<PhraseStartTime>k__BackingField
	DateTime_t693205669  ___U3CPhraseStartTimeU3Ek__BackingField_6;
	// System.String HoloToolkit.Unity.InputModule.SpeechEventData::<RecognizedText>k__BackingField
	String_t* ___U3CRecognizedTextU3Ek__BackingField_7;
	// UnityEngine.Windows.Speech.ConfidenceLevel HoloToolkit.Unity.InputModule.SpeechEventData::<Confidence>k__BackingField
	int32_t ___U3CConfidenceU3Ek__BackingField_8;
	// UnityEngine.Windows.Speech.SemanticMeaning[] HoloToolkit.Unity.InputModule.SpeechEventData::<SemanticMeanings>k__BackingField
	SemanticMeaningU5BU5D_t2038511870* ___U3CSemanticMeaningsU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CPhraseDurationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpeechEventData_t3647170294, ___U3CPhraseDurationU3Ek__BackingField_5)); }
	inline TimeSpan_t3430258949  get_U3CPhraseDurationU3Ek__BackingField_5() const { return ___U3CPhraseDurationU3Ek__BackingField_5; }
	inline TimeSpan_t3430258949 * get_address_of_U3CPhraseDurationU3Ek__BackingField_5() { return &___U3CPhraseDurationU3Ek__BackingField_5; }
	inline void set_U3CPhraseDurationU3Ek__BackingField_5(TimeSpan_t3430258949  value)
	{
		___U3CPhraseDurationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPhraseStartTimeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SpeechEventData_t3647170294, ___U3CPhraseStartTimeU3Ek__BackingField_6)); }
	inline DateTime_t693205669  get_U3CPhraseStartTimeU3Ek__BackingField_6() const { return ___U3CPhraseStartTimeU3Ek__BackingField_6; }
	inline DateTime_t693205669 * get_address_of_U3CPhraseStartTimeU3Ek__BackingField_6() { return &___U3CPhraseStartTimeU3Ek__BackingField_6; }
	inline void set_U3CPhraseStartTimeU3Ek__BackingField_6(DateTime_t693205669  value)
	{
		___U3CPhraseStartTimeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CRecognizedTextU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SpeechEventData_t3647170294, ___U3CRecognizedTextU3Ek__BackingField_7)); }
	inline String_t* get_U3CRecognizedTextU3Ek__BackingField_7() const { return ___U3CRecognizedTextU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CRecognizedTextU3Ek__BackingField_7() { return &___U3CRecognizedTextU3Ek__BackingField_7; }
	inline void set_U3CRecognizedTextU3Ek__BackingField_7(String_t* value)
	{
		___U3CRecognizedTextU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRecognizedTextU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CConfidenceU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SpeechEventData_t3647170294, ___U3CConfidenceU3Ek__BackingField_8)); }
	inline int32_t get_U3CConfidenceU3Ek__BackingField_8() const { return ___U3CConfidenceU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CConfidenceU3Ek__BackingField_8() { return &___U3CConfidenceU3Ek__BackingField_8; }
	inline void set_U3CConfidenceU3Ek__BackingField_8(int32_t value)
	{
		___U3CConfidenceU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CSemanticMeaningsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SpeechEventData_t3647170294, ___U3CSemanticMeaningsU3Ek__BackingField_9)); }
	inline SemanticMeaningU5BU5D_t2038511870* get_U3CSemanticMeaningsU3Ek__BackingField_9() const { return ___U3CSemanticMeaningsU3Ek__BackingField_9; }
	inline SemanticMeaningU5BU5D_t2038511870** get_address_of_U3CSemanticMeaningsU3Ek__BackingField_9() { return &___U3CSemanticMeaningsU3Ek__BackingField_9; }
	inline void set_U3CSemanticMeaningsU3Ek__BackingField_9(SemanticMeaningU5BU5D_t2038511870* value)
	{
		___U3CSemanticMeaningsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSemanticMeaningsU3Ek__BackingField_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHEVENTDATA_T3647170294_H
#ifndef KEYWORDANDKEYCODE_T2285498554_H
#define KEYWORDANDKEYCODE_T2285498554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.KeywordAndKeyCode
struct  KeywordAndKeyCode_t2285498554 
{
public:
	// System.String HoloToolkit.Unity.InputModule.KeywordAndKeyCode::Keyword
	String_t* ___Keyword_0;
	// UnityEngine.KeyCode HoloToolkit.Unity.InputModule.KeywordAndKeyCode::KeyCode
	int32_t ___KeyCode_1;

public:
	inline static int32_t get_offset_of_Keyword_0() { return static_cast<int32_t>(offsetof(KeywordAndKeyCode_t2285498554, ___Keyword_0)); }
	inline String_t* get_Keyword_0() const { return ___Keyword_0; }
	inline String_t** get_address_of_Keyword_0() { return &___Keyword_0; }
	inline void set_Keyword_0(String_t* value)
	{
		___Keyword_0 = value;
		Il2CppCodeGenWriteBarrier((&___Keyword_0), value);
	}

	inline static int32_t get_offset_of_KeyCode_1() { return static_cast<int32_t>(offsetof(KeywordAndKeyCode_t2285498554, ___KeyCode_1)); }
	inline int32_t get_KeyCode_1() const { return ___KeyCode_1; }
	inline int32_t* get_address_of_KeyCode_1() { return &___KeyCode_1; }
	inline void set_KeyCode_1(int32_t value)
	{
		___KeyCode_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of HoloToolkit.Unity.InputModule.KeywordAndKeyCode
struct KeywordAndKeyCode_t2285498554_marshaled_pinvoke
{
	char* ___Keyword_0;
	int32_t ___KeyCode_1;
};
// Native definition for COM marshalling of HoloToolkit.Unity.InputModule.KeywordAndKeyCode
struct KeywordAndKeyCode_t2285498554_marshaled_com
{
	Il2CppChar* ___Keyword_0;
	int32_t ___KeyCode_1;
};
#endif // KEYWORDANDKEYCODE_T2285498554_H
#ifndef INPUTPOSITIONEVENTDATA_T1718411395_H
#define INPUTPOSITIONEVENTDATA_T1718411395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InputPositionEventData
struct  InputPositionEventData_t1718411395  : public InputEventData_t2710196284
{
public:
	// UnityEngine.Vector2 HoloToolkit.Unity.InputModule.InputPositionEventData::Position
	Vector2_t2243707579  ___Position_6;

public:
	inline static int32_t get_offset_of_Position_6() { return static_cast<int32_t>(offsetof(InputPositionEventData_t1718411395, ___Position_6)); }
	inline Vector2_t2243707579  get_Position_6() const { return ___Position_6; }
	inline Vector2_t2243707579 * get_address_of_Position_6() { return &___Position_6; }
	inline void set_Position_6(Vector2_t2243707579  value)
	{
		___Position_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTPOSITIONEVENTDATA_T1718411395_H
#ifndef GAMEPADEVENTDATA_T912895835_H
#define GAMEPADEVENTDATA_T912895835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.GamePadEventData
struct  GamePadEventData_t912895835  : public InputEventData_t2710196284
{
public:
	// System.String HoloToolkit.Unity.InputModule.GamePadEventData::<GamePadName>k__BackingField
	String_t* ___U3CGamePadNameU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CGamePadNameU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GamePadEventData_t912895835, ___U3CGamePadNameU3Ek__BackingField_6)); }
	inline String_t* get_U3CGamePadNameU3Ek__BackingField_6() const { return ___U3CGamePadNameU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CGamePadNameU3Ek__BackingField_6() { return &___U3CGamePadNameU3Ek__BackingField_6; }
	inline void set_U3CGamePadNameU3Ek__BackingField_6(String_t* value)
	{
		___U3CGamePadNameU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGamePadNameU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEPADEVENTDATA_T912895835_H
#ifndef INPUTCLICKEDEVENTDATA_T3434086547_H
#define INPUTCLICKEDEVENTDATA_T3434086547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InputClickedEventData
struct  InputClickedEventData_t3434086547  : public InputEventData_t2710196284
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.InputClickedEventData::<TapCount>k__BackingField
	int32_t ___U3CTapCountU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTapCountU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputClickedEventData_t3434086547, ___U3CTapCountU3Ek__BackingField_6)); }
	inline int32_t get_U3CTapCountU3Ek__BackingField_6() const { return ___U3CTapCountU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CTapCountU3Ek__BackingField_6() { return &___U3CTapCountU3Ek__BackingField_6; }
	inline void set_U3CTapCountU3Ek__BackingField_6(int32_t value)
	{
		___U3CTapCountU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTCLICKEDEVENTDATA_T3434086547_H
#ifndef DICTATIONEVENTDATA_T3232161633_H
#define DICTATIONEVENTDATA_T3232161633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.DictationEventData
struct  DictationEventData_t3232161633  : public InputEventData_t2710196284
{
public:
	// System.String HoloToolkit.Unity.InputModule.DictationEventData::<DictationResult>k__BackingField
	String_t* ___U3CDictationResultU3Ek__BackingField_6;
	// UnityEngine.AudioClip HoloToolkit.Unity.InputModule.DictationEventData::<DictationAudioClip>k__BackingField
	AudioClip_t1932558630 * ___U3CDictationAudioClipU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CDictationResultU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DictationEventData_t3232161633, ___U3CDictationResultU3Ek__BackingField_6)); }
	inline String_t* get_U3CDictationResultU3Ek__BackingField_6() const { return ___U3CDictationResultU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CDictationResultU3Ek__BackingField_6() { return &___U3CDictationResultU3Ek__BackingField_6; }
	inline void set_U3CDictationResultU3Ek__BackingField_6(String_t* value)
	{
		___U3CDictationResultU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDictationResultU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CDictationAudioClipU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DictationEventData_t3232161633, ___U3CDictationAudioClipU3Ek__BackingField_7)); }
	inline AudioClip_t1932558630 * get_U3CDictationAudioClipU3Ek__BackingField_7() const { return ___U3CDictationAudioClipU3Ek__BackingField_7; }
	inline AudioClip_t1932558630 ** get_address_of_U3CDictationAudioClipU3Ek__BackingField_7() { return &___U3CDictationAudioClipU3Ek__BackingField_7; }
	inline void set_U3CDictationAudioClipU3Ek__BackingField_7(AudioClip_t1932558630 * value)
	{
		___U3CDictationAudioClipU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDictationAudioClipU3Ek__BackingField_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONEVENTDATA_T3232161633_H
#ifndef FOCUSEDCHANGEDDELEGATE_T2430817330_H
#define FOCUSEDCHANGEDDELEGATE_T2430817330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.GazeManager/FocusedChangedDelegate
struct  FocusedChangedDelegate_t2430817330  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOCUSEDCHANGEDDELEGATE_T2430817330_H
#ifndef KEYBOARDCALLBACK_T3674756476_H
#define KEYBOARDCALLBACK_T3674756476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.KeyboardManager/KeyboardCallback
struct  KeyboardCallback_t3674756476  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBOARDCALLBACK_T3674756476_H
#ifndef SOURCECAPABILITY_1_T3578700807_H
#define SOURCECAPABILITY_1_T3578700807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1<HoloToolkit.Unity.InputModule.InteractionInputSource/TouchpadData>
struct  SourceCapability_1_t3578700807 
{
public:
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::IsSupported
	bool ___IsSupported_0;
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::IsAvailable
	bool ___IsAvailable_1;
	// TReading HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1::CurrentReading
	TouchpadData_t1535237815  ___CurrentReading_2;

public:
	inline static int32_t get_offset_of_IsSupported_0() { return static_cast<int32_t>(offsetof(SourceCapability_1_t3578700807, ___IsSupported_0)); }
	inline bool get_IsSupported_0() const { return ___IsSupported_0; }
	inline bool* get_address_of_IsSupported_0() { return &___IsSupported_0; }
	inline void set_IsSupported_0(bool value)
	{
		___IsSupported_0 = value;
	}

	inline static int32_t get_offset_of_IsAvailable_1() { return static_cast<int32_t>(offsetof(SourceCapability_1_t3578700807, ___IsAvailable_1)); }
	inline bool get_IsAvailable_1() const { return ___IsAvailable_1; }
	inline bool* get_address_of_IsAvailable_1() { return &___IsAvailable_1; }
	inline void set_IsAvailable_1(bool value)
	{
		___IsAvailable_1 = value;
	}

	inline static int32_t get_offset_of_CurrentReading_2() { return static_cast<int32_t>(offsetof(SourceCapability_1_t3578700807, ___CurrentReading_2)); }
	inline TouchpadData_t1535237815  get_CurrentReading_2() const { return ___CurrentReading_2; }
	inline TouchpadData_t1535237815 * get_address_of_CurrentReading_2() { return &___CurrentReading_2; }
	inline void set_CurrentReading_2(TouchpadData_t1535237815  value)
	{
		___CurrentReading_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCECAPABILITY_1_T3578700807_H
#ifndef DEBUGINTERACTIONSOURCEPOSE_T514846003_H
#define DEBUGINTERACTIONSOURCEPOSE_T514846003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.DebugInteractionSourcePose
struct  DebugInteractionSourcePose_t514846003  : public RuntimeObject
{
public:
	// System.Boolean HoloToolkit.Unity.InputModule.DebugInteractionSourcePose::TryGetFunctionsReturnTrue
	bool ___TryGetFunctionsReturnTrue_0;
	// System.Boolean HoloToolkit.Unity.InputModule.DebugInteractionSourcePose::IsPositionAvailable
	bool ___IsPositionAvailable_1;
	// System.Boolean HoloToolkit.Unity.InputModule.DebugInteractionSourcePose::IsRotationAvailable
	bool ___IsRotationAvailable_2;
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.DebugInteractionSourcePose::Position
	Vector3_t2243707580  ___Position_3;
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.DebugInteractionSourcePose::Velocity
	Vector3_t2243707580  ___Velocity_4;
	// UnityEngine.Quaternion HoloToolkit.Unity.InputModule.DebugInteractionSourcePose::Rotation
	Quaternion_t4030073918  ___Rotation_5;
	// System.Nullable`1<UnityEngine.Ray> HoloToolkit.Unity.InputModule.DebugInteractionSourcePose::PointerRay
	Nullable_1_t732672539  ___PointerRay_6;

public:
	inline static int32_t get_offset_of_TryGetFunctionsReturnTrue_0() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t514846003, ___TryGetFunctionsReturnTrue_0)); }
	inline bool get_TryGetFunctionsReturnTrue_0() const { return ___TryGetFunctionsReturnTrue_0; }
	inline bool* get_address_of_TryGetFunctionsReturnTrue_0() { return &___TryGetFunctionsReturnTrue_0; }
	inline void set_TryGetFunctionsReturnTrue_0(bool value)
	{
		___TryGetFunctionsReturnTrue_0 = value;
	}

	inline static int32_t get_offset_of_IsPositionAvailable_1() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t514846003, ___IsPositionAvailable_1)); }
	inline bool get_IsPositionAvailable_1() const { return ___IsPositionAvailable_1; }
	inline bool* get_address_of_IsPositionAvailable_1() { return &___IsPositionAvailable_1; }
	inline void set_IsPositionAvailable_1(bool value)
	{
		___IsPositionAvailable_1 = value;
	}

	inline static int32_t get_offset_of_IsRotationAvailable_2() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t514846003, ___IsRotationAvailable_2)); }
	inline bool get_IsRotationAvailable_2() const { return ___IsRotationAvailable_2; }
	inline bool* get_address_of_IsRotationAvailable_2() { return &___IsRotationAvailable_2; }
	inline void set_IsRotationAvailable_2(bool value)
	{
		___IsRotationAvailable_2 = value;
	}

	inline static int32_t get_offset_of_Position_3() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t514846003, ___Position_3)); }
	inline Vector3_t2243707580  get_Position_3() const { return ___Position_3; }
	inline Vector3_t2243707580 * get_address_of_Position_3() { return &___Position_3; }
	inline void set_Position_3(Vector3_t2243707580  value)
	{
		___Position_3 = value;
	}

	inline static int32_t get_offset_of_Velocity_4() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t514846003, ___Velocity_4)); }
	inline Vector3_t2243707580  get_Velocity_4() const { return ___Velocity_4; }
	inline Vector3_t2243707580 * get_address_of_Velocity_4() { return &___Velocity_4; }
	inline void set_Velocity_4(Vector3_t2243707580  value)
	{
		___Velocity_4 = value;
	}

	inline static int32_t get_offset_of_Rotation_5() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t514846003, ___Rotation_5)); }
	inline Quaternion_t4030073918  get_Rotation_5() const { return ___Rotation_5; }
	inline Quaternion_t4030073918 * get_address_of_Rotation_5() { return &___Rotation_5; }
	inline void set_Rotation_5(Quaternion_t4030073918  value)
	{
		___Rotation_5 = value;
	}

	inline static int32_t get_offset_of_PointerRay_6() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t514846003, ___PointerRay_6)); }
	inline Nullable_1_t732672539  get_PointerRay_6() const { return ___PointerRay_6; }
	inline Nullable_1_t732672539 * get_address_of_PointerRay_6() { return &___PointerRay_6; }
	inline void set_PointerRay_6(Nullable_1_t732672539  value)
	{
		___PointerRay_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGINTERACTIONSOURCEPOSE_T514846003_H
#ifndef KEYBOARDREGISTRATION_T1091472458_H
#define KEYBOARDREGISTRATION_T1091472458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.KeyboardManager/KeyboardRegistration
struct  KeyboardRegistration_t1091472458  : public RuntimeObject
{
public:
	// HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair HoloToolkit.Unity.InputModule.KeyboardManager/KeyboardRegistration::keyCodeEvent
	KeyCodeEventPair_t52935748  ___keyCodeEvent_0;
	// HoloToolkit.Unity.InputModule.KeyboardManager/KeyboardCallback HoloToolkit.Unity.InputModule.KeyboardManager/KeyboardRegistration::callback
	KeyboardCallback_t3674756476 * ___callback_1;
	// System.Boolean HoloToolkit.Unity.InputModule.KeyboardManager/KeyboardRegistration::isRegistered
	bool ___isRegistered_2;

public:
	inline static int32_t get_offset_of_keyCodeEvent_0() { return static_cast<int32_t>(offsetof(KeyboardRegistration_t1091472458, ___keyCodeEvent_0)); }
	inline KeyCodeEventPair_t52935748  get_keyCodeEvent_0() const { return ___keyCodeEvent_0; }
	inline KeyCodeEventPair_t52935748 * get_address_of_keyCodeEvent_0() { return &___keyCodeEvent_0; }
	inline void set_keyCodeEvent_0(KeyCodeEventPair_t52935748  value)
	{
		___keyCodeEvent_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(KeyboardRegistration_t1091472458, ___callback_1)); }
	inline KeyboardCallback_t3674756476 * get_callback_1() const { return ___callback_1; }
	inline KeyboardCallback_t3674756476 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(KeyboardCallback_t3674756476 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((&___callback_1), value);
	}

	inline static int32_t get_offset_of_isRegistered_2() { return static_cast<int32_t>(offsetof(KeyboardRegistration_t1091472458, ___isRegistered_2)); }
	inline bool get_isRegistered_2() const { return ___isRegistered_2; }
	inline bool* get_address_of_isRegistered_2() { return &___isRegistered_2; }
	inline void set_isRegistered_2(bool value)
	{
		___isRegistered_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBOARDREGISTRATION_T1091472458_H
#ifndef POINTERINPUTEVENTDATA_T1633755977_H
#define POINTERINPUTEVENTDATA_T1633755977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.PointerInputEventData
struct  PointerInputEventData_t1633755977  : public PointerEventData_t1599784723
{
public:
	// HoloToolkit.Unity.InputModule.IInputSource HoloToolkit.Unity.InputModule.PointerInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_23;
	// System.UInt32 HoloToolkit.Unity.InputModule.PointerInputEventData::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerInputEventData_t1633755977, ___U3CInputSourceU3Ek__BackingField_23)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_23() const { return ___U3CInputSourceU3Ek__BackingField_23; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_23() { return &___U3CInputSourceU3Ek__BackingField_23; }
	inline void set_U3CInputSourceU3Ek__BackingField_23(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInputSourceU3Ek__BackingField_23), value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(PointerInputEventData_t1633755977, ___U3CSourceIdU3Ek__BackingField_24)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_24() const { return ___U3CSourceIdU3Ek__BackingField_24; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_24() { return &___U3CSourceIdU3Ek__BackingField_24; }
	inline void set_U3CSourceIdU3Ek__BackingField_24(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTERINPUTEVENTDATA_T1633755977_H
#ifndef NAVIGATIONEVENTDATA_T1538884580_H
#define NAVIGATIONEVENTDATA_T1538884580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.NavigationEventData
struct  NavigationEventData_t1538884580  : public InputEventData_t2710196284
{
public:
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.NavigationEventData::<NormalizedOffset>k__BackingField
	Vector3_t2243707580  ___U3CNormalizedOffsetU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CNormalizedOffsetU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(NavigationEventData_t1538884580, ___U3CNormalizedOffsetU3Ek__BackingField_6)); }
	inline Vector3_t2243707580  get_U3CNormalizedOffsetU3Ek__BackingField_6() const { return ___U3CNormalizedOffsetU3Ek__BackingField_6; }
	inline Vector3_t2243707580 * get_address_of_U3CNormalizedOffsetU3Ek__BackingField_6() { return &___U3CNormalizedOffsetU3Ek__BackingField_6; }
	inline void set_U3CNormalizedOffsetU3Ek__BackingField_6(Vector3_t2243707580  value)
	{
		___U3CNormalizedOffsetU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONEVENTDATA_T1538884580_H
#ifndef DISPLAYEVENTHANDLER_T2174504173_H
#define DISPLAYEVENTHANDLER_T2174504173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.MixedRealityCameraManager/DisplayEventHandler
struct  DisplayEventHandler_t2174504173  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYEVENTHANDLER_T2174504173_H
#ifndef BEHAVIOUR_T955675639_H
#define BEHAVIOUR_T955675639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t955675639  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T955675639_H
#ifndef SOURCEDATA_T478863902_H
#define SOURCEDATA_T478863902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InteractionInputSource/SourceData
struct  SourceData_t478863902  : public RuntimeObject
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource HoloToolkit.Unity.InputModule.InteractionInputSource/SourceData::Source
	InteractionSource_t49254013  ___Source_0;
	// HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1<UnityEngine.Vector3> HoloToolkit.Unity.InputModule.InteractionInputSource/SourceData::PointerPosition
	SourceCapability_1_t4287170572  ___PointerPosition_1;
	// HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1<UnityEngine.Quaternion> HoloToolkit.Unity.InputModule.InteractionInputSource/SourceData::PointerRotation
	SourceCapability_1_t1778569614  ___PointerRotation_2;
	// HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1<UnityEngine.Ray> HoloToolkit.Unity.InputModule.InteractionInputSource/SourceData::PointingRay
	SourceCapability_1_t218101920  ___PointingRay_3;
	// HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1<UnityEngine.Vector3> HoloToolkit.Unity.InputModule.InteractionInputSource/SourceData::GripPosition
	SourceCapability_1_t4287170572  ___GripPosition_4;
	// HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1<UnityEngine.Quaternion> HoloToolkit.Unity.InputModule.InteractionInputSource/SourceData::GripRotation
	SourceCapability_1_t1778569614  ___GripRotation_5;
	// HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1<HoloToolkit.Unity.InputModule.InteractionInputSource/AxisButton2D> HoloToolkit.Unity.InputModule.InteractionInputSource/SourceData::Thumbstick
	SourceCapability_1_t1760761964  ___Thumbstick_6;
	// HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1<HoloToolkit.Unity.InputModule.InteractionInputSource/TouchpadData> HoloToolkit.Unity.InputModule.InteractionInputSource/SourceData::Touchpad
	SourceCapability_1_t3578700807  ___Touchpad_7;
	// HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1<HoloToolkit.Unity.InputModule.InteractionInputSource/AxisButton1D> HoloToolkit.Unity.InputModule.InteractionInputSource/SourceData::Select
	SourceCapability_1_t194678023  ___Select_8;
	// HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1<System.Boolean> HoloToolkit.Unity.InputModule.InteractionInputSource/SourceData::Grasp
	SourceCapability_1_t1574070414  ___Grasp_9;
	// HoloToolkit.Unity.InputModule.InteractionInputSource/SourceCapability`1<System.Boolean> HoloToolkit.Unity.InputModule.InteractionInputSource/SourceData::Menu
	SourceCapability_1_t1574070414  ___Menu_10;
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/SourceData::ThumbstickPositionUpdated
	bool ___ThumbstickPositionUpdated_11;
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/SourceData::TouchpadPositionUpdated
	bool ___TouchpadPositionUpdated_12;
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/SourceData::TouchpadTouchedUpdated
	bool ___TouchpadTouchedUpdated_13;
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/SourceData::PositionUpdated
	bool ___PositionUpdated_14;
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/SourceData::RotationUpdated
	bool ___RotationUpdated_15;
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource/SourceData::SelectPressedAmountUpdated
	bool ___SelectPressedAmountUpdated_16;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(SourceData_t478863902, ___Source_0)); }
	inline InteractionSource_t49254013  get_Source_0() const { return ___Source_0; }
	inline InteractionSource_t49254013 * get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(InteractionSource_t49254013  value)
	{
		___Source_0 = value;
	}

	inline static int32_t get_offset_of_PointerPosition_1() { return static_cast<int32_t>(offsetof(SourceData_t478863902, ___PointerPosition_1)); }
	inline SourceCapability_1_t4287170572  get_PointerPosition_1() const { return ___PointerPosition_1; }
	inline SourceCapability_1_t4287170572 * get_address_of_PointerPosition_1() { return &___PointerPosition_1; }
	inline void set_PointerPosition_1(SourceCapability_1_t4287170572  value)
	{
		___PointerPosition_1 = value;
	}

	inline static int32_t get_offset_of_PointerRotation_2() { return static_cast<int32_t>(offsetof(SourceData_t478863902, ___PointerRotation_2)); }
	inline SourceCapability_1_t1778569614  get_PointerRotation_2() const { return ___PointerRotation_2; }
	inline SourceCapability_1_t1778569614 * get_address_of_PointerRotation_2() { return &___PointerRotation_2; }
	inline void set_PointerRotation_2(SourceCapability_1_t1778569614  value)
	{
		___PointerRotation_2 = value;
	}

	inline static int32_t get_offset_of_PointingRay_3() { return static_cast<int32_t>(offsetof(SourceData_t478863902, ___PointingRay_3)); }
	inline SourceCapability_1_t218101920  get_PointingRay_3() const { return ___PointingRay_3; }
	inline SourceCapability_1_t218101920 * get_address_of_PointingRay_3() { return &___PointingRay_3; }
	inline void set_PointingRay_3(SourceCapability_1_t218101920  value)
	{
		___PointingRay_3 = value;
	}

	inline static int32_t get_offset_of_GripPosition_4() { return static_cast<int32_t>(offsetof(SourceData_t478863902, ___GripPosition_4)); }
	inline SourceCapability_1_t4287170572  get_GripPosition_4() const { return ___GripPosition_4; }
	inline SourceCapability_1_t4287170572 * get_address_of_GripPosition_4() { return &___GripPosition_4; }
	inline void set_GripPosition_4(SourceCapability_1_t4287170572  value)
	{
		___GripPosition_4 = value;
	}

	inline static int32_t get_offset_of_GripRotation_5() { return static_cast<int32_t>(offsetof(SourceData_t478863902, ___GripRotation_5)); }
	inline SourceCapability_1_t1778569614  get_GripRotation_5() const { return ___GripRotation_5; }
	inline SourceCapability_1_t1778569614 * get_address_of_GripRotation_5() { return &___GripRotation_5; }
	inline void set_GripRotation_5(SourceCapability_1_t1778569614  value)
	{
		___GripRotation_5 = value;
	}

	inline static int32_t get_offset_of_Thumbstick_6() { return static_cast<int32_t>(offsetof(SourceData_t478863902, ___Thumbstick_6)); }
	inline SourceCapability_1_t1760761964  get_Thumbstick_6() const { return ___Thumbstick_6; }
	inline SourceCapability_1_t1760761964 * get_address_of_Thumbstick_6() { return &___Thumbstick_6; }
	inline void set_Thumbstick_6(SourceCapability_1_t1760761964  value)
	{
		___Thumbstick_6 = value;
	}

	inline static int32_t get_offset_of_Touchpad_7() { return static_cast<int32_t>(offsetof(SourceData_t478863902, ___Touchpad_7)); }
	inline SourceCapability_1_t3578700807  get_Touchpad_7() const { return ___Touchpad_7; }
	inline SourceCapability_1_t3578700807 * get_address_of_Touchpad_7() { return &___Touchpad_7; }
	inline void set_Touchpad_7(SourceCapability_1_t3578700807  value)
	{
		___Touchpad_7 = value;
	}

	inline static int32_t get_offset_of_Select_8() { return static_cast<int32_t>(offsetof(SourceData_t478863902, ___Select_8)); }
	inline SourceCapability_1_t194678023  get_Select_8() const { return ___Select_8; }
	inline SourceCapability_1_t194678023 * get_address_of_Select_8() { return &___Select_8; }
	inline void set_Select_8(SourceCapability_1_t194678023  value)
	{
		___Select_8 = value;
	}

	inline static int32_t get_offset_of_Grasp_9() { return static_cast<int32_t>(offsetof(SourceData_t478863902, ___Grasp_9)); }
	inline SourceCapability_1_t1574070414  get_Grasp_9() const { return ___Grasp_9; }
	inline SourceCapability_1_t1574070414 * get_address_of_Grasp_9() { return &___Grasp_9; }
	inline void set_Grasp_9(SourceCapability_1_t1574070414  value)
	{
		___Grasp_9 = value;
	}

	inline static int32_t get_offset_of_Menu_10() { return static_cast<int32_t>(offsetof(SourceData_t478863902, ___Menu_10)); }
	inline SourceCapability_1_t1574070414  get_Menu_10() const { return ___Menu_10; }
	inline SourceCapability_1_t1574070414 * get_address_of_Menu_10() { return &___Menu_10; }
	inline void set_Menu_10(SourceCapability_1_t1574070414  value)
	{
		___Menu_10 = value;
	}

	inline static int32_t get_offset_of_ThumbstickPositionUpdated_11() { return static_cast<int32_t>(offsetof(SourceData_t478863902, ___ThumbstickPositionUpdated_11)); }
	inline bool get_ThumbstickPositionUpdated_11() const { return ___ThumbstickPositionUpdated_11; }
	inline bool* get_address_of_ThumbstickPositionUpdated_11() { return &___ThumbstickPositionUpdated_11; }
	inline void set_ThumbstickPositionUpdated_11(bool value)
	{
		___ThumbstickPositionUpdated_11 = value;
	}

	inline static int32_t get_offset_of_TouchpadPositionUpdated_12() { return static_cast<int32_t>(offsetof(SourceData_t478863902, ___TouchpadPositionUpdated_12)); }
	inline bool get_TouchpadPositionUpdated_12() const { return ___TouchpadPositionUpdated_12; }
	inline bool* get_address_of_TouchpadPositionUpdated_12() { return &___TouchpadPositionUpdated_12; }
	inline void set_TouchpadPositionUpdated_12(bool value)
	{
		___TouchpadPositionUpdated_12 = value;
	}

	inline static int32_t get_offset_of_TouchpadTouchedUpdated_13() { return static_cast<int32_t>(offsetof(SourceData_t478863902, ___TouchpadTouchedUpdated_13)); }
	inline bool get_TouchpadTouchedUpdated_13() const { return ___TouchpadTouchedUpdated_13; }
	inline bool* get_address_of_TouchpadTouchedUpdated_13() { return &___TouchpadTouchedUpdated_13; }
	inline void set_TouchpadTouchedUpdated_13(bool value)
	{
		___TouchpadTouchedUpdated_13 = value;
	}

	inline static int32_t get_offset_of_PositionUpdated_14() { return static_cast<int32_t>(offsetof(SourceData_t478863902, ___PositionUpdated_14)); }
	inline bool get_PositionUpdated_14() const { return ___PositionUpdated_14; }
	inline bool* get_address_of_PositionUpdated_14() { return &___PositionUpdated_14; }
	inline void set_PositionUpdated_14(bool value)
	{
		___PositionUpdated_14 = value;
	}

	inline static int32_t get_offset_of_RotationUpdated_15() { return static_cast<int32_t>(offsetof(SourceData_t478863902, ___RotationUpdated_15)); }
	inline bool get_RotationUpdated_15() const { return ___RotationUpdated_15; }
	inline bool* get_address_of_RotationUpdated_15() { return &___RotationUpdated_15; }
	inline void set_RotationUpdated_15(bool value)
	{
		___RotationUpdated_15 = value;
	}

	inline static int32_t get_offset_of_SelectPressedAmountUpdated_16() { return static_cast<int32_t>(offsetof(SourceData_t478863902, ___SelectPressedAmountUpdated_16)); }
	inline bool get_SelectPressedAmountUpdated_16() const { return ___SelectPressedAmountUpdated_16; }
	inline bool* get_address_of_SelectPressedAmountUpdated_16() { return &___SelectPressedAmountUpdated_16; }
	inline void set_SelectPressedAmountUpdated_16(bool value)
	{
		___SelectPressedAmountUpdated_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCEDATA_T478863902_H
#ifndef XBOXCONTROLLEREVENTDATA_T2888026507_H
#define XBOXCONTROLLEREVENTDATA_T2888026507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.XboxControllerEventData
struct  XboxControllerEventData_t2888026507  : public GamePadEventData_t912895835
{
public:
	// System.Single HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxLeftStickHorizontalAxis>k__BackingField
	float ___U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_7;
	// System.Single HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxLeftStickVerticalAxis>k__BackingField
	float ___U3CXboxLeftStickVerticalAxisU3Ek__BackingField_8;
	// System.Single HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxRightStickHorizontalAxis>k__BackingField
	float ___U3CXboxRightStickHorizontalAxisU3Ek__BackingField_9;
	// System.Single HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxRightStickVerticalAxis>k__BackingField
	float ___U3CXboxRightStickVerticalAxisU3Ek__BackingField_10;
	// System.Single HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxDpadHorizontalAxis>k__BackingField
	float ___U3CXboxDpadHorizontalAxisU3Ek__BackingField_11;
	// System.Single HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxDpadVerticalAxis>k__BackingField
	float ___U3CXboxDpadVerticalAxisU3Ek__BackingField_12;
	// System.Single HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxLeftTriggerAxis>k__BackingField
	float ___U3CXboxLeftTriggerAxisU3Ek__BackingField_13;
	// System.Single HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxRightTriggerAxis>k__BackingField
	float ___U3CXboxRightTriggerAxisU3Ek__BackingField_14;
	// System.Single HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxSharedTriggerAxis>k__BackingField
	float ___U3CXboxSharedTriggerAxisU3Ek__BackingField_15;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxA_Pressed>k__BackingField
	bool ___U3CXboxA_PressedU3Ek__BackingField_16;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxB_Pressed>k__BackingField
	bool ___U3CXboxB_PressedU3Ek__BackingField_17;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxX_Pressed>k__BackingField
	bool ___U3CXboxX_PressedU3Ek__BackingField_18;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxY_Pressed>k__BackingField
	bool ___U3CXboxY_PressedU3Ek__BackingField_19;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxLeftBumper_Pressed>k__BackingField
	bool ___U3CXboxLeftBumper_PressedU3Ek__BackingField_20;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxRightBumper_Pressed>k__BackingField
	bool ___U3CXboxRightBumper_PressedU3Ek__BackingField_21;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxLeftStick_Pressed>k__BackingField
	bool ___U3CXboxLeftStick_PressedU3Ek__BackingField_22;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxRightStick_Pressed>k__BackingField
	bool ___U3CXboxRightStick_PressedU3Ek__BackingField_23;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxView_Pressed>k__BackingField
	bool ___U3CXboxView_PressedU3Ek__BackingField_24;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxMenu_Pressed>k__BackingField
	bool ___U3CXboxMenu_PressedU3Ek__BackingField_25;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxA_Up>k__BackingField
	bool ___U3CXboxA_UpU3Ek__BackingField_26;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxB_Up>k__BackingField
	bool ___U3CXboxB_UpU3Ek__BackingField_27;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxX_Up>k__BackingField
	bool ___U3CXboxX_UpU3Ek__BackingField_28;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxY_Up>k__BackingField
	bool ___U3CXboxY_UpU3Ek__BackingField_29;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxLeftBumper_Up>k__BackingField
	bool ___U3CXboxLeftBumper_UpU3Ek__BackingField_30;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxRightBumper_Up>k__BackingField
	bool ___U3CXboxRightBumper_UpU3Ek__BackingField_31;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxLeftStick_Up>k__BackingField
	bool ___U3CXboxLeftStick_UpU3Ek__BackingField_32;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxRightStick_Up>k__BackingField
	bool ___U3CXboxRightStick_UpU3Ek__BackingField_33;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxView_Up>k__BackingField
	bool ___U3CXboxView_UpU3Ek__BackingField_34;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxMenu_Up>k__BackingField
	bool ___U3CXboxMenu_UpU3Ek__BackingField_35;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxA_Down>k__BackingField
	bool ___U3CXboxA_DownU3Ek__BackingField_36;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxB_Down>k__BackingField
	bool ___U3CXboxB_DownU3Ek__BackingField_37;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxX_Down>k__BackingField
	bool ___U3CXboxX_DownU3Ek__BackingField_38;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxY_Down>k__BackingField
	bool ___U3CXboxY_DownU3Ek__BackingField_39;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxLeftBumper_Down>k__BackingField
	bool ___U3CXboxLeftBumper_DownU3Ek__BackingField_40;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxRightBumper_Down>k__BackingField
	bool ___U3CXboxRightBumper_DownU3Ek__BackingField_41;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxLeftStick_Down>k__BackingField
	bool ___U3CXboxLeftStick_DownU3Ek__BackingField_42;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxRightStick_Down>k__BackingField
	bool ___U3CXboxRightStick_DownU3Ek__BackingField_43;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxView_Down>k__BackingField
	bool ___U3CXboxView_DownU3Ek__BackingField_44;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerEventData::<XboxMenu_Down>k__BackingField
	bool ___U3CXboxMenu_DownU3Ek__BackingField_45;

public:
	inline static int32_t get_offset_of_U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_7)); }
	inline float get_U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_7() const { return ___U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_7; }
	inline float* get_address_of_U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_7() { return &___U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_7; }
	inline void set_U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_7(float value)
	{
		___U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CXboxLeftStickVerticalAxisU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxLeftStickVerticalAxisU3Ek__BackingField_8)); }
	inline float get_U3CXboxLeftStickVerticalAxisU3Ek__BackingField_8() const { return ___U3CXboxLeftStickVerticalAxisU3Ek__BackingField_8; }
	inline float* get_address_of_U3CXboxLeftStickVerticalAxisU3Ek__BackingField_8() { return &___U3CXboxLeftStickVerticalAxisU3Ek__BackingField_8; }
	inline void set_U3CXboxLeftStickVerticalAxisU3Ek__BackingField_8(float value)
	{
		___U3CXboxLeftStickVerticalAxisU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CXboxRightStickHorizontalAxisU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxRightStickHorizontalAxisU3Ek__BackingField_9)); }
	inline float get_U3CXboxRightStickHorizontalAxisU3Ek__BackingField_9() const { return ___U3CXboxRightStickHorizontalAxisU3Ek__BackingField_9; }
	inline float* get_address_of_U3CXboxRightStickHorizontalAxisU3Ek__BackingField_9() { return &___U3CXboxRightStickHorizontalAxisU3Ek__BackingField_9; }
	inline void set_U3CXboxRightStickHorizontalAxisU3Ek__BackingField_9(float value)
	{
		___U3CXboxRightStickHorizontalAxisU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CXboxRightStickVerticalAxisU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxRightStickVerticalAxisU3Ek__BackingField_10)); }
	inline float get_U3CXboxRightStickVerticalAxisU3Ek__BackingField_10() const { return ___U3CXboxRightStickVerticalAxisU3Ek__BackingField_10; }
	inline float* get_address_of_U3CXboxRightStickVerticalAxisU3Ek__BackingField_10() { return &___U3CXboxRightStickVerticalAxisU3Ek__BackingField_10; }
	inline void set_U3CXboxRightStickVerticalAxisU3Ek__BackingField_10(float value)
	{
		___U3CXboxRightStickVerticalAxisU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CXboxDpadHorizontalAxisU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxDpadHorizontalAxisU3Ek__BackingField_11)); }
	inline float get_U3CXboxDpadHorizontalAxisU3Ek__BackingField_11() const { return ___U3CXboxDpadHorizontalAxisU3Ek__BackingField_11; }
	inline float* get_address_of_U3CXboxDpadHorizontalAxisU3Ek__BackingField_11() { return &___U3CXboxDpadHorizontalAxisU3Ek__BackingField_11; }
	inline void set_U3CXboxDpadHorizontalAxisU3Ek__BackingField_11(float value)
	{
		___U3CXboxDpadHorizontalAxisU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CXboxDpadVerticalAxisU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxDpadVerticalAxisU3Ek__BackingField_12)); }
	inline float get_U3CXboxDpadVerticalAxisU3Ek__BackingField_12() const { return ___U3CXboxDpadVerticalAxisU3Ek__BackingField_12; }
	inline float* get_address_of_U3CXboxDpadVerticalAxisU3Ek__BackingField_12() { return &___U3CXboxDpadVerticalAxisU3Ek__BackingField_12; }
	inline void set_U3CXboxDpadVerticalAxisU3Ek__BackingField_12(float value)
	{
		___U3CXboxDpadVerticalAxisU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CXboxLeftTriggerAxisU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxLeftTriggerAxisU3Ek__BackingField_13)); }
	inline float get_U3CXboxLeftTriggerAxisU3Ek__BackingField_13() const { return ___U3CXboxLeftTriggerAxisU3Ek__BackingField_13; }
	inline float* get_address_of_U3CXboxLeftTriggerAxisU3Ek__BackingField_13() { return &___U3CXboxLeftTriggerAxisU3Ek__BackingField_13; }
	inline void set_U3CXboxLeftTriggerAxisU3Ek__BackingField_13(float value)
	{
		___U3CXboxLeftTriggerAxisU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CXboxRightTriggerAxisU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxRightTriggerAxisU3Ek__BackingField_14)); }
	inline float get_U3CXboxRightTriggerAxisU3Ek__BackingField_14() const { return ___U3CXboxRightTriggerAxisU3Ek__BackingField_14; }
	inline float* get_address_of_U3CXboxRightTriggerAxisU3Ek__BackingField_14() { return &___U3CXboxRightTriggerAxisU3Ek__BackingField_14; }
	inline void set_U3CXboxRightTriggerAxisU3Ek__BackingField_14(float value)
	{
		___U3CXboxRightTriggerAxisU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CXboxSharedTriggerAxisU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxSharedTriggerAxisU3Ek__BackingField_15)); }
	inline float get_U3CXboxSharedTriggerAxisU3Ek__BackingField_15() const { return ___U3CXboxSharedTriggerAxisU3Ek__BackingField_15; }
	inline float* get_address_of_U3CXboxSharedTriggerAxisU3Ek__BackingField_15() { return &___U3CXboxSharedTriggerAxisU3Ek__BackingField_15; }
	inline void set_U3CXboxSharedTriggerAxisU3Ek__BackingField_15(float value)
	{
		___U3CXboxSharedTriggerAxisU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CXboxA_PressedU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxA_PressedU3Ek__BackingField_16)); }
	inline bool get_U3CXboxA_PressedU3Ek__BackingField_16() const { return ___U3CXboxA_PressedU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CXboxA_PressedU3Ek__BackingField_16() { return &___U3CXboxA_PressedU3Ek__BackingField_16; }
	inline void set_U3CXboxA_PressedU3Ek__BackingField_16(bool value)
	{
		___U3CXboxA_PressedU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CXboxB_PressedU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxB_PressedU3Ek__BackingField_17)); }
	inline bool get_U3CXboxB_PressedU3Ek__BackingField_17() const { return ___U3CXboxB_PressedU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CXboxB_PressedU3Ek__BackingField_17() { return &___U3CXboxB_PressedU3Ek__BackingField_17; }
	inline void set_U3CXboxB_PressedU3Ek__BackingField_17(bool value)
	{
		___U3CXboxB_PressedU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CXboxX_PressedU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxX_PressedU3Ek__BackingField_18)); }
	inline bool get_U3CXboxX_PressedU3Ek__BackingField_18() const { return ___U3CXboxX_PressedU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CXboxX_PressedU3Ek__BackingField_18() { return &___U3CXboxX_PressedU3Ek__BackingField_18; }
	inline void set_U3CXboxX_PressedU3Ek__BackingField_18(bool value)
	{
		___U3CXboxX_PressedU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CXboxY_PressedU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxY_PressedU3Ek__BackingField_19)); }
	inline bool get_U3CXboxY_PressedU3Ek__BackingField_19() const { return ___U3CXboxY_PressedU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CXboxY_PressedU3Ek__BackingField_19() { return &___U3CXboxY_PressedU3Ek__BackingField_19; }
	inline void set_U3CXboxY_PressedU3Ek__BackingField_19(bool value)
	{
		___U3CXboxY_PressedU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CXboxLeftBumper_PressedU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxLeftBumper_PressedU3Ek__BackingField_20)); }
	inline bool get_U3CXboxLeftBumper_PressedU3Ek__BackingField_20() const { return ___U3CXboxLeftBumper_PressedU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CXboxLeftBumper_PressedU3Ek__BackingField_20() { return &___U3CXboxLeftBumper_PressedU3Ek__BackingField_20; }
	inline void set_U3CXboxLeftBumper_PressedU3Ek__BackingField_20(bool value)
	{
		___U3CXboxLeftBumper_PressedU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CXboxRightBumper_PressedU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxRightBumper_PressedU3Ek__BackingField_21)); }
	inline bool get_U3CXboxRightBumper_PressedU3Ek__BackingField_21() const { return ___U3CXboxRightBumper_PressedU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CXboxRightBumper_PressedU3Ek__BackingField_21() { return &___U3CXboxRightBumper_PressedU3Ek__BackingField_21; }
	inline void set_U3CXboxRightBumper_PressedU3Ek__BackingField_21(bool value)
	{
		___U3CXboxRightBumper_PressedU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CXboxLeftStick_PressedU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxLeftStick_PressedU3Ek__BackingField_22)); }
	inline bool get_U3CXboxLeftStick_PressedU3Ek__BackingField_22() const { return ___U3CXboxLeftStick_PressedU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CXboxLeftStick_PressedU3Ek__BackingField_22() { return &___U3CXboxLeftStick_PressedU3Ek__BackingField_22; }
	inline void set_U3CXboxLeftStick_PressedU3Ek__BackingField_22(bool value)
	{
		___U3CXboxLeftStick_PressedU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CXboxRightStick_PressedU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxRightStick_PressedU3Ek__BackingField_23)); }
	inline bool get_U3CXboxRightStick_PressedU3Ek__BackingField_23() const { return ___U3CXboxRightStick_PressedU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CXboxRightStick_PressedU3Ek__BackingField_23() { return &___U3CXboxRightStick_PressedU3Ek__BackingField_23; }
	inline void set_U3CXboxRightStick_PressedU3Ek__BackingField_23(bool value)
	{
		___U3CXboxRightStick_PressedU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CXboxView_PressedU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxView_PressedU3Ek__BackingField_24)); }
	inline bool get_U3CXboxView_PressedU3Ek__BackingField_24() const { return ___U3CXboxView_PressedU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CXboxView_PressedU3Ek__BackingField_24() { return &___U3CXboxView_PressedU3Ek__BackingField_24; }
	inline void set_U3CXboxView_PressedU3Ek__BackingField_24(bool value)
	{
		___U3CXboxView_PressedU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CXboxMenu_PressedU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxMenu_PressedU3Ek__BackingField_25)); }
	inline bool get_U3CXboxMenu_PressedU3Ek__BackingField_25() const { return ___U3CXboxMenu_PressedU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CXboxMenu_PressedU3Ek__BackingField_25() { return &___U3CXboxMenu_PressedU3Ek__BackingField_25; }
	inline void set_U3CXboxMenu_PressedU3Ek__BackingField_25(bool value)
	{
		___U3CXboxMenu_PressedU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CXboxA_UpU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxA_UpU3Ek__BackingField_26)); }
	inline bool get_U3CXboxA_UpU3Ek__BackingField_26() const { return ___U3CXboxA_UpU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CXboxA_UpU3Ek__BackingField_26() { return &___U3CXboxA_UpU3Ek__BackingField_26; }
	inline void set_U3CXboxA_UpU3Ek__BackingField_26(bool value)
	{
		___U3CXboxA_UpU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CXboxB_UpU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxB_UpU3Ek__BackingField_27)); }
	inline bool get_U3CXboxB_UpU3Ek__BackingField_27() const { return ___U3CXboxB_UpU3Ek__BackingField_27; }
	inline bool* get_address_of_U3CXboxB_UpU3Ek__BackingField_27() { return &___U3CXboxB_UpU3Ek__BackingField_27; }
	inline void set_U3CXboxB_UpU3Ek__BackingField_27(bool value)
	{
		___U3CXboxB_UpU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CXboxX_UpU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxX_UpU3Ek__BackingField_28)); }
	inline bool get_U3CXboxX_UpU3Ek__BackingField_28() const { return ___U3CXboxX_UpU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CXboxX_UpU3Ek__BackingField_28() { return &___U3CXboxX_UpU3Ek__BackingField_28; }
	inline void set_U3CXboxX_UpU3Ek__BackingField_28(bool value)
	{
		___U3CXboxX_UpU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CXboxY_UpU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxY_UpU3Ek__BackingField_29)); }
	inline bool get_U3CXboxY_UpU3Ek__BackingField_29() const { return ___U3CXboxY_UpU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CXboxY_UpU3Ek__BackingField_29() { return &___U3CXboxY_UpU3Ek__BackingField_29; }
	inline void set_U3CXboxY_UpU3Ek__BackingField_29(bool value)
	{
		___U3CXboxY_UpU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CXboxLeftBumper_UpU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxLeftBumper_UpU3Ek__BackingField_30)); }
	inline bool get_U3CXboxLeftBumper_UpU3Ek__BackingField_30() const { return ___U3CXboxLeftBumper_UpU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CXboxLeftBumper_UpU3Ek__BackingField_30() { return &___U3CXboxLeftBumper_UpU3Ek__BackingField_30; }
	inline void set_U3CXboxLeftBumper_UpU3Ek__BackingField_30(bool value)
	{
		___U3CXboxLeftBumper_UpU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CXboxRightBumper_UpU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxRightBumper_UpU3Ek__BackingField_31)); }
	inline bool get_U3CXboxRightBumper_UpU3Ek__BackingField_31() const { return ___U3CXboxRightBumper_UpU3Ek__BackingField_31; }
	inline bool* get_address_of_U3CXboxRightBumper_UpU3Ek__BackingField_31() { return &___U3CXboxRightBumper_UpU3Ek__BackingField_31; }
	inline void set_U3CXboxRightBumper_UpU3Ek__BackingField_31(bool value)
	{
		___U3CXboxRightBumper_UpU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CXboxLeftStick_UpU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxLeftStick_UpU3Ek__BackingField_32)); }
	inline bool get_U3CXboxLeftStick_UpU3Ek__BackingField_32() const { return ___U3CXboxLeftStick_UpU3Ek__BackingField_32; }
	inline bool* get_address_of_U3CXboxLeftStick_UpU3Ek__BackingField_32() { return &___U3CXboxLeftStick_UpU3Ek__BackingField_32; }
	inline void set_U3CXboxLeftStick_UpU3Ek__BackingField_32(bool value)
	{
		___U3CXboxLeftStick_UpU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CXboxRightStick_UpU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxRightStick_UpU3Ek__BackingField_33)); }
	inline bool get_U3CXboxRightStick_UpU3Ek__BackingField_33() const { return ___U3CXboxRightStick_UpU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CXboxRightStick_UpU3Ek__BackingField_33() { return &___U3CXboxRightStick_UpU3Ek__BackingField_33; }
	inline void set_U3CXboxRightStick_UpU3Ek__BackingField_33(bool value)
	{
		___U3CXboxRightStick_UpU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CXboxView_UpU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxView_UpU3Ek__BackingField_34)); }
	inline bool get_U3CXboxView_UpU3Ek__BackingField_34() const { return ___U3CXboxView_UpU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CXboxView_UpU3Ek__BackingField_34() { return &___U3CXboxView_UpU3Ek__BackingField_34; }
	inline void set_U3CXboxView_UpU3Ek__BackingField_34(bool value)
	{
		___U3CXboxView_UpU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CXboxMenu_UpU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxMenu_UpU3Ek__BackingField_35)); }
	inline bool get_U3CXboxMenu_UpU3Ek__BackingField_35() const { return ___U3CXboxMenu_UpU3Ek__BackingField_35; }
	inline bool* get_address_of_U3CXboxMenu_UpU3Ek__BackingField_35() { return &___U3CXboxMenu_UpU3Ek__BackingField_35; }
	inline void set_U3CXboxMenu_UpU3Ek__BackingField_35(bool value)
	{
		___U3CXboxMenu_UpU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CXboxA_DownU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxA_DownU3Ek__BackingField_36)); }
	inline bool get_U3CXboxA_DownU3Ek__BackingField_36() const { return ___U3CXboxA_DownU3Ek__BackingField_36; }
	inline bool* get_address_of_U3CXboxA_DownU3Ek__BackingField_36() { return &___U3CXboxA_DownU3Ek__BackingField_36; }
	inline void set_U3CXboxA_DownU3Ek__BackingField_36(bool value)
	{
		___U3CXboxA_DownU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CXboxB_DownU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxB_DownU3Ek__BackingField_37)); }
	inline bool get_U3CXboxB_DownU3Ek__BackingField_37() const { return ___U3CXboxB_DownU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CXboxB_DownU3Ek__BackingField_37() { return &___U3CXboxB_DownU3Ek__BackingField_37; }
	inline void set_U3CXboxB_DownU3Ek__BackingField_37(bool value)
	{
		___U3CXboxB_DownU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3CXboxX_DownU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxX_DownU3Ek__BackingField_38)); }
	inline bool get_U3CXboxX_DownU3Ek__BackingField_38() const { return ___U3CXboxX_DownU3Ek__BackingField_38; }
	inline bool* get_address_of_U3CXboxX_DownU3Ek__BackingField_38() { return &___U3CXboxX_DownU3Ek__BackingField_38; }
	inline void set_U3CXboxX_DownU3Ek__BackingField_38(bool value)
	{
		___U3CXboxX_DownU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_U3CXboxY_DownU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxY_DownU3Ek__BackingField_39)); }
	inline bool get_U3CXboxY_DownU3Ek__BackingField_39() const { return ___U3CXboxY_DownU3Ek__BackingField_39; }
	inline bool* get_address_of_U3CXboxY_DownU3Ek__BackingField_39() { return &___U3CXboxY_DownU3Ek__BackingField_39; }
	inline void set_U3CXboxY_DownU3Ek__BackingField_39(bool value)
	{
		___U3CXboxY_DownU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_U3CXboxLeftBumper_DownU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxLeftBumper_DownU3Ek__BackingField_40)); }
	inline bool get_U3CXboxLeftBumper_DownU3Ek__BackingField_40() const { return ___U3CXboxLeftBumper_DownU3Ek__BackingField_40; }
	inline bool* get_address_of_U3CXboxLeftBumper_DownU3Ek__BackingField_40() { return &___U3CXboxLeftBumper_DownU3Ek__BackingField_40; }
	inline void set_U3CXboxLeftBumper_DownU3Ek__BackingField_40(bool value)
	{
		___U3CXboxLeftBumper_DownU3Ek__BackingField_40 = value;
	}

	inline static int32_t get_offset_of_U3CXboxRightBumper_DownU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxRightBumper_DownU3Ek__BackingField_41)); }
	inline bool get_U3CXboxRightBumper_DownU3Ek__BackingField_41() const { return ___U3CXboxRightBumper_DownU3Ek__BackingField_41; }
	inline bool* get_address_of_U3CXboxRightBumper_DownU3Ek__BackingField_41() { return &___U3CXboxRightBumper_DownU3Ek__BackingField_41; }
	inline void set_U3CXboxRightBumper_DownU3Ek__BackingField_41(bool value)
	{
		___U3CXboxRightBumper_DownU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3CXboxLeftStick_DownU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxLeftStick_DownU3Ek__BackingField_42)); }
	inline bool get_U3CXboxLeftStick_DownU3Ek__BackingField_42() const { return ___U3CXboxLeftStick_DownU3Ek__BackingField_42; }
	inline bool* get_address_of_U3CXboxLeftStick_DownU3Ek__BackingField_42() { return &___U3CXboxLeftStick_DownU3Ek__BackingField_42; }
	inline void set_U3CXboxLeftStick_DownU3Ek__BackingField_42(bool value)
	{
		___U3CXboxLeftStick_DownU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_U3CXboxRightStick_DownU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxRightStick_DownU3Ek__BackingField_43)); }
	inline bool get_U3CXboxRightStick_DownU3Ek__BackingField_43() const { return ___U3CXboxRightStick_DownU3Ek__BackingField_43; }
	inline bool* get_address_of_U3CXboxRightStick_DownU3Ek__BackingField_43() { return &___U3CXboxRightStick_DownU3Ek__BackingField_43; }
	inline void set_U3CXboxRightStick_DownU3Ek__BackingField_43(bool value)
	{
		___U3CXboxRightStick_DownU3Ek__BackingField_43 = value;
	}

	inline static int32_t get_offset_of_U3CXboxView_DownU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxView_DownU3Ek__BackingField_44)); }
	inline bool get_U3CXboxView_DownU3Ek__BackingField_44() const { return ___U3CXboxView_DownU3Ek__BackingField_44; }
	inline bool* get_address_of_U3CXboxView_DownU3Ek__BackingField_44() { return &___U3CXboxView_DownU3Ek__BackingField_44; }
	inline void set_U3CXboxView_DownU3Ek__BackingField_44(bool value)
	{
		___U3CXboxView_DownU3Ek__BackingField_44 = value;
	}

	inline static int32_t get_offset_of_U3CXboxMenu_DownU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(XboxControllerEventData_t2888026507, ___U3CXboxMenu_DownU3Ek__BackingField_45)); }
	inline bool get_U3CXboxMenu_DownU3Ek__BackingField_45() const { return ___U3CXboxMenu_DownU3Ek__BackingField_45; }
	inline bool* get_address_of_U3CXboxMenu_DownU3Ek__BackingField_45() { return &___U3CXboxMenu_DownU3Ek__BackingField_45; }
	inline void set_U3CXboxMenu_DownU3Ek__BackingField_45(bool value)
	{
		___U3CXboxMenu_DownU3Ek__BackingField_45 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOXCONTROLLEREVENTDATA_T2888026507_H
#ifndef MONOBEHAVIOUR_T1158329972_H
#define MONOBEHAVIOUR_T1158329972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1158329972  : public Behaviour_t955675639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1158329972_H
#ifndef SINGLETON_1_T2425331302_H
#define SINGLETON_1_T2425331302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.Singleton`1<HoloToolkit.Unity.InputModule.InputManager>
struct  Singleton_1_t2425331302  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct Singleton_1_t2425331302_StaticFields
{
public:
	// T HoloToolkit.Unity.Singleton`1::instance
	InputManager_t1871732949 * ___instance_2;
	// System.Boolean HoloToolkit.Unity.Singleton`1::searchForInstance
	bool ___searchForInstance_3;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t2425331302_StaticFields, ___instance_2)); }
	inline InputManager_t1871732949 * get_instance_2() const { return ___instance_2; }
	inline InputManager_t1871732949 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(InputManager_t1871732949 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___instance_2), value);
	}

	inline static int32_t get_offset_of_searchForInstance_3() { return static_cast<int32_t>(offsetof(Singleton_1_t2425331302_StaticFields, ___searchForInstance_3)); }
	inline bool get_searchForInstance_3() const { return ___searchForInstance_3; }
	inline bool* get_address_of_searchForInstance_3() { return &___searchForInstance_3; }
	inline void set_searchForInstance_3(bool value)
	{
		___searchForInstance_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T2425331302_H
#ifndef XBOXCONTROLLERHANDLERBASE_T610195094_H
#define XBOXCONTROLLERHANDLERBASE_T610195094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.XboxControllerHandlerBase
struct  XboxControllerHandlerBase_t610195094  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerHandlerBase::IsGlobalListener
	bool ___IsGlobalListener_2;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerHandlerBase::GamePadName
	String_t* ___GamePadName_3;

public:
	inline static int32_t get_offset_of_IsGlobalListener_2() { return static_cast<int32_t>(offsetof(XboxControllerHandlerBase_t610195094, ___IsGlobalListener_2)); }
	inline bool get_IsGlobalListener_2() const { return ___IsGlobalListener_2; }
	inline bool* get_address_of_IsGlobalListener_2() { return &___IsGlobalListener_2; }
	inline void set_IsGlobalListener_2(bool value)
	{
		___IsGlobalListener_2 = value;
	}

	inline static int32_t get_offset_of_GamePadName_3() { return static_cast<int32_t>(offsetof(XboxControllerHandlerBase_t610195094, ___GamePadName_3)); }
	inline String_t* get_GamePadName_3() const { return ___GamePadName_3; }
	inline String_t** get_address_of_GamePadName_3() { return &___GamePadName_3; }
	inline void set_GamePadName_3(String_t* value)
	{
		___GamePadName_3 = value;
		Il2CppCodeGenWriteBarrier((&___GamePadName_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOXCONTROLLERHANDLERBASE_T610195094_H
#ifndef SINGLETON_1_T4234479742_H
#define SINGLETON_1_T4234479742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.Singleton`1<HoloToolkit.Unity.InputModule.HandGuidance>
struct  Singleton_1_t4234479742  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct Singleton_1_t4234479742_StaticFields
{
public:
	// T HoloToolkit.Unity.Singleton`1::instance
	HandGuidance_t3680881389 * ___instance_2;
	// System.Boolean HoloToolkit.Unity.Singleton`1::searchForInstance
	bool ___searchForInstance_3;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t4234479742_StaticFields, ___instance_2)); }
	inline HandGuidance_t3680881389 * get_instance_2() const { return ___instance_2; }
	inline HandGuidance_t3680881389 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(HandGuidance_t3680881389 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___instance_2), value);
	}

	inline static int32_t get_offset_of_searchForInstance_3() { return static_cast<int32_t>(offsetof(Singleton_1_t4234479742_StaticFields, ___searchForInstance_3)); }
	inline bool get_searchForInstance_3() const { return ___searchForInstance_3; }
	inline bool* get_address_of_searchForInstance_3() { return &___searchForInstance_3; }
	inline void set_searchForInstance_3(bool value)
	{
		___searchForInstance_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T4234479742_H
#ifndef SINGLETON_1_T2652934122_H
#define SINGLETON_1_T2652934122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.Singleton`1<HoloToolkit.Unity.InputModule.MixedRealityCameraManager>
struct  Singleton_1_t2652934122  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct Singleton_1_t2652934122_StaticFields
{
public:
	// T HoloToolkit.Unity.Singleton`1::instance
	MixedRealityCameraManager_t2099335769 * ___instance_2;
	// System.Boolean HoloToolkit.Unity.Singleton`1::searchForInstance
	bool ___searchForInstance_3;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t2652934122_StaticFields, ___instance_2)); }
	inline MixedRealityCameraManager_t2099335769 * get_instance_2() const { return ___instance_2; }
	inline MixedRealityCameraManager_t2099335769 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(MixedRealityCameraManager_t2099335769 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___instance_2), value);
	}

	inline static int32_t get_offset_of_searchForInstance_3() { return static_cast<int32_t>(offsetof(Singleton_1_t2652934122_StaticFields, ___searchForInstance_3)); }
	inline bool get_searchForInstance_3() const { return ___searchForInstance_3; }
	inline bool* get_address_of_searchForInstance_3() { return &___searchForInstance_3; }
	inline void set_searchForInstance_3(bool value)
	{
		___searchForInstance_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T2652934122_H
#ifndef SINGLETON_1_T3213785241_H
#define SINGLETON_1_T3213785241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.Singleton`1<HoloToolkit.Unity.InputModule.KeyboardManager>
struct  Singleton_1_t3213785241  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct Singleton_1_t3213785241_StaticFields
{
public:
	// T HoloToolkit.Unity.Singleton`1::instance
	KeyboardManager_t2660186888 * ___instance_2;
	// System.Boolean HoloToolkit.Unity.Singleton`1::searchForInstance
	bool ___searchForInstance_3;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t3213785241_StaticFields, ___instance_2)); }
	inline KeyboardManager_t2660186888 * get_instance_2() const { return ___instance_2; }
	inline KeyboardManager_t2660186888 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(KeyboardManager_t2660186888 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___instance_2), value);
	}

	inline static int32_t get_offset_of_searchForInstance_3() { return static_cast<int32_t>(offsetof(Singleton_1_t3213785241_StaticFields, ___searchForInstance_3)); }
	inline bool get_searchForInstance_3() const { return ___searchForInstance_3; }
	inline bool* get_address_of_searchForInstance_3() { return &___searchForInstance_3; }
	inline void set_searchForInstance_3(bool value)
	{
		___searchForInstance_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T3213785241_H
#ifndef CUSTOMINPUTSELECTOR_T3444770302_H
#define CUSTOMINPUTSELECTOR_T3444770302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.CustomInputSelector
struct  CustomInputSelector_t3444770302  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputSelector::simulateHandsInEditor
	bool ___simulateHandsInEditor_2;
	// HoloToolkit.Unity.InputModule.CustomInputSelector/InputSourceType HoloToolkit.Unity.InputModule.CustomInputSelector::sourceType
	int32_t ___sourceType_3;
	// HoloToolkit.Unity.InputModule.CustomInputSelector/InputSourceNumber HoloToolkit.Unity.InputModule.CustomInputSelector::sourceNumber
	int32_t ___sourceNumber_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HoloToolkit.Unity.InputModule.CustomInputSelector::Inputs
	List_1_t1125654279 * ___Inputs_5;
	// UnityEngine.GameObject HoloToolkit.Unity.InputModule.CustomInputSelector::mouse
	GameObject_t1756533147 * ___mouse_6;
	// UnityEngine.GameObject HoloToolkit.Unity.InputModule.CustomInputSelector::leftHand
	GameObject_t1756533147 * ___leftHand_7;
	// UnityEngine.GameObject HoloToolkit.Unity.InputModule.CustomInputSelector::rightHand
	GameObject_t1756533147 * ___rightHand_8;

public:
	inline static int32_t get_offset_of_simulateHandsInEditor_2() { return static_cast<int32_t>(offsetof(CustomInputSelector_t3444770302, ___simulateHandsInEditor_2)); }
	inline bool get_simulateHandsInEditor_2() const { return ___simulateHandsInEditor_2; }
	inline bool* get_address_of_simulateHandsInEditor_2() { return &___simulateHandsInEditor_2; }
	inline void set_simulateHandsInEditor_2(bool value)
	{
		___simulateHandsInEditor_2 = value;
	}

	inline static int32_t get_offset_of_sourceType_3() { return static_cast<int32_t>(offsetof(CustomInputSelector_t3444770302, ___sourceType_3)); }
	inline int32_t get_sourceType_3() const { return ___sourceType_3; }
	inline int32_t* get_address_of_sourceType_3() { return &___sourceType_3; }
	inline void set_sourceType_3(int32_t value)
	{
		___sourceType_3 = value;
	}

	inline static int32_t get_offset_of_sourceNumber_4() { return static_cast<int32_t>(offsetof(CustomInputSelector_t3444770302, ___sourceNumber_4)); }
	inline int32_t get_sourceNumber_4() const { return ___sourceNumber_4; }
	inline int32_t* get_address_of_sourceNumber_4() { return &___sourceNumber_4; }
	inline void set_sourceNumber_4(int32_t value)
	{
		___sourceNumber_4 = value;
	}

	inline static int32_t get_offset_of_Inputs_5() { return static_cast<int32_t>(offsetof(CustomInputSelector_t3444770302, ___Inputs_5)); }
	inline List_1_t1125654279 * get_Inputs_5() const { return ___Inputs_5; }
	inline List_1_t1125654279 ** get_address_of_Inputs_5() { return &___Inputs_5; }
	inline void set_Inputs_5(List_1_t1125654279 * value)
	{
		___Inputs_5 = value;
		Il2CppCodeGenWriteBarrier((&___Inputs_5), value);
	}

	inline static int32_t get_offset_of_mouse_6() { return static_cast<int32_t>(offsetof(CustomInputSelector_t3444770302, ___mouse_6)); }
	inline GameObject_t1756533147 * get_mouse_6() const { return ___mouse_6; }
	inline GameObject_t1756533147 ** get_address_of_mouse_6() { return &___mouse_6; }
	inline void set_mouse_6(GameObject_t1756533147 * value)
	{
		___mouse_6 = value;
		Il2CppCodeGenWriteBarrier((&___mouse_6), value);
	}

	inline static int32_t get_offset_of_leftHand_7() { return static_cast<int32_t>(offsetof(CustomInputSelector_t3444770302, ___leftHand_7)); }
	inline GameObject_t1756533147 * get_leftHand_7() const { return ___leftHand_7; }
	inline GameObject_t1756533147 ** get_address_of_leftHand_7() { return &___leftHand_7; }
	inline void set_leftHand_7(GameObject_t1756533147 * value)
	{
		___leftHand_7 = value;
		Il2CppCodeGenWriteBarrier((&___leftHand_7), value);
	}

	inline static int32_t get_offset_of_rightHand_8() { return static_cast<int32_t>(offsetof(CustomInputSelector_t3444770302, ___rightHand_8)); }
	inline GameObject_t1756533147 * get_rightHand_8() const { return ___rightHand_8; }
	inline GameObject_t1756533147 ** get_address_of_rightHand_8() { return &___rightHand_8; }
	inline void set_rightHand_8(GameObject_t1756533147 * value)
	{
		___rightHand_8 = value;
		Il2CppCodeGenWriteBarrier((&___rightHand_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMINPUTSELECTOR_T3444770302_H
#ifndef CUSTOMINPUTCONTROL_T530759532_H
#define CUSTOMINPUTCONTROL_T530759532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.CustomInputControl
struct  CustomInputControl_t530759532  : public MonoBehaviour_t1158329972
{
public:
	// System.Single HoloToolkit.Unity.InputModule.CustomInputControl::ControllerReturnFactor
	float ___ControllerReturnFactor_2;
	// System.Single HoloToolkit.Unity.InputModule.CustomInputControl::ControllerTimeBeforeReturn
	float ___ControllerTimeBeforeReturn_3;
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputControl::UseUnscaledTime
	bool ___UseUnscaledTime_4;
	// HoloToolkit.Unity.InputModule.AxisController HoloToolkit.Unity.InputModule.CustomInputControl::PrimaryAxisTranslateControl
	AxisController_t3747398803 * ___PrimaryAxisTranslateControl_5;
	// HoloToolkit.Unity.InputModule.AxisController HoloToolkit.Unity.InputModule.CustomInputControl::SecondaryAxisTranslateControl
	AxisController_t3747398803 * ___SecondaryAxisTranslateControl_6;
	// HoloToolkit.Unity.InputModule.AxisController HoloToolkit.Unity.InputModule.CustomInputControl::PrimaryAxisRotateControl
	AxisController_t3747398803 * ___PrimaryAxisRotateControl_7;
	// HoloToolkit.Unity.InputModule.AxisController HoloToolkit.Unity.InputModule.CustomInputControl::SecondaryAxisRotateControl
	AxisController_t3747398803 * ___SecondaryAxisRotateControl_8;
	// HoloToolkit.Unity.InputModule.AxisController HoloToolkit.Unity.InputModule.CustomInputControl::TertiaryAxisRotateControl
	AxisController_t3747398803 * ___TertiaryAxisRotateControl_9;
	// HoloToolkit.Unity.InputModule.ButtonController HoloToolkit.Unity.InputModule.CustomInputControl::SelectButtonControl
	ButtonController_t521134000 * ___SelectButtonControl_10;
	// HoloToolkit.Unity.InputModule.ButtonController HoloToolkit.Unity.InputModule.CustomInputControl::MenuButtonControl
	ButtonController_t521134000 * ___MenuButtonControl_11;
	// HoloToolkit.Unity.InputModule.ButtonController HoloToolkit.Unity.InputModule.CustomInputControl::GraspControl
	ButtonController_t521134000 * ___GraspControl_12;
	// HoloToolkit.Unity.InputModule.DebugInteractionSourceState HoloToolkit.Unity.InputModule.CustomInputControl::ControllerSourceState
	DebugInteractionSourceState_t2903268065  ___ControllerSourceState_13;
	// UnityEngine.Color HoloToolkit.Unity.InputModule.CustomInputControl::ActiveControllerColor
	Color_t2020392075  ___ActiveControllerColor_14;
	// UnityEngine.Color HoloToolkit.Unity.InputModule.CustomInputControl::DroppedControllerColor
	Color_t2020392075  ___DroppedControllerColor_15;
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputControl::VisualizeController
	bool ___VisualizeController_16;
	// UnityEngine.GameObject HoloToolkit.Unity.InputModule.CustomInputControl::ControllerVisualizer
	GameObject_t1756533147 * ___ControllerVisualizer_17;
	// UnityEngine.Texture HoloToolkit.Unity.InputModule.CustomInputControl::HandUpTexture
	Texture_t2243626319 * ___HandUpTexture_18;
	// UnityEngine.Texture HoloToolkit.Unity.InputModule.CustomInputControl::HandDownTexture
	Texture_t2243626319 * ___HandDownTexture_19;
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputControl::ShowPointingRay
	bool ___ShowPointingRay_20;
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputControl::<ControllerInView>k__BackingField
	bool ___U3CControllerInViewU3Ek__BackingField_21;
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.CustomInputControl::InitialPosition
	Vector3_t2243707580  ___InitialPosition_22;
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.CustomInputControl::localPosition
	Vector3_t2243707580  ___localPosition_23;
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.CustomInputControl::localRotation
	Vector3_t2243707580  ___localRotation_24;
	// UnityEngine.Renderer HoloToolkit.Unity.InputModule.CustomInputControl::visualRenderer
	Renderer_t257310565 * ___visualRenderer_25;
	// UnityEngine.MaterialPropertyBlock HoloToolkit.Unity.InputModule.CustomInputControl::visualPropertyBlock
	MaterialPropertyBlock_t3303648957 * ___visualPropertyBlock_26;
	// System.Int32 HoloToolkit.Unity.InputModule.CustomInputControl::mainTexId
	int32_t ___mainTexId_27;
	// System.Single HoloToolkit.Unity.InputModule.CustomInputControl::timeBeforeReturn
	float ___timeBeforeReturn_28;

public:
	inline static int32_t get_offset_of_ControllerReturnFactor_2() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___ControllerReturnFactor_2)); }
	inline float get_ControllerReturnFactor_2() const { return ___ControllerReturnFactor_2; }
	inline float* get_address_of_ControllerReturnFactor_2() { return &___ControllerReturnFactor_2; }
	inline void set_ControllerReturnFactor_2(float value)
	{
		___ControllerReturnFactor_2 = value;
	}

	inline static int32_t get_offset_of_ControllerTimeBeforeReturn_3() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___ControllerTimeBeforeReturn_3)); }
	inline float get_ControllerTimeBeforeReturn_3() const { return ___ControllerTimeBeforeReturn_3; }
	inline float* get_address_of_ControllerTimeBeforeReturn_3() { return &___ControllerTimeBeforeReturn_3; }
	inline void set_ControllerTimeBeforeReturn_3(float value)
	{
		___ControllerTimeBeforeReturn_3 = value;
	}

	inline static int32_t get_offset_of_UseUnscaledTime_4() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___UseUnscaledTime_4)); }
	inline bool get_UseUnscaledTime_4() const { return ___UseUnscaledTime_4; }
	inline bool* get_address_of_UseUnscaledTime_4() { return &___UseUnscaledTime_4; }
	inline void set_UseUnscaledTime_4(bool value)
	{
		___UseUnscaledTime_4 = value;
	}

	inline static int32_t get_offset_of_PrimaryAxisTranslateControl_5() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___PrimaryAxisTranslateControl_5)); }
	inline AxisController_t3747398803 * get_PrimaryAxisTranslateControl_5() const { return ___PrimaryAxisTranslateControl_5; }
	inline AxisController_t3747398803 ** get_address_of_PrimaryAxisTranslateControl_5() { return &___PrimaryAxisTranslateControl_5; }
	inline void set_PrimaryAxisTranslateControl_5(AxisController_t3747398803 * value)
	{
		___PrimaryAxisTranslateControl_5 = value;
		Il2CppCodeGenWriteBarrier((&___PrimaryAxisTranslateControl_5), value);
	}

	inline static int32_t get_offset_of_SecondaryAxisTranslateControl_6() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___SecondaryAxisTranslateControl_6)); }
	inline AxisController_t3747398803 * get_SecondaryAxisTranslateControl_6() const { return ___SecondaryAxisTranslateControl_6; }
	inline AxisController_t3747398803 ** get_address_of_SecondaryAxisTranslateControl_6() { return &___SecondaryAxisTranslateControl_6; }
	inline void set_SecondaryAxisTranslateControl_6(AxisController_t3747398803 * value)
	{
		___SecondaryAxisTranslateControl_6 = value;
		Il2CppCodeGenWriteBarrier((&___SecondaryAxisTranslateControl_6), value);
	}

	inline static int32_t get_offset_of_PrimaryAxisRotateControl_7() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___PrimaryAxisRotateControl_7)); }
	inline AxisController_t3747398803 * get_PrimaryAxisRotateControl_7() const { return ___PrimaryAxisRotateControl_7; }
	inline AxisController_t3747398803 ** get_address_of_PrimaryAxisRotateControl_7() { return &___PrimaryAxisRotateControl_7; }
	inline void set_PrimaryAxisRotateControl_7(AxisController_t3747398803 * value)
	{
		___PrimaryAxisRotateControl_7 = value;
		Il2CppCodeGenWriteBarrier((&___PrimaryAxisRotateControl_7), value);
	}

	inline static int32_t get_offset_of_SecondaryAxisRotateControl_8() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___SecondaryAxisRotateControl_8)); }
	inline AxisController_t3747398803 * get_SecondaryAxisRotateControl_8() const { return ___SecondaryAxisRotateControl_8; }
	inline AxisController_t3747398803 ** get_address_of_SecondaryAxisRotateControl_8() { return &___SecondaryAxisRotateControl_8; }
	inline void set_SecondaryAxisRotateControl_8(AxisController_t3747398803 * value)
	{
		___SecondaryAxisRotateControl_8 = value;
		Il2CppCodeGenWriteBarrier((&___SecondaryAxisRotateControl_8), value);
	}

	inline static int32_t get_offset_of_TertiaryAxisRotateControl_9() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___TertiaryAxisRotateControl_9)); }
	inline AxisController_t3747398803 * get_TertiaryAxisRotateControl_9() const { return ___TertiaryAxisRotateControl_9; }
	inline AxisController_t3747398803 ** get_address_of_TertiaryAxisRotateControl_9() { return &___TertiaryAxisRotateControl_9; }
	inline void set_TertiaryAxisRotateControl_9(AxisController_t3747398803 * value)
	{
		___TertiaryAxisRotateControl_9 = value;
		Il2CppCodeGenWriteBarrier((&___TertiaryAxisRotateControl_9), value);
	}

	inline static int32_t get_offset_of_SelectButtonControl_10() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___SelectButtonControl_10)); }
	inline ButtonController_t521134000 * get_SelectButtonControl_10() const { return ___SelectButtonControl_10; }
	inline ButtonController_t521134000 ** get_address_of_SelectButtonControl_10() { return &___SelectButtonControl_10; }
	inline void set_SelectButtonControl_10(ButtonController_t521134000 * value)
	{
		___SelectButtonControl_10 = value;
		Il2CppCodeGenWriteBarrier((&___SelectButtonControl_10), value);
	}

	inline static int32_t get_offset_of_MenuButtonControl_11() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___MenuButtonControl_11)); }
	inline ButtonController_t521134000 * get_MenuButtonControl_11() const { return ___MenuButtonControl_11; }
	inline ButtonController_t521134000 ** get_address_of_MenuButtonControl_11() { return &___MenuButtonControl_11; }
	inline void set_MenuButtonControl_11(ButtonController_t521134000 * value)
	{
		___MenuButtonControl_11 = value;
		Il2CppCodeGenWriteBarrier((&___MenuButtonControl_11), value);
	}

	inline static int32_t get_offset_of_GraspControl_12() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___GraspControl_12)); }
	inline ButtonController_t521134000 * get_GraspControl_12() const { return ___GraspControl_12; }
	inline ButtonController_t521134000 ** get_address_of_GraspControl_12() { return &___GraspControl_12; }
	inline void set_GraspControl_12(ButtonController_t521134000 * value)
	{
		___GraspControl_12 = value;
		Il2CppCodeGenWriteBarrier((&___GraspControl_12), value);
	}

	inline static int32_t get_offset_of_ControllerSourceState_13() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___ControllerSourceState_13)); }
	inline DebugInteractionSourceState_t2903268065  get_ControllerSourceState_13() const { return ___ControllerSourceState_13; }
	inline DebugInteractionSourceState_t2903268065 * get_address_of_ControllerSourceState_13() { return &___ControllerSourceState_13; }
	inline void set_ControllerSourceState_13(DebugInteractionSourceState_t2903268065  value)
	{
		___ControllerSourceState_13 = value;
	}

	inline static int32_t get_offset_of_ActiveControllerColor_14() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___ActiveControllerColor_14)); }
	inline Color_t2020392075  get_ActiveControllerColor_14() const { return ___ActiveControllerColor_14; }
	inline Color_t2020392075 * get_address_of_ActiveControllerColor_14() { return &___ActiveControllerColor_14; }
	inline void set_ActiveControllerColor_14(Color_t2020392075  value)
	{
		___ActiveControllerColor_14 = value;
	}

	inline static int32_t get_offset_of_DroppedControllerColor_15() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___DroppedControllerColor_15)); }
	inline Color_t2020392075  get_DroppedControllerColor_15() const { return ___DroppedControllerColor_15; }
	inline Color_t2020392075 * get_address_of_DroppedControllerColor_15() { return &___DroppedControllerColor_15; }
	inline void set_DroppedControllerColor_15(Color_t2020392075  value)
	{
		___DroppedControllerColor_15 = value;
	}

	inline static int32_t get_offset_of_VisualizeController_16() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___VisualizeController_16)); }
	inline bool get_VisualizeController_16() const { return ___VisualizeController_16; }
	inline bool* get_address_of_VisualizeController_16() { return &___VisualizeController_16; }
	inline void set_VisualizeController_16(bool value)
	{
		___VisualizeController_16 = value;
	}

	inline static int32_t get_offset_of_ControllerVisualizer_17() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___ControllerVisualizer_17)); }
	inline GameObject_t1756533147 * get_ControllerVisualizer_17() const { return ___ControllerVisualizer_17; }
	inline GameObject_t1756533147 ** get_address_of_ControllerVisualizer_17() { return &___ControllerVisualizer_17; }
	inline void set_ControllerVisualizer_17(GameObject_t1756533147 * value)
	{
		___ControllerVisualizer_17 = value;
		Il2CppCodeGenWriteBarrier((&___ControllerVisualizer_17), value);
	}

	inline static int32_t get_offset_of_HandUpTexture_18() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___HandUpTexture_18)); }
	inline Texture_t2243626319 * get_HandUpTexture_18() const { return ___HandUpTexture_18; }
	inline Texture_t2243626319 ** get_address_of_HandUpTexture_18() { return &___HandUpTexture_18; }
	inline void set_HandUpTexture_18(Texture_t2243626319 * value)
	{
		___HandUpTexture_18 = value;
		Il2CppCodeGenWriteBarrier((&___HandUpTexture_18), value);
	}

	inline static int32_t get_offset_of_HandDownTexture_19() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___HandDownTexture_19)); }
	inline Texture_t2243626319 * get_HandDownTexture_19() const { return ___HandDownTexture_19; }
	inline Texture_t2243626319 ** get_address_of_HandDownTexture_19() { return &___HandDownTexture_19; }
	inline void set_HandDownTexture_19(Texture_t2243626319 * value)
	{
		___HandDownTexture_19 = value;
		Il2CppCodeGenWriteBarrier((&___HandDownTexture_19), value);
	}

	inline static int32_t get_offset_of_ShowPointingRay_20() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___ShowPointingRay_20)); }
	inline bool get_ShowPointingRay_20() const { return ___ShowPointingRay_20; }
	inline bool* get_address_of_ShowPointingRay_20() { return &___ShowPointingRay_20; }
	inline void set_ShowPointingRay_20(bool value)
	{
		___ShowPointingRay_20 = value;
	}

	inline static int32_t get_offset_of_U3CControllerInViewU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___U3CControllerInViewU3Ek__BackingField_21)); }
	inline bool get_U3CControllerInViewU3Ek__BackingField_21() const { return ___U3CControllerInViewU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CControllerInViewU3Ek__BackingField_21() { return &___U3CControllerInViewU3Ek__BackingField_21; }
	inline void set_U3CControllerInViewU3Ek__BackingField_21(bool value)
	{
		___U3CControllerInViewU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_InitialPosition_22() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___InitialPosition_22)); }
	inline Vector3_t2243707580  get_InitialPosition_22() const { return ___InitialPosition_22; }
	inline Vector3_t2243707580 * get_address_of_InitialPosition_22() { return &___InitialPosition_22; }
	inline void set_InitialPosition_22(Vector3_t2243707580  value)
	{
		___InitialPosition_22 = value;
	}

	inline static int32_t get_offset_of_localPosition_23() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___localPosition_23)); }
	inline Vector3_t2243707580  get_localPosition_23() const { return ___localPosition_23; }
	inline Vector3_t2243707580 * get_address_of_localPosition_23() { return &___localPosition_23; }
	inline void set_localPosition_23(Vector3_t2243707580  value)
	{
		___localPosition_23 = value;
	}

	inline static int32_t get_offset_of_localRotation_24() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___localRotation_24)); }
	inline Vector3_t2243707580  get_localRotation_24() const { return ___localRotation_24; }
	inline Vector3_t2243707580 * get_address_of_localRotation_24() { return &___localRotation_24; }
	inline void set_localRotation_24(Vector3_t2243707580  value)
	{
		___localRotation_24 = value;
	}

	inline static int32_t get_offset_of_visualRenderer_25() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___visualRenderer_25)); }
	inline Renderer_t257310565 * get_visualRenderer_25() const { return ___visualRenderer_25; }
	inline Renderer_t257310565 ** get_address_of_visualRenderer_25() { return &___visualRenderer_25; }
	inline void set_visualRenderer_25(Renderer_t257310565 * value)
	{
		___visualRenderer_25 = value;
		Il2CppCodeGenWriteBarrier((&___visualRenderer_25), value);
	}

	inline static int32_t get_offset_of_visualPropertyBlock_26() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___visualPropertyBlock_26)); }
	inline MaterialPropertyBlock_t3303648957 * get_visualPropertyBlock_26() const { return ___visualPropertyBlock_26; }
	inline MaterialPropertyBlock_t3303648957 ** get_address_of_visualPropertyBlock_26() { return &___visualPropertyBlock_26; }
	inline void set_visualPropertyBlock_26(MaterialPropertyBlock_t3303648957 * value)
	{
		___visualPropertyBlock_26 = value;
		Il2CppCodeGenWriteBarrier((&___visualPropertyBlock_26), value);
	}

	inline static int32_t get_offset_of_mainTexId_27() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___mainTexId_27)); }
	inline int32_t get_mainTexId_27() const { return ___mainTexId_27; }
	inline int32_t* get_address_of_mainTexId_27() { return &___mainTexId_27; }
	inline void set_mainTexId_27(int32_t value)
	{
		___mainTexId_27 = value;
	}

	inline static int32_t get_offset_of_timeBeforeReturn_28() { return static_cast<int32_t>(offsetof(CustomInputControl_t530759532, ___timeBeforeReturn_28)); }
	inline float get_timeBeforeReturn_28() const { return ___timeBeforeReturn_28; }
	inline float* get_address_of_timeBeforeReturn_28() { return &___timeBeforeReturn_28; }
	inline void set_timeBeforeReturn_28(float value)
	{
		___timeBeforeReturn_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMINPUTCONTROL_T530759532_H
#ifndef MANUALGAZECONTROL_T3873767954_H
#define MANUALGAZECONTROL_T3873767954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.ManualGazeControl
struct  ManualGazeControl_t3873767954  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean HoloToolkit.Unity.InputModule.ManualGazeControl::MouseSupported
	bool ___MouseSupported_2;
	// HoloToolkit.Unity.InputModule.AxisController HoloToolkit.Unity.InputModule.ManualGazeControl::MouseXYRotationAxisControl
	AxisController_t3747398803 * ___MouseXYRotationAxisControl_3;
	// HoloToolkit.Unity.InputModule.AxisController HoloToolkit.Unity.InputModule.ManualGazeControl::MouseXYTranslationAxisControl
	AxisController_t3747398803 * ___MouseXYTranslationAxisControl_4;
	// HoloToolkit.Unity.InputModule.AxisController HoloToolkit.Unity.InputModule.ManualGazeControl::MouseXZTranslationAxisControl
	AxisController_t3747398803 * ___MouseXZTranslationAxisControl_5;
	// System.Boolean HoloToolkit.Unity.InputModule.ManualGazeControl::KeyboardSupported
	bool ___KeyboardSupported_6;
	// HoloToolkit.Unity.InputModule.AxisController HoloToolkit.Unity.InputModule.ManualGazeControl::KeyboardXYRotationAxisControl
	AxisController_t3747398803 * ___KeyboardXYRotationAxisControl_7;
	// HoloToolkit.Unity.InputModule.AxisController HoloToolkit.Unity.InputModule.ManualGazeControl::KeyboardXZRotationAxisControl
	AxisController_t3747398803 * ___KeyboardXZRotationAxisControl_8;
	// HoloToolkit.Unity.InputModule.AxisController HoloToolkit.Unity.InputModule.ManualGazeControl::KeyboardXYTranslationAxisControl
	AxisController_t3747398803 * ___KeyboardXYTranslationAxisControl_9;
	// HoloToolkit.Unity.InputModule.AxisController HoloToolkit.Unity.InputModule.ManualGazeControl::KeyboardXZTranslationAxisControl
	AxisController_t3747398803 * ___KeyboardXZTranslationAxisControl_10;
	// System.Boolean HoloToolkit.Unity.InputModule.ManualGazeControl::JoystickSupported
	bool ___JoystickSupported_11;
	// HoloToolkit.Unity.InputModule.AxisController HoloToolkit.Unity.InputModule.ManualGazeControl::JoystickXYRotationAxisControl
	AxisController_t3747398803 * ___JoystickXYRotationAxisControl_12;
	// HoloToolkit.Unity.InputModule.AxisController HoloToolkit.Unity.InputModule.ManualGazeControl::JoystickXYTranslationAxisControl
	AxisController_t3747398803 * ___JoystickXYTranslationAxisControl_13;
	// HoloToolkit.Unity.InputModule.AxisController HoloToolkit.Unity.InputModule.ManualGazeControl::JoystickXZTranslationAxisControl
	AxisController_t3747398803 * ___JoystickXZTranslationAxisControl_14;
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.ManualGazeControl::lastTrackerToUnityTranslation
	Vector3_t2243707580  ___lastTrackerToUnityTranslation_15;
	// UnityEngine.Quaternion HoloToolkit.Unity.InputModule.ManualGazeControl::lastTrackerToUnityRotation
	Quaternion_t4030073918  ___lastTrackerToUnityRotation_16;
	// UnityEngine.Transform HoloToolkit.Unity.InputModule.ManualGazeControl::cameraTransform
	Transform_t3275118058 * ___cameraTransform_17;

public:
	inline static int32_t get_offset_of_MouseSupported_2() { return static_cast<int32_t>(offsetof(ManualGazeControl_t3873767954, ___MouseSupported_2)); }
	inline bool get_MouseSupported_2() const { return ___MouseSupported_2; }
	inline bool* get_address_of_MouseSupported_2() { return &___MouseSupported_2; }
	inline void set_MouseSupported_2(bool value)
	{
		___MouseSupported_2 = value;
	}

	inline static int32_t get_offset_of_MouseXYRotationAxisControl_3() { return static_cast<int32_t>(offsetof(ManualGazeControl_t3873767954, ___MouseXYRotationAxisControl_3)); }
	inline AxisController_t3747398803 * get_MouseXYRotationAxisControl_3() const { return ___MouseXYRotationAxisControl_3; }
	inline AxisController_t3747398803 ** get_address_of_MouseXYRotationAxisControl_3() { return &___MouseXYRotationAxisControl_3; }
	inline void set_MouseXYRotationAxisControl_3(AxisController_t3747398803 * value)
	{
		___MouseXYRotationAxisControl_3 = value;
		Il2CppCodeGenWriteBarrier((&___MouseXYRotationAxisControl_3), value);
	}

	inline static int32_t get_offset_of_MouseXYTranslationAxisControl_4() { return static_cast<int32_t>(offsetof(ManualGazeControl_t3873767954, ___MouseXYTranslationAxisControl_4)); }
	inline AxisController_t3747398803 * get_MouseXYTranslationAxisControl_4() const { return ___MouseXYTranslationAxisControl_4; }
	inline AxisController_t3747398803 ** get_address_of_MouseXYTranslationAxisControl_4() { return &___MouseXYTranslationAxisControl_4; }
	inline void set_MouseXYTranslationAxisControl_4(AxisController_t3747398803 * value)
	{
		___MouseXYTranslationAxisControl_4 = value;
		Il2CppCodeGenWriteBarrier((&___MouseXYTranslationAxisControl_4), value);
	}

	inline static int32_t get_offset_of_MouseXZTranslationAxisControl_5() { return static_cast<int32_t>(offsetof(ManualGazeControl_t3873767954, ___MouseXZTranslationAxisControl_5)); }
	inline AxisController_t3747398803 * get_MouseXZTranslationAxisControl_5() const { return ___MouseXZTranslationAxisControl_5; }
	inline AxisController_t3747398803 ** get_address_of_MouseXZTranslationAxisControl_5() { return &___MouseXZTranslationAxisControl_5; }
	inline void set_MouseXZTranslationAxisControl_5(AxisController_t3747398803 * value)
	{
		___MouseXZTranslationAxisControl_5 = value;
		Il2CppCodeGenWriteBarrier((&___MouseXZTranslationAxisControl_5), value);
	}

	inline static int32_t get_offset_of_KeyboardSupported_6() { return static_cast<int32_t>(offsetof(ManualGazeControl_t3873767954, ___KeyboardSupported_6)); }
	inline bool get_KeyboardSupported_6() const { return ___KeyboardSupported_6; }
	inline bool* get_address_of_KeyboardSupported_6() { return &___KeyboardSupported_6; }
	inline void set_KeyboardSupported_6(bool value)
	{
		___KeyboardSupported_6 = value;
	}

	inline static int32_t get_offset_of_KeyboardXYRotationAxisControl_7() { return static_cast<int32_t>(offsetof(ManualGazeControl_t3873767954, ___KeyboardXYRotationAxisControl_7)); }
	inline AxisController_t3747398803 * get_KeyboardXYRotationAxisControl_7() const { return ___KeyboardXYRotationAxisControl_7; }
	inline AxisController_t3747398803 ** get_address_of_KeyboardXYRotationAxisControl_7() { return &___KeyboardXYRotationAxisControl_7; }
	inline void set_KeyboardXYRotationAxisControl_7(AxisController_t3747398803 * value)
	{
		___KeyboardXYRotationAxisControl_7 = value;
		Il2CppCodeGenWriteBarrier((&___KeyboardXYRotationAxisControl_7), value);
	}

	inline static int32_t get_offset_of_KeyboardXZRotationAxisControl_8() { return static_cast<int32_t>(offsetof(ManualGazeControl_t3873767954, ___KeyboardXZRotationAxisControl_8)); }
	inline AxisController_t3747398803 * get_KeyboardXZRotationAxisControl_8() const { return ___KeyboardXZRotationAxisControl_8; }
	inline AxisController_t3747398803 ** get_address_of_KeyboardXZRotationAxisControl_8() { return &___KeyboardXZRotationAxisControl_8; }
	inline void set_KeyboardXZRotationAxisControl_8(AxisController_t3747398803 * value)
	{
		___KeyboardXZRotationAxisControl_8 = value;
		Il2CppCodeGenWriteBarrier((&___KeyboardXZRotationAxisControl_8), value);
	}

	inline static int32_t get_offset_of_KeyboardXYTranslationAxisControl_9() { return static_cast<int32_t>(offsetof(ManualGazeControl_t3873767954, ___KeyboardXYTranslationAxisControl_9)); }
	inline AxisController_t3747398803 * get_KeyboardXYTranslationAxisControl_9() const { return ___KeyboardXYTranslationAxisControl_9; }
	inline AxisController_t3747398803 ** get_address_of_KeyboardXYTranslationAxisControl_9() { return &___KeyboardXYTranslationAxisControl_9; }
	inline void set_KeyboardXYTranslationAxisControl_9(AxisController_t3747398803 * value)
	{
		___KeyboardXYTranslationAxisControl_9 = value;
		Il2CppCodeGenWriteBarrier((&___KeyboardXYTranslationAxisControl_9), value);
	}

	inline static int32_t get_offset_of_KeyboardXZTranslationAxisControl_10() { return static_cast<int32_t>(offsetof(ManualGazeControl_t3873767954, ___KeyboardXZTranslationAxisControl_10)); }
	inline AxisController_t3747398803 * get_KeyboardXZTranslationAxisControl_10() const { return ___KeyboardXZTranslationAxisControl_10; }
	inline AxisController_t3747398803 ** get_address_of_KeyboardXZTranslationAxisControl_10() { return &___KeyboardXZTranslationAxisControl_10; }
	inline void set_KeyboardXZTranslationAxisControl_10(AxisController_t3747398803 * value)
	{
		___KeyboardXZTranslationAxisControl_10 = value;
		Il2CppCodeGenWriteBarrier((&___KeyboardXZTranslationAxisControl_10), value);
	}

	inline static int32_t get_offset_of_JoystickSupported_11() { return static_cast<int32_t>(offsetof(ManualGazeControl_t3873767954, ___JoystickSupported_11)); }
	inline bool get_JoystickSupported_11() const { return ___JoystickSupported_11; }
	inline bool* get_address_of_JoystickSupported_11() { return &___JoystickSupported_11; }
	inline void set_JoystickSupported_11(bool value)
	{
		___JoystickSupported_11 = value;
	}

	inline static int32_t get_offset_of_JoystickXYRotationAxisControl_12() { return static_cast<int32_t>(offsetof(ManualGazeControl_t3873767954, ___JoystickXYRotationAxisControl_12)); }
	inline AxisController_t3747398803 * get_JoystickXYRotationAxisControl_12() const { return ___JoystickXYRotationAxisControl_12; }
	inline AxisController_t3747398803 ** get_address_of_JoystickXYRotationAxisControl_12() { return &___JoystickXYRotationAxisControl_12; }
	inline void set_JoystickXYRotationAxisControl_12(AxisController_t3747398803 * value)
	{
		___JoystickXYRotationAxisControl_12 = value;
		Il2CppCodeGenWriteBarrier((&___JoystickXYRotationAxisControl_12), value);
	}

	inline static int32_t get_offset_of_JoystickXYTranslationAxisControl_13() { return static_cast<int32_t>(offsetof(ManualGazeControl_t3873767954, ___JoystickXYTranslationAxisControl_13)); }
	inline AxisController_t3747398803 * get_JoystickXYTranslationAxisControl_13() const { return ___JoystickXYTranslationAxisControl_13; }
	inline AxisController_t3747398803 ** get_address_of_JoystickXYTranslationAxisControl_13() { return &___JoystickXYTranslationAxisControl_13; }
	inline void set_JoystickXYTranslationAxisControl_13(AxisController_t3747398803 * value)
	{
		___JoystickXYTranslationAxisControl_13 = value;
		Il2CppCodeGenWriteBarrier((&___JoystickXYTranslationAxisControl_13), value);
	}

	inline static int32_t get_offset_of_JoystickXZTranslationAxisControl_14() { return static_cast<int32_t>(offsetof(ManualGazeControl_t3873767954, ___JoystickXZTranslationAxisControl_14)); }
	inline AxisController_t3747398803 * get_JoystickXZTranslationAxisControl_14() const { return ___JoystickXZTranslationAxisControl_14; }
	inline AxisController_t3747398803 ** get_address_of_JoystickXZTranslationAxisControl_14() { return &___JoystickXZTranslationAxisControl_14; }
	inline void set_JoystickXZTranslationAxisControl_14(AxisController_t3747398803 * value)
	{
		___JoystickXZTranslationAxisControl_14 = value;
		Il2CppCodeGenWriteBarrier((&___JoystickXZTranslationAxisControl_14), value);
	}

	inline static int32_t get_offset_of_lastTrackerToUnityTranslation_15() { return static_cast<int32_t>(offsetof(ManualGazeControl_t3873767954, ___lastTrackerToUnityTranslation_15)); }
	inline Vector3_t2243707580  get_lastTrackerToUnityTranslation_15() const { return ___lastTrackerToUnityTranslation_15; }
	inline Vector3_t2243707580 * get_address_of_lastTrackerToUnityTranslation_15() { return &___lastTrackerToUnityTranslation_15; }
	inline void set_lastTrackerToUnityTranslation_15(Vector3_t2243707580  value)
	{
		___lastTrackerToUnityTranslation_15 = value;
	}

	inline static int32_t get_offset_of_lastTrackerToUnityRotation_16() { return static_cast<int32_t>(offsetof(ManualGazeControl_t3873767954, ___lastTrackerToUnityRotation_16)); }
	inline Quaternion_t4030073918  get_lastTrackerToUnityRotation_16() const { return ___lastTrackerToUnityRotation_16; }
	inline Quaternion_t4030073918 * get_address_of_lastTrackerToUnityRotation_16() { return &___lastTrackerToUnityRotation_16; }
	inline void set_lastTrackerToUnityRotation_16(Quaternion_t4030073918  value)
	{
		___lastTrackerToUnityRotation_16 = value;
	}

	inline static int32_t get_offset_of_cameraTransform_17() { return static_cast<int32_t>(offsetof(ManualGazeControl_t3873767954, ___cameraTransform_17)); }
	inline Transform_t3275118058 * get_cameraTransform_17() const { return ___cameraTransform_17; }
	inline Transform_t3275118058 ** get_address_of_cameraTransform_17() { return &___cameraTransform_17; }
	inline void set_cameraTransform_17(Transform_t3275118058 * value)
	{
		___cameraTransform_17 = value;
		Il2CppCodeGenWriteBarrier((&___cameraTransform_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANUALGAZECONTROL_T3873767954_H
#ifndef HANDDRAGGABLE_T611787868_H
#define HANDDRAGGABLE_T611787868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.HandDraggable
struct  HandDraggable_t611787868  : public MonoBehaviour_t1158329972
{
public:
	// System.Action HoloToolkit.Unity.InputModule.HandDraggable::StartedDragging
	Action_t3226471752 * ___StartedDragging_2;
	// System.Action HoloToolkit.Unity.InputModule.HandDraggable::StoppedDragging
	Action_t3226471752 * ___StoppedDragging_3;
	// UnityEngine.Transform HoloToolkit.Unity.InputModule.HandDraggable::HostTransform
	Transform_t3275118058 * ___HostTransform_4;
	// System.Single HoloToolkit.Unity.InputModule.HandDraggable::DistanceScale
	float ___DistanceScale_5;
	// HoloToolkit.Unity.InputModule.HandDraggable/RotationModeEnum HoloToolkit.Unity.InputModule.HandDraggable::RotationMode
	int32_t ___RotationMode_6;
	// System.Single HoloToolkit.Unity.InputModule.HandDraggable::PositionLerpSpeed
	float ___PositionLerpSpeed_7;
	// System.Single HoloToolkit.Unity.InputModule.HandDraggable::RotationLerpSpeed
	float ___RotationLerpSpeed_8;
	// System.Boolean HoloToolkit.Unity.InputModule.HandDraggable::IsDraggingEnabled
	bool ___IsDraggingEnabled_9;
	// System.Boolean HoloToolkit.Unity.InputModule.HandDraggable::isDragging
	bool ___isDragging_10;
	// System.Boolean HoloToolkit.Unity.InputModule.HandDraggable::isGazed
	bool ___isGazed_11;
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.HandDraggable::objRefForward
	Vector3_t2243707580  ___objRefForward_12;
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.HandDraggable::objRefUp
	Vector3_t2243707580  ___objRefUp_13;
	// System.Single HoloToolkit.Unity.InputModule.HandDraggable::objRefDistance
	float ___objRefDistance_14;
	// UnityEngine.Quaternion HoloToolkit.Unity.InputModule.HandDraggable::gazeAngularOffset
	Quaternion_t4030073918  ___gazeAngularOffset_15;
	// System.Single HoloToolkit.Unity.InputModule.HandDraggable::handRefDistance
	float ___handRefDistance_16;
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.HandDraggable::objRefGrabPoint
	Vector3_t2243707580  ___objRefGrabPoint_17;
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.HandDraggable::draggingPosition
	Vector3_t2243707580  ___draggingPosition_18;
	// UnityEngine.Quaternion HoloToolkit.Unity.InputModule.HandDraggable::draggingRotation
	Quaternion_t4030073918  ___draggingRotation_19;
	// HoloToolkit.Unity.InputModule.IInputSource HoloToolkit.Unity.InputModule.HandDraggable::currentInputSource
	RuntimeObject* ___currentInputSource_20;
	// System.UInt32 HoloToolkit.Unity.InputModule.HandDraggable::currentInputSourceId
	uint32_t ___currentInputSourceId_21;

public:
	inline static int32_t get_offset_of_StartedDragging_2() { return static_cast<int32_t>(offsetof(HandDraggable_t611787868, ___StartedDragging_2)); }
	inline Action_t3226471752 * get_StartedDragging_2() const { return ___StartedDragging_2; }
	inline Action_t3226471752 ** get_address_of_StartedDragging_2() { return &___StartedDragging_2; }
	inline void set_StartedDragging_2(Action_t3226471752 * value)
	{
		___StartedDragging_2 = value;
		Il2CppCodeGenWriteBarrier((&___StartedDragging_2), value);
	}

	inline static int32_t get_offset_of_StoppedDragging_3() { return static_cast<int32_t>(offsetof(HandDraggable_t611787868, ___StoppedDragging_3)); }
	inline Action_t3226471752 * get_StoppedDragging_3() const { return ___StoppedDragging_3; }
	inline Action_t3226471752 ** get_address_of_StoppedDragging_3() { return &___StoppedDragging_3; }
	inline void set_StoppedDragging_3(Action_t3226471752 * value)
	{
		___StoppedDragging_3 = value;
		Il2CppCodeGenWriteBarrier((&___StoppedDragging_3), value);
	}

	inline static int32_t get_offset_of_HostTransform_4() { return static_cast<int32_t>(offsetof(HandDraggable_t611787868, ___HostTransform_4)); }
	inline Transform_t3275118058 * get_HostTransform_4() const { return ___HostTransform_4; }
	inline Transform_t3275118058 ** get_address_of_HostTransform_4() { return &___HostTransform_4; }
	inline void set_HostTransform_4(Transform_t3275118058 * value)
	{
		___HostTransform_4 = value;
		Il2CppCodeGenWriteBarrier((&___HostTransform_4), value);
	}

	inline static int32_t get_offset_of_DistanceScale_5() { return static_cast<int32_t>(offsetof(HandDraggable_t611787868, ___DistanceScale_5)); }
	inline float get_DistanceScale_5() const { return ___DistanceScale_5; }
	inline float* get_address_of_DistanceScale_5() { return &___DistanceScale_5; }
	inline void set_DistanceScale_5(float value)
	{
		___DistanceScale_5 = value;
	}

	inline static int32_t get_offset_of_RotationMode_6() { return static_cast<int32_t>(offsetof(HandDraggable_t611787868, ___RotationMode_6)); }
	inline int32_t get_RotationMode_6() const { return ___RotationMode_6; }
	inline int32_t* get_address_of_RotationMode_6() { return &___RotationMode_6; }
	inline void set_RotationMode_6(int32_t value)
	{
		___RotationMode_6 = value;
	}

	inline static int32_t get_offset_of_PositionLerpSpeed_7() { return static_cast<int32_t>(offsetof(HandDraggable_t611787868, ___PositionLerpSpeed_7)); }
	inline float get_PositionLerpSpeed_7() const { return ___PositionLerpSpeed_7; }
	inline float* get_address_of_PositionLerpSpeed_7() { return &___PositionLerpSpeed_7; }
	inline void set_PositionLerpSpeed_7(float value)
	{
		___PositionLerpSpeed_7 = value;
	}

	inline static int32_t get_offset_of_RotationLerpSpeed_8() { return static_cast<int32_t>(offsetof(HandDraggable_t611787868, ___RotationLerpSpeed_8)); }
	inline float get_RotationLerpSpeed_8() const { return ___RotationLerpSpeed_8; }
	inline float* get_address_of_RotationLerpSpeed_8() { return &___RotationLerpSpeed_8; }
	inline void set_RotationLerpSpeed_8(float value)
	{
		___RotationLerpSpeed_8 = value;
	}

	inline static int32_t get_offset_of_IsDraggingEnabled_9() { return static_cast<int32_t>(offsetof(HandDraggable_t611787868, ___IsDraggingEnabled_9)); }
	inline bool get_IsDraggingEnabled_9() const { return ___IsDraggingEnabled_9; }
	inline bool* get_address_of_IsDraggingEnabled_9() { return &___IsDraggingEnabled_9; }
	inline void set_IsDraggingEnabled_9(bool value)
	{
		___IsDraggingEnabled_9 = value;
	}

	inline static int32_t get_offset_of_isDragging_10() { return static_cast<int32_t>(offsetof(HandDraggable_t611787868, ___isDragging_10)); }
	inline bool get_isDragging_10() const { return ___isDragging_10; }
	inline bool* get_address_of_isDragging_10() { return &___isDragging_10; }
	inline void set_isDragging_10(bool value)
	{
		___isDragging_10 = value;
	}

	inline static int32_t get_offset_of_isGazed_11() { return static_cast<int32_t>(offsetof(HandDraggable_t611787868, ___isGazed_11)); }
	inline bool get_isGazed_11() const { return ___isGazed_11; }
	inline bool* get_address_of_isGazed_11() { return &___isGazed_11; }
	inline void set_isGazed_11(bool value)
	{
		___isGazed_11 = value;
	}

	inline static int32_t get_offset_of_objRefForward_12() { return static_cast<int32_t>(offsetof(HandDraggable_t611787868, ___objRefForward_12)); }
	inline Vector3_t2243707580  get_objRefForward_12() const { return ___objRefForward_12; }
	inline Vector3_t2243707580 * get_address_of_objRefForward_12() { return &___objRefForward_12; }
	inline void set_objRefForward_12(Vector3_t2243707580  value)
	{
		___objRefForward_12 = value;
	}

	inline static int32_t get_offset_of_objRefUp_13() { return static_cast<int32_t>(offsetof(HandDraggable_t611787868, ___objRefUp_13)); }
	inline Vector3_t2243707580  get_objRefUp_13() const { return ___objRefUp_13; }
	inline Vector3_t2243707580 * get_address_of_objRefUp_13() { return &___objRefUp_13; }
	inline void set_objRefUp_13(Vector3_t2243707580  value)
	{
		___objRefUp_13 = value;
	}

	inline static int32_t get_offset_of_objRefDistance_14() { return static_cast<int32_t>(offsetof(HandDraggable_t611787868, ___objRefDistance_14)); }
	inline float get_objRefDistance_14() const { return ___objRefDistance_14; }
	inline float* get_address_of_objRefDistance_14() { return &___objRefDistance_14; }
	inline void set_objRefDistance_14(float value)
	{
		___objRefDistance_14 = value;
	}

	inline static int32_t get_offset_of_gazeAngularOffset_15() { return static_cast<int32_t>(offsetof(HandDraggable_t611787868, ___gazeAngularOffset_15)); }
	inline Quaternion_t4030073918  get_gazeAngularOffset_15() const { return ___gazeAngularOffset_15; }
	inline Quaternion_t4030073918 * get_address_of_gazeAngularOffset_15() { return &___gazeAngularOffset_15; }
	inline void set_gazeAngularOffset_15(Quaternion_t4030073918  value)
	{
		___gazeAngularOffset_15 = value;
	}

	inline static int32_t get_offset_of_handRefDistance_16() { return static_cast<int32_t>(offsetof(HandDraggable_t611787868, ___handRefDistance_16)); }
	inline float get_handRefDistance_16() const { return ___handRefDistance_16; }
	inline float* get_address_of_handRefDistance_16() { return &___handRefDistance_16; }
	inline void set_handRefDistance_16(float value)
	{
		___handRefDistance_16 = value;
	}

	inline static int32_t get_offset_of_objRefGrabPoint_17() { return static_cast<int32_t>(offsetof(HandDraggable_t611787868, ___objRefGrabPoint_17)); }
	inline Vector3_t2243707580  get_objRefGrabPoint_17() const { return ___objRefGrabPoint_17; }
	inline Vector3_t2243707580 * get_address_of_objRefGrabPoint_17() { return &___objRefGrabPoint_17; }
	inline void set_objRefGrabPoint_17(Vector3_t2243707580  value)
	{
		___objRefGrabPoint_17 = value;
	}

	inline static int32_t get_offset_of_draggingPosition_18() { return static_cast<int32_t>(offsetof(HandDraggable_t611787868, ___draggingPosition_18)); }
	inline Vector3_t2243707580  get_draggingPosition_18() const { return ___draggingPosition_18; }
	inline Vector3_t2243707580 * get_address_of_draggingPosition_18() { return &___draggingPosition_18; }
	inline void set_draggingPosition_18(Vector3_t2243707580  value)
	{
		___draggingPosition_18 = value;
	}

	inline static int32_t get_offset_of_draggingRotation_19() { return static_cast<int32_t>(offsetof(HandDraggable_t611787868, ___draggingRotation_19)); }
	inline Quaternion_t4030073918  get_draggingRotation_19() const { return ___draggingRotation_19; }
	inline Quaternion_t4030073918 * get_address_of_draggingRotation_19() { return &___draggingRotation_19; }
	inline void set_draggingRotation_19(Quaternion_t4030073918  value)
	{
		___draggingRotation_19 = value;
	}

	inline static int32_t get_offset_of_currentInputSource_20() { return static_cast<int32_t>(offsetof(HandDraggable_t611787868, ___currentInputSource_20)); }
	inline RuntimeObject* get_currentInputSource_20() const { return ___currentInputSource_20; }
	inline RuntimeObject** get_address_of_currentInputSource_20() { return &___currentInputSource_20; }
	inline void set_currentInputSource_20(RuntimeObject* value)
	{
		___currentInputSource_20 = value;
		Il2CppCodeGenWriteBarrier((&___currentInputSource_20), value);
	}

	inline static int32_t get_offset_of_currentInputSourceId_21() { return static_cast<int32_t>(offsetof(HandDraggable_t611787868, ___currentInputSourceId_21)); }
	inline uint32_t get_currentInputSourceId_21() const { return ___currentInputSourceId_21; }
	inline uint32_t* get_address_of_currentInputSourceId_21() { return &___currentInputSourceId_21; }
	inline void set_currentInputSourceId_21(uint32_t value)
	{
		___currentInputSourceId_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDDRAGGABLE_T611787868_H
#ifndef BASEINPUTSOURCE_T2378327172_H
#define BASEINPUTSOURCE_T2378327172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.BaseInputSource
struct  BaseInputSource_t2378327172  : public MonoBehaviour_t1158329972
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINPUTSOURCE_T2378327172_H
#ifndef BASERAYSTABILIZER_T2987552384_H
#define BASERAYSTABILIZER_T2987552384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.BaseRayStabilizer
struct  BaseRayStabilizer_t2987552384  : public MonoBehaviour_t1158329972
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASERAYSTABILIZER_T2987552384_H
#ifndef BUTTONCONTROLLER_T521134000_H
#define BUTTONCONTROLLER_T521134000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.ButtonController
struct  ButtonController_t521134000  : public MonoBehaviour_t1158329972
{
public:
	// HoloToolkit.Unity.InputModule.ButtonController/ButtonType HoloToolkit.Unity.InputModule.ButtonController::buttonType
	int32_t ___buttonType_2;
	// System.Boolean HoloToolkit.Unity.InputModule.ButtonController::appHasFocus
	bool ___appHasFocus_3;

public:
	inline static int32_t get_offset_of_buttonType_2() { return static_cast<int32_t>(offsetof(ButtonController_t521134000, ___buttonType_2)); }
	inline int32_t get_buttonType_2() const { return ___buttonType_2; }
	inline int32_t* get_address_of_buttonType_2() { return &___buttonType_2; }
	inline void set_buttonType_2(int32_t value)
	{
		___buttonType_2 = value;
	}

	inline static int32_t get_offset_of_appHasFocus_3() { return static_cast<int32_t>(offsetof(ButtonController_t521134000, ___appHasFocus_3)); }
	inline bool get_appHasFocus_3() const { return ___appHasFocus_3; }
	inline bool* get_address_of_appHasFocus_3() { return &___appHasFocus_3; }
	inline void set_appHasFocus_3(bool value)
	{
		___appHasFocus_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONCONTROLLER_T521134000_H
#ifndef AXISCONTROLLER_T3747398803_H
#define AXISCONTROLLER_T3747398803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.AxisController
struct  AxisController_t3747398803  : public MonoBehaviour_t1158329972
{
public:
	// System.Single HoloToolkit.Unity.InputModule.AxisController::SensitivityScale
	float ___SensitivityScale_2;
	// System.Boolean HoloToolkit.Unity.InputModule.AxisController::UseUnscaledTime
	bool ___UseUnscaledTime_3;
	// HoloToolkit.Unity.InputModule.AxisController/AxisType HoloToolkit.Unity.InputModule.AxisController::axisType
	int32_t ___axisType_4;
	// HoloToolkit.Unity.InputModule.ButtonController/ButtonType HoloToolkit.Unity.InputModule.AxisController::buttonType
	int32_t ___buttonType_5;
	// System.String HoloToolkit.Unity.InputModule.AxisController::InputManagerHorizontalAxisName
	String_t* ___InputManagerHorizontalAxisName_6;
	// System.String HoloToolkit.Unity.InputModule.AxisController::InputManagerVerticalAxisName
	String_t* ___InputManagerVerticalAxisName_7;
	// HoloToolkit.Unity.InputModule.AxisController/AxisDestination HoloToolkit.Unity.InputModule.AxisController::Axis0Destination
	int32_t ___Axis0Destination_8;
	// HoloToolkit.Unity.InputModule.AxisController/AxisDestination HoloToolkit.Unity.InputModule.AxisController::Axis1Destination
	int32_t ___Axis1Destination_9;
	// HoloToolkit.Unity.InputModule.AxisController/AxisDestination HoloToolkit.Unity.InputModule.AxisController::Axis2Destination
	int32_t ___Axis2Destination_10;
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.AxisController::lastMousePosition
	Vector3_t2243707580  ___lastMousePosition_11;
	// System.Boolean HoloToolkit.Unity.InputModule.AxisController::isMouseJumping
	bool ___isMouseJumping_16;
	// System.Boolean HoloToolkit.Unity.InputModule.AxisController::appHasFocus
	bool ___appHasFocus_17;
	// System.Boolean HoloToolkit.Unity.InputModule.AxisController::usingMouse
	bool ___usingMouse_18;
	// System.Boolean HoloToolkit.Unity.InputModule.AxisController::inputManagerAxesNeedApproval
	bool ___inputManagerAxesNeedApproval_19;
	// System.Boolean HoloToolkit.Unity.InputModule.AxisController::inputManagerHorizontalAxisApproved
	bool ___inputManagerHorizontalAxisApproved_20;
	// System.Boolean HoloToolkit.Unity.InputModule.AxisController::inputManagerVerticalAxisApproved
	bool ___inputManagerVerticalAxisApproved_21;

public:
	inline static int32_t get_offset_of_SensitivityScale_2() { return static_cast<int32_t>(offsetof(AxisController_t3747398803, ___SensitivityScale_2)); }
	inline float get_SensitivityScale_2() const { return ___SensitivityScale_2; }
	inline float* get_address_of_SensitivityScale_2() { return &___SensitivityScale_2; }
	inline void set_SensitivityScale_2(float value)
	{
		___SensitivityScale_2 = value;
	}

	inline static int32_t get_offset_of_UseUnscaledTime_3() { return static_cast<int32_t>(offsetof(AxisController_t3747398803, ___UseUnscaledTime_3)); }
	inline bool get_UseUnscaledTime_3() const { return ___UseUnscaledTime_3; }
	inline bool* get_address_of_UseUnscaledTime_3() { return &___UseUnscaledTime_3; }
	inline void set_UseUnscaledTime_3(bool value)
	{
		___UseUnscaledTime_3 = value;
	}

	inline static int32_t get_offset_of_axisType_4() { return static_cast<int32_t>(offsetof(AxisController_t3747398803, ___axisType_4)); }
	inline int32_t get_axisType_4() const { return ___axisType_4; }
	inline int32_t* get_address_of_axisType_4() { return &___axisType_4; }
	inline void set_axisType_4(int32_t value)
	{
		___axisType_4 = value;
	}

	inline static int32_t get_offset_of_buttonType_5() { return static_cast<int32_t>(offsetof(AxisController_t3747398803, ___buttonType_5)); }
	inline int32_t get_buttonType_5() const { return ___buttonType_5; }
	inline int32_t* get_address_of_buttonType_5() { return &___buttonType_5; }
	inline void set_buttonType_5(int32_t value)
	{
		___buttonType_5 = value;
	}

	inline static int32_t get_offset_of_InputManagerHorizontalAxisName_6() { return static_cast<int32_t>(offsetof(AxisController_t3747398803, ___InputManagerHorizontalAxisName_6)); }
	inline String_t* get_InputManagerHorizontalAxisName_6() const { return ___InputManagerHorizontalAxisName_6; }
	inline String_t** get_address_of_InputManagerHorizontalAxisName_6() { return &___InputManagerHorizontalAxisName_6; }
	inline void set_InputManagerHorizontalAxisName_6(String_t* value)
	{
		___InputManagerHorizontalAxisName_6 = value;
		Il2CppCodeGenWriteBarrier((&___InputManagerHorizontalAxisName_6), value);
	}

	inline static int32_t get_offset_of_InputManagerVerticalAxisName_7() { return static_cast<int32_t>(offsetof(AxisController_t3747398803, ___InputManagerVerticalAxisName_7)); }
	inline String_t* get_InputManagerVerticalAxisName_7() const { return ___InputManagerVerticalAxisName_7; }
	inline String_t** get_address_of_InputManagerVerticalAxisName_7() { return &___InputManagerVerticalAxisName_7; }
	inline void set_InputManagerVerticalAxisName_7(String_t* value)
	{
		___InputManagerVerticalAxisName_7 = value;
		Il2CppCodeGenWriteBarrier((&___InputManagerVerticalAxisName_7), value);
	}

	inline static int32_t get_offset_of_Axis0Destination_8() { return static_cast<int32_t>(offsetof(AxisController_t3747398803, ___Axis0Destination_8)); }
	inline int32_t get_Axis0Destination_8() const { return ___Axis0Destination_8; }
	inline int32_t* get_address_of_Axis0Destination_8() { return &___Axis0Destination_8; }
	inline void set_Axis0Destination_8(int32_t value)
	{
		___Axis0Destination_8 = value;
	}

	inline static int32_t get_offset_of_Axis1Destination_9() { return static_cast<int32_t>(offsetof(AxisController_t3747398803, ___Axis1Destination_9)); }
	inline int32_t get_Axis1Destination_9() const { return ___Axis1Destination_9; }
	inline int32_t* get_address_of_Axis1Destination_9() { return &___Axis1Destination_9; }
	inline void set_Axis1Destination_9(int32_t value)
	{
		___Axis1Destination_9 = value;
	}

	inline static int32_t get_offset_of_Axis2Destination_10() { return static_cast<int32_t>(offsetof(AxisController_t3747398803, ___Axis2Destination_10)); }
	inline int32_t get_Axis2Destination_10() const { return ___Axis2Destination_10; }
	inline int32_t* get_address_of_Axis2Destination_10() { return &___Axis2Destination_10; }
	inline void set_Axis2Destination_10(int32_t value)
	{
		___Axis2Destination_10 = value;
	}

	inline static int32_t get_offset_of_lastMousePosition_11() { return static_cast<int32_t>(offsetof(AxisController_t3747398803, ___lastMousePosition_11)); }
	inline Vector3_t2243707580  get_lastMousePosition_11() const { return ___lastMousePosition_11; }
	inline Vector3_t2243707580 * get_address_of_lastMousePosition_11() { return &___lastMousePosition_11; }
	inline void set_lastMousePosition_11(Vector3_t2243707580  value)
	{
		___lastMousePosition_11 = value;
	}

	inline static int32_t get_offset_of_isMouseJumping_16() { return static_cast<int32_t>(offsetof(AxisController_t3747398803, ___isMouseJumping_16)); }
	inline bool get_isMouseJumping_16() const { return ___isMouseJumping_16; }
	inline bool* get_address_of_isMouseJumping_16() { return &___isMouseJumping_16; }
	inline void set_isMouseJumping_16(bool value)
	{
		___isMouseJumping_16 = value;
	}

	inline static int32_t get_offset_of_appHasFocus_17() { return static_cast<int32_t>(offsetof(AxisController_t3747398803, ___appHasFocus_17)); }
	inline bool get_appHasFocus_17() const { return ___appHasFocus_17; }
	inline bool* get_address_of_appHasFocus_17() { return &___appHasFocus_17; }
	inline void set_appHasFocus_17(bool value)
	{
		___appHasFocus_17 = value;
	}

	inline static int32_t get_offset_of_usingMouse_18() { return static_cast<int32_t>(offsetof(AxisController_t3747398803, ___usingMouse_18)); }
	inline bool get_usingMouse_18() const { return ___usingMouse_18; }
	inline bool* get_address_of_usingMouse_18() { return &___usingMouse_18; }
	inline void set_usingMouse_18(bool value)
	{
		___usingMouse_18 = value;
	}

	inline static int32_t get_offset_of_inputManagerAxesNeedApproval_19() { return static_cast<int32_t>(offsetof(AxisController_t3747398803, ___inputManagerAxesNeedApproval_19)); }
	inline bool get_inputManagerAxesNeedApproval_19() const { return ___inputManagerAxesNeedApproval_19; }
	inline bool* get_address_of_inputManagerAxesNeedApproval_19() { return &___inputManagerAxesNeedApproval_19; }
	inline void set_inputManagerAxesNeedApproval_19(bool value)
	{
		___inputManagerAxesNeedApproval_19 = value;
	}

	inline static int32_t get_offset_of_inputManagerHorizontalAxisApproved_20() { return static_cast<int32_t>(offsetof(AxisController_t3747398803, ___inputManagerHorizontalAxisApproved_20)); }
	inline bool get_inputManagerHorizontalAxisApproved_20() const { return ___inputManagerHorizontalAxisApproved_20; }
	inline bool* get_address_of_inputManagerHorizontalAxisApproved_20() { return &___inputManagerHorizontalAxisApproved_20; }
	inline void set_inputManagerHorizontalAxisApproved_20(bool value)
	{
		___inputManagerHorizontalAxisApproved_20 = value;
	}

	inline static int32_t get_offset_of_inputManagerVerticalAxisApproved_21() { return static_cast<int32_t>(offsetof(AxisController_t3747398803, ___inputManagerVerticalAxisApproved_21)); }
	inline bool get_inputManagerVerticalAxisApproved_21() const { return ___inputManagerVerticalAxisApproved_21; }
	inline bool* get_address_of_inputManagerVerticalAxisApproved_21() { return &___inputManagerVerticalAxisApproved_21; }
	inline void set_inputManagerVerticalAxisApproved_21(bool value)
	{
		___inputManagerVerticalAxisApproved_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISCONTROLLER_T3747398803_H
#ifndef SPEECHINPUTHANDLER_T4153622436_H
#define SPEECHINPUTHANDLER_T4153622436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.SpeechInputHandler
struct  SpeechInputHandler_t4153622436  : public MonoBehaviour_t1158329972
{
public:
	// HoloToolkit.Unity.InputModule.SpeechInputHandler/KeywordAndResponse[] HoloToolkit.Unity.InputModule.SpeechInputHandler::Keywords
	KeywordAndResponseU5BU5D_t1823811952* ___Keywords_2;
	// System.Boolean HoloToolkit.Unity.InputModule.SpeechInputHandler::IsGlobalListener
	bool ___IsGlobalListener_3;
	// System.Boolean HoloToolkit.Unity.InputModule.SpeechInputHandler::PersistentKeywords
	bool ___PersistentKeywords_4;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent> HoloToolkit.Unity.InputModule.SpeechInputHandler::responses
	Dictionary_2_t2323514359 * ___responses_5;

public:
	inline static int32_t get_offset_of_Keywords_2() { return static_cast<int32_t>(offsetof(SpeechInputHandler_t4153622436, ___Keywords_2)); }
	inline KeywordAndResponseU5BU5D_t1823811952* get_Keywords_2() const { return ___Keywords_2; }
	inline KeywordAndResponseU5BU5D_t1823811952** get_address_of_Keywords_2() { return &___Keywords_2; }
	inline void set_Keywords_2(KeywordAndResponseU5BU5D_t1823811952* value)
	{
		___Keywords_2 = value;
		Il2CppCodeGenWriteBarrier((&___Keywords_2), value);
	}

	inline static int32_t get_offset_of_IsGlobalListener_3() { return static_cast<int32_t>(offsetof(SpeechInputHandler_t4153622436, ___IsGlobalListener_3)); }
	inline bool get_IsGlobalListener_3() const { return ___IsGlobalListener_3; }
	inline bool* get_address_of_IsGlobalListener_3() { return &___IsGlobalListener_3; }
	inline void set_IsGlobalListener_3(bool value)
	{
		___IsGlobalListener_3 = value;
	}

	inline static int32_t get_offset_of_PersistentKeywords_4() { return static_cast<int32_t>(offsetof(SpeechInputHandler_t4153622436, ___PersistentKeywords_4)); }
	inline bool get_PersistentKeywords_4() const { return ___PersistentKeywords_4; }
	inline bool* get_address_of_PersistentKeywords_4() { return &___PersistentKeywords_4; }
	inline void set_PersistentKeywords_4(bool value)
	{
		___PersistentKeywords_4 = value;
	}

	inline static int32_t get_offset_of_responses_5() { return static_cast<int32_t>(offsetof(SpeechInputHandler_t4153622436, ___responses_5)); }
	inline Dictionary_2_t2323514359 * get_responses_5() const { return ___responses_5; }
	inline Dictionary_2_t2323514359 ** get_address_of_responses_5() { return &___responses_5; }
	inline void set_responses_5(Dictionary_2_t2323514359 * value)
	{
		___responses_5 = value;
		Il2CppCodeGenWriteBarrier((&___responses_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHINPUTHANDLER_T4153622436_H
#ifndef SINGLETON_1_T1948573497_H
#define SINGLETON_1_T1948573497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.Singleton`1<HoloToolkit.Unity.InputModule.DictationInputManager>
struct  Singleton_1_t1948573497  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct Singleton_1_t1948573497_StaticFields
{
public:
	// T HoloToolkit.Unity.Singleton`1::instance
	DictationInputManager_t1394975144 * ___instance_2;
	// System.Boolean HoloToolkit.Unity.Singleton`1::searchForInstance
	bool ___searchForInstance_3;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t1948573497_StaticFields, ___instance_2)); }
	inline DictationInputManager_t1394975144 * get_instance_2() const { return ___instance_2; }
	inline DictationInputManager_t1394975144 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(DictationInputManager_t1394975144 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___instance_2), value);
	}

	inline static int32_t get_offset_of_searchForInstance_3() { return static_cast<int32_t>(offsetof(Singleton_1_t1948573497_StaticFields, ___searchForInstance_3)); }
	inline bool get_searchForInstance_3() const { return ___searchForInstance_3; }
	inline bool* get_address_of_searchForInstance_3() { return &___searchForInstance_3; }
	inline void set_searchForInstance_3(bool value)
	{
		___searchForInstance_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T1948573497_H
#ifndef SINGLETON_1_T1590627505_H
#define SINGLETON_1_T1590627505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.Singleton`1<HoloToolkit.Unity.InputModule.GazeManager>
struct  Singleton_1_t1590627505  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct Singleton_1_t1590627505_StaticFields
{
public:
	// T HoloToolkit.Unity.Singleton`1::instance
	GazeManager_t1037029152 * ___instance_2;
	// System.Boolean HoloToolkit.Unity.Singleton`1::searchForInstance
	bool ___searchForInstance_3;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t1590627505_StaticFields, ___instance_2)); }
	inline GazeManager_t1037029152 * get_instance_2() const { return ___instance_2; }
	inline GazeManager_t1037029152 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GazeManager_t1037029152 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___instance_2), value);
	}

	inline static int32_t get_offset_of_searchForInstance_3() { return static_cast<int32_t>(offsetof(Singleton_1_t1590627505_StaticFields, ___searchForInstance_3)); }
	inline bool get_searchForInstance_3() const { return ___searchForInstance_3; }
	inline bool* get_address_of_searchForInstance_3() { return &___searchForInstance_3; }
	inline void set_searchForInstance_3(bool value)
	{
		___searchForInstance_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T1590627505_H
#ifndef TRIGGERBUTTON_T385143428_H
#define TRIGGERBUTTON_T385143428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.TriggerButton
struct  TriggerButton_t385143428  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean HoloToolkit.Unity.InputModule.TriggerButton::IsEnabled
	bool ___IsEnabled_2;
	// System.Action HoloToolkit.Unity.InputModule.TriggerButton::ButtonPressed
	Action_t3226471752 * ___ButtonPressed_3;

public:
	inline static int32_t get_offset_of_IsEnabled_2() { return static_cast<int32_t>(offsetof(TriggerButton_t385143428, ___IsEnabled_2)); }
	inline bool get_IsEnabled_2() const { return ___IsEnabled_2; }
	inline bool* get_address_of_IsEnabled_2() { return &___IsEnabled_2; }
	inline void set_IsEnabled_2(bool value)
	{
		___IsEnabled_2 = value;
	}

	inline static int32_t get_offset_of_ButtonPressed_3() { return static_cast<int32_t>(offsetof(TriggerButton_t385143428, ___ButtonPressed_3)); }
	inline Action_t3226471752 * get_ButtonPressed_3() const { return ___ButtonPressed_3; }
	inline Action_t3226471752 ** get_address_of_ButtonPressed_3() { return &___ButtonPressed_3; }
	inline void set_ButtonPressed_3(Action_t3226471752 * value)
	{
		___ButtonPressed_3 = value;
		Il2CppCodeGenWriteBarrier((&___ButtonPressed_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERBUTTON_T385143428_H
#ifndef TAPTOPLACE_T3006952925_H
#define TAPTOPLACE_T3006952925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.TapToPlace
struct  TapToPlace_t3006952925  : public MonoBehaviour_t1158329972
{
public:
	// System.Single HoloToolkit.Unity.InputModule.TapToPlace::DefaultGazeDistance
	float ___DefaultGazeDistance_2;
	// System.Boolean HoloToolkit.Unity.InputModule.TapToPlace::PlaceParentOnTap
	bool ___PlaceParentOnTap_3;
	// UnityEngine.GameObject HoloToolkit.Unity.InputModule.TapToPlace::ParentGameObjectToPlace
	GameObject_t1756533147 * ___ParentGameObjectToPlace_4;
	// System.Boolean HoloToolkit.Unity.InputModule.TapToPlace::IsBeingPlaced
	bool ___IsBeingPlaced_5;
	// System.Boolean HoloToolkit.Unity.InputModule.TapToPlace::AllowMeshVisualizationControl
	bool ___AllowMeshVisualizationControl_6;
	// System.Boolean HoloToolkit.Unity.InputModule.TapToPlace::UseColliderCenter
	bool ___UseColliderCenter_7;
	// HoloToolkit.Unity.Interpolator HoloToolkit.Unity.InputModule.TapToPlace::interpolator
	Interpolator_t871480351 * ___interpolator_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32> HoloToolkit.Unity.InputModule.TapToPlace::layerCache
	Dictionary_2_t1107255596 * ___layerCache_10;
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.TapToPlace::PlacementPosOffset
	Vector3_t2243707580  ___PlacementPosOffset_11;

public:
	inline static int32_t get_offset_of_DefaultGazeDistance_2() { return static_cast<int32_t>(offsetof(TapToPlace_t3006952925, ___DefaultGazeDistance_2)); }
	inline float get_DefaultGazeDistance_2() const { return ___DefaultGazeDistance_2; }
	inline float* get_address_of_DefaultGazeDistance_2() { return &___DefaultGazeDistance_2; }
	inline void set_DefaultGazeDistance_2(float value)
	{
		___DefaultGazeDistance_2 = value;
	}

	inline static int32_t get_offset_of_PlaceParentOnTap_3() { return static_cast<int32_t>(offsetof(TapToPlace_t3006952925, ___PlaceParentOnTap_3)); }
	inline bool get_PlaceParentOnTap_3() const { return ___PlaceParentOnTap_3; }
	inline bool* get_address_of_PlaceParentOnTap_3() { return &___PlaceParentOnTap_3; }
	inline void set_PlaceParentOnTap_3(bool value)
	{
		___PlaceParentOnTap_3 = value;
	}

	inline static int32_t get_offset_of_ParentGameObjectToPlace_4() { return static_cast<int32_t>(offsetof(TapToPlace_t3006952925, ___ParentGameObjectToPlace_4)); }
	inline GameObject_t1756533147 * get_ParentGameObjectToPlace_4() const { return ___ParentGameObjectToPlace_4; }
	inline GameObject_t1756533147 ** get_address_of_ParentGameObjectToPlace_4() { return &___ParentGameObjectToPlace_4; }
	inline void set_ParentGameObjectToPlace_4(GameObject_t1756533147 * value)
	{
		___ParentGameObjectToPlace_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParentGameObjectToPlace_4), value);
	}

	inline static int32_t get_offset_of_IsBeingPlaced_5() { return static_cast<int32_t>(offsetof(TapToPlace_t3006952925, ___IsBeingPlaced_5)); }
	inline bool get_IsBeingPlaced_5() const { return ___IsBeingPlaced_5; }
	inline bool* get_address_of_IsBeingPlaced_5() { return &___IsBeingPlaced_5; }
	inline void set_IsBeingPlaced_5(bool value)
	{
		___IsBeingPlaced_5 = value;
	}

	inline static int32_t get_offset_of_AllowMeshVisualizationControl_6() { return static_cast<int32_t>(offsetof(TapToPlace_t3006952925, ___AllowMeshVisualizationControl_6)); }
	inline bool get_AllowMeshVisualizationControl_6() const { return ___AllowMeshVisualizationControl_6; }
	inline bool* get_address_of_AllowMeshVisualizationControl_6() { return &___AllowMeshVisualizationControl_6; }
	inline void set_AllowMeshVisualizationControl_6(bool value)
	{
		___AllowMeshVisualizationControl_6 = value;
	}

	inline static int32_t get_offset_of_UseColliderCenter_7() { return static_cast<int32_t>(offsetof(TapToPlace_t3006952925, ___UseColliderCenter_7)); }
	inline bool get_UseColliderCenter_7() const { return ___UseColliderCenter_7; }
	inline bool* get_address_of_UseColliderCenter_7() { return &___UseColliderCenter_7; }
	inline void set_UseColliderCenter_7(bool value)
	{
		___UseColliderCenter_7 = value;
	}

	inline static int32_t get_offset_of_interpolator_8() { return static_cast<int32_t>(offsetof(TapToPlace_t3006952925, ___interpolator_8)); }
	inline Interpolator_t871480351 * get_interpolator_8() const { return ___interpolator_8; }
	inline Interpolator_t871480351 ** get_address_of_interpolator_8() { return &___interpolator_8; }
	inline void set_interpolator_8(Interpolator_t871480351 * value)
	{
		___interpolator_8 = value;
		Il2CppCodeGenWriteBarrier((&___interpolator_8), value);
	}

	inline static int32_t get_offset_of_layerCache_10() { return static_cast<int32_t>(offsetof(TapToPlace_t3006952925, ___layerCache_10)); }
	inline Dictionary_2_t1107255596 * get_layerCache_10() const { return ___layerCache_10; }
	inline Dictionary_2_t1107255596 ** get_address_of_layerCache_10() { return &___layerCache_10; }
	inline void set_layerCache_10(Dictionary_2_t1107255596 * value)
	{
		___layerCache_10 = value;
		Il2CppCodeGenWriteBarrier((&___layerCache_10), value);
	}

	inline static int32_t get_offset_of_PlacementPosOffset_11() { return static_cast<int32_t>(offsetof(TapToPlace_t3006952925, ___PlacementPosOffset_11)); }
	inline Vector3_t2243707580  get_PlacementPosOffset_11() const { return ___PlacementPosOffset_11; }
	inline Vector3_t2243707580 * get_address_of_PlacementPosOffset_11() { return &___PlacementPosOffset_11; }
	inline void set_PlacementPosOffset_11(Vector3_t2243707580  value)
	{
		___PlacementPosOffset_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAPTOPLACE_T3006952925_H
#ifndef DICTATIONINPUTMANAGER_T1394975144_H
#define DICTATIONINPUTMANAGER_T1394975144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.DictationInputManager
struct  DictationInputManager_t1394975144  : public Singleton_1_t1948573497
{
public:

public:
};

struct DictationInputManager_t1394975144_StaticFields
{
public:
	// System.Text.StringBuilder HoloToolkit.Unity.InputModule.DictationInputManager::textSoFar
	StringBuilder_t1221177846 * ___textSoFar_4;
	// System.String HoloToolkit.Unity.InputModule.DictationInputManager::DeviceName
	String_t* ___DeviceName_5;
	// System.Int32 HoloToolkit.Unity.InputModule.DictationInputManager::samplingRate
	int32_t ___samplingRate_6;
	// System.Boolean HoloToolkit.Unity.InputModule.DictationInputManager::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_7;
	// System.String HoloToolkit.Unity.InputModule.DictationInputManager::dictationResult
	String_t* ___dictationResult_8;
	// UnityEngine.AudioClip HoloToolkit.Unity.InputModule.DictationInputManager::dictationAudioClip
	AudioClip_t1932558630 * ___dictationAudioClip_9;
	// UnityEngine.Windows.Speech.DictationRecognizer HoloToolkit.Unity.InputModule.DictationInputManager::dictationRecognizer
	DictationRecognizer_t894834159 * ___dictationRecognizer_10;
	// System.Boolean HoloToolkit.Unity.InputModule.DictationInputManager::isTransitioning
	bool ___isTransitioning_11;
	// System.Boolean HoloToolkit.Unity.InputModule.DictationInputManager::hasFailed
	bool ___hasFailed_12;

public:
	inline static int32_t get_offset_of_textSoFar_4() { return static_cast<int32_t>(offsetof(DictationInputManager_t1394975144_StaticFields, ___textSoFar_4)); }
	inline StringBuilder_t1221177846 * get_textSoFar_4() const { return ___textSoFar_4; }
	inline StringBuilder_t1221177846 ** get_address_of_textSoFar_4() { return &___textSoFar_4; }
	inline void set_textSoFar_4(StringBuilder_t1221177846 * value)
	{
		___textSoFar_4 = value;
		Il2CppCodeGenWriteBarrier((&___textSoFar_4), value);
	}

	inline static int32_t get_offset_of_DeviceName_5() { return static_cast<int32_t>(offsetof(DictationInputManager_t1394975144_StaticFields, ___DeviceName_5)); }
	inline String_t* get_DeviceName_5() const { return ___DeviceName_5; }
	inline String_t** get_address_of_DeviceName_5() { return &___DeviceName_5; }
	inline void set_DeviceName_5(String_t* value)
	{
		___DeviceName_5 = value;
		Il2CppCodeGenWriteBarrier((&___DeviceName_5), value);
	}

	inline static int32_t get_offset_of_samplingRate_6() { return static_cast<int32_t>(offsetof(DictationInputManager_t1394975144_StaticFields, ___samplingRate_6)); }
	inline int32_t get_samplingRate_6() const { return ___samplingRate_6; }
	inline int32_t* get_address_of_samplingRate_6() { return &___samplingRate_6; }
	inline void set_samplingRate_6(int32_t value)
	{
		___samplingRate_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsListeningU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DictationInputManager_t1394975144_StaticFields, ___U3CIsListeningU3Ek__BackingField_7)); }
	inline bool get_U3CIsListeningU3Ek__BackingField_7() const { return ___U3CIsListeningU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsListeningU3Ek__BackingField_7() { return &___U3CIsListeningU3Ek__BackingField_7; }
	inline void set_U3CIsListeningU3Ek__BackingField_7(bool value)
	{
		___U3CIsListeningU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_dictationResult_8() { return static_cast<int32_t>(offsetof(DictationInputManager_t1394975144_StaticFields, ___dictationResult_8)); }
	inline String_t* get_dictationResult_8() const { return ___dictationResult_8; }
	inline String_t** get_address_of_dictationResult_8() { return &___dictationResult_8; }
	inline void set_dictationResult_8(String_t* value)
	{
		___dictationResult_8 = value;
		Il2CppCodeGenWriteBarrier((&___dictationResult_8), value);
	}

	inline static int32_t get_offset_of_dictationAudioClip_9() { return static_cast<int32_t>(offsetof(DictationInputManager_t1394975144_StaticFields, ___dictationAudioClip_9)); }
	inline AudioClip_t1932558630 * get_dictationAudioClip_9() const { return ___dictationAudioClip_9; }
	inline AudioClip_t1932558630 ** get_address_of_dictationAudioClip_9() { return &___dictationAudioClip_9; }
	inline void set_dictationAudioClip_9(AudioClip_t1932558630 * value)
	{
		___dictationAudioClip_9 = value;
		Il2CppCodeGenWriteBarrier((&___dictationAudioClip_9), value);
	}

	inline static int32_t get_offset_of_dictationRecognizer_10() { return static_cast<int32_t>(offsetof(DictationInputManager_t1394975144_StaticFields, ___dictationRecognizer_10)); }
	inline DictationRecognizer_t894834159 * get_dictationRecognizer_10() const { return ___dictationRecognizer_10; }
	inline DictationRecognizer_t894834159 ** get_address_of_dictationRecognizer_10() { return &___dictationRecognizer_10; }
	inline void set_dictationRecognizer_10(DictationRecognizer_t894834159 * value)
	{
		___dictationRecognizer_10 = value;
		Il2CppCodeGenWriteBarrier((&___dictationRecognizer_10), value);
	}

	inline static int32_t get_offset_of_isTransitioning_11() { return static_cast<int32_t>(offsetof(DictationInputManager_t1394975144_StaticFields, ___isTransitioning_11)); }
	inline bool get_isTransitioning_11() const { return ___isTransitioning_11; }
	inline bool* get_address_of_isTransitioning_11() { return &___isTransitioning_11; }
	inline void set_isTransitioning_11(bool value)
	{
		___isTransitioning_11 = value;
	}

	inline static int32_t get_offset_of_hasFailed_12() { return static_cast<int32_t>(offsetof(DictationInputManager_t1394975144_StaticFields, ___hasFailed_12)); }
	inline bool get_hasFailed_12() const { return ___hasFailed_12; }
	inline bool* get_address_of_hasFailed_12() { return &___hasFailed_12; }
	inline void set_hasFailed_12(bool value)
	{
		___hasFailed_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONINPUTMANAGER_T1394975144_H
#ifndef GAMEPADINPUT_T2080303275_H
#define GAMEPADINPUT_T2080303275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.GamepadInput
struct  GamepadInput_t2080303275  : public BaseInputSource_t2378327172
{
public:
	// System.String HoloToolkit.Unity.InputModule.GamepadInput::GamePadButtonA
	String_t* ___GamePadButtonA_2;
	// System.UInt32 HoloToolkit.Unity.InputModule.GamepadInput::GamePadId
	uint32_t ___GamePadId_3;
	// System.Single HoloToolkit.Unity.InputModule.GamepadInput::HoldStartedInterval
	float ___HoldStartedInterval_4;
	// System.Single HoloToolkit.Unity.InputModule.GamepadInput::HoldCompletedInterval
	float ___HoldCompletedInterval_5;
	// System.String HoloToolkit.Unity.InputModule.GamepadInput::NavigateAroundXAxisName
	String_t* ___NavigateAroundXAxisName_6;
	// System.String HoloToolkit.Unity.InputModule.GamepadInput::NavigateAroundYAxisName
	String_t* ___NavigateAroundYAxisName_7;
	// System.Boolean HoloToolkit.Unity.InputModule.GamepadInput::isAPressed
	bool ___isAPressed_8;
	// System.Boolean HoloToolkit.Unity.InputModule.GamepadInput::holdStarted
	bool ___holdStarted_9;
	// System.Boolean HoloToolkit.Unity.InputModule.GamepadInput::raiseOnce
	bool ___raiseOnce_10;
	// System.Boolean HoloToolkit.Unity.InputModule.GamepadInput::navigationStarted
	bool ___navigationStarted_11;
	// System.Boolean HoloToolkit.Unity.InputModule.GamepadInput::navigationCompleted
	bool ___navigationCompleted_12;
	// HoloToolkit.Unity.InputModule.InputManager HoloToolkit.Unity.InputModule.GamepadInput::inputManager
	InputManager_t1871732949 * ___inputManager_13;
	// HoloToolkit.Unity.InputModule.GamepadInput/GestureState HoloToolkit.Unity.InputModule.GamepadInput::currentGestureState
	int32_t ___currentGestureState_14;

public:
	inline static int32_t get_offset_of_GamePadButtonA_2() { return static_cast<int32_t>(offsetof(GamepadInput_t2080303275, ___GamePadButtonA_2)); }
	inline String_t* get_GamePadButtonA_2() const { return ___GamePadButtonA_2; }
	inline String_t** get_address_of_GamePadButtonA_2() { return &___GamePadButtonA_2; }
	inline void set_GamePadButtonA_2(String_t* value)
	{
		___GamePadButtonA_2 = value;
		Il2CppCodeGenWriteBarrier((&___GamePadButtonA_2), value);
	}

	inline static int32_t get_offset_of_GamePadId_3() { return static_cast<int32_t>(offsetof(GamepadInput_t2080303275, ___GamePadId_3)); }
	inline uint32_t get_GamePadId_3() const { return ___GamePadId_3; }
	inline uint32_t* get_address_of_GamePadId_3() { return &___GamePadId_3; }
	inline void set_GamePadId_3(uint32_t value)
	{
		___GamePadId_3 = value;
	}

	inline static int32_t get_offset_of_HoldStartedInterval_4() { return static_cast<int32_t>(offsetof(GamepadInput_t2080303275, ___HoldStartedInterval_4)); }
	inline float get_HoldStartedInterval_4() const { return ___HoldStartedInterval_4; }
	inline float* get_address_of_HoldStartedInterval_4() { return &___HoldStartedInterval_4; }
	inline void set_HoldStartedInterval_4(float value)
	{
		___HoldStartedInterval_4 = value;
	}

	inline static int32_t get_offset_of_HoldCompletedInterval_5() { return static_cast<int32_t>(offsetof(GamepadInput_t2080303275, ___HoldCompletedInterval_5)); }
	inline float get_HoldCompletedInterval_5() const { return ___HoldCompletedInterval_5; }
	inline float* get_address_of_HoldCompletedInterval_5() { return &___HoldCompletedInterval_5; }
	inline void set_HoldCompletedInterval_5(float value)
	{
		___HoldCompletedInterval_5 = value;
	}

	inline static int32_t get_offset_of_NavigateAroundXAxisName_6() { return static_cast<int32_t>(offsetof(GamepadInput_t2080303275, ___NavigateAroundXAxisName_6)); }
	inline String_t* get_NavigateAroundXAxisName_6() const { return ___NavigateAroundXAxisName_6; }
	inline String_t** get_address_of_NavigateAroundXAxisName_6() { return &___NavigateAroundXAxisName_6; }
	inline void set_NavigateAroundXAxisName_6(String_t* value)
	{
		___NavigateAroundXAxisName_6 = value;
		Il2CppCodeGenWriteBarrier((&___NavigateAroundXAxisName_6), value);
	}

	inline static int32_t get_offset_of_NavigateAroundYAxisName_7() { return static_cast<int32_t>(offsetof(GamepadInput_t2080303275, ___NavigateAroundYAxisName_7)); }
	inline String_t* get_NavigateAroundYAxisName_7() const { return ___NavigateAroundYAxisName_7; }
	inline String_t** get_address_of_NavigateAroundYAxisName_7() { return &___NavigateAroundYAxisName_7; }
	inline void set_NavigateAroundYAxisName_7(String_t* value)
	{
		___NavigateAroundYAxisName_7 = value;
		Il2CppCodeGenWriteBarrier((&___NavigateAroundYAxisName_7), value);
	}

	inline static int32_t get_offset_of_isAPressed_8() { return static_cast<int32_t>(offsetof(GamepadInput_t2080303275, ___isAPressed_8)); }
	inline bool get_isAPressed_8() const { return ___isAPressed_8; }
	inline bool* get_address_of_isAPressed_8() { return &___isAPressed_8; }
	inline void set_isAPressed_8(bool value)
	{
		___isAPressed_8 = value;
	}

	inline static int32_t get_offset_of_holdStarted_9() { return static_cast<int32_t>(offsetof(GamepadInput_t2080303275, ___holdStarted_9)); }
	inline bool get_holdStarted_9() const { return ___holdStarted_9; }
	inline bool* get_address_of_holdStarted_9() { return &___holdStarted_9; }
	inline void set_holdStarted_9(bool value)
	{
		___holdStarted_9 = value;
	}

	inline static int32_t get_offset_of_raiseOnce_10() { return static_cast<int32_t>(offsetof(GamepadInput_t2080303275, ___raiseOnce_10)); }
	inline bool get_raiseOnce_10() const { return ___raiseOnce_10; }
	inline bool* get_address_of_raiseOnce_10() { return &___raiseOnce_10; }
	inline void set_raiseOnce_10(bool value)
	{
		___raiseOnce_10 = value;
	}

	inline static int32_t get_offset_of_navigationStarted_11() { return static_cast<int32_t>(offsetof(GamepadInput_t2080303275, ___navigationStarted_11)); }
	inline bool get_navigationStarted_11() const { return ___navigationStarted_11; }
	inline bool* get_address_of_navigationStarted_11() { return &___navigationStarted_11; }
	inline void set_navigationStarted_11(bool value)
	{
		___navigationStarted_11 = value;
	}

	inline static int32_t get_offset_of_navigationCompleted_12() { return static_cast<int32_t>(offsetof(GamepadInput_t2080303275, ___navigationCompleted_12)); }
	inline bool get_navigationCompleted_12() const { return ___navigationCompleted_12; }
	inline bool* get_address_of_navigationCompleted_12() { return &___navigationCompleted_12; }
	inline void set_navigationCompleted_12(bool value)
	{
		___navigationCompleted_12 = value;
	}

	inline static int32_t get_offset_of_inputManager_13() { return static_cast<int32_t>(offsetof(GamepadInput_t2080303275, ___inputManager_13)); }
	inline InputManager_t1871732949 * get_inputManager_13() const { return ___inputManager_13; }
	inline InputManager_t1871732949 ** get_address_of_inputManager_13() { return &___inputManager_13; }
	inline void set_inputManager_13(InputManager_t1871732949 * value)
	{
		___inputManager_13 = value;
		Il2CppCodeGenWriteBarrier((&___inputManager_13), value);
	}

	inline static int32_t get_offset_of_currentGestureState_14() { return static_cast<int32_t>(offsetof(GamepadInput_t2080303275, ___currentGestureState_14)); }
	inline int32_t get_currentGestureState_14() const { return ___currentGestureState_14; }
	inline int32_t* get_address_of_currentGestureState_14() { return &___currentGestureState_14; }
	inline void set_currentGestureState_14(int32_t value)
	{
		___currentGestureState_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEPADINPUT_T2080303275_H
#ifndef CUSTOMINPUTSOURCE_T2925000382_H
#define CUSTOMINPUTSOURCE_T2925000382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.CustomInputSource
struct  CustomInputSource_t2925000382  : public BaseInputSource_t2378327172
{
public:
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputSource::SupportsPosition
	bool ___SupportsPosition_2;
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputSource::SupportsRotation
	bool ___SupportsRotation_3;
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputSource::SupportsRay
	bool ___SupportsRay_4;
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputSource::SupportsMenuButton
	bool ___SupportsMenuButton_5;
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputSource::SupportsGrasp
	bool ___SupportsGrasp_6;
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputSource::RaiseEventsBasedOnVisibility
	bool ___RaiseEventsBasedOnVisibility_7;
	// HoloToolkit.Unity.InputModule.InteractionSourceInfo HoloToolkit.Unity.InputModule.CustomInputSource::SourceKind
	int32_t ___SourceKind_8;
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.CustomInputSource::ControllerPosition
	Vector3_t2243707580  ___ControllerPosition_9;
	// UnityEngine.Quaternion HoloToolkit.Unity.InputModule.CustomInputSource::ControllerRotation
	Quaternion_t4030073918  ___ControllerRotation_10;
	// System.Nullable`1<UnityEngine.Ray> HoloToolkit.Unity.InputModule.CustomInputSource::PointingRay
	Nullable_1_t732672539  ___PointingRay_11;
	// HoloToolkit.Unity.InputModule.CustomInputSource/ButtonStates HoloToolkit.Unity.InputModule.CustomInputSource::currentButtonStates
	ButtonStates_t3673093364 * ___currentButtonStates_12;
	// System.UInt32 HoloToolkit.Unity.InputModule.CustomInputSource::controllerId
	uint32_t ___controllerId_13;
	// HoloToolkit.Unity.InputModule.CustomInputControl HoloToolkit.Unity.InputModule.CustomInputSource::manualController
	CustomInputControl_t530759532 * ___manualController_14;
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputSource::currentlyVisible
	bool ___currentlyVisible_15;
	// System.Boolean HoloToolkit.Unity.InputModule.CustomInputSource::visibilityChanged
	bool ___visibilityChanged_16;
	// System.Single HoloToolkit.Unity.InputModule.CustomInputSource::manipulationStartMovementThreshold
	float ___manipulationStartMovementThreshold_18;

public:
	inline static int32_t get_offset_of_SupportsPosition_2() { return static_cast<int32_t>(offsetof(CustomInputSource_t2925000382, ___SupportsPosition_2)); }
	inline bool get_SupportsPosition_2() const { return ___SupportsPosition_2; }
	inline bool* get_address_of_SupportsPosition_2() { return &___SupportsPosition_2; }
	inline void set_SupportsPosition_2(bool value)
	{
		___SupportsPosition_2 = value;
	}

	inline static int32_t get_offset_of_SupportsRotation_3() { return static_cast<int32_t>(offsetof(CustomInputSource_t2925000382, ___SupportsRotation_3)); }
	inline bool get_SupportsRotation_3() const { return ___SupportsRotation_3; }
	inline bool* get_address_of_SupportsRotation_3() { return &___SupportsRotation_3; }
	inline void set_SupportsRotation_3(bool value)
	{
		___SupportsRotation_3 = value;
	}

	inline static int32_t get_offset_of_SupportsRay_4() { return static_cast<int32_t>(offsetof(CustomInputSource_t2925000382, ___SupportsRay_4)); }
	inline bool get_SupportsRay_4() const { return ___SupportsRay_4; }
	inline bool* get_address_of_SupportsRay_4() { return &___SupportsRay_4; }
	inline void set_SupportsRay_4(bool value)
	{
		___SupportsRay_4 = value;
	}

	inline static int32_t get_offset_of_SupportsMenuButton_5() { return static_cast<int32_t>(offsetof(CustomInputSource_t2925000382, ___SupportsMenuButton_5)); }
	inline bool get_SupportsMenuButton_5() const { return ___SupportsMenuButton_5; }
	inline bool* get_address_of_SupportsMenuButton_5() { return &___SupportsMenuButton_5; }
	inline void set_SupportsMenuButton_5(bool value)
	{
		___SupportsMenuButton_5 = value;
	}

	inline static int32_t get_offset_of_SupportsGrasp_6() { return static_cast<int32_t>(offsetof(CustomInputSource_t2925000382, ___SupportsGrasp_6)); }
	inline bool get_SupportsGrasp_6() const { return ___SupportsGrasp_6; }
	inline bool* get_address_of_SupportsGrasp_6() { return &___SupportsGrasp_6; }
	inline void set_SupportsGrasp_6(bool value)
	{
		___SupportsGrasp_6 = value;
	}

	inline static int32_t get_offset_of_RaiseEventsBasedOnVisibility_7() { return static_cast<int32_t>(offsetof(CustomInputSource_t2925000382, ___RaiseEventsBasedOnVisibility_7)); }
	inline bool get_RaiseEventsBasedOnVisibility_7() const { return ___RaiseEventsBasedOnVisibility_7; }
	inline bool* get_address_of_RaiseEventsBasedOnVisibility_7() { return &___RaiseEventsBasedOnVisibility_7; }
	inline void set_RaiseEventsBasedOnVisibility_7(bool value)
	{
		___RaiseEventsBasedOnVisibility_7 = value;
	}

	inline static int32_t get_offset_of_SourceKind_8() { return static_cast<int32_t>(offsetof(CustomInputSource_t2925000382, ___SourceKind_8)); }
	inline int32_t get_SourceKind_8() const { return ___SourceKind_8; }
	inline int32_t* get_address_of_SourceKind_8() { return &___SourceKind_8; }
	inline void set_SourceKind_8(int32_t value)
	{
		___SourceKind_8 = value;
	}

	inline static int32_t get_offset_of_ControllerPosition_9() { return static_cast<int32_t>(offsetof(CustomInputSource_t2925000382, ___ControllerPosition_9)); }
	inline Vector3_t2243707580  get_ControllerPosition_9() const { return ___ControllerPosition_9; }
	inline Vector3_t2243707580 * get_address_of_ControllerPosition_9() { return &___ControllerPosition_9; }
	inline void set_ControllerPosition_9(Vector3_t2243707580  value)
	{
		___ControllerPosition_9 = value;
	}

	inline static int32_t get_offset_of_ControllerRotation_10() { return static_cast<int32_t>(offsetof(CustomInputSource_t2925000382, ___ControllerRotation_10)); }
	inline Quaternion_t4030073918  get_ControllerRotation_10() const { return ___ControllerRotation_10; }
	inline Quaternion_t4030073918 * get_address_of_ControllerRotation_10() { return &___ControllerRotation_10; }
	inline void set_ControllerRotation_10(Quaternion_t4030073918  value)
	{
		___ControllerRotation_10 = value;
	}

	inline static int32_t get_offset_of_PointingRay_11() { return static_cast<int32_t>(offsetof(CustomInputSource_t2925000382, ___PointingRay_11)); }
	inline Nullable_1_t732672539  get_PointingRay_11() const { return ___PointingRay_11; }
	inline Nullable_1_t732672539 * get_address_of_PointingRay_11() { return &___PointingRay_11; }
	inline void set_PointingRay_11(Nullable_1_t732672539  value)
	{
		___PointingRay_11 = value;
	}

	inline static int32_t get_offset_of_currentButtonStates_12() { return static_cast<int32_t>(offsetof(CustomInputSource_t2925000382, ___currentButtonStates_12)); }
	inline ButtonStates_t3673093364 * get_currentButtonStates_12() const { return ___currentButtonStates_12; }
	inline ButtonStates_t3673093364 ** get_address_of_currentButtonStates_12() { return &___currentButtonStates_12; }
	inline void set_currentButtonStates_12(ButtonStates_t3673093364 * value)
	{
		___currentButtonStates_12 = value;
		Il2CppCodeGenWriteBarrier((&___currentButtonStates_12), value);
	}

	inline static int32_t get_offset_of_controllerId_13() { return static_cast<int32_t>(offsetof(CustomInputSource_t2925000382, ___controllerId_13)); }
	inline uint32_t get_controllerId_13() const { return ___controllerId_13; }
	inline uint32_t* get_address_of_controllerId_13() { return &___controllerId_13; }
	inline void set_controllerId_13(uint32_t value)
	{
		___controllerId_13 = value;
	}

	inline static int32_t get_offset_of_manualController_14() { return static_cast<int32_t>(offsetof(CustomInputSource_t2925000382, ___manualController_14)); }
	inline CustomInputControl_t530759532 * get_manualController_14() const { return ___manualController_14; }
	inline CustomInputControl_t530759532 ** get_address_of_manualController_14() { return &___manualController_14; }
	inline void set_manualController_14(CustomInputControl_t530759532 * value)
	{
		___manualController_14 = value;
		Il2CppCodeGenWriteBarrier((&___manualController_14), value);
	}

	inline static int32_t get_offset_of_currentlyVisible_15() { return static_cast<int32_t>(offsetof(CustomInputSource_t2925000382, ___currentlyVisible_15)); }
	inline bool get_currentlyVisible_15() const { return ___currentlyVisible_15; }
	inline bool* get_address_of_currentlyVisible_15() { return &___currentlyVisible_15; }
	inline void set_currentlyVisible_15(bool value)
	{
		___currentlyVisible_15 = value;
	}

	inline static int32_t get_offset_of_visibilityChanged_16() { return static_cast<int32_t>(offsetof(CustomInputSource_t2925000382, ___visibilityChanged_16)); }
	inline bool get_visibilityChanged_16() const { return ___visibilityChanged_16; }
	inline bool* get_address_of_visibilityChanged_16() { return &___visibilityChanged_16; }
	inline void set_visibilityChanged_16(bool value)
	{
		___visibilityChanged_16 = value;
	}

	inline static int32_t get_offset_of_manipulationStartMovementThreshold_18() { return static_cast<int32_t>(offsetof(CustomInputSource_t2925000382, ___manipulationStartMovementThreshold_18)); }
	inline float get_manipulationStartMovementThreshold_18() const { return ___manipulationStartMovementThreshold_18; }
	inline float* get_address_of_manipulationStartMovementThreshold_18() { return &___manipulationStartMovementThreshold_18; }
	inline void set_manipulationStartMovementThreshold_18(float value)
	{
		___manipulationStartMovementThreshold_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMINPUTSOURCE_T2925000382_H
#ifndef GAZEMANAGER_T1037029152_H
#define GAZEMANAGER_T1037029152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.GazeManager
struct  GazeManager_t1037029152  : public Singleton_1_t1590627505
{
public:
	// System.Boolean HoloToolkit.Unity.InputModule.GazeManager::<IsGazingAtObject>k__BackingField
	bool ___U3CIsGazingAtObjectU3Ek__BackingField_4;
	// HoloToolkit.Unity.InputModule.GazeManager/FocusedChangedDelegate HoloToolkit.Unity.InputModule.GazeManager::FocusedObjectChanged
	FocusedChangedDelegate_t2430817330 * ___FocusedObjectChanged_5;
	// UnityEngine.EventSystems.PointerEventData HoloToolkit.Unity.InputModule.GazeManager::<UnityUIPointerEvent>k__BackingField
	PointerEventData_t1599784723 * ___U3CUnityUIPointerEventU3Ek__BackingField_6;
	// UnityEngine.RaycastHit HoloToolkit.Unity.InputModule.GazeManager::<HitInfo>k__BackingField
	RaycastHit_t87180320  ___U3CHitInfoU3Ek__BackingField_7;
	// UnityEngine.GameObject HoloToolkit.Unity.InputModule.GazeManager::<HitObject>k__BackingField
	GameObject_t1756533147 * ___U3CHitObjectU3Ek__BackingField_8;
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.GazeManager::<HitPosition>k__BackingField
	Vector3_t2243707580  ___U3CHitPositionU3Ek__BackingField_9;
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.GazeManager::<HitNormal>k__BackingField
	Vector3_t2243707580  ___U3CHitNormalU3Ek__BackingField_10;
	// System.Single HoloToolkit.Unity.InputModule.GazeManager::MaxGazeCollisionDistance
	float ___MaxGazeCollisionDistance_11;
	// UnityEngine.LayerMask[] HoloToolkit.Unity.InputModule.GazeManager::RaycastLayerMasks
	LayerMaskU5BU5D_t1922075232* ___RaycastLayerMasks_12;
	// HoloToolkit.Unity.InputModule.BaseRayStabilizer HoloToolkit.Unity.InputModule.GazeManager::Stabilizer
	BaseRayStabilizer_t2987552384 * ___Stabilizer_13;
	// UnityEngine.Transform HoloToolkit.Unity.InputModule.GazeManager::GazeTransform
	Transform_t3275118058 * ___GazeTransform_14;
	// System.Boolean HoloToolkit.Unity.InputModule.GazeManager::DebugDrawRay
	bool ___DebugDrawRay_15;
	// UnityEngine.Ray HoloToolkit.Unity.InputModule.GazeManager::<Ray>k__BackingField
	Ray_t2469606224  ___U3CRayU3Ek__BackingField_16;
	// System.Single HoloToolkit.Unity.InputModule.GazeManager::lastHitDistance
	float ___lastHitDistance_17;

public:
	inline static int32_t get_offset_of_U3CIsGazingAtObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GazeManager_t1037029152, ___U3CIsGazingAtObjectU3Ek__BackingField_4)); }
	inline bool get_U3CIsGazingAtObjectU3Ek__BackingField_4() const { return ___U3CIsGazingAtObjectU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsGazingAtObjectU3Ek__BackingField_4() { return &___U3CIsGazingAtObjectU3Ek__BackingField_4; }
	inline void set_U3CIsGazingAtObjectU3Ek__BackingField_4(bool value)
	{
		___U3CIsGazingAtObjectU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_FocusedObjectChanged_5() { return static_cast<int32_t>(offsetof(GazeManager_t1037029152, ___FocusedObjectChanged_5)); }
	inline FocusedChangedDelegate_t2430817330 * get_FocusedObjectChanged_5() const { return ___FocusedObjectChanged_5; }
	inline FocusedChangedDelegate_t2430817330 ** get_address_of_FocusedObjectChanged_5() { return &___FocusedObjectChanged_5; }
	inline void set_FocusedObjectChanged_5(FocusedChangedDelegate_t2430817330 * value)
	{
		___FocusedObjectChanged_5 = value;
		Il2CppCodeGenWriteBarrier((&___FocusedObjectChanged_5), value);
	}

	inline static int32_t get_offset_of_U3CUnityUIPointerEventU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GazeManager_t1037029152, ___U3CUnityUIPointerEventU3Ek__BackingField_6)); }
	inline PointerEventData_t1599784723 * get_U3CUnityUIPointerEventU3Ek__BackingField_6() const { return ___U3CUnityUIPointerEventU3Ek__BackingField_6; }
	inline PointerEventData_t1599784723 ** get_address_of_U3CUnityUIPointerEventU3Ek__BackingField_6() { return &___U3CUnityUIPointerEventU3Ek__BackingField_6; }
	inline void set_U3CUnityUIPointerEventU3Ek__BackingField_6(PointerEventData_t1599784723 * value)
	{
		___U3CUnityUIPointerEventU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUnityUIPointerEventU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CHitInfoU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GazeManager_t1037029152, ___U3CHitInfoU3Ek__BackingField_7)); }
	inline RaycastHit_t87180320  get_U3CHitInfoU3Ek__BackingField_7() const { return ___U3CHitInfoU3Ek__BackingField_7; }
	inline RaycastHit_t87180320 * get_address_of_U3CHitInfoU3Ek__BackingField_7() { return &___U3CHitInfoU3Ek__BackingField_7; }
	inline void set_U3CHitInfoU3Ek__BackingField_7(RaycastHit_t87180320  value)
	{
		___U3CHitInfoU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CHitObjectU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GazeManager_t1037029152, ___U3CHitObjectU3Ek__BackingField_8)); }
	inline GameObject_t1756533147 * get_U3CHitObjectU3Ek__BackingField_8() const { return ___U3CHitObjectU3Ek__BackingField_8; }
	inline GameObject_t1756533147 ** get_address_of_U3CHitObjectU3Ek__BackingField_8() { return &___U3CHitObjectU3Ek__BackingField_8; }
	inline void set_U3CHitObjectU3Ek__BackingField_8(GameObject_t1756533147 * value)
	{
		___U3CHitObjectU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHitObjectU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CHitPositionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GazeManager_t1037029152, ___U3CHitPositionU3Ek__BackingField_9)); }
	inline Vector3_t2243707580  get_U3CHitPositionU3Ek__BackingField_9() const { return ___U3CHitPositionU3Ek__BackingField_9; }
	inline Vector3_t2243707580 * get_address_of_U3CHitPositionU3Ek__BackingField_9() { return &___U3CHitPositionU3Ek__BackingField_9; }
	inline void set_U3CHitPositionU3Ek__BackingField_9(Vector3_t2243707580  value)
	{
		___U3CHitPositionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CHitNormalU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GazeManager_t1037029152, ___U3CHitNormalU3Ek__BackingField_10)); }
	inline Vector3_t2243707580  get_U3CHitNormalU3Ek__BackingField_10() const { return ___U3CHitNormalU3Ek__BackingField_10; }
	inline Vector3_t2243707580 * get_address_of_U3CHitNormalU3Ek__BackingField_10() { return &___U3CHitNormalU3Ek__BackingField_10; }
	inline void set_U3CHitNormalU3Ek__BackingField_10(Vector3_t2243707580  value)
	{
		___U3CHitNormalU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_MaxGazeCollisionDistance_11() { return static_cast<int32_t>(offsetof(GazeManager_t1037029152, ___MaxGazeCollisionDistance_11)); }
	inline float get_MaxGazeCollisionDistance_11() const { return ___MaxGazeCollisionDistance_11; }
	inline float* get_address_of_MaxGazeCollisionDistance_11() { return &___MaxGazeCollisionDistance_11; }
	inline void set_MaxGazeCollisionDistance_11(float value)
	{
		___MaxGazeCollisionDistance_11 = value;
	}

	inline static int32_t get_offset_of_RaycastLayerMasks_12() { return static_cast<int32_t>(offsetof(GazeManager_t1037029152, ___RaycastLayerMasks_12)); }
	inline LayerMaskU5BU5D_t1922075232* get_RaycastLayerMasks_12() const { return ___RaycastLayerMasks_12; }
	inline LayerMaskU5BU5D_t1922075232** get_address_of_RaycastLayerMasks_12() { return &___RaycastLayerMasks_12; }
	inline void set_RaycastLayerMasks_12(LayerMaskU5BU5D_t1922075232* value)
	{
		___RaycastLayerMasks_12 = value;
		Il2CppCodeGenWriteBarrier((&___RaycastLayerMasks_12), value);
	}

	inline static int32_t get_offset_of_Stabilizer_13() { return static_cast<int32_t>(offsetof(GazeManager_t1037029152, ___Stabilizer_13)); }
	inline BaseRayStabilizer_t2987552384 * get_Stabilizer_13() const { return ___Stabilizer_13; }
	inline BaseRayStabilizer_t2987552384 ** get_address_of_Stabilizer_13() { return &___Stabilizer_13; }
	inline void set_Stabilizer_13(BaseRayStabilizer_t2987552384 * value)
	{
		___Stabilizer_13 = value;
		Il2CppCodeGenWriteBarrier((&___Stabilizer_13), value);
	}

	inline static int32_t get_offset_of_GazeTransform_14() { return static_cast<int32_t>(offsetof(GazeManager_t1037029152, ___GazeTransform_14)); }
	inline Transform_t3275118058 * get_GazeTransform_14() const { return ___GazeTransform_14; }
	inline Transform_t3275118058 ** get_address_of_GazeTransform_14() { return &___GazeTransform_14; }
	inline void set_GazeTransform_14(Transform_t3275118058 * value)
	{
		___GazeTransform_14 = value;
		Il2CppCodeGenWriteBarrier((&___GazeTransform_14), value);
	}

	inline static int32_t get_offset_of_DebugDrawRay_15() { return static_cast<int32_t>(offsetof(GazeManager_t1037029152, ___DebugDrawRay_15)); }
	inline bool get_DebugDrawRay_15() const { return ___DebugDrawRay_15; }
	inline bool* get_address_of_DebugDrawRay_15() { return &___DebugDrawRay_15; }
	inline void set_DebugDrawRay_15(bool value)
	{
		___DebugDrawRay_15 = value;
	}

	inline static int32_t get_offset_of_U3CRayU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GazeManager_t1037029152, ___U3CRayU3Ek__BackingField_16)); }
	inline Ray_t2469606224  get_U3CRayU3Ek__BackingField_16() const { return ___U3CRayU3Ek__BackingField_16; }
	inline Ray_t2469606224 * get_address_of_U3CRayU3Ek__BackingField_16() { return &___U3CRayU3Ek__BackingField_16; }
	inline void set_U3CRayU3Ek__BackingField_16(Ray_t2469606224  value)
	{
		___U3CRayU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_lastHitDistance_17() { return static_cast<int32_t>(offsetof(GazeManager_t1037029152, ___lastHitDistance_17)); }
	inline float get_lastHitDistance_17() const { return ___lastHitDistance_17; }
	inline float* get_address_of_lastHitDistance_17() { return &___lastHitDistance_17; }
	inline void set_lastHitDistance_17(float value)
	{
		___lastHitDistance_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAZEMANAGER_T1037029152_H
#ifndef GAZESTABILIZER_T3174999018_H
#define GAZESTABILIZER_T3174999018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.GazeStabilizer
struct  GazeStabilizer_t3174999018  : public BaseRayStabilizer_t2987552384
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.GazeStabilizer::StoredStabilitySamples
	int32_t ___StoredStabilitySamples_2;
	// UnityEngine.Vector3 HoloToolkit.Unity.InputModule.GazeStabilizer::stablePosition
	Vector3_t2243707580  ___stablePosition_3;
	// UnityEngine.Quaternion HoloToolkit.Unity.InputModule.GazeStabilizer::stableRotation
	Quaternion_t4030073918  ___stableRotation_4;
	// UnityEngine.Ray HoloToolkit.Unity.InputModule.GazeStabilizer::stableRay
	Ray_t2469606224  ___stableRay_5;
	// HoloToolkit.Unity.VectorRollingStatistics HoloToolkit.Unity.InputModule.GazeStabilizer::positionRollingStats
	VectorRollingStatistics_t3452194611 * ___positionRollingStats_6;
	// HoloToolkit.Unity.VectorRollingStatistics HoloToolkit.Unity.InputModule.GazeStabilizer::directionRollingStats
	VectorRollingStatistics_t3452194611 * ___directionRollingStats_7;

public:
	inline static int32_t get_offset_of_StoredStabilitySamples_2() { return static_cast<int32_t>(offsetof(GazeStabilizer_t3174999018, ___StoredStabilitySamples_2)); }
	inline int32_t get_StoredStabilitySamples_2() const { return ___StoredStabilitySamples_2; }
	inline int32_t* get_address_of_StoredStabilitySamples_2() { return &___StoredStabilitySamples_2; }
	inline void set_StoredStabilitySamples_2(int32_t value)
	{
		___StoredStabilitySamples_2 = value;
	}

	inline static int32_t get_offset_of_stablePosition_3() { return static_cast<int32_t>(offsetof(GazeStabilizer_t3174999018, ___stablePosition_3)); }
	inline Vector3_t2243707580  get_stablePosition_3() const { return ___stablePosition_3; }
	inline Vector3_t2243707580 * get_address_of_stablePosition_3() { return &___stablePosition_3; }
	inline void set_stablePosition_3(Vector3_t2243707580  value)
	{
		___stablePosition_3 = value;
	}

	inline static int32_t get_offset_of_stableRotation_4() { return static_cast<int32_t>(offsetof(GazeStabilizer_t3174999018, ___stableRotation_4)); }
	inline Quaternion_t4030073918  get_stableRotation_4() const { return ___stableRotation_4; }
	inline Quaternion_t4030073918 * get_address_of_stableRotation_4() { return &___stableRotation_4; }
	inline void set_stableRotation_4(Quaternion_t4030073918  value)
	{
		___stableRotation_4 = value;
	}

	inline static int32_t get_offset_of_stableRay_5() { return static_cast<int32_t>(offsetof(GazeStabilizer_t3174999018, ___stableRay_5)); }
	inline Ray_t2469606224  get_stableRay_5() const { return ___stableRay_5; }
	inline Ray_t2469606224 * get_address_of_stableRay_5() { return &___stableRay_5; }
	inline void set_stableRay_5(Ray_t2469606224  value)
	{
		___stableRay_5 = value;
	}

	inline static int32_t get_offset_of_positionRollingStats_6() { return static_cast<int32_t>(offsetof(GazeStabilizer_t3174999018, ___positionRollingStats_6)); }
	inline VectorRollingStatistics_t3452194611 * get_positionRollingStats_6() const { return ___positionRollingStats_6; }
	inline VectorRollingStatistics_t3452194611 ** get_address_of_positionRollingStats_6() { return &___positionRollingStats_6; }
	inline void set_positionRollingStats_6(VectorRollingStatistics_t3452194611 * value)
	{
		___positionRollingStats_6 = value;
		Il2CppCodeGenWriteBarrier((&___positionRollingStats_6), value);
	}

	inline static int32_t get_offset_of_directionRollingStats_7() { return static_cast<int32_t>(offsetof(GazeStabilizer_t3174999018, ___directionRollingStats_7)); }
	inline VectorRollingStatistics_t3452194611 * get_directionRollingStats_7() const { return ___directionRollingStats_7; }
	inline VectorRollingStatistics_t3452194611 ** get_address_of_directionRollingStats_7() { return &___directionRollingStats_7; }
	inline void set_directionRollingStats_7(VectorRollingStatistics_t3452194611 * value)
	{
		___directionRollingStats_7 = value;
		Il2CppCodeGenWriteBarrier((&___directionRollingStats_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAZESTABILIZER_T3174999018_H
#ifndef RAWINTERACTIONINPUTSOURCE_T3971292315_H
#define RAWINTERACTIONINPUTSOURCE_T3971292315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.RawInteractionInputSource
struct  RawInteractionInputSource_t3971292315  : public BaseInputSource_t2378327172
{
public:
	// System.Boolean HoloToolkit.Unity.InputModule.RawInteractionInputSource::UseUnscaledTime
	bool ___UseUnscaledTime_3;
	// System.Collections.Generic.Dictionary`2<System.UInt32,HoloToolkit.Unity.InputModule.RawInteractionInputSource/SourceData> HoloToolkit.Unity.InputModule.RawInteractionInputSource::sourceIdToData
	Dictionary_2_t3644863136 * ___sourceIdToData_4;
	// System.Collections.Generic.List`1<System.UInt32> HoloToolkit.Unity.InputModule.RawInteractionInputSource::pendingSourceIdDeletes
	List_1_t1518803153 * ___pendingSourceIdDeletes_5;
	// System.Collections.Generic.HashSet`1<System.UInt32> HoloToolkit.Unity.InputModule.RawInteractionInputSource::currentSources
	HashSet_1_t483142875 * ___currentSources_6;
	// System.Collections.Generic.HashSet`1<System.UInt32> HoloToolkit.Unity.InputModule.RawInteractionInputSource::newSources
	HashSet_1_t483142875 * ___newSources_7;

public:
	inline static int32_t get_offset_of_UseUnscaledTime_3() { return static_cast<int32_t>(offsetof(RawInteractionInputSource_t3971292315, ___UseUnscaledTime_3)); }
	inline bool get_UseUnscaledTime_3() const { return ___UseUnscaledTime_3; }
	inline bool* get_address_of_UseUnscaledTime_3() { return &___UseUnscaledTime_3; }
	inline void set_UseUnscaledTime_3(bool value)
	{
		___UseUnscaledTime_3 = value;
	}

	inline static int32_t get_offset_of_sourceIdToData_4() { return static_cast<int32_t>(offsetof(RawInteractionInputSource_t3971292315, ___sourceIdToData_4)); }
	inline Dictionary_2_t3644863136 * get_sourceIdToData_4() const { return ___sourceIdToData_4; }
	inline Dictionary_2_t3644863136 ** get_address_of_sourceIdToData_4() { return &___sourceIdToData_4; }
	inline void set_sourceIdToData_4(Dictionary_2_t3644863136 * value)
	{
		___sourceIdToData_4 = value;
		Il2CppCodeGenWriteBarrier((&___sourceIdToData_4), value);
	}

	inline static int32_t get_offset_of_pendingSourceIdDeletes_5() { return static_cast<int32_t>(offsetof(RawInteractionInputSource_t3971292315, ___pendingSourceIdDeletes_5)); }
	inline List_1_t1518803153 * get_pendingSourceIdDeletes_5() const { return ___pendingSourceIdDeletes_5; }
	inline List_1_t1518803153 ** get_address_of_pendingSourceIdDeletes_5() { return &___pendingSourceIdDeletes_5; }
	inline void set_pendingSourceIdDeletes_5(List_1_t1518803153 * value)
	{
		___pendingSourceIdDeletes_5 = value;
		Il2CppCodeGenWriteBarrier((&___pendingSourceIdDeletes_5), value);
	}

	inline static int32_t get_offset_of_currentSources_6() { return static_cast<int32_t>(offsetof(RawInteractionInputSource_t3971292315, ___currentSources_6)); }
	inline HashSet_1_t483142875 * get_currentSources_6() const { return ___currentSources_6; }
	inline HashSet_1_t483142875 ** get_address_of_currentSources_6() { return &___currentSources_6; }
	inline void set_currentSources_6(HashSet_1_t483142875 * value)
	{
		___currentSources_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentSources_6), value);
	}

	inline static int32_t get_offset_of_newSources_7() { return static_cast<int32_t>(offsetof(RawInteractionInputSource_t3971292315, ___newSources_7)); }
	inline HashSet_1_t483142875 * get_newSources_7() const { return ___newSources_7; }
	inline HashSet_1_t483142875 ** get_address_of_newSources_7() { return &___newSources_7; }
	inline void set_newSources_7(HashSet_1_t483142875 * value)
	{
		___newSources_7 = value;
		Il2CppCodeGenWriteBarrier((&___newSources_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAWINTERACTIONINPUTSOURCE_T3971292315_H
#ifndef GAMEPADINPUTSOURCE_T3413589358_H
#define GAMEPADINPUTSOURCE_T3413589358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.GamePadInputSource
struct  GamePadInputSource_t3413589358  : public BaseInputSource_t2378327172
{
public:
	// System.Single HoloToolkit.Unity.InputModule.GamePadInputSource::DeviceRefreshInterval
	float ___DeviceRefreshInterval_2;
	// System.Single HoloToolkit.Unity.InputModule.GamePadInputSource::DeviceRefreshTimer
	float ___DeviceRefreshTimer_3;
	// System.Int32 HoloToolkit.Unity.InputModule.GamePadInputSource::LastDeviceUpdateCount
	int32_t ___LastDeviceUpdateCount_4;
	// System.String[] HoloToolkit.Unity.InputModule.GamePadInputSource::LastDeviceList
	StringU5BU5D_t1642385972* ___LastDeviceList_5;

public:
	inline static int32_t get_offset_of_DeviceRefreshInterval_2() { return static_cast<int32_t>(offsetof(GamePadInputSource_t3413589358, ___DeviceRefreshInterval_2)); }
	inline float get_DeviceRefreshInterval_2() const { return ___DeviceRefreshInterval_2; }
	inline float* get_address_of_DeviceRefreshInterval_2() { return &___DeviceRefreshInterval_2; }
	inline void set_DeviceRefreshInterval_2(float value)
	{
		___DeviceRefreshInterval_2 = value;
	}

	inline static int32_t get_offset_of_DeviceRefreshTimer_3() { return static_cast<int32_t>(offsetof(GamePadInputSource_t3413589358, ___DeviceRefreshTimer_3)); }
	inline float get_DeviceRefreshTimer_3() const { return ___DeviceRefreshTimer_3; }
	inline float* get_address_of_DeviceRefreshTimer_3() { return &___DeviceRefreshTimer_3; }
	inline void set_DeviceRefreshTimer_3(float value)
	{
		___DeviceRefreshTimer_3 = value;
	}

	inline static int32_t get_offset_of_LastDeviceUpdateCount_4() { return static_cast<int32_t>(offsetof(GamePadInputSource_t3413589358, ___LastDeviceUpdateCount_4)); }
	inline int32_t get_LastDeviceUpdateCount_4() const { return ___LastDeviceUpdateCount_4; }
	inline int32_t* get_address_of_LastDeviceUpdateCount_4() { return &___LastDeviceUpdateCount_4; }
	inline void set_LastDeviceUpdateCount_4(int32_t value)
	{
		___LastDeviceUpdateCount_4 = value;
	}

	inline static int32_t get_offset_of_LastDeviceList_5() { return static_cast<int32_t>(offsetof(GamePadInputSource_t3413589358, ___LastDeviceList_5)); }
	inline StringU5BU5D_t1642385972* get_LastDeviceList_5() const { return ___LastDeviceList_5; }
	inline StringU5BU5D_t1642385972** get_address_of_LastDeviceList_5() { return &___LastDeviceList_5; }
	inline void set_LastDeviceList_5(StringU5BU5D_t1642385972* value)
	{
		___LastDeviceList_5 = value;
		Il2CppCodeGenWriteBarrier((&___LastDeviceList_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEPADINPUTSOURCE_T3413589358_H
#ifndef KEYBOARDMANAGER_T2660186888_H
#define KEYBOARDMANAGER_T2660186888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.KeyboardManager
struct  KeyboardManager_t2660186888  : public Singleton_1_t3213785241
{
public:
	// System.Collections.Generic.Dictionary`2<HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair,System.Collections.Generic.List`1<HoloToolkit.Unity.InputModule.KeyboardManager/KeyboardCallback>> HoloToolkit.Unity.InputModule.KeyboardManager::registeredCallbacks
	Dictionary_2_t3895680351 * ___registeredCallbacks_4;
	// System.Collections.Generic.List`1<HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair> HoloToolkit.Unity.InputModule.KeyboardManager::detectedKeyEvents
	List_1_t3717024176 * ___detectedKeyEvents_5;
	// System.Collections.Generic.List`1<HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair> HoloToolkit.Unity.InputModule.KeyboardManager::pendingKeyEvents
	List_1_t3717024176 * ___pendingKeyEvents_6;

public:
	inline static int32_t get_offset_of_registeredCallbacks_4() { return static_cast<int32_t>(offsetof(KeyboardManager_t2660186888, ___registeredCallbacks_4)); }
	inline Dictionary_2_t3895680351 * get_registeredCallbacks_4() const { return ___registeredCallbacks_4; }
	inline Dictionary_2_t3895680351 ** get_address_of_registeredCallbacks_4() { return &___registeredCallbacks_4; }
	inline void set_registeredCallbacks_4(Dictionary_2_t3895680351 * value)
	{
		___registeredCallbacks_4 = value;
		Il2CppCodeGenWriteBarrier((&___registeredCallbacks_4), value);
	}

	inline static int32_t get_offset_of_detectedKeyEvents_5() { return static_cast<int32_t>(offsetof(KeyboardManager_t2660186888, ___detectedKeyEvents_5)); }
	inline List_1_t3717024176 * get_detectedKeyEvents_5() const { return ___detectedKeyEvents_5; }
	inline List_1_t3717024176 ** get_address_of_detectedKeyEvents_5() { return &___detectedKeyEvents_5; }
	inline void set_detectedKeyEvents_5(List_1_t3717024176 * value)
	{
		___detectedKeyEvents_5 = value;
		Il2CppCodeGenWriteBarrier((&___detectedKeyEvents_5), value);
	}

	inline static int32_t get_offset_of_pendingKeyEvents_6() { return static_cast<int32_t>(offsetof(KeyboardManager_t2660186888, ___pendingKeyEvents_6)); }
	inline List_1_t3717024176 * get_pendingKeyEvents_6() const { return ___pendingKeyEvents_6; }
	inline List_1_t3717024176 ** get_address_of_pendingKeyEvents_6() { return &___pendingKeyEvents_6; }
	inline void set_pendingKeyEvents_6(List_1_t3717024176 * value)
	{
		___pendingKeyEvents_6 = value;
		Il2CppCodeGenWriteBarrier((&___pendingKeyEvents_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBOARDMANAGER_T2660186888_H
#ifndef INPUTMANAGER_T1871732949_H
#define INPUTMANAGER_T1871732949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InputManager
struct  InputManager_t1871732949  : public Singleton_1_t2425331302
{
public:
	// System.Action HoloToolkit.Unity.InputModule.InputManager::InputEnabled
	Action_t3226471752 * ___InputEnabled_4;
	// System.Action HoloToolkit.Unity.InputModule.InputManager::InputDisabled
	Action_t3226471752 * ___InputDisabled_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HoloToolkit.Unity.InputModule.InputManager::globalListeners
	List_1_t1125654279 * ___globalListeners_6;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> HoloToolkit.Unity.InputModule.InputManager::modalInputStack
	Stack_1_t2844261301 * ___modalInputStack_7;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> HoloToolkit.Unity.InputModule.InputManager::fallbackInputStack
	Stack_1_t2844261301 * ___fallbackInputStack_8;
	// UnityEngine.GameObject HoloToolkit.Unity.InputModule.InputManager::<OverrideFocusedObject>k__BackingField
	GameObject_t1756533147 * ___U3COverrideFocusedObjectU3Ek__BackingField_9;
	// System.Int32 HoloToolkit.Unity.InputModule.InputManager::disabledRefCount
	int32_t ___disabledRefCount_10;
	// HoloToolkit.Unity.InputModule.InputEventData HoloToolkit.Unity.InputModule.InputManager::inputEventData
	InputEventData_t2710196284 * ___inputEventData_11;
	// HoloToolkit.Unity.InputModule.InputClickedEventData HoloToolkit.Unity.InputModule.InputManager::sourceClickedEventData
	InputClickedEventData_t3434086547 * ___sourceClickedEventData_12;
	// HoloToolkit.Unity.InputModule.SourceStateEventData HoloToolkit.Unity.InputModule.InputManager::sourceStateEventData
	SourceStateEventData_t2946150088 * ___sourceStateEventData_13;
	// HoloToolkit.Unity.InputModule.ManipulationEventData HoloToolkit.Unity.InputModule.InputManager::manipulationEventData
	ManipulationEventData_t3279489987 * ___manipulationEventData_14;
	// HoloToolkit.Unity.InputModule.HoldEventData HoloToolkit.Unity.InputModule.InputManager::holdEventData
	HoldEventData_t2900733459 * ___holdEventData_15;
	// HoloToolkit.Unity.InputModule.NavigationEventData HoloToolkit.Unity.InputModule.InputManager::navigationEventData
	NavigationEventData_t1538884580 * ___navigationEventData_16;
	// HoloToolkit.Unity.InputModule.GamePadEventData HoloToolkit.Unity.InputModule.InputManager::gamePadEventData
	GamePadEventData_t912895835 * ___gamePadEventData_17;
	// HoloToolkit.Unity.InputModule.XboxControllerEventData HoloToolkit.Unity.InputModule.InputManager::xboxControllerEventData
	XboxControllerEventData_t2888026507 * ___xboxControllerEventData_18;
	// HoloToolkit.Unity.InputModule.SourceRotationEventData HoloToolkit.Unity.InputModule.InputManager::sourceRotationEventData
	SourceRotationEventData_t1790094301 * ___sourceRotationEventData_19;
	// HoloToolkit.Unity.InputModule.SourcePositionEventData HoloToolkit.Unity.InputModule.InputManager::sourcePositionEventData
	SourcePositionEventData_t4286406546 * ___sourcePositionEventData_20;
	// HoloToolkit.Unity.InputModule.PointerSpecificEventData HoloToolkit.Unity.InputModule.InputManager::pointerSpecificEventData
	PointerSpecificEventData_t1451959381 * ___pointerSpecificEventData_21;
	// HoloToolkit.Unity.InputModule.InputPositionEventData HoloToolkit.Unity.InputModule.InputManager::inputPositionEventData
	InputPositionEventData_t1718411395 * ___inputPositionEventData_22;
	// HoloToolkit.Unity.InputModule.SelectPressedEventData HoloToolkit.Unity.InputModule.InputManager::selectPressedEventData
	SelectPressedEventData_t531650428 * ___selectPressedEventData_23;
	// HoloToolkit.Unity.InputModule.SpeechEventData HoloToolkit.Unity.InputModule.InputManager::speechEventData
	SpeechEventData_t3647170294 * ___speechEventData_24;
	// HoloToolkit.Unity.InputModule.DictationEventData HoloToolkit.Unity.InputModule.InputManager::dictationEventData
	DictationEventData_t3232161633 * ___dictationEventData_25;
	// System.Collections.Generic.List`1<HoloToolkit.Unity.InputModule.InputSourceInfo> HoloToolkit.Unity.InputModule.InputManager::detectedInputSources
	List_1_t1333157385 * ___detectedInputSources_26;

public:
	inline static int32_t get_offset_of_InputEnabled_4() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___InputEnabled_4)); }
	inline Action_t3226471752 * get_InputEnabled_4() const { return ___InputEnabled_4; }
	inline Action_t3226471752 ** get_address_of_InputEnabled_4() { return &___InputEnabled_4; }
	inline void set_InputEnabled_4(Action_t3226471752 * value)
	{
		___InputEnabled_4 = value;
		Il2CppCodeGenWriteBarrier((&___InputEnabled_4), value);
	}

	inline static int32_t get_offset_of_InputDisabled_5() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___InputDisabled_5)); }
	inline Action_t3226471752 * get_InputDisabled_5() const { return ___InputDisabled_5; }
	inline Action_t3226471752 ** get_address_of_InputDisabled_5() { return &___InputDisabled_5; }
	inline void set_InputDisabled_5(Action_t3226471752 * value)
	{
		___InputDisabled_5 = value;
		Il2CppCodeGenWriteBarrier((&___InputDisabled_5), value);
	}

	inline static int32_t get_offset_of_globalListeners_6() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___globalListeners_6)); }
	inline List_1_t1125654279 * get_globalListeners_6() const { return ___globalListeners_6; }
	inline List_1_t1125654279 ** get_address_of_globalListeners_6() { return &___globalListeners_6; }
	inline void set_globalListeners_6(List_1_t1125654279 * value)
	{
		___globalListeners_6 = value;
		Il2CppCodeGenWriteBarrier((&___globalListeners_6), value);
	}

	inline static int32_t get_offset_of_modalInputStack_7() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___modalInputStack_7)); }
	inline Stack_1_t2844261301 * get_modalInputStack_7() const { return ___modalInputStack_7; }
	inline Stack_1_t2844261301 ** get_address_of_modalInputStack_7() { return &___modalInputStack_7; }
	inline void set_modalInputStack_7(Stack_1_t2844261301 * value)
	{
		___modalInputStack_7 = value;
		Il2CppCodeGenWriteBarrier((&___modalInputStack_7), value);
	}

	inline static int32_t get_offset_of_fallbackInputStack_8() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___fallbackInputStack_8)); }
	inline Stack_1_t2844261301 * get_fallbackInputStack_8() const { return ___fallbackInputStack_8; }
	inline Stack_1_t2844261301 ** get_address_of_fallbackInputStack_8() { return &___fallbackInputStack_8; }
	inline void set_fallbackInputStack_8(Stack_1_t2844261301 * value)
	{
		___fallbackInputStack_8 = value;
		Il2CppCodeGenWriteBarrier((&___fallbackInputStack_8), value);
	}

	inline static int32_t get_offset_of_U3COverrideFocusedObjectU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___U3COverrideFocusedObjectU3Ek__BackingField_9)); }
	inline GameObject_t1756533147 * get_U3COverrideFocusedObjectU3Ek__BackingField_9() const { return ___U3COverrideFocusedObjectU3Ek__BackingField_9; }
	inline GameObject_t1756533147 ** get_address_of_U3COverrideFocusedObjectU3Ek__BackingField_9() { return &___U3COverrideFocusedObjectU3Ek__BackingField_9; }
	inline void set_U3COverrideFocusedObjectU3Ek__BackingField_9(GameObject_t1756533147 * value)
	{
		___U3COverrideFocusedObjectU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3COverrideFocusedObjectU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_disabledRefCount_10() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___disabledRefCount_10)); }
	inline int32_t get_disabledRefCount_10() const { return ___disabledRefCount_10; }
	inline int32_t* get_address_of_disabledRefCount_10() { return &___disabledRefCount_10; }
	inline void set_disabledRefCount_10(int32_t value)
	{
		___disabledRefCount_10 = value;
	}

	inline static int32_t get_offset_of_inputEventData_11() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___inputEventData_11)); }
	inline InputEventData_t2710196284 * get_inputEventData_11() const { return ___inputEventData_11; }
	inline InputEventData_t2710196284 ** get_address_of_inputEventData_11() { return &___inputEventData_11; }
	inline void set_inputEventData_11(InputEventData_t2710196284 * value)
	{
		___inputEventData_11 = value;
		Il2CppCodeGenWriteBarrier((&___inputEventData_11), value);
	}

	inline static int32_t get_offset_of_sourceClickedEventData_12() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___sourceClickedEventData_12)); }
	inline InputClickedEventData_t3434086547 * get_sourceClickedEventData_12() const { return ___sourceClickedEventData_12; }
	inline InputClickedEventData_t3434086547 ** get_address_of_sourceClickedEventData_12() { return &___sourceClickedEventData_12; }
	inline void set_sourceClickedEventData_12(InputClickedEventData_t3434086547 * value)
	{
		___sourceClickedEventData_12 = value;
		Il2CppCodeGenWriteBarrier((&___sourceClickedEventData_12), value);
	}

	inline static int32_t get_offset_of_sourceStateEventData_13() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___sourceStateEventData_13)); }
	inline SourceStateEventData_t2946150088 * get_sourceStateEventData_13() const { return ___sourceStateEventData_13; }
	inline SourceStateEventData_t2946150088 ** get_address_of_sourceStateEventData_13() { return &___sourceStateEventData_13; }
	inline void set_sourceStateEventData_13(SourceStateEventData_t2946150088 * value)
	{
		___sourceStateEventData_13 = value;
		Il2CppCodeGenWriteBarrier((&___sourceStateEventData_13), value);
	}

	inline static int32_t get_offset_of_manipulationEventData_14() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___manipulationEventData_14)); }
	inline ManipulationEventData_t3279489987 * get_manipulationEventData_14() const { return ___manipulationEventData_14; }
	inline ManipulationEventData_t3279489987 ** get_address_of_manipulationEventData_14() { return &___manipulationEventData_14; }
	inline void set_manipulationEventData_14(ManipulationEventData_t3279489987 * value)
	{
		___manipulationEventData_14 = value;
		Il2CppCodeGenWriteBarrier((&___manipulationEventData_14), value);
	}

	inline static int32_t get_offset_of_holdEventData_15() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___holdEventData_15)); }
	inline HoldEventData_t2900733459 * get_holdEventData_15() const { return ___holdEventData_15; }
	inline HoldEventData_t2900733459 ** get_address_of_holdEventData_15() { return &___holdEventData_15; }
	inline void set_holdEventData_15(HoldEventData_t2900733459 * value)
	{
		___holdEventData_15 = value;
		Il2CppCodeGenWriteBarrier((&___holdEventData_15), value);
	}

	inline static int32_t get_offset_of_navigationEventData_16() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___navigationEventData_16)); }
	inline NavigationEventData_t1538884580 * get_navigationEventData_16() const { return ___navigationEventData_16; }
	inline NavigationEventData_t1538884580 ** get_address_of_navigationEventData_16() { return &___navigationEventData_16; }
	inline void set_navigationEventData_16(NavigationEventData_t1538884580 * value)
	{
		___navigationEventData_16 = value;
		Il2CppCodeGenWriteBarrier((&___navigationEventData_16), value);
	}

	inline static int32_t get_offset_of_gamePadEventData_17() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___gamePadEventData_17)); }
	inline GamePadEventData_t912895835 * get_gamePadEventData_17() const { return ___gamePadEventData_17; }
	inline GamePadEventData_t912895835 ** get_address_of_gamePadEventData_17() { return &___gamePadEventData_17; }
	inline void set_gamePadEventData_17(GamePadEventData_t912895835 * value)
	{
		___gamePadEventData_17 = value;
		Il2CppCodeGenWriteBarrier((&___gamePadEventData_17), value);
	}

	inline static int32_t get_offset_of_xboxControllerEventData_18() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___xboxControllerEventData_18)); }
	inline XboxControllerEventData_t2888026507 * get_xboxControllerEventData_18() const { return ___xboxControllerEventData_18; }
	inline XboxControllerEventData_t2888026507 ** get_address_of_xboxControllerEventData_18() { return &___xboxControllerEventData_18; }
	inline void set_xboxControllerEventData_18(XboxControllerEventData_t2888026507 * value)
	{
		___xboxControllerEventData_18 = value;
		Il2CppCodeGenWriteBarrier((&___xboxControllerEventData_18), value);
	}

	inline static int32_t get_offset_of_sourceRotationEventData_19() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___sourceRotationEventData_19)); }
	inline SourceRotationEventData_t1790094301 * get_sourceRotationEventData_19() const { return ___sourceRotationEventData_19; }
	inline SourceRotationEventData_t1790094301 ** get_address_of_sourceRotationEventData_19() { return &___sourceRotationEventData_19; }
	inline void set_sourceRotationEventData_19(SourceRotationEventData_t1790094301 * value)
	{
		___sourceRotationEventData_19 = value;
		Il2CppCodeGenWriteBarrier((&___sourceRotationEventData_19), value);
	}

	inline static int32_t get_offset_of_sourcePositionEventData_20() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___sourcePositionEventData_20)); }
	inline SourcePositionEventData_t4286406546 * get_sourcePositionEventData_20() const { return ___sourcePositionEventData_20; }
	inline SourcePositionEventData_t4286406546 ** get_address_of_sourcePositionEventData_20() { return &___sourcePositionEventData_20; }
	inline void set_sourcePositionEventData_20(SourcePositionEventData_t4286406546 * value)
	{
		___sourcePositionEventData_20 = value;
		Il2CppCodeGenWriteBarrier((&___sourcePositionEventData_20), value);
	}

	inline static int32_t get_offset_of_pointerSpecificEventData_21() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___pointerSpecificEventData_21)); }
	inline PointerSpecificEventData_t1451959381 * get_pointerSpecificEventData_21() const { return ___pointerSpecificEventData_21; }
	inline PointerSpecificEventData_t1451959381 ** get_address_of_pointerSpecificEventData_21() { return &___pointerSpecificEventData_21; }
	inline void set_pointerSpecificEventData_21(PointerSpecificEventData_t1451959381 * value)
	{
		___pointerSpecificEventData_21 = value;
		Il2CppCodeGenWriteBarrier((&___pointerSpecificEventData_21), value);
	}

	inline static int32_t get_offset_of_inputPositionEventData_22() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___inputPositionEventData_22)); }
	inline InputPositionEventData_t1718411395 * get_inputPositionEventData_22() const { return ___inputPositionEventData_22; }
	inline InputPositionEventData_t1718411395 ** get_address_of_inputPositionEventData_22() { return &___inputPositionEventData_22; }
	inline void set_inputPositionEventData_22(InputPositionEventData_t1718411395 * value)
	{
		___inputPositionEventData_22 = value;
		Il2CppCodeGenWriteBarrier((&___inputPositionEventData_22), value);
	}

	inline static int32_t get_offset_of_selectPressedEventData_23() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___selectPressedEventData_23)); }
	inline SelectPressedEventData_t531650428 * get_selectPressedEventData_23() const { return ___selectPressedEventData_23; }
	inline SelectPressedEventData_t531650428 ** get_address_of_selectPressedEventData_23() { return &___selectPressedEventData_23; }
	inline void set_selectPressedEventData_23(SelectPressedEventData_t531650428 * value)
	{
		___selectPressedEventData_23 = value;
		Il2CppCodeGenWriteBarrier((&___selectPressedEventData_23), value);
	}

	inline static int32_t get_offset_of_speechEventData_24() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___speechEventData_24)); }
	inline SpeechEventData_t3647170294 * get_speechEventData_24() const { return ___speechEventData_24; }
	inline SpeechEventData_t3647170294 ** get_address_of_speechEventData_24() { return &___speechEventData_24; }
	inline void set_speechEventData_24(SpeechEventData_t3647170294 * value)
	{
		___speechEventData_24 = value;
		Il2CppCodeGenWriteBarrier((&___speechEventData_24), value);
	}

	inline static int32_t get_offset_of_dictationEventData_25() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___dictationEventData_25)); }
	inline DictationEventData_t3232161633 * get_dictationEventData_25() const { return ___dictationEventData_25; }
	inline DictationEventData_t3232161633 ** get_address_of_dictationEventData_25() { return &___dictationEventData_25; }
	inline void set_dictationEventData_25(DictationEventData_t3232161633 * value)
	{
		___dictationEventData_25 = value;
		Il2CppCodeGenWriteBarrier((&___dictationEventData_25), value);
	}

	inline static int32_t get_offset_of_detectedInputSources_26() { return static_cast<int32_t>(offsetof(InputManager_t1871732949, ___detectedInputSources_26)); }
	inline List_1_t1333157385 * get_detectedInputSources_26() const { return ___detectedInputSources_26; }
	inline List_1_t1333157385 ** get_address_of_detectedInputSources_26() { return &___detectedInputSources_26; }
	inline void set_detectedInputSources_26(List_1_t1333157385 * value)
	{
		___detectedInputSources_26 = value;
		Il2CppCodeGenWriteBarrier((&___detectedInputSources_26), value);
	}
};

struct InputManager_t1871732949_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IFocusable> HoloToolkit.Unity.InputModule.InputManager::OnFocusEnterEventHandler
	EventFunction_1_t1247636477 * ___OnFocusEnterEventHandler_27;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IFocusable> HoloToolkit.Unity.InputModule.InputManager::OnFocusExitEventHandler
	EventFunction_1_t1247636477 * ___OnFocusExitEventHandler_28;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IPointerSpecificFocusable> HoloToolkit.Unity.InputModule.InputManager::OnPointerSpecificFocusEnterEventHandler
	EventFunction_1_t605264588 * ___OnPointerSpecificFocusEnterEventHandler_29;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IPointerSpecificFocusable> HoloToolkit.Unity.InputModule.InputManager::OnPointerSpecificFocusExitEventHandler
	EventFunction_1_t605264588 * ___OnPointerSpecificFocusExitEventHandler_30;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IInputClickHandler> HoloToolkit.Unity.InputModule.InputManager::OnInputClickedEventHandler
	EventFunction_1_t1390223529 * ___OnInputClickedEventHandler_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IInputHandler> HoloToolkit.Unity.InputModule.InputManager::OnSourceUpEventHandler
	EventFunction_1_t1950350445 * ___OnSourceUpEventHandler_32;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IInputHandler> HoloToolkit.Unity.InputModule.InputManager::OnSourceDownEventHandler
	EventFunction_1_t1950350445 * ___OnSourceDownEventHandler_33;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.ISourceStateHandler> HoloToolkit.Unity.InputModule.InputManager::OnSourceDetectedEventHandler
	EventFunction_1_t3646233467 * ___OnSourceDetectedEventHandler_34;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.ISourceStateHandler> HoloToolkit.Unity.InputModule.InputManager::OnSourceLostEventHandler
	EventFunction_1_t3646233467 * ___OnSourceLostEventHandler_35;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IManipulationHandler> HoloToolkit.Unity.InputModule.InputManager::OnManipulationStartedEventHandler
	EventFunction_1_t3062996938 * ___OnManipulationStartedEventHandler_36;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IManipulationHandler> HoloToolkit.Unity.InputModule.InputManager::OnManipulationUpdatedEventHandler
	EventFunction_1_t3062996938 * ___OnManipulationUpdatedEventHandler_37;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IManipulationHandler> HoloToolkit.Unity.InputModule.InputManager::OnManipulationCompletedEventHandler
	EventFunction_1_t3062996938 * ___OnManipulationCompletedEventHandler_38;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IManipulationHandler> HoloToolkit.Unity.InputModule.InputManager::OnManipulationCanceledEventHandler
	EventFunction_1_t3062996938 * ___OnManipulationCanceledEventHandler_39;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IHoldHandler> HoloToolkit.Unity.InputModule.InputManager::OnHoldStartedEventHandler
	EventFunction_1_t3710245626 * ___OnHoldStartedEventHandler_40;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IHoldHandler> HoloToolkit.Unity.InputModule.InputManager::OnHoldCompletedEventHandler
	EventFunction_1_t3710245626 * ___OnHoldCompletedEventHandler_41;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IHoldHandler> HoloToolkit.Unity.InputModule.InputManager::OnHoldCanceledEventHandler
	EventFunction_1_t3710245626 * ___OnHoldCanceledEventHandler_42;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.INavigationHandler> HoloToolkit.Unity.InputModule.InputManager::OnNavigationStartedEventHandler
	EventFunction_1_t1634119807 * ___OnNavigationStartedEventHandler_43;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.INavigationHandler> HoloToolkit.Unity.InputModule.InputManager::OnNavigationUpdatedEventHandler
	EventFunction_1_t1634119807 * ___OnNavigationUpdatedEventHandler_44;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.INavigationHandler> HoloToolkit.Unity.InputModule.InputManager::OnNavigationCompletedEventHandler
	EventFunction_1_t1634119807 * ___OnNavigationCompletedEventHandler_45;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.INavigationHandler> HoloToolkit.Unity.InputModule.InputManager::OnNavigationCanceledEventHandler
	EventFunction_1_t1634119807 * ___OnNavigationCanceledEventHandler_46;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IControllerInputHandler> HoloToolkit.Unity.InputModule.InputManager::OnInputPositionChangedEventHandler
	EventFunction_1_t162153717 * ___OnInputPositionChangedEventHandler_47;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.ISelectHandler> HoloToolkit.Unity.InputModule.InputManager::OnSelectPressedAmountChangedEventHandler
	EventFunction_1_t3625946465 * ___OnSelectPressedAmountChangedEventHandler_48;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IControllerTouchpadHandler> HoloToolkit.Unity.InputModule.InputManager::OnTouchpadTouchedEventHandler
	EventFunction_1_t2143617989 * ___OnTouchpadTouchedEventHandler_49;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IControllerTouchpadHandler> HoloToolkit.Unity.InputModule.InputManager::OnTouchpadReleasedEventHandler
	EventFunction_1_t2143617989 * ___OnTouchpadReleasedEventHandler_50;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.ISourcePositionHandler> HoloToolkit.Unity.InputModule.InputManager::OnSourcePositionChangedEventHandler
	EventFunction_1_t3301505711 * ___OnSourcePositionChangedEventHandler_51;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.ISourceRotationHandler> HoloToolkit.Unity.InputModule.InputManager::OnSourceRotationChangedEventHandler
	EventFunction_1_t4246854704 * ___OnSourceRotationChangedEventHandler_52;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IGamePadHandler> HoloToolkit.Unity.InputModule.InputManager::OnGamePadDetectedEventHandler
	EventFunction_1_t3465969818 * ___OnGamePadDetectedEventHandler_53;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IGamePadHandler> HoloToolkit.Unity.InputModule.InputManager::OnGamePadLostEventHandler
	EventFunction_1_t3465969818 * ___OnGamePadLostEventHandler_54;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IXboxControllerHandler> HoloToolkit.Unity.InputModule.InputManager::OnXboxAxisUpdateHandler
	EventFunction_1_t1726907556 * ___OnXboxAxisUpdateHandler_55;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.ISpeechHandler> HoloToolkit.Unity.InputModule.InputManager::OnSpeechKeywordRecognizedEventHandler
	EventFunction_1_t1772443227 * ___OnSpeechKeywordRecognizedEventHandler_56;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IDictationHandler> HoloToolkit.Unity.InputModule.InputManager::OnDictationHypothesisEventHandler
	EventFunction_1_t1998685734 * ___OnDictationHypothesisEventHandler_57;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IDictationHandler> HoloToolkit.Unity.InputModule.InputManager::OnDictationResultEventHandler
	EventFunction_1_t1998685734 * ___OnDictationResultEventHandler_58;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IDictationHandler> HoloToolkit.Unity.InputModule.InputManager::OnDictationCompleteEventHandler
	EventFunction_1_t1998685734 * ___OnDictationCompleteEventHandler_59;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HoloToolkit.Unity.InputModule.IDictationHandler> HoloToolkit.Unity.InputModule.InputManager::OnDictationErrorEventHandler
	EventFunction_1_t1998685734 * ___OnDictationErrorEventHandler_60;

public:
	inline static int32_t get_offset_of_OnFocusEnterEventHandler_27() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnFocusEnterEventHandler_27)); }
	inline EventFunction_1_t1247636477 * get_OnFocusEnterEventHandler_27() const { return ___OnFocusEnterEventHandler_27; }
	inline EventFunction_1_t1247636477 ** get_address_of_OnFocusEnterEventHandler_27() { return &___OnFocusEnterEventHandler_27; }
	inline void set_OnFocusEnterEventHandler_27(EventFunction_1_t1247636477 * value)
	{
		___OnFocusEnterEventHandler_27 = value;
		Il2CppCodeGenWriteBarrier((&___OnFocusEnterEventHandler_27), value);
	}

	inline static int32_t get_offset_of_OnFocusExitEventHandler_28() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnFocusExitEventHandler_28)); }
	inline EventFunction_1_t1247636477 * get_OnFocusExitEventHandler_28() const { return ___OnFocusExitEventHandler_28; }
	inline EventFunction_1_t1247636477 ** get_address_of_OnFocusExitEventHandler_28() { return &___OnFocusExitEventHandler_28; }
	inline void set_OnFocusExitEventHandler_28(EventFunction_1_t1247636477 * value)
	{
		___OnFocusExitEventHandler_28 = value;
		Il2CppCodeGenWriteBarrier((&___OnFocusExitEventHandler_28), value);
	}

	inline static int32_t get_offset_of_OnPointerSpecificFocusEnterEventHandler_29() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnPointerSpecificFocusEnterEventHandler_29)); }
	inline EventFunction_1_t605264588 * get_OnPointerSpecificFocusEnterEventHandler_29() const { return ___OnPointerSpecificFocusEnterEventHandler_29; }
	inline EventFunction_1_t605264588 ** get_address_of_OnPointerSpecificFocusEnterEventHandler_29() { return &___OnPointerSpecificFocusEnterEventHandler_29; }
	inline void set_OnPointerSpecificFocusEnterEventHandler_29(EventFunction_1_t605264588 * value)
	{
		___OnPointerSpecificFocusEnterEventHandler_29 = value;
		Il2CppCodeGenWriteBarrier((&___OnPointerSpecificFocusEnterEventHandler_29), value);
	}

	inline static int32_t get_offset_of_OnPointerSpecificFocusExitEventHandler_30() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnPointerSpecificFocusExitEventHandler_30)); }
	inline EventFunction_1_t605264588 * get_OnPointerSpecificFocusExitEventHandler_30() const { return ___OnPointerSpecificFocusExitEventHandler_30; }
	inline EventFunction_1_t605264588 ** get_address_of_OnPointerSpecificFocusExitEventHandler_30() { return &___OnPointerSpecificFocusExitEventHandler_30; }
	inline void set_OnPointerSpecificFocusExitEventHandler_30(EventFunction_1_t605264588 * value)
	{
		___OnPointerSpecificFocusExitEventHandler_30 = value;
		Il2CppCodeGenWriteBarrier((&___OnPointerSpecificFocusExitEventHandler_30), value);
	}

	inline static int32_t get_offset_of_OnInputClickedEventHandler_31() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnInputClickedEventHandler_31)); }
	inline EventFunction_1_t1390223529 * get_OnInputClickedEventHandler_31() const { return ___OnInputClickedEventHandler_31; }
	inline EventFunction_1_t1390223529 ** get_address_of_OnInputClickedEventHandler_31() { return &___OnInputClickedEventHandler_31; }
	inline void set_OnInputClickedEventHandler_31(EventFunction_1_t1390223529 * value)
	{
		___OnInputClickedEventHandler_31 = value;
		Il2CppCodeGenWriteBarrier((&___OnInputClickedEventHandler_31), value);
	}

	inline static int32_t get_offset_of_OnSourceUpEventHandler_32() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnSourceUpEventHandler_32)); }
	inline EventFunction_1_t1950350445 * get_OnSourceUpEventHandler_32() const { return ___OnSourceUpEventHandler_32; }
	inline EventFunction_1_t1950350445 ** get_address_of_OnSourceUpEventHandler_32() { return &___OnSourceUpEventHandler_32; }
	inline void set_OnSourceUpEventHandler_32(EventFunction_1_t1950350445 * value)
	{
		___OnSourceUpEventHandler_32 = value;
		Il2CppCodeGenWriteBarrier((&___OnSourceUpEventHandler_32), value);
	}

	inline static int32_t get_offset_of_OnSourceDownEventHandler_33() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnSourceDownEventHandler_33)); }
	inline EventFunction_1_t1950350445 * get_OnSourceDownEventHandler_33() const { return ___OnSourceDownEventHandler_33; }
	inline EventFunction_1_t1950350445 ** get_address_of_OnSourceDownEventHandler_33() { return &___OnSourceDownEventHandler_33; }
	inline void set_OnSourceDownEventHandler_33(EventFunction_1_t1950350445 * value)
	{
		___OnSourceDownEventHandler_33 = value;
		Il2CppCodeGenWriteBarrier((&___OnSourceDownEventHandler_33), value);
	}

	inline static int32_t get_offset_of_OnSourceDetectedEventHandler_34() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnSourceDetectedEventHandler_34)); }
	inline EventFunction_1_t3646233467 * get_OnSourceDetectedEventHandler_34() const { return ___OnSourceDetectedEventHandler_34; }
	inline EventFunction_1_t3646233467 ** get_address_of_OnSourceDetectedEventHandler_34() { return &___OnSourceDetectedEventHandler_34; }
	inline void set_OnSourceDetectedEventHandler_34(EventFunction_1_t3646233467 * value)
	{
		___OnSourceDetectedEventHandler_34 = value;
		Il2CppCodeGenWriteBarrier((&___OnSourceDetectedEventHandler_34), value);
	}

	inline static int32_t get_offset_of_OnSourceLostEventHandler_35() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnSourceLostEventHandler_35)); }
	inline EventFunction_1_t3646233467 * get_OnSourceLostEventHandler_35() const { return ___OnSourceLostEventHandler_35; }
	inline EventFunction_1_t3646233467 ** get_address_of_OnSourceLostEventHandler_35() { return &___OnSourceLostEventHandler_35; }
	inline void set_OnSourceLostEventHandler_35(EventFunction_1_t3646233467 * value)
	{
		___OnSourceLostEventHandler_35 = value;
		Il2CppCodeGenWriteBarrier((&___OnSourceLostEventHandler_35), value);
	}

	inline static int32_t get_offset_of_OnManipulationStartedEventHandler_36() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnManipulationStartedEventHandler_36)); }
	inline EventFunction_1_t3062996938 * get_OnManipulationStartedEventHandler_36() const { return ___OnManipulationStartedEventHandler_36; }
	inline EventFunction_1_t3062996938 ** get_address_of_OnManipulationStartedEventHandler_36() { return &___OnManipulationStartedEventHandler_36; }
	inline void set_OnManipulationStartedEventHandler_36(EventFunction_1_t3062996938 * value)
	{
		___OnManipulationStartedEventHandler_36 = value;
		Il2CppCodeGenWriteBarrier((&___OnManipulationStartedEventHandler_36), value);
	}

	inline static int32_t get_offset_of_OnManipulationUpdatedEventHandler_37() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnManipulationUpdatedEventHandler_37)); }
	inline EventFunction_1_t3062996938 * get_OnManipulationUpdatedEventHandler_37() const { return ___OnManipulationUpdatedEventHandler_37; }
	inline EventFunction_1_t3062996938 ** get_address_of_OnManipulationUpdatedEventHandler_37() { return &___OnManipulationUpdatedEventHandler_37; }
	inline void set_OnManipulationUpdatedEventHandler_37(EventFunction_1_t3062996938 * value)
	{
		___OnManipulationUpdatedEventHandler_37 = value;
		Il2CppCodeGenWriteBarrier((&___OnManipulationUpdatedEventHandler_37), value);
	}

	inline static int32_t get_offset_of_OnManipulationCompletedEventHandler_38() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnManipulationCompletedEventHandler_38)); }
	inline EventFunction_1_t3062996938 * get_OnManipulationCompletedEventHandler_38() const { return ___OnManipulationCompletedEventHandler_38; }
	inline EventFunction_1_t3062996938 ** get_address_of_OnManipulationCompletedEventHandler_38() { return &___OnManipulationCompletedEventHandler_38; }
	inline void set_OnManipulationCompletedEventHandler_38(EventFunction_1_t3062996938 * value)
	{
		___OnManipulationCompletedEventHandler_38 = value;
		Il2CppCodeGenWriteBarrier((&___OnManipulationCompletedEventHandler_38), value);
	}

	inline static int32_t get_offset_of_OnManipulationCanceledEventHandler_39() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnManipulationCanceledEventHandler_39)); }
	inline EventFunction_1_t3062996938 * get_OnManipulationCanceledEventHandler_39() const { return ___OnManipulationCanceledEventHandler_39; }
	inline EventFunction_1_t3062996938 ** get_address_of_OnManipulationCanceledEventHandler_39() { return &___OnManipulationCanceledEventHandler_39; }
	inline void set_OnManipulationCanceledEventHandler_39(EventFunction_1_t3062996938 * value)
	{
		___OnManipulationCanceledEventHandler_39 = value;
		Il2CppCodeGenWriteBarrier((&___OnManipulationCanceledEventHandler_39), value);
	}

	inline static int32_t get_offset_of_OnHoldStartedEventHandler_40() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnHoldStartedEventHandler_40)); }
	inline EventFunction_1_t3710245626 * get_OnHoldStartedEventHandler_40() const { return ___OnHoldStartedEventHandler_40; }
	inline EventFunction_1_t3710245626 ** get_address_of_OnHoldStartedEventHandler_40() { return &___OnHoldStartedEventHandler_40; }
	inline void set_OnHoldStartedEventHandler_40(EventFunction_1_t3710245626 * value)
	{
		___OnHoldStartedEventHandler_40 = value;
		Il2CppCodeGenWriteBarrier((&___OnHoldStartedEventHandler_40), value);
	}

	inline static int32_t get_offset_of_OnHoldCompletedEventHandler_41() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnHoldCompletedEventHandler_41)); }
	inline EventFunction_1_t3710245626 * get_OnHoldCompletedEventHandler_41() const { return ___OnHoldCompletedEventHandler_41; }
	inline EventFunction_1_t3710245626 ** get_address_of_OnHoldCompletedEventHandler_41() { return &___OnHoldCompletedEventHandler_41; }
	inline void set_OnHoldCompletedEventHandler_41(EventFunction_1_t3710245626 * value)
	{
		___OnHoldCompletedEventHandler_41 = value;
		Il2CppCodeGenWriteBarrier((&___OnHoldCompletedEventHandler_41), value);
	}

	inline static int32_t get_offset_of_OnHoldCanceledEventHandler_42() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnHoldCanceledEventHandler_42)); }
	inline EventFunction_1_t3710245626 * get_OnHoldCanceledEventHandler_42() const { return ___OnHoldCanceledEventHandler_42; }
	inline EventFunction_1_t3710245626 ** get_address_of_OnHoldCanceledEventHandler_42() { return &___OnHoldCanceledEventHandler_42; }
	inline void set_OnHoldCanceledEventHandler_42(EventFunction_1_t3710245626 * value)
	{
		___OnHoldCanceledEventHandler_42 = value;
		Il2CppCodeGenWriteBarrier((&___OnHoldCanceledEventHandler_42), value);
	}

	inline static int32_t get_offset_of_OnNavigationStartedEventHandler_43() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnNavigationStartedEventHandler_43)); }
	inline EventFunction_1_t1634119807 * get_OnNavigationStartedEventHandler_43() const { return ___OnNavigationStartedEventHandler_43; }
	inline EventFunction_1_t1634119807 ** get_address_of_OnNavigationStartedEventHandler_43() { return &___OnNavigationStartedEventHandler_43; }
	inline void set_OnNavigationStartedEventHandler_43(EventFunction_1_t1634119807 * value)
	{
		___OnNavigationStartedEventHandler_43 = value;
		Il2CppCodeGenWriteBarrier((&___OnNavigationStartedEventHandler_43), value);
	}

	inline static int32_t get_offset_of_OnNavigationUpdatedEventHandler_44() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnNavigationUpdatedEventHandler_44)); }
	inline EventFunction_1_t1634119807 * get_OnNavigationUpdatedEventHandler_44() const { return ___OnNavigationUpdatedEventHandler_44; }
	inline EventFunction_1_t1634119807 ** get_address_of_OnNavigationUpdatedEventHandler_44() { return &___OnNavigationUpdatedEventHandler_44; }
	inline void set_OnNavigationUpdatedEventHandler_44(EventFunction_1_t1634119807 * value)
	{
		___OnNavigationUpdatedEventHandler_44 = value;
		Il2CppCodeGenWriteBarrier((&___OnNavigationUpdatedEventHandler_44), value);
	}

	inline static int32_t get_offset_of_OnNavigationCompletedEventHandler_45() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnNavigationCompletedEventHandler_45)); }
	inline EventFunction_1_t1634119807 * get_OnNavigationCompletedEventHandler_45() const { return ___OnNavigationCompletedEventHandler_45; }
	inline EventFunction_1_t1634119807 ** get_address_of_OnNavigationCompletedEventHandler_45() { return &___OnNavigationCompletedEventHandler_45; }
	inline void set_OnNavigationCompletedEventHandler_45(EventFunction_1_t1634119807 * value)
	{
		___OnNavigationCompletedEventHandler_45 = value;
		Il2CppCodeGenWriteBarrier((&___OnNavigationCompletedEventHandler_45), value);
	}

	inline static int32_t get_offset_of_OnNavigationCanceledEventHandler_46() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnNavigationCanceledEventHandler_46)); }
	inline EventFunction_1_t1634119807 * get_OnNavigationCanceledEventHandler_46() const { return ___OnNavigationCanceledEventHandler_46; }
	inline EventFunction_1_t1634119807 ** get_address_of_OnNavigationCanceledEventHandler_46() { return &___OnNavigationCanceledEventHandler_46; }
	inline void set_OnNavigationCanceledEventHandler_46(EventFunction_1_t1634119807 * value)
	{
		___OnNavigationCanceledEventHandler_46 = value;
		Il2CppCodeGenWriteBarrier((&___OnNavigationCanceledEventHandler_46), value);
	}

	inline static int32_t get_offset_of_OnInputPositionChangedEventHandler_47() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnInputPositionChangedEventHandler_47)); }
	inline EventFunction_1_t162153717 * get_OnInputPositionChangedEventHandler_47() const { return ___OnInputPositionChangedEventHandler_47; }
	inline EventFunction_1_t162153717 ** get_address_of_OnInputPositionChangedEventHandler_47() { return &___OnInputPositionChangedEventHandler_47; }
	inline void set_OnInputPositionChangedEventHandler_47(EventFunction_1_t162153717 * value)
	{
		___OnInputPositionChangedEventHandler_47 = value;
		Il2CppCodeGenWriteBarrier((&___OnInputPositionChangedEventHandler_47), value);
	}

	inline static int32_t get_offset_of_OnSelectPressedAmountChangedEventHandler_48() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnSelectPressedAmountChangedEventHandler_48)); }
	inline EventFunction_1_t3625946465 * get_OnSelectPressedAmountChangedEventHandler_48() const { return ___OnSelectPressedAmountChangedEventHandler_48; }
	inline EventFunction_1_t3625946465 ** get_address_of_OnSelectPressedAmountChangedEventHandler_48() { return &___OnSelectPressedAmountChangedEventHandler_48; }
	inline void set_OnSelectPressedAmountChangedEventHandler_48(EventFunction_1_t3625946465 * value)
	{
		___OnSelectPressedAmountChangedEventHandler_48 = value;
		Il2CppCodeGenWriteBarrier((&___OnSelectPressedAmountChangedEventHandler_48), value);
	}

	inline static int32_t get_offset_of_OnTouchpadTouchedEventHandler_49() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnTouchpadTouchedEventHandler_49)); }
	inline EventFunction_1_t2143617989 * get_OnTouchpadTouchedEventHandler_49() const { return ___OnTouchpadTouchedEventHandler_49; }
	inline EventFunction_1_t2143617989 ** get_address_of_OnTouchpadTouchedEventHandler_49() { return &___OnTouchpadTouchedEventHandler_49; }
	inline void set_OnTouchpadTouchedEventHandler_49(EventFunction_1_t2143617989 * value)
	{
		___OnTouchpadTouchedEventHandler_49 = value;
		Il2CppCodeGenWriteBarrier((&___OnTouchpadTouchedEventHandler_49), value);
	}

	inline static int32_t get_offset_of_OnTouchpadReleasedEventHandler_50() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnTouchpadReleasedEventHandler_50)); }
	inline EventFunction_1_t2143617989 * get_OnTouchpadReleasedEventHandler_50() const { return ___OnTouchpadReleasedEventHandler_50; }
	inline EventFunction_1_t2143617989 ** get_address_of_OnTouchpadReleasedEventHandler_50() { return &___OnTouchpadReleasedEventHandler_50; }
	inline void set_OnTouchpadReleasedEventHandler_50(EventFunction_1_t2143617989 * value)
	{
		___OnTouchpadReleasedEventHandler_50 = value;
		Il2CppCodeGenWriteBarrier((&___OnTouchpadReleasedEventHandler_50), value);
	}

	inline static int32_t get_offset_of_OnSourcePositionChangedEventHandler_51() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnSourcePositionChangedEventHandler_51)); }
	inline EventFunction_1_t3301505711 * get_OnSourcePositionChangedEventHandler_51() const { return ___OnSourcePositionChangedEventHandler_51; }
	inline EventFunction_1_t3301505711 ** get_address_of_OnSourcePositionChangedEventHandler_51() { return &___OnSourcePositionChangedEventHandler_51; }
	inline void set_OnSourcePositionChangedEventHandler_51(EventFunction_1_t3301505711 * value)
	{
		___OnSourcePositionChangedEventHandler_51 = value;
		Il2CppCodeGenWriteBarrier((&___OnSourcePositionChangedEventHandler_51), value);
	}

	inline static int32_t get_offset_of_OnSourceRotationChangedEventHandler_52() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnSourceRotationChangedEventHandler_52)); }
	inline EventFunction_1_t4246854704 * get_OnSourceRotationChangedEventHandler_52() const { return ___OnSourceRotationChangedEventHandler_52; }
	inline EventFunction_1_t4246854704 ** get_address_of_OnSourceRotationChangedEventHandler_52() { return &___OnSourceRotationChangedEventHandler_52; }
	inline void set_OnSourceRotationChangedEventHandler_52(EventFunction_1_t4246854704 * value)
	{
		___OnSourceRotationChangedEventHandler_52 = value;
		Il2CppCodeGenWriteBarrier((&___OnSourceRotationChangedEventHandler_52), value);
	}

	inline static int32_t get_offset_of_OnGamePadDetectedEventHandler_53() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnGamePadDetectedEventHandler_53)); }
	inline EventFunction_1_t3465969818 * get_OnGamePadDetectedEventHandler_53() const { return ___OnGamePadDetectedEventHandler_53; }
	inline EventFunction_1_t3465969818 ** get_address_of_OnGamePadDetectedEventHandler_53() { return &___OnGamePadDetectedEventHandler_53; }
	inline void set_OnGamePadDetectedEventHandler_53(EventFunction_1_t3465969818 * value)
	{
		___OnGamePadDetectedEventHandler_53 = value;
		Il2CppCodeGenWriteBarrier((&___OnGamePadDetectedEventHandler_53), value);
	}

	inline static int32_t get_offset_of_OnGamePadLostEventHandler_54() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnGamePadLostEventHandler_54)); }
	inline EventFunction_1_t3465969818 * get_OnGamePadLostEventHandler_54() const { return ___OnGamePadLostEventHandler_54; }
	inline EventFunction_1_t3465969818 ** get_address_of_OnGamePadLostEventHandler_54() { return &___OnGamePadLostEventHandler_54; }
	inline void set_OnGamePadLostEventHandler_54(EventFunction_1_t3465969818 * value)
	{
		___OnGamePadLostEventHandler_54 = value;
		Il2CppCodeGenWriteBarrier((&___OnGamePadLostEventHandler_54), value);
	}

	inline static int32_t get_offset_of_OnXboxAxisUpdateHandler_55() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnXboxAxisUpdateHandler_55)); }
	inline EventFunction_1_t1726907556 * get_OnXboxAxisUpdateHandler_55() const { return ___OnXboxAxisUpdateHandler_55; }
	inline EventFunction_1_t1726907556 ** get_address_of_OnXboxAxisUpdateHandler_55() { return &___OnXboxAxisUpdateHandler_55; }
	inline void set_OnXboxAxisUpdateHandler_55(EventFunction_1_t1726907556 * value)
	{
		___OnXboxAxisUpdateHandler_55 = value;
		Il2CppCodeGenWriteBarrier((&___OnXboxAxisUpdateHandler_55), value);
	}

	inline static int32_t get_offset_of_OnSpeechKeywordRecognizedEventHandler_56() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnSpeechKeywordRecognizedEventHandler_56)); }
	inline EventFunction_1_t1772443227 * get_OnSpeechKeywordRecognizedEventHandler_56() const { return ___OnSpeechKeywordRecognizedEventHandler_56; }
	inline EventFunction_1_t1772443227 ** get_address_of_OnSpeechKeywordRecognizedEventHandler_56() { return &___OnSpeechKeywordRecognizedEventHandler_56; }
	inline void set_OnSpeechKeywordRecognizedEventHandler_56(EventFunction_1_t1772443227 * value)
	{
		___OnSpeechKeywordRecognizedEventHandler_56 = value;
		Il2CppCodeGenWriteBarrier((&___OnSpeechKeywordRecognizedEventHandler_56), value);
	}

	inline static int32_t get_offset_of_OnDictationHypothesisEventHandler_57() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnDictationHypothesisEventHandler_57)); }
	inline EventFunction_1_t1998685734 * get_OnDictationHypothesisEventHandler_57() const { return ___OnDictationHypothesisEventHandler_57; }
	inline EventFunction_1_t1998685734 ** get_address_of_OnDictationHypothesisEventHandler_57() { return &___OnDictationHypothesisEventHandler_57; }
	inline void set_OnDictationHypothesisEventHandler_57(EventFunction_1_t1998685734 * value)
	{
		___OnDictationHypothesisEventHandler_57 = value;
		Il2CppCodeGenWriteBarrier((&___OnDictationHypothesisEventHandler_57), value);
	}

	inline static int32_t get_offset_of_OnDictationResultEventHandler_58() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnDictationResultEventHandler_58)); }
	inline EventFunction_1_t1998685734 * get_OnDictationResultEventHandler_58() const { return ___OnDictationResultEventHandler_58; }
	inline EventFunction_1_t1998685734 ** get_address_of_OnDictationResultEventHandler_58() { return &___OnDictationResultEventHandler_58; }
	inline void set_OnDictationResultEventHandler_58(EventFunction_1_t1998685734 * value)
	{
		___OnDictationResultEventHandler_58 = value;
		Il2CppCodeGenWriteBarrier((&___OnDictationResultEventHandler_58), value);
	}

	inline static int32_t get_offset_of_OnDictationCompleteEventHandler_59() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnDictationCompleteEventHandler_59)); }
	inline EventFunction_1_t1998685734 * get_OnDictationCompleteEventHandler_59() const { return ___OnDictationCompleteEventHandler_59; }
	inline EventFunction_1_t1998685734 ** get_address_of_OnDictationCompleteEventHandler_59() { return &___OnDictationCompleteEventHandler_59; }
	inline void set_OnDictationCompleteEventHandler_59(EventFunction_1_t1998685734 * value)
	{
		___OnDictationCompleteEventHandler_59 = value;
		Il2CppCodeGenWriteBarrier((&___OnDictationCompleteEventHandler_59), value);
	}

	inline static int32_t get_offset_of_OnDictationErrorEventHandler_60() { return static_cast<int32_t>(offsetof(InputManager_t1871732949_StaticFields, ___OnDictationErrorEventHandler_60)); }
	inline EventFunction_1_t1998685734 * get_OnDictationErrorEventHandler_60() const { return ___OnDictationErrorEventHandler_60; }
	inline EventFunction_1_t1998685734 ** get_address_of_OnDictationErrorEventHandler_60() { return &___OnDictationErrorEventHandler_60; }
	inline void set_OnDictationErrorEventHandler_60(EventFunction_1_t1998685734 * value)
	{
		___OnDictationErrorEventHandler_60 = value;
		Il2CppCodeGenWriteBarrier((&___OnDictationErrorEventHandler_60), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTMANAGER_T1871732949_H
#ifndef HANDGUIDANCE_T3680881389_H
#define HANDGUIDANCE_T3680881389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.HandGuidance
struct  HandGuidance_t3680881389  : public Singleton_1_t4234479742
{
public:
	// UnityEngine.GameObject HoloToolkit.Unity.InputModule.HandGuidance::Cursor
	GameObject_t1756533147 * ___Cursor_4;
	// UnityEngine.GameObject HoloToolkit.Unity.InputModule.HandGuidance::HandGuidanceIndicator
	GameObject_t1756533147 * ___HandGuidanceIndicator_5;
	// System.Single HoloToolkit.Unity.InputModule.HandGuidance::HandGuidanceThreshold
	float ___HandGuidanceThreshold_6;
	// UnityEngine.GameObject HoloToolkit.Unity.InputModule.HandGuidance::handGuidanceIndicatorGameObject
	GameObject_t1756533147 * ___handGuidanceIndicatorGameObject_7;
	// UnityEngine.Quaternion HoloToolkit.Unity.InputModule.HandGuidance::defaultHandGuidanceRotation
	Quaternion_t4030073918  ___defaultHandGuidanceRotation_8;
	// System.Nullable`1<System.UInt32> HoloToolkit.Unity.InputModule.HandGuidance::currentlyTrackedHand
	Nullable_1_t412748336  ___currentlyTrackedHand_9;

public:
	inline static int32_t get_offset_of_Cursor_4() { return static_cast<int32_t>(offsetof(HandGuidance_t3680881389, ___Cursor_4)); }
	inline GameObject_t1756533147 * get_Cursor_4() const { return ___Cursor_4; }
	inline GameObject_t1756533147 ** get_address_of_Cursor_4() { return &___Cursor_4; }
	inline void set_Cursor_4(GameObject_t1756533147 * value)
	{
		___Cursor_4 = value;
		Il2CppCodeGenWriteBarrier((&___Cursor_4), value);
	}

	inline static int32_t get_offset_of_HandGuidanceIndicator_5() { return static_cast<int32_t>(offsetof(HandGuidance_t3680881389, ___HandGuidanceIndicator_5)); }
	inline GameObject_t1756533147 * get_HandGuidanceIndicator_5() const { return ___HandGuidanceIndicator_5; }
	inline GameObject_t1756533147 ** get_address_of_HandGuidanceIndicator_5() { return &___HandGuidanceIndicator_5; }
	inline void set_HandGuidanceIndicator_5(GameObject_t1756533147 * value)
	{
		___HandGuidanceIndicator_5 = value;
		Il2CppCodeGenWriteBarrier((&___HandGuidanceIndicator_5), value);
	}

	inline static int32_t get_offset_of_HandGuidanceThreshold_6() { return static_cast<int32_t>(offsetof(HandGuidance_t3680881389, ___HandGuidanceThreshold_6)); }
	inline float get_HandGuidanceThreshold_6() const { return ___HandGuidanceThreshold_6; }
	inline float* get_address_of_HandGuidanceThreshold_6() { return &___HandGuidanceThreshold_6; }
	inline void set_HandGuidanceThreshold_6(float value)
	{
		___HandGuidanceThreshold_6 = value;
	}

	inline static int32_t get_offset_of_handGuidanceIndicatorGameObject_7() { return static_cast<int32_t>(offsetof(HandGuidance_t3680881389, ___handGuidanceIndicatorGameObject_7)); }
	inline GameObject_t1756533147 * get_handGuidanceIndicatorGameObject_7() const { return ___handGuidanceIndicatorGameObject_7; }
	inline GameObject_t1756533147 ** get_address_of_handGuidanceIndicatorGameObject_7() { return &___handGuidanceIndicatorGameObject_7; }
	inline void set_handGuidanceIndicatorGameObject_7(GameObject_t1756533147 * value)
	{
		___handGuidanceIndicatorGameObject_7 = value;
		Il2CppCodeGenWriteBarrier((&___handGuidanceIndicatorGameObject_7), value);
	}

	inline static int32_t get_offset_of_defaultHandGuidanceRotation_8() { return static_cast<int32_t>(offsetof(HandGuidance_t3680881389, ___defaultHandGuidanceRotation_8)); }
	inline Quaternion_t4030073918  get_defaultHandGuidanceRotation_8() const { return ___defaultHandGuidanceRotation_8; }
	inline Quaternion_t4030073918 * get_address_of_defaultHandGuidanceRotation_8() { return &___defaultHandGuidanceRotation_8; }
	inline void set_defaultHandGuidanceRotation_8(Quaternion_t4030073918  value)
	{
		___defaultHandGuidanceRotation_8 = value;
	}

	inline static int32_t get_offset_of_currentlyTrackedHand_9() { return static_cast<int32_t>(offsetof(HandGuidance_t3680881389, ___currentlyTrackedHand_9)); }
	inline Nullable_1_t412748336  get_currentlyTrackedHand_9() const { return ___currentlyTrackedHand_9; }
	inline Nullable_1_t412748336 * get_address_of_currentlyTrackedHand_9() { return &___currentlyTrackedHand_9; }
	inline void set_currentlyTrackedHand_9(Nullable_1_t412748336  value)
	{
		___currentlyTrackedHand_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDGUIDANCE_T3680881389_H
#ifndef MIXEDREALITYCAMERAMANAGER_T2099335769_H
#define MIXEDREALITYCAMERAMANAGER_T2099335769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.MixedRealityCameraManager
struct  MixedRealityCameraManager_t2099335769  : public Singleton_1_t2652934122
{
public:
	// System.Single HoloToolkit.Unity.InputModule.MixedRealityCameraManager::NearClipPlane_OpaqueDisplay
	float ___NearClipPlane_OpaqueDisplay_4;
	// UnityEngine.CameraClearFlags HoloToolkit.Unity.InputModule.MixedRealityCameraManager::CameraClearFlags_OpaqueDisplay
	int32_t ___CameraClearFlags_OpaqueDisplay_5;
	// UnityEngine.Color HoloToolkit.Unity.InputModule.MixedRealityCameraManager::BackgroundColor_OpaqueDisplay
	Color_t2020392075  ___BackgroundColor_OpaqueDisplay_6;
	// System.Int32 HoloToolkit.Unity.InputModule.MixedRealityCameraManager::OpaqueQualityLevel
	int32_t ___OpaqueQualityLevel_7;
	// System.Single HoloToolkit.Unity.InputModule.MixedRealityCameraManager::NearClipPlane_TransparentDisplay
	float ___NearClipPlane_TransparentDisplay_8;
	// UnityEngine.CameraClearFlags HoloToolkit.Unity.InputModule.MixedRealityCameraManager::CameraClearFlags_TransparentDisplay
	int32_t ___CameraClearFlags_TransparentDisplay_9;
	// UnityEngine.Color HoloToolkit.Unity.InputModule.MixedRealityCameraManager::BackgroundColor_TransparentDisplay
	Color_t2020392075  ___BackgroundColor_TransparentDisplay_10;
	// System.Int32 HoloToolkit.Unity.InputModule.MixedRealityCameraManager::HoloLensQualityLevel
	int32_t ___HoloLensQualityLevel_11;
	// HoloToolkit.Unity.InputModule.MixedRealityCameraManager/DisplayType HoloToolkit.Unity.InputModule.MixedRealityCameraManager::<CurrentDisplayType>k__BackingField
	int32_t ___U3CCurrentDisplayTypeU3Ek__BackingField_12;
	// HoloToolkit.Unity.InputModule.MixedRealityCameraManager/DisplayEventHandler HoloToolkit.Unity.InputModule.MixedRealityCameraManager::OnDisplayDetected
	DisplayEventHandler_t2174504173 * ___OnDisplayDetected_13;

public:
	inline static int32_t get_offset_of_NearClipPlane_OpaqueDisplay_4() { return static_cast<int32_t>(offsetof(MixedRealityCameraManager_t2099335769, ___NearClipPlane_OpaqueDisplay_4)); }
	inline float get_NearClipPlane_OpaqueDisplay_4() const { return ___NearClipPlane_OpaqueDisplay_4; }
	inline float* get_address_of_NearClipPlane_OpaqueDisplay_4() { return &___NearClipPlane_OpaqueDisplay_4; }
	inline void set_NearClipPlane_OpaqueDisplay_4(float value)
	{
		___NearClipPlane_OpaqueDisplay_4 = value;
	}

	inline static int32_t get_offset_of_CameraClearFlags_OpaqueDisplay_5() { return static_cast<int32_t>(offsetof(MixedRealityCameraManager_t2099335769, ___CameraClearFlags_OpaqueDisplay_5)); }
	inline int32_t get_CameraClearFlags_OpaqueDisplay_5() const { return ___CameraClearFlags_OpaqueDisplay_5; }
	inline int32_t* get_address_of_CameraClearFlags_OpaqueDisplay_5() { return &___CameraClearFlags_OpaqueDisplay_5; }
	inline void set_CameraClearFlags_OpaqueDisplay_5(int32_t value)
	{
		___CameraClearFlags_OpaqueDisplay_5 = value;
	}

	inline static int32_t get_offset_of_BackgroundColor_OpaqueDisplay_6() { return static_cast<int32_t>(offsetof(MixedRealityCameraManager_t2099335769, ___BackgroundColor_OpaqueDisplay_6)); }
	inline Color_t2020392075  get_BackgroundColor_OpaqueDisplay_6() const { return ___BackgroundColor_OpaqueDisplay_6; }
	inline Color_t2020392075 * get_address_of_BackgroundColor_OpaqueDisplay_6() { return &___BackgroundColor_OpaqueDisplay_6; }
	inline void set_BackgroundColor_OpaqueDisplay_6(Color_t2020392075  value)
	{
		___BackgroundColor_OpaqueDisplay_6 = value;
	}

	inline static int32_t get_offset_of_OpaqueQualityLevel_7() { return static_cast<int32_t>(offsetof(MixedRealityCameraManager_t2099335769, ___OpaqueQualityLevel_7)); }
	inline int32_t get_OpaqueQualityLevel_7() const { return ___OpaqueQualityLevel_7; }
	inline int32_t* get_address_of_OpaqueQualityLevel_7() { return &___OpaqueQualityLevel_7; }
	inline void set_OpaqueQualityLevel_7(int32_t value)
	{
		___OpaqueQualityLevel_7 = value;
	}

	inline static int32_t get_offset_of_NearClipPlane_TransparentDisplay_8() { return static_cast<int32_t>(offsetof(MixedRealityCameraManager_t2099335769, ___NearClipPlane_TransparentDisplay_8)); }
	inline float get_NearClipPlane_TransparentDisplay_8() const { return ___NearClipPlane_TransparentDisplay_8; }
	inline float* get_address_of_NearClipPlane_TransparentDisplay_8() { return &___NearClipPlane_TransparentDisplay_8; }
	inline void set_NearClipPlane_TransparentDisplay_8(float value)
	{
		___NearClipPlane_TransparentDisplay_8 = value;
	}

	inline static int32_t get_offset_of_CameraClearFlags_TransparentDisplay_9() { return static_cast<int32_t>(offsetof(MixedRealityCameraManager_t2099335769, ___CameraClearFlags_TransparentDisplay_9)); }
	inline int32_t get_CameraClearFlags_TransparentDisplay_9() const { return ___CameraClearFlags_TransparentDisplay_9; }
	inline int32_t* get_address_of_CameraClearFlags_TransparentDisplay_9() { return &___CameraClearFlags_TransparentDisplay_9; }
	inline void set_CameraClearFlags_TransparentDisplay_9(int32_t value)
	{
		___CameraClearFlags_TransparentDisplay_9 = value;
	}

	inline static int32_t get_offset_of_BackgroundColor_TransparentDisplay_10() { return static_cast<int32_t>(offsetof(MixedRealityCameraManager_t2099335769, ___BackgroundColor_TransparentDisplay_10)); }
	inline Color_t2020392075  get_BackgroundColor_TransparentDisplay_10() const { return ___BackgroundColor_TransparentDisplay_10; }
	inline Color_t2020392075 * get_address_of_BackgroundColor_TransparentDisplay_10() { return &___BackgroundColor_TransparentDisplay_10; }
	inline void set_BackgroundColor_TransparentDisplay_10(Color_t2020392075  value)
	{
		___BackgroundColor_TransparentDisplay_10 = value;
	}

	inline static int32_t get_offset_of_HoloLensQualityLevel_11() { return static_cast<int32_t>(offsetof(MixedRealityCameraManager_t2099335769, ___HoloLensQualityLevel_11)); }
	inline int32_t get_HoloLensQualityLevel_11() const { return ___HoloLensQualityLevel_11; }
	inline int32_t* get_address_of_HoloLensQualityLevel_11() { return &___HoloLensQualityLevel_11; }
	inline void set_HoloLensQualityLevel_11(int32_t value)
	{
		___HoloLensQualityLevel_11 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentDisplayTypeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(MixedRealityCameraManager_t2099335769, ___U3CCurrentDisplayTypeU3Ek__BackingField_12)); }
	inline int32_t get_U3CCurrentDisplayTypeU3Ek__BackingField_12() const { return ___U3CCurrentDisplayTypeU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CCurrentDisplayTypeU3Ek__BackingField_12() { return &___U3CCurrentDisplayTypeU3Ek__BackingField_12; }
	inline void set_U3CCurrentDisplayTypeU3Ek__BackingField_12(int32_t value)
	{
		___U3CCurrentDisplayTypeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_OnDisplayDetected_13() { return static_cast<int32_t>(offsetof(MixedRealityCameraManager_t2099335769, ___OnDisplayDetected_13)); }
	inline DisplayEventHandler_t2174504173 * get_OnDisplayDetected_13() const { return ___OnDisplayDetected_13; }
	inline DisplayEventHandler_t2174504173 ** get_address_of_OnDisplayDetected_13() { return &___OnDisplayDetected_13; }
	inline void set_OnDisplayDetected_13(DisplayEventHandler_t2174504173 * value)
	{
		___OnDisplayDetected_13 = value;
		Il2CppCodeGenWriteBarrier((&___OnDisplayDetected_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYCAMERAMANAGER_T2099335769_H
#ifndef INTERACTIONINPUTSOURCE_T3615013919_H
#define INTERACTIONINPUTSOURCE_T3615013919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.InteractionInputSource
struct  InteractionInputSource_t3615013919  : public BaseInputSource_t2378327172
{
public:
	// HoloToolkit.Unity.InputModule.InteractionInputSource/RecognizerStartBehavior HoloToolkit.Unity.InputModule.InteractionInputSource::RecognizerStart
	int32_t ___RecognizerStart_2;
	// System.Boolean HoloToolkit.Unity.InputModule.InteractionInputSource::UseRailsNavigation
	bool ___UseRailsNavigation_3;
	// UnityEngine.XR.WSA.Input.GestureRecognizer HoloToolkit.Unity.InputModule.InteractionInputSource::GestureRecognizer
	GestureRecognizer_t1861500035 * ___GestureRecognizer_4;
	// UnityEngine.XR.WSA.Input.GestureRecognizer HoloToolkit.Unity.InputModule.InteractionInputSource::NavigationGestureRecognizer
	GestureRecognizer_t1861500035 * ___NavigationGestureRecognizer_5;
	// System.Collections.Generic.Dictionary`2<System.UInt32,HoloToolkit.Unity.InputModule.InteractionInputSource/SourceData> HoloToolkit.Unity.InputModule.InteractionInputSource::sourceIdToData
	Dictionary_2_t810643408 * ___sourceIdToData_6;

public:
	inline static int32_t get_offset_of_RecognizerStart_2() { return static_cast<int32_t>(offsetof(InteractionInputSource_t3615013919, ___RecognizerStart_2)); }
	inline int32_t get_RecognizerStart_2() const { return ___RecognizerStart_2; }
	inline int32_t* get_address_of_RecognizerStart_2() { return &___RecognizerStart_2; }
	inline void set_RecognizerStart_2(int32_t value)
	{
		___RecognizerStart_2 = value;
	}

	inline static int32_t get_offset_of_UseRailsNavigation_3() { return static_cast<int32_t>(offsetof(InteractionInputSource_t3615013919, ___UseRailsNavigation_3)); }
	inline bool get_UseRailsNavigation_3() const { return ___UseRailsNavigation_3; }
	inline bool* get_address_of_UseRailsNavigation_3() { return &___UseRailsNavigation_3; }
	inline void set_UseRailsNavigation_3(bool value)
	{
		___UseRailsNavigation_3 = value;
	}

	inline static int32_t get_offset_of_GestureRecognizer_4() { return static_cast<int32_t>(offsetof(InteractionInputSource_t3615013919, ___GestureRecognizer_4)); }
	inline GestureRecognizer_t1861500035 * get_GestureRecognizer_4() const { return ___GestureRecognizer_4; }
	inline GestureRecognizer_t1861500035 ** get_address_of_GestureRecognizer_4() { return &___GestureRecognizer_4; }
	inline void set_GestureRecognizer_4(GestureRecognizer_t1861500035 * value)
	{
		___GestureRecognizer_4 = value;
		Il2CppCodeGenWriteBarrier((&___GestureRecognizer_4), value);
	}

	inline static int32_t get_offset_of_NavigationGestureRecognizer_5() { return static_cast<int32_t>(offsetof(InteractionInputSource_t3615013919, ___NavigationGestureRecognizer_5)); }
	inline GestureRecognizer_t1861500035 * get_NavigationGestureRecognizer_5() const { return ___NavigationGestureRecognizer_5; }
	inline GestureRecognizer_t1861500035 ** get_address_of_NavigationGestureRecognizer_5() { return &___NavigationGestureRecognizer_5; }
	inline void set_NavigationGestureRecognizer_5(GestureRecognizer_t1861500035 * value)
	{
		___NavigationGestureRecognizer_5 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationGestureRecognizer_5), value);
	}

	inline static int32_t get_offset_of_sourceIdToData_6() { return static_cast<int32_t>(offsetof(InteractionInputSource_t3615013919, ___sourceIdToData_6)); }
	inline Dictionary_2_t810643408 * get_sourceIdToData_6() const { return ___sourceIdToData_6; }
	inline Dictionary_2_t810643408 ** get_address_of_sourceIdToData_6() { return &___sourceIdToData_6; }
	inline void set_sourceIdToData_6(Dictionary_2_t810643408 * value)
	{
		___sourceIdToData_6 = value;
		Il2CppCodeGenWriteBarrier((&___sourceIdToData_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONINPUTSOURCE_T3615013919_H
#ifndef SPEECHINPUTSOURCE_T2945198787_H
#define SPEECHINPUTSOURCE_T2945198787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.SpeechInputSource
struct  SpeechInputSource_t2945198787  : public BaseInputSource_t2378327172
{
public:
	// System.Boolean HoloToolkit.Unity.InputModule.SpeechInputSource::PersistentKeywords
	bool ___PersistentKeywords_2;
	// HoloToolkit.Unity.InputModule.SpeechInputSource/RecognizerStartBehavior HoloToolkit.Unity.InputModule.SpeechInputSource::RecognizerStart
	int32_t ___RecognizerStart_3;
	// HoloToolkit.Unity.InputModule.KeywordAndKeyCode[] HoloToolkit.Unity.InputModule.SpeechInputSource::Keywords
	KeywordAndKeyCodeU5BU5D_t2710217503* ___Keywords_4;
	// UnityEngine.Windows.Speech.ConfidenceLevel HoloToolkit.Unity.InputModule.SpeechInputSource::recognitionConfidenceLevel
	int32_t ___recognitionConfidenceLevel_5;
	// UnityEngine.Windows.Speech.KeywordRecognizer HoloToolkit.Unity.InputModule.SpeechInputSource::keywordRecognizer
	KeywordRecognizer_t1990977981 * ___keywordRecognizer_6;

public:
	inline static int32_t get_offset_of_PersistentKeywords_2() { return static_cast<int32_t>(offsetof(SpeechInputSource_t2945198787, ___PersistentKeywords_2)); }
	inline bool get_PersistentKeywords_2() const { return ___PersistentKeywords_2; }
	inline bool* get_address_of_PersistentKeywords_2() { return &___PersistentKeywords_2; }
	inline void set_PersistentKeywords_2(bool value)
	{
		___PersistentKeywords_2 = value;
	}

	inline static int32_t get_offset_of_RecognizerStart_3() { return static_cast<int32_t>(offsetof(SpeechInputSource_t2945198787, ___RecognizerStart_3)); }
	inline int32_t get_RecognizerStart_3() const { return ___RecognizerStart_3; }
	inline int32_t* get_address_of_RecognizerStart_3() { return &___RecognizerStart_3; }
	inline void set_RecognizerStart_3(int32_t value)
	{
		___RecognizerStart_3 = value;
	}

	inline static int32_t get_offset_of_Keywords_4() { return static_cast<int32_t>(offsetof(SpeechInputSource_t2945198787, ___Keywords_4)); }
	inline KeywordAndKeyCodeU5BU5D_t2710217503* get_Keywords_4() const { return ___Keywords_4; }
	inline KeywordAndKeyCodeU5BU5D_t2710217503** get_address_of_Keywords_4() { return &___Keywords_4; }
	inline void set_Keywords_4(KeywordAndKeyCodeU5BU5D_t2710217503* value)
	{
		___Keywords_4 = value;
		Il2CppCodeGenWriteBarrier((&___Keywords_4), value);
	}

	inline static int32_t get_offset_of_recognitionConfidenceLevel_5() { return static_cast<int32_t>(offsetof(SpeechInputSource_t2945198787, ___recognitionConfidenceLevel_5)); }
	inline int32_t get_recognitionConfidenceLevel_5() const { return ___recognitionConfidenceLevel_5; }
	inline int32_t* get_address_of_recognitionConfidenceLevel_5() { return &___recognitionConfidenceLevel_5; }
	inline void set_recognitionConfidenceLevel_5(int32_t value)
	{
		___recognitionConfidenceLevel_5 = value;
	}

	inline static int32_t get_offset_of_keywordRecognizer_6() { return static_cast<int32_t>(offsetof(SpeechInputSource_t2945198787, ___keywordRecognizer_6)); }
	inline KeywordRecognizer_t1990977981 * get_keywordRecognizer_6() const { return ___keywordRecognizer_6; }
	inline KeywordRecognizer_t1990977981 ** get_address_of_keywordRecognizer_6() { return &___keywordRecognizer_6; }
	inline void set_keywordRecognizer_6(KeywordRecognizer_t1990977981 * value)
	{
		___keywordRecognizer_6 = value;
		Il2CppCodeGenWriteBarrier((&___keywordRecognizer_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHINPUTSOURCE_T2945198787_H
#ifndef XBOXCONTROLLERINPUTSOURCE_T486644752_H
#define XBOXCONTROLLERINPUTSOURCE_T486644752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.XboxControllerInputSource
struct  XboxControllerInputSource_t486644752  : public GamePadInputSource_t3413589358
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt32,HoloToolkit.Unity.InputModule.XboxControllerData> HoloToolkit.Unity.InputModule.XboxControllerInputSource::gamePadInputDatas
	Dictionary_2_t2350522257 * ___gamePadInputDatas_10;
	// System.UInt32 HoloToolkit.Unity.InputModule.XboxControllerInputSource::sourceId
	uint32_t ___sourceId_11;
	// HoloToolkit.Unity.InputModule.XboxControllerData HoloToolkit.Unity.InputModule.XboxControllerInputSource::controllerData
	XboxControllerData_t2018742751  ___controllerData_12;
	// UnityEngine.EventSystems.StandaloneInputModule HoloToolkit.Unity.InputModule.XboxControllerInputSource::inputModule
	StandaloneInputModule_t70867863 * ___inputModule_13;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerInputSource::previousHorizontalAxis
	String_t* ___previousHorizontalAxis_14;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerInputSource::previousVerticalAxis
	String_t* ___previousVerticalAxis_15;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerInputSource::previousSubmitButton
	String_t* ___previousSubmitButton_16;
	// System.String HoloToolkit.Unity.InputModule.XboxControllerInputSource::previousCancelButton
	String_t* ___previousCancelButton_17;
	// System.Boolean HoloToolkit.Unity.InputModule.XboxControllerInputSource::previousForceActiveState
	bool ___previousForceActiveState_18;
	// HoloToolkit.Unity.InputModule.XboxControllerMappingTypes HoloToolkit.Unity.InputModule.XboxControllerInputSource::horizontalAxis
	int32_t ___horizontalAxis_19;
	// HoloToolkit.Unity.InputModule.XboxControllerMappingTypes HoloToolkit.Unity.InputModule.XboxControllerInputSource::verticalAxis
	int32_t ___verticalAxis_20;
	// HoloToolkit.Unity.InputModule.XboxControllerMappingTypes HoloToolkit.Unity.InputModule.XboxControllerInputSource::submitButton
	int32_t ___submitButton_21;
	// HoloToolkit.Unity.InputModule.XboxControllerMappingTypes HoloToolkit.Unity.InputModule.XboxControllerInputSource::cancelButton
	int32_t ___cancelButton_22;
	// HoloToolkit.Unity.InputModule.XboxControllerInputSource/MappingEntry[] HoloToolkit.Unity.InputModule.XboxControllerInputSource::mapping
	MappingEntryU5BU5D_t3398603975* ___mapping_23;

public:
	inline static int32_t get_offset_of_gamePadInputDatas_10() { return static_cast<int32_t>(offsetof(XboxControllerInputSource_t486644752, ___gamePadInputDatas_10)); }
	inline Dictionary_2_t2350522257 * get_gamePadInputDatas_10() const { return ___gamePadInputDatas_10; }
	inline Dictionary_2_t2350522257 ** get_address_of_gamePadInputDatas_10() { return &___gamePadInputDatas_10; }
	inline void set_gamePadInputDatas_10(Dictionary_2_t2350522257 * value)
	{
		___gamePadInputDatas_10 = value;
		Il2CppCodeGenWriteBarrier((&___gamePadInputDatas_10), value);
	}

	inline static int32_t get_offset_of_sourceId_11() { return static_cast<int32_t>(offsetof(XboxControllerInputSource_t486644752, ___sourceId_11)); }
	inline uint32_t get_sourceId_11() const { return ___sourceId_11; }
	inline uint32_t* get_address_of_sourceId_11() { return &___sourceId_11; }
	inline void set_sourceId_11(uint32_t value)
	{
		___sourceId_11 = value;
	}

	inline static int32_t get_offset_of_controllerData_12() { return static_cast<int32_t>(offsetof(XboxControllerInputSource_t486644752, ___controllerData_12)); }
	inline XboxControllerData_t2018742751  get_controllerData_12() const { return ___controllerData_12; }
	inline XboxControllerData_t2018742751 * get_address_of_controllerData_12() { return &___controllerData_12; }
	inline void set_controllerData_12(XboxControllerData_t2018742751  value)
	{
		___controllerData_12 = value;
	}

	inline static int32_t get_offset_of_inputModule_13() { return static_cast<int32_t>(offsetof(XboxControllerInputSource_t486644752, ___inputModule_13)); }
	inline StandaloneInputModule_t70867863 * get_inputModule_13() const { return ___inputModule_13; }
	inline StandaloneInputModule_t70867863 ** get_address_of_inputModule_13() { return &___inputModule_13; }
	inline void set_inputModule_13(StandaloneInputModule_t70867863 * value)
	{
		___inputModule_13 = value;
		Il2CppCodeGenWriteBarrier((&___inputModule_13), value);
	}

	inline static int32_t get_offset_of_previousHorizontalAxis_14() { return static_cast<int32_t>(offsetof(XboxControllerInputSource_t486644752, ___previousHorizontalAxis_14)); }
	inline String_t* get_previousHorizontalAxis_14() const { return ___previousHorizontalAxis_14; }
	inline String_t** get_address_of_previousHorizontalAxis_14() { return &___previousHorizontalAxis_14; }
	inline void set_previousHorizontalAxis_14(String_t* value)
	{
		___previousHorizontalAxis_14 = value;
		Il2CppCodeGenWriteBarrier((&___previousHorizontalAxis_14), value);
	}

	inline static int32_t get_offset_of_previousVerticalAxis_15() { return static_cast<int32_t>(offsetof(XboxControllerInputSource_t486644752, ___previousVerticalAxis_15)); }
	inline String_t* get_previousVerticalAxis_15() const { return ___previousVerticalAxis_15; }
	inline String_t** get_address_of_previousVerticalAxis_15() { return &___previousVerticalAxis_15; }
	inline void set_previousVerticalAxis_15(String_t* value)
	{
		___previousVerticalAxis_15 = value;
		Il2CppCodeGenWriteBarrier((&___previousVerticalAxis_15), value);
	}

	inline static int32_t get_offset_of_previousSubmitButton_16() { return static_cast<int32_t>(offsetof(XboxControllerInputSource_t486644752, ___previousSubmitButton_16)); }
	inline String_t* get_previousSubmitButton_16() const { return ___previousSubmitButton_16; }
	inline String_t** get_address_of_previousSubmitButton_16() { return &___previousSubmitButton_16; }
	inline void set_previousSubmitButton_16(String_t* value)
	{
		___previousSubmitButton_16 = value;
		Il2CppCodeGenWriteBarrier((&___previousSubmitButton_16), value);
	}

	inline static int32_t get_offset_of_previousCancelButton_17() { return static_cast<int32_t>(offsetof(XboxControllerInputSource_t486644752, ___previousCancelButton_17)); }
	inline String_t* get_previousCancelButton_17() const { return ___previousCancelButton_17; }
	inline String_t** get_address_of_previousCancelButton_17() { return &___previousCancelButton_17; }
	inline void set_previousCancelButton_17(String_t* value)
	{
		___previousCancelButton_17 = value;
		Il2CppCodeGenWriteBarrier((&___previousCancelButton_17), value);
	}

	inline static int32_t get_offset_of_previousForceActiveState_18() { return static_cast<int32_t>(offsetof(XboxControllerInputSource_t486644752, ___previousForceActiveState_18)); }
	inline bool get_previousForceActiveState_18() const { return ___previousForceActiveState_18; }
	inline bool* get_address_of_previousForceActiveState_18() { return &___previousForceActiveState_18; }
	inline void set_previousForceActiveState_18(bool value)
	{
		___previousForceActiveState_18 = value;
	}

	inline static int32_t get_offset_of_horizontalAxis_19() { return static_cast<int32_t>(offsetof(XboxControllerInputSource_t486644752, ___horizontalAxis_19)); }
	inline int32_t get_horizontalAxis_19() const { return ___horizontalAxis_19; }
	inline int32_t* get_address_of_horizontalAxis_19() { return &___horizontalAxis_19; }
	inline void set_horizontalAxis_19(int32_t value)
	{
		___horizontalAxis_19 = value;
	}

	inline static int32_t get_offset_of_verticalAxis_20() { return static_cast<int32_t>(offsetof(XboxControllerInputSource_t486644752, ___verticalAxis_20)); }
	inline int32_t get_verticalAxis_20() const { return ___verticalAxis_20; }
	inline int32_t* get_address_of_verticalAxis_20() { return &___verticalAxis_20; }
	inline void set_verticalAxis_20(int32_t value)
	{
		___verticalAxis_20 = value;
	}

	inline static int32_t get_offset_of_submitButton_21() { return static_cast<int32_t>(offsetof(XboxControllerInputSource_t486644752, ___submitButton_21)); }
	inline int32_t get_submitButton_21() const { return ___submitButton_21; }
	inline int32_t* get_address_of_submitButton_21() { return &___submitButton_21; }
	inline void set_submitButton_21(int32_t value)
	{
		___submitButton_21 = value;
	}

	inline static int32_t get_offset_of_cancelButton_22() { return static_cast<int32_t>(offsetof(XboxControllerInputSource_t486644752, ___cancelButton_22)); }
	inline int32_t get_cancelButton_22() const { return ___cancelButton_22; }
	inline int32_t* get_address_of_cancelButton_22() { return &___cancelButton_22; }
	inline void set_cancelButton_22(int32_t value)
	{
		___cancelButton_22 = value;
	}

	inline static int32_t get_offset_of_mapping_23() { return static_cast<int32_t>(offsetof(XboxControllerInputSource_t486644752, ___mapping_23)); }
	inline MappingEntryU5BU5D_t3398603975* get_mapping_23() const { return ___mapping_23; }
	inline MappingEntryU5BU5D_t3398603975** get_address_of_mapping_23() { return &___mapping_23; }
	inline void set_mapping_23(MappingEntryU5BU5D_t3398603975* value)
	{
		___mapping_23 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOXCONTROLLERINPUTSOURCE_T486644752_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5400 = { sizeof (XboxControllerHandlerBase_t610195094), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5400[2] = 
{
	XboxControllerHandlerBase_t610195094::get_offset_of_IsGlobalListener_2(),
	XboxControllerHandlerBase_t610195094::get_offset_of_GamePadName_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5401 = { sizeof (XboxControllerMapping_t2384037093), -1, sizeof(XboxControllerMapping_t2384037093_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5401[19] = 
{
	XboxControllerMapping_t2384037093_StaticFields::get_offset_of_U3CXboxLeftStickHorizontalU3Ek__BackingField_0(),
	XboxControllerMapping_t2384037093_StaticFields::get_offset_of_U3CXboxLeftStickVerticalU3Ek__BackingField_1(),
	XboxControllerMapping_t2384037093_StaticFields::get_offset_of_U3CXboxRightStickHorizontalU3Ek__BackingField_2(),
	XboxControllerMapping_t2384037093_StaticFields::get_offset_of_U3CXboxRightStickVerticalU3Ek__BackingField_3(),
	XboxControllerMapping_t2384037093_StaticFields::get_offset_of_U3CXboxDpadHorizontalU3Ek__BackingField_4(),
	XboxControllerMapping_t2384037093_StaticFields::get_offset_of_U3CXboxDpadVerticalU3Ek__BackingField_5(),
	XboxControllerMapping_t2384037093_StaticFields::get_offset_of_U3CXboxLeftTriggerU3Ek__BackingField_6(),
	XboxControllerMapping_t2384037093_StaticFields::get_offset_of_U3CXboxRightTriggerU3Ek__BackingField_7(),
	XboxControllerMapping_t2384037093_StaticFields::get_offset_of_U3CXboxSharedTriggerU3Ek__BackingField_8(),
	XboxControllerMapping_t2384037093_StaticFields::get_offset_of_U3CXboxAU3Ek__BackingField_9(),
	XboxControllerMapping_t2384037093_StaticFields::get_offset_of_U3CXboxBU3Ek__BackingField_10(),
	XboxControllerMapping_t2384037093_StaticFields::get_offset_of_U3CXboxXU3Ek__BackingField_11(),
	XboxControllerMapping_t2384037093_StaticFields::get_offset_of_U3CXboxYU3Ek__BackingField_12(),
	XboxControllerMapping_t2384037093_StaticFields::get_offset_of_U3CXboxLeftBumperU3Ek__BackingField_13(),
	XboxControllerMapping_t2384037093_StaticFields::get_offset_of_U3CXboxRightBumperU3Ek__BackingField_14(),
	XboxControllerMapping_t2384037093_StaticFields::get_offset_of_U3CXboxLeftStickClickU3Ek__BackingField_15(),
	XboxControllerMapping_t2384037093_StaticFields::get_offset_of_U3CXboxRightStickClickU3Ek__BackingField_16(),
	XboxControllerMapping_t2384037093_StaticFields::get_offset_of_U3CXboxViewU3Ek__BackingField_17(),
	XboxControllerMapping_t2384037093_StaticFields::get_offset_of_U3CXboxMenuU3Ek__BackingField_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5402 = { sizeof (XboxControllerMappingTypes_t2404135392)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5402[21] = 
{
	XboxControllerMappingTypes_t2404135392::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5403 = { sizeof (BaseRayStabilizer_t2987552384), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5404 = { sizeof (GazeManager_t1037029152), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5404[14] = 
{
	GazeManager_t1037029152::get_offset_of_U3CIsGazingAtObjectU3Ek__BackingField_4(),
	GazeManager_t1037029152::get_offset_of_FocusedObjectChanged_5(),
	GazeManager_t1037029152::get_offset_of_U3CUnityUIPointerEventU3Ek__BackingField_6(),
	GazeManager_t1037029152::get_offset_of_U3CHitInfoU3Ek__BackingField_7(),
	GazeManager_t1037029152::get_offset_of_U3CHitObjectU3Ek__BackingField_8(),
	GazeManager_t1037029152::get_offset_of_U3CHitPositionU3Ek__BackingField_9(),
	GazeManager_t1037029152::get_offset_of_U3CHitNormalU3Ek__BackingField_10(),
	GazeManager_t1037029152::get_offset_of_MaxGazeCollisionDistance_11(),
	GazeManager_t1037029152::get_offset_of_RaycastLayerMasks_12(),
	GazeManager_t1037029152::get_offset_of_Stabilizer_13(),
	GazeManager_t1037029152::get_offset_of_GazeTransform_14(),
	GazeManager_t1037029152::get_offset_of_DebugDrawRay_15(),
	GazeManager_t1037029152::get_offset_of_U3CRayU3Ek__BackingField_16(),
	GazeManager_t1037029152::get_offset_of_lastHitDistance_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5405 = { sizeof (FocusedChangedDelegate_t2430817330), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5406 = { sizeof (GazeStabilizer_t3174999018), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5406[11] = 
{
	GazeStabilizer_t3174999018::get_offset_of_StoredStabilitySamples_2(),
	GazeStabilizer_t3174999018::get_offset_of_stablePosition_3(),
	GazeStabilizer_t3174999018::get_offset_of_stableRotation_4(),
	GazeStabilizer_t3174999018::get_offset_of_stableRay_5(),
	GazeStabilizer_t3174999018::get_offset_of_positionRollingStats_6(),
	GazeStabilizer_t3174999018::get_offset_of_directionRollingStats_7(),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5407 = { sizeof (BaseInputEventData_t2199373599), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5407[3] = 
{
	BaseInputEventData_t2199373599::get_offset_of_U3CInputSourceU3Ek__BackingField_2(),
	BaseInputEventData_t2199373599::get_offset_of_U3CSourceIdU3Ek__BackingField_3(),
	BaseInputEventData_t2199373599::get_offset_of_U3CTagU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5408 = { sizeof (DictationEventData_t3232161633), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5408[2] = 
{
	DictationEventData_t3232161633::get_offset_of_U3CDictationResultU3Ek__BackingField_6(),
	DictationEventData_t3232161633::get_offset_of_U3CDictationAudioClipU3Ek__BackingField_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5409 = { sizeof (GamePadEventData_t912895835), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5409[1] = 
{
	GamePadEventData_t912895835::get_offset_of_U3CGamePadNameU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5410 = { sizeof (HoldEventData_t2900733459), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5411 = { sizeof (InputClickedEventData_t3434086547), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5411[1] = 
{
	InputClickedEventData_t3434086547::get_offset_of_U3CTapCountU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5412 = { sizeof (InputEventData_t2710196284), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5412[1] = 
{
	InputEventData_t2710196284::get_offset_of_U3CPressTypeU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5413 = { sizeof (InputPositionEventData_t1718411395), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5413[1] = 
{
	InputPositionEventData_t1718411395::get_offset_of_Position_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5414 = { sizeof (ManipulationEventData_t3279489987), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5414[1] = 
{
	ManipulationEventData_t3279489987::get_offset_of_U3CCumulativeDeltaU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5415 = { sizeof (NavigationEventData_t1538884580), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5415[1] = 
{
	NavigationEventData_t1538884580::get_offset_of_U3CNormalizedOffsetU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5416 = { sizeof (PointerInputEventData_t1633755977), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5416[2] = 
{
	PointerInputEventData_t1633755977::get_offset_of_U3CInputSourceU3Ek__BackingField_23(),
	PointerInputEventData_t1633755977::get_offset_of_U3CSourceIdU3Ek__BackingField_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5417 = { sizeof (PointerSpecificEventData_t1451959381), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5417[1] = 
{
	PointerSpecificEventData_t1451959381::get_offset_of_U3CPointerU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5418 = { sizeof (SelectPressedEventData_t531650428), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5418[1] = 
{
	SelectPressedEventData_t531650428::get_offset_of_U3CPressedAmountU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5419 = { sizeof (SourcePositionEventData_t4286406546), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5419[2] = 
{
	SourcePositionEventData_t4286406546::get_offset_of_U3CPointerPositionU3Ek__BackingField_5(),
	SourcePositionEventData_t4286406546::get_offset_of_U3CGripPositionU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5420 = { sizeof (SourceRotationEventData_t1790094301), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5420[2] = 
{
	SourceRotationEventData_t1790094301::get_offset_of_U3CPointerRotationU3Ek__BackingField_5(),
	SourceRotationEventData_t1790094301::get_offset_of_U3CGripRotationU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5421 = { sizeof (SourceStateEventData_t2946150088), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5422 = { sizeof (SpeechEventData_t3647170294), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5422[5] = 
{
	SpeechEventData_t3647170294::get_offset_of_U3CPhraseDurationU3Ek__BackingField_5(),
	SpeechEventData_t3647170294::get_offset_of_U3CPhraseStartTimeU3Ek__BackingField_6(),
	SpeechEventData_t3647170294::get_offset_of_U3CRecognizedTextU3Ek__BackingField_7(),
	SpeechEventData_t3647170294::get_offset_of_U3CConfidenceU3Ek__BackingField_8(),
	SpeechEventData_t3647170294::get_offset_of_U3CSemanticMeaningsU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5423 = { sizeof (XboxControllerEventData_t2888026507), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5423[39] = 
{
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxLeftStickHorizontalAxisU3Ek__BackingField_7(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxLeftStickVerticalAxisU3Ek__BackingField_8(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxRightStickHorizontalAxisU3Ek__BackingField_9(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxRightStickVerticalAxisU3Ek__BackingField_10(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxDpadHorizontalAxisU3Ek__BackingField_11(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxDpadVerticalAxisU3Ek__BackingField_12(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxLeftTriggerAxisU3Ek__BackingField_13(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxRightTriggerAxisU3Ek__BackingField_14(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxSharedTriggerAxisU3Ek__BackingField_15(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxA_PressedU3Ek__BackingField_16(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxB_PressedU3Ek__BackingField_17(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxX_PressedU3Ek__BackingField_18(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxY_PressedU3Ek__BackingField_19(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxLeftBumper_PressedU3Ek__BackingField_20(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxRightBumper_PressedU3Ek__BackingField_21(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxLeftStick_PressedU3Ek__BackingField_22(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxRightStick_PressedU3Ek__BackingField_23(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxView_PressedU3Ek__BackingField_24(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxMenu_PressedU3Ek__BackingField_25(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxA_UpU3Ek__BackingField_26(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxB_UpU3Ek__BackingField_27(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxX_UpU3Ek__BackingField_28(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxY_UpU3Ek__BackingField_29(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxLeftBumper_UpU3Ek__BackingField_30(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxRightBumper_UpU3Ek__BackingField_31(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxLeftStick_UpU3Ek__BackingField_32(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxRightStick_UpU3Ek__BackingField_33(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxView_UpU3Ek__BackingField_34(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxMenu_UpU3Ek__BackingField_35(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxA_DownU3Ek__BackingField_36(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxB_DownU3Ek__BackingField_37(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxX_DownU3Ek__BackingField_38(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxY_DownU3Ek__BackingField_39(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxLeftBumper_DownU3Ek__BackingField_40(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxRightBumper_DownU3Ek__BackingField_41(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxLeftStick_DownU3Ek__BackingField_42(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxRightStick_DownU3Ek__BackingField_43(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxView_DownU3Ek__BackingField_44(),
	XboxControllerEventData_t2888026507::get_offset_of_U3CXboxMenu_DownU3Ek__BackingField_45(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5424 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5425 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5426 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5427 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5428 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5429 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5430 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5431 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5432 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5433 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5434 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5435 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5436 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5437 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5438 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5439 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5440 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5441 = { sizeof (BaseInputSource_t2378327172), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5442 = { sizeof (CustomInputSource_t2925000382), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5442[17] = 
{
	CustomInputSource_t2925000382::get_offset_of_SupportsPosition_2(),
	CustomInputSource_t2925000382::get_offset_of_SupportsRotation_3(),
	CustomInputSource_t2925000382::get_offset_of_SupportsRay_4(),
	CustomInputSource_t2925000382::get_offset_of_SupportsMenuButton_5(),
	CustomInputSource_t2925000382::get_offset_of_SupportsGrasp_6(),
	CustomInputSource_t2925000382::get_offset_of_RaiseEventsBasedOnVisibility_7(),
	CustomInputSource_t2925000382::get_offset_of_SourceKind_8(),
	CustomInputSource_t2925000382::get_offset_of_ControllerPosition_9(),
	CustomInputSource_t2925000382::get_offset_of_ControllerRotation_10(),
	CustomInputSource_t2925000382::get_offset_of_PointingRay_11(),
	CustomInputSource_t2925000382::get_offset_of_currentButtonStates_12(),
	CustomInputSource_t2925000382::get_offset_of_controllerId_13(),
	CustomInputSource_t2925000382::get_offset_of_manualController_14(),
	CustomInputSource_t2925000382::get_offset_of_currentlyVisible_15(),
	CustomInputSource_t2925000382::get_offset_of_visibilityChanged_16(),
	0,
	CustomInputSource_t2925000382::get_offset_of_manipulationStartMovementThreshold_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5443 = { sizeof (ButtonStates_t3673093364), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5443[10] = 
{
	ButtonStates_t3673093364::get_offset_of_IsSelectButtonDown_0(),
	ButtonStates_t3673093364::get_offset_of_SelectButtonStateChanged_1(),
	ButtonStates_t3673093364::get_offset_of_SelectDownStartTime_2(),
	ButtonStates_t3673093364::get_offset_of_IsMenuButtonDown_3(),
	ButtonStates_t3673093364::get_offset_of_MenuButtonStateChanged_4(),
	ButtonStates_t3673093364::get_offset_of_IsGrasped_5(),
	ButtonStates_t3673093364::get_offset_of_GraspStateChanged_6(),
	ButtonStates_t3673093364::get_offset_of_ManipulationInProgress_7(),
	ButtonStates_t3673093364::get_offset_of_HoldInProgress_8(),
	ButtonStates_t3673093364::get_offset_of_CumulativeDelta_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5444 = { sizeof (DictationInputManager_t1394975144), -1, sizeof(DictationInputManager_t1394975144_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5444[9] = 
{
	DictationInputManager_t1394975144_StaticFields::get_offset_of_textSoFar_4(),
	DictationInputManager_t1394975144_StaticFields::get_offset_of_DeviceName_5(),
	DictationInputManager_t1394975144_StaticFields::get_offset_of_samplingRate_6(),
	DictationInputManager_t1394975144_StaticFields::get_offset_of_U3CIsListeningU3Ek__BackingField_7(),
	DictationInputManager_t1394975144_StaticFields::get_offset_of_dictationResult_8(),
	DictationInputManager_t1394975144_StaticFields::get_offset_of_dictationAudioClip_9(),
	DictationInputManager_t1394975144_StaticFields::get_offset_of_dictationRecognizer_10(),
	DictationInputManager_t1394975144_StaticFields::get_offset_of_isTransitioning_11(),
	DictationInputManager_t1394975144_StaticFields::get_offset_of_hasFailed_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5445 = { sizeof (U3CStartRecordingU3Ed__15_t969720811), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5445[5] = 
{
	U3CStartRecordingU3Ed__15_t969720811::get_offset_of_U3CU3E1__state_0(),
	U3CStartRecordingU3Ed__15_t969720811::get_offset_of_U3CU3E2__current_1(),
	U3CStartRecordingU3Ed__15_t969720811::get_offset_of_initialSilenceTimeout_2(),
	U3CStartRecordingU3Ed__15_t969720811::get_offset_of_autoSilenceTimeout_3(),
	U3CStartRecordingU3Ed__15_t969720811::get_offset_of_recordingTime_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5446 = { sizeof (U3CStopRecordingU3Ed__16_t1595603704), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5446[2] = 
{
	U3CStopRecordingU3Ed__16_t1595603704::get_offset_of_U3CU3E1__state_0(),
	U3CStopRecordingU3Ed__16_t1595603704::get_offset_of_U3CU3E2__current_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5447 = { sizeof (GamepadInput_t2080303275), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5447[13] = 
{
	GamepadInput_t2080303275::get_offset_of_GamePadButtonA_2(),
	GamepadInput_t2080303275::get_offset_of_GamePadId_3(),
	GamepadInput_t2080303275::get_offset_of_HoldStartedInterval_4(),
	GamepadInput_t2080303275::get_offset_of_HoldCompletedInterval_5(),
	GamepadInput_t2080303275::get_offset_of_NavigateAroundXAxisName_6(),
	GamepadInput_t2080303275::get_offset_of_NavigateAroundYAxisName_7(),
	GamepadInput_t2080303275::get_offset_of_isAPressed_8(),
	GamepadInput_t2080303275::get_offset_of_holdStarted_9(),
	GamepadInput_t2080303275::get_offset_of_raiseOnce_10(),
	GamepadInput_t2080303275::get_offset_of_navigationStarted_11(),
	GamepadInput_t2080303275::get_offset_of_navigationCompleted_12(),
	GamepadInput_t2080303275::get_offset_of_inputManager_13(),
	GamepadInput_t2080303275::get_offset_of_currentGestureState_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5448 = { sizeof (GestureState_t2223105763)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5448[7] = 
{
	GestureState_t2223105763::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5449 = { sizeof (GamePadInputSource_t3413589358), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5449[4] = 
{
	GamePadInputSource_t3413589358::get_offset_of_DeviceRefreshInterval_2(),
	GamePadInputSource_t3413589358::get_offset_of_DeviceRefreshTimer_3(),
	GamePadInputSource_t3413589358::get_offset_of_LastDeviceUpdateCount_4(),
	GamePadInputSource_t3413589358::get_offset_of_LastDeviceList_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5450 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5451 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5452 = { sizeof (InputSourceInfo_t1964036253)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5452[2] = 
{
	InputSourceInfo_t1964036253::get_offset_of_InputSource_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputSourceInfo_t1964036253::get_offset_of_SourceId_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5453 = { sizeof (InteractionInputSource_t3615013919), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5453[5] = 
{
	InteractionInputSource_t3615013919::get_offset_of_RecognizerStart_2(),
	InteractionInputSource_t3615013919::get_offset_of_UseRailsNavigation_3(),
	InteractionInputSource_t3615013919::get_offset_of_GestureRecognizer_4(),
	InteractionInputSource_t3615013919::get_offset_of_NavigationGestureRecognizer_5(),
	InteractionInputSource_t3615013919::get_offset_of_sourceIdToData_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5454 = { sizeof (RecognizerStartBehavior_t1219220197)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5454[3] = 
{
	RecognizerStartBehavior_t1219220197::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5455 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable5455[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5456 = { sizeof (AxisButton2D_t4012266268)+ sizeof (RuntimeObject), sizeof(AxisButton2D_t4012266268_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable5456[2] = 
{
	AxisButton2D_t4012266268::get_offset_of_Pressed_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AxisButton2D_t4012266268::get_offset_of_Position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5457 = { sizeof (TouchpadData_t1535237815)+ sizeof (RuntimeObject), sizeof(TouchpadData_t1535237815_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable5457[2] = 
{
	TouchpadData_t1535237815::get_offset_of_AxisButton_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchpadData_t1535237815::get_offset_of_Touched_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5458 = { sizeof (AxisButton1D_t2446182327)+ sizeof (RuntimeObject), sizeof(AxisButton1D_t2446182327_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable5458[2] = 
{
	AxisButton1D_t2446182327::get_offset_of_Pressed_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AxisButton1D_t2446182327::get_offset_of_PressedAmount_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5459 = { sizeof (SourceData_t478863902), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5459[17] = 
{
	SourceData_t478863902::get_offset_of_Source_0(),
	SourceData_t478863902::get_offset_of_PointerPosition_1(),
	SourceData_t478863902::get_offset_of_PointerRotation_2(),
	SourceData_t478863902::get_offset_of_PointingRay_3(),
	SourceData_t478863902::get_offset_of_GripPosition_4(),
	SourceData_t478863902::get_offset_of_GripRotation_5(),
	SourceData_t478863902::get_offset_of_Thumbstick_6(),
	SourceData_t478863902::get_offset_of_Touchpad_7(),
	SourceData_t478863902::get_offset_of_Select_8(),
	SourceData_t478863902::get_offset_of_Grasp_9(),
	SourceData_t478863902::get_offset_of_Menu_10(),
	SourceData_t478863902::get_offset_of_ThumbstickPositionUpdated_11(),
	SourceData_t478863902::get_offset_of_TouchpadPositionUpdated_12(),
	SourceData_t478863902::get_offset_of_TouchpadTouchedUpdated_13(),
	SourceData_t478863902::get_offset_of_PositionUpdated_14(),
	SourceData_t478863902::get_offset_of_RotationUpdated_15(),
	SourceData_t478863902::get_offset_of_SelectPressedAmountUpdated_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5460 = { sizeof (InteractionSourceInfo_t1647346441)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5460[5] = 
{
	InteractionSourceInfo_t1647346441::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5461 = { sizeof (InteractionSourcePressInfo_t264698800)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5461[7] = 
{
	InteractionSourcePressInfo_t264698800::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5462 = { sizeof (RawInteractionInputSource_t3971292315), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5462[6] = 
{
	0,
	RawInteractionInputSource_t3971292315::get_offset_of_UseUnscaledTime_3(),
	RawInteractionInputSource_t3971292315::get_offset_of_sourceIdToData_4(),
	RawInteractionInputSource_t3971292315::get_offset_of_pendingSourceIdDeletes_5(),
	RawInteractionInputSource_t3971292315::get_offset_of_currentSources_6(),
	RawInteractionInputSource_t3971292315::get_offset_of_newSources_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5463 = { sizeof (SourceData_t3313083630), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5463[7] = 
{
	SourceData_t3313083630::get_offset_of_SourceId_0(),
	SourceData_t3313083630::get_offset_of_HasPosition_1(),
	SourceData_t3313083630::get_offset_of_SourcePosition_2(),
	SourceData_t3313083630::get_offset_of_IsSourceDown_3(),
	SourceData_t3313083630::get_offset_of_IsSourceDownPending_4(),
	SourceData_t3313083630::get_offset_of_SourceStateChanged_5(),
	SourceData_t3313083630::get_offset_of_SourceStateUpdateTimer_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5464 = { sizeof (SpeechInputSource_t2945198787), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5464[5] = 
{
	SpeechInputSource_t2945198787::get_offset_of_PersistentKeywords_2(),
	SpeechInputSource_t2945198787::get_offset_of_RecognizerStart_3(),
	SpeechInputSource_t2945198787::get_offset_of_Keywords_4(),
	SpeechInputSource_t2945198787::get_offset_of_recognitionConfidenceLevel_5(),
	SpeechInputSource_t2945198787::get_offset_of_keywordRecognizer_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5465 = { sizeof (RecognizerStartBehavior_t1746898251)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5465[3] = 
{
	RecognizerStartBehavior_t1746898251::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5466 = { sizeof (SupportedInputInfo_t919168532)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5466[10] = 
{
	SupportedInputInfo_t919168532::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5467 = { sizeof (XboxControllerInputSource_t486644752), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5467[18] = 
{
	0,
	0,
	0,
	0,
	XboxControllerInputSource_t486644752::get_offset_of_gamePadInputDatas_10(),
	XboxControllerInputSource_t486644752::get_offset_of_sourceId_11(),
	XboxControllerInputSource_t486644752::get_offset_of_controllerData_12(),
	XboxControllerInputSource_t486644752::get_offset_of_inputModule_13(),
	XboxControllerInputSource_t486644752::get_offset_of_previousHorizontalAxis_14(),
	XboxControllerInputSource_t486644752::get_offset_of_previousVerticalAxis_15(),
	XboxControllerInputSource_t486644752::get_offset_of_previousSubmitButton_16(),
	XboxControllerInputSource_t486644752::get_offset_of_previousCancelButton_17(),
	XboxControllerInputSource_t486644752::get_offset_of_previousForceActiveState_18(),
	XboxControllerInputSource_t486644752::get_offset_of_horizontalAxis_19(),
	XboxControllerInputSource_t486644752::get_offset_of_verticalAxis_20(),
	XboxControllerInputSource_t486644752::get_offset_of_submitButton_21(),
	XboxControllerInputSource_t486644752::get_offset_of_cancelButton_22(),
	XboxControllerInputSource_t486644752::get_offset_of_mapping_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5468 = { sizeof (MappingEntry_t711995954), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5468[2] = 
{
	MappingEntry_t711995954::get_offset_of_Type_0(),
	MappingEntry_t711995954::get_offset_of_Value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5469 = { sizeof (AxisController_t3747398803), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5469[20] = 
{
	AxisController_t3747398803::get_offset_of_SensitivityScale_2(),
	AxisController_t3747398803::get_offset_of_UseUnscaledTime_3(),
	AxisController_t3747398803::get_offset_of_axisType_4(),
	AxisController_t3747398803::get_offset_of_buttonType_5(),
	AxisController_t3747398803::get_offset_of_InputManagerHorizontalAxisName_6(),
	AxisController_t3747398803::get_offset_of_InputManagerVerticalAxisName_7(),
	AxisController_t3747398803::get_offset_of_Axis0Destination_8(),
	AxisController_t3747398803::get_offset_of_Axis1Destination_9(),
	AxisController_t3747398803::get_offset_of_Axis2Destination_10(),
	AxisController_t3747398803::get_offset_of_lastMousePosition_11(),
	0,
	0,
	0,
	0,
	AxisController_t3747398803::get_offset_of_isMouseJumping_16(),
	AxisController_t3747398803::get_offset_of_appHasFocus_17(),
	AxisController_t3747398803::get_offset_of_usingMouse_18(),
	AxisController_t3747398803::get_offset_of_inputManagerAxesNeedApproval_19(),
	AxisController_t3747398803::get_offset_of_inputManagerHorizontalAxisApproved_20(),
	AxisController_t3747398803::get_offset_of_inputManagerVerticalAxisApproved_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5470 = { sizeof (AxisType_t1271521318)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5470[15] = 
{
	AxisType_t1271521318::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5471 = { sizeof (AxisDestination_t2593072858)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5471[8] = 
{
	AxisDestination_t2593072858::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5472 = { sizeof (ButtonController_t521134000), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5472[2] = 
{
	ButtonController_t521134000::get_offset_of_buttonType_2(),
	ButtonController_t521134000::get_offset_of_appHasFocus_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5473 = { sizeof (ButtonType_t281723324)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5473[23] = 
{
	ButtonType_t281723324::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5474 = { sizeof (CustomInputControl_t530759532), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5474[27] = 
{
	CustomInputControl_t530759532::get_offset_of_ControllerReturnFactor_2(),
	CustomInputControl_t530759532::get_offset_of_ControllerTimeBeforeReturn_3(),
	CustomInputControl_t530759532::get_offset_of_UseUnscaledTime_4(),
	CustomInputControl_t530759532::get_offset_of_PrimaryAxisTranslateControl_5(),
	CustomInputControl_t530759532::get_offset_of_SecondaryAxisTranslateControl_6(),
	CustomInputControl_t530759532::get_offset_of_PrimaryAxisRotateControl_7(),
	CustomInputControl_t530759532::get_offset_of_SecondaryAxisRotateControl_8(),
	CustomInputControl_t530759532::get_offset_of_TertiaryAxisRotateControl_9(),
	CustomInputControl_t530759532::get_offset_of_SelectButtonControl_10(),
	CustomInputControl_t530759532::get_offset_of_MenuButtonControl_11(),
	CustomInputControl_t530759532::get_offset_of_GraspControl_12(),
	CustomInputControl_t530759532::get_offset_of_ControllerSourceState_13(),
	CustomInputControl_t530759532::get_offset_of_ActiveControllerColor_14(),
	CustomInputControl_t530759532::get_offset_of_DroppedControllerColor_15(),
	CustomInputControl_t530759532::get_offset_of_VisualizeController_16(),
	CustomInputControl_t530759532::get_offset_of_ControllerVisualizer_17(),
	CustomInputControl_t530759532::get_offset_of_HandUpTexture_18(),
	CustomInputControl_t530759532::get_offset_of_HandDownTexture_19(),
	CustomInputControl_t530759532::get_offset_of_ShowPointingRay_20(),
	CustomInputControl_t530759532::get_offset_of_U3CControllerInViewU3Ek__BackingField_21(),
	CustomInputControl_t530759532::get_offset_of_InitialPosition_22(),
	CustomInputControl_t530759532::get_offset_of_localPosition_23(),
	CustomInputControl_t530759532::get_offset_of_localRotation_24(),
	CustomInputControl_t530759532::get_offset_of_visualRenderer_25(),
	CustomInputControl_t530759532::get_offset_of_visualPropertyBlock_26(),
	CustomInputControl_t530759532::get_offset_of_mainTexId_27(),
	CustomInputControl_t530759532::get_offset_of_timeBeforeReturn_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5475 = { sizeof (CustomInputSelector_t3444770302), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5475[7] = 
{
	CustomInputSelector_t3444770302::get_offset_of_simulateHandsInEditor_2(),
	CustomInputSelector_t3444770302::get_offset_of_sourceType_3(),
	CustomInputSelector_t3444770302::get_offset_of_sourceNumber_4(),
	CustomInputSelector_t3444770302::get_offset_of_Inputs_5(),
	CustomInputSelector_t3444770302::get_offset_of_mouse_6(),
	CustomInputSelector_t3444770302::get_offset_of_leftHand_7(),
	CustomInputSelector_t3444770302::get_offset_of_rightHand_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5476 = { sizeof (InputSourceType_t2360810653)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5476[3] = 
{
	InputSourceType_t2360810653::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5477 = { sizeof (InputSourceNumber_t2185102670)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5477[3] = 
{
	InputSourceNumber_t2185102670::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5478 = { sizeof (DebugInteractionSourcePose_t514846003), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5478[7] = 
{
	DebugInteractionSourcePose_t514846003::get_offset_of_TryGetFunctionsReturnTrue_0(),
	DebugInteractionSourcePose_t514846003::get_offset_of_IsPositionAvailable_1(),
	DebugInteractionSourcePose_t514846003::get_offset_of_IsRotationAvailable_2(),
	DebugInteractionSourcePose_t514846003::get_offset_of_Position_3(),
	DebugInteractionSourcePose_t514846003::get_offset_of_Velocity_4(),
	DebugInteractionSourcePose_t514846003::get_offset_of_Rotation_5(),
	DebugInteractionSourcePose_t514846003::get_offset_of_PointerRay_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5479 = { sizeof (DebugInteractionSourceState_t2903268065)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5479[5] = 
{
	DebugInteractionSourceState_t2903268065::get_offset_of_Pressed_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DebugInteractionSourceState_t2903268065::get_offset_of_Grasped_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DebugInteractionSourceState_t2903268065::get_offset_of_MenuPressed_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DebugInteractionSourceState_t2903268065::get_offset_of_SelectPressed_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DebugInteractionSourceState_t2903268065::get_offset_of_SourcePose_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5480 = { sizeof (HandDraggable_t611787868), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5480[20] = 
{
	HandDraggable_t611787868::get_offset_of_StartedDragging_2(),
	HandDraggable_t611787868::get_offset_of_StoppedDragging_3(),
	HandDraggable_t611787868::get_offset_of_HostTransform_4(),
	HandDraggable_t611787868::get_offset_of_DistanceScale_5(),
	HandDraggable_t611787868::get_offset_of_RotationMode_6(),
	HandDraggable_t611787868::get_offset_of_PositionLerpSpeed_7(),
	HandDraggable_t611787868::get_offset_of_RotationLerpSpeed_8(),
	HandDraggable_t611787868::get_offset_of_IsDraggingEnabled_9(),
	HandDraggable_t611787868::get_offset_of_isDragging_10(),
	HandDraggable_t611787868::get_offset_of_isGazed_11(),
	HandDraggable_t611787868::get_offset_of_objRefForward_12(),
	HandDraggable_t611787868::get_offset_of_objRefUp_13(),
	HandDraggable_t611787868::get_offset_of_objRefDistance_14(),
	HandDraggable_t611787868::get_offset_of_gazeAngularOffset_15(),
	HandDraggable_t611787868::get_offset_of_handRefDistance_16(),
	HandDraggable_t611787868::get_offset_of_objRefGrabPoint_17(),
	HandDraggable_t611787868::get_offset_of_draggingPosition_18(),
	HandDraggable_t611787868::get_offset_of_draggingRotation_19(),
	HandDraggable_t611787868::get_offset_of_currentInputSource_20(),
	HandDraggable_t611787868::get_offset_of_currentInputSourceId_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5481 = { sizeof (RotationModeEnum_t853202994)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5481[5] = 
{
	RotationModeEnum_t853202994::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5482 = { sizeof (ManualGazeControl_t3873767954), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5482[16] = 
{
	ManualGazeControl_t3873767954::get_offset_of_MouseSupported_2(),
	ManualGazeControl_t3873767954::get_offset_of_MouseXYRotationAxisControl_3(),
	ManualGazeControl_t3873767954::get_offset_of_MouseXYTranslationAxisControl_4(),
	ManualGazeControl_t3873767954::get_offset_of_MouseXZTranslationAxisControl_5(),
	ManualGazeControl_t3873767954::get_offset_of_KeyboardSupported_6(),
	ManualGazeControl_t3873767954::get_offset_of_KeyboardXYRotationAxisControl_7(),
	ManualGazeControl_t3873767954::get_offset_of_KeyboardXZRotationAxisControl_8(),
	ManualGazeControl_t3873767954::get_offset_of_KeyboardXYTranslationAxisControl_9(),
	ManualGazeControl_t3873767954::get_offset_of_KeyboardXZTranslationAxisControl_10(),
	ManualGazeControl_t3873767954::get_offset_of_JoystickSupported_11(),
	ManualGazeControl_t3873767954::get_offset_of_JoystickXYRotationAxisControl_12(),
	ManualGazeControl_t3873767954::get_offset_of_JoystickXYTranslationAxisControl_13(),
	ManualGazeControl_t3873767954::get_offset_of_JoystickXZTranslationAxisControl_14(),
	ManualGazeControl_t3873767954::get_offset_of_lastTrackerToUnityTranslation_15(),
	ManualGazeControl_t3873767954::get_offset_of_lastTrackerToUnityRotation_16(),
	ManualGazeControl_t3873767954::get_offset_of_cameraTransform_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5483 = { sizeof (SpeechInputHandler_t4153622436), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5483[4] = 
{
	SpeechInputHandler_t4153622436::get_offset_of_Keywords_2(),
	SpeechInputHandler_t4153622436::get_offset_of_IsGlobalListener_3(),
	SpeechInputHandler_t4153622436::get_offset_of_PersistentKeywords_4(),
	SpeechInputHandler_t4153622436::get_offset_of_responses_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5484 = { sizeof (KeywordAndResponse_t690411005)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5484[2] = 
{
	KeywordAndResponse_t690411005::get_offset_of_Keyword_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	KeywordAndResponse_t690411005::get_offset_of_Response_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5485 = { sizeof (U3CAttachToInputManagerInstanceU3Ed__8_t1100151762), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5485[3] = 
{
	U3CAttachToInputManagerInstanceU3Ed__8_t1100151762::get_offset_of_U3CU3E1__state_0(),
	U3CAttachToInputManagerInstanceU3Ed__8_t1100151762::get_offset_of_U3CU3E2__current_1(),
	U3CAttachToInputManagerInstanceU3Ed__8_t1100151762::get_offset_of_U3CU3E4__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5486 = { sizeof (TapToPlace_t3006952925), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5486[10] = 
{
	TapToPlace_t3006952925::get_offset_of_DefaultGazeDistance_2(),
	TapToPlace_t3006952925::get_offset_of_PlaceParentOnTap_3(),
	TapToPlace_t3006952925::get_offset_of_ParentGameObjectToPlace_4(),
	TapToPlace_t3006952925::get_offset_of_IsBeingPlaced_5(),
	TapToPlace_t3006952925::get_offset_of_AllowMeshVisualizationControl_6(),
	TapToPlace_t3006952925::get_offset_of_UseColliderCenter_7(),
	TapToPlace_t3006952925::get_offset_of_interpolator_8(),
	0,
	TapToPlace_t3006952925::get_offset_of_layerCache_10(),
	TapToPlace_t3006952925::get_offset_of_PlacementPosOffset_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5487 = { sizeof (TriggerButton_t385143428), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5487[2] = 
{
	TriggerButton_t385143428::get_offset_of_IsEnabled_2(),
	TriggerButton_t385143428::get_offset_of_ButtonPressed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5488 = { sizeof (KeywordAndKeyCode_t2285498554)+ sizeof (RuntimeObject), sizeof(KeywordAndKeyCode_t2285498554_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable5488[2] = 
{
	KeywordAndKeyCode_t2285498554::get_offset_of_Keyword_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	KeywordAndKeyCode_t2285498554::get_offset_of_KeyCode_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5489 = { sizeof (HandGuidance_t3680881389), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5489[6] = 
{
	HandGuidance_t3680881389::get_offset_of_Cursor_4(),
	HandGuidance_t3680881389::get_offset_of_HandGuidanceIndicator_5(),
	HandGuidance_t3680881389::get_offset_of_HandGuidanceThreshold_6(),
	HandGuidance_t3680881389::get_offset_of_handGuidanceIndicatorGameObject_7(),
	HandGuidance_t3680881389::get_offset_of_defaultHandGuidanceRotation_8(),
	HandGuidance_t3680881389::get_offset_of_currentlyTrackedHand_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5490 = { sizeof (InputManager_t1871732949), -1, sizeof(InputManager_t1871732949_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5490[57] = 
{
	InputManager_t1871732949::get_offset_of_InputEnabled_4(),
	InputManager_t1871732949::get_offset_of_InputDisabled_5(),
	InputManager_t1871732949::get_offset_of_globalListeners_6(),
	InputManager_t1871732949::get_offset_of_modalInputStack_7(),
	InputManager_t1871732949::get_offset_of_fallbackInputStack_8(),
	InputManager_t1871732949::get_offset_of_U3COverrideFocusedObjectU3Ek__BackingField_9(),
	InputManager_t1871732949::get_offset_of_disabledRefCount_10(),
	InputManager_t1871732949::get_offset_of_inputEventData_11(),
	InputManager_t1871732949::get_offset_of_sourceClickedEventData_12(),
	InputManager_t1871732949::get_offset_of_sourceStateEventData_13(),
	InputManager_t1871732949::get_offset_of_manipulationEventData_14(),
	InputManager_t1871732949::get_offset_of_holdEventData_15(),
	InputManager_t1871732949::get_offset_of_navigationEventData_16(),
	InputManager_t1871732949::get_offset_of_gamePadEventData_17(),
	InputManager_t1871732949::get_offset_of_xboxControllerEventData_18(),
	InputManager_t1871732949::get_offset_of_sourceRotationEventData_19(),
	InputManager_t1871732949::get_offset_of_sourcePositionEventData_20(),
	InputManager_t1871732949::get_offset_of_pointerSpecificEventData_21(),
	InputManager_t1871732949::get_offset_of_inputPositionEventData_22(),
	InputManager_t1871732949::get_offset_of_selectPressedEventData_23(),
	InputManager_t1871732949::get_offset_of_speechEventData_24(),
	InputManager_t1871732949::get_offset_of_dictationEventData_25(),
	InputManager_t1871732949::get_offset_of_detectedInputSources_26(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnFocusEnterEventHandler_27(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnFocusExitEventHandler_28(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnPointerSpecificFocusEnterEventHandler_29(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnPointerSpecificFocusExitEventHandler_30(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnInputClickedEventHandler_31(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnSourceUpEventHandler_32(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnSourceDownEventHandler_33(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnSourceDetectedEventHandler_34(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnSourceLostEventHandler_35(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnManipulationStartedEventHandler_36(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnManipulationUpdatedEventHandler_37(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnManipulationCompletedEventHandler_38(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnManipulationCanceledEventHandler_39(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnHoldStartedEventHandler_40(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnHoldCompletedEventHandler_41(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnHoldCanceledEventHandler_42(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnNavigationStartedEventHandler_43(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnNavigationUpdatedEventHandler_44(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnNavigationCompletedEventHandler_45(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnNavigationCanceledEventHandler_46(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnInputPositionChangedEventHandler_47(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnSelectPressedAmountChangedEventHandler_48(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnTouchpadTouchedEventHandler_49(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnTouchpadReleasedEventHandler_50(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnSourcePositionChangedEventHandler_51(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnSourceRotationChangedEventHandler_52(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnGamePadDetectedEventHandler_53(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnGamePadLostEventHandler_54(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnXboxAxisUpdateHandler_55(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnSpeechKeywordRecognizedEventHandler_56(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnDictationHypothesisEventHandler_57(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnDictationResultEventHandler_58(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnDictationCompleteEventHandler_59(),
	InputManager_t1871732949_StaticFields::get_offset_of_OnDictationErrorEventHandler_60(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5491 = { sizeof (U3CU3Ec_t299385576), -1, sizeof(U3CU3Ec_t299385576_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5491[1] = 
{
	U3CU3Ec_t299385576_StaticFields::get_offset_of_U3CU3E9_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5492 = { sizeof (KeyboardManager_t2660186888), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5492[3] = 
{
	KeyboardManager_t2660186888::get_offset_of_registeredCallbacks_4(),
	KeyboardManager_t2660186888::get_offset_of_detectedKeyEvents_5(),
	KeyboardManager_t2660186888::get_offset_of_pendingKeyEvents_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5493 = { sizeof (KeyEvent_t2687587287)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5493[4] = 
{
	KeyEvent_t2687587287::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5494 = { sizeof (KeyCodeEventPair_t52935748)+ sizeof (RuntimeObject), sizeof(KeyCodeEventPair_t52935748 ), 0, 0 };
extern const int32_t g_FieldOffsetTable5494[2] = 
{
	KeyCodeEventPair_t52935748::get_offset_of_KeyCode_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	KeyCodeEventPair_t52935748::get_offset_of_KeyEvent_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5495 = { sizeof (KeyboardRegistration_t1091472458), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5495[3] = 
{
	KeyboardRegistration_t1091472458::get_offset_of_keyCodeEvent_0(),
	KeyboardRegistration_t1091472458::get_offset_of_callback_1(),
	KeyboardRegistration_t1091472458::get_offset_of_isRegistered_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5496 = { sizeof (KeyboardCallback_t3674756476), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5497 = { sizeof (MixedRealityCameraManager_t2099335769), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5497[10] = 
{
	MixedRealityCameraManager_t2099335769::get_offset_of_NearClipPlane_OpaqueDisplay_4(),
	MixedRealityCameraManager_t2099335769::get_offset_of_CameraClearFlags_OpaqueDisplay_5(),
	MixedRealityCameraManager_t2099335769::get_offset_of_BackgroundColor_OpaqueDisplay_6(),
	MixedRealityCameraManager_t2099335769::get_offset_of_OpaqueQualityLevel_7(),
	MixedRealityCameraManager_t2099335769::get_offset_of_NearClipPlane_TransparentDisplay_8(),
	MixedRealityCameraManager_t2099335769::get_offset_of_CameraClearFlags_TransparentDisplay_9(),
	MixedRealityCameraManager_t2099335769::get_offset_of_BackgroundColor_TransparentDisplay_10(),
	MixedRealityCameraManager_t2099335769::get_offset_of_HoloLensQualityLevel_11(),
	MixedRealityCameraManager_t2099335769::get_offset_of_U3CCurrentDisplayTypeU3Ek__BackingField_12(),
	MixedRealityCameraManager_t2099335769::get_offset_of_OnDisplayDetected_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5498 = { sizeof (DisplayType_t3313923409)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5498[3] = 
{
	DisplayType_t3313923409::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5499 = { sizeof (DisplayEventHandler_t2174504173), sizeof(Il2CppMethodPointer), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
