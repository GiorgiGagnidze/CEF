// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef RuntimeEnabledFeatures_h
#define RuntimeEnabledFeatures_h

#include <string>

#include "platform/PlatformExport.h"
#include "wtf/build_config.h"
#include "wtf/Forward.h"

namespace blink {

// A class that stores static enablers for all experimental features.

class PLATFORM_EXPORT RuntimeEnabledFeatures {
public:
    class PLATFORM_EXPORT Backup {
    public:
        explicit Backup();
        void restore();

    private:
        bool m_appBanner;
        bool m_alwaysUseComplexText;
        bool m_applicationCache;
        bool m_audioOutputDevices;
        bool m_audioVideoTracks;
        bool m_authorShadowDOMForAnyElement;
        bool m_backgroundSync;
        bool m_backgroundSyncV2;
        bool m_cacheStorageMatchAll;
        bool m_clientHints;
        bool m_columnFill;
        bool m_compositedSelectionUpdate;
        bool m_compositorWorker;
        bool m_compositorAnimationTimelines;
        bool m_contextMenu;
        bool m_credentialManager;
        bool m_css3Text;
        bool m_css3TextDecorations;
        bool m_cssAdditiveAnimations;
        bool m_cssBackdropFilter;
        bool m_cssCompositing;
        bool m_cssContainment;
        bool m_cssFontDisplay;
        bool m_cssFontSizeAdjust;
        bool m_cssGridLayout;
        bool m_cssIndependentTransformProperties;
        bool m_cssMaskSourceType;
        bool m_cssomSmoothScroll;
        bool m_cssPropertyD;
        bool m_cssStickyPosition;
        bool m_cssTouchActionPanDirections;
        bool m_cssTypedOM;
        bool m_cssVariables;
        bool m_cssViewport;
        bool m_cssScrollSnapPoints;
        bool m_customSchemeHandler;
        bool m_database;
        bool m_decodeToYUV;
        bool m_deviceLight;
        bool m_deviceOrientationAbsolute;
        bool m_displayList2dCanvas;
        bool m_durableStorage;
        bool m_forceDisplayList2dCanvas;
        bool m_encryptedMedia;
        bool m_execCommandInJavaScript;
        bool m_computedAccessibilityInfo;
        bool m_eventListenerOptions;
        bool m_experimentalCanvasFeatures;
        bool m_experimentalContentSecurityPolicyFeatures;
        bool m_experimentalFramework;
        bool m_experimentalFrameworkSampleAPI;
        bool m_experimentalV8Extras;
        bool m_fastMobileScrolling;
        bool m_fileAPIBlobClose;
        bool m_fileSystem;
        bool m_foreignFetch;
        bool m_formDataNewMethods;
        bool m_fullscreenUnprefixed;
        bool m_frameTimingSupport;
        bool m_geofencing;
        bool m_geometryInterfaces;
        bool m_getUserMedia;
        bool m_globalCacheStorage;
        bool m_hiResEventTimeStamp;
        bool m_imageColorProfiles;
        bool m_imageOrientation;
        bool m_imageRenderingPixelated;
        bool m_indexedDBExperimental;
        bool m_inputDeviceCapabilities;
        bool m_inputModeAttribute;
        bool m_intersectionObserver;
        bool m_iterableCollections;
        bool m_keyboardEventCode;
        bool m_keyboardEventKey;
        bool m_langAttributeAwareFormControlUI;
        bool m_linkPreconnect;
        bool m_linkPreload;
        bool m_linkHeader;
        bool m_fractionalScrollOffsets;
        bool m_media;
        bool m_mediaCapture;
        bool m_mediaCaptureFromElement;
        bool m_mediaConstraints;
        bool m_mediaDevices;
        bool m_mediaRecorder;
        bool m_mediaSession;
        bool m_mediaSource;
        bool m_mediaSourceExperimental;
        bool m_mediaStreamSpeech;
        bool m_memoryInfoInWorkers;
        bool m_navigatorConnect;
        bool m_navigatorContentUtils;
        bool m_webNFC;
        bool m_networkInformation;
        bool m_netInfoDownlinkMax;
        bool m_newMediaPlaybackUi;
        bool m_notificationConstructor;
        bool m_notificationExperimental;
        bool m_notifications;
        bool m_orientationEvent;
        bool m_forceOverlayFullscreenVideo;
        bool m_overlayScrollbars;
        bool m_pagePopup;
        bool m_passiveEventListeners;
        bool m_passPaintVisualRectToCompositor;
        bool m_pathOpsSVGClipping;
        bool m_performanceObserver;
        bool m_permissions;
        bool m_permissionsRequestRevoke;
        bool m_pointerEvent;
        bool m_preciseMemoryInfo;
        bool m_prefixedEncryptedMedia;
        bool m_prefixedVideoFullscreen;
        bool m_presentation;
        bool m_presentationReceiver;
        bool m_promiseRejectionEvent;
        bool m_pushMessaging;
        bool m_pushMessagingData;
        bool m_quotaPromise;
        bool m_reducedReferrerGranularity;
        bool m_renderingPipelineThrottling;
        bool m_requestIdleCallback;
        bool m_requestAutocomplete;
        bool m_responseConstructedWithReadableStream;
        bool m_restrictIFramePermissions;
        bool m_sandboxBlocksModals;
        bool m_screenOrientation;
        bool m_scriptedSpeech;
        bool m_scrollTopLeftInterop;
        bool m_selectionForComposedTree;
        bool m_serviceWorkerClientAttributes;
        bool m_serviceWorkerExtendableMessageEvent;
        bool m_serviceWorkerPerformanceTimeline;
        bool m_serviceWorkerWindowClientNavigate;
        bool m_shadowDOMV1;
        bool m_shadowRootDelegatesFocus;
        bool m_sharedArrayBuffer;
        bool m_sharedWorker;
        bool m_slimmingPaintV2;
        bool m_slimmingPaintOffsetCaching;
        bool m_slimmingPaintStrictCullRectClipping;
        bool m_slimmingPaintUnderInvalidationChecking;
        bool m_stackedCSSPropertyAnimations;
        bool m_styleSharing;
        bool m_styleMatchedPropertiesCache;
        bool m_experimentalStream;
        bool m_referrerPolicyAttribute;
        bool m_suborigins;
        bool m_threadedParserDataReceiver;
        bool m_touch;
        bool m_trustedEvents;
        bool m_trustedEventsDefaultAction;
        bool m_unsafeES3APIs;
        bool m_unsandboxedAuxiliary;
        bool m_userSelectAll;
        bool m_webAnimationsAPI;
        bool m_webAnimationsSVG;
        bool m_webAudio;
        bool m_webBluetooth;
        bool m_webGLDraftExtensions;
        bool m_webGLImageChromium;
        bool m_webUSB;
        bool m_webVR;
        bool m_webVTTRegions;
        bool m_v8IdleTasks;
        bool m_xslt;
        bool m_smil;
        bool m_scrollCustomization;
        bool m_scrollRestoration;
        bool m_wakeLock;
        bool m_webFontsIntervention;
        bool m_worklet;
    };

