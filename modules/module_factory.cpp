#include "module_factory.h"
#include "cpu/cpu.h"
// nanti tambah:
// #include "memory/memory.h"
// #include "os/os.h"

Module *createModule(const std::string &name) {
  if (name == "cpu")
    return new CpuModule();
  // if (name == "memory") return new MemoryModule();
  // if (name == "os") return new OsModule();

  return nullptr;
}
