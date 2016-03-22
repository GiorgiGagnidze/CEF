// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef IntersectionObserverInit_h
#define IntersectionObserverInit_h

#include "bindings/core/v8/Nullable.h"
#include "bindings/core/v8/UnionTypesCore.h"
#include "core/CoreExport.h"
#include "core/dom/Element.h"
#include "platform/heap/Handle.h"
#include "wtf/Vector.h"
#include "wtf/text/WTFString.h"

namespace blink {

class CORE_EXPORT IntersectionObserverInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    IntersectionObserverInit();
    virtual ~IntersectionObserverInit();

    bool hasRoot() const { return m_root; }
    PassRefPtrWillBeRawPtr<Element> root() const { return m_root; }
    void setRoot(PassRefPtrWillBeRawPtr<Element> value) { m_root = value; }
    void setRootToNull() { m_root = RefPtrWillBeMember<Element>(); }

    bool hasRootMargin() const { return !m_rootMargin.isNull(); }
    String rootMargin() const { return m_rootMargin; }
    void setRootMargin(String value) { m_rootMargin = value; }

    bool hasThreshold() const { return !m_threshold.isNull(); }
    const DoubleOrDoubleArray& threshold() const { return m_threshold; }
    void setThreshold(const DoubleOrDoubleArray& value) { m_threshold = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    RefPtrWillBeMember<Element> m_root;
    String m_rootMargin;
    DoubleOrDoubleArray m_threshold;

    friend class V8IntersectionObserverInit;
};

} // namespace blink

#endif // IntersectionObserverInit_h
