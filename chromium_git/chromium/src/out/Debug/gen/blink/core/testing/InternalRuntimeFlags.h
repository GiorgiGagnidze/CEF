// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef InternalRuntimeFlags_h
#define InternalRuntimeFlags_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/heap/Handle.h"
#include "wtf/PassRefPtr.h"
#include "wtf/RefPtr.h"
#include "wtf/RefCounted.h"

namespace blink {

class InternalRuntimeFlags : public GarbageCollected<InternalRuntimeFlags>, public ScriptWrappable {
    DEFINE_WRAPPERTYPEINFO();
public:
    static InternalRuntimeFlags* create()
    {
        return new InternalRuntimeFlags;
    }

    bool appBannerEnabled() { return RuntimeEnabledFeatures::appBannerEnabled(); }
    bool alwaysUseComplexTextEnabled() { return RuntimeEnabledFeatures::alwaysUseComplexTextEnabled(); }
    bool applicationCacheEnabled() { return RuntimeEnabledFeatures::applicationCacheEnabled(); }
    bool audioOutputDevicesEnabled() { return RuntimeEnabledFeatures::audioOutputDevicesEnabled(); }
    bool audioVideoTracksEnabled() { return RuntimeEnabledFeatures::audioVideoTracksEnabled(); }
    bool authorShadowDOMForAnyElementEnabled() { return RuntimeEnabledFeatures::authorShadowDOMForAnyElementEnabled(); }
    bool backgroundSyncEnabled() { return RuntimeEnabledFeatures::backgroundSyncEnabled(); }
    bool backgroundSyncV2Enabled() { return RuntimeEnabledFeatures::backgroundSyncV2Enabled(); }
    bool cacheStorageMatchAllEnabled() { return RuntimeEnabledFeatures::cacheStorageMatchAllEnabled(); }
    bool clientHintsEnabled() { return RuntimeEnabledFeatures::clientHintsEnabled(); }
    bool columnFillEnabled() { return RuntimeEnabledFeatures::columnFillEnabled(); }
    bool compositedSelectionUpdateEnabled() { return RuntimeEnabledFeatures::compositedSelectionUpdateEnabled(); }
    bool compositorWorkerEnabled() { return RuntimeEnabledFeatures::compositorWorkerEnabled(); }
    bool compositorAnimationTimelinesEnabled() { return RuntimeEnabledFeatures::compositorAnimationTimelinesEnabled(); }
    bool contextMenuEnabled() { return RuntimeEnabledFeatures::contextMenuEnabled(); }
    bool credentialManagerEnabled() { return RuntimeEnabledFeatures::credentialManagerEnabled(); }
    bool css3TextEnabled() { return RuntimeEnabledFeatures::css3TextEnabled(); }
    bool css3TextDecorationsEnabled() { return RuntimeEnabledFeatures::css3TextDecorationsEnabled(); }
    bool cssAdditiveAnimationsEnabled() { return RuntimeEnabledFeatures::cssAdditiveAnimationsEnabled(); }
    bool cssBackdropFilterEnabled() { return RuntimeEnabledFeatures::cssBackdropFilterEnabled(); }
    bool cssCompositingEnabled() { return RuntimeEnabledFeatures::cssCompositingEnabled(); }
    bool cssContainmentEnabled() { return RuntimeEnabledFeatures::cssContainmentEnabled(); }
    bool cssFontDisplayEnabled() { return RuntimeEnabledFeatures::cssFontDisplayEnabled(); }
    bool cssFontSizeAdjustEnabled() { return RuntimeEnabledFeatures::cssFontSizeAdjustEnabled(); }
    bool cssGridLayoutEnabled() { return RuntimeEnabledFeatures::cssGridLayoutEnabled(); }
    bool cssIndependentTransformPropertiesEnabled() { return RuntimeEnabledFeatures::cssIndependentTransformPropertiesEnabled(); }
    bool cssMaskSourceTypeEnabled() { return RuntimeEnabledFeatures::cssMaskSourceTypeEnabled(); }
    bool cssomSmoothScrollEnabled() { return RuntimeEnabledFeatures::cssomSmoothScrollEnabled(); }
    bool cssPropertyDEnabled() { return RuntimeEnabledFeatures::cssPropertyDEnabled(); }
    bool cssStickyPositionEnabled() { return RuntimeEnabledFeatures::cssStickyPositionEnabled(); }
    bool cssTouchActionPanDirectionsEnabled() { return RuntimeEnabledFeatures::cssTouchActionPanDirectionsEnabled(); }
    bool cssTypedOMEnabled() { return RuntimeEnabledFeatures::cssTypedOMEnabled(); }
    bool cssVariablesEnabled() { return RuntimeEnabledFeatures::cssVariablesEnabled(); }
    bool cssViewportEnabled() { return RuntimeEnabledFeatures::cssViewportEnabled(); }
    bool cssScrollSnapPointsEnabled() { return RuntimeEnabledFeatures::cssScrollSnapPointsEnabled(); }
    bool customSchemeHandlerEnabled() { return RuntimeEnabledFeatures::customSchemeHandlerEnabled(); }
    bool databaseEnabled() { return RuntimeEnabledFeatures::databaseEnabled(); }
    bool decodeToYUVEnabled() { return RuntimeEnabledFeatures::decodeToYUVEnabled(); }
    bool deviceLightEnabled() { return RuntimeEnabledFeatures::deviceLightEnabled(); }
    bool deviceOrientationAbsoluteEnabled() { return RuntimeEnabledFeatures::deviceOrientationAbsoluteEnabled(); }
    bool displayList2dCanvasEnabled() { return RuntimeEnabledFeatures::displayList2dCanvasEnabled(); }
    bool durableStorageEnabled() { return RuntimeEnabledFeatures::durableStorageEnabled(); }
    bool forceDisplayList2dCanvasEnabled() { return RuntimeEnabledFeatures::forceDisplayList2dCanvasEnabled(); }
    bool encryptedMediaEnabled() { return RuntimeEnabledFeatures::encryptedMediaEnabled(); }
    bool execCommandInJavaScriptEnabled() { return RuntimeEnabledFeatures::execCommandInJavaScriptEnabled(); }
    bool computedAccessibilityInfoEnabled() { return RuntimeEnabledFeatures::computedAccessibilityInfoEnabled(); }
    bool eventListenerOptionsEnabled() { return RuntimeEnabledFeatures::eventListenerOptionsEnabled(); }
    bool experimentalCanvasFeaturesEnabled() { return RuntimeEnabledFeatures::experimentalCanvasFeaturesEnabled(); }
    bool experimentalContentSecurityPolicyFeaturesEnabled() { return RuntimeEnabledFeatures::experimentalContentSecurityPolicyFeaturesEnabled(); }
    bool experimentalFrameworkEnabled() { return RuntimeEnabledFeatures::experimentalFrameworkEnabled(); }
    bool experimentalFrameworkSampleAPIEnabled() { return RuntimeEnabledFeatures::experimentalFrameworkSampleAPIEnabled(); }
    bool experimentalV8ExtrasEnabled() { return RuntimeEnabledFeatures::experimentalV8ExtrasEnabled(); }
    bool fastMobileScrollingEnabled() { return RuntimeEnabledFeatures::fastMobileScrollingEnabled(); }
    bool fileAPIBlobCloseEnabled() { return RuntimeEnabledFeatures::fileAPIBlobCloseEnabled(); }
    bool fileSystemEnabled() { return RuntimeEnabledFeatures::fileSystemEnabled(); }
    bool foreignFetchEnabled() { return RuntimeEnabledFeatures::foreignFetchEnabled(); }
    bool formDataNewMethodsEnabled() { return RuntimeEnabledFeatures::formDataNewMethodsEnabled(); }
    bool fullscreenUnprefixedEnabled() { return RuntimeEnabledFeatures::fullscreenUnprefixedEnabled(); }
    bool frameTimingSupportEnabled() { return RuntimeEnabledFeatures::frameTimingSupportEnabled(); }
    bool geofencingEnabled() { return RuntimeEnabledFeatures::geofencingEnabled(); }
    bool geometryInterfacesEnabled() { return RuntimeEnabledFeatures::geometryInterfacesEnabled(); }
    bool getUserMediaEnabled() { return RuntimeEnabledFeatures::getUserMediaEnabled(); }
    bool globalCacheStorageEnabled() { return RuntimeEnabledFeatures::globalCacheStorageEnabled(); }
    bool hiResEventTimeStampEnabled() { return RuntimeEnabledFeatures::hiResEventTimeStampEnabled(); }
    bool imageColorProfilesEnabled() { return RuntimeEnabledFeatures::imageColorProfilesEnabled(); }
    bool imageOrientationEnabled() { return RuntimeEnabledFeatures::imageOrientationEnabled(); }
    bool imageRenderingPixelatedEnabled() { return RuntimeEnabledFeatures::imageRenderingPixelatedEnabled(); }
    bool indexedDBExperimentalEnabled() { return RuntimeEnabledFeatures::indexedDBExperimentalEnabled(); }
    bool inputDeviceCapabilitiesEnabled() { return RuntimeEnabledFeatures::inputDeviceCapabilitiesEnabled(); }
    bool inputModeAttributeEnabled() { return RuntimeEnabledFeatures::inputModeAttributeEnabled(); }
    bool intersectionObserverEnabled() { return RuntimeEnabledFeatures::intersectionObserverEnabled(); }
    bool iterableCollectionsEnabled() { return RuntimeEnabledFeatures::iterableCollectionsEnabled(); }
    bool keyboardEventCodeEnabled() { return RuntimeEnabledFeatures::keyboardEventCodeEnabled(); }
    bool keyboardEventKeyEnabled() { return RuntimeEnabledFeatures::keyboardEventKeyEnabled(); }
    bool langAttributeAwareFormControlUIEnabled() { return RuntimeEnabledFeatures::langAttributeAwareFormControlUIEnabled(); }
    bool linkPreconnectEnabled() { return RuntimeEnabledFeatures::linkPreconnectEnabled(); }
    bool linkPreloadEnabled() { return RuntimeEnabledFeatures::linkPreloadEnabled(); }
    bool linkHeaderEnabled() { return RuntimeEnabledFeatures::linkHeaderEnabled(); }
    bool fractionalScrollOffsetsEnabled() { return RuntimeEnabledFeatures::fractionalScrollOffsetsEnabled(); }
    bool mediaEnabled() { return RuntimeEnabledFeatures::mediaEnabled(); }
    bool mediaCaptureEnabled() { return RuntimeEnabledFeatures::mediaCaptureEnabled(); }
    bool mediaCaptureFromElementEnabled() { return RuntimeEnabledFeatures::mediaCaptureFromElementEnabled(); }
    bool mediaConstraintsEnabled() { return RuntimeEnabledFeatures::mediaConstraintsEnabled(); }
    bool mediaDevicesEnabled() { return RuntimeEnabledFeatures::mediaDevicesEnabled(); }
    bool mediaRecorderEnabled() { return RuntimeEnabledFeatures::mediaRecorderEnabled(); }
    bool mediaSessionEnabled() { return RuntimeEnabledFeatures::mediaSessionEnabled(); }
    bool mediaSourceEnabled() { return RuntimeEnabledFeatures::mediaSourceEnabled(); }
    bool mediaSourceExperimentalEnabled() { return RuntimeEnabledFeatures::mediaSourceExperimentalEnabled(); }
    bool mediaStreamSpeechEnabled() { return RuntimeEnabledFeatures::mediaStreamSpeechEnabled(); }
    bool memoryInfoInWorkersEnabled() { return RuntimeEnabledFeatures::memoryInfoInWorkersEnabled(); }
    bool navigatorConnectEnabled() { return RuntimeEnabledFeatures::navigatorConnectEnabled(); }
    bool navigatorContentUtilsEnabled() { return RuntimeEnabledFeatures::navigatorContentUtilsEnabled(); }
    bool webNFCEnabled() { return RuntimeEnabledFeatures::webNFCEnabled(); }
    bool networkInformationEnabled() { return RuntimeEnabledFeatures::networkInformationEnabled(); }
    bool netInfoDownlinkMaxEnabled() { return RuntimeEnabledFeatures::netInfoDownlinkMaxEnabled(); }
    bool newMediaPlaybackUiEnabled() { return RuntimeEnabledFeatures::newMediaPlaybackUiEnabled(); }
    bool notificationConstructorEnabled() { return RuntimeEnabledFeatures::notificationConstructorEnabled(); }
    bool notificationExperimentalEnabled() { return RuntimeEnabledFeatures::notificationExperimentalEnabled(); }
    bool notificationsEnabled() { return RuntimeEnabledFeatures::notificationsEnabled(); }
    bool orientationEventEnabled() { return RuntimeEnabledFeatures::orientationEventEnabled(); }
    bool forceOverlayFullscreenVideoEnabled() { return RuntimeEnabledFeatures::forceOverlayFullscreenVideoEnabled(); }
    bool overlayScrollbarsEnabled() { return RuntimeEnabledFeatures::overlayScrollbarsEnabled(); }
    bool pagePopupEnabled() { return RuntimeEnabledFeatures::pagePopupEnabled(); }
    bool passiveEventListenersEnabled() { return RuntimeEnabledFeatures::passiveEventListenersEnabled(); }
    bool passPaintVisualRectToCompositorEnabled() { return RuntimeEnabledFeatures::passPaintVisualRectToCompositorEnabled(); }
    bool pathOpsSVGClippingEnabled() { return RuntimeEnabledFeatures::pathOpsSVGClippingEnabled(); }
    bool performanceObserverEnabled() { return RuntimeEnabledFeatures::performanceObserverEnabled(); }
    bool permissionsEnabled() { return RuntimeEnabledFeatures::permissionsEnabled(); }
    bool permissionsRequestRevokeEnabled() { return RuntimeEnabledFeatures::permissionsRequestRevokeEnabled(); }
    bool pointerEventEnabled() { return RuntimeEnabledFeatures::pointerEventEnabled(); }
    bool preciseMemoryInfoEnabled() { return RuntimeEnabledFeatures::preciseMemoryInfoEnabled(); }
    bool prefixedEncryptedMediaEnabled() { return RuntimeEnabledFeatures::prefixedEncryptedMediaEnabled(); }
    bool prefixedVideoFullscreenEnabled() { return RuntimeEnabledFeatures::prefixedVideoFullscreenEnabled(); }
    bool presentationEnabled() { return RuntimeEnabledFeatures::presentationEnabled(); }
    bool presentationReceiverEnabled() { return RuntimeEnabledFeatures::presentationReceiverEnabled(); }
    bool promiseRejectionEventEnabled() { return RuntimeEnabledFeatures::promiseRejectionEventEnabled(); }
    bool pushMessagingEnabled() { return RuntimeEnabledFeatures::pushMessagingEnabled(); }
    bool pushMessagingDataEnabled() { return RuntimeEnabledFeatures::pushMessagingDataEnabled(); }
    bool quotaPromiseEnabled() { return RuntimeEnabledFeatures::quotaPromiseEnabled(); }
    bool reducedReferrerGranularityEnabled() { return RuntimeEnabledFeatures::reducedReferrerGranularityEnabled(); }
    bool renderingPipelineThrottlingEnabled() { return RuntimeEnabledFeatures::renderingPipelineThrottlingEnabled(); }
    bool requestIdleCallbackEnabled() { return RuntimeEnabledFeatures::requestIdleCallbackEnabled(); }
    bool requestAutocompleteEnabled() { return RuntimeEnabledFeatures::requestAutocompleteEnabled(); }
    bool responseConstructedWithReadableStreamEnabled() { return RuntimeEnabledFeatures::responseConstructedWithReadableStreamEnabled(); }
    bool restrictIFramePermissionsEnabled() { return RuntimeEnabledFeatures::restrictIFramePermissionsEnabled(); }
    bool sandboxBlocksModalsEnabled() { return RuntimeEnabledFeatures::sandboxBlocksModalsEnabled(); }
    bool screenOrientationEnabled() { return RuntimeEnabledFeatures::screenOrientationEnabled(); }
    bool scriptedSpeechEnabled() { return RuntimeEnabledFeatures::scriptedSpeechEnabled(); }
    bool scrollTopLeftInteropEnabled() { return RuntimeEnabledFeatures::scrollTopLeftInteropEnabled(); }
    bool selectionForComposedTreeEnabled() { return RuntimeEnabledFeatures::selectionForComposedTreeEnabled(); }
    bool serviceWorkerClientAttributesEnabled() { return RuntimeEnabledFeatures::serviceWorkerClientAttributesEnabled(); }
    bool serviceWorkerExtendableMessageEventEnabled() { return RuntimeEnabledFeatures::serviceWorkerExtendableMessageEventEnabled(); }
    bool serviceWorkerPerformanceTimelineEnabled() { return RuntimeEnabledFeatures::serviceWorkerPerformanceTimelineEnabled(); }
    bool serviceWorkerWindowClientNavigateEnabled() { return RuntimeEnabledFeatures::serviceWorkerWindowClientNavigateEnabled(); }
    bool shadowDOMV1Enabled() { return RuntimeEnabledFeatures::shadowDOMV1Enabled(); }
    bool shadowRootDelegatesFocusEnabled() { return RuntimeEnabledFeatures::shadowRootDelegatesFocusEnabled(); }
    bool sharedArrayBufferEnabled() { return RuntimeEnabledFeatures::sharedArrayBufferEnabled(); }
    bool sharedWorkerEnabled() { return RuntimeEnabledFeatures::sharedWorkerEnabled(); }
    bool slimmingPaintV2Enabled() { return RuntimeEnabledFeatures::slimmingPaintV2Enabled(); }
    bool slimmingPaintOffsetCachingEnabled() { return RuntimeEnabledFeatures::slimmingPaintOffsetCachingEnabled(); }
    bool slimmingPaintStrictCullRectClippingEnabled() { return RuntimeEnabledFeatures::slimmingPaintStrictCullRectClippingEnabled(); }
    bool slimmingPaintUnderInvalidationCheckingEnabled() { return RuntimeEnabledFeatures::slimmingPaintUnderInvalidationCheckingEnabled(); }
    bool stackedCSSPropertyAnimationsEnabled() { return RuntimeEnabledFeatures::stackedCSSPropertyAnimationsEnabled(); }
    bool styleSharingEnabled() { return RuntimeEnabledFeatures::styleSharingEnabled(); }
    bool styleMatchedPropertiesCacheEnabled() { return RuntimeEnabledFeatures::styleMatchedPropertiesCacheEnabled(); }
    bool experimentalStreamEnabled() { return RuntimeEnabledFeatures::experimentalStreamEnabled(); }
    bool referrerPolicyAttributeEnabled() { return RuntimeEnabledFeatures::referrerPolicyAttributeEnabled(); }
    bool suboriginsEnabled() { return RuntimeEnabledFeatures::suboriginsEnabled(); }
    bool threadedParserDataReceiverEnabled() { return RuntimeEnabledFeatures::threadedParserDataReceiverEnabled(); }
    bool touchEnabled() { return RuntimeEnabledFeatures::touchEnabled(); }
    bool trustedEventsEnabled() { return RuntimeEnabledFeatures::trustedEventsEnabled(); }
    bool trustedEventsDefaultActionEnabled() { return RuntimeEnabledFeatures::trustedEventsDefaultActionEnabled(); }
    bool unsafeES3APIsEnabled() { return RuntimeEnabledFeatures::unsafeES3APIsEnabled(); }
    bool unsandboxedAuxiliaryEnabled() { return RuntimeEnabledFeatures::unsandboxedAuxiliaryEnabled(); }
    bool userSelectAllEnabled() { return RuntimeEnabledFeatures::userSelectAllEnabled(); }
    bool webAnimationsAPIEnabled() { return RuntimeEnabledFeatures::webAnimationsAPIEnabled(); }
    bool webAnimationsSVGEnabled() { return RuntimeEnabledFeatures::webAnimationsSVGEnabled(); }
    bool webAudioEnabled() { return RuntimeEnabledFeatures::webAudioEnabled(); }
    bool webBluetoothEnabled() { return RuntimeEnabledFeatures::webBluetoothEnabled(); }
    bool webGLDraftExtensionsEnabled() { return RuntimeEnabledFeatures::webGLDraftExtensionsEnabled(); }
    bool webGLImageChromiumEnabled() { return RuntimeEnabledFeatures::webGLImageChromiumEnabled(); }
    bool webUSBEnabled() { return RuntimeEnabledFeatures::webUSBEnabled(); }
    bool webVREnabled() { return RuntimeEnabledFeatures::webVREnabled(); }
    bool webVTTRegionsEnabled() { return RuntimeEnabledFeatures::webVTTRegionsEnabled(); }
    bool v8IdleTasksEnabled() { return RuntimeEnabledFeatures::v8IdleTasksEnabled(); }
    bool xsltEnabled() { return RuntimeEnabledFeatures::xsltEnabled(); }
    bool smilEnabled() { return RuntimeEnabledFeatures::smilEnabled(); }
    bool scrollCustomizationEnabled() { return RuntimeEnabledFeatures::scrollCustomizationEnabled(); }
    bool scrollRestorationEnabled() { return RuntimeEnabledFeatures::scrollRestorationEnabled(); }
    bool wakeLockEnabled() { return RuntimeEnabledFeatures::wakeLockEnabled(); }
    bool webFontsInterventionEnabled() { return RuntimeEnabledFeatures::webFontsInterventionEnabled(); }
    bool workletEnabled() { return RuntimeEnabledFeatures::workletEnabled(); }

    DEFINE_INLINE_TRACE() { }

private:
    InternalRuntimeFlags() { }
};

} // namespace blink

#endif // InternalRuntimeFlags_h
