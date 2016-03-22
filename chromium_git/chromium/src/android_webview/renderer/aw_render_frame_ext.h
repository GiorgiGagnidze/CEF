// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ANDROID_WEBVIEW_RENDERER_AW_RENDER_FRAME_EXT_H_
#define ANDROID_WEBVIEW_RENDERER_AW_RENDER_FRAME_EXT_H_

#include "base/macros.h"
#include "content/public/renderer/render_frame_observer.h"
#include "ui/gfx/geometry/point_f.h"
#include "ui/gfx/geometry/size.h"
#include "ui/gfx/geometry/size_f.h"

namespace blink {
enum WebMeaningfulLayout;
class WebView;
}

namespace android_webview {

// Render process side of AwRenderViewHostExt, this provides cross-process
// implementation of miscellaneous WebView functions that we need to poke
// WebKit directly to implement (and that aren't needed in the chrome app).
class AwRenderFrameExt : public content::RenderFrameObserver {
 public:
  AwRenderFrameExt(content::RenderFrame* render_frame);

 private:
  ~AwRenderFrameExt() override;

  // RenderFrameObserver:
  void DidCommitProvisionalLoad(bool is_new_navigation,
                                bool is_same_page_navigation) override;

  bool OnMessageReceived(const IPC::Message& message) override;
  void FocusedNodeChanged(const blink::WebNode& node) override;

  void OnDocumentHasImagesRequest(int id);
  void OnDoHitTest(const gfx::PointF& touch_center,
                   const gfx::SizeF& touch_area);

  void OnSetTextZoomFactor(float zoom_factor);

  void OnResetScrollAndScaleState();

  void OnSetInitialPageScale(double page_scale_factor);

  void OnSetBackgroundColor(SkColor c);

  void OnSmoothScroll(int target_x, int target_y, long duration_ms);

  blink::WebView* GetWebView();

  DISALLOW_COPY_AND_ASSIGN(AwRenderFrameExt);
};

}

#endif  // ANDROID_WEBVIEW_RENDERER_AW_RENDER_FRAME_EXT_H_


