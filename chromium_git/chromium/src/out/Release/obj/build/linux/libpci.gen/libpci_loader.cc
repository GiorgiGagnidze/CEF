// This is generated file. Do not modify directly.
// Path to the code generator: tools/generate_library_loader/generate_library_loader.py .

#include "out/Release/gen/library_loaders/libpci.h"

#include <dlfcn.h>

// Put these sanity checks here so that they fire at most once
// (to avoid cluttering the build output).
#if !defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DLOPEN) && !defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DT_NEEDED)
#error neither LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DLOPEN nor LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DT_NEEDED defined
#endif
#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DLOPEN) && defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DT_NEEDED)
#error both LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DLOPEN and LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DT_NEEDED defined
#endif

LibPciLoader::LibPciLoader() : loaded_(false) {
}

LibPciLoader::~LibPciLoader() {
  CleanUp(loaded_);
}

bool LibPciLoader::Load(const std::string& library_name) {
  if (loaded_)
    return false;

#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DLOPEN)
  library_ = dlopen(library_name.c_str(), RTLD_LAZY);
  if (!library_)
    return false;
#endif


#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DLOPEN)
  pci_alloc =
      reinterpret_cast<decltype(this->pci_alloc)>(
          dlsym(library_, "pci_alloc"));
#endif
#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DT_NEEDED)
  pci_alloc = &::pci_alloc;
#endif
  if (!pci_alloc) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DLOPEN)
  pci_init =
      reinterpret_cast<decltype(this->pci_init)>(
          dlsym(library_, "pci_init"));
#endif
#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DT_NEEDED)
  pci_init = &::pci_init;
#endif
  if (!pci_init) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DLOPEN)
  pci_cleanup =
      reinterpret_cast<decltype(this->pci_cleanup)>(
          dlsym(library_, "pci_cleanup"));
#endif
#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DT_NEEDED)
  pci_cleanup = &::pci_cleanup;
#endif
  if (!pci_cleanup) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DLOPEN)
  pci_scan_bus =
      reinterpret_cast<decltype(this->pci_scan_bus)>(
          dlsym(library_, "pci_scan_bus"));
#endif
#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DT_NEEDED)
  pci_scan_bus = &::pci_scan_bus;
#endif
  if (!pci_scan_bus) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DLOPEN)
  pci_fill_info =
      reinterpret_cast<decltype(this->pci_fill_info)>(
          dlsym(library_, "pci_fill_info"));
#endif
#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DT_NEEDED)
  pci_fill_info = &::pci_fill_info;
#endif
  if (!pci_fill_info) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DLOPEN)
  pci_lookup_name =
      reinterpret_cast<decltype(this->pci_lookup_name)>(
          dlsym(library_, "pci_lookup_name"));
#endif
#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DT_NEEDED)
  pci_lookup_name = &::pci_lookup_name;
#endif
  if (!pci_lookup_name) {
    CleanUp(true);
    return false;
  }


  loaded_ = true;
  return true;
}

void LibPciLoader::CleanUp(bool unload) {
#if defined(LIBRARY_LOADER_OUT_RELEASE_GEN_LIBRARY_LOADERS_LIBPCI_H_DLOPEN)
  if (unload) {
    dlclose(library_);
    library_ = NULL;
  }
#endif
  loaded_ = false;
  pci_alloc = NULL;
  pci_init = NULL;
  pci_cleanup = NULL;
  pci_scan_bus = NULL;
  pci_fill_info = NULL;
  pci_lookup_name = NULL;

}
