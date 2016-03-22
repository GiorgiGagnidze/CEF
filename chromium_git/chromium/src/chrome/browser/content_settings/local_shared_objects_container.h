// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_CONTENT_SETTINGS_LOCAL_SHARED_OBJECTS_CONTAINER_H_
#define CHROME_BROWSER_CONTENT_SETTINGS_LOCAL_SHARED_OBJECTS_CONTAINER_H_

#include <stddef.h>

#include "base/macros.h"
#include "base/memory/ref_counted.h"
#include "base/memory/scoped_ptr.h"
#include "components/content_settings/core/browser/local_shared_objects_counter.h"

class CannedBrowsingDataAppCacheHelper;
class CannedBrowsingDataChannelIDHelper;
class CannedBrowsingDataCookieHelper;
class CannedBrowsingDataDatabaseHelper;
class CannedBrowsingDataFileSystemHelper;
class CannedBrowsingDataIndexedDBHelper;
class CannedBrowsingDataLocalStorageHelper;
class CannedBrowsingDataServiceWorkerHelper;
class CannedBrowsingDataCacheStorageHelper;
class CookiesTreeModel;
class Profile;

class LocalSharedObjectsContainer : public LocalSharedObjectsCounter {
 public:
  explicit LocalSharedObjectsContainer(Profile* profile);
  ~LocalSharedObjectsContainer() override;

  // LocalSharedObjectsCounter:
  size_t GetObjectCount() const override;
  size_t GetObjectCountForDomain(const GURL& url) const override;

  // Empties the container.
  void Reset();

  // Creates a new CookiesTreeModel for all objects in the container,
  // copying each of them.
  scoped_ptr<CookiesTreeModel> CreateCookiesTreeModel() const;

  CannedBrowsingDataAppCacheHelper* appcaches() const {
    return appcaches_.get();
  }
  CannedBrowsingDataChannelIDHelper* channel_ids() const {
    return channel_ids_.get();
  }
  CannedBrowsingDataCookieHelper* cookies() const { return cookies_.get(); }
  CannedBrowsingDataDatabaseHelper* databases() const {
    return databases_.get();
  }
  CannedBrowsingDataFileSystemHelper* file_systems() const {
    return file_systems_.get();
  }
  CannedBrowsingDataIndexedDBHelper* indexed_dbs() const {
    return indexed_dbs_.get();
  }
  CannedBrowsingDataLocalStorageHelper* local_storages() const {
    return local_storages_.get();
  }
  CannedBrowsingDataServiceWorkerHelper* service_workers() const {
    return service_workers_.get();
  }
  CannedBrowsingDataCacheStorageHelper* cache_storages() const {
    return cache_storages_.get();
  }
  CannedBrowsingDataLocalStorageHelper* session_storages() const {
    return session_storages_.get();
  }

 private:
  scoped_refptr<CannedBrowsingDataAppCacheHelper> appcaches_;
  scoped_refptr<CannedBrowsingDataChannelIDHelper> channel_ids_;
  scoped_refptr<CannedBrowsingDataCookieHelper> cookies_;
  scoped_refptr<CannedBrowsingDataDatabaseHelper> databases_;
  scoped_refptr<CannedBrowsingDataFileSystemHelper> file_systems_;
  scoped_refptr<CannedBrowsingDataIndexedDBHelper> indexed_dbs_;
  scoped_refptr<CannedBrowsingDataLocalStorageHelper> local_storages_;
  scoped_refptr<CannedBrowsingDataServiceWorkerHelper> service_workers_;
  scoped_refptr<CannedBrowsingDataCacheStorageHelper> cache_storages_;
  scoped_refptr<CannedBrowsingDataLocalStorageHelper> session_storages_;

  DISALLOW_COPY_AND_ASSIGN(LocalSharedObjectsContainer);
};

#endif  // CHROME_BROWSER_CONTENT_SETTINGS_LOCAL_SHARED_OBJECTS_CONTAINER_H_
