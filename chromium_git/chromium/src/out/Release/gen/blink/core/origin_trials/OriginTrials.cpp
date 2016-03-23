// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/origin_trials/OriginTrials.h"

#include "core/origin_trials/OriginTrialContext.h"
#include "platform/RuntimeEnabledFeatures.h"

namespace blink {

// static
bool OriginTrials::experimentalFrameworkSampleAPIEnabled(ExecutionContext* executionContext, String& errorMessage) {
    return experimentalFrameworkSampleAPIEnabledImpl(executionContext, &errorMessage);
}

// static
bool OriginTrials::experimentalFrameworkSampleAPIEnabled(ExecutionContext* executionContext) {
    return experimentalFrameworkSampleAPIEnabledImpl(executionContext, nullptr);
}


// static
bool OriginTrials::experimentalFrameworkSampleAPIEnabledImpl(ExecutionContext* executionContext, String* errorMessage) {
    if (RuntimeEnabledFeatures::experimentalFrameworkSampleAPIEnabled())
        return true;
    return OriginTrialContext::isFeatureEnabled(executionContext, "Frobulate", errorMessage);
}

} // namespace blink
