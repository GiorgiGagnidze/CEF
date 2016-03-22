// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SHELL_RUNNER_INIT_H_
#define MOJO_SHELL_RUNNER_INIT_H_

#include "base/native_library.h"

namespace mojo {
namespace shell {

// Initialization routines shared by desktop and Android main functions.
void InitializeLogging();

void WaitForDebuggerIfNecessary();

// Calls "LibraryEarlyInitialization" in |app_library| if it exists. We do
// common initialization there now.
void CallLibraryEarlyInitialization(base::NativeLibrary app_library);

}  // namespace shell
}  // namespace mojo

#endif  // MOJO_SHELL_RUNNER_INIT_H_
