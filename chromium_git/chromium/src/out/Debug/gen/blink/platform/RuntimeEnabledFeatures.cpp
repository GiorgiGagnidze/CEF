// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "platform/RuntimeEnabledFeatures.h"

#include "wtf/Assertions.h"
#include "wtf/text/WTFString.h"

namespace {

bool caseInsensitiveEqual(const std::string& a, const std::string& b)
{
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (tolower(a[i]) != tolower(b[i]))
            return false;
    }
    return true;
}

} // namespace

namespace blink {

RuntimeEnabledFeatures::Backup::Backup()
    :
    m_appBanner(RuntimeEnabledFeatures::appBannerEnabled())
    , m_alwaysUseComplexText(RuntimeEnabledFeatures::alwaysUseComplexTextEnabled())
    , m_applicationCache(RuntimeEnabledFeatures::applicationCacheEnabled())
    , m_audioOutputDevices(RuntimeEnabledFeatures::audioOutputDevicesEnabled())
    , m_audioVideoTracks(RuntimeEnabledFeatures::audioVideoTracksEnabled())
    , m_authorShadowDOMForAnyElement(RuntimeEnabledFeatures::authorShadowDOMForAnyElementEnabled())
    , m_backgroundSync(RuntimeEnabledFeatures::backgroundSyncEnabled())
    , m_backgroundSyncV2(RuntimeEnabledFeatures::backgroundSyncV2Enabled())
    , m_cacheStorageMatchAll(RuntimeEnabledFeatures::cacheStorageMatchAllEnabled())
    , m_clientHints(RuntimeEnabledFeatures::clientHintsEnabled())
    , m_columnFill(RuntimeEnabledFeatures::columnFillEnabled())
    , m_compositedSelectionUpdate(RuntimeEnabledFeatures::compositedSelectionUpdateEnabled())
    , m_compositorWorker(RuntimeEnabledFeatures::compositorWorkerEnabled())
    , m_compositorAnimationTimelines(RuntimeEnabledFeatures::compositorAnimationTimelinesEnabled())
    , m_contextMenu(RuntimeEnabledFeatures::contextMenuEnabled())
    , m_credentialManager(RuntimeEnabledFeatures::credentialManagerEnabled())
    , m_css3Text(RuntimeEnabledFeatures::css3TextEnabled())
    , m_css3TextDecorations(RuntimeEnabledFeatures::css3TextDecorationsEnabled())
    , m_cssAdditiveAnimations(RuntimeEnabledFeatures::cssAdditiveAnimationsEnabled())
    , m_cssBackdropFilter(RuntimeEnabledFeatures::cssBackdropFilterEnabled())
    , m_cssCompositing(RuntimeEnabledFeatures::cssCompositingEnabled())
    , m_cssContainment(RuntimeEnabledFeatures::cssContainmentEnabled())
    , m_cssFontDisplay(RuntimeEnabledFeatures::cssFontDisplayEnabled())
    , m_cssFontSizeAdjust(RuntimeEnabledFeatures::cssFontSizeAdjustEnabled())
    , m_cssGridLayout(RuntimeEnabledFeatures::cssGridLayoutEnabled())
    , m_cssIndependentTransformProperties(RuntimeEnabledFeatures::cssIndependentTransformPropertiesEnabled())
    , m_cssMaskSourceType(RuntimeEnabledFeatures::cssMaskSourceTypeEnabled())
    , m_cssomSmoothScroll(RuntimeEnabledFeatures::cssomSmoothScrollEnabled())
    , m_cssPropertyD(RuntimeEnabledFeatures::cssPropertyDEnabled())
    , m_cssStickyPosition(RuntimeEnabledFeatures::cssStickyPositionEnabled())
    , m_cssTouchActionPanDirections(RuntimeEnabledFeatures::cssTouchActionPanDirectionsEnabled())
    , m_cssTypedOM(RuntimeEnabledFeatures::cssTypedOMEnabled())
    , m_cssVariables(RuntimeEnabledFeatures::cssVariablesEnabled())
    , m_cssViewport(RuntimeEnabledFeatures::cssViewportEnabled())
    , m_cssScrollSnapPoints(RuntimeEnabledFeatures::cssScrollSnapPointsEnabled())
    , m_customSchemeHandler(RuntimeEnabledFeatures::customSchemeHandlerEnabled())
    , m_database(RuntimeEnabledFeatures::databaseEnabled())
    , m_decodeToYUV(RuntimeEnabledFeatures::decodeToYUVEnabled())
    , m_deviceLight(RuntimeEnabledFeatures::deviceLightEnabled())
    , m_deviceOrientationAbsolute(RuntimeEnabledFeatures::deviceOrientationAbsoluteEnabled())
    , m_displayList2dCanvas(RuntimeEnabledFeatures::displayList2dCanvasEnabled())
    , m_durableStorage(RuntimeEnabledFeatures::durableStorageEnabled())
    , m_forceDisplayList2dCanvas(RuntimeEnabledFeatures::forceDisplayList2dCanvasEnabled())
    , m_encryptedMedia(RuntimeEnabledFeatures::encryptedMediaEnabled())
    , m_execCommandInJavaScript(RuntimeEnabledFeatures::execCommandInJavaScriptEnabled())
    , m_computedAccessibilityInfo(RuntimeEnabledFeatures::computedAccessibilityInfoEnabled())
    , m_eventListenerOptions(RuntimeEnabledFeatures::eventListenerOptionsEnabled())
    , m_experimentalCanvasFeatures(RuntimeEnabledFeatures::experimentalCanvasFeaturesEnabled())
    , m_experimentalContentSecurityPolicyFeatures(RuntimeEnabledFeatures::experimentalContentSecurityPolicyFeaturesEnabled())
    , m_experimentalFramework(RuntimeEnabledFeatures::experimentalFrameworkEnabled())
    , m_experimentalFrameworkSampleAPI(RuntimeEnabledFeatures::experimentalFrameworkSampleAPIEnabled())
    , m_experimentalV8Extras(RuntimeEnabledFeatures::experimentalV8ExtrasEnabled())
    , m_fastMobileScrolling(RuntimeEnabledFeatures::fastMobileScrollingEnabled())
    , m_fileAPIBlobClose(RuntimeEnabledFeatures::fileAPIBlobCloseEnabled())
    , m_fileSystem(RuntimeEnabledFeatures::fileSystemEnabled())
    , m_foreignFetch(RuntimeEnabledFeatures::foreignFetchEnabled())
    , m_formDataNewMethods(RuntimeEnabledFeatures::formDataNewMethodsEnabled())
    , m_fullscreenUnprefixed(RuntimeEnabledFeatures::fullscreenUnprefixedEnabled())
    , m_frameTimingSupport(RuntimeEnabledFeatures::frameTimingSupportEnabled())
    , m_geofencing(RuntimeEnabledFeatures::geofencingEnabled())
    , m_geometryInterfaces(RuntimeEnabledFeatures::geometryInterfacesEnabled())
    , m_getUserMedia(RuntimeEnabledFeatures::getUserMediaEnabled())
    , m_globalCacheStorage(RuntimeEnabledFeatures::globalCacheStorageEnabled())
    , m_hiResEventTimeStamp(RuntimeEnabledFeatures::hiResEventTimeStampEnabled())
    , m_imageColorProfiles(RuntimeEnabledFeatures::imageColorProfilesEnabled())
    , m_imageOrientation(RuntimeEnabledFeatures::imageOrientationEnabled())
    , m_imageRenderingPixelated(RuntimeEnabledFeatures::imageRenderingPixelatedEnabled())
    , m_indexedDBExperimental(RuntimeEnabledFeatures::indexedDBExperimentalEnabled())
    , m_inputDeviceCapabilities(RuntimeEnabledFeatures::inputDeviceCapabilitiesEnabled())
    , m_inputModeAttribute(RuntimeEnabledFeatures::inputModeAttributeEnabled())
    , m_intersectionObserver(RuntimeEnabledFeatures::intersectionObserverEnabled())
    , m_iterableCollections(RuntimeEnabledFeatures::iterableCollectionsEnabled())
    , m_keyboardEventCode(RuntimeEnabledFeatures::keyboardEventCodeEnabled())
    , m_keyboardEventKey(RuntimeEnabledFeatures::keyboardEventKeyEnabled())
    , m_langAttributeAwareFormControlUI(RuntimeEnabledFeatures::langAttributeAwareFormControlUIEnabled())
    , m_linkPreconnect(RuntimeEnabledFeatures::linkPreconnectEnabled())
    , m_linkPreload(RuntimeEnabledFeatures::linkPreloadEnabled())
    , m_linkHeader(RuntimeEnabledFeatures::linkHeaderEnabled())
    , m_fractionalScrollOffsets(RuntimeEnabledFeatures::fractionalScrollOffsetsEnabled())
    , m_media(RuntimeEnabledFeatures::mediaEnabled())
    , m_mediaCapture(RuntimeEnabledFeatures::mediaCaptureEnabled())
    , m_mediaCaptureFromElement(RuntimeEnabledFeatures::mediaCaptureFromElementEnabled())
    , m_mediaConstraints(RuntimeEnabledFeatures::mediaConstraintsEnabled())
    , m_mediaDevices(RuntimeEnabledFeatures::mediaDevicesEnabled())
    , m_mediaRecorder(RuntimeEnabledFeatures::mediaRecorderEnabled())
    , m_mediaSession(RuntimeEnabledFeatures::mediaSessionEnabled())
    , m_mediaSource(RuntimeEnabledFeatures::mediaSourceEnabled())
    , m_mediaSourceExperimental(RuntimeEnabledFeatures::mediaSourceExperimentalEnabled())
    , m_mediaStreamSpeech(RuntimeEnabledFeatures::mediaStreamSpeechEnabled())
    , m_memoryInfoInWorkers(RuntimeEnabledFeatures::memoryInfoInWorkersEnabled())
    , m_navigatorConnect(RuntimeEnabledFeatures::navigatorConnectEnabled())
    , m_navigatorContentUtils(RuntimeEnabledFeatures::navigatorContentUtilsEnabled())
    , m_webNFC(RuntimeEnabledFeatures::webNFCEnabled())
    , m_networkInformation(RuntimeEnabledFeatures::networkInformationEnabled())
    , m_netInfoDownlinkMax(RuntimeEnabledFeatures::netInfoDownlinkMaxEnabled())
    , m_newMediaPlaybackUi(RuntimeEnabledFeatures::newMediaPlaybackUiEnabled())
    , m_notificationConstructor(RuntimeEnabledFeatures::notificationConstructorEnabled())
    , m_notificationExperimental(RuntimeEnabledFeatures::notificationExperimentalEnabled())
    , m_notifications(RuntimeEnabledFeatures::notificationsEnabled())
    , m_orientationEvent(RuntimeEnabledFeatures::orientationEventEnabled())
    , m_forceOverlayFullscreenVideo(RuntimeEnabledFeatures::forceOverlayFullscreenVideoEnabled())
    , m_overlayScrollbars(RuntimeEnabledFeatures::overlayScrollbarsEnabled())
    , m_pagePopup(RuntimeEnabledFeatures::pagePopupEnabled())
    , m_passiveEventListeners(RuntimeEnabledFeatures::passiveEventListenersEnabled())
    , m_passPaintVisualRectToCompositor(RuntimeEnabledFeatures::passPaintVisualRectToCompositorEnabled())
    , m_pathOpsSVGClipping(RuntimeEnabledFeatures::pathOpsSVGClippingEnabled())
    , m_performanceObserver(RuntimeEnabledFeatures::performanceObserverEnabled())
    , m_permissions(RuntimeEnabledFeatures::permissionsEnabled())
    , m_permissionsRequestRevoke(RuntimeEnabledFeatures::permissionsRequestRevokeEnabled())
    , m_pointerEvent(RuntimeEnabledFeatures::pointerEventEnabled())
    , m_preciseMemoryInfo(RuntimeEnabledFeatures::preciseMemoryInfoEnabled())
    , m_prefixedEncryptedMedia(RuntimeEnabledFeatures::prefixedEncryptedMediaEnabled())
    , m_prefixedVideoFullscreen(RuntimeEnabledFeatures::prefixedVideoFullscreenEnabled())
    , m_presentation(RuntimeEnabledFeatures::presentationEnabled())
    , m_presentationReceiver(RuntimeEnabledFeatures::presentationReceiverEnabled())
    , m_promiseRejectionEvent(RuntimeEnabledFeatures::promiseRejectionEventEnabled())
    , m_pushMessaging(RuntimeEnabledFeatures::pushMessagingEnabled())
    , m_pushMessagingData(RuntimeEnabledFeatures::pushMessagingDataEnabled())
    , m_quotaPromise(RuntimeEnabledFeatures::quotaPromiseEnabled())
    , m_reducedReferrerGranularity(RuntimeEnabledFeatures::reducedReferrerGranularityEnabled())
    , m_renderingPipelineThrottling(RuntimeEnabledFeatures::renderingPipelineThrottlingEnabled())
    , m_requestIdleCallback(RuntimeEnabledFeatures::requestIdleCallbackEnabled())
    , m_requestAutocomplete(RuntimeEnabledFeatures::requestAutocompleteEnabled())
    , m_responseConstructedWithReadableStream(RuntimeEnabledFeatures::responseConstructedWithReadableStreamEnabled())
    , m_restrictIFramePermissions(RuntimeEnabledFeatures::restrictIFramePermissionsEnabled())
    , m_sandboxBlocksModals(RuntimeEnabledFeatures::sandboxBlocksModalsEnabled())
    , m_screenOrientation(RuntimeEnabledFeatures::screenOrientationEnabled())
    , m_scriptedSpeech(RuntimeEnabledFeatures::scriptedSpeechEnabled())
    , m_scrollTopLeftInterop(RuntimeEnabledFeatures::scrollTopLeftInteropEnabled())
    , m_selectionForComposedTree(RuntimeEnabledFeatures::selectionForComposedTreeEnabled())
    , m_serviceWorkerClientAttributes(RuntimeEnabledFeatures::serviceWorkerClientAttributesEnabled())
    , m_serviceWorkerExtendableMessageEvent(RuntimeEnabledFeatures::serviceWorkerExtendableMessageEventEnabled())
    , m_serviceWorkerPerformanceTimeline(RuntimeEnabledFeatures::serviceWorkerPerformanceTimelineEnabled())
    , m_serviceWorkerWindowClientNavigate(RuntimeEnabledFeatures::serviceWorkerWindowClientNavigateEnabled())
    , m_shadowDOMV1(RuntimeEnabledFeatures::shadowDOMV1Enabled())
    , m_shadowRootDelegatesFocus(RuntimeEnabledFeatures::shadowRootDelegatesFocusEnabled())
    , m_sharedArrayBuffer(RuntimeEnabledFeatures::sharedArrayBufferEnabled())
    , m_sharedWorker(RuntimeEnabledFeatures::sharedWorkerEnabled())
    , m_slimmingPaintV2(RuntimeEnabledFeatures::slimmingPaintV2Enabled())
    , m_slimmingPaintOffsetCaching(RuntimeEnabledFeatures::slimmingPaintOffsetCachingEnabled())
    , m_slimmingPaintStrictCullRectClipping(RuntimeEnabledFeatures::slimmingPaintStrictCullRectClippingEnabled())
    , m_slimmingPaintUnderInvalidationChecking(RuntimeEnabledFeatures::slimmingPaintUnderInvalidationCheckingEnabled())
    , m_stackedCSSPropertyAnimations(RuntimeEnabledFeatures::stackedCSSPropertyAnimationsEnabled())
    , m_styleSharing(RuntimeEnabledFeatures::styleSharingEnabled())
    , m_styleMatchedPropertiesCache(RuntimeEnabledFeatures::styleMatchedPropertiesCacheEnabled())
    , m_experimentalStream(RuntimeEnabledFeatures::experimentalStreamEnabled())
    , m_referrerPolicyAttribute(RuntimeEnabledFeatures::referrerPolicyAttributeEnabled())
    , m_suborigins(RuntimeEnabledFeatures::suboriginsEnabled())
    , m_threadedParserDataReceiver(RuntimeEnabledFeatures::threadedParserDataReceiverEnabled())
    , m_touch(RuntimeEnabledFeatures::touchEnabled())
    , m_trustedEvents(RuntimeEnabledFeatures::trustedEventsEnabled())
    , m_trustedEventsDefaultAction(RuntimeEnabledFeatures::trustedEventsDefaultActionEnabled())
    , m_unsafeES3APIs(RuntimeEnabledFeatures::unsafeES3APIsEnabled())
    , m_unsandboxedAuxiliary(RuntimeEnabledFeatures::unsandboxedAuxiliaryEnabled())
    , m_userSelectAll(RuntimeEnabledFeatures::userSelectAllEnabled())
    , m_webAnimationsAPI(RuntimeEnabledFeatures::webAnimationsAPIEnabled())
    , m_webAnimationsSVG(RuntimeEnabledFeatures::webAnimationsSVGEnabled())
    , m_webAudio(RuntimeEnabledFeatures::webAudioEnabled())
    , m_webBluetooth(RuntimeEnabledFeatures::webBluetoothEnabled())
    , m_webGLDraftExtensions(RuntimeEnabledFeatures::webGLDraftExtensionsEnabled())
    , m_webGLImageChromium(RuntimeEnabledFeatures::webGLImageChromiumEnabled())
    , m_webUSB(RuntimeEnabledFeatures::webUSBEnabled())
    , m_webVR(RuntimeEnabledFeatures::webVREnabled())
    , m_webVTTRegions(RuntimeEnabledFeatures::webVTTRegionsEnabled())
    , m_v8IdleTasks(RuntimeEnabledFeatures::v8IdleTasksEnabled())
    , m_xslt(RuntimeEnabledFeatures::xsltEnabled())
    , m_smil(RuntimeEnabledFeatures::smilEnabled())
    , m_scrollCustomization(RuntimeEnabledFeatures::scrollCustomizationEnabled())
    , m_scrollRestoration(RuntimeEnabledFeatures::scrollRestorationEnabled())
    , m_wakeLock(RuntimeEnabledFeatures::wakeLockEnabled())
    , m_webFontsIntervention(RuntimeEnabledFeatures::webFontsInterventionEnabled())
    , m_worklet(RuntimeEnabledFeatures::workletEnabled())
{
}

void RuntimeEnabledFeatures::Backup::restore()
{
    RuntimeEnabledFeatures::setAppBannerEnabled(m_appBanner);
    RuntimeEnabledFeatures::setAlwaysUseComplexTextEnabled(m_alwaysUseComplexText);
    RuntimeEnabledFeatures::setApplicationCacheEnabled(m_applicationCache);
    RuntimeEnabledFeatures::setAudioOutputDevicesEnabled(m_audioOutputDevices);
    RuntimeEnabledFeatures::setAudioVideoTracksEnabled(m_audioVideoTracks);
    RuntimeEnabledFeatures::setAuthorShadowDOMForAnyElementEnabled(m_authorShadowDOMForAnyElement);
    RuntimeEnabledFeatures::setBackgroundSyncEnabled(m_backgroundSync);
    RuntimeEnabledFeatures::setBackgroundSyncV2Enabled(m_backgroundSyncV2);
    RuntimeEnabledFeatures::setCacheStorageMatchAllEnabled(m_cacheStorageMatchAll);
    RuntimeEnabledFeatures::setClientHintsEnabled(m_clientHints);
    RuntimeEnabledFeatures::setColumnFillEnabled(m_columnFill);
    RuntimeEnabledFeatures::setCompositedSelectionUpdateEnabled(m_compositedSelectionUpdate);
    RuntimeEnabledFeatures::setCompositorWorkerEnabled(m_compositorWorker);
    RuntimeEnabledFeatures::setCompositorAnimationTimelinesEnabled(m_compositorAnimationTimelines);
    RuntimeEnabledFeatures::setContextMenuEnabled(m_contextMenu);
    RuntimeEnabledFeatures::setCredentialManagerEnabled(m_credentialManager);
    RuntimeEnabledFeatures::setCSS3TextEnabled(m_css3Text);
    RuntimeEnabledFeatures::setCSS3TextDecorationsEnabled(m_css3TextDecorations);
    RuntimeEnabledFeatures::setCSSAdditiveAnimationsEnabled(m_cssAdditiveAnimations);
    RuntimeEnabledFeatures::setCSSBackdropFilterEnabled(m_cssBackdropFilter);
    RuntimeEnabledFeatures::setCSSCompositingEnabled(m_cssCompositing);
    RuntimeEnabledFeatures::setCSSContainmentEnabled(m_cssContainment);
    RuntimeEnabledFeatures::setCSSFontDisplayEnabled(m_cssFontDisplay);
    RuntimeEnabledFeatures::setCSSFontSizeAdjustEnabled(m_cssFontSizeAdjust);
    RuntimeEnabledFeatures::setCSSGridLayoutEnabled(m_cssGridLayout);
    RuntimeEnabledFeatures::setCSSIndependentTransformPropertiesEnabled(m_cssIndependentTransformProperties);
    RuntimeEnabledFeatures::setCSSMaskSourceTypeEnabled(m_cssMaskSourceType);
    RuntimeEnabledFeatures::setCSSOMSmoothScrollEnabled(m_cssomSmoothScroll);
    RuntimeEnabledFeatures::setCSSPropertyDEnabled(m_cssPropertyD);
    RuntimeEnabledFeatures::setCSSStickyPositionEnabled(m_cssStickyPosition);
    RuntimeEnabledFeatures::setCSSTouchActionPanDirectionsEnabled(m_cssTouchActionPanDirections);
    RuntimeEnabledFeatures::setCSSTypedOMEnabled(m_cssTypedOM);
    RuntimeEnabledFeatures::setCSSVariablesEnabled(m_cssVariables);
    RuntimeEnabledFeatures::setCSSViewportEnabled(m_cssViewport);
    RuntimeEnabledFeatures::setCSSScrollSnapPointsEnabled(m_cssScrollSnapPoints);
    RuntimeEnabledFeatures::setCustomSchemeHandlerEnabled(m_customSchemeHandler);
    RuntimeEnabledFeatures::setDatabaseEnabled(m_database);
    RuntimeEnabledFeatures::setDecodeToYUVEnabled(m_decodeToYUV);
    RuntimeEnabledFeatures::setDeviceLightEnabled(m_deviceLight);
    RuntimeEnabledFeatures::setDeviceOrientationAbsoluteEnabled(m_deviceOrientationAbsolute);
    RuntimeEnabledFeatures::setDisplayList2dCanvasEnabled(m_displayList2dCanvas);
    RuntimeEnabledFeatures::setDurableStorageEnabled(m_durableStorage);
    RuntimeEnabledFeatures::setForceDisplayList2dCanvasEnabled(m_forceDisplayList2dCanvas);
    RuntimeEnabledFeatures::setEncryptedMediaEnabled(m_encryptedMedia);
    RuntimeEnabledFeatures::setExecCommandInJavaScriptEnabled(m_execCommandInJavaScript);
    RuntimeEnabledFeatures::setComputedAccessibilityInfoEnabled(m_computedAccessibilityInfo);
    RuntimeEnabledFeatures::setEventListenerOptionsEnabled(m_eventListenerOptions);
    RuntimeEnabledFeatures::setExperimentalCanvasFeaturesEnabled(m_experimentalCanvasFeatures);
    RuntimeEnabledFeatures::setExperimentalContentSecurityPolicyFeaturesEnabled(m_experimentalContentSecurityPolicyFeatures);
    RuntimeEnabledFeatures::setExperimentalFrameworkEnabled(m_experimentalFramework);
    RuntimeEnabledFeatures::setExperimentalFrameworkSampleAPIEnabled(m_experimentalFrameworkSampleAPI);
    RuntimeEnabledFeatures::setExperimentalV8ExtrasEnabled(m_experimentalV8Extras);
    RuntimeEnabledFeatures::setFastMobileScrollingEnabled(m_fastMobileScrolling);
    RuntimeEnabledFeatures::setFileAPIBlobCloseEnabled(m_fileAPIBlobClose);
    RuntimeEnabledFeatures::setFileSystemEnabled(m_fileSystem);
    RuntimeEnabledFeatures::setForeignFetchEnabled(m_foreignFetch);
    RuntimeEnabledFeatures::setFormDataNewMethodsEnabled(m_formDataNewMethods);
    RuntimeEnabledFeatures::setFullscreenUnprefixedEnabled(m_fullscreenUnprefixed);
    RuntimeEnabledFeatures::setFrameTimingSupportEnabled(m_frameTimingSupport);
    RuntimeEnabledFeatures::setGeofencingEnabled(m_geofencing);
    RuntimeEnabledFeatures::setGeometryInterfacesEnabled(m_geometryInterfaces);
    RuntimeEnabledFeatures::setGetUserMediaEnabled(m_getUserMedia);
    RuntimeEnabledFeatures::setGlobalCacheStorageEnabled(m_globalCacheStorage);
    RuntimeEnabledFeatures::setHiResEventTimeStampEnabled(m_hiResEventTimeStamp);
    RuntimeEnabledFeatures::setImageColorProfilesEnabled(m_imageColorProfiles);
    RuntimeEnabledFeatures::setImageOrientationEnabled(m_imageOrientation);
    RuntimeEnabledFeatures::setImageRenderingPixelatedEnabled(m_imageRenderingPixelated);
    RuntimeEnabledFeatures::setIndexedDBExperimentalEnabled(m_indexedDBExperimental);
    RuntimeEnabledFeatures::setInputDeviceCapabilitiesEnabled(m_inputDeviceCapabilities);
    RuntimeEnabledFeatures::setInputModeAttributeEnabled(m_inputModeAttribute);
    RuntimeEnabledFeatures::setIntersectionObserverEnabled(m_intersectionObserver);
    RuntimeEnabledFeatures::setIterableCollectionsEnabled(m_iterableCollections);
    RuntimeEnabledFeatures::setKeyboardEventCodeEnabled(m_keyboardEventCode);
    RuntimeEnabledFeatures::setKeyboardEventKeyEnabled(m_keyboardEventKey);
    RuntimeEnabledFeatures::setLangAttributeAwareFormControlUIEnabled(m_langAttributeAwareFormControlUI);
    RuntimeEnabledFeatures::setLinkPreconnectEnabled(m_linkPreconnect);
    RuntimeEnabledFeatures::setLinkPreloadEnabled(m_linkPreload);
    RuntimeEnabledFeatures::setLinkHeaderEnabled(m_linkHeader);
    RuntimeEnabledFeatures::setFractionalScrollOffsetsEnabled(m_fractionalScrollOffsets);
    RuntimeEnabledFeatures::setMediaEnabled(m_media);
    RuntimeEnabledFeatures::setMediaCaptureEnabled(m_mediaCapture);
    RuntimeEnabledFeatures::setMediaCaptureFromElementEnabled(m_mediaCaptureFromElement);
    RuntimeEnabledFeatures::setMediaConstraintsEnabled(m_mediaConstraints);
    RuntimeEnabledFeatures::setMediaDevicesEnabled(m_mediaDevices);
    RuntimeEnabledFeatures::setMediaRecorderEnabled(m_mediaRecorder);
    RuntimeEnabledFeatures::setMediaSessionEnabled(m_mediaSession);
    RuntimeEnabledFeatures::setMediaSourceEnabled(m_mediaSource);
    RuntimeEnabledFeatures::setMediaSourceExperimentalEnabled(m_mediaSourceExperimental);
    RuntimeEnabledFeatures::setMediaStreamSpeechEnabled(m_mediaStreamSpeech);
    RuntimeEnabledFeatures::setMemoryInfoInWorkersEnabled(m_memoryInfoInWorkers);
    RuntimeEnabledFeatures::setNavigatorConnectEnabled(m_navigatorConnect);
    RuntimeEnabledFeatures::setNavigatorContentUtilsEnabled(m_navigatorContentUtils);
    RuntimeEnabledFeatures::setWebNFCEnabled(m_webNFC);
    RuntimeEnabledFeatures::setNetworkInformationEnabled(m_networkInformation);
    RuntimeEnabledFeatures::setNetInfoDownlinkMaxEnabled(m_netInfoDownlinkMax);
    RuntimeEnabledFeatures::setNewMediaPlaybackUiEnabled(m_newMediaPlaybackUi);
    RuntimeEnabledFeatures::setNotificationConstructorEnabled(m_notificationConstructor);
    RuntimeEnabledFeatures::setNotificationExperimentalEnabled(m_notificationExperimental);
    RuntimeEnabledFeatures::setNotificationsEnabled(m_notifications);
    RuntimeEnabledFeatures::setOrientationEventEnabled(m_orientationEvent);
    RuntimeEnabledFeatures::setForceOverlayFullscreenVideoEnabled(m_forceOverlayFullscreenVideo);
    RuntimeEnabledFeatures::setOverlayScrollbarsEnabled(m_overlayScrollbars);
    RuntimeEnabledFeatures::setPagePopupEnabled(m_pagePopup);
    RuntimeEnabledFeatures::setPassiveEventListenersEnabled(m_passiveEventListeners);
    RuntimeEnabledFeatures::setPassPaintVisualRectToCompositorEnabled(m_passPaintVisualRectToCompositor);
    RuntimeEnabledFeatures::setPathOpsSVGClippingEnabled(m_pathOpsSVGClipping);
    RuntimeEnabledFeatures::setPerformanceObserverEnabled(m_performanceObserver);
    RuntimeEnabledFeatures::setPermissionsEnabled(m_permissions);
    RuntimeEnabledFeatures::setPermissionsRequestRevokeEnabled(m_permissionsRequestRevoke);
    RuntimeEnabledFeatures::setPointerEventEnabled(m_pointerEvent);
    RuntimeEnabledFeatures::setPreciseMemoryInfoEnabled(m_preciseMemoryInfo);
    RuntimeEnabledFeatures::setPrefixedEncryptedMediaEnabled(m_prefixedEncryptedMedia);
    RuntimeEnabledFeatures::setPrefixedVideoFullscreenEnabled(m_prefixedVideoFullscreen);
    RuntimeEnabledFeatures::setPresentationEnabled(m_presentation);
    RuntimeEnabledFeatures::setPresentationReceiverEnabled(m_presentationReceiver);
    RuntimeEnabledFeatures::setPromiseRejectionEventEnabled(m_promiseRejectionEvent);
    RuntimeEnabledFeatures::setPushMessagingEnabled(m_pushMessaging);
    RuntimeEnabledFeatures::setPushMessagingDataEnabled(m_pushMessagingData);
    RuntimeEnabledFeatures::setQuotaPromiseEnabled(m_quotaPromise);
    RuntimeEnabledFeatures::setReducedReferrerGranularityEnabled(m_reducedReferrerGranularity);
    RuntimeEnabledFeatures::setRenderingPipelineThrottlingEnabled(m_renderingPipelineThrottling);
    RuntimeEnabledFeatures::setRequestIdleCallbackEnabled(m_requestIdleCallback);
    RuntimeEnabledFeatures::setRequestAutocompleteEnabled(m_requestAutocomplete);
    RuntimeEnabledFeatures::setResponseConstructedWithReadableStreamEnabled(m_responseConstructedWithReadableStream);
    RuntimeEnabledFeatures::setRestrictIFramePermissionsEnabled(m_restrictIFramePermissions);
    RuntimeEnabledFeatures::setSandboxBlocksModalsEnabled(m_sandboxBlocksModals);
    RuntimeEnabledFeatures::setScreenOrientationEnabled(m_screenOrientation);
    RuntimeEnabledFeatures::setScriptedSpeechEnabled(m_scriptedSpeech);
    RuntimeEnabledFeatures::setScrollTopLeftInteropEnabled(m_scrollTopLeftInterop);
    RuntimeEnabledFeatures::setSelectionForComposedTreeEnabled(m_selectionForComposedTree);
    RuntimeEnabledFeatures::setServiceWorkerClientAttributesEnabled(m_serviceWorkerClientAttributes);
    RuntimeEnabledFeatures::setServiceWorkerExtendableMessageEventEnabled(m_serviceWorkerExtendableMessageEvent);
    RuntimeEnabledFeatures::setServiceWorkerPerformanceTimelineEnabled(m_serviceWorkerPerformanceTimeline);
    RuntimeEnabledFeatures::setServiceWorkerWindowClientNavigateEnabled(m_serviceWorkerWindowClientNavigate);
    RuntimeEnabledFeatures::setShadowDOMV1Enabled(m_shadowDOMV1);
    RuntimeEnabledFeatures::setShadowRootDelegatesFocusEnabled(m_shadowRootDelegatesFocus);
    RuntimeEnabledFeatures::setSharedArrayBufferEnabled(m_sharedArrayBuffer);
    RuntimeEnabledFeatures::setSharedWorkerEnabled(m_sharedWorker);
    RuntimeEnabledFeatures::setSlimmingPaintV2Enabled(m_slimmingPaintV2);
    RuntimeEnabledFeatures::setSlimmingPaintOffsetCachingEnabled(m_slimmingPaintOffsetCaching);
    RuntimeEnabledFeatures::setSlimmingPaintStrictCullRectClippingEnabled(m_slimmingPaintStrictCullRectClipping);
    RuntimeEnabledFeatures::setSlimmingPaintUnderInvalidationCheckingEnabled(m_slimmingPaintUnderInvalidationChecking);
    RuntimeEnabledFeatures::setStackedCSSPropertyAnimationsEnabled(m_stackedCSSPropertyAnimations);
    RuntimeEnabledFeatures::setStyleSharingEnabled(m_styleSharing);
    RuntimeEnabledFeatures::setStyleMatchedPropertiesCacheEnabled(m_styleMatchedPropertiesCache);
    RuntimeEnabledFeatures::setExperimentalStreamEnabled(m_experimentalStream);
    RuntimeEnabledFeatures::setReferrerPolicyAttributeEnabled(m_referrerPolicyAttribute);
    RuntimeEnabledFeatures::setSuboriginsEnabled(m_suborigins);
    RuntimeEnabledFeatures::setThreadedParserDataReceiverEnabled(m_threadedParserDataReceiver);
    RuntimeEnabledFeatures::setTouchEnabled(m_touch);
    RuntimeEnabledFeatures::setTrustedEventsEnabled(m_trustedEvents);
    RuntimeEnabledFeatures::setTrustedEventsDefaultActionEnabled(m_trustedEventsDefaultAction);
    RuntimeEnabledFeatures::setUnsafeES3APIsEnabled(m_unsafeES3APIs);
    RuntimeEnabledFeatures::setUnsandboxedAuxiliaryEnabled(m_unsandboxedAuxiliary);
    RuntimeEnabledFeatures::setUserSelectAllEnabled(m_userSelectAll);
    RuntimeEnabledFeatures::setWebAnimationsAPIEnabled(m_webAnimationsAPI);
    RuntimeEnabledFeatures::setWebAnimationsSVGEnabled(m_webAnimationsSVG);
    RuntimeEnabledFeatures::setWebAudioEnabled(m_webAudio);
    RuntimeEnabledFeatures::setWebBluetoothEnabled(m_webBluetooth);
    RuntimeEnabledFeatures::setWebGLDraftExtensionsEnabled(m_webGLDraftExtensions);
    RuntimeEnabledFeatures::setWebGLImageChromiumEnabled(m_webGLImageChromium);
    RuntimeEnabledFeatures::setWebUSBEnabled(m_webUSB);
    RuntimeEnabledFeatures::setWebVREnabled(m_webVR);
    RuntimeEnabledFeatures::setWebVTTRegionsEnabled(m_webVTTRegions);
    RuntimeEnabledFeatures::setV8IdleTasksEnabled(m_v8IdleTasks);
    RuntimeEnabledFeatures::setXSLTEnabled(m_xslt);
    RuntimeEnabledFeatures::setsmilEnabled(m_smil);
    RuntimeEnabledFeatures::setScrollCustomizationEnabled(m_scrollCustomization);
    RuntimeEnabledFeatures::setScrollRestorationEnabled(m_scrollRestoration);
    RuntimeEnabledFeatures::setWakeLockEnabled(m_wakeLock);
    RuntimeEnabledFeatures::setWebFontsInterventionEnabled(m_webFontsIntervention);
    RuntimeEnabledFeatures::setWorkletEnabled(m_worklet);
}

void RuntimeEnabledFeatures::setStableFeaturesEnabled(bool enable)
{
    setAppBannerEnabled(enable);
    setAlwaysUseComplexTextEnabled(enable);
    setApplicationCacheEnabled(enable);
    setAudioOutputDevicesEnabled(enable);
    setBackgroundSyncEnabled(enable);
    setCacheStorageMatchAllEnabled(enable);
    setClientHintsEnabled(enable);
    setCSSCompositingEnabled(enable);
    setCSSVariablesEnabled(enable);
    setDatabaseEnabled(enable);
    setDisplayList2dCanvasEnabled(enable);
    setEncryptedMediaEnabled(enable);
    setEventListenerOptionsEnabled(enable);
    setFileSystemEnabled(enable);
    setGlobalCacheStorageEnabled(enable);
    setHiResEventTimeStampEnabled(enable);
    setImageRenderingPixelatedEnabled(enable);
    setInputDeviceCapabilitiesEnabled(enable);
    setKeyboardEventCodeEnabled(enable);
    setLinkPreconnectEnabled(enable);
    setLinkPreloadEnabled(enable);
    setLinkHeaderEnabled(enable);
    setMediaEnabled(enable);
    setMediaDevicesEnabled(enable);
    setMediaRecorderEnabled(enable);
    setMediaSourceEnabled(enable);
    setNetworkInformationEnabled(enable);
    setNetInfoDownlinkMaxEnabled(enable);
    setNotificationConstructorEnabled(enable);
    setNotificationsEnabled(enable);
    setPagePopupEnabled(enable);
    setPathOpsSVGClippingEnabled(enable);
    setPermissionsEnabled(enable);
    setPrefixedVideoFullscreenEnabled(enable);
    setPresentationEnabled(enable);
    setPromiseRejectionEventEnabled(enable);
    setPushMessagingEnabled(enable);
    setRequestIdleCallbackEnabled(enable);
    setSandboxBlocksModalsEnabled(enable);
    setScreenOrientationEnabled(enable);
    setScriptedSpeechEnabled(enable);
    setSelectionForComposedTreeEnabled(enable);
    setServiceWorkerClientAttributesEnabled(enable);
    setServiceWorkerPerformanceTimelineEnabled(enable);
    setServiceWorkerWindowClientNavigateEnabled(enable);
    setSharedWorkerEnabled(enable);
    setStyleSharingEnabled(enable);
    setStyleMatchedPropertiesCacheEnabled(enable);
    setTouchEnabled(enable);
    setTrustedEventsEnabled(enable);
    setUnsandboxedAuxiliaryEnabled(enable);
    setWebAudioEnabled(enable);
    setXSLTEnabled(enable);
    setsmilEnabled(enable);
    setScrollRestorationEnabled(enable);
}

void RuntimeEnabledFeatures::setExperimentalFeaturesEnabled(bool enable)
{
    setAudioVideoTracksEnabled(enable);
    setBackgroundSyncV2Enabled(enable);
    setColumnFillEnabled(enable);
    setCompositorWorkerEnabled(enable);
    setContextMenuEnabled(enable);
    setCSS3TextEnabled(enable);
    setCSS3TextDecorationsEnabled(enable);
    setCSSAdditiveAnimationsEnabled(enable);
    setCSSBackdropFilterEnabled(enable);
    setCSSContainmentEnabled(enable);
    setCSSFontDisplayEnabled(enable);
    setCSSFontSizeAdjustEnabled(enable);
    setCSSGridLayoutEnabled(enable);
    setCSSIndependentTransformPropertiesEnabled(enable);
    setCSSMaskSourceTypeEnabled(enable);
    setCSSOMSmoothScrollEnabled(enable);
    setCSSPropertyDEnabled(enable);
    setCSSTouchActionPanDirectionsEnabled(enable);
    setCSSTypedOMEnabled(enable);
    setCSSViewportEnabled(enable);
    setCustomSchemeHandlerEnabled(enable);
    setDecodeToYUVEnabled(enable);
    setDeviceLightEnabled(enable);
    setDeviceOrientationAbsoluteEnabled(enable);
    setDurableStorageEnabled(enable);
    setComputedAccessibilityInfoEnabled(enable);
    setExperimentalContentSecurityPolicyFeaturesEnabled(enable);
    setExperimentalV8ExtrasEnabled(enable);
    setFileAPIBlobCloseEnabled(enable);
    setForeignFetchEnabled(enable);
    setFormDataNewMethodsEnabled(enable);
    setFrameTimingSupportEnabled(enable);
    setGeofencingEnabled(enable);
    setGetUserMediaEnabled(enable);
    setIndexedDBExperimentalEnabled(enable);
    setInputModeAttributeEnabled(enable);
    setIntersectionObserverEnabled(enable);
    setIterableCollectionsEnabled(enable);
    setKeyboardEventKeyEnabled(enable);
    setFractionalScrollOffsetsEnabled(enable);
    setMediaCaptureFromElementEnabled(enable);
    setMediaSourceExperimentalEnabled(enable);
    setMediaStreamSpeechEnabled(enable);
    setMemoryInfoInWorkersEnabled(enable);
    setNavigatorConnectEnabled(enable);
    setWebNFCEnabled(enable);
    setPassiveEventListenersEnabled(enable);
    setPerformanceObserverEnabled(enable);
    setPermissionsRequestRevokeEnabled(enable);
    setPushMessagingDataEnabled(enable);
    setQuotaPromiseEnabled(enable);
    setRenderingPipelineThrottlingEnabled(enable);
    setResponseConstructedWithReadableStreamEnabled(enable);
    setScrollTopLeftInteropEnabled(enable);
    setServiceWorkerExtendableMessageEventEnabled(enable);
    setShadowDOMV1Enabled(enable);
    setShadowRootDelegatesFocusEnabled(enable);
    setStackedCSSPropertyAnimationsEnabled(enable);
    setExperimentalStreamEnabled(enable);
    setReferrerPolicyAttributeEnabled(enable);
    setSuboriginsEnabled(enable);
    setUserSelectAllEnabled(enable);
    setWebAnimationsAPIEnabled(enable);
    setWebAnimationsSVGEnabled(enable);
    setWebGLDraftExtensionsEnabled(enable);
    setWebUSBEnabled(enable);
    setWebVTTRegionsEnabled(enable);
    setWakeLockEnabled(enable);
    setWebFontsInterventionEnabled(enable);
}

void RuntimeEnabledFeatures::setTestFeaturesEnabled(bool enable)
{
    setCredentialManagerEnabled(enable);
    setCSSScrollSnapPointsEnabled(enable);
    setExecCommandInJavaScriptEnabled(enable);
    setExperimentalCanvasFeaturesEnabled(enable);
    setExperimentalFrameworkEnabled(enable);
    setFullscreenUnprefixedEnabled(enable);
    setGeometryInterfacesEnabled(enable);
    setImageOrientationEnabled(enable);
    setMediaConstraintsEnabled(enable);
    setNotificationExperimentalEnabled(enable);
    setPrefixedEncryptedMediaEnabled(enable);
    setPresentationReceiverEnabled(enable);
    setRequestAutocompleteEnabled(enable);
    setWebVREnabled(enable);
}


void RuntimeEnabledFeatures::setFeatureEnabledFromString(const std::string& name, bool isEnabled)
{
    if (caseInsensitiveEqual(name, "AppBanner")) {
        setAppBannerEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "AlwaysUseComplexText")) {
        setAlwaysUseComplexTextEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ApplicationCache")) {
        setApplicationCacheEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "AudioOutputDevices")) {
        setAudioOutputDevicesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "AudioVideoTracks")) {
        setAudioVideoTracksEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "AuthorShadowDOMForAnyElement")) {
        setAuthorShadowDOMForAnyElementEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "BackgroundSync")) {
        setBackgroundSyncEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "BackgroundSyncV2")) {
        setBackgroundSyncV2Enabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CacheStorageMatchAll")) {
        setCacheStorageMatchAllEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ClientHints")) {
        setClientHintsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ColumnFill")) {
        setColumnFillEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CompositedSelectionUpdate")) {
        setCompositedSelectionUpdateEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CompositorWorker")) {
        setCompositorWorkerEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CompositorAnimationTimelines")) {
        setCompositorAnimationTimelinesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ContextMenu")) {
        setContextMenuEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CredentialManager")) {
        setCredentialManagerEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSS3Text")) {
        setCSS3TextEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSS3TextDecorations")) {
        setCSS3TextDecorationsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSAdditiveAnimations")) {
        setCSSAdditiveAnimationsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSBackdropFilter")) {
        setCSSBackdropFilterEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSCompositing")) {
        setCSSCompositingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSContainment")) {
        setCSSContainmentEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSFontDisplay")) {
        setCSSFontDisplayEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSFontSizeAdjust")) {
        setCSSFontSizeAdjustEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSGridLayout")) {
        setCSSGridLayoutEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSIndependentTransformProperties")) {
        setCSSIndependentTransformPropertiesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSMaskSourceType")) {
        setCSSMaskSourceTypeEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSOMSmoothScroll")) {
        setCSSOMSmoothScrollEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSPropertyD")) {
        setCSSPropertyDEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSStickyPosition")) {
        setCSSStickyPositionEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSTouchActionPanDirections")) {
        setCSSTouchActionPanDirectionsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSTypedOM")) {
        setCSSTypedOMEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSVariables")) {
        setCSSVariablesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSViewport")) {
        setCSSViewportEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSScrollSnapPoints")) {
        setCSSScrollSnapPointsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CustomSchemeHandler")) {
        setCustomSchemeHandlerEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Database")) {
        setDatabaseEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "DecodeToYUV")) {
        setDecodeToYUVEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "DeviceLight")) {
        setDeviceLightEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "DeviceOrientationAbsolute")) {
        setDeviceOrientationAbsoluteEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "DisplayList2dCanvas")) {
        setDisplayList2dCanvasEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "DurableStorage")) {
        setDurableStorageEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ForceDisplayList2dCanvas")) {
        setForceDisplayList2dCanvasEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "EncryptedMedia")) {
        setEncryptedMediaEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ExecCommandInJavaScript")) {
        setExecCommandInJavaScriptEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ComputedAccessibilityInfo")) {
        setComputedAccessibilityInfoEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "EventListenerOptions")) {
        setEventListenerOptionsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ExperimentalCanvasFeatures")) {
        setExperimentalCanvasFeaturesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ExperimentalContentSecurityPolicyFeatures")) {
        setExperimentalContentSecurityPolicyFeaturesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ExperimentalFramework")) {
        setExperimentalFrameworkEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ExperimentalFrameworkSampleAPI")) {
        setExperimentalFrameworkSampleAPIEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ExperimentalV8Extras")) {
        setExperimentalV8ExtrasEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "FastMobileScrolling")) {
        setFastMobileScrollingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "FileAPIBlobClose")) {
        setFileAPIBlobCloseEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "FileSystem")) {
        setFileSystemEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ForeignFetch")) {
        setForeignFetchEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "FormDataNewMethods")) {
        setFormDataNewMethodsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "FullscreenUnprefixed")) {
        setFullscreenUnprefixedEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "FrameTimingSupport")) {
        setFrameTimingSupportEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Geofencing")) {
        setGeofencingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "GeometryInterfaces")) {
        setGeometryInterfacesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "GetUserMedia")) {
        setGetUserMediaEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "GlobalCacheStorage")) {
        setGlobalCacheStorageEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "HiResEventTimeStamp")) {
        setHiResEventTimeStampEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ImageColorProfiles")) {
        setImageColorProfilesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ImageOrientation")) {
        setImageOrientationEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ImageRenderingPixelated")) {
        setImageRenderingPixelatedEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "IndexedDBExperimental")) {
        setIndexedDBExperimentalEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "InputDeviceCapabilities")) {
        setInputDeviceCapabilitiesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "InputModeAttribute")) {
        setInputModeAttributeEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "IntersectionObserver")) {
        setIntersectionObserverEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "IterableCollections")) {
        setIterableCollectionsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "KeyboardEventCode")) {
        setKeyboardEventCodeEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "KeyboardEventKey")) {
        setKeyboardEventKeyEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "LangAttributeAwareFormControlUI")) {
        setLangAttributeAwareFormControlUIEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "LinkPreconnect")) {
        setLinkPreconnectEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "LinkPreload")) {
        setLinkPreloadEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "LinkHeader")) {
        setLinkHeaderEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "FractionalScrollOffsets")) {
        setFractionalScrollOffsetsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Media")) {
        setMediaEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MediaCapture")) {
        setMediaCaptureEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MediaCaptureFromElement")) {
        setMediaCaptureFromElementEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MediaConstraints")) {
        setMediaConstraintsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MediaDevices")) {
        setMediaDevicesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MediaRecorder")) {
        setMediaRecorderEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MediaSession")) {
        setMediaSessionEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MediaSource")) {
        setMediaSourceEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MediaSourceExperimental")) {
        setMediaSourceExperimentalEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MediaStreamSpeech")) {
        setMediaStreamSpeechEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MemoryInfoInWorkers")) {
        setMemoryInfoInWorkersEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "NavigatorConnect")) {
        setNavigatorConnectEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "NavigatorContentUtils")) {
        setNavigatorContentUtilsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebNFC")) {
        setWebNFCEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "NetworkInformation")) {
        setNetworkInformationEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "NetInfoDownlinkMax")) {
        setNetInfoDownlinkMaxEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "NewMediaPlaybackUi")) {
        setNewMediaPlaybackUiEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "NotificationConstructor")) {
        setNotificationConstructorEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "NotificationExperimental")) {
        setNotificationExperimentalEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Notifications")) {
        setNotificationsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "OrientationEvent")) {
        setOrientationEventEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ForceOverlayFullscreenVideo")) {
        setForceOverlayFullscreenVideoEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "OverlayScrollbars")) {
        setOverlayScrollbarsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PagePopup")) {
        setPagePopupEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PassiveEventListeners")) {
        setPassiveEventListenersEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PassPaintVisualRectToCompositor")) {
        setPassPaintVisualRectToCompositorEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PathOpsSVGClipping")) {
        setPathOpsSVGClippingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PerformanceObserver")) {
        setPerformanceObserverEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Permissions")) {
        setPermissionsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PermissionsRequestRevoke")) {
        setPermissionsRequestRevokeEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PointerEvent")) {
        setPointerEventEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PreciseMemoryInfo")) {
        setPreciseMemoryInfoEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PrefixedEncryptedMedia")) {
        setPrefixedEncryptedMediaEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PrefixedVideoFullscreen")) {
        setPrefixedVideoFullscreenEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Presentation")) {
        setPresentationEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PresentationReceiver")) {
        setPresentationReceiverEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PromiseRejectionEvent")) {
        setPromiseRejectionEventEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PushMessaging")) {
        setPushMessagingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PushMessagingData")) {
        setPushMessagingDataEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "QuotaPromise")) {
        setQuotaPromiseEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ReducedReferrerGranularity")) {
        setReducedReferrerGranularityEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "RenderingPipelineThrottling")) {
        setRenderingPipelineThrottlingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "RequestIdleCallback")) {
        setRequestIdleCallbackEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "RequestAutocomplete")) {
        setRequestAutocompleteEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ResponseConstructedWithReadableStream")) {
        setResponseConstructedWithReadableStreamEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "RestrictIFramePermissions")) {
        setRestrictIFramePermissionsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "SandboxBlocksModals")) {
        setSandboxBlocksModalsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ScreenOrientation")) {
        setScreenOrientationEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ScriptedSpeech")) {
        setScriptedSpeechEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ScrollTopLeftInterop")) {
        setScrollTopLeftInteropEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "SelectionForComposedTree")) {
        setSelectionForComposedTreeEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ServiceWorkerClientAttributes")) {
        setServiceWorkerClientAttributesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ServiceWorkerExtendableMessageEvent")) {
        setServiceWorkerExtendableMessageEventEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ServiceWorkerPerformanceTimeline")) {
        setServiceWorkerPerformanceTimelineEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ServiceWorkerWindowClientNavigate")) {
        setServiceWorkerWindowClientNavigateEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ShadowDOMV1")) {
        setShadowDOMV1Enabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ShadowRootDelegatesFocus")) {
        setShadowRootDelegatesFocusEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "SharedArrayBuffer")) {
        setSharedArrayBufferEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "SharedWorker")) {
        setSharedWorkerEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "SlimmingPaintV2")) {
        setSlimmingPaintV2Enabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "SlimmingPaintOffsetCaching")) {
        setSlimmingPaintOffsetCachingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "SlimmingPaintStrictCullRectClipping")) {
        setSlimmingPaintStrictCullRectClippingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "SlimmingPaintUnderInvalidationChecking")) {
        setSlimmingPaintUnderInvalidationCheckingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "StackedCSSPropertyAnimations")) {
        setStackedCSSPropertyAnimationsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "StyleSharing")) {
        setStyleSharingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "StyleMatchedPropertiesCache")) {
        setStyleMatchedPropertiesCacheEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ExperimentalStream")) {
        setExperimentalStreamEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ReferrerPolicyAttribute")) {
        setReferrerPolicyAttributeEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Suborigins")) {
        setSuboriginsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ThreadedParserDataReceiver")) {
        setThreadedParserDataReceiverEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Touch")) {
        setTouchEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "TrustedEvents")) {
        setTrustedEventsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "TrustedEventsDefaultAction")) {
        setTrustedEventsDefaultActionEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "UnsafeES3APIs")) {
        setUnsafeES3APIsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "UnsandboxedAuxiliary")) {
        setUnsandboxedAuxiliaryEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "UserSelectAll")) {
        setUserSelectAllEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebAnimationsAPI")) {
        setWebAnimationsAPIEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebAnimationsSVG")) {
        setWebAnimationsSVGEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebAudio")) {
        setWebAudioEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebBluetooth")) {
        setWebBluetoothEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebGLDraftExtensions")) {
        setWebGLDraftExtensionsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebGLImageChromium")) {
        setWebGLImageChromiumEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebUSB")) {
        setWebUSBEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebVR")) {
        setWebVREnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebVTTRegions")) {
        setWebVTTRegionsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "V8IdleTasks")) {
        setV8IdleTasksEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "XSLT")) {
        setXSLTEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "smil")) {
        setsmilEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ScrollCustomization")) {
        setScrollCustomizationEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ScrollRestoration")) {
        setScrollRestorationEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WakeLock")) {
        setWakeLockEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebFontsIntervention")) {
        setWebFontsInterventionEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Worklet")) {
        setWorkletEnabled(isEnabled);
        return;
    }
    WTF_LOG_ERROR("RuntimeEnabledFeature not recognized: %s", name.c_str());
}

