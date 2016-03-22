// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_BROWSER_LIVE_TAB_CONTEXT_H_
#define CHROME_BROWSER_UI_BROWSER_LIVE_TAB_CONTEXT_H_

#include <string>
#include <vector>

#include "base/compiler_specific.h"
#include "base/macros.h"
#include "chrome/browser/ui/host_desktop.h"
#include "components/sessions/core/live_tab_context.h"

class Browser;
class Profile;

namespace content {
class WebContents;
}

// Implementation of LiveTabContext which uses an instance of
// Browser in order to fulfil its duties.
class BrowserLiveTabContext : public sessions::LiveTabContext {
 public:
  explicit BrowserLiveTabContext(Browser* browser) : browser_(browser) {}
  ~BrowserLiveTabContext() override {}

  // Overridden from LiveTabContext:
  void ShowBrowserWindow() override;
  const SessionID& GetSessionID() const override;
  int GetTabCount() const override;
  int GetSelectedIndex() const override;
  std::string GetAppName() const override;
  sessions::LiveTab* GetLiveTabAt(int index) const override;
  sessions::LiveTab* GetActiveLiveTab() const override;
  bool IsTabPinned(int index) const override;
  sessions::LiveTab* AddRestoredTab(
      const std::vector<sessions::SerializedNavigationEntry>& navigations,
      int tab_index,
      int selected_navigation,
      const std::string& extension_app_id,
      bool select,
      bool pin,
      bool from_last_session,
      const sessions::PlatformSpecificTabData* storage_namespace,
      const std::string& user_agent_override) override;
  sessions::LiveTab* ReplaceRestoredTab(
      const std::vector<sessions::SerializedNavigationEntry>& navigations,
      int selected_navigation,
      bool from_last_session,
      const std::string& extension_app_id,
      const sessions::PlatformSpecificTabData* tab_platform_data,
      const std::string& user_agent_override) override;
  void CloseTab() override;

  // see Browser::Create
  static sessions::LiveTabContext* Create(
      Profile* profile,
      chrome::HostDesktopType host_desktop_type,
      const std::string& app_name);

  // see browser::FindBrowserForWebContents
  static sessions::LiveTabContext* FindContextForWebContents(
      const content::WebContents* contents);

  // see chrome::FindBrowserWithID
  // Returns the LiveTabContext of the Browser with |desired_id| if
  // such a Browser exists and is on the desktop defined by |host_desktop_type|.
  static sessions::LiveTabContext* FindContextWithID(
      SessionID::id_type desired_id,
      chrome::HostDesktopType host_desktop_type);

 private:
  Browser* browser_;

  DISALLOW_COPY_AND_ASSIGN(BrowserLiveTabContext);
};

#endif  // CHROME_BROWSER_UI_BROWSER_LIVE_TAB_CONTEXT_H_