    static void setStableFeaturesEnabled(bool);
    static void setExperimentalFeaturesEnabled(bool);
    static void setTestFeaturesEnabled(bool);

    static void setFeatureEnabledFromString(const std::string& name, bool isEnabled);

    static void setAppBannerEnabled(bool isEnabled) { isAppBannerEnabled = isEnabled; }
    static bool appBannerEnabled() { return isAppBannerEnabled; }

    static void setAlwaysUseComplexTextEnabled(bool isEnabled) { isAlwaysUseComplexTextEnabled = isEnabled; }
    static bool alwaysUseComplexTextEnabled() { return isAlwaysUseComplexTextEnabled; }

    static void setApplicationCacheEnabled(bool isEnabled) { isApplicationCacheEnabled = isEnabled; }
    static bool applicationCacheEnabled() { return isApplicationCacheEnabled; }

    static void setAudioOutputDevicesEnabled(bool isEnabled) { isAudioOutputDevicesEnabled = isEnabled; }
    static bool audioOutputDevicesEnabled() { return isAudioOutputDevicesEnabled; }

    static void setAudioVideoTracksEnabled(bool isEnabled) { isAudioVideoTracksEnabled = isEnabled; }
    static bool audioVideoTracksEnabled() { return isAudioVideoTracksEnabled && isMediaEnabled; }

    static void setAuthorShadowDOMForAnyElementEnabled(bool isEnabled) { isAuthorShadowDOMForAnyElementEnabled = isEnabled; }
    static bool authorShadowDOMForAnyElementEnabled() { return isAuthorShadowDOMForAnyElementEnabled; }

    static void setBackgroundSyncEnabled(bool isEnabled) { isBackgroundSyncEnabled = isEnabled; }
    static bool backgroundSyncEnabled() { return isBackgroundSyncEnabled; }

    static void setBackgroundSyncV2Enabled(bool isEnabled) { isBackgroundSyncV2Enabled = isEnabled; }
    static bool backgroundSyncV2Enabled() { return isBackgroundSyncV2Enabled; }

    static void setCacheStorageMatchAllEnabled(bool isEnabled) { isCacheStorageMatchAllEnabled = isEnabled; }
    static bool cacheStorageMatchAllEnabled() { return isCacheStorageMatchAllEnabled; }

    static void setClientHintsEnabled(bool isEnabled) { isClientHintsEnabled = isEnabled; }
    static bool clientHintsEnabled() { return isClientHintsEnabled; }

    static void setColumnFillEnabled(bool isEnabled) { isColumnFillEnabled = isEnabled; }
    static bool columnFillEnabled() { return isColumnFillEnabled; }

    static void setCompositedSelectionUpdateEnabled(bool isEnabled) { isCompositedSelectionUpdateEnabled = isEnabled; }
    static bool compositedSelectionUpdateEnabled() { return isCompositedSelectionUpdateEnabled; }

    static void setCompositorWorkerEnabled(bool isEnabled) { isCompositorWorkerEnabled = isEnabled; }
    static bool compositorWorkerEnabled() { return isCompositorWorkerEnabled; }

    static void setCompositorAnimationTimelinesEnabled(bool isEnabled) { isCompositorAnimationTimelinesEnabled = isEnabled; }
    static bool compositorAnimationTimelinesEnabled() { return isCompositorAnimationTimelinesEnabled; }

    static void setContextMenuEnabled(bool isEnabled) { isContextMenuEnabled = isEnabled; }
    static bool contextMenuEnabled() { return isContextMenuEnabled; }

    static void setCredentialManagerEnabled(bool isEnabled) { isCredentialManagerEnabled = isEnabled; }
    static bool credentialManagerEnabled() { return isCredentialManagerEnabled; }

    static void setCSS3TextEnabled(bool isEnabled) { isCSS3TextEnabled = isEnabled; }
    static bool css3TextEnabled() { return isCSS3TextEnabled; }

    static void setCSS3TextDecorationsEnabled(bool isEnabled) { isCSS3TextDecorationsEnabled = isEnabled; }
    static bool css3TextDecorationsEnabled() { return isCSS3TextDecorationsEnabled; }

    static void setCSSAdditiveAnimationsEnabled(bool isEnabled) { isCSSAdditiveAnimationsEnabled = isEnabled; }
    static bool cssAdditiveAnimationsEnabled() { return isCSSAdditiveAnimationsEnabled && isStackedCSSPropertyAnimationsEnabled; }

    static void setCSSBackdropFilterEnabled(bool isEnabled) { isCSSBackdropFilterEnabled = isEnabled; }
    static bool cssBackdropFilterEnabled() { return isCSSBackdropFilterEnabled; }

    static void setCSSCompositingEnabled(bool isEnabled) { isCSSCompositingEnabled = isEnabled; }
    static bool cssCompositingEnabled() { return isCSSCompositingEnabled; }

    static void setCSSContainmentEnabled(bool isEnabled) { isCSSContainmentEnabled = isEnabled; }
    static bool cssContainmentEnabled() { return isCSSContainmentEnabled; }

    static void setCSSFontDisplayEnabled(bool isEnabled) { isCSSFontDisplayEnabled = isEnabled; }
    static bool cssFontDisplayEnabled() { return isCSSFontDisplayEnabled; }

    static void setCSSFontSizeAdjustEnabled(bool isEnabled) { isCSSFontSizeAdjustEnabled = isEnabled; }
    static bool cssFontSizeAdjustEnabled() { return isCSSFontSizeAdjustEnabled; }

    static void setCSSGridLayoutEnabled(bool isEnabled) { isCSSGridLayoutEnabled = isEnabled; }
    static bool cssGridLayoutEnabled() { return isCSSGridLayoutEnabled; }

    static void setCSSIndependentTransformPropertiesEnabled(bool isEnabled) { isCSSIndependentTransformPropertiesEnabled = isEnabled; }
    static bool cssIndependentTransformPropertiesEnabled() { return isCSSIndependentTransformPropertiesEnabled; }

    static void setCSSMaskSourceTypeEnabled(bool isEnabled) { isCSSMaskSourceTypeEnabled = isEnabled; }
    static bool cssMaskSourceTypeEnabled() { return isCSSMaskSourceTypeEnabled; }

    static void setCSSOMSmoothScrollEnabled(bool isEnabled) { isCSSOMSmoothScrollEnabled = isEnabled; }
    static bool cssomSmoothScrollEnabled() { return isCSSOMSmoothScrollEnabled; }

