// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_EXTENSIONS_UPDATER_CHROME_UPDATE_CLIENT_CONFIG_H_
#define CHROME_BROWSER_EXTENSIONS_UPDATER_CHROME_UPDATE_CLIENT_CONFIG_H_

#include <string>
#include <vector>

#include "base/macros.h"
#include "base/memory/ref_counted.h"
#include "components/component_updater/configurator_impl.h"
#include "extensions/browser/updater/update_client_config.h"

namespace content {
class BrowserContext;
}

namespace extensions {

class ChromeUpdateClientConfig : public UpdateClientConfig {
 public:
  explicit ChromeUpdateClientConfig(content::BrowserContext* context);

  int InitialDelay() const override;
  int NextCheckDelay() const override;
  int StepDelay() const override;
  int OnDemandDelay() const override;
  int UpdateDelay() const override;
  std::vector<GURL> UpdateUrl() const override;
  std::vector<GURL> PingUrl() const override;
  base::Version GetBrowserVersion() const override;
  std::string GetChannel() const override;
  std::string GetLang() const override;
  std::string GetOSLongName() const override;
  std::string ExtraRequestParams() const override;
  std::string GetDownloadPreference() const override;
  net::URLRequestContextGetter* RequestContext() const override;
  scoped_refptr<update_client::OutOfProcessPatcher> CreateOutOfProcessPatcher()
      const override;
  bool DeltasEnabled() const override;
  bool UseBackgroundDownloader() const override;

 protected:
  friend class base::RefCountedThreadSafe<ChromeUpdateClientConfig>;
  ~ChromeUpdateClientConfig() override;

 private:
  component_updater::ConfiguratorImpl impl_;

  DISALLOW_COPY_AND_ASSIGN(ChromeUpdateClientConfig);
};

}  // namespace extensions

#endif  // CHROME_BROWSER_EXTENSIONS_UPDATER_CHROME_UPDATE_CLIENT_CONFIG_H_
