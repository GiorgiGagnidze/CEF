/* -*- c++ -*- */
/*
 * Copyright (c) 2012 The Chromium Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// A class containing information regarding a socket connection to a
// service runtime instance.

#ifndef COMPONENTS_NACL_RENDERER_PLUGIN_SERVICE_RUNTIME_H_
#define COMPONENTS_NACL_RENDERER_PLUGIN_SERVICE_RUNTIME_H_

#include "base/macros.h"
#include "base/memory/scoped_ptr.h"
#include "base/process/process_handle.h"
#include "components/nacl/renderer/plugin/utility.h"
#include "ipc/ipc_sync_channel.h"
#include "ppapi/cpp/completion_callback.h"

namespace plugin {

class Plugin;
class ServiceRuntime;

// Struct of params used by StartSelLdr.  Use a struct so that callback
// creation templates aren't overwhelmed with too many parameters.
struct SelLdrStartParams {
  SelLdrStartParams(const std::string& url,
                    const PP_NaClFileInfo& file_info,
                    PP_NaClAppProcessType process_type)
      : url(url),
        file_info(file_info),
        process_type(process_type) {
  }
  std::string url;
  PP_NaClFileInfo file_info;
  PP_NaClAppProcessType process_type;
};

//  ServiceRuntime abstracts a NativeClient sel_ldr instance.
class ServiceRuntime {
 public:
  ServiceRuntime(Plugin* plugin,
                 PP_Instance pp_instance,
                 bool main_service_runtime,
                 bool uses_nonsfi_mode);
  // The destructor terminates the sel_ldr process.
  ~ServiceRuntime();

  // Spawn the sel_ldr instance.
  void StartSelLdr(const SelLdrStartParams& params,
                   pp::CompletionCallback callback);

  Plugin* plugin() const { return plugin_; }
  void Shutdown();

  bool main_service_runtime() const { return main_service_runtime_; }

  scoped_ptr<IPC::SyncChannel> TakeTranslatorChannel() {
    return scoped_ptr<IPC::SyncChannel>(translator_channel_.release());
  }

  // Returns the PID of the subprocess.  This PID is needed for copying
  // handles to the subprocess on Windows.
  base::ProcessId get_process_id() { return process_id_; }

 private:
  Plugin* plugin_;
  PP_Instance pp_instance_;
  bool main_service_runtime_;
  bool uses_nonsfi_mode_;

  scoped_ptr<IPC::SyncChannel> translator_channel_;
  base::ProcessId process_id_;

  DISALLOW_COPY_AND_ASSIGN(ServiceRuntime);
};

}  // namespace plugin

#endif  // COMPONENTS_NACL_RENDERER_PLUGIN_SERVICE_RUNTIME_H_
