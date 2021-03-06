// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SHELL_RUNNER_CHILD_TEST_NATIVE_MAIN_H_
#define MOJO_SHELL_RUNNER_CHILD_TEST_NATIVE_MAIN_H_

namespace mojo {
class ApplicationDelegate;
namespace shell {

int TestNativeMain(mojo::ApplicationDelegate* application_delegate);

}  // namespace shell
}  // namespace mojo

#endif  // MOJO_SHELL_RUNNER_CHILD_TEST_NATIVE_MAIN_H_
