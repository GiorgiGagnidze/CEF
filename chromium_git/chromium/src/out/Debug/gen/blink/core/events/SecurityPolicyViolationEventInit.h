// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef SecurityPolicyViolationEventInit_h
#define SecurityPolicyViolationEventInit_h

#include "bindings/core/v8/Nullable.h"
#include "core/CoreExport.h"
#include "core/events/EventInit.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class CORE_EXPORT SecurityPolicyViolationEventInit : public EventInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    SecurityPolicyViolationEventInit();
    virtual ~SecurityPolicyViolationEventInit();

    bool hasBlockedURI() const { return !m_blockedURI.isNull(); }
    String blockedURI() const { return m_blockedURI; }
    void setBlockedURI(String value) { m_blockedURI = value; }

    bool hasColumnNumber() const { return !m_columnNumber.isNull(); }
    int columnNumber() const { return m_columnNumber.get(); }
    void setColumnNumber(int value) { m_columnNumber = value; }

    bool hasDocumentURI() const { return !m_documentURI.isNull(); }
    String documentURI() const { return m_documentURI; }
    void setDocumentURI(String value) { m_documentURI = value; }

    bool hasEffectiveDirective() const { return !m_effectiveDirective.isNull(); }
    String effectiveDirective() const { return m_effectiveDirective; }
    void setEffectiveDirective(String value) { m_effectiveDirective = value; }

    bool hasLineNumber() const { return !m_lineNumber.isNull(); }
    int lineNumber() const { return m_lineNumber.get(); }
    void setLineNumber(int value) { m_lineNumber = value; }

    bool hasOriginalPolicy() const { return !m_originalPolicy.isNull(); }
    String originalPolicy() const { return m_originalPolicy; }
    void setOriginalPolicy(String value) { m_originalPolicy = value; }

    bool hasReferrer() const { return !m_referrer.isNull(); }
    String referrer() const { return m_referrer; }
    void setReferrer(String value) { m_referrer = value; }

    bool hasSourceFile() const { return !m_sourceFile.isNull(); }
    String sourceFile() const { return m_sourceFile; }
    void setSourceFile(String value) { m_sourceFile = value; }

    bool hasStatusCode() const { return !m_statusCode.isNull(); }
    int statusCode() const { return m_statusCode.get(); }
    void setStatusCode(int value) { m_statusCode = value; }

    bool hasViolatedDirective() const { return !m_violatedDirective.isNull(); }
    String violatedDirective() const { return m_violatedDirective; }
    void setViolatedDirective(String value) { m_violatedDirective = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    String m_blockedURI;
    Nullable<int> m_columnNumber;
    String m_documentURI;
    String m_effectiveDirective;
    Nullable<int> m_lineNumber;
    String m_originalPolicy;
    String m_referrer;
    String m_sourceFile;
    Nullable<int> m_statusCode;
    String m_violatedDirective;

    friend class V8SecurityPolicyViolationEventInit;
};

} // namespace blink

#endif // SecurityPolicyViolationEventInit_h
