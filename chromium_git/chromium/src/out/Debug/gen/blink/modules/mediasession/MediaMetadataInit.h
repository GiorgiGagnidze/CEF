// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef MediaMetadataInit_h
#define MediaMetadataInit_h

#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT MediaMetadataInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    MediaMetadataInit();
    virtual ~MediaMetadataInit();

    bool hasAlbum() const { return !m_album.isNull(); }
    String album() const { return m_album; }
    void setAlbum(String value) { m_album = value; }

    bool hasArtist() const { return !m_artist.isNull(); }
    String artist() const { return m_artist; }
    void setArtist(String value) { m_artist = value; }

    bool hasTitle() const { return !m_title.isNull(); }
    String title() const { return m_title; }
    void setTitle(String value) { m_title = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    String m_album;
    String m_artist;
    String m_title;

    friend class V8MediaMetadataInit;
};

} // namespace blink

#endif // MediaMetadataInit_h
