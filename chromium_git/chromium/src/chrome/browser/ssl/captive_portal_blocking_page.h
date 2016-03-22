// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_SSL_CAPTIVE_PORTAL_BLOCKING_PAGE_H_
#define CHROME_BROWSER_SSL_CAPTIVE_PORTAL_BLOCKING_PAGE_H_

#include <string>

#include "base/callback.h"
#include "base/macros.h"
#include "base/memory/scoped_ptr.h"
#include "chrome/browser/interstitials/security_interstitial_page.h"
#include "url/gurl.h"

#if !defined(ENABLE_CAPTIVE_PORTAL_DETECTION)
#error This file must be built with ENABLE_CAPTIVE_PORTAL_DETECTION flag.
#endif

namespace content {
class WebContents;
}

namespace net {
class SSLInfo;
}

class CertReportHelper;
class SSLCertReporter;

// This class is responsible for showing/hiding the interstitial page that is
// shown when a captive portal triggers an SSL error.
// It deletes itself when the interstitial page is closed.
//
// This class should only be used on the UI thread because its implementation
// uses captive_portal::CaptivePortalService, which can only be accessed on the
// UI thread. Only used when ENABLE_CAPTIVE_PORTAL_DETECTION is true.
class CaptivePortalBlockingPage : public SecurityInterstitialPage {
 public:
  // Interstitial type, for testing.
  static const void* const kTypeForTesting;

  CaptivePortalBlockingPage(content::WebContents* web_contents,
                            const GURL& request_url,
                            const GURL& login_url,
                            scoped_ptr<SSLCertReporter> ssl_cert_reporter,
                            const net::SSLInfo& ssl_info,
                            const base::Callback<void(bool)>& callback);
  ~CaptivePortalBlockingPage() override;

  // InterstitialPageDelegate method:
  const void* GetTypeForTesting() const override;

 protected:
  // Returns true if the connection is a Wi-Fi connection. Virtual for tests.
  virtual bool IsWifiConnection() const;
  // Returns the SSID of the connected Wi-Fi network, if any. Virtual for tests.
  virtual std::string GetWiFiSSID() const;

  // SecurityInterstitialPage methods:
  bool ShouldCreateNewNavigation() const override;
  void PopulateInterstitialStrings(
      base::DictionaryValue* load_time_data) override;
  void AfterShow() override {}

  // InterstitialPageDelegate method:
  void CommandReceived(const std::string& command) override;
  void OnProceed() override;
  void OnDontProceed() override;

 private:
  // URL of the login page, opened when the user clicks the "Connect" button.
  const GURL login_url_;
  scoped_ptr<CertReportHelper> cert_report_helper_;
  base::Callback<void(bool)> callback_;

  DISALLOW_COPY_AND_ASSIGN(CaptivePortalBlockingPage);
};

#endif  // CHROME_BROWSER_SSL_CAPTIVE_PORTAL_BLOCKING_PAGE_H_