    static void setCSSPropertyDEnabled(bool isEnabled) { isCSSPropertyDEnabled = isEnabled; }
    static bool cssPropertyDEnabled() { return isCSSPropertyDEnabled; }

    static void setCSSStickyPositionEnabled(bool isEnabled) { isCSSStickyPositionEnabled = isEnabled; }
    static bool cssStickyPositionEnabled() { return isCSSStickyPositionEnabled; }

    static void setCSSTouchActionPanDirectionsEnabled(bool isEnabled) { isCSSTouchActionPanDirectionsEnabled = isEnabled; }
    static bool cssTouchActionPanDirectionsEnabled() { return isCSSTouchActionPanDirectionsEnabled; }

    static void setCSSTypedOMEnabled(bool isEnabled) { isCSSTypedOMEnabled = isEnabled; }
    static bool cssTypedOMEnabled() { return isCSSTypedOMEnabled; }

    static void setCSSVariablesEnabled(bool isEnabled) { isCSSVariablesEnabled = isEnabled; }
    static bool cssVariablesEnabled() { return isCSSVariablesEnabled; }

    static void setCSSViewportEnabled(bool isEnabled) { isCSSViewportEnabled = isEnabled; }
    static bool cssViewportEnabled() { return isCSSViewportEnabled; }

    static void setCSSScrollSnapPointsEnabled(bool isEnabled) { isCSSScrollSnapPointsEnabled = isEnabled; }
    static bool cssScrollSnapPointsEnabled() { return isCSSScrollSnapPointsEnabled; }

    static void setCustomSchemeHandlerEnabled(bool isEnabled) { isCustomSchemeHandlerEnabled = isEnabled; }
    static bool customSchemeHandlerEnabled() { return isCustomSchemeHandlerEnabled && isNavigatorContentUtilsEnabled; }

    static void setDatabaseEnabled(bool isEnabled) { isDatabaseEnabled = isEnabled; }
    static bool databaseEnabled() { return isDatabaseEnabled; }

    static void setDecodeToYUVEnabled(bool isEnabled) { isDecodeToYUVEnabled = isEnabled; }
    static bool decodeToYUVEnabled() { return isDecodeToYUVEnabled; }

    static void setDeviceLightEnabled(bool isEnabled) { isDeviceLightEnabled = isEnabled; }
    static bool deviceLightEnabled() { return isDeviceLightEnabled; }

    static void setDeviceOrientationAbsoluteEnabled(bool isEnabled) { isDeviceOrientationAbsoluteEnabled = isEnabled; }
    static bool deviceOrientationAbsoluteEnabled() { return isDeviceOrientationAbsoluteEnabled; }

    static void setDisplayList2dCanvasEnabled(bool isEnabled) { isDisplayList2dCanvasEnabled = isEnabled; }
    static bool displayList2dCanvasEnabled() { return isDisplayList2dCanvasEnabled; }

    static void setDurableStorageEnabled(bool isEnabled) { isDurableStorageEnabled = isEnabled; }
    static bool durableStorageEnabled() { return isDurableStorageEnabled; }

    static void setForceDisplayList2dCanvasEnabled(bool isEnabled) { isForceDisplayList2dCanvasEnabled = isEnabled; }
    static bool forceDisplayList2dCanvasEnabled() { return isForceDisplayList2dCanvasEnabled; }

    static void setEncryptedMediaEnabled(bool isEnabled) { isEncryptedMediaEnabled = isEnabled; }
    static bool encryptedMediaEnabled() { return isEncryptedMediaEnabled; }

    static void setExecCommandInJavaScriptEnabled(bool isEnabled) { isExecCommandInJavaScriptEnabled = isEnabled; }
    static bool execCommandInJavaScriptEnabled() { return isExecCommandInJavaScriptEnabled; }

    static void setComputedAccessibilityInfoEnabled(bool isEnabled) { isComputedAccessibilityInfoEnabled = isEnabled; }
    static bool computedAccessibilityInfoEnabled() { return isComputedAccessibilityInfoEnabled; }

    static void setEventListenerOptionsEnabled(bool isEnabled) { isEventListenerOptionsEnabled = isEnabled; }
    static bool eventListenerOptionsEnabled() { return isEventListenerOptionsEnabled; }

    static void setExperimentalCanvasFeaturesEnabled(bool isEnabled) { isExperimentalCanvasFeaturesEnabled = isEnabled; }
    static bool experimentalCanvasFeaturesEnabled() { return isExperimentalCanvasFeaturesEnabled; }

    static void setExperimentalContentSecurityPolicyFeaturesEnabled(bool isEnabled) { isExperimentalContentSecurityPolicyFeaturesEnabled = isEnabled; }
    static bool experimentalContentSecurityPolicyFeaturesEnabled() { return isExperimentalContentSecurityPolicyFeaturesEnabled; }

    static void setExperimentalFrameworkEnabled(bool isEnabled) { isExperimentalFrameworkEnabled = isEnabled; }
    static bool experimentalFrameworkEnabled() { return isExperimentalFrameworkEnabled; }

    static void setExperimentalFrameworkSampleAPIEnabled(bool isEnabled) { isExperimentalFrameworkSampleAPIEnabled = isEnabled; }
    static bool experimentalFrameworkSampleAPIEnabled() { return isExperimentalFrameworkSampleAPIEnabled; }

    static void setExperimentalV8ExtrasEnabled(bool isEnabled) { isExperimentalV8ExtrasEnabled = isEnabled; }
    static bool experimentalV8ExtrasEnabled() { return isExperimentalV8ExtrasEnabled; }

    static void setFastMobileScrollingEnabled(bool isEnabled) { isFastMobileScrollingEnabled = isEnabled; }
    static bool fastMobileScrollingEnabled() { return isFastMobileScrollingEnabled; }

    static void setFileAPIBlobCloseEnabled(bool isEnabled) { isFileAPIBlobCloseEnabled = isEnabled; }
    static bool fileAPIBlobCloseEnabled() { return isFileAPIBlobCloseEnabled; }

    static void setFileSystemEnabled(bool isEnabled) { isFileSystemEnabled = isEnabled; }
    static bool fileSystemEnabled() { return isFileSystemEnabled; }

    static void setForeignFetchEnabled(bool isEnabled) { isForeignFetchEnabled = isEnabled; }
    static bool foreignFetchEnabled() { return isForeignFetchEnabled; }

    static void setFormDataNewMethodsEnabled(bool isEnabled) { isFormDataNewMethodsEnabled = isEnabled; }
    static bool formDataNewMethodsEnabled() { return isFormDataNewMethodsEnabled; }

    static void setFullscreenUnprefixedEnabled(bool isEnabled) { isFullscreenUnprefixedEnabled = isEnabled; }
    static bool fullscreenUnprefixedEnabled() { return isFullscreenUnprefixedEnabled; }

