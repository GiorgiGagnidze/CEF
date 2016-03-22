// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef OriginTrials_h
#define OriginTrials_h

#include "core/CoreExport.h"
#include "wtf/text/WTFString.h"

namespace blink {

class ExecutionContext;

// A class that stores dynamic tests for experimental features which can be
// enabled through the experimental framework via API keys.

class CORE_EXPORT OriginTrials {
public:
    static bool experimentalFrameworkSampleAPIEnabled(ExecutionContext* executionContext, String& errorMessage);
    static bool experimentalFrameworkSampleAPIEnabled(ExecutionContext* executionContext);

private:
    OriginTrials() { }

    static bool experimentalFrameworkSampleAPIEnabledImpl(ExecutionContext* executionContext, String* errorMessage);
};

} // namespace blink

#endif // OriginTrials_h
