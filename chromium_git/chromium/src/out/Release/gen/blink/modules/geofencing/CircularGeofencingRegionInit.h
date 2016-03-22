// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef CircularGeofencingRegionInit_h
#define CircularGeofencingRegionInit_h

#include "bindings/core/v8/Nullable.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT CircularGeofencingRegionInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    CircularGeofencingRegionInit();
    virtual ~CircularGeofencingRegionInit();

    bool hasId() const { return !m_id.isNull(); }
    String id() const { return m_id; }
    void setId(String value) { m_id = value; }
    void setIdToNull() { m_id = String(); }

    bool hasLatitude() const { return !m_latitude.isNull(); }
    double latitude() const { return m_latitude.get(); }
    void setLatitude(double value) { m_latitude = value; }

    bool hasLongitude() const { return !m_longitude.isNull(); }
    double longitude() const { return m_longitude.get(); }
    void setLongitude(double value) { m_longitude = value; }

    bool hasRadius() const { return !m_radius.isNull(); }
    double radius() const { return m_radius.get(); }
    void setRadius(double value) { m_radius = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    String m_id;
    Nullable<double> m_latitude;
    Nullable<double> m_longitude;
    Nullable<double> m_radius;

    friend class V8CircularGeofencingRegionInit;
};

} // namespace blink

#endif // CircularGeofencingRegionInit_h
