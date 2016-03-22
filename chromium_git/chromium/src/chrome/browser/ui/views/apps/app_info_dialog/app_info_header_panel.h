// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_VIEWS_APPS_APP_INFO_DIALOG_APP_INFO_HEADER_PANEL_H_
#define CHROME_BROWSER_UI_VIEWS_APPS_APP_INFO_DIALOG_APP_INFO_HEADER_PANEL_H_

#include "base/macros.h"
#include "base/memory/weak_ptr.h"
#include "chrome/browser/ui/views/apps/app_info_dialog/app_info_panel.h"
#include "ui/views/controls/link_listener.h"

class Profile;
namespace extensions {
class Extension;
}

namespace gfx {
class Image;
}

namespace views {
class ImageView;
}

namespace test {
class AppInfoDialogTestApi;
}

// A small summary panel with the app's name, icon, version, and various links
// that is displayed at the top of the app info dialog.
class AppInfoHeaderPanel : public AppInfoPanel,
                           public views::LinkListener,
                           public base::SupportsWeakPtr<AppInfoHeaderPanel> {
 public:
  AppInfoHeaderPanel(Profile* profile, const extensions::Extension* app);
  ~AppInfoHeaderPanel() override;

 private:
  friend class test::AppInfoDialogTestApi;

  void CreateControls();

  // Overridden from views::LinkListener:
  void LinkClicked(views::Link* source, int event_flags) override;

  // Load the app icon asynchronously. For the response, check OnAppImageLoaded.
  void LoadAppImageAsync();
  // Called when the app's icon is loaded.
  void OnAppImageLoaded(const gfx::Image& image);

  // Opens the app in the web store. Must only be called if
  // CanShowAppInWebStore() returns true.
  void ShowAppInWebStore();
  bool CanShowAppInWebStore() const;

  // UI elements on the dialog. Elements are NULL if they are not displayed.
  views::ImageView* app_icon_;
  views::Link* view_in_store_link_;

  base::WeakPtrFactory<AppInfoHeaderPanel> weak_ptr_factory_;

  DISALLOW_COPY_AND_ASSIGN(AppInfoHeaderPanel);
};

#endif  // CHROME_BROWSER_UI_VIEWS_APPS_APP_INFO_DIALOG_APP_INFO_HEADER_PANEL_H_