    static void setFrameTimingSupportEnabled(bool isEnabled) { isFrameTimingSupportEnabled = isEnabled; }
    static bool frameTimingSupportEnabled() { return isFrameTimingSupportEnabled; }

    static void setGeofencingEnabled(bool isEnabled) { isGeofencingEnabled = isEnabled; }
    static bool geofencingEnabled() { return isGeofencingEnabled; }

    static void setGeometryInterfacesEnabled(bool isEnabled) { isGeometryInterfacesEnabled = isEnabled; }
    static bool geometryInterfacesEnabled() { return isGeometryInterfacesEnabled; }

    static void setGetUserMediaEnabled(bool isEnabled) { isGetUserMediaEnabled = isEnabled; }
    static bool getUserMediaEnabled() { return isGetUserMediaEnabled && isMediaDevicesEnabled; }

    static void setGlobalCacheStorageEnabled(bool isEnabled) { isGlobalCacheStorageEnabled = isEnabled; }
    static bool globalCacheStorageEnabled() { return isGlobalCacheStorageEnabled; }

    static void setHiResEventTimeStampEnabled(bool isEnabled) { isHiResEventTimeStampEnabled = isEnabled; }
    static bool hiResEventTimeStampEnabled() { return isHiResEventTimeStampEnabled; }

    static void setImageColorProfilesEnabled(bool isEnabled) { isImageColorProfilesEnabled = isEnabled; }
    static bool imageColorProfilesEnabled() { return isImageColorProfilesEnabled; }

    static void setImageOrientationEnabled(bool isEnabled) { isImageOrientationEnabled = isEnabled; }
    static bool imageOrientationEnabled() { return isImageOrientationEnabled; }

    static void setImageRenderingPixelatedEnabled(bool isEnabled) { isImageRenderingPixelatedEnabled = isEnabled; }
    static bool imageRenderingPixelatedEnabled() { return isImageRenderingPixelatedEnabled; }

    static void setIndexedDBExperimentalEnabled(bool isEnabled) { isIndexedDBExperimentalEnabled = isEnabled; }
    static bool indexedDBExperimentalEnabled() { return isIndexedDBExperimentalEnabled; }

    static void setInputDeviceCapabilitiesEnabled(bool isEnabled) { isInputDeviceCapabilitiesEnabled = isEnabled; }
    static bool inputDeviceCapabilitiesEnabled() { return isInputDeviceCapabilitiesEnabled; }

    static void setInputModeAttributeEnabled(bool isEnabled) { isInputModeAttributeEnabled = isEnabled; }
    static bool inputModeAttributeEnabled() { return isInputModeAttributeEnabled; }

    static void setIntersectionObserverEnabled(bool isEnabled) { isIntersectionObserverEnabled = isEnabled; }
    static bool intersectionObserverEnabled() { return isIntersectionObserverEnabled; }

    static void setIterableCollectionsEnabled(bool isEnabled) { isIterableCollectionsEnabled = isEnabled; }
    static bool iterableCollectionsEnabled() { return isIterableCollectionsEnabled; }

    static void setKeyboardEventCodeEnabled(bool isEnabled) { isKeyboardEventCodeEnabled = isEnabled; }
    static bool keyboardEventCodeEnabled() { return isKeyboardEventCodeEnabled; }

    static void setKeyboardEventKeyEnabled(bool isEnabled) { isKeyboardEventKeyEnabled = isEnabled; }
    static bool keyboardEventKeyEnabled() { return isKeyboardEventKeyEnabled; }

    static void setLangAttributeAwareFormControlUIEnabled(bool isEnabled) { isLangAttributeAwareFormControlUIEnabled = isEnabled; }
    static bool langAttributeAwareFormControlUIEnabled() { return isLangAttributeAwareFormControlUIEnabled; }

    static void setLinkPreconnectEnabled(bool isEnabled) { isLinkPreconnectEnabled = isEnabled; }
    static bool linkPreconnectEnabled() { return isLinkPreconnectEnabled; }

    static void setLinkPreloadEnabled(bool isEnabled) { isLinkPreloadEnabled = isEnabled; }
    static bool linkPreloadEnabled() { return isLinkPreloadEnabled; }

    static void setLinkHeaderEnabled(bool isEnabled) { isLinkHeaderEnabled = isEnabled; }
    static bool linkHeaderEnabled() { return isLinkHeaderEnabled; }

    static void setFractionalScrollOffsetsEnabled(bool isEnabled) { isFractionalScrollOffsetsEnabled = isEnabled; }
    static bool fractionalScrollOffsetsEnabled() { return isFractionalScrollOffsetsEnabled; }

    static void setMediaEnabled(bool isEnabled) { isMediaEnabled = isEnabled; }
    static bool mediaEnabled() { return isMediaEnabled; }

    static void setMediaCaptureEnabled(bool isEnabled) { isMediaCaptureEnabled = isEnabled; }
    static bool mediaCaptureEnabled() { return isMediaCaptureEnabled; }

    static void setMediaCaptureFromElementEnabled(bool isEnabled) { isMediaCaptureFromElementEnabled = isEnabled; }
    static bool mediaCaptureFromElementEnabled() { return isMediaCaptureFromElementEnabled; }

    static void setMediaConstraintsEnabled(bool isEnabled) { isMediaConstraintsEnabled = isEnabled; }
    static bool mediaConstraintsEnabled() { return isMediaConstraintsEnabled; }

    static void setMediaDevicesEnabled(bool isEnabled) { isMediaDevicesEnabled = isEnabled; }
    static bool mediaDevicesEnabled() { return isMediaDevicesEnabled; }

    static void setMediaRecorderEnabled(bool isEnabled) { isMediaRecorderEnabled = isEnabled; }
    static bool mediaRecorderEnabled() { return isMediaRecorderEnabled; }

    static void setMediaSessionEnabled(bool isEnabled) { isMediaSessionEnabled = isEnabled; }
    static bool mediaSessionEnabled() { return isMediaSessionEnabled; }

    static void setMediaSourceEnabled(bool isEnabled) { isMediaSourceEnabled = isEnabled; }
    static bool mediaSourceEnabled() { return isMediaSourceEnabled; }

    static void setMediaSourceExperimentalEnabled(bool isEnabled) { isMediaSourceExperimentalEnabled = isEnabled; }
    static bool mediaSourceExperimentalEnabled() { return isMediaSourceExperimentalEnabled && isMediaSourceEnabled; }

    static void setMediaStreamSpeechEnabled(bool isEnabled) { isMediaStreamSpeechEnabled = isEnabled; }
    static bool mediaStreamSpeechEnabled() { return isMediaStreamSpeechEnabled; }

    static void setMemoryInfoInWorkersEnabled(bool isEnabled) { isMemoryInfoInWorkersEnabled = isEnabled; }
    static bool memoryInfoInWorkersEnabled() { return isMemoryInfoInWorkersEnabled; }