bool RuntimeEnabledFeatures::isAppBannerEnabled = true;
bool RuntimeEnabledFeatures::isAlwaysUseComplexTextEnabled = true;
bool RuntimeEnabledFeatures::isApplicationCacheEnabled = true;
bool RuntimeEnabledFeatures::isAudioOutputDevicesEnabled = true;
bool RuntimeEnabledFeatures::isAudioVideoTracksEnabled = false;
bool RuntimeEnabledFeatures::isAuthorShadowDOMForAnyElementEnabled = false;
bool RuntimeEnabledFeatures::isBackgroundSyncEnabled = true;
bool RuntimeEnabledFeatures::isBackgroundSyncV2Enabled = false;
bool RuntimeEnabledFeatures::isCacheStorageMatchAllEnabled = true;
bool RuntimeEnabledFeatures::isClientHintsEnabled = true;
bool RuntimeEnabledFeatures::isColumnFillEnabled = false;
bool RuntimeEnabledFeatures::isCompositedSelectionUpdateEnabled = false;
bool RuntimeEnabledFeatures::isCompositorWorkerEnabled = false;
bool RuntimeEnabledFeatures::isCompositorAnimationTimelinesEnabled = false;
bool RuntimeEnabledFeatures::isContextMenuEnabled = false;
bool RuntimeEnabledFeatures::isCredentialManagerEnabled = false;
bool RuntimeEnabledFeatures::isCSS3TextEnabled = false;
bool RuntimeEnabledFeatures::isCSS3TextDecorationsEnabled = false;
bool RuntimeEnabledFeatures::isCSSAdditiveAnimationsEnabled = false;
bool RuntimeEnabledFeatures::isCSSBackdropFilterEnabled = false;
bool RuntimeEnabledFeatures::isCSSCompositingEnabled = true;
bool RuntimeEnabledFeatures::isCSSContainmentEnabled = false;
bool RuntimeEnabledFeatures::isCSSFontDisplayEnabled = false;
bool RuntimeEnabledFeatures::isCSSFontSizeAdjustEnabled = false;
bool RuntimeEnabledFeatures::isCSSGridLayoutEnabled = false;
bool RuntimeEnabledFeatures::isCSSIndependentTransformPropertiesEnabled = false;
bool RuntimeEnabledFeatures::isCSSMaskSourceTypeEnabled = false;
bool RuntimeEnabledFeatures::isCSSOMSmoothScrollEnabled = false;
bool RuntimeEnabledFeatures::isCSSPropertyDEnabled = false;
bool RuntimeEnabledFeatures::isCSSStickyPositionEnabled = false;
bool RuntimeEnabledFeatures::isCSSTouchActionPanDirectionsEnabled = false;
bool RuntimeEnabledFeatures::isCSSTypedOMEnabled = false;
bool RuntimeEnabledFeatures::isCSSVariablesEnabled = true;
bool RuntimeEnabledFeatures::isCSSViewportEnabled = false;
bool RuntimeEnabledFeatures::isCSSScrollSnapPointsEnabled = false;
bool RuntimeEnabledFeatures::isCustomSchemeHandlerEnabled = false;
bool RuntimeEnabledFeatures::isDatabaseEnabled = true;
bool RuntimeEnabledFeatures::isDecodeToYUVEnabled = false;
bool RuntimeEnabledFeatures::isDeviceLightEnabled = false;
bool RuntimeEnabledFeatures::isDeviceOrientationAbsoluteEnabled = false;
bool RuntimeEnabledFeatures::isDisplayList2dCanvasEnabled = true;
bool RuntimeEnabledFeatures::isDurableStorageEnabled = false;
bool RuntimeEnabledFeatures::isForceDisplayList2dCanvasEnabled = false;
bool RuntimeEnabledFeatures::isEncryptedMediaEnabled = true;
bool RuntimeEnabledFeatures::isExecCommandInJavaScriptEnabled = false;
bool RuntimeEnabledFeatures::isComputedAccessibilityInfoEnabled = false;
bool RuntimeEnabledFeatures::isEventListenerOptionsEnabled = true;
bool RuntimeEnabledFeatures::isExperimentalCanvasFeaturesEnabled = false;
bool RuntimeEnabledFeatures::isExperimentalContentSecurityPolicyFeaturesEnabled = false;
bool RuntimeEnabledFeatures::isExperimentalFrameworkEnabled = false;
bool RuntimeEnabledFeatures::isExperimentalFrameworkSampleAPIEnabled = false;
bool RuntimeEnabledFeatures::isExperimentalV8ExtrasEnabled = false;
bool RuntimeEnabledFeatures::isFastMobileScrollingEnabled = false;
bool RuntimeEnabledFeatures::isFileAPIBlobCloseEnabled = false;
bool RuntimeEnabledFeatures::isFileSystemEnabled = true;
bool RuntimeEnabledFeatures::isForeignFetchEnabled = false;
bool RuntimeEnabledFeatures::isFormDataNewMethodsEnabled = false;
bool RuntimeEnabledFeatures::isFullscreenUnprefixedEnabled = false;
bool RuntimeEnabledFeatures::isFrameTimingSupportEnabled = false;
bool RuntimeEnabledFeatures::isGeofencingEnabled = false;
bool RuntimeEnabledFeatures::isGeometryInterfacesEnabled = false;
bool RuntimeEnabledFeatures::isGetUserMediaEnabled = false;
bool RuntimeEnabledFeatures::isGlobalCacheStorageEnabled = true;
bool RuntimeEnabledFeatures::isHiResEventTimeStampEnabled = true;
bool RuntimeEnabledFeatures::isImageColorProfilesEnabled = false;
bool RuntimeEnabledFeatures::isImageOrientationEnabled = false;
bool RuntimeEnabledFeatures::isImageRenderingPixelatedEnabled = true;
bool RuntimeEnabledFeatures::isIndexedDBExperimentalEnabled = false;
bool RuntimeEnabledFeatures::isInputDeviceCapabilitiesEnabled = true;
bool RuntimeEnabledFeatures::isInputModeAttributeEnabled = false;
bool RuntimeEnabledFeatures::isIntersectionObserverEnabled = false;
bool RuntimeEnabledFeatures::isIterableCollectionsEnabled = false;
bool RuntimeEnabledFeatures::isKeyboardEventCodeEnabled = true;
bool RuntimeEnabledFeatures::isKeyboardEventKeyEnabled = false;
bool RuntimeEnabledFeatures::isLangAttributeAwareFormControlUIEnabled = false;
bool RuntimeEnabledFeatures::isLinkPreconnectEnabled = true;
bool RuntimeEnabledFeatures::isLinkPreloadEnabled = true;
bool RuntimeEnabledFeatures::isLinkHeaderEnabled = true;
bool RuntimeEnabledFeatures::isFractionalScrollOffsetsEnabled = false;
bool RuntimeEnabledFeatures::isMediaEnabled = true;
bool RuntimeEnabledFeatures::isMediaCaptureEnabled = false;
bool RuntimeEnabledFeatures::isMediaCaptureFromElementEnabled = false;
bool RuntimeEnabledFeatures::isMediaConstraintsEnabled = false;
bool RuntimeEnabledFeatures::isMediaDevicesEnabled = true;
bool RuntimeEnabledFeatures::isMediaRecorderEnabled = true;
bool RuntimeEnabledFeatures::isMediaSessionEnabled = false;
bool RuntimeEnabledFeatures::isMediaSourceEnabled = true;
bool RuntimeEnabledFeatures::isMediaSourceExperimentalEnabled = false;
bool RuntimeEnabledFeatures::isMediaStreamSpeechEnabled = false;
bool RuntimeEnabledFeatures::isMemoryInfoInWorkersEnabled = false;
bool RuntimeEnabledFeatures::isNavigatorConnectEnabled = false;
bool RuntimeEnabledFeatures::isNavigatorContentUtilsEnabled = false;
bool RuntimeEnabledFeatures::isWebNFCEnabled = false;
bool RuntimeEnabledFeatures::isNetworkInformationEnabled = true;
bool RuntimeEnabledFeatures::isNetInfoDownlinkMaxEnabled = true;
bool RuntimeEnabledFeatures::isNewMediaPlaybackUiEnabled = false;
bool RuntimeEnabledFeatures::isNotificationConstructorEnabled = true;
bool RuntimeEnabledFeatures::isNotificationExperimentalEnabled = false;
bool RuntimeEnabledFeatures::isNotificationsEnabled = true;
bool RuntimeEnabledFeatures::isOrientationEventEnabled = false;
bool RuntimeEnabledFeatures::isForceOverlayFullscreenVideoEnabled = false;
bool RuntimeEnabledFeatures::isOverlayScrollbarsEnabled = false;
bool RuntimeEnabledFeatures::isPagePopupEnabled = true;
bool RuntimeEnabledFeatures::isPassiveEventListenersEnabled = false;
bool RuntimeEnabledFeatures::isPassPaintVisualRectToCompositorEnabled = false;
bool RuntimeEnabledFeatures::isPathOpsSVGClippingEnabled = true;
bool RuntimeEnabledFeatures::isPerformanceObserverEnabled = false;
bool RuntimeEnabledFeatures::isPermissionsEnabled = true;
bool RuntimeEnabledFeatures::isPermissionsRequestRevokeEnabled = false;
bool RuntimeEnabledFeatures::isPointerEventEnabled = false;
bool RuntimeEnabledFeatures::isPreciseMemoryInfoEnabled = false;
bool RuntimeEnabledFeatures::isPrefixedEncryptedMediaEnabled = false;
bool RuntimeEnabledFeatures::isPrefixedVideoFullscreenEnabled = true;
bool RuntimeEnabledFeatures::isPresentationEnabled = true;
bool RuntimeEnabledFeatures::isPresentationReceiverEnabled = false;
bool RuntimeEnabledFeatures::isPromiseRejectionEventEnabled = true;
bool RuntimeEnabledFeatures::isPushMessagingEnabled = true;
bool RuntimeEnabledFeatures::isPushMessagingDataEnabled = false;
bool RuntimeEnabledFeatures::isQuotaPromiseEnabled = false;
bool RuntimeEnabledFeatures::isReducedReferrerGranularityEnabled = false;
bool RuntimeEnabledFeatures::isRenderingPipelineThrottlingEnabled = false;
bool RuntimeEnabledFeatures::isRequestIdleCallbackEnabled = true;
bool RuntimeEnabledFeatures::isRequestAutocompleteEnabled = false;
bool RuntimeEnabledFeatures::isResponseConstructedWithReadableStreamEnabled = false;
bool RuntimeEnabledFeatures::isRestrictIFramePermissionsEnabled = false;
bool RuntimeEnabledFeatures::isSandboxBlocksModalsEnabled = true;
bool RuntimeEnabledFeatures::isScreenOrientationEnabled = true;
bool RuntimeEnabledFeatures::isScriptedSpeechEnabled = true;
bool RuntimeEnabledFeatures::isScrollTopLeftInteropEnabled = false;
bool RuntimeEnabledFeatures::isSelectionForComposedTreeEnabled = true;
bool RuntimeEnabledFeatures::isServiceWorkerClientAttributesEnabled = true;
bool RuntimeEnabledFeatures::isServiceWorkerExtendableMessageEventEnabled = false;
bool RuntimeEnabledFeatures::isServiceWorkerPerformanceTimelineEnabled = true;
bool RuntimeEnabledFeatures::isServiceWorkerWindowClientNavigateEnabled = true;
bool RuntimeEnabledFeatures::isShadowDOMV1Enabled = false;
bool RuntimeEnabledFeatures::isShadowRootDelegatesFocusEnabled = false;
bool RuntimeEnabledFeatures::isSharedArrayBufferEnabled = false;
bool RuntimeEnabledFeatures::isSharedWorkerEnabled = true;
bool RuntimeEnabledFeatures::isSlimmingPaintV2Enabled = false;
bool RuntimeEnabledFeatures::isSlimmingPaintOffsetCachingEnabled = false;
bool RuntimeEnabledFeatures::isSlimmingPaintStrictCullRectClippingEnabled = false;
bool RuntimeEnabledFeatures::isSlimmingPaintUnderInvalidationCheckingEnabled = false;
bool RuntimeEnabledFeatures::isStackedCSSPropertyAnimationsEnabled = false;
bool RuntimeEnabledFeatures::isStyleSharingEnabled = true;
bool RuntimeEnabledFeatures::isStyleMatchedPropertiesCacheEnabled = true;
bool RuntimeEnabledFeatures::isExperimentalStreamEnabled = false;
bool RuntimeEnabledFeatures::isReferrerPolicyAttributeEnabled = false;
bool RuntimeEnabledFeatures::isSuboriginsEnabled = false;
bool RuntimeEnabledFeatures::isThreadedParserDataReceiverEnabled = false;
bool RuntimeEnabledFeatures::isTouchEnabled = true;
bool RuntimeEnabledFeatures::isTrustedEventsEnabled = true;
bool RuntimeEnabledFeatures::isTrustedEventsDefaultActionEnabled = false;
bool RuntimeEnabledFeatures::isUnsafeES3APIsEnabled = false;
bool RuntimeEnabledFeatures::isUnsandboxedAuxiliaryEnabled = true;
bool RuntimeEnabledFeatures::isUserSelectAllEnabled = false;
bool RuntimeEnabledFeatures::isWebAnimationsAPIEnabled = false;
bool RuntimeEnabledFeatures::isWebAnimationsSVGEnabled = false;
bool RuntimeEnabledFeatures::isWebAudioEnabled = true;
bool RuntimeEnabledFeatures::isWebBluetoothEnabled = false;
bool RuntimeEnabledFeatures::isWebGLDraftExtensionsEnabled = false;
bool RuntimeEnabledFeatures::isWebGLImageChromiumEnabled = false;
bool RuntimeEnabledFeatures::isWebUSBEnabled = false;
bool RuntimeEnabledFeatures::isWebVREnabled = false;
bool RuntimeEnabledFeatures::isWebVTTRegionsEnabled = false;
bool RuntimeEnabledFeatures::isV8IdleTasksEnabled = false;
bool RuntimeEnabledFeatures::isXSLTEnabled = true;
bool RuntimeEnabledFeatures::issmilEnabled = true;
bool RuntimeEnabledFeatures::isScrollCustomizationEnabled = false;
bool RuntimeEnabledFeatures::isScrollRestorationEnabled = true;
bool RuntimeEnabledFeatures::isWakeLockEnabled = false;
bool RuntimeEnabledFeatures::isWebFontsInterventionEnabled = false;
bool RuntimeEnabledFeatures::isWorkletEnabled = false;

} // namespace blink
