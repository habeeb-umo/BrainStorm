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

// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t1689446432;
// System.Type
struct Type_t;
// System.String
struct String_t;
// Windows.UI.Xaml.IDependencyObjectFactory
struct IDependencyObjectFactory_t188179991;
// System.Void
struct Void_t1841601450;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory
struct IPropertyChangedEventArgsFactory_t3741841467;
// System.Char[]
struct CharU5BU5D_t1328083999;
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
struct ISpatialInteractionManagerStatics_t2133328341;
// Windows.Storage.IApplicationDataStatics
struct IApplicationDataStatics_t1968290068;
// Windows.Storage.IApplicationDataStatics2
struct IApplicationDataStatics2_t1332623130;
// IActivationFactory
struct Il2CppIActivationFactory;
// Windows.Networking.Sockets.IStreamSocketStatics
struct IStreamSocketStatics_t3531737089;
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
struct IInstalledVoicesStatic_t3188562746;
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
struct IInstalledVoicesStatic2_t798858600;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1572802995;
// Windows.UI.Core.ICoreWindowStatic
struct ICoreWindowStatic_t2411591036;
// System.Delegate[]
struct DelegateU5BU5D_t1606206610;
// Windows.Perception.IPerceptionTimestampHelperStatics
struct IPerceptionTimestampHelperStatics_t2143050105;

struct IPerceptionTimestamp_t3816561066;
struct IVectorView_1_t360486135;
struct ISpatialInteractionManager_t1055370764;
struct ISimpleHapticsController_t718010169;
struct IAsyncOperation_1_t887628065;
struct ISpatialInteractionSource_t3243911342;
struct IBindableIterator_t1279970208;
struct IBindableVectorView_t2929852672;
struct ISpatialInteractionController_t4282417239;
struct IInputStream_t3363766785;
struct IBuffer_t3194396795;
struct IAsyncOperationWithProgress_2_t2973942662;
struct IAsyncOperation_1_t1311757012;
struct IFrame_t2020096710;
struct IStreamSocket_t2533243978;
struct ICoreDispatcher_t2775224237;
struct IVectorView_1_t2783581427;
struct IOutputStream_t3078671696;
struct IHostName_t2239254460;
struct IAsyncAction_t1489868403;
struct IStorageFolder_t2947831922;
struct IAsyncOperation_1_t3027684956;
struct IVoiceInformation_t3666062611;
struct IApplicationData_t1229331037;
struct ICoreWindow_t3668417618;
struct ITypedEventHandler_2_t3780428703_ComCallableWrapper;
struct ITypedEventHandler_2_t3704908327_ComCallableWrapper;
struct IDispatchedHandler_t3993910849_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t2905586008;
struct IVectorView_1_t3394600096;
struct ISimpleHapticsControllerFeedback_t2109010546;