    static void setNavigatorConnectEnabled(bool isEnabled) { isNavigatorConnectEnabled = isEnabled; }
    static bool navigatorConnectEnabled() { return isNavigatorConnectEnabled; }

    static void setNavigatorContentUtilsEnabled(bool isEnabled) { isNavigatorContentUtilsEnabled = isEnabled; }
    static bool navigatorContentUtilsEnabled() { return isNavigatorContentUtilsEnabled; }

    static void setWebNFCEnabled(bool isEnabled) { isWebNFCEnabled = isEnabled; }
    static bool webNFCEnabled() { return isWebNFCEnabled; }

    static void setNetworkInformationEnabled(bool isEnabled) { isNetworkInformationEnabled = isEnabled; }
    static bool networkInformationEnabled() { return isNetworkInformationEnabled; }

    static void setNetInfoDownlinkMaxEnabled(bool isEnabled) { isNetInfoDownlinkMaxEnabled = isEnabled; }
    static bool netInfoDownlinkMaxEnabled() { return isNetInfoDownlinkMaxEnabled; }

    static void setNewMediaPlaybackUiEnabled(bool isEnabled) { isNewMediaPlaybackUiEnabled = isEnabled; }
    static bool newMediaPlaybackUiEnabled() { return isNewMediaPlaybackUiEnabled; }

    static void setNotificationConstructorEnabled(bool isEnabled) { isNotificationConstructorEnabled = isEnabled; }
    static bool notificationConstructorEnabled() { return isNotificationConstructorEnabled; }

    static void setNotificationExperimentalEnabled(bool isEnabled) { isNotificationExperimentalEnabled = isEnabled; }
    static bool notificationExperimentalEnabled() { return isNotificationExperimentalEnabled; }

    static void setNotificationsEnabled(bool isEnabled) { isNotificationsEnabled = isEnabled; }
    static bool notificationsEnabled() { return isNotificationsEnabled; }

    static void setOrientationEventEnabled(bool isEnabled) { isOrientationEventEnabled = isEnabled; }
    static bool orientationEventEnabled() { return isOrientationEventEnabled; }

    static void setForceOverlayFullscreenVideoEnabled(bool isEnabled) { isForceOverlayFullscreenVideoEnabled = isEnabled; }
    static bool forceOverlayFullscreenVideoEnabled() { return isForceOverlayFullscreenVideoEnabled; }

    static void setOverlayScrollbarsEnabled(bool isEnabled) { isOverlayScrollbarsEnabled = isEnabled; }
    static bool overlayScrollbarsEnabled() { return isOverlayScrollbarsEnabled; }

    static void setPagePopupEnabled(bool isEnabled) { isPagePopupEnabled = isEnabled; }
    static bool pagePopupEnabled() { return isPagePopupEnabled; }

    static void setPassiveEventListenersEnabled(bool isEnabled) { isPassiveEventListenersEnabled = isEnabled; }
    static bool passiveEventListenersEnabled() { return isPassiveEventListenersEnabled; }

    static void setPassPaintVisualRectToCompositorEnabled(bool isEnabled) { isPassPaintVisualRectToCompositorEnabled = isEnabled; }
    static bool passPaintVisualRectToCompositorEnabled() { return isPassPaintVisualRectToCompositorEnabled; }

    static void setPathOpsSVGClippingEnabled(bool isEnabled) { isPathOpsSVGClippingEnabled = isEnabled; }
    static bool pathOpsSVGClippingEnabled() { return isPathOpsSVGClippingEnabled; }

    static void setPerformanceObserverEnabled(bool isEnabled) { isPerformanceObserverEnabled = isEnabled; }
    static bool performanceObserverEnabled() { return isPerformanceObserverEnabled; }

    static void setPermissionsEnabled(bool isEnabled) { isPermissionsEnabled = isEnabled; }
    static bool permissionsEnabled() { return isPermissionsEnabled; }

    static void setPermissionsRequestRevokeEnabled(bool isEnabled) { isPermissionsRequestRevokeEnabled = isEnabled; }
    static bool permissionsRequestRevokeEnabled() { return isPermissionsRequestRevokeEnabled; }

    static void setPointerEventEnabled(bool isEnabled) { isPointerEventEnabled = isEnabled; }
    static bool pointerEventEnabled() { return isPointerEventEnabled; }

    static void setPreciseMemoryInfoEnabled(bool isEnabled) { isPreciseMemoryInfoEnabled = isEnabled; }
    static bool preciseMemoryInfoEnabled() { return isPreciseMemoryInfoEnabled; }

    static void setPrefixedEncryptedMediaEnabled(bool isEnabled) { isPrefixedEncryptedMediaEnabled = isEnabled; }
    static bool prefixedEncryptedMediaEnabled() { return isPrefixedEncryptedMediaEnabled; }

    static void setPrefixedVideoFullscreenEnabled(bool isEnabled) { isPrefixedVideoFullscreenEnabled = isEnabled; }
    static bool prefixedVideoFullscreenEnabled() { return isPrefixedVideoFullscreenEnabled; }

    static void setPresentationEnabled(bool isEnabled) { isPresentationEnabled = isEnabled; }
    static bool presentationEnabled() { return isPresentationEnabled; }

    static void setPresentationReceiverEnabled(bool isEnabled) { isPresentationReceiverEnabled = isEnabled; }
    static bool presentationReceiverEnabled() { return isPresentationReceiverEnabled; }

    static void setPromiseRejectionEventEnabled(bool isEnabled) { isPromiseRejectionEventEnabled = isEnabled; }
    static bool promiseRejectionEventEnabled() { return isPromiseRejectionEventEnabled; }

    static void setPushMessagingEnabled(bool isEnabled) { isPushMessagingEnabled = isEnabled; }
    static bool pushMessagingEnabled() { return isPushMessagingEnabled; }

    static void setPushMessagingDataEnabled(bool isEnabled) { isPushMessagingDataEnabled = isEnabled; }
    static bool pushMessagingDataEnabled() { return isPushMessagingDataEnabled; }

    static void setQuotaPromiseEnabled(bool isEnabled) { isQuotaPromiseEnabled = isEnabled; }
    static bool quotaPromiseEnabled() { return isQuotaPromiseEnabled; }

    static void setReducedReferrerGranularityEnabled(bool isEnabled) { isReducedReferrerGranularityEnabled = isEnabled; }
    static bool reducedReferrerGranularityEnabled() { return isReducedReferrerGranularityEnabled; }

    static void setRenderingPipelineThrottlingEnabled(bool isEnabled) { isRenderingPipelineThrottlingEnabled = isEnabled; }
    static bool renderingPipelineThrottlingEnabled() { return isRenderingPipelineThrottlingEnabled; }

