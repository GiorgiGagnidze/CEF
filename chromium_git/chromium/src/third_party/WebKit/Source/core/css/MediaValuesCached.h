// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MediaValuesCached_h
#define MediaValuesCached_h

#include "core/CoreExport.h"
#include "core/css/MediaValues.h"

namespace blink {

class CORE_EXPORT MediaValuesCached final : public MediaValues {
public:
    struct MediaValuesCachedData {
        DISALLOW_NEW();
        // Members variables must be thread safe, since they're copied to the parser thread
        double viewportWidth;
        double viewportHeight;
        int deviceWidth;
        int deviceHeight;
        float devicePixelRatio;
        int colorBitsPerComponent;
        int monochromeBitsPerComponent;
        PointerType primaryPointerType;
        int availablePointerTypes;
        HoverType primaryHoverType;
        int availableHoverTypes;
        int defaultFontSize;
        bool threeDEnabled;
        bool strictMode;
        String mediaType;
        WebDisplayMode displayMode;

        MediaValuesCachedData()
            : viewportWidth(0)
            , viewportHeight(0)
            , deviceWidth(0)
            , deviceHeight(0)
            , devicePixelRatio(1.0)
            , colorBitsPerComponent(24)
            , monochromeBitsPerComponent(0)
            , primaryPointerType(PointerTypeNone)
            , availablePointerTypes(PointerTypeNone)
            , primaryHoverType(HoverTypeNone)
            , availableHoverTypes(HoverTypeNone)
            , defaultFontSize(16)
            , threeDEnabled(false)
            , strictMode(true)
            , displayMode(WebDisplayModeBrowser)
        {
        }
    };

    static PassRefPtrWillBeRawPtr<MediaValuesCached> create();
    static PassRefPtrWillBeRawPtr<MediaValuesCached> create(Document&);
    static PassRefPtrWillBeRawPtr<MediaValuesCached> create(LocalFrame*);
    static PassRefPtrWillBeRawPtr<MediaValuesCached> create(MediaValuesCachedData&);
    PassRefPtrWillBeRawPtr<MediaValues> copy() const override;
    bool isSafeToSendToAnotherThread() const;
    bool computeLength(double value, CSSPrimitiveValue::UnitType, int& result) const override;
    bool computeLength(double value, CSSPrimitiveValue::UnitType, double& result) const override;

    double viewportWidth() const override;
    double viewportHeight() const override;
    int deviceWidth() const override;
    int deviceHeight() const override;
    float devicePixelRatio() const override;
    int colorBitsPerComponent() const override;
    int monochromeBitsPerComponent() const override;
    PointerType primaryPointerType() const override;
    int availablePointerTypes() const override;
    HoverType primaryHoverType() const override;
    int availableHoverTypes() const override;
    bool threeDEnabled() const override;
    bool strictMode() const override;
    Document* document() const override;
    bool hasValues() const override;
    const String mediaType() const override;
    WebDisplayMode displayMode() const override;

    void setViewportWidth(double);
    void setViewportHeight(double);

protected:
    MediaValuesCached();
    MediaValuesCached(LocalFrame*);
    MediaValuesCached(const MediaValuesCachedData&);

    MediaValuesCachedData m_data;
};

} // namespace blink

#endif // MediaValuesCached_h
