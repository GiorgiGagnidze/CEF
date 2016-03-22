// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_HTML_VIEWER_MOCK_WEB_BLOB_REGISTRY_IMPL_H_
#define COMPONENTS_HTML_VIEWER_MOCK_WEB_BLOB_REGISTRY_IMPL_H_

#include <stddef.h>

#include <map>

#include "base/containers/scoped_ptr_hash_map.h"
#include "base/macros.h"
#include "base/memory/scoped_vector.h"
#include "third_party/WebKit/public/platform/WebBlobData.h"
#include "third_party/WebKit/public/platform/WebBlobRegistry.h"
#include "third_party/WebKit/public/platform/WebVector.h"

namespace html_viewer {

// TODO(erg): For now, this is a just a copy of content's testing
// mock. Eventually, this should be turned into a real implementation, but this
// at least lets us get github working.
class MockWebBlobRegistryImpl : public blink::WebBlobRegistry {
 public:
  MockWebBlobRegistryImpl();
  ~MockWebBlobRegistryImpl() override;

  void registerBlobData(const blink::WebString& uuid,
                        const blink::WebBlobData& data) override;
  void addBlobDataRef(const blink::WebString& uuid) override;
  void removeBlobDataRef(const blink::WebString& uuid) override;
  void registerPublicBlobURL(const blink::WebURL&,
                             const blink::WebString& uuid) override;
  void revokePublicBlobURL(const blink::WebURL&) override;

  // Additional support for Streams.
  void registerStreamURL(const blink::WebURL& url,
                         const blink::WebString& content_type) override;
  void registerStreamURL(const blink::WebURL& url,
                         const blink::WebURL& src_url) override;
  void addDataToStream(const blink::WebURL& url,
                       const char* data,
                       size_t length) override;
  void flushStream(const blink::WebURL& url) override;
  void finalizeStream(const blink::WebURL& url) override;
  void abortStream(const blink::WebURL& url) override;
  void unregisterStreamURL(const blink::WebURL& url) override;

  bool GetUUIDForURL(const blink::WebURL& url, blink::WebString* uuid) const;
  bool GetBlobItems(const blink::WebString& uuid,
                    blink::WebVector<blink::WebBlobData::Item*>* items) const;

 private:
  base::ScopedPtrHashMap<std::string,
                         scoped_ptr<ScopedVector<blink::WebBlobData::Item>>>
      blob_data_items_map_;
  std::map<std::string, int> blob_ref_count_map_;

  std::map<std::string, blink::WebString> public_url_to_uuid_;

  DISALLOW_COPY_AND_ASSIGN(MockWebBlobRegistryImpl);
};

}  // namespace html_viewer

#endif  // COMPONENTS_HTML_VIEWER_MOCK_WEB_BLOB_REGISTRY_IMPL_H_