    static void setRequestIdleCallbackEnabled(bool isEnabled) { isRequestIdleCallbackEnabled = isEnabled; }
    static bool requestIdleCallbackEnabled() { return isRequestIdleCallbackEnabled; }

    static void setRequestAutocompleteEnabled(bool isEnabled) { isRequestAutocompleteEnabled = isEnabled; }
    static bool requestAutocompleteEnabled() { return isRequestAutocompleteEnabled; }

    static void setResponseConstructedWithReadableStreamEnabled(bool isEnabled) { isResponseConstructedWithReadableStreamEnabled = isEnabled; }
    static bool responseConstructedWithReadableStreamEnabled() { return isResponseConstructedWithReadableStreamEnabled; }

    static void setRestrictIFramePermissionsEnabled(bool isEnabled) { isRestrictIFramePermissionsEnabled = isEnabled; }
    static bool restrictIFramePermissionsEnabled() { return isRestrictIFramePermissionsEnabled; }

    static void setSandboxBlocksModalsEnabled(bool isEnabled) { isSandboxBlocksModalsEnabled = isEnabled; }
    static bool sandboxBlocksModalsEnabled() { return isSandboxBlocksModalsEnabled; }

    static void setScreenOrientationEnabled(bool isEnabled) { isScreenOrientationEnabled = isEnabled; }
    static bool screenOrientationEnabled() { return isScreenOrientationEnabled; }

    static void setScriptedSpeechEnabled(bool isEnabled) { isScriptedSpeechEnabled = isEnabled; }
    static bool scriptedSpeechEnabled() { return isScriptedSpeechEnabled; }

    static void setScrollTopLeftInteropEnabled(bool isEnabled) { isScrollTopLeftInteropEnabled = isEnabled; }
    static bool scrollTopLeftInteropEnabled() { return isScrollTopLeftInteropEnabled; }

    static void setSelectionForComposedTreeEnabled(bool isEnabled) { isSelectionForComposedTreeEnabled = isEnabled; }
    static bool selectionForComposedTreeEnabled() { return isSelectionForComposedTreeEnabled; }

    static void setServiceWorkerClientAttributesEnabled(bool isEnabled) { isServiceWorkerClientAttributesEnabled = isEnabled; }
    static bool serviceWorkerClientAttributesEnabled() { return isServiceWorkerClientAttributesEnabled; }

    static void setServiceWorkerExtendableMessageEventEnabled(bool isEnabled) { isServiceWorkerExtendableMessageEventEnabled = isEnabled; }
    static bool serviceWorkerExtendableMessageEventEnabled() { return isServiceWorkerExtendableMessageEventEnabled; }

    static void setServiceWorkerPerformanceTimelineEnabled(bool isEnabled) { isServiceWorkerPerformanceTimelineEnabled = isEnabled; }
    static bool serviceWorkerPerformanceTimelineEnabled() { return isServiceWorkerPerformanceTimelineEnabled; }

    static void setServiceWorkerWindowClientNavigateEnabled(bool isEnabled) { isServiceWorkerWindowClientNavigateEnabled = isEnabled; }
    static bool serviceWorkerWindowClientNavigateEnabled() { return isServiceWorkerWindowClientNavigateEnabled; }

    static void setShadowDOMV1Enabled(bool isEnabled) { isShadowDOMV1Enabled = isEnabled; }
    static bool shadowDOMV1Enabled() { return isShadowDOMV1Enabled; }

    static void setShadowRootDelegatesFocusEnabled(bool isEnabled) { isShadowRootDelegatesFocusEnabled = isEnabled; }
    static bool shadowRootDelegatesFocusEnabled() { return isShadowRootDelegatesFocusEnabled; }

    static void setSharedArrayBufferEnabled(bool isEnabled) { isSharedArrayBufferEnabled = isEnabled; }
    static bool sharedArrayBufferEnabled() { return isSharedArrayBufferEnabled; }

    static void setSharedWorkerEnabled(bool isEnabled) { isSharedWorkerEnabled = isEnabled; }
    static bool sharedWorkerEnabled() { return isSharedWorkerEnabled; }

    static void setSlimmingPaintV2Enabled(bool isEnabled) { isSlimmingPaintV2Enabled = isEnabled; }
    static bool slimmingPaintV2Enabled() { return isSlimmingPaintV2Enabled; }

    static void setSlimmingPaintOffsetCachingEnabled(bool isEnabled) { isSlimmingPaintOffsetCachingEnabled = isEnabled; }
    static bool slimmingPaintOffsetCachingEnabled() { return isSlimmingPaintOffsetCachingEnabled || isSlimmingPaintV2Enabled; }

    static void setSlimmingPaintStrictCullRectClippingEnabled(bool isEnabled) { isSlimmingPaintStrictCullRectClippingEnabled = isEnabled; }
    static bool slimmingPaintStrictCullRectClippingEnabled() { return isSlimmingPaintStrictCullRectClippingEnabled; }

    static void setSlimmingPaintUnderInvalidationCheckingEnabled(bool isEnabled) { isSlimmingPaintUnderInvalidationCheckingEnabled = isEnabled; }
    static bool slimmingPaintUnderInvalidationCheckingEnabled() { return isSlimmingPaintUnderInvalidationCheckingEnabled; }

    static void setStackedCSSPropertyAnimationsEnabled(bool isEnabled) { isStackedCSSPropertyAnimationsEnabled = isEnabled; }
    static bool stackedCSSPropertyAnimationsEnabled() { return isStackedCSSPropertyAnimationsEnabled; }

    static void setStyleSharingEnabled(bool isEnabled) { isStyleSharingEnabled = isEnabled; }
    static bool styleSharingEnabled() { return isStyleSharingEnabled; }

    static void setStyleMatchedPropertiesCacheEnabled(bool isEnabled) { isStyleMatchedPropertiesCacheEnabled = isEnabled; }
    static bool styleMatchedPropertiesCacheEnabled() { return isStyleMatchedPropertiesCacheEnabled; }

    static void setExperimentalStreamEnabled(bool isEnabled) { isExperimentalStreamEnabled = isEnabled; }
    static bool experimentalStreamEnabled() { return isExperimentalStreamEnabled; }

    static void setReferrerPolicyAttributeEnabled(bool isEnabled) { isReferrerPolicyAttributeEnabled = isEnabled; }
    static bool referrerPolicyAttributeEnabled() { return isReferrerPolicyAttributeEnabled; }

    static void setSuboriginsEnabled(bool isEnabled) { isSuboriginsEnabled = isEnabled; }
    static bool suboriginsEnabled() { return isSuboriginsEnabled; }

    static void setThreadedParserDataReceiverEnabled(bool isEnabled) { isThreadedParserDataReceiverEnabled = isEnabled; }
    static bool threadedParserDataReceiverEnabled() { return isThreadedParserDataReceiverEnabled; }

