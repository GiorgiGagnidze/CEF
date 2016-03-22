/*
 * Copyright (C) 2013 Adobe Systems Incorporated. All rights reserved.
 * Copyright (C) 2013 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer.
 * 2. Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials
 *    provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDER "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY,
 * OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
 * TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
 * THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef ReferenceFilterBuilder_h
#define ReferenceFilterBuilder_h

#include "core/fetch/DocumentResourceReference.h"
#include "wtf/Allocator.h"
#include "wtf/HashMap.h"
#include "wtf/PassRefPtr.h"

class SkPaint;

namespace blink {

class Element;
class Filter;
class FilterEffect;
class FilterOperation;
class FloatSize;
class ReferenceFilterOperation;

class ReferenceFilterBuilder {
    STATIC_ONLY(ReferenceFilterBuilder);
public:
    static DocumentResourceReference* documentResourceReference(const FilterOperation*);
    static void setDocumentResourceReference(const FilterOperation*, PassOwnPtr<DocumentResourceReference>);
#if !ENABLE(OILPAN)
    static void clearDocumentResourceReference(const FilterOperation*);
#endif

    static PassRefPtrWillBeRawPtr<Filter> build(float zoom, Element*, FilterEffect* previousEffect, const ReferenceFilterOperation&, const FloatSize* referenceBoxSize = nullptr, const SkPaint* fillPaint = nullptr, const SkPaint* strokePaint = nullptr);
};

} // namespace blink

#endif // ReferenceFilterBuilder_h
