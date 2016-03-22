// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "extensions/browser/api/generated_api_registration.h"

#include "extensions/browser/api/system_display/system_display_api.h"
#include "extensions/browser/api/system_storage/system_storage_api.h"
#include "extensions/browser/api/guest_view/web_view/web_view_internal_api.h"
#include "extensions/browser/api/bluetooth/bluetooth_api.h"
#include "extensions/browser/api/web_request/web_request_api.h"
#include "extensions/browser/api/guest_view/app_view/app_view_guest_internal_api.h"
#include "extensions/browser/api/serial/serial_api.h"
#include "extensions/browser/api/printer_provider/printer_provider_api.h"
#include "extensions/browser/api/networking_private/networking_private_api.h"
#include "extensions/browser/api/management/management_api.h"
#include "extensions/browser/api/power/power_api.h"
#include "extensions/browser/api/test/test_api.h"
#include "extensions/browser/api/sockets_udp/sockets_udp_api.h"
#include "extensions/browser/api/storage/storage_api.h"
#include "extensions/browser/api/dns/dns_api.h"
#include "extensions/browser/api/guest_view/guest_view_internal_api.h"
#include "extensions/browser/api/app_current_window_internal/app_current_window_internal_api.h"
#include "extensions/browser/api/document_scan/document_scan_api.h"
#include "extensions/browser/api/cast_channel/cast_channel_api.h"
#include "extensions/browser/api/bluetooth_socket/bluetooth_socket_api.h"
#if defined(OS_CHROMEOS)
#include "extensions/browser/api/virtual_keyboard_private/virtual_keyboard_private_api.h"
#endif  // defined(OS_CHROMEOS)
#include "extensions/browser/api/system_cpu/system_cpu_api.h"
#include "extensions/browser/api/printer_provider_internal/printer_provider_internal_api.h"
#include "extensions/browser/api/hid/hid_api.h"
#include "extensions/browser/api/bluetooth/bluetooth_private_api.h"
#include "extensions/browser/api/app_window/app_window_api.h"
#include "extensions/browser/api/app_runtime/app_runtime_api.h"
#include "extensions/browser/api/runtime/runtime_api.h"
#include "extensions/browser/api/socket/socket_api.h"
#include "extensions/browser/api/sockets_tcp/sockets_tcp_api.h"
#include "extensions/browser/api/display_source/display_source_api.h"
#include "extensions/browser/api/declarative/declarative_api.h"
#include "extensions/browser/api/system_network/system_network_api.h"
#include "extensions/browser/api/idle/idle_api.h"
#include "extensions/browser/api/system_memory/system_memory_api.h"
#include "extensions/browser/api/sockets_tcp_server/sockets_tcp_server_api.h"
#include "extensions/browser/api/usb/usb_api.h"
#include "extensions/browser/api/alarms/alarms_api.h"
#include "extensions/browser/api/audio/audio_api.h"
#include "extensions/browser/api/web_request/web_request_api.h"
#include "extensions/browser/api/guest_view/extension_view/extension_view_internal_api.h"

#include "extensions/browser/extension_function_registry.h"

