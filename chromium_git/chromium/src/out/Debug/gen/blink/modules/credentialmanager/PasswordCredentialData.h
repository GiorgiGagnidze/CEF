// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef PasswordCredentialData_h
#define PasswordCredentialData_h

#include "modules/ModulesExport.h"
#include "modules/credentialmanager/LocallyStoredCredentialData.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT PasswordCredentialData : public LocallyStoredCredentialData {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    PasswordCredentialData();
    virtual ~PasswordCredentialData();

    bool hasPassword() const { return !m_password.isNull(); }
    String password() const { return m_password; }
    void setPassword(String value) { m_password = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    String m_password;

    friend class V8PasswordCredentialData;
};

} // namespace blink

#endif // PasswordCredentialData_h
