// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "modules/EventModulesFactory.h"

#include "EventModulesHeaders.h"
#include "platform/RuntimeEnabledFeatures.h"

namespace blink {

PassRefPtrWillBeRawPtr<Event> EventModulesFactory::create(const String& type)
{
    if (type == "BeforeInstallPromptEvent" && RuntimeEnabledFeatures::appBannerEnabled())
        return BeforeInstallPromptEvent::create();
    if (type == "SyncEvent" && RuntimeEnabledFeatures::backgroundSyncEnabled())
        return SyncEvent::create();
    if (type == "DeviceLightEvent" && RuntimeEnabledFeatures::deviceLightEnabled())
        return DeviceLightEvent::create();
    if (type == "DeviceMotionEvent")
        return DeviceMotionEvent::create();
    if (type == "DeviceOrientationEvent")
        return DeviceOrientationEvent::create();
    if (type == "MediaEncryptedEvent" && RuntimeEnabledFeatures::encryptedMediaEnabled())
        return MediaEncryptedEvent::create();
    if (type == "MediaKeyMessageEvent" && RuntimeEnabledFeatures::encryptedMediaEnabled())
        return MediaKeyMessageEvent::create();
    if (type == "GamepadEvent")
        return GamepadEvent::create();
    if (type == "GeofencingEvent" && RuntimeEnabledFeatures::geofencingEnabled())
        return GeofencingEvent::create();
    if (type == "IDBVersionChangeEvent")
        return IDBVersionChangeEvent::create();
    if (type == "BlobEvent" && RuntimeEnabledFeatures::mediaRecorderEnabled())
        return BlobEvent::create();
    if (type == "MediaStreamEvent")
        return MediaStreamEvent::create();
    if (type == "MediaStreamTrackEvent")
        return MediaStreamTrackEvent::create();
    if (type == "RTCDTMFToneChangeEvent")
        return RTCDTMFToneChangeEvent::create();
    if (type == "RTCDataChannelEvent")
        return RTCDataChannelEvent::create();
    if (type == "RTCIceCandidateEvent")
        return RTCIceCandidateEvent::create();
    if (type == "ServicePortConnectEvent" && RuntimeEnabledFeatures::navigatorConnectEnabled())
        return ServicePortConnectEvent::create();
    if (type == "NotificationEvent" && RuntimeEnabledFeatures::notificationsEnabled())
        return NotificationEvent::create();
    if (type == "PresentationConnectionAvailableEvent" && RuntimeEnabledFeatures::presentationEnabled())
        return PresentationConnectionAvailableEvent::create();
    if (type == "PushEvent" && RuntimeEnabledFeatures::pushMessagingEnabled())
        return PushEvent::create();
    if (type == "ExtendableEvent")
        return ExtendableEvent::create();
    if (type == "ExtendableMessageEvent" && RuntimeEnabledFeatures::serviceWorkerExtendableMessageEventEnabled())
        return ExtendableMessageEvent::create();
    if (type == "FetchEvent")
        return FetchEvent::create();
    if (type == "InstallEvent" && RuntimeEnabledFeatures::foreignFetchEnabled())
        return InstallEvent::create();
    if (type == "ServiceWorkerMessageEvent")
        return ServiceWorkerMessageEvent::create();
    if (type == "SpeechRecognitionError")
        return SpeechRecognitionError::create();
    if (type == "SpeechRecognitionEvent")
        return SpeechRecognitionEvent::create();
    if (type == "SpeechSynthesisEvent" && RuntimeEnabledFeatures::scriptedSpeechEnabled())
        return SpeechSynthesisEvent::create();
    if (type == "StorageEvent")
        return StorageEvent::create();
    if (type == "AudioProcessingEvent")
        return AudioProcessingEvent::create();
    if (type == "OfflineAudioCompletionEvent")
        return OfflineAudioCompletionEvent::create();
    if (type == "WebGLContextEvent")
        return WebGLContextEvent::create();
    if (type == "MIDIConnectionEvent")
        return MIDIConnectionEvent::create();
    if (type == "MIDIMessageEvent")
        return MIDIMessageEvent::create();
    if (type == "CloseEvent")
        return CloseEvent::create();
    return nullptr;
}

} // namespace blink
