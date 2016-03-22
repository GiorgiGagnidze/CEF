// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROMECAST_MEDIA_CMA_BACKEND_MEDIA_PIPELINE_BACKEND_DEFAULT_H_
#define CHROMECAST_MEDIA_CMA_BACKEND_MEDIA_PIPELINE_BACKEND_DEFAULT_H_

#include <stdint.h>

#include "base/macros.h"
#include "base/memory/scoped_ptr.h"
#include "base/time/time.h"
#include "chromecast/public/media/media_pipeline_backend.h"

namespace chromecast {
namespace media {
class AudioDecoderDefault;
class VideoDecoderDefault;

// Factory that instantiates default (stub) media pipeline device elements.
class MediaPipelineBackendDefault : public MediaPipelineBackend {
 public:
  MediaPipelineBackendDefault();
  ~MediaPipelineBackendDefault() override;

  // MediaPipelineBackend implementation:
  AudioDecoder* CreateAudioDecoder() override;
  VideoDecoder* CreateVideoDecoder() override;
  bool Initialize() override;
  bool Start(int64_t start_pts) override;
  bool Stop() override;
  bool Pause() override;
  bool Resume() override;
  int64_t GetCurrentPts() override;
  bool SetPlaybackRate(float rate) override;

 private:
  base::TimeDelta start_pts_;
  base::TimeTicks start_clock_;
  bool running_;
  float rate_;

  scoped_ptr<AudioDecoderDefault> audio_decoder_;
  scoped_ptr<VideoDecoderDefault> video_decoder_;

  DISALLOW_COPY_AND_ASSIGN(MediaPipelineBackendDefault);
};

}  // namespace media
}  // namespace chromecast

#endif  // CHROMECAST_MEDIA_CMA_BACKEND_MEDIA_PIPELINE_BACKEND_DEFAULT_H_
