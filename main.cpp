#include "config/config.h"
#include "modules/module_factory.h"
#include "ui/renderer.h"
#include <vector>

int main() {
  Config config;

  if (!config.load("config.json")) {
    return 1;
  }

  std::vector<Module *> modules;

  for (const auto &name : config.modules) {
    Module *m = createModule(name);
    if (m)
      modules.push_back(m);
  }

  render(modules);

  for (auto m : modules)
    delete m;

  return 0;
}
