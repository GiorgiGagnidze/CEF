// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef AssignedNodesOptions_h
#define AssignedNodesOptions_h

#include "bindings/core/v8/Nullable.h"
#include "core/CoreExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class CORE_EXPORT AssignedNodesOptions {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    AssignedNodesOptions();
    virtual ~AssignedNodesOptions();

    bool hasFlatten() const { return !m_flatten.isNull(); }
    bool flatten() const { return m_flatten.get(); }
    void setFlatten(bool value) { m_flatten = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<bool> m_flatten;

    friend class V8AssignedNodesOptions;
};

} // namespace blink

#endif // AssignedNodesOptions_h