// Windows.UI.Input.Spatial.ISpatialInteractionSourceState2
struct NOVTABLE ISpatialInteractionSourceState2_t3316743315 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped0_get_IsSelectPressed_m1484448064() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped1_get_IsMenuPressed_m3986978894() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped2_get_IsGrasped_m1487082350() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped3_get_SelectPressedValue_m2974433472() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped4_get_ControllerProperties_m2730111219() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionManager
struct NOVTABLE ISpatialInteractionManager_t1055370764 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped0_add_SourceDetected_m2670539489() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped1_remove_SourceDetected_m3606140863() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped2_add_SourceLost_m1732989969() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped3_remove_SourceLost_m4058065699() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped4_add_SourceUpdated_m746062646() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped5_remove_SourceUpdated_m3882158102() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped6_add_SourcePressed_m3847171531() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped7_remove_SourcePressed_m1773033937() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped8_add_SourceReleased_m1848016970() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped9_remove_SourceReleased_m2436431678() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped10_add_InteractionDetected_m2621896831() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped11_remove_InteractionDetected_m353791133() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_GetDetectedSourcesAtTimestamp_m3983483057(IPerceptionTimestamp_t3816561066* ___timeStamp0, IVectorView_1_t360486135** comReturnValue) = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
struct NOVTABLE ISpatialInteractionManagerStatics_t2133328341 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManagerStatics_GetForCurrentView_m1130068403(ISpatialInteractionManager_t1055370764** comReturnValue) = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionController
struct NOVTABLE ISpatialInteractionController_t4282417239 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_U24__Stripped0_get_HasTouchpad_m2301917834() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_U24__Stripped1_get_HasThumbstick_m2292852401() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_get_SimpleHapticsController_m2933689033(ISimpleHapticsController_t718010169** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_U24__Stripped2_get_VendorId_m2925888433() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_U24__Stripped3_get_ProductId_m60345399() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_U24__Stripped4_get_Version_m224632438() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionController2
struct NOVTABLE ISpatialInteractionController2_t3840354057 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController2_TryGetRenderableModelAsync_m1603714971(IAsyncOperation_1_t887628065** comReturnValue) = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState
struct NOVTABLE ISpatialInteractionSourceState_t1888017753 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_get_Source_m1533458842(ISpatialInteractionSource_t3243911342** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped0_get_Properties_m3010378841() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped1_get_IsPressed_m3488359317() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped2_get_Timestamp_m116532702() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped3_TryGetPointerPose_m2672657841() = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterator
struct NOVTABLE IBindableIterator_t1279970208 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterator_get_Current_m2945295716(Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableIterator_get_HasCurrent_m1851672337(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableIterator_MoveNext_m112839061(bool* comReturnValue) = 0;
};
// Windows.UI.Xaml.Controls.INavigate
struct NOVTABLE INavigate_t2845042632 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INavigate_U24__Stripped0_Navigate_m3475576623() = 0;
};
// Windows.UI.Xaml.Controls.IContentControl
struct NOVTABLE IContentControl_t33651485 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IContentControl_U24__Stripped0_get_Content_m784203101() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControl_U24__Stripped1_put_Content_m4010713531() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControl_U24__Stripped2_get_ContentTemplate_m2966500651() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControl_U24__Stripped3_put_ContentTemplate_m2056824549() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControl_U24__Stripped4_get_ContentTemplateSelector_m3406765674() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControl_U24__Stripped5_put_ContentTemplateSelector_m1304904132() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControl_U24__Stripped6_get_ContentTransitions_m2438994963() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControl_U24__Stripped7_put_ContentTransitions_m1208609625() = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_t4008853116 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m3239675412(IBindableIterator_t1279970208** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_t3448723239 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m3246556282(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m2474900715(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m4135656108(IBindableVectorView_t2929852672** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2155793391(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m3524192617(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m2669173556(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m3442045779(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_m109263828(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_m1996380968() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3626415885() = 0;
};
// Windows.UI.Xaml.Interop.IBindableVectorView
struct NOVTABLE IBindableVectorView_t2929852672 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_U24__Stripped0_GetAt_m1721433128() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_U24__Stripped1_get_Size_m528937216() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_U24__Stripped2_IndexOf_m292519194() = 0;
};
// Windows.UI.Core.ICoreWindow5
struct NOVTABLE ICoreWindow5_t2865289979 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindow5_U24__Stripped0_get_DispatcherQueue_m245680211() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow5_U24__Stripped1_get_ActivationMode_m260833971() = 0;
};
// Windows.UI.Core.ICoreWindowStatic
struct NOVTABLE ICoreWindowStatic_t2411591036 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindowStatic_U24__Stripped0_GetForCurrentThread_m3702802899() = 0;
};
// Windows.UI.Core.ICoreAcceleratorKeys
struct NOVTABLE ICoreAcceleratorKeys_t2301439033 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreAcceleratorKeys_U24__Stripped0_add_AcceleratorKeyActivated_m3608502121() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreAcceleratorKeys_U24__Stripped1_remove_AcceleratorKeyActivated_m2423160075() = 0;
};
// Windows.UI.Core.ICoreWindow2
struct NOVTABLE ICoreWindow2_t2462005452 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindow2_U24__Stripped0_put_PointerPosition_m3510243595() = 0;
};
// Windows.UI.Core.ICoreWindow3
struct NOVTABLE ICoreWindow3_t4028089393 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindow3_U24__Stripped0_add_ClosestInteractiveBoundsRequested_m1795521072() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow3_U24__Stripped1_remove_ClosestInteractiveBoundsRequested_m687109528() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow3_U24__Stripped2_GetCurrentKeyEventDeviceId_m1436751253() = 0;
};
// Windows.UI.Core.ICoreWindow4
struct NOVTABLE ICoreWindow4_t1299206038 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindow4_U24__Stripped0_add_ResizeStarted_m1393375496() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow4_U24__Stripped1_remove_ResizeStarted_m1959080166() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow4_U24__Stripped2_add_ResizeCompleted_m2249161814() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow4_U24__Stripped3_remove_ResizeCompleted_m2864294996() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSource
struct NOVTABLE ISpatialInteractionSource_t3243911342 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource_get_Id_m4000788731(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource_U24__Stripped0_get_Kind_m3768305191() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSource2
struct NOVTABLE ISpatialInteractionSource2_t2995569052 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource2_U24__Stripped0_get_IsPointingSupported_m1661992937() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource2_U24__Stripped1_get_IsMenuSupported_m4176541431() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource2_U24__Stripped2_get_IsGraspSupported_m173066946() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource2_get_Controller_m2360151923(ISpatialInteractionController_t4282417239** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource2_U24__Stripped3_TryGetStateAtTimestamp_m1750643486() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSource3
struct NOVTABLE ISpatialInteractionSource3_t2995569053 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource3_U24__Stripped0_get_Handedness_m467625513() = 0;
};
// Windows.UI.Core.ICoreDispatcher2
struct NOVTABLE ICoreDispatcher2_t2909526611 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcher2_U24__Stripped0_TryRunAsync_m720192130() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcher2_U24__Stripped1_TryRunIdleAsync_m2911803289() = 0;
};
// Windows.UI.Core.ICoreDispatcherWithTaskPriority
struct NOVTABLE ICoreDispatcherWithTaskPriority_t1401535646 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcherWithTaskPriority_U24__Stripped0_get_CurrentPriority_m2506084693() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcherWithTaskPriority_U24__Stripped1_put_CurrentPriority_m2505048703() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcherWithTaskPriority_U24__Stripped2_ShouldYield_m2867562985() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcherWithTaskPriority_U24__Stripped3_ShouldYield_m1753218980() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcherWithTaskPriority_U24__Stripped4_StopProcessEvents_m1871569515() = 0;
};
// Windows.UI.Core.ICorePointerRedirector
struct NOVTABLE ICorePointerRedirector_t3370186726 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICorePointerRedirector_U24__Stripped0_add_PointerRoutedAway_m2922237439() = 0;
	virtual il2cpp_hresult_t STDCALL ICorePointerRedirector_U24__Stripped1_remove_PointerRoutedAway_m3672581673() = 0;
	virtual il2cpp_hresult_t STDCALL ICorePointerRedirector_U24__Stripped2_add_PointerRoutedTo_m4270203876() = 0;
	virtual il2cpp_hresult_t STDCALL ICorePointerRedirector_U24__Stripped3_remove_PointerRoutedTo_m3610762574() = 0;
	virtual il2cpp_hresult_t STDCALL ICorePointerRedirector_U24__Stripped4_add_PointerRoutedReleased_m3665152032() = 0;
	virtual il2cpp_hresult_t STDCALL ICorePointerRedirector_U24__Stripped5_remove_PointerRoutedReleased_m3111417934() = 0;
};
// Windows.UI.Xaml.IUIElementOverrides
struct NOVTABLE IUIElementOverrides_t2720963150 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides_U24__Stripped0_OnCreateAutomationPeer_m1327632676() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides_U24__Stripped1_OnDisconnectVisualChildren_m2392970619() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides_U24__Stripped2_FindSubElementsForTouchTargeting_m295991657() = 0;
};
// Windows.Storage.Streams.IRandomAccessStreamWithContentType
struct NOVTABLE IRandomAccessStreamWithContentType_t3401445771 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// Windows.Storage.Streams.IContentTypeProvider
struct NOVTABLE IContentTypeProvider_t3737071693 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IContentTypeProvider_U24__Stripped0_get_ContentType_m3642879495() = 0;
};
// Windows.UI.Xaml.IDependencyObjectFactory
struct NOVTABLE IDependencyObjectFactory_t188179991 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDependencyObjectFactory_U24__Stripped0_CreateInstance_m2654611796() = 0;
};
// Windows.UI.Xaml.IDependencyObject2
struct NOVTABLE IDependencyObject2_t1927716995 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDependencyObject2_U24__Stripped0_RegisterPropertyChangedCallback_m1445323272() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject2_U24__Stripped1_UnregisterPropertyChangedCallback_m2145573186() = 0;
};
// Windows.UI.Xaml.IUIElement
struct NOVTABLE IUIElement_t1489863049 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped0_get_DesiredSize_m1021677195() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped1_get_AllowDrop_m3559871047() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped2_put_AllowDrop_m383014115() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped3_get_Opacity_m3293143786() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped4_put_Opacity_m1688031818() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped5_get_Clip_m2474052637() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped6_put_Clip_m2045738625() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped7_get_RenderTransform_m3874704435() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped8_put_RenderTransform_m3624141435() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped9_get_Projection_m1567012064() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped10_put_Projection_m1662043793() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped11_get_RenderTransformOrigin_m2751217272() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped12_put_RenderTransformOrigin_m1671305484() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped13_get_IsHitTestVisible_m2349527183() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped14_put_IsHitTestVisible_m1609373775() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped15_get_Visibility_m3133260024() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped16_put_Visibility_m86325572() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped17_get_RenderSize_m1930064259() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped18_get_UseLayoutRounding_m222346700() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped19_put_UseLayoutRounding_m3581218474() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped20_get_Transitions_m1777726946() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped21_put_Transitions_m2735145004() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped22_get_CacheMode_m2041435041() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped23_put_CacheMode_m3505091231() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped24_get_IsTapEnabled_m4246989082() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped25_put_IsTapEnabled_m2588316688() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped26_get_IsDoubleTapEnabled_m3341838197() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped27_put_IsDoubleTapEnabled_m1883538911() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped28_get_IsRightTapEnabled_m2165184270() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped29_put_IsRightTapEnabled_m1180261100() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped30_get_IsHoldingEnabled_m3895492393() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped31_put_IsHoldingEnabled_m1098359051() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped32_get_ManipulationMode_m2117378015() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped33_put_ManipulationMode_m3148391913() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped34_get_PointerCaptures_m1680558129() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped35_add_KeyUp_m1652036461() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped36_remove_KeyUp_m2266716865() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped37_add_KeyDown_m258392722() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped38_remove_KeyDown_m1779795834() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped39_add_GotFocus_m4246436891() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped40_remove_GotFocus_m3894815840() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped41_add_LostFocus_m2771929894() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped42_remove_LostFocus_m3889972236() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped43_add_DragEnter_m810869646() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped44_remove_DragEnter_m263041844() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped45_add_DragLeave_m1538819871() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped46_remove_DragLeave_m3399346987() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped47_add_DragOver_m2518108656() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped48_remove_DragOver_m3438969410() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped49_add_Drop_m262059149() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped50_remove_Drop_m3337804362() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped51_add_PointerPressed_m1711190656() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped52_remove_PointerPressed_m197941252() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped53_add_PointerMoved_m765997145() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped54_remove_PointerMoved_m2322705081() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped55_add_PointerReleased_m1841836535() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped56_remove_PointerReleased_m2987405919() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped57_add_PointerEntered_m3510615761() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped58_remove_PointerEntered_m3583268401() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped59_add_PointerExited_m4273404723() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped60_remove_PointerExited_m1921742906() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped61_add_PointerCaptureLost_m740677893() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped62_remove_PointerCaptureLost_m3560118917() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped63_add_PointerCanceled_m4092323086() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped64_remove_PointerCanceled_m1784187640() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped65_add_PointerWheelChanged_m1254277310() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped66_remove_PointerWheelChanged_m3963918800() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped67_add_Tapped_m1682101996() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped68_remove_Tapped_m2030349498() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped69_add_DoubleTapped_m359970627() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped70_remove_DoubleTapped_m1636394406() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped71_add_Holding_m2340014480() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped72_remove_Holding_m2015190528() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped73_add_RightTapped_m1528238897() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped74_remove_RightTapped_m1362115125() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped75_add_ManipulationStarting_m1561306134() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped76_remove_ManipulationStarting_m4181974158() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped77_add_ManipulationInertiaStarting_m3974616832() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped78_remove_ManipulationInertiaStarting_m362853096() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped79_add_ManipulationStarted_m1956217425() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped80_remove_ManipulationStarted_m3165711582() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped81_add_ManipulationDelta_m2062591731() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped82_remove_ManipulationDelta_m3150555799() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped83_add_ManipulationCompleted_m2060065556() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped84_remove_ManipulationCompleted_m293271478() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped85_Measure_m3128094872() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped86_Arrange_m3011275653() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped87_CapturePointer_m624026531() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped88_ReleasePointerCapture_m2028811729() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped89_ReleasePointerCaptures_m3831764159() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped90_AddHandler_m560248751() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped91_RemoveHandler_m2373972549() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped92_TransformToVisual_m3081416059() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped93_InvalidateMeasure_m334621504() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped94_InvalidateArrange_m3493466219() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped95_UpdateLayout_m1184020986() = 0;
};
// Windows.UI.Xaml.Data.IPropertyChangedEventArgs
struct NOVTABLE IPropertyChangedEventArgs_t3538282873 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyChangedEventArgs_get_PropertyName_m4124507059(Il2CppHString* comReturnValue) = 0;
};
// Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory
struct NOVTABLE IPropertyChangedEventArgsFactory_t3741841467 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyChangedEventArgsFactory_CreateInstance_m3840872668(Il2CppHString ___name0, Il2CppIInspectable* ___outer1, Il2CppIInspectable** ___inner2, PropertyChangedEventArgs_t1689446432 ** comReturnValue) = 0;
};
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
// Windows.Storage.Streams.IRandomAccessStream
struct NOVTABLE IRandomAccessStream_t3249294976 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_m4241163302(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_put_Size_m1046410836(uint64_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m447241099(uint64_t ___position0, IInputStream_t3363766785** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped0_GetOutputStreamAt_m2414712358() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_m177562344(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m606229237(uint64_t ___position0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped1_CloneStream_m3341493864() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_m2535184729(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m3266986296(bool* comReturnValue) = 0;
};
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t3078671696 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m2693391617(IBuffer_t3194396795* ___buffer0, IAsyncOperationWithProgress_2_t2973942662** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m1279380525(IAsyncOperation_1_t1311757012** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t3373323172 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m1016824541() = 0;
};
// Windows.UI.Xaml.Controls.IContentControl2
struct NOVTABLE IContentControl2_t2704607147 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IContentControl2_U24__Stripped0_get_ContentTemplateRoot_m3682979553() = 0;
};
// Windows.UI.Xaml.Controls.IFrame
struct NOVTABLE IFrame_t2020096710 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped0_get_CacheSize_m2565147520() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped1_put_CacheSize_m2617066998() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped2_get_CanGoBack_m801885950() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped3_get_CanGoForward_m1431745519() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped4_get_CurrentSourcePageType_m1633833760() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped5_get_SourcePageType_m1113324316() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped6_put_SourcePageType_m3496866344() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped7_get_BackStackDepth_m251124694() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped8_add_Navigated_m74886075() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped9_remove_Navigated_m1280168221() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped10_add_Navigating_m572115555() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped11_remove_Navigating_m2283719157() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped12_add_NavigationFailed_m2371958476() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped13_remove_NavigationFailed_m3018206022() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped14_add_NavigationStopped_m939149122() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped15_remove_NavigationStopped_m1953846456() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped16_GoBack_m3089030854() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped17_GoForward_m4024896283() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_Navigate_m3791042464(Type_t * ___sourcePageType0, Il2CppIInspectable* ___parameter1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped18_GetNavigationState_m1329389146() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped19_SetNavigationState_m1289144901() = 0;
};
// Windows.UI.Xaml.Controls.IFrameStatics
struct NOVTABLE IFrameStatics_t3212326863 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameStatics_U24__Stripped0_get_CacheSizeProperty_m1748979116() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameStatics_U24__Stripped1_get_CanGoBackProperty_m1759728777() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameStatics_U24__Stripped2_get_CanGoForwardProperty_m2998202746() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameStatics_U24__Stripped3_get_CurrentSourcePageTypeProperty_m3353396443() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameStatics_U24__Stripped4_get_SourcePageTypeProperty_m3891164361() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameStatics_U24__Stripped5_get_BackStackDepthProperty_m701092874() = 0;
};
// Windows.UI.Xaml.Controls.IContentControlOverrides
struct NOVTABLE IContentControlOverrides_t202799454 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IContentControlOverrides_U24__Stripped0_OnContentChanged_m3831937102() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControlOverrides_U24__Stripped1_OnContentTemplateChanged_m1050775645() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControlOverrides_U24__Stripped2_OnContentTemplateSelectorChanged_m2546544987() = 0;
};
// Windows.UI.Xaml.Controls.IContentControlStatics
struct NOVTABLE IContentControlStatics_t604565398 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IContentControlStatics_U24__Stripped0_get_ContentProperty_m1696161421() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControlStatics_U24__Stripped1_get_ContentTemplateProperty_m3087925790() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControlStatics_U24__Stripped2_get_ContentTemplateSelectorProperty_m3193835130() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControlStatics_U24__Stripped3_get_ContentTransitionsProperty_m61945610() = 0;
};
// Windows.UI.Xaml.Controls.IContentControlFactory
struct NOVTABLE IContentControlFactory_t1342310671 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IContentControlFactory_U24__Stripped0_CreateInstance_m217212806() = 0;
};
// Windows.UI.Xaml.Controls.IFrame3
struct NOVTABLE IFrame3_t3793518833 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrame3_U24__Stripped0_GoBack_m2071448666() = 0;
};
// Windows.UI.Xaml.Controls.IFrame4
struct NOVTABLE IFrame4_t3034003946 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrame4_U24__Stripped0_SetNavigationState_m1079796913() = 0;
};
// Windows.UI.Xaml.IDependencyObject
struct NOVTABLE IDependencyObject_t532880329 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped0_GetValue_m2597168440() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped1_SetValue_m2604347855() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped2_ClearValue_m804353047() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped3_ReadLocalValue_m900882002() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped4_GetAnimationBaseValue_m3548627733() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped5_get_Dispatcher_m4273965728() = 0;
};
// Windows.UI.Xaml.Controls.IFrameFactory
struct NOVTABLE IFrameFactory_t2980372502 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameFactory_CreateInstance_m695956466(Il2CppIInspectable* ___outer0, Il2CppIInspectable** ___inner1, IFrame_t2020096710** comReturnValue) = 0;
};
// Windows.UI.Xaml.Controls.IFrame2
struct NOVTABLE IFrame2_t2227434892 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrame2_U24__Stripped0_get_BackStack_m2280657374() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame2_U24__Stripped1_get_ForwardStack_m2696222157() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame2_U24__Stripped2_Navigate_m2683115625() = 0;
};
// Windows.UI.Xaml.Controls.IFrameStatics2
struct NOVTABLE IFrameStatics2_t2142472509 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameStatics2_U24__Stripped0_get_BackStackProperty_m2158625432() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameStatics2_U24__Stripped1_get_ForwardStackProperty_m843293373() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationView6
struct NOVTABLE ICoreApplicationView6_t170551679 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView6_U24__Stripped0_get_DispatcherQueue_m1120663818() = 0;
};
// Windows.Networking.Sockets.IStreamSocketListener2
struct NOVTABLE IStreamSocketListener2_t44361330 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener2_U24__Stripped0_BindServiceNameAsync_m3417485961() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener2_U24__Stripped1_BindServiceNameAsync_m1338871748() = 0;
};
// Windows.Networking.Sockets.IStreamSocketListenerConnectionReceivedEventArgs
struct NOVTABLE IStreamSocketListenerConnectionReceivedEventArgs_t3514291550 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListenerConnectionReceivedEventArgs_get_Socket_m472713921(IStreamSocket_t2533243978** comReturnValue) = 0;
};
// Windows.Devices.Haptics.ISimpleHapticsControllerFeedback
struct NOVTABLE ISimpleHapticsControllerFeedback_t2109010546 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsControllerFeedback_get_Waveform_m2233562854(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsControllerFeedback_U24__Stripped0_get_Duration_m4228977966() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationView5
struct NOVTABLE ICoreApplicationView5_t170551678 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView5_U24__Stripped0_get_Properties_m689750006() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationView3
struct NOVTABLE ICoreApplicationView3_t170551684 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView3_U24__Stripped0_get_IsComponent_m2768208318() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView3_U24__Stripped1_get_TitleBar_m3671745869() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView3_U24__Stripped2_add_HostedViewClosing_m3637446215() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView3_U24__Stripped3_remove_HostedViewClosing_m2468939657() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationView2
struct NOVTABLE ICoreApplicationView2_t170551683 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView2_get_Dispatcher_m3135518420(ICoreDispatcher_t2775224237** comReturnValue) = 0;
};
// Windows.Networking.Sockets.IStreamSocketListener3
struct NOVTABLE IStreamSocketListener3_t44361331 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener3_U24__Stripped0_CancelIOAsync_m2856916215() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener3_U24__Stripped1_EnableTransferOwnership_m484225665() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener3_U24__Stripped2_EnableTransferOwnership_m3474702460() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener3_U24__Stripped3_TransferOwnership_m313375366() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener3_U24__Stripped4_TransferOwnership_m51064865() = 0;
};
// Windows.Perception.IPerceptionTimestamp
struct NOVTABLE IPerceptionTimestamp_t3816561066 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestamp_U24__Stripped0_get_TargetTime_m3790144990() = 0;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestamp_U24__Stripped1_get_PredictionAmount_m2107605754() = 0;
};
// Windows.Networking.Sockets.IStreamSocketStatics
struct NOVTABLE IStreamSocketStatics_t3531737089 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketStatics_U24__Stripped0_GetEndpointPairsAsync_m1746689185() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketStatics_U24__Stripped1_GetEndpointPairsAsync_m335345532() = 0;
};
// Windows.Media.SpeechSynthesis.ISpeechSynthesisStream
struct NOVTABLE ISpeechSynthesisStream_t3362589103 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesisStream_U24__Stripped0_get_Markers_m3341391221() = 0;
};
// Windows.Media.SpeechSynthesis.IVoiceInformation
struct NOVTABLE IVoiceInformation_t3666062611 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_get_DisplayName_m4008358812(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped0_get_Id_m1753949539() = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped1_get_Language_m600088073() = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped2_get_Description_m2634024092() = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped3_get_Gender_m1472444796() = 0;
};
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
struct NOVTABLE IInstalledVoicesStatic_t3188562746 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInstalledVoicesStatic_get_AllVoices_m2585048336(IVectorView_1_t2783581427** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IInstalledVoicesStatic_U24__Stripped0_get_DefaultVoice_m3690492978() = 0;
};
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
struct NOVTABLE IInstalledVoicesStatic2_t798858600 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInstalledVoicesStatic2_U24__Stripped0_TrySetDefaultVoiceAsync_m2794888818() = 0;
};
// Windows.Media.SpeechSynthesis.ISpeechSynthesizer2
struct NOVTABLE ISpeechSynthesizer2_t2761782189 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer2_U24__Stripped0_get_Options_m3175265536() = 0;
};
// Windows.Networking.Sockets.IStreamSocket2
struct NOVTABLE IStreamSocket2_t558813948 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocket2_U24__Stripped0_ConnectAsync_m1624836576() = 0;
};
// Windows.Networking.Sockets.IStreamSocket3
struct NOVTABLE IStreamSocket3_t558813947 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped0_CancelIOAsync_m1991689281() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped1_EnableTransferOwnership_m91685839() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped2_EnableTransferOwnership_m1396176340() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped3_TransferOwnership_m3637104314() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped4_TransferOwnership_m3899414815() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped5_TransferOwnership_m705276676() = 0;
};
// Windows.Media.Core.ITimedMetadataTrackProvider
struct NOVTABLE ITimedMetadataTrackProvider_t2052218459 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ITimedMetadataTrackProvider_U24__Stripped0_get_TimedMetadataTracks_m2748434565() = 0;
};
// Windows.Networking.Sockets.IStreamSocket
struct NOVTABLE IStreamSocket_t2533243978 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped0_get_Control_m1164996038() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped1_get_Information_m1820310762() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_get_InputStream_m3111007220(IInputStream_t3363766785** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_get_OutputStream_m26657654(IOutputStream_t3078671696** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped2_ConnectAsync_m1109493218() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_ConnectAsync_m2320980704(IHostName_t2239254460* ___remoteHostName0, Il2CppHString ___remoteServiceName1, IAsyncAction_t1489868403** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped3_ConnectAsync_m3940720835() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped4_ConnectAsync_m2167917852() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped5_UpgradeToSslAsync_m42733636() = 0;
};
// Windows.ApplicationModel.Core.ICoreImmersiveApplication3
struct NOVTABLE ICoreImmersiveApplication3_t3665268150 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreImmersiveApplication3_U24__Stripped0_CreateNewView_m2844081795() = 0;
};
// Windows.Storage.IApplicationData2
struct NOVTABLE IApplicationData2_t828219183 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationData2_U24__Stripped0_get_LocalCacheFolder_m2674790580() = 0;
};
// Windows.Storage.IApplicationData
struct NOVTABLE IApplicationData_t1229331037 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped0_get_Version_m4091590059() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped1_SetVersionAsync_m3300358551() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped2_ClearAsync_m2488474033() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped3_ClearAsync_m1275205042() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped4_get_LocalSettings_m1132077213() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped5_get_RoamingSettings_m3946788166() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped6_get_LocalFolder_m2229130450() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_get_RoamingFolder_m3000352132(IStorageFolder_t2947831922** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped7_get_TemporaryFolder_m2985990735() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped8_add_DataChanged_m2238713584() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped9_remove_DataChanged_m2659510924() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped10_SignalDataChanged_m2923852789() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped11_get_RoamingStorageQuota_m961342415() = 0;
};
// Windows.UI.Core.IVisibilityChangedEventArgs
struct NOVTABLE IVisibilityChangedEventArgs_t1030753476 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVisibilityChangedEventArgs_get_Visible_m479686932(bool* comReturnValue) = 0;
};
// Windows.UI.Core.ICoreWindowEventArgs
struct NOVTABLE ICoreWindowEventArgs_t3570838601 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindowEventArgs_U24__Stripped0_get_Handled_m1190912625() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindowEventArgs_U24__Stripped1_put_Handled_m3281161687() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationUnhandledError
struct NOVTABLE ICoreApplicationUnhandledError_t1848132095 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationUnhandledError_U24__Stripped0_add_UnhandledErrorDetected_m202482428() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationUnhandledError_U24__Stripped1_remove_UnhandledErrorDetected_m84180394() = 0;
};
// Windows.Storage.IApplicationDataStatics2
struct NOVTABLE IApplicationDataStatics2_t1332623130 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationDataStatics2_U24__Stripped0_GetForUserAsync_m1880834467() = 0;
};
// Windows.Media.SpeechSynthesis.ISpeechSynthesizer
struct NOVTABLE ISpeechSynthesizer_t2139018459 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer_SynthesizeTextToStreamAsync_m2860570226(Il2CppHString ___text0, IAsyncOperation_1_t3027684956** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer_SynthesizeSsmlToStreamAsync_m1513029658(Il2CppHString ___Ssml0, IAsyncOperation_1_t3027684956** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer_put_Voice_m2779204324(IVoiceInformation_t3666062611* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer_U24__Stripped0_get_Voice_m1797770230() = 0;
};
// Windows.Storage.IApplicationDataStatics
struct NOVTABLE IApplicationDataStatics_t1968290068 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationDataStatics_get_Current_m2244378040(IApplicationData_t1229331037** comReturnValue) = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationView
struct NOVTABLE ICoreApplicationView_t1896519889 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView_get_CoreWindow_m54724335(ICoreWindow_t3668417618** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView_U24__Stripped0_add_Activated_m1692734560() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView_U24__Stripped1_remove_Activated_m2758029590() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView_U24__Stripped2_get_IsMain_m3368520101() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView_U24__Stripped3_get_IsHosted_m2046359162() = 0;
};
// Windows.Storage.IApplicationData3
struct NOVTABLE IApplicationData3_t828219182 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationData3_U24__Stripped0_GetPublisherCacheFolder_m773960973() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData3_U24__Stripped1_ClearPublisherCacheFolderAsync_m4176170017() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData3_U24__Stripped2_get_SharedLocalFolder_m4151281910() = 0;
};
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
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
#ifndef ATTRIBUTE_T542643598_H
#define ATTRIBUTE_T542643598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t542643598  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T542643598_H
#ifndef CONTENTPROPERTYATTRIBUTE_T3336187252_H
#define CONTENTPROPERTYATTRIBUTE_T3336187252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Markup.ContentPropertyAttribute
struct  ContentPropertyAttribute_t3336187252  : public Attribute_t542643598
{
public:
	// System.String Windows.UI.Xaml.Markup.ContentPropertyAttribute::Name
	String_t* ___Name_0;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ContentPropertyAttribute_t3336187252, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTPROPERTYATTRIBUTE_T3336187252_H
#ifndef DEPENDENCYOBJECT_T28106760_H
#define DEPENDENCYOBJECT_T28106760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.DependencyObject
struct  DependencyObject_t28106760  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Xaml.IDependencyObject
	IDependencyObject_t532880329* ____idependencyObject_t532880329;
	// Cached pointer to Windows.UI.Xaml.IDependencyObject2
	IDependencyObject2_t1927716995* ____idependencyObject2_t1927716995;

public:
	inline IDependencyObject_t532880329* get_____idependencyObject_t532880329()
	{
		IDependencyObject_t532880329* returnValue = ____idependencyObject_t532880329;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDependencyObject_t532880329::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDependencyObject_t532880329>((&____idependencyObject_t532880329), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idependencyObject_t532880329;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IDependencyObject2_t1927716995* get_____idependencyObject2_t1927716995()
	{
		IDependencyObject2_t1927716995* returnValue = ____idependencyObject2_t1927716995;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDependencyObject2_t1927716995::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDependencyObject2_t1927716995>((&____idependencyObject2_t1927716995), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idependencyObject2_t1927716995;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}
};

struct DependencyObject_t28106760_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.IDependencyObjectFactory
	IDependencyObjectFactory_t188179991* ____idependencyObjectFactory_t188179991;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.DependencyObject"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IDependencyObjectFactory_t188179991* get_____idependencyObjectFactory_t188179991()
	{
		IDependencyObjectFactory_t188179991* returnValue = ____idependencyObjectFactory_t188179991;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDependencyObjectFactory_t188179991::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDependencyObjectFactory_t188179991>((&____idependencyObjectFactory_t188179991), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idependencyObjectFactory_t188179991;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPENDENCYOBJECT_T28106760_H
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
#ifndef PROPERTYCHANGEDEVENTARGS_T4146756264_H
#define PROPERTYCHANGEDEVENTARGS_T4146756264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Data.PropertyChangedEventArgs
struct  PropertyChangedEventArgs_t4146756264  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Xaml.Data.IPropertyChangedEventArgs
	IPropertyChangedEventArgs_t3538282873* ____ipropertyChangedEventArgs_t3538282873;

public:
	inline IPropertyChangedEventArgs_t3538282873* get_____ipropertyChangedEventArgs_t3538282873()
	{
		IPropertyChangedEventArgs_t3538282873* returnValue = ____ipropertyChangedEventArgs_t3538282873;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IPropertyChangedEventArgs_t3538282873::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPropertyChangedEventArgs_t3538282873>((&____ipropertyChangedEventArgs_t3538282873), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ipropertyChangedEventArgs_t3538282873;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}
};

struct PropertyChangedEventArgs_t4146756264_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory
	IPropertyChangedEventArgsFactory_t3741841467* ____ipropertyChangedEventArgsFactory_t3741841467;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.Data.PropertyChangedEventArgs"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IPropertyChangedEventArgsFactory_t3741841467* get_____ipropertyChangedEventArgsFactory_t3741841467()
	{
		IPropertyChangedEventArgsFactory_t3741841467* returnValue = ____ipropertyChangedEventArgsFactory_t3741841467;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IPropertyChangedEventArgsFactory_t3741841467::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPropertyChangedEventArgsFactory_t3741841467>((&____ipropertyChangedEventArgsFactory_t3741841467), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ipropertyChangedEventArgsFactory_t3741841467;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGEDEVENTARGS_T4146756264_H
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
#ifndef EVENTREGISTRATIONTOKEN_T813992388_H
#define EVENTREGISTRATIONTOKEN_T813992388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct  EventRegistrationToken_t813992388 
{
public:
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t813992388, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTREGISTRATIONTOKEN_T813992388_H
#ifndef VOICEINFORMATION_T570935028_H
#define VOICEINFORMATION_T570935028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.SpeechSynthesis.VoiceInformation
struct  VoiceInformation_t570935028  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.SpeechSynthesis.IVoiceInformation
	IVoiceInformation_t3666062611* ____ivoiceInformation_t3666062611;

public:
	inline IVoiceInformation_t3666062611* get_____ivoiceInformation_t3666062611()
	{
		IVoiceInformation_t3666062611* returnValue = ____ivoiceInformation_t3666062611;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IVoiceInformation_t3666062611::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IVoiceInformation_t3666062611>((&____ivoiceInformation_t3666062611), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ivoiceInformation_t3666062611;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOICEINFORMATION_T570935028_H
#ifndef SIMPLEHAPTICSCONTROLLERFEEDBACK_T1181953697_H
#define SIMPLEHAPTICSCONTROLLERFEEDBACK_T1181953697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.Haptics.SimpleHapticsControllerFeedback
struct  SimpleHapticsControllerFeedback_t1181953697  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Devices.Haptics.ISimpleHapticsControllerFeedback
	ISimpleHapticsControllerFeedback_t2109010546* ____isimpleHapticsControllerFeedback_t2109010546;

public:
	inline ISimpleHapticsControllerFeedback_t2109010546* get_____isimpleHapticsControllerFeedback_t2109010546()
	{
		ISimpleHapticsControllerFeedback_t2109010546* returnValue = ____isimpleHapticsControllerFeedback_t2109010546;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISimpleHapticsControllerFeedback_t2109010546::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISimpleHapticsControllerFeedback_t2109010546>((&____isimpleHapticsControllerFeedback_t2109010546), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____isimpleHapticsControllerFeedback_t2109010546;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEHAPTICSCONTROLLERFEEDBACK_T1181953697_H
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
#ifndef SPATIALINTERACTIONMANAGER_T3897002175_H
#define SPATIALINTERACTIONMANAGER_T3897002175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Input.Spatial.SpatialInteractionManager
struct  SpatialInteractionManager_t3897002175  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionManager
	ISpatialInteractionManager_t1055370764* ____ispatialInteractionManager_t1055370764;

public:
	inline ISpatialInteractionManager_t1055370764* get_____ispatialInteractionManager_t1055370764()
	{
		ISpatialInteractionManager_t1055370764* returnValue = ____ispatialInteractionManager_t1055370764;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionManager_t1055370764::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionManager_t1055370764>((&____ispatialInteractionManager_t1055370764), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionManager_t1055370764;
			}
		}
		return returnValue;
	}
};

struct SpatialInteractionManager_t3897002175_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
	ISpatialInteractionManagerStatics_t2133328341* ____ispatialInteractionManagerStatics_t2133328341;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Input.Spatial.SpatialInteractionManager"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionManagerStatics_t2133328341* get_____ispatialInteractionManagerStatics_t2133328341()
	{
		ISpatialInteractionManagerStatics_t2133328341* returnValue = ____ispatialInteractionManagerStatics_t2133328341;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISpatialInteractionManagerStatics_t2133328341::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionManagerStatics_t2133328341>((&____ispatialInteractionManagerStatics_t2133328341), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionManagerStatics_t2133328341;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALINTERACTIONMANAGER_T3897002175_H
#ifndef STREAMSOCKETLISTENERCONNECTIONRECEIVEDEVENTARGS_T3669680245_H
#define STREAMSOCKETLISTENERCONNECTIONRECEIVEDEVENTARGS_T3669680245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.Sockets.StreamSocketListenerConnectionReceivedEventArgs
struct  StreamSocketListenerConnectionReceivedEventArgs_t3669680245  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketListenerConnectionReceivedEventArgs
	IStreamSocketListenerConnectionReceivedEventArgs_t3514291550* ____istreamSocketListenerConnectionReceivedEventArgs_t3514291550;

public:
	inline IStreamSocketListenerConnectionReceivedEventArgs_t3514291550* get_____istreamSocketListenerConnectionReceivedEventArgs_t3514291550()
	{
		IStreamSocketListenerConnectionReceivedEventArgs_t3514291550* returnValue = ____istreamSocketListenerConnectionReceivedEventArgs_t3514291550;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocketListenerConnectionReceivedEventArgs_t3514291550::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocketListenerConnectionReceivedEventArgs_t3514291550>((&____istreamSocketListenerConnectionReceivedEventArgs_t3514291550), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketListenerConnectionReceivedEventArgs_t3514291550;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMSOCKETLISTENERCONNECTIONRECEIVEDEVENTARGS_T3669680245_H
#ifndef SPATIALINTERACTIONSOURCESTATE_T2442807032_H
#define SPATIALINTERACTIONSOURCESTATE_T2442807032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct  SpatialInteractionSourceState_t2442807032  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSourceState
	ISpatialInteractionSourceState_t1888017753* ____ispatialInteractionSourceState_t1888017753;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSourceState2
	ISpatialInteractionSourceState2_t3316743315* ____ispatialInteractionSourceState2_t3316743315;

public:
	inline ISpatialInteractionSourceState_t1888017753* get_____ispatialInteractionSourceState_t1888017753()
	{
		ISpatialInteractionSourceState_t1888017753* returnValue = ____ispatialInteractionSourceState_t1888017753;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSourceState_t1888017753::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSourceState_t1888017753>((&____ispatialInteractionSourceState_t1888017753), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSourceState_t1888017753;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionSourceState2_t3316743315* get_____ispatialInteractionSourceState2_t3316743315()
	{
		ISpatialInteractionSourceState2_t3316743315* returnValue = ____ispatialInteractionSourceState2_t3316743315;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSourceState2_t3316743315::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSourceState2_t3316743315>((&____ispatialInteractionSourceState2_t3316743315), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSourceState2_t3316743315;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALINTERACTIONSOURCESTATE_T2442807032_H
#ifndef SPATIALINTERACTIONCONTROLLER_T4092306930_H
#define SPATIALINTERACTIONCONTROLLER_T4092306930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Input.Spatial.SpatialInteractionController
struct  SpatialInteractionController_t4092306930  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionController
	ISpatialInteractionController_t4282417239* ____ispatialInteractionController_t4282417239;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionController2
	ISpatialInteractionController2_t3840354057* ____ispatialInteractionController2_t3840354057;

public:
	inline ISpatialInteractionController_t4282417239* get_____ispatialInteractionController_t4282417239()
	{
		ISpatialInteractionController_t4282417239* returnValue = ____ispatialInteractionController_t4282417239;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionController_t4282417239::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionController_t4282417239>((&____ispatialInteractionController_t4282417239), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionController_t4282417239;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionController2_t3840354057* get_____ispatialInteractionController2_t3840354057()
	{
		ISpatialInteractionController2_t3840354057* returnValue = ____ispatialInteractionController2_t3840354057;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionController2_t3840354057::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionController2_t3840354057>((&____ispatialInteractionController2_t3840354057), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionController2_t3840354057;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALINTERACTIONCONTROLLER_T4092306930_H
#ifndef APPLICATIONDATA_T649254064_H
#define APPLICATIONDATA_T649254064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.ApplicationData
struct  ApplicationData_t649254064  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.IApplicationData
	IApplicationData_t1229331037* ____iapplicationData_t1229331037;
	// Cached pointer to Windows.Storage.IApplicationData2
	IApplicationData2_t828219183* ____iapplicationData2_t828219183;
	// Cached pointer to Windows.Storage.IApplicationData3
	IApplicationData3_t828219182* ____iapplicationData3_t828219182;

public:
	inline IApplicationData_t1229331037* get_____iapplicationData_t1229331037()
	{
		IApplicationData_t1229331037* returnValue = ____iapplicationData_t1229331037;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationData_t1229331037::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationData_t1229331037>((&____iapplicationData_t1229331037), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationData_t1229331037;
			}
		}
		return returnValue;
	}

	inline IApplicationData2_t828219183* get_____iapplicationData2_t828219183()
	{
		IApplicationData2_t828219183* returnValue = ____iapplicationData2_t828219183;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationData2_t828219183::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationData2_t828219183>((&____iapplicationData2_t828219183), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationData2_t828219183;
			}
		}
		return returnValue;
	}

	inline IApplicationData3_t828219182* get_____iapplicationData3_t828219182()
	{
		IApplicationData3_t828219182* returnValue = ____iapplicationData3_t828219182;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationData3_t828219182::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationData3_t828219182>((&____iapplicationData3_t828219182), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationData3_t828219182;
			}
		}
		return returnValue;
	}
};

struct ApplicationData_t649254064_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IApplicationDataStatics
	IApplicationDataStatics_t1968290068* ____iapplicationDataStatics_t1968290068;
	// Cached pointer to Windows.Storage.IApplicationDataStatics2
	IApplicationDataStatics2_t1332623130* ____iapplicationDataStatics2_t1332623130;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.ApplicationData"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IApplicationDataStatics_t1968290068* get_____iapplicationDataStatics_t1968290068()
	{
		IApplicationDataStatics_t1968290068* returnValue = ____iapplicationDataStatics_t1968290068;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationDataStatics_t1968290068::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationDataStatics_t1968290068>((&____iapplicationDataStatics_t1968290068), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationDataStatics_t1968290068;
			}
		}
		return returnValue;
	}

	inline IApplicationDataStatics2_t1332623130* get_____iapplicationDataStatics2_t1332623130()
	{
		IApplicationDataStatics2_t1332623130* returnValue = ____iapplicationDataStatics2_t1332623130;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationDataStatics2_t1332623130::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationDataStatics2_t1332623130>((&____iapplicationDataStatics2_t1332623130), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationDataStatics2_t1332623130;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONDATA_T649254064_H
#ifndef PERCEPTIONTIMESTAMP_T1626706861_H
#define PERCEPTIONTIMESTAMP_T1626706861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Perception.PerceptionTimestamp
struct  PerceptionTimestamp_t1626706861  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Perception.IPerceptionTimestamp
	IPerceptionTimestamp_t3816561066* ____iperceptionTimestamp_t3816561066;

public:
	inline IPerceptionTimestamp_t3816561066* get_____iperceptionTimestamp_t3816561066()
	{
		IPerceptionTimestamp_t3816561066* returnValue = ____iperceptionTimestamp_t3816561066;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IPerceptionTimestamp_t3816561066::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPerceptionTimestamp_t3816561066>((&____iperceptionTimestamp_t3816561066), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iperceptionTimestamp_t3816561066;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERCEPTIONTIMESTAMP_T1626706861_H
#ifndef STREAMSOCKET_T796131729_H
#define STREAMSOCKET_T796131729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.Sockets.StreamSocket
struct  StreamSocket_t796131729  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Networking.Sockets.IStreamSocket
	IStreamSocket_t2533243978* ____istreamSocket_t2533243978;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocket2
	IStreamSocket2_t558813948* ____istreamSocket2_t558813948;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocket3
	IStreamSocket3_t558813947* ____istreamSocket3_t558813947;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t3373323172* ____iclosable_t3373323172;

public:
	inline IStreamSocket_t2533243978* get_____istreamSocket_t2533243978()
	{
		IStreamSocket_t2533243978* returnValue = ____istreamSocket_t2533243978;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocket_t2533243978::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocket_t2533243978>((&____istreamSocket_t2533243978), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocket_t2533243978;
			}
		}
		return returnValue;
	}

	inline IStreamSocket2_t558813948* get_____istreamSocket2_t558813948()
	{
		IStreamSocket2_t558813948* returnValue = ____istreamSocket2_t558813948;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocket2_t558813948::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocket2_t558813948>((&____istreamSocket2_t558813948), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocket2_t558813948;
			}
		}
		return returnValue;
	}

	inline IStreamSocket3_t558813947* get_____istreamSocket3_t558813947()
	{
		IStreamSocket3_t558813947* returnValue = ____istreamSocket3_t558813947;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocket3_t558813947::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocket3_t558813947>((&____istreamSocket3_t558813947), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocket3_t558813947;
			}
		}
		return returnValue;
	}

	inline IClosable_t3373323172* get_____iclosable_t3373323172()
	{
		IClosable_t3373323172* returnValue = ____iclosable_t3373323172;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t3373323172::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t3373323172>((&____iclosable_t3373323172), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t3373323172;
			}
		}
		return returnValue;
	}
};

struct StreamSocket_t796131729_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketStatics
	IStreamSocketStatics_t3531737089* ____istreamSocketStatics_t3531737089;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.Sockets.StreamSocket"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStreamSocketStatics_t3531737089* get_____istreamSocketStatics_t3531737089()
	{
		IStreamSocketStatics_t3531737089* returnValue = ____istreamSocketStatics_t3531737089;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStreamSocketStatics_t3531737089::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocketStatics_t3531737089>((&____istreamSocketStatics_t3531737089), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketStatics_t3531737089;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMSOCKET_T796131729_H
#ifndef VISIBILITYCHANGEDEVENTARGS_T2498633571_H
#define VISIBILITYCHANGEDEVENTARGS_T2498633571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Core.VisibilityChangedEventArgs
struct  VisibilityChangedEventArgs_t2498633571  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Core.IVisibilityChangedEventArgs
	IVisibilityChangedEventArgs_t1030753476* ____ivisibilityChangedEventArgs_t1030753476;
	// Cached pointer to Windows.UI.Core.ICoreWindowEventArgs
	ICoreWindowEventArgs_t3570838601* ____icoreWindowEventArgs_t3570838601;

public:
	inline IVisibilityChangedEventArgs_t1030753476* get_____ivisibilityChangedEventArgs_t1030753476()
	{
		IVisibilityChangedEventArgs_t1030753476* returnValue = ____ivisibilityChangedEventArgs_t1030753476;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IVisibilityChangedEventArgs_t1030753476::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IVisibilityChangedEventArgs_t1030753476>((&____ivisibilityChangedEventArgs_t1030753476), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ivisibilityChangedEventArgs_t1030753476;
			}
		}
		return returnValue;
	}

	inline ICoreWindowEventArgs_t3570838601* get_____icoreWindowEventArgs_t3570838601()
	{
		ICoreWindowEventArgs_t3570838601* returnValue = ____icoreWindowEventArgs_t3570838601;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreWindowEventArgs_t3570838601::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindowEventArgs_t3570838601>((&____icoreWindowEventArgs_t3570838601), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindowEventArgs_t3570838601;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VISIBILITYCHANGEDEVENTARGS_T2498633571_H
#ifndef SPEECHSYNTHESIZER_T1257494700_H
#define SPEECHSYNTHESIZER_T1257494700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.SpeechSynthesis.SpeechSynthesizer
struct  SpeechSynthesizer_t1257494700  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.SpeechSynthesis.ISpeechSynthesizer
	ISpeechSynthesizer_t2139018459* ____ispeechSynthesizer_t2139018459;
	// Cached pointer to Windows.Media.SpeechSynthesis.ISpeechSynthesizer2
	ISpeechSynthesizer2_t2761782189* ____ispeechSynthesizer2_t2761782189;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t3373323172* ____iclosable_t3373323172;

public:
	inline ISpeechSynthesizer_t2139018459* get_____ispeechSynthesizer_t2139018459()
	{
		ISpeechSynthesizer_t2139018459* returnValue = ____ispeechSynthesizer_t2139018459;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpeechSynthesizer_t2139018459::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpeechSynthesizer_t2139018459>((&____ispeechSynthesizer_t2139018459), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispeechSynthesizer_t2139018459;
			}
		}
		return returnValue;
	}

	inline ISpeechSynthesizer2_t2761782189* get_____ispeechSynthesizer2_t2761782189()
	{
		ISpeechSynthesizer2_t2761782189* returnValue = ____ispeechSynthesizer2_t2761782189;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpeechSynthesizer2_t2761782189::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpeechSynthesizer2_t2761782189>((&____ispeechSynthesizer2_t2761782189), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispeechSynthesizer2_t2761782189;
			}
		}
		return returnValue;
	}

	inline IClosable_t3373323172* get_____iclosable_t3373323172()
	{
		IClosable_t3373323172* returnValue = ____iclosable_t3373323172;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t3373323172::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t3373323172>((&____iclosable_t3373323172), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t3373323172;
			}
		}
		return returnValue;
	}
};

struct SpeechSynthesizer_t1257494700_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
	IInstalledVoicesStatic_t3188562746* ____iinstalledVoicesStatic_t3188562746;
	// Cached pointer to Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
	IInstalledVoicesStatic2_t798858600* ____iinstalledVoicesStatic2_t798858600;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.SpeechSynthesis.SpeechSynthesizer"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IInstalledVoicesStatic_t3188562746* get_____iinstalledVoicesStatic_t3188562746()
	{
		IInstalledVoicesStatic_t3188562746* returnValue = ____iinstalledVoicesStatic_t3188562746;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IInstalledVoicesStatic_t3188562746::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInstalledVoicesStatic_t3188562746>((&____iinstalledVoicesStatic_t3188562746), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinstalledVoicesStatic_t3188562746;
			}
		}
		return returnValue;
	}

	inline IInstalledVoicesStatic2_t798858600* get_____iinstalledVoicesStatic2_t798858600()
	{
		IInstalledVoicesStatic2_t798858600* returnValue = ____iinstalledVoicesStatic2_t798858600;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IInstalledVoicesStatic2_t798858600::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInstalledVoicesStatic2_t798858600>((&____iinstalledVoicesStatic2_t798858600), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinstalledVoicesStatic2_t798858600;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHSYNTHESIZER_T1257494700_H
#ifndef SPATIALINTERACTIONSOURCE_T811401711_H
#define SPATIALINTERACTIONSOURCE_T811401711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Input.Spatial.SpatialInteractionSource
struct  SpatialInteractionSource_t811401711  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSource
	ISpatialInteractionSource_t3243911342* ____ispatialInteractionSource_t3243911342;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSource2
	ISpatialInteractionSource2_t2995569052* ____ispatialInteractionSource2_t2995569052;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSource3
	ISpatialInteractionSource3_t2995569053* ____ispatialInteractionSource3_t2995569053;

public:
	inline ISpatialInteractionSource_t3243911342* get_____ispatialInteractionSource_t3243911342()
	{
		ISpatialInteractionSource_t3243911342* returnValue = ____ispatialInteractionSource_t3243911342;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSource_t3243911342::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSource_t3243911342>((&____ispatialInteractionSource_t3243911342), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSource_t3243911342;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionSource2_t2995569052* get_____ispatialInteractionSource2_t2995569052()
	{
		ISpatialInteractionSource2_t2995569052* returnValue = ____ispatialInteractionSource2_t2995569052;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSource2_t2995569052::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSource2_t2995569052>((&____ispatialInteractionSource2_t2995569052), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSource2_t2995569052;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionSource3_t2995569053* get_____ispatialInteractionSource3_t2995569053()
	{
		ISpatialInteractionSource3_t2995569053* returnValue = ____ispatialInteractionSource3_t2995569053;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSource3_t2995569053::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSource3_t2995569053>((&____ispatialInteractionSource3_t2995569053), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSource3_t2995569053;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALINTERACTIONSOURCE_T811401711_H
#ifndef TYPEKIND_T2846743588_H
#define TYPEKIND_T2846743588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.TypeKind
struct  TypeKind_t2846743588 
{
public:
	// System.Int32 Windows.UI.Xaml.Interop.TypeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeKind_t2846743588, ___value___2)); }
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
#endif // TYPEKIND_T2846743588_H
#ifndef DATETIMEOFFSET_T1362988906_H
#define DATETIMEOFFSET_T1362988906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t1362988906 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t693205669  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1362988906, ___m_dateTime_2)); }
	inline DateTime_t693205669  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t693205669 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t693205669  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1362988906, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t1362988906_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t1362988906  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t1362988906  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1362988906_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t1362988906  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t1362988906 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t1362988906  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1362988906_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t1362988906  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t1362988906 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t1362988906  value)
	{
		___MaxValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T1362988906_H
#ifndef COREDISPATCHERPRIORITY_T3529361068_H
#define COREDISPATCHERPRIORITY_T3529361068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Core.CoreDispatcherPriority
struct  CoreDispatcherPriority_t3529361068 
{
public:
	// System.Int32 Windows.UI.Core.CoreDispatcherPriority::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CoreDispatcherPriority_t3529361068, ___value___2)); }
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
#endif // COREDISPATCHERPRIORITY_T3529361068_H
// Windows.UI.Core.ICoreWindow
struct NOVTABLE ICoreWindow_t3668417618 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped0_get_AutomationHostProvider_m4091000548() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped1_get_Bounds_m2377593052() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped2_get_CustomProperties_m1945404852() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped3_get_Dispatcher_m3975725342() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped4_get_FlowDirection_m2400726003() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped5_put_FlowDirection_m498009021() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped6_get_IsInputEnabled_m1722383411() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped7_put_IsInputEnabled_m3382921525() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped8_get_PointerCursor_m1268742709() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped9_put_PointerCursor_m1074545111() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped10_get_PointerPosition_m3269616303() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped11_get_Visible_m2041607844() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped12_Activate_m3206235131() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_Close_m3905653105() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped13_GetAsyncKeyState_m3396839899() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped14_GetKeyState_m4279425874() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped15_ReleasePointerCapture_m392387723() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped16_SetPointerCapture_m44035443() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped17_add_Activated_m1757180884() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped18_remove_Activated_m3392824316() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped19_add_AutomationProviderRequested_m1899681157() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped20_remove_AutomationProviderRequested_m898024272() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped21_add_CharacterReceived_m1005227690() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped22_remove_CharacterReceived_m2510634332() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped23_add_Closed_m2582947006() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped24_remove_Closed_m3219305276() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped25_add_InputEnabled_m597078351() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped26_remove_InputEnabled_m766716755() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped27_add_KeyDown_m3629210683() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped28_remove_KeyDown_m423514819() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped29_add_KeyUp_m88525820() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped30_remove_KeyUp_m1305926417() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped31_add_PointerCaptureLost_m3438787132() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped32_remove_PointerCaptureLost_m3203786144() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped33_add_PointerEntered_m2733908601() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped34_remove_PointerEntered_m2022751585() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped35_add_PointerExited_m2406022015() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped36_remove_PointerExited_m4268161791() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped37_add_PointerMoved_m3607716385() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped38_remove_PointerMoved_m3098171617() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped39_add_PointerPressed_m4201193042() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped40_remove_PointerPressed_m362698849() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped41_add_PointerReleased_m2881596306() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped42_remove_PointerReleased_m1367267956() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped43_add_TouchHitTesting_m3889099166() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped44_remove_TouchHitTesting_m1493024332() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped45_add_PointerWheelChanged_m2940400912() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped46_remove_PointerWheelChanged_m738995590() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped47_add_SizeChanged_m3578865755() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped48_remove_SizeChanged_m1648990747() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_add_VisibilityChanged_m962686163(ITypedEventHandler_2_t3780428703_ComCallableWrapper* ___handler0, EventRegistrationToken_t813992388 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_remove_VisibilityChanged_m1488972851(EventRegistrationToken_t813992388  ___cookie0) = 0;
};
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
#ifndef INPUTSTREAMOPTIONS_T337364756_H
#define INPUTSTREAMOPTIONS_T337364756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.InputStreamOptions
struct  InputStreamOptions_t337364756 
{
public:
	// System.UInt32 Windows.Storage.Streams.InputStreamOptions::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputStreamOptions_t337364756, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTSTREAMOPTIONS_T337364756_H
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
// Windows.Networking.Sockets.IStreamSocketListener
struct NOVTABLE IStreamSocketListener_t784085316 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener_U24__Stripped0_get_Control_m3799379838() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener_U24__Stripped1_get_Information_m2089148138() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener_BindServiceNameAsync_m2413466177(Il2CppHString ___localServiceName0, IAsyncAction_t1489868403** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener_U24__Stripped2_BindEndpointAsync_m1225140136() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener_add_ConnectionReceived_m1947617683(ITypedEventHandler_2_t3704908327_ComCallableWrapper* ___eventHandler0, EventRegistrationToken_t813992388 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener_remove_ConnectionReceived_m1196322461(EventRegistrationToken_t813992388  ___eventCookie0) = 0;
};
#ifndef COREWINDOW_T749782899_H
#define COREWINDOW_T749782899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Core.CoreWindow
struct  CoreWindow_t749782899  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Core.ICoreWindow
	ICoreWindow_t3668417618* ____icoreWindow_t3668417618;
	// Cached pointer to Windows.UI.Core.ICoreWindow2
	ICoreWindow2_t2462005452* ____icoreWindow2_t2462005452;
	// Cached pointer to Windows.UI.Core.ICorePointerRedirector
	ICorePointerRedirector_t3370186726* ____icorePointerRedirector_t3370186726;
	// Cached pointer to Windows.UI.Core.ICoreWindow3
	ICoreWindow3_t4028089393* ____icoreWindow3_t4028089393;
	// Cached pointer to Windows.UI.Core.ICoreWindow4
	ICoreWindow4_t1299206038* ____icoreWindow4_t1299206038;
	// Cached pointer to Windows.UI.Core.ICoreWindow5
	ICoreWindow5_t2865289979* ____icoreWindow5_t2865289979;

public:
	inline ICoreWindow_t3668417618* get_____icoreWindow_t3668417618()
	{
		ICoreWindow_t3668417618* returnValue = ____icoreWindow_t3668417618;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreWindow_t3668417618::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindow_t3668417618>((&____icoreWindow_t3668417618), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindow_t3668417618;
			}
		}
		return returnValue;
	}

	inline ICoreWindow2_t2462005452* get_____icoreWindow2_t2462005452()
	{
		ICoreWindow2_t2462005452* returnValue = ____icoreWindow2_t2462005452;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreWindow2_t2462005452::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindow2_t2462005452>((&____icoreWindow2_t2462005452), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindow2_t2462005452;
			}
		}
		return returnValue;
	}

	inline ICorePointerRedirector_t3370186726* get_____icorePointerRedirector_t3370186726()
	{
		ICorePointerRedirector_t3370186726* returnValue = ____icorePointerRedirector_t3370186726;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICorePointerRedirector_t3370186726::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICorePointerRedirector_t3370186726>((&____icorePointerRedirector_t3370186726), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icorePointerRedirector_t3370186726;
			}
		}
		return returnValue;
	}

	inline ICoreWindow3_t4028089393* get_____icoreWindow3_t4028089393()
	{
		ICoreWindow3_t4028089393* returnValue = ____icoreWindow3_t4028089393;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreWindow3_t4028089393::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindow3_t4028089393>((&____icoreWindow3_t4028089393), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindow3_t4028089393;
			}
		}
		return returnValue;
	}

	inline ICoreWindow4_t1299206038* get_____icoreWindow4_t1299206038()
	{
		ICoreWindow4_t1299206038* returnValue = ____icoreWindow4_t1299206038;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreWindow4_t1299206038::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindow4_t1299206038>((&____icoreWindow4_t1299206038), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindow4_t1299206038;
			}
		}
		return returnValue;
	}

	inline ICoreWindow5_t2865289979* get_____icoreWindow5_t2865289979()
	{
		ICoreWindow5_t2865289979* returnValue = ____icoreWindow5_t2865289979;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreWindow5_t2865289979::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindow5_t2865289979>((&____icoreWindow5_t2865289979), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindow5_t2865289979;
			}
		}
		return returnValue;
	}
};

struct CoreWindow_t749782899_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Core.ICoreWindowStatic
	ICoreWindowStatic_t2411591036* ____icoreWindowStatic_t2411591036;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Core.CoreWindow"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ICoreWindowStatic_t2411591036* get_____icoreWindowStatic_t2411591036()
	{
		ICoreWindowStatic_t2411591036* returnValue = ____icoreWindowStatic_t2411591036;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ICoreWindowStatic_t2411591036::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindowStatic_t2411591036>((&____icoreWindowStatic_t2411591036), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindowStatic_t2411591036;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COREWINDOW_T749782899_H
// Windows.UI.Core.ICoreDispatcher
struct NOVTABLE ICoreDispatcher_t2775224237 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcher_U24__Stripped0_get_HasThreadAccess_m599977895() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcher_U24__Stripped1_ProcessEvents_m3735235631() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcher_RunAsync_m799324976(int32_t ___priority0, IDispatchedHandler_t3993910849_ComCallableWrapper* ___agileCallback1, IAsyncAction_t1489868403** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcher_U24__Stripped2_RunIdleAsync_m458216115() = 0;
};
// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t3363766785 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m1293797104(IBuffer_t3194396795* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t2905586008** comReturnValue) = 0;
};
#ifndef STREAMSOCKETLISTENER_T2636731061_H
#define STREAMSOCKETLISTENER_T2636731061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.Sockets.StreamSocketListener
struct  StreamSocketListener_t2636731061  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketListener
	IStreamSocketListener_t784085316* ____istreamSocketListener_t784085316;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketListener2
	IStreamSocketListener2_t44361330* ____istreamSocketListener2_t44361330;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketListener3
	IStreamSocketListener3_t44361331* ____istreamSocketListener3_t44361331;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t3373323172* ____iclosable_t3373323172;

public:
	inline IStreamSocketListener_t784085316* get_____istreamSocketListener_t784085316()
	{
		IStreamSocketListener_t784085316* returnValue = ____istreamSocketListener_t784085316;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocketListener_t784085316::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocketListener_t784085316>((&____istreamSocketListener_t784085316), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketListener_t784085316;
			}
		}
		return returnValue;
	}

	inline IStreamSocketListener2_t44361330* get_____istreamSocketListener2_t44361330()
	{
		IStreamSocketListener2_t44361330* returnValue = ____istreamSocketListener2_t44361330;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocketListener2_t44361330::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocketListener2_t44361330>((&____istreamSocketListener2_t44361330), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketListener2_t44361330;
			}
		}
		return returnValue;
	}

	inline IStreamSocketListener3_t44361331* get_____istreamSocketListener3_t44361331()
	{
		IStreamSocketListener3_t44361331* returnValue = ____istreamSocketListener3_t44361331;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocketListener3_t44361331::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocketListener3_t44361331>((&____istreamSocketListener3_t44361331), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketListener3_t44361331;
			}
		}
		return returnValue;
	}

	inline IClosable_t3373323172* get_____iclosable_t3373323172()
	{
		IClosable_t3373323172* returnValue = ____iclosable_t3373323172;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t3373323172::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t3373323172>((&____iclosable_t3373323172), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t3373323172;
			}
		}
		return returnValue;
	}
};

struct StreamSocketListener_t2636731061_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.Sockets.StreamSocketListener"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMSOCKETLISTENER_T2636731061_H
// Windows.Devices.Haptics.ISimpleHapticsController
struct NOVTABLE ISimpleHapticsController_t718010169 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped0_get_Id_m1040421454() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_get_SupportedFeedback_m2852732131(IVectorView_1_t3394600096** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped1_get_IsIntensitySupported_m2792517571() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped2_get_IsPlayCountSupported_m769439576() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped3_get_IsPlayDurationSupported_m3947323970() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped4_get_IsReplayPauseIntervalSupported_m1962377455() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_StopFeedback_m680175035() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped5_SendHapticFeedback_m1044759891() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_SendHapticFeedback_m2825655031(ISimpleHapticsControllerFeedback_t2109010546* ___feedback0, double ___intensity1) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_SendHapticFeedbackForDuration_m11687504(ISimpleHapticsControllerFeedback_t2109010546* ___feedback0, double ___intensity1, TimeSpan_t3430258949  ___playDuration2) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped6_SendHapticFeedbackForPlayCount_m3001140686() = 0;
};
#ifndef TYPENAME_T3283527367_H
#define TYPENAME_T3283527367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.TypeName
struct  TypeName_t3283527367 
{
public:
	// System.String Windows.UI.Xaml.Interop.TypeName::Name
	String_t* ___Name_0;
	// Windows.UI.Xaml.Interop.TypeKind Windows.UI.Xaml.Interop.TypeName::Kind
	int32_t ___Kind_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TypeName_t3283527367, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Kind_1() { return static_cast<int32_t>(offsetof(TypeName_t3283527367, ___Kind_1)); }
	inline int32_t get_Kind_1() const { return ___Kind_1; }
	inline int32_t* get_address_of_Kind_1() { return &___Kind_1; }
	inline void set_Kind_1(int32_t value)
	{
		___Kind_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t3283527367_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Kind_1;
};
// Native definition for COM marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t3283527367_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Kind_1;
};
// Native definition for Windows Runtime marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t3283527367_marshaled_windows_runtime
{
	Il2CppHString ___Name_0;
	int32_t ___Kind_1;
};
#endif // TYPENAME_T3283527367_H
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
// Windows.Perception.IPerceptionTimestampHelperStatics
struct NOVTABLE IPerceptionTimestampHelperStatics_t2143050105 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestampHelperStatics_FromHistoricalTargetTime_m4213191197(DateTimeOffset_t1362988906  ___targetTime0, IPerceptionTimestamp_t3816561066** comReturnValue) = 0;
};
#ifndef SIMPLEHAPTICSCONTROLLER_T959381204_H
#define SIMPLEHAPTICSCONTROLLER_T959381204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.Haptics.SimpleHapticsController
struct  SimpleHapticsController_t959381204  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Devices.Haptics.ISimpleHapticsController
	ISimpleHapticsController_t718010169* ____isimpleHapticsController_t718010169;

public:
	inline ISimpleHapticsController_t718010169* get_____isimpleHapticsController_t718010169()
	{
		ISimpleHapticsController_t718010169* returnValue = ____isimpleHapticsController_t718010169;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISimpleHapticsController_t718010169::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISimpleHapticsController_t718010169>((&____isimpleHapticsController_t718010169), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____isimpleHapticsController_t718010169;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEHAPTICSCONTROLLER_T959381204_H
#ifndef SPEECHSYNTHESISSTREAM_T1246535366_H
#define SPEECHSYNTHESISSTREAM_T1246535366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.SpeechSynthesis.SpeechSynthesisStream
struct  SpeechSynthesisStream_t1246535366  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.SpeechSynthesis.ISpeechSynthesisStream
	ISpeechSynthesisStream_t3362589103* ____ispeechSynthesisStream_t3362589103;
	// Cached pointer to Windows.Storage.Streams.IRandomAccessStreamWithContentType
	IRandomAccessStreamWithContentType_t3401445771* ____irandomAccessStreamWithContentType_t3401445771;
	// Cached pointer to Windows.Storage.Streams.IContentTypeProvider
	IContentTypeProvider_t3737071693* ____icontentTypeProvider_t3737071693;
	// Cached pointer to Windows.Storage.Streams.IRandomAccessStream
	IRandomAccessStream_t3249294976* ____irandomAccessStream_t3249294976;
	// Cached pointer to Windows.Storage.Streams.IOutputStream
	IOutputStream_t3078671696* ____ioutputStream_t3078671696;
	// Cached pointer to Windows.Storage.Streams.IInputStream
	IInputStream_t3363766785* ____iinputStream_t3363766785;
	// Cached pointer to Windows.Media.Core.ITimedMetadataTrackProvider
	ITimedMetadataTrackProvider_t2052218459* ____itimedMetadataTrackProvider_t2052218459;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t3373323172* ____iclosable_t3373323172;

public:
	inline ISpeechSynthesisStream_t3362589103* get_____ispeechSynthesisStream_t3362589103()
	{
		ISpeechSynthesisStream_t3362589103* returnValue = ____ispeechSynthesisStream_t3362589103;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpeechSynthesisStream_t3362589103::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpeechSynthesisStream_t3362589103>((&____ispeechSynthesisStream_t3362589103), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispeechSynthesisStream_t3362589103;
			}
		}
		return returnValue;
	}

	inline IRandomAccessStreamWithContentType_t3401445771* get_____irandomAccessStreamWithContentType_t3401445771()
	{
		IRandomAccessStreamWithContentType_t3401445771* returnValue = ____irandomAccessStreamWithContentType_t3401445771;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IRandomAccessStreamWithContentType_t3401445771::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IRandomAccessStreamWithContentType_t3401445771>((&____irandomAccessStreamWithContentType_t3401445771), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____irandomAccessStreamWithContentType_t3401445771;
			}
		}
		return returnValue;
	}

	inline IContentTypeProvider_t3737071693* get_____icontentTypeProvider_t3737071693()
	{
		IContentTypeProvider_t3737071693* returnValue = ____icontentTypeProvider_t3737071693;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IContentTypeProvider_t3737071693::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IContentTypeProvider_t3737071693>((&____icontentTypeProvider_t3737071693), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icontentTypeProvider_t3737071693;
			}
		}
		return returnValue;
	}

	inline IRandomAccessStream_t3249294976* get_____irandomAccessStream_t3249294976()
	{
		IRandomAccessStream_t3249294976* returnValue = ____irandomAccessStream_t3249294976;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IRandomAccessStream_t3249294976::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IRandomAccessStream_t3249294976>((&____irandomAccessStream_t3249294976), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____irandomAccessStream_t3249294976;
			}
		}
		return returnValue;
	}

	inline IOutputStream_t3078671696* get_____ioutputStream_t3078671696()
	{
		IOutputStream_t3078671696* returnValue = ____ioutputStream_t3078671696;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IOutputStream_t3078671696::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IOutputStream_t3078671696>((&____ioutputStream_t3078671696), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ioutputStream_t3078671696;
			}
		}
		return returnValue;
	}

	inline IInputStream_t3363766785* get_____iinputStream_t3363766785()
	{
		IInputStream_t3363766785* returnValue = ____iinputStream_t3363766785;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IInputStream_t3363766785::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInputStream_t3363766785>((&____iinputStream_t3363766785), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinputStream_t3363766785;
			}
		}
		return returnValue;
	}

	inline ITimedMetadataTrackProvider_t2052218459* get_____itimedMetadataTrackProvider_t2052218459()
	{
		ITimedMetadataTrackProvider_t2052218459* returnValue = ____itimedMetadataTrackProvider_t2052218459;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ITimedMetadataTrackProvider_t2052218459::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ITimedMetadataTrackProvider_t2052218459>((&____itimedMetadataTrackProvider_t2052218459), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____itimedMetadataTrackProvider_t2052218459;
			}
		}
		return returnValue;
	}

	inline IClosable_t3373323172* get_____iclosable_t3373323172()
	{
		IClosable_t3373323172* returnValue = ____iclosable_t3373323172;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t3373323172::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t3373323172>((&____iclosable_t3373323172), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t3373323172;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHSYNTHESISSTREAM_T1246535366_H
#ifndef COREDISPATCHER_T943573532_H
#define COREDISPATCHER_T943573532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Core.CoreDispatcher
struct  CoreDispatcher_t943573532  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Core.ICoreDispatcher
	ICoreDispatcher_t2775224237* ____icoreDispatcher_t2775224237;
	// Cached pointer to Windows.UI.Core.ICoreAcceleratorKeys
	ICoreAcceleratorKeys_t2301439033* ____icoreAcceleratorKeys_t2301439033;
	// Cached pointer to Windows.UI.Core.ICoreDispatcherWithTaskPriority
	ICoreDispatcherWithTaskPriority_t1401535646* ____icoreDispatcherWithTaskPriority_t1401535646;
	// Cached pointer to Windows.UI.Core.ICoreDispatcher2
	ICoreDispatcher2_t2909526611* ____icoreDispatcher2_t2909526611;

public:
	inline ICoreDispatcher_t2775224237* get_____icoreDispatcher_t2775224237()
	{
		ICoreDispatcher_t2775224237* returnValue = ____icoreDispatcher_t2775224237;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreDispatcher_t2775224237::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreDispatcher_t2775224237>((&____icoreDispatcher_t2775224237), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreDispatcher_t2775224237;
			}
		}
		return returnValue;
	}

	inline ICoreAcceleratorKeys_t2301439033* get_____icoreAcceleratorKeys_t2301439033()
	{
		ICoreAcceleratorKeys_t2301439033* returnValue = ____icoreAcceleratorKeys_t2301439033;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreAcceleratorKeys_t2301439033::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreAcceleratorKeys_t2301439033>((&____icoreAcceleratorKeys_t2301439033), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreAcceleratorKeys_t2301439033;
			}
		}
		return returnValue;
	}

	inline ICoreDispatcherWithTaskPriority_t1401535646* get_____icoreDispatcherWithTaskPriority_t1401535646()
	{
		ICoreDispatcherWithTaskPriority_t1401535646* returnValue = ____icoreDispatcherWithTaskPriority_t1401535646;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreDispatcherWithTaskPriority_t1401535646::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreDispatcherWithTaskPriority_t1401535646>((&____icoreDispatcherWithTaskPriority_t1401535646), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreDispatcherWithTaskPriority_t1401535646;
			}
		}
		return returnValue;
	}

	inline ICoreDispatcher2_t2909526611* get_____icoreDispatcher2_t2909526611()
	{
		ICoreDispatcher2_t2909526611* returnValue = ____icoreDispatcher2_t2909526611;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreDispatcher2_t2909526611::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreDispatcher2_t2909526611>((&____icoreDispatcher2_t2909526611), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreDispatcher2_t2909526611;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COREDISPATCHER_T943573532_H
#ifndef PERCEPTIONTIMESTAMPHELPER_T2296064491_H
#define PERCEPTIONTIMESTAMPHELPER_T2296064491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Perception.PerceptionTimestampHelper
struct  PerceptionTimestampHelper_t2296064491  : public Il2CppComObject
{
public:

public:
};

struct PerceptionTimestampHelper_t2296064491_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Perception.IPerceptionTimestampHelperStatics
	IPerceptionTimestampHelperStatics_t2143050105* ____iperceptionTimestampHelperStatics_t2143050105;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Perception.PerceptionTimestampHelper"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IPerceptionTimestampHelperStatics_t2143050105* get_____iperceptionTimestampHelperStatics_t2143050105()
	{
		IPerceptionTimestampHelperStatics_t2143050105* returnValue = ____iperceptionTimestampHelperStatics_t2143050105;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IPerceptionTimestampHelperStatics_t2143050105::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPerceptionTimestampHelperStatics_t2143050105>((&____iperceptionTimestampHelperStatics_t2143050105), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iperceptionTimestampHelperStatics_t2143050105;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERCEPTIONTIMESTAMPHELPER_T2296064491_H
#ifndef DISPATCHEDHANDLER_T3993910849_H
#define DISPATCHEDHANDLER_T3993910849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Core.DispatchedHandler
struct  DispatchedHandler_t3993910849  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.UI.Core.DispatchedHandler
struct IDispatchedHandler_t3993910849_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke() = 0;
};

#endif // DISPATCHEDHANDLER_T3993910849_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4100 = { 0, sizeof(ICoreImmersiveApplication3_t3665268150*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4101 = { 0, sizeof(ICoreApplicationUnhandledError_t1848132095*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4102 = { 0, sizeof(ICoreApplicationView_t1896519889*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4103 = { 0, sizeof(ICoreApplicationView2_t170551683*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4104 = { 0, sizeof(ICoreApplicationView3_t170551684*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4105 = { 0, sizeof(ICoreApplicationView5_t170551678*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4106 = { 0, sizeof(ICoreApplicationView6_t170551679*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4107 = { 0, sizeof(ISimpleHapticsControllerFeedback_t2109010546*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4108 = { 0, sizeof(ISimpleHapticsController_t718010169*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4109 = { sizeof (SimpleHapticsControllerFeedback_t1181953697), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4110 = { sizeof (SimpleHapticsController_t959381204), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4111 = { sizeof (VoiceInformation_t570935028), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4112 = { 0, sizeof(IVoiceInformation_t3666062611*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4113 = { 0, sizeof(IInstalledVoicesStatic_t3188562746*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4114 = { 0, sizeof(IInstalledVoicesStatic2_t798858600*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4115 = { 0, sizeof(ISpeechSynthesisStream_t3362589103*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4116 = { sizeof (SpeechSynthesisStream_t1246535366), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4117 = { 0, sizeof(ISpeechSynthesizer_t2139018459*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4118 = { 0, sizeof(ISpeechSynthesizer2_t2761782189*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4119 = { sizeof (SpeechSynthesizer_t1257494700), -1, sizeof(SpeechSynthesizer_t1257494700_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4120 = { 0, sizeof(ITimedMetadataTrackProvider_t2052218459*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4121 = { sizeof (StreamSocket_t796131729), -1, sizeof(StreamSocket_t796131729_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4122 = { sizeof (StreamSocketListener_t2636731061), -1, sizeof(StreamSocketListener_t2636731061_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4123 = { 0, sizeof(IStreamSocket_t2533243978*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4124 = { 0, sizeof(IStreamSocket2_t558813948*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4125 = { 0, sizeof(IStreamSocket3_t558813947*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4126 = { 0, sizeof(IStreamSocketStatics_t3531737089*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4127 = { 0, sizeof(IStreamSocketListenerConnectionReceivedEventArgs_t3514291550*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4128 = { 0, sizeof(IStreamSocketListener_t784085316*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4129 = { sizeof (StreamSocketListenerConnectionReceivedEventArgs_t3669680245), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4130 = { 0, sizeof(IStreamSocketListener2_t44361330*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4131 = { 0, sizeof(IStreamSocketListener3_t44361331*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4132 = { 0, sizeof(IPerceptionTimestamp_t3816561066*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4133 = { sizeof (PerceptionTimestamp_t1626706861), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4134 = { 0, sizeof(IPerceptionTimestampHelperStatics_t2143050105*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4135 = { sizeof (PerceptionTimestampHelper_t2296064491), -1, sizeof(PerceptionTimestampHelper_t2296064491_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4136 = { 0, sizeof(IApplicationDataStatics_t1968290068*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4137 = { sizeof (ApplicationData_t649254064), -1, sizeof(ApplicationData_t649254064_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4138 = { 0, sizeof(IApplicationDataStatics2_t1332623130*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4139 = { 0, sizeof(IApplicationData_t1229331037*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4140 = { 0, sizeof(IApplicationData2_t828219183*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4141 = { 0, sizeof(IApplicationData3_t828219182*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4142 = { sizeof (CoreDispatcherPriority_t3529361068)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4142[5] = 
{
	CoreDispatcherPriority_t3529361068::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4143 = { 0, sizeof(ICoreWindowEventArgs_t3570838601*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4144 = { 0, sizeof(IVisibilityChangedEventArgs_t1030753476*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4145 = { 0, sizeof(ICoreWindow_t3668417618*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4146 = { sizeof (CoreDispatcher_t943573532), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4147 = { sizeof (CoreWindow_t749782899), -1, sizeof(CoreWindow_t749782899_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4148 = { sizeof (VisibilityChangedEventArgs_t2498633571), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4149 = { 0, sizeof(ICoreWindow2_t2462005452*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4150 = { 0, sizeof(ICoreWindow3_t4028089393*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4151 = { 0, sizeof(ICoreWindow4_t1299206038*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4152 = { 0, sizeof(ICoreWindow5_t2865289979*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4153 = { 0, sizeof(ICoreWindowStatic_t2411591036*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4154 = { sizeof (DispatchedHandler_t3993910849), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4155 = { 0, sizeof(ICoreAcceleratorKeys_t2301439033*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4156 = { 0, sizeof(ICoreDispatcher_t2775224237*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4157 = { 0, sizeof(ICoreDispatcher2_t2909526611*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4158 = { 0, sizeof(ICoreDispatcherWithTaskPriority_t1401535646*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4159 = { 0, sizeof(ICorePointerRedirector_t3370186726*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4160 = { 0, sizeof(ISpatialInteractionSource_t3243911342*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4161 = { 0, sizeof(ISpatialInteractionSource2_t2995569052*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4162 = { sizeof (SpatialInteractionController_t4092306930), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4163 = { sizeof (SpatialInteractionSourceState_t2442807032), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4164 = { 0, sizeof(ISpatialInteractionSource3_t2995569053*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4165 = { 0, sizeof(ISpatialInteractionController_t4282417239*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4166 = { 0, sizeof(ISpatialInteractionController2_t3840354057*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4167 = { sizeof (SpatialInteractionSource_t811401711), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4168 = { 0, sizeof(ISpatialInteractionSourceState_t1888017753*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4169 = { 0, sizeof(ISpatialInteractionSourceState2_t3316743315*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4170 = { 0, sizeof(ISpatialInteractionManager_t1055370764*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4171 = { sizeof (SpatialInteractionManager_t3897002175), -1, sizeof(SpatialInteractionManager_t3897002175_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4172 = { 0, sizeof(ISpatialInteractionManagerStatics_t2133328341*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4173 = { 0, sizeof(IBindableIterable_t4008853116*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4174 = { 0, sizeof(IBindableVector_t3448723239*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4175 = { 0, sizeof(IBindableVectorView_t2929852672*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4176 = { 0, sizeof(IBindableIterator_t1279970208*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4177 = { 0, sizeof(INavigate_t2845042632*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4178 = { 0, sizeof(IContentControl_t33651485*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4179 = { 0, sizeof(IContentControlOverrides_t202799454*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4180 = { 0, sizeof(IContentControlStatics_t604565398*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4181 = { 0, sizeof(IContentControlFactory_t1342310671*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4182 = { 0, sizeof(IContentControl2_t2704607147*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4183 = { 0, sizeof(IFrame_t2020096710*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4184 = { 0, sizeof(IFrameStatics_t3212326863*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4185 = { 0, sizeof(IFrameFactory_t2980372502*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4186 = { 0, sizeof(IFrame2_t2227434892*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4187 = { 0, sizeof(IFrameStatics2_t2142472509*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4188 = { 0, sizeof(IFrame3_t3793518833*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4189 = { 0, sizeof(IFrame4_t3034003946*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4190 = { sizeof (TypeKind_t2846743588)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4190[4] = 
{
	TypeKind_t2846743588::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4191 = { sizeof (TypeName_t3283527367)+ sizeof (RuntimeObject), sizeof(TypeName_t3283527367_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable4191[2] = 
{
	TypeName_t3283527367::get_offset_of_Name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TypeName_t3283527367::get_offset_of_Kind_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4192 = { sizeof (DependencyObject_t28106760), -1, sizeof(DependencyObject_t28106760_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4193 = { sizeof (PropertyChangedEventArgs_t4146756264), -1, sizeof(PropertyChangedEventArgs_t4146756264_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4194 = { sizeof (ContentPropertyAttribute_t3336187252), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4194[1] = 
{
	ContentPropertyAttribute_t3336187252::get_offset_of_Name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4195 = { 0, sizeof(IDependencyObject_t532880329*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4196 = { 0, sizeof(IDependencyObjectFactory_t188179991*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4197 = { 0, sizeof(IDependencyObject2_t1927716995*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4198 = { 0, sizeof(IUIElement_t1489863049*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4199 = { 0, sizeof(IUIElementOverrides_t2720963150*), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
