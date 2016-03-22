// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MASH_SHELF_SHELF_MODEL_OBSERVER_H_
#define MASH_SHELF_SHELF_MODEL_OBSERVER_H_

#include "mash/shelf/shelf_item_types.h"

namespace mash {
namespace shelf {

struct ShelfItem;

class ShelfModelObserver {
 public:
  // Invoked after an item has been added to the model.
  virtual void ShelfItemAdded(int index) = 0;

  // Invoked after an item has been removed. |index| is the index the item was
  // at.
  virtual void ShelfItemRemoved(int index, ShelfID id) = 0;

  // Invoked after an item has been moved. See ShelfModel::Move() for details
  // of the arguments.
  virtual void ShelfItemMoved(int start_index, int target_index) = 0;

  // Invoked when the state of an item changes. |old_item| is the item
  // before the change.
  virtual void ShelfItemChanged(int index, const ShelfItem& old_item) = 0;

  // Invoked when shelf status is changed.
  virtual void ShelfStatusChanged() = 0;

 protected:
  virtual ~ShelfModelObserver() {}
};

}  // namespace shelf
}  // namespace mash

#endif  // MASH_SHELF_SHELF_MODEL_OBSERVER_H_