    static void setTouchEnabled(bool isEnabled) { isTouchEnabled = isEnabled; }
    static bool touchEnabled() { return isTouchEnabled; }

    static void setTrustedEventsEnabled(bool isEnabled) { isTrustedEventsEnabled = isEnabled; }
    static bool trustedEventsEnabled() { return isTrustedEventsEnabled; }

    static void setTrustedEventsDefaultActionEnabled(bool isEnabled) { isTrustedEventsDefaultActionEnabled = isEnabled; }
    static bool trustedEventsDefaultActionEnabled() { return isTrustedEventsDefaultActionEnabled; }

    static void setUnsafeES3APIsEnabled(bool isEnabled) { isUnsafeES3APIsEnabled = isEnabled; }
    static bool unsafeES3APIsEnabled() { return isUnsafeES3APIsEnabled; }

    static void setUnsandboxedAuxiliaryEnabled(bool isEnabled) { isUnsandboxedAuxiliaryEnabled = isEnabled; }
    static bool unsandboxedAuxiliaryEnabled() { return isUnsandboxedAuxiliaryEnabled; }

    static void setUserSelectAllEnabled(bool isEnabled) { isUserSelectAllEnabled = isEnabled; }
    static bool userSelectAllEnabled() { return isUserSelectAllEnabled; }

    static void setWebAnimationsAPIEnabled(bool isEnabled) { isWebAnimationsAPIEnabled = isEnabled; }
    static bool webAnimationsAPIEnabled() { return isWebAnimationsAPIEnabled; }

    static void setWebAnimationsSVGEnabled(bool isEnabled) { isWebAnimationsSVGEnabled = isEnabled; }
    static bool webAnimationsSVGEnabled() { return isWebAnimationsSVGEnabled; }

    static void setWebAudioEnabled(bool isEnabled) { isWebAudioEnabled = isEnabled; }
    static bool webAudioEnabled() { return isWebAudioEnabled; }

    static void setWebBluetoothEnabled(bool isEnabled) { isWebBluetoothEnabled = isEnabled; }
    static bool webBluetoothEnabled() { return isWebBluetoothEnabled; }

    static void setWebGLDraftExtensionsEnabled(bool isEnabled) { isWebGLDraftExtensionsEnabled = isEnabled; }
    static bool webGLDraftExtensionsEnabled() { return isWebGLDraftExtensionsEnabled; }

    static void setWebGLImageChromiumEnabled(bool isEnabled) { isWebGLImageChromiumEnabled = isEnabled; }
    static bool webGLImageChromiumEnabled() { return isWebGLImageChromiumEnabled; }

    static void setWebUSBEnabled(bool isEnabled) { isWebUSBEnabled = isEnabled; }
    static bool webUSBEnabled() { return isWebUSBEnabled; }

    static void setWebVREnabled(bool isEnabled) { isWebVREnabled = isEnabled; }
    static bool webVREnabled() { return isWebVREnabled && isGeometryInterfacesEnabled; }

    static void setWebVTTRegionsEnabled(bool isEnabled) { isWebVTTRegionsEnabled = isEnabled; }
    static bool webVTTRegionsEnabled() { return isWebVTTRegionsEnabled && isMediaEnabled; }

    static void setV8IdleTasksEnabled(bool isEnabled) { isV8IdleTasksEnabled = isEnabled; }
    static bool v8IdleTasksEnabled() { return isV8IdleTasksEnabled; }

    static void setXSLTEnabled(bool isEnabled) { isXSLTEnabled = isEnabled; }
    static bool xsltEnabled() { return isXSLTEnabled; }

    static void setsmilEnabled(bool isEnabled) { issmilEnabled = isEnabled; }
    static bool smilEnabled() { return issmilEnabled; }

    static void setScrollCustomizationEnabled(bool isEnabled) { isScrollCustomizationEnabled = isEnabled; }
    static bool scrollCustomizationEnabled() { return isScrollCustomizationEnabled; }

    static void setScrollRestorationEnabled(bool isEnabled) { isScrollRestorationEnabled = isEnabled; }
    static bool scrollRestorationEnabled() { return isScrollRestorationEnabled; }

    static void setWakeLockEnabled(bool isEnabled) { isWakeLockEnabled = isEnabled; }
    static bool wakeLockEnabled() { return isWakeLockEnabled; }

    static void setWebFontsInterventionEnabled(bool isEnabled) { isWebFontsInterventionEnabled = isEnabled; }
    static bool webFontsInterventionEnabled() { return isWebFontsInterventionEnabled; }

    static void setWorkletEnabled(bool isEnabled) { isWorkletEnabled = isEnabled; }
    static bool workletEnabled() { return isWorkletEnabled; }


private:
    RuntimeEnabledFeatures() { }

