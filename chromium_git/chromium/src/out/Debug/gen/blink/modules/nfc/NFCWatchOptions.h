// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef NFCWatchOptions_h
#define NFCWatchOptions_h

#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT NFCWatchOptions {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    NFCWatchOptions();
    virtual ~NFCWatchOptions();

    bool hasMediaType() const { return !m_mediaType.isNull(); }
    String mediaType() const { return m_mediaType; }
    void setMediaType(String value) { m_mediaType = value; }

    bool hasMode() const { return !m_mode.isNull(); }
    String mode() const { return m_mode; }
    void setMode(String value) { m_mode = value; }

    bool hasRecordType() const { return !m_recordType.isNull(); }
    String recordType() const { return m_recordType; }
    void setRecordType(String value) { m_recordType = value; }
    void setRecordTypeToNull() { m_recordType = String(); }

    bool hasURL() const { return !m_url.isNull(); }
    String url() const { return m_url; }
    void setURL(String value) { m_url = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    String m_mediaType;
    String m_mode;
    String m_recordType;
    String m_url;

    friend class V8NFCWatchOptions;
};

} // namespace blink

#endif // NFCWatchOptions_h
