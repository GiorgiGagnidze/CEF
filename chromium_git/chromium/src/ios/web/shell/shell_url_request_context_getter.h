// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IOS_WEB_SHELL_SHELL_URL_REQUEST_CONTEXT_GETTER_H_
#define IOS_WEB_SHELL_SHELL_URL_REQUEST_CONTEXT_GETTER_H_

#include "base/compiler_specific.h"
#include "base/files/file_path.h"
#include "base/macros.h"
#include "base/memory/ref_counted.h"
#include "base/memory/scoped_ptr.h"
#include "base/single_thread_task_runner.h"
#include "net/url_request/url_request_context_getter.h"

namespace net {
class HostResolver;
class MappedHostResolver;
class NetworkDelegate;
class NetLog;
class ProxyConfigService;
class TransportSecurityPersister;
class URLRequestContext;
class URLRequestContextStorage;
}

namespace web {

class ShellURLRequestContextGetter : public net::URLRequestContextGetter {
 public:
  ShellURLRequestContextGetter(
      const base::FilePath& base_path,
      const scoped_refptr<base::SingleThreadTaskRunner>& network_task_runner,
      const scoped_refptr<base::SingleThreadTaskRunner>& file_task_runner,
      const scoped_refptr<base::SingleThreadTaskRunner>& cache_task_runner);

  // net::URLRequestContextGetter implementation.
  net::URLRequestContext* GetURLRequestContext() override;
  scoped_refptr<base::SingleThreadTaskRunner> GetNetworkTaskRunner()
      const override;

 protected:
  ~ShellURLRequestContextGetter() override;

 private:
  base::FilePath base_path_;
  scoped_refptr<base::SingleThreadTaskRunner> file_task_runner_;
  scoped_refptr<base::SingleThreadTaskRunner> network_task_runner_;
  scoped_refptr<base::SingleThreadTaskRunner> cache_task_runner_;
  scoped_ptr<net::ProxyConfigService> proxy_config_service_;
  scoped_ptr<net::NetworkDelegate> network_delegate_;
  scoped_ptr<net::URLRequestContextStorage> storage_;
  scoped_ptr<net::URLRequestContext> url_request_context_;
  scoped_ptr<net::NetLog> net_log_;
  scoped_ptr<net::TransportSecurityPersister> transport_security_persister_;

  DISALLOW_COPY_AND_ASSIGN(ShellURLRequestContextGetter);
};

}  // namespace web

#endif  // IOS_WEB_SHELL_SHELL_URL_REQUEST_CONTEXT_GETTER_H_
