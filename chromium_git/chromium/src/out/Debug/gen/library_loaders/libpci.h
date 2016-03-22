// This is generated file. Do not modify directly.
// Path to the code generator: tools/generate_library_loader/generate_library_loader.py .

#ifndef LIBRARY_LOADER_OUT_DEBUG_GEN_LIBRARY_LOADERS_LIBPCI_H
#define LIBRARY_LOADER_OUT_DEBUG_GEN_LIBRARY_LOADERS_LIBPCI_H

extern "C" {
#include <pci/pci.h>

}
#define LIBRARY_LOADER_OUT_DEBUG_GEN_LIBRARY_LOADERS_LIBPCI_H_DLOPEN


#include <string>

class LibPciLoader {
 public:
  LibPciLoader();
  ~LibPciLoader();

  bool Load(const std::string& library_name)
      __attribute__((warn_unused_result));

  bool loaded() const { return loaded_; }

  decltype(&::pci_alloc) pci_alloc;
  decltype(&::pci_init) pci_init;
  decltype(&::pci_cleanup) pci_cleanup;
  decltype(&::pci_scan_bus) pci_scan_bus;
  decltype(&::pci_fill_info) pci_fill_info;
  decltype(&::pci_lookup_name) pci_lookup_name;


 private:
  void CleanUp(bool unload);

#if defined(LIBRARY_LOADER_OUT_DEBUG_GEN_LIBRARY_LOADERS_LIBPCI_H_DLOPEN)
  void* library_;
#endif

  bool loaded_;

  // Disallow copy constructor and assignment operator.
  LibPciLoader(const LibPciLoader&);
  void operator=(const LibPciLoader&);
};

#endif  // LIBRARY_LOADER_OUT_DEBUG_GEN_LIBRARY_LOADERS_LIBPCI_H
