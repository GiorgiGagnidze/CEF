// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SHELL_STANDALONE_ANDROID_MAIN_H_
#define MOJO_SHELL_STANDALONE_ANDROID_MAIN_H_

#include <jni.h>

namespace mojo {
namespace shell {

class Context;

bool RegisterShellMain(JNIEnv* env);

Context* GetContext();

}  // namespace shell
}  // namespace mojo

#endif  // MOJO_SHELL_STANDALONE_ANDROID_MAIN_H_