namespace extensions {
namespace api {

// static
void GeneratedFunctionRegistry::RegisterAll(ExtensionFunctionRegistry* registry) {
  registry->RegisterFunction<SystemDisplayGetInfoFunction>();
  registry->RegisterFunction<SystemDisplaySetDisplayPropertiesFunction>();
  registry->RegisterFunction<SystemDisplayEnableUnifiedDesktopFunction>();
  registry->RegisterFunction<SystemStorageGetInfoFunction>();
  registry->RegisterFunction<SystemStorageEjectDeviceFunction>();
  registry->RegisterFunction<SystemStorageGetAvailableCapacityFunction>();
  registry->RegisterFunction<WebViewInternalExecuteScriptFunction>();
  registry->RegisterFunction<WebViewInternalInsertCSSFunction>();
  registry->RegisterFunction<WebViewInternalAddContentScriptsFunction>();
  registry->RegisterFunction<WebViewInternalRemoveContentScriptsFunction>();
  registry->RegisterFunction<WebViewInternalSetZoomFunction>();
  registry->RegisterFunction<WebViewInternalGetZoomFunction>();
  registry->RegisterFunction<WebViewInternalSetZoomModeFunction>();
  registry->RegisterFunction<WebViewInternalGetZoomModeFunction>();
  registry->RegisterFunction<WebViewInternalFindFunction>();
  registry->RegisterFunction<WebViewInternalStopFindingFunction>();
  registry->RegisterFunction<WebViewInternalLoadDataWithBaseUrlFunction>();
  registry->RegisterFunction<WebViewInternalGoFunction>();
  registry->RegisterFunction<WebViewInternalOverrideUserAgentFunction>();
  registry->RegisterFunction<WebViewInternalReloadFunction>();
  registry->RegisterFunction<WebViewInternalSetAllowTransparencyFunction>();
  registry->RegisterFunction<WebViewInternalSetAllowScalingFunction>();
  registry->RegisterFunction<WebViewInternalSetNameFunction>();
  registry->RegisterFunction<WebViewInternalSetPermissionFunction>();
  registry->RegisterFunction<WebViewInternalNavigateFunction>();
  registry->RegisterFunction<WebViewInternalStopFunction>();
  registry->RegisterFunction<WebViewInternalTerminateFunction>();
  registry->RegisterFunction<WebViewInternalCaptureVisibleRegionFunction>();
  registry->RegisterFunction<WebViewInternalClearDataFunction>();
  registry->RegisterFunction<BluetoothGetAdapterStateFunction>();
  registry->RegisterFunction<BluetoothGetDeviceFunction>();
  registry->RegisterFunction<BluetoothGetDevicesFunction>();
  registry->RegisterFunction<BluetoothStartDiscoveryFunction>();
  registry->RegisterFunction<BluetoothStopDiscoveryFunction>();
  registry->RegisterFunction<WebRequestHandlerBehaviorChangedFunction>();
  registry->RegisterFunction<AppViewGuestInternalAttachFrameFunction>();
  registry->RegisterFunction<AppViewGuestInternalDenyRequestFunction>();
  registry->RegisterFunction<SerialGetDevicesFunction>();
  registry->RegisterFunction<SerialConnectFunction>();
  registry->RegisterFunction<SerialUpdateFunction>();
  registry->RegisterFunction<SerialDisconnectFunction>();
  registry->RegisterFunction<SerialSetPausedFunction>();
  registry->RegisterFunction<SerialGetInfoFunction>();
  registry->RegisterFunction<SerialGetConnectionsFunction>();
  registry->RegisterFunction<SerialSendFunction>();
  registry->RegisterFunction<SerialFlushFunction>();
  registry->RegisterFunction<SerialGetControlSignalsFunction>();
  registry->RegisterFunction<SerialSetControlSignalsFunction>();
  registry->RegisterFunction<SerialSetBreakFunction>();
  registry->RegisterFunction<SerialClearBreakFunction>();
  registry->RegisterFunction<NetworkingPrivateGetPropertiesFunction>();
  registry->RegisterFunction<NetworkingPrivateGetManagedPropertiesFunction>();
  registry->RegisterFunction<NetworkingPrivateGetStateFunction>();
  registry->RegisterFunction<NetworkingPrivateSetPropertiesFunction>();
  registry->RegisterFunction<NetworkingPrivateCreateNetworkFunction>();
  registry->RegisterFunction<NetworkingPrivateForgetNetworkFunction>();
  registry->RegisterFunction<NetworkingPrivateGetNetworksFunction>();
  registry->RegisterFunction<NetworkingPrivateGetVisibleNetworksFunction>();
  registry->RegisterFunction<NetworkingPrivateGetEnabledNetworkTypesFunction>();
  registry->RegisterFunction<NetworkingPrivateGetDeviceStatesFunction>();
  registry->RegisterFunction<NetworkingPrivateEnableNetworkTypeFunction>();
  registry->RegisterFunction<NetworkingPrivateDisableNetworkTypeFunction>();
  registry->RegisterFunction<NetworkingPrivateRequestNetworkScanFunction>();
  registry->RegisterFunction<NetworkingPrivateStartConnectFunction>();
  registry->RegisterFunction<NetworkingPrivateStartDisconnectFunction>();
  registry->RegisterFunction<NetworkingPrivateStartActivateFunction>();
  registry->RegisterFunction<NetworkingPrivateVerifyDestinationFunction>();
  registry->RegisterFunction<NetworkingPrivateVerifyAndEncryptCredentialsFunction>();
  registry->RegisterFunction<NetworkingPrivateVerifyAndEncryptDataFunction>();
  registry->RegisterFunction<NetworkingPrivateSetWifiTDLSEnabledStateFunction>();
  registry->RegisterFunction<NetworkingPrivateGetWifiTDLSStatusFunction>();
  registry->RegisterFunction<NetworkingPrivateGetCaptivePortalStatusFunction>();
  registry->RegisterFunction<NetworkingPrivateUnlockCellularSimFunction>();
  registry->RegisterFunction<NetworkingPrivateSetCellularSimStateFunction>();
  registry->RegisterFunction<ManagementGetAllFunction>();
  registry->RegisterFunction<ManagementGetFunction>();
  registry->RegisterFunction<ManagementGetSelfFunction>();
  registry->RegisterFunction<ManagementGetPermissionWarningsByIdFunction>();
  registry->RegisterFunction<ManagementGetPermissionWarningsByManifestFunction>();
  registry->RegisterFunction<ManagementSetEnabledFunction>();
  registry->RegisterFunction<ManagementUninstallFunction>();
  registry->RegisterFunction<ManagementUninstallSelfFunction>();
  registry->RegisterFunction<ManagementLaunchAppFunction>();
  registry->RegisterFunction<ManagementCreateAppShortcutFunction>();
  registry->RegisterFunction<ManagementSetLaunchTypeFunction>();
  registry->RegisterFunction<ManagementGenerateAppForLinkFunction>();
  registry->RegisterFunction<PowerRequestKeepAwakeFunction>();
  registry->RegisterFunction<PowerReleaseKeepAwakeFunction>();
  registry->RegisterFunction<TestGetConfigFunction>();
  registry->RegisterFunction<TestNotifyFailFunction>();
  registry->RegisterFunction<TestNotifyPassFunction>();
  registry->RegisterFunction<TestLogFunction>();
  registry->RegisterFunction<TestSendMessageFunction>();
  registry->RegisterFunction<TestWaitForRoundTripFunction>();
  registry->RegisterFunction<SocketsUdpCreateFunction>();
  registry->RegisterFunction<SocketsUdpUpdateFunction>();
  registry->RegisterFunction<SocketsUdpSetPausedFunction>();
  registry->RegisterFunction<SocketsUdpBindFunction>();
  registry->RegisterFunction<SocketsUdpSendFunction>();
  registry->RegisterFunction<SocketsUdpCloseFunction>();
  registry->RegisterFunction<SocketsUdpGetInfoFunction>();
  registry->RegisterFunction<SocketsUdpGetSocketsFunction>();
  registry->RegisterFunction<SocketsUdpJoinGroupFunction>();
  registry->RegisterFunction<SocketsUdpLeaveGroupFunction>();
  registry->RegisterFunction<SocketsUdpSetMulticastTimeToLiveFunction>();
  registry->RegisterFunction<SocketsUdpSetMulticastLoopbackModeFunction>();
  registry->RegisterFunction<SocketsUdpGetJoinedGroupsFunction>();
  registry->RegisterFunction<SocketsUdpSetBroadcastFunction>();
  registry->RegisterFunction<StorageStorageAreaGetFunction>();
  registry->RegisterFunction<StorageStorageAreaGetBytesInUseFunction>();
  registry->RegisterFunction<StorageStorageAreaSetFunction>();
  registry->RegisterFunction<StorageStorageAreaRemoveFunction>();
  registry->RegisterFunction<StorageStorageAreaClearFunction>();
  registry->RegisterFunction<DnsResolveFunction>();
  registry->RegisterFunction<GuestViewInternalCreateGuestFunction>();
  registry->RegisterFunction<GuestViewInternalDestroyGuestFunction>();
  registry->RegisterFunction<GuestViewInternalSetSizeFunction>();
  registry->RegisterFunction<AppCurrentWindowInternalFocusFunction>();
  registry->RegisterFunction<AppCurrentWindowInternalFullscreenFunction>();
  registry->RegisterFunction<AppCurrentWindowInternalMinimizeFunction>();
  registry->RegisterFunction<AppCurrentWindowInternalMaximizeFunction>();
  registry->RegisterFunction<AppCurrentWindowInternalRestoreFunction>();
  registry->RegisterFunction<AppCurrentWindowInternalDrawAttentionFunction>();
  registry->RegisterFunction<AppCurrentWindowInternalClearAttentionFunction>();
  registry->RegisterFunction<AppCurrentWindowInternalShowFunction>();
  registry->RegisterFunction<AppCurrentWindowInternalHideFunction>();
  registry->RegisterFunction<AppCurrentWindowInternalSetBoundsFunction>();
  registry->RegisterFunction<AppCurrentWindowInternalSetSizeConstraintsFunction>();
  registry->RegisterFunction<AppCurrentWindowInternalSetIconFunction>();
  registry->RegisterFunction<AppCurrentWindowInternalSetShapeFunction>();
  registry->RegisterFunction<AppCurrentWindowInternalSetAlwaysOnTopFunction>();
  registry->RegisterFunction<AppCurrentWindowInternalSetVisibleOnAllWorkspacesFunction>();
  registry->RegisterFunction<DocumentScanScanFunction>();
  registry->RegisterFunction<CastChannelOpenFunction>();
  registry->RegisterFunction<CastChannelSendFunction>();
  registry->RegisterFunction<CastChannelCloseFunction>();
  registry->RegisterFunction<CastChannelGetLogsFunction>();
  registry->RegisterFunction<CastChannelSetAuthorityKeysFunction>();
  registry->RegisterFunction<BluetoothSocketCreateFunction>();
  registry->RegisterFunction<BluetoothSocketUpdateFunction>();
  registry->RegisterFunction<BluetoothSocketSetPausedFunction>();
  registry->RegisterFunction<BluetoothSocketListenUsingRfcommFunction>();
  registry->RegisterFunction<BluetoothSocketListenUsingL2capFunction>();
  registry->RegisterFunction<BluetoothSocketConnectFunction>();
  registry->RegisterFunction<BluetoothSocketDisconnectFunction>();
  registry->RegisterFunction<BluetoothSocketCloseFunction>();
  registry->RegisterFunction<BluetoothSocketSendFunction>();
  registry->RegisterFunction<BluetoothSocketGetInfoFunction>();
  registry->RegisterFunction<BluetoothSocketGetSocketsFunction>();
  #if defined(OS_CHROMEOS)
  registry->RegisterFunction<VirtualKeyboardPrivateInsertTextFunction>();
  registry->RegisterFunction<VirtualKeyboardPrivateSendKeyEventFunction>();
  registry->RegisterFunction<VirtualKeyboardPrivateHideKeyboardFunction>();
  registry->RegisterFunction<VirtualKeyboardPrivateSetHotrodKeyboardFunction>();
  registry->RegisterFunction<VirtualKeyboardPrivateLockKeyboardFunction>();
  registry->RegisterFunction<VirtualKeyboardPrivateKeyboardLoadedFunction>();
  registry->RegisterFunction<VirtualKeyboardPrivateGetKeyboardConfigFunction>();
  registry->RegisterFunction<VirtualKeyboardPrivateOpenSettingsFunction>();
  registry->RegisterFunction<VirtualKeyboardPrivateSetModeFunction>();
  registry->RegisterFunction<VirtualKeyboardPrivateSetKeyboardStateFunction>();
  #endif  // defined(OS_CHROMEOS)
  registry->RegisterFunction<SystemCpuGetInfoFunction>();
  registry->RegisterFunction<PrinterProviderInternalReportPrintersFunction>();
  registry->RegisterFunction<PrinterProviderInternalReportUsbPrinterInfoFunction>();
  registry->RegisterFunction<PrinterProviderInternalReportPrinterCapabilityFunction>();
  registry->RegisterFunction<PrinterProviderInternalReportPrintResultFunction>();
  registry->RegisterFunction<PrinterProviderInternalGetPrintDataFunction>();
  registry->RegisterFunction<HidGetDevicesFunction>();
  registry->RegisterFunction<HidGetUserSelectedDevicesFunction>();
  registry->RegisterFunction<HidConnectFunction>();
  registry->RegisterFunction<HidDisconnectFunction>();
  registry->RegisterFunction<HidReceiveFunction>();
  registry->RegisterFunction<HidSendFunction>();
  registry->RegisterFunction<HidReceiveFeatureReportFunction>();
  registry->RegisterFunction<HidSendFeatureReportFunction>();
  registry->RegisterFunction<BluetoothPrivateSetAdapterStateFunction>();
  registry->RegisterFunction<BluetoothPrivateSetPairingResponseFunction>();
  registry->RegisterFunction<BluetoothPrivateDisconnectAllFunction>();
  registry->RegisterFunction<BluetoothPrivateForgetDeviceFunction>();
  registry->RegisterFunction<BluetoothPrivateSetDiscoveryFilterFunction>();
  registry->RegisterFunction<BluetoothPrivateConnectFunction>();
  registry->RegisterFunction<BluetoothPrivatePairFunction>();
  registry->RegisterFunction<AppWindowCreateFunction>();
  registry->RegisterFunction<RuntimeGetBackgroundPageFunction>();
  registry->RegisterFunction<RuntimeOpenOptionsPageFunction>();
  registry->RegisterFunction<RuntimeSetUninstallURLFunction>();
  registry->RegisterFunction<RuntimeReloadFunction>();
  registry->RegisterFunction<RuntimeRequestUpdateCheckFunction>();
  registry->RegisterFunction<RuntimeRestartFunction>();
  registry->RegisterFunction<RuntimeGetPlatformInfoFunction>();
  registry->RegisterFunction<RuntimeGetPackageDirectoryEntryFunction>();
  registry->RegisterFunction<SocketCreateFunction>();
  registry->RegisterFunction<SocketDestroyFunction>();
  registry->RegisterFunction<SocketConnectFunction>();
  registry->RegisterFunction<SocketBindFunction>();
  registry->RegisterFunction<SocketDisconnectFunction>();
  registry->RegisterFunction<SocketReadFunction>();
  registry->RegisterFunction<SocketWriteFunction>();
  registry->RegisterFunction<SocketRecvFromFunction>();
  registry->RegisterFunction<SocketSendToFunction>();
  registry->RegisterFunction<SocketListenFunction>();
  registry->RegisterFunction<SocketAcceptFunction>();
  registry->RegisterFunction<SocketSetKeepAliveFunction>();
  registry->RegisterFunction<SocketSetNoDelayFunction>();
  registry->RegisterFunction<SocketGetInfoFunction>();
  registry->RegisterFunction<SocketGetNetworkListFunction>();
  registry->RegisterFunction<SocketJoinGroupFunction>();
  registry->RegisterFunction<SocketLeaveGroupFunction>();
  registry->RegisterFunction<SocketSetMulticastTimeToLiveFunction>();
  registry->RegisterFunction<SocketSetMulticastLoopbackModeFunction>();
  registry->RegisterFunction<SocketGetJoinedGroupsFunction>();
  registry->RegisterFunction<SocketSecureFunction>();
  registry->RegisterFunction<SocketsTcpCreateFunction>();
  registry->RegisterFunction<SocketsTcpUpdateFunction>();
  registry->RegisterFunction<SocketsTcpSetPausedFunction>();
  registry->RegisterFunction<SocketsTcpSetKeepAliveFunction>();
  registry->RegisterFunction<SocketsTcpSetNoDelayFunction>();
  registry->RegisterFunction<SocketsTcpConnectFunction>();
  registry->RegisterFunction<SocketsTcpDisconnectFunction>();
  registry->RegisterFunction<SocketsTcpSecureFunction>();
  registry->RegisterFunction<SocketsTcpSendFunction>();
  registry->RegisterFunction<SocketsTcpCloseFunction>();
  registry->RegisterFunction<SocketsTcpGetInfoFunction>();
  registry->RegisterFunction<SocketsTcpGetSocketsFunction>();
  registry->RegisterFunction<DisplaySourceGetAvailableSinksFunction>();
  registry->RegisterFunction<DisplaySourceRequestAuthenticationFunction>();
  registry->RegisterFunction<EventsEventAddRulesFunction>();
  registry->RegisterFunction<EventsEventGetRulesFunction>();
  registry->RegisterFunction<EventsEventRemoveRulesFunction>();
  registry->RegisterFunction<SystemNetworkGetNetworkInterfacesFunction>();
  registry->RegisterFunction<IdleQueryStateFunction>();
  registry->RegisterFunction<IdleSetDetectionIntervalFunction>();
  registry->RegisterFunction<SystemMemoryGetInfoFunction>();
  registry->RegisterFunction<SocketsTcpServerCreateFunction>();
  registry->RegisterFunction<SocketsTcpServerUpdateFunction>();
  registry->RegisterFunction<SocketsTcpServerSetPausedFunction>();
  registry->RegisterFunction<SocketsTcpServerListenFunction>();
  registry->RegisterFunction<SocketsTcpServerDisconnectFunction>();
  registry->RegisterFunction<SocketsTcpServerCloseFunction>();
  registry->RegisterFunction<SocketsTcpServerGetInfoFunction>();
  registry->RegisterFunction<SocketsTcpServerGetSocketsFunction>();
  registry->RegisterFunction<UsbGetDevicesFunction>();
  registry->RegisterFunction<UsbGetUserSelectedDevicesFunction>();
  registry->RegisterFunction<UsbGetConfigurationsFunction>();
  registry->RegisterFunction<UsbRequestAccessFunction>();
  registry->RegisterFunction<UsbOpenDeviceFunction>();
  registry->RegisterFunction<UsbFindDevicesFunction>();
  registry->RegisterFunction<UsbCloseDeviceFunction>();
  registry->RegisterFunction<UsbSetConfigurationFunction>();
  registry->RegisterFunction<UsbGetConfigurationFunction>();
  registry->RegisterFunction<UsbListInterfacesFunction>();
  registry->RegisterFunction<UsbClaimInterfaceFunction>();
  registry->RegisterFunction<UsbReleaseInterfaceFunction>();
  registry->RegisterFunction<UsbSetInterfaceAlternateSettingFunction>();
  registry->RegisterFunction<UsbControlTransferFunction>();
  registry->RegisterFunction<UsbBulkTransferFunction>();
  registry->RegisterFunction<UsbInterruptTransferFunction>();
  registry->RegisterFunction<UsbIsochronousTransferFunction>();
  registry->RegisterFunction<UsbResetDeviceFunction>();
  registry->RegisterFunction<AlarmsCreateFunction>();
  registry->RegisterFunction<AlarmsGetFunction>();
  registry->RegisterFunction<AlarmsGetAllFunction>();
  registry->RegisterFunction<AlarmsClearFunction>();
  registry->RegisterFunction<AlarmsClearAllFunction>();
  registry->RegisterFunction<AudioGetInfoFunction>();
  registry->RegisterFunction<AudioSetActiveDevicesFunction>();
  registry->RegisterFunction<AudioSetPropertiesFunction>();
  registry->RegisterFunction<WebRequestInternalAddEventListenerFunction>();
  registry->RegisterFunction<WebRequestInternalEventHandledFunction>();
  registry->RegisterFunction<ExtensionViewInternalLoadSrcFunction>();
  registry->RegisterFunction<ExtensionViewInternalParseSrcFunction>();
}

}  // namespace api
}  // namespace extensions
