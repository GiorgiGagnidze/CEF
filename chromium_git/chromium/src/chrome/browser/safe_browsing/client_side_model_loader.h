// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Helper class loads models for client-side phishing detection
// from the the SafeBrowsing backends.
//
// This class is not thread-safe and expects all calls to be made on the UI
// thread.

#ifndef CHROME_BROWSER_SAFE_BROWSING_CLIENT_SIDE_MODEL_LOADER_H_
#define CHROME_BROWSER_SAFE_BROWSING_CLIENT_SIDE_MODEL_LOADER_H_

#include <stddef.h>
#include <stdint.h>

#include <string>

#include "base/callback.h"
#include "base/gtest_prod_util.h"
#include "base/macros.h"
#include "base/memory/linked_ptr.h"
#include "base/memory/ref_counted.h"
#include "base/memory/scoped_ptr.h"
#include "base/memory/weak_ptr.h"
#include "content/public/browser/browser_thread.h"
#include "net/url_request/url_fetcher_delegate.h"
#include "url/gurl.h"

namespace base {
class TimeDelta;
}

namespace net {
class URLFetcher;
class URLRequestContextGetter;
}  // namespace net

namespace safe_browsing {
class ClientSideModel;

// Class which owns and loads a single client-Side detection model.
// The ClientSideDetectionService uses this.
class ModelLoader : public net::URLFetcherDelegate {
 public:
  static const size_t kMaxModelSizeBytes;
  static const int kClientModelFetchIntervalMs;
  static const char kClientModelFinchExperiment[];
  static const char kClientModelFinchParam[];
  static const char kClientModelUrlPrefix[];
  static const char kClientModelNamePattern[];

  ModelLoader(base::Closure update_renderers,
              net::URLRequestContextGetter* request_context_getter,
              bool is_extended_reporting);
  ~ModelLoader() override;

  // From the net::URLFetcherDelegate interface.
  void OnURLFetchComplete(const net::URLFetcher* source) override;

  // Schedules the next fetch of the model.
  virtual void ScheduleFetch(int64_t delay_ms);

  // Cancel any pending model fetch.
  virtual void CancelFetcher();

  const std::string& model_str() const { return model_str_; }
  const std::string& name() const { return name_; }

 protected:
  // Enum used to keep stats about why we fail to get the client model.
  enum ClientModelStatus {
    MODEL_SUCCESS,
    MODEL_NOT_CHANGED,
    MODEL_FETCH_FAILED,
    MODEL_EMPTY,
    MODEL_TOO_LARGE,
    MODEL_PARSE_ERROR,
    MODEL_MISSING_FIELDS,
    MODEL_INVALID_VERSION_NUMBER,
    MODEL_BAD_HASH_IDS,
    MODEL_STATUS_MAX  // Always add new values before this one.
  };

  // For testing only.
  ModelLoader(base::Closure update_renderers, const std::string& model_name);

  // This is called periodically to check whether a new client model is
  // available for download.
  virtual void StartFetch();

  // This method is called when we're done fetching the model either because
  // we hit an error somewhere or because we're actually done fetch and
  // validating the model.  If |max_age| is not 0, it's used to schedule the
  // next fetch.
  virtual void EndFetch(ClientModelStatus status, base::TimeDelta max_age);

 private:
  // Use Finch to pick a model number.
  static int GetModelNumber();

  // Construct a model name from parameters.
  static std::string FillInModelName(bool is_extended_reporting,
                                     int model_number);

  // Returns true iff all the hash id's in the client-side model point to
  // valid hashes in the model.
  static bool ModelHasValidHashIds(const ClientSideModel& model);

  // The name of the model is the last component of the URL path.
  const std::string name_;
  // Full URL of the model.
  const GURL url_;

  // If the model isn't yet loaded, model_str_ will be empty.
  std::string model_str_;
  scoped_ptr<ClientSideModel> model_;
  scoped_ptr<net::URLFetcher> fetcher_;

  // Callback to invoke when we've got a new model.  CSD will send it around.
  base::Closure update_renderers_callback_;

  // Not owned, must outlive this obj or be NULL.
  net::URLRequestContextGetter* request_context_getter_;

  // Used to protect the delayed callback to StartFetchModel()
  base::WeakPtrFactory<ModelLoader> weak_factory_;

  friend class ClientSideDetectionServiceTest;
  friend class ModelLoaderTest;
  FRIEND_TEST_ALL_PREFIXES(ModelLoaderTest, FetchModelTest);
  FRIEND_TEST_ALL_PREFIXES(ModelLoaderTest, ModelHasValidHashIds);
  FRIEND_TEST_ALL_PREFIXES(ModelLoaderTest, ModelNamesTest);
  FRIEND_TEST_ALL_PREFIXES(ModelLoaderTest, RescheduleFetchTest);
  FRIEND_TEST_ALL_PREFIXES(ModelLoaderTest, UpdateRenderersTest);
  FRIEND_TEST_ALL_PREFIXES(ClientSideDetectionServiceTest,
                           SetEnabledAndRefreshState);
  DISALLOW_COPY_AND_ASSIGN(ModelLoader);
};

}  // namespace safe_browsing

#endif  // CHROME_BROWSER_SAFE_BROWSING_CLIENT_SIDE_MODEL_LOADER_H_