    static bool isAppBannerEnabled;
    static bool isAlwaysUseComplexTextEnabled;
    static bool isApplicationCacheEnabled;
    static bool isAudioOutputDevicesEnabled;
    static bool isAudioVideoTracksEnabled;
    static bool isAuthorShadowDOMForAnyElementEnabled;
    static bool isBackgroundSyncEnabled;
    static bool isBackgroundSyncV2Enabled;
    static bool isCacheStorageMatchAllEnabled;
    static bool isClientHintsEnabled;
    static bool isColumnFillEnabled;
    static bool isCompositedSelectionUpdateEnabled;
    static bool isCompositorWorkerEnabled;
    static bool isCompositorAnimationTimelinesEnabled;
    static bool isContextMenuEnabled;
    static bool isCredentialManagerEnabled;
    static bool isCSS3TextEnabled;
    static bool isCSS3TextDecorationsEnabled;
    static bool isCSSAdditiveAnimationsEnabled;
    static bool isCSSBackdropFilterEnabled;
    static bool isCSSCompositingEnabled;
    static bool isCSSContainmentEnabled;
    static bool isCSSFontDisplayEnabled;
    static bool isCSSFontSizeAdjustEnabled;
    static bool isCSSGridLayoutEnabled;
    static bool isCSSIndependentTransformPropertiesEnabled;
    static bool isCSSMaskSourceTypeEnabled;
    static bool isCSSOMSmoothScrollEnabled;
    static bool isCSSPropertyDEnabled;
    static bool isCSSStickyPositionEnabled;
    static bool isCSSTouchActionPanDirectionsEnabled;
    static bool isCSSTypedOMEnabled;
    static bool isCSSVariablesEnabled;
    static bool isCSSViewportEnabled;
    static bool isCSSScrollSnapPointsEnabled;
    static bool isCustomSchemeHandlerEnabled;
    static bool isDatabaseEnabled;
    static bool isDecodeToYUVEnabled;
    static bool isDeviceLightEnabled;
    static bool isDeviceOrientationAbsoluteEnabled;
    static bool isDisplayList2dCanvasEnabled;
    static bool isDurableStorageEnabled;
    static bool isForceDisplayList2dCanvasEnabled;
    static bool isEncryptedMediaEnabled;
    static bool isExecCommandInJavaScriptEnabled;
    static bool isComputedAccessibilityInfoEnabled;
    static bool isEventListenerOptionsEnabled;
    static bool isExperimentalCanvasFeaturesEnabled;
    static bool isExperimentalContentSecurityPolicyFeaturesEnabled;
    static bool isExperimentalFrameworkEnabled;
    static bool isExperimentalFrameworkSampleAPIEnabled;
    static bool isExperimentalV8ExtrasEnabled;
    static bool isFastMobileScrollingEnabled;
    static bool isFileAPIBlobCloseEnabled;
    static bool isFileSystemEnabled;
    static bool isForeignFetchEnabled;
    static bool isFormDataNewMethodsEnabled;
    static bool isFullscreenUnprefixedEnabled;
    static bool isFrameTimingSupportEnabled;
    static bool isGeofencingEnabled;
    static bool isGeometryInterfacesEnabled;
    static bool isGetUserMediaEnabled;
    static bool isGlobalCacheStorageEnabled;
    static bool isHiResEventTimeStampEnabled;
    static bool isImageColorProfilesEnabled;
    static bool isImageOrientationEnabled;
    static bool isImageRenderingPixelatedEnabled;
    static bool isIndexedDBExperimentalEnabled;
    static bool isInputDeviceCapabilitiesEnabled;
    static bool isInputModeAttributeEnabled;
    static bool isIntersectionObserverEnabled;
    static bool isIterableCollectionsEnabled;
    static bool isKeyboardEventCodeEnabled;
    static bool isKeyboardEventKeyEnabled;
    static bool isLangAttributeAwareFormControlUIEnabled;
    static bool isLinkPreconnectEnabled;
    static bool isLinkPreloadEnabled;
    static bool isLinkHeaderEnabled;
    static bool isFractionalScrollOffsetsEnabled;
    static bool isMediaEnabled;
    static bool isMediaCaptureEnabled;
    static bool isMediaCaptureFromElementEnabled;
    static bool isMediaConstraintsEnabled;
    static bool isMediaDevicesEnabled;
    static bool isMediaRecorderEnabled;
    static bool isMediaSessionEnabled;
    static bool isMediaSourceEnabled;
    static bool isMediaSourceExperimentalEnabled;
    static bool isMediaStreamSpeechEnabled;
    static bool isMemoryInfoInWorkersEnabled;
    static bool isNavigatorConnectEnabled;
    static bool isNavigatorContentUtilsEnabled;
    static bool isWebNFCEnabled;
    static bool isNetworkInformationEnabled;
    static bool isNetInfoDownlinkMaxEnabled;
    static bool isNewMediaPlaybackUiEnabled;
    static bool isNotificationConstructorEnabled;
    static bool isNotificationExperimentalEnabled;
    static bool isNotificationsEnabled;
    static bool isOrientationEventEnabled;
    static bool isForceOverlayFullscreenVideoEnabled;
    static bool isOverlayScrollbarsEnabled;
    static bool isPagePopupEnabled;
    static bool isPassiveEventListenersEnabled;
    static bool isPassPaintVisualRectToCompositorEnabled;
    static bool isPathOpsSVGClippingEnabled;
    static bool isPerformanceObserverEnabled;
    static bool isPermissionsEnabled;
    static bool isPermissionsRequestRevokeEnabled;
    static bool isPointerEventEnabled;
    static bool isPreciseMemoryInfoEnabled;
    static bool isPrefixedEncryptedMediaEnabled;
    static bool isPrefixedVideoFullscreenEnabled;
    static bool isPresentationEnabled;
    static bool isPresentationReceiverEnabled;
    static bool isPromiseRejectionEventEnabled;
    static bool isPushMessagingEnabled;
    static bool isPushMessagingDataEnabled;
    static bool isQuotaPromiseEnabled;
    static bool isReducedReferrerGranularityEnabled;
    static bool isRenderingPipelineThrottlingEnabled;
    static bool isRequestIdleCallbackEnabled;
    static bool isRequestAutocompleteEnabled;
    static bool isResponseConstructedWithReadableStreamEnabled;
    static bool isRestrictIFramePermissionsEnabled;
    static bool isSandboxBlocksModalsEnabled;
    static bool isScreenOrientationEnabled;
    static bool isScriptedSpeechEnabled;
    static bool isScrollTopLeftInteropEnabled;
    static bool isSelectionForComposedTreeEnabled;
    static bool isServiceWorkerClientAttributesEnabled;
    static bool isServiceWorkerExtendableMessageEventEnabled;
    static bool isServiceWorkerPerformanceTimelineEnabled;
    static bool isServiceWorkerWindowClientNavigateEnabled;
    static bool isShadowDOMV1Enabled;
    static bool isShadowRootDelegatesFocusEnabled;
    static bool isSharedArrayBufferEnabled;
    static bool isSharedWorkerEnabled;
    static bool isSlimmingPaintV2Enabled;
    static bool isSlimmingPaintOffsetCachingEnabled;
    static bool isSlimmingPaintStrictCullRectClippingEnabled;
    static bool isSlimmingPaintUnderInvalidationCheckingEnabled;
    static bool isStackedCSSPropertyAnimationsEnabled;
    static bool isStyleSharingEnabled;
    static bool isStyleMatchedPropertiesCacheEnabled;
    static bool isExperimentalStreamEnabled;
    static bool isReferrerPolicyAttributeEnabled;
    static bool isSuboriginsEnabled;
    static bool isThreadedParserDataReceiverEnabled;
    static bool isTouchEnabled;
    static bool isTrustedEventsEnabled;
    static bool isTrustedEventsDefaultActionEnabled;
    static bool isUnsafeES3APIsEnabled;
    static bool isUnsandboxedAuxiliaryEnabled;
    static bool isUserSelectAllEnabled;
    static bool isWebAnimationsAPIEnabled;
    static bool isWebAnimationsSVGEnabled;
    static bool isWebAudioEnabled;
    static bool isWebBluetoothEnabled;
    static bool isWebGLDraftExtensionsEnabled;
    static bool isWebGLImageChromiumEnabled;
    static bool isWebUSBEnabled;
    static bool isWebVREnabled;
    static bool isWebVTTRegionsEnabled;
    static bool isV8IdleTasksEnabled;
    static bool isXSLTEnabled;
    static bool issmilEnabled;
    static bool isScrollCustomizationEnabled;
    static bool isScrollRestorationEnabled;
    static bool isWakeLockEnabled;
    static bool isWebFontsInterventionEnabled;
    static bool isWorkletEnabled;
};

} // namespace blink

#endif // RuntimeEnabledFeatures_h
