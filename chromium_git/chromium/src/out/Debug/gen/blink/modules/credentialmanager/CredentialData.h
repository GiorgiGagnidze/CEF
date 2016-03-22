// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef CredentialData_h
#define CredentialData_h

#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT CredentialData {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    CredentialData();
    virtual ~CredentialData();

    bool hasId() const { return !m_id.isNull(); }
    String id() const { return m_id; }
    void setId(String value) { m_id = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    String m_id;

    friend class V8CredentialData;
};

} // namespace blink

#endif // CredentialData_h
