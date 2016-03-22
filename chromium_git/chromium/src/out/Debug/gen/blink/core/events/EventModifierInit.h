// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef EventModifierInit_h
#define EventModifierInit_h

#include "bindings/core/v8/Nullable.h"
#include "core/CoreExport.h"
#include "core/events/UIEventInit.h"
#include "platform/heap/Handle.h"

namespace blink {

class CORE_EXPORT EventModifierInit : public UIEventInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    EventModifierInit();
    virtual ~EventModifierInit();

    bool hasAltKey() const { return !m_altKey.isNull(); }
    bool altKey() const { return m_altKey.get(); }
    void setAltKey(bool value) { m_altKey = value; }

    bool hasCtrlKey() const { return !m_ctrlKey.isNull(); }
    bool ctrlKey() const { return m_ctrlKey.get(); }
    void setCtrlKey(bool value) { m_ctrlKey = value; }

    bool hasMetaKey() const { return !m_metaKey.isNull(); }
    bool metaKey() const { return m_metaKey.get(); }
    void setMetaKey(bool value) { m_metaKey = value; }

    bool hasModifierAltGraph() const { return !m_modifierAltGraph.isNull(); }
    bool modifierAltGraph() const { return m_modifierAltGraph.get(); }
    void setModifierAltGraph(bool value) { m_modifierAltGraph = value; }

    bool hasModifierCapsLock() const { return !m_modifierCapsLock.isNull(); }
    bool modifierCapsLock() const { return m_modifierCapsLock.get(); }
    void setModifierCapsLock(bool value) { m_modifierCapsLock = value; }

    bool hasModifierFn() const { return !m_modifierFn.isNull(); }
    bool modifierFn() const { return m_modifierFn.get(); }
    void setModifierFn(bool value) { m_modifierFn = value; }

    bool hasModifierNumLock() const { return !m_modifierNumLock.isNull(); }
    bool modifierNumLock() const { return m_modifierNumLock.get(); }
    void setModifierNumLock(bool value) { m_modifierNumLock = value; }

    bool hasModifierOS() const { return !m_modifierOS.isNull(); }
    bool modifierOS() const { return m_modifierOS.get(); }
    void setModifierOS(bool value) { m_modifierOS = value; }

    bool hasModifierScrollLock() const { return !m_modifierScrollLock.isNull(); }
    bool modifierScrollLock() const { return m_modifierScrollLock.get(); }
    void setModifierScrollLock(bool value) { m_modifierScrollLock = value; }

    bool hasModifierSymbol() const { return !m_modifierSymbol.isNull(); }
    bool modifierSymbol() const { return m_modifierSymbol.get(); }
    void setModifierSymbol(bool value) { m_modifierSymbol = value; }

    bool hasShiftKey() const { return !m_shiftKey.isNull(); }
    bool shiftKey() const { return m_shiftKey.get(); }
    void setShiftKey(bool value) { m_shiftKey = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<bool> m_altKey;
    Nullable<bool> m_ctrlKey;
    Nullable<bool> m_metaKey;
    Nullable<bool> m_modifierAltGraph;
    Nullable<bool> m_modifierCapsLock;
    Nullable<bool> m_modifierFn;
    Nullable<bool> m_modifierNumLock;
    Nullable<bool> m_modifierOS;
    Nullable<bool> m_modifierScrollLock;
    Nullable<bool> m_modifierSymbol;
    Nullable<bool> m_shiftKey;

    friend class V8EventModifierInit;
};

} // namespace blink

#endif // EventModifierInit_h
