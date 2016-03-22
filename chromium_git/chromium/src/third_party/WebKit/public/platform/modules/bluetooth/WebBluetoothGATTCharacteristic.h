// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef WebBluetoothGATTCharacteristic_h
#define WebBluetoothGATTCharacteristic_h

#include "public/platform/WebVector.h"

namespace blink {

// An object through which the embedder can trigger events on a Document-bound
// Web Bluetooth GATT Characteristic object.
class WebBluetoothGATTCharacteristic {
public:
    // Used to notify blink that the characteristic's value changed.
    virtual void dispatchCharacteristicValueChanged(const WebVector<uint8_t>&) = 0;
};

} // namespace blink

#endif // WebBluetoothGATTCharacteristicDelegate_h
