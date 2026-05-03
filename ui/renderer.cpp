#include "renderer.h"
#include "../core/ascii.h"
#include <algorithm>
#include <cstddef>
#include <iostream>
#include <vector>

using namespace std;

void render(const std::vector<Module *> &modules) {
  vector<string> ascii = getAscii();
  vector<string> info;

  for (auto m : modules) {
    info.push_back(m->getName() + ": " + m->fetch());
  }

  size_t maxLines = max(ascii.size(), info.size());

  for (size_t i = 0; i < maxLines; i++) {
    // kiri (ASCII)
    if (i < ascii.size()) {
      std::cout << ascii[i];
    }

    // jarak antar kolom
    std::cout << "   ";

    // kanan (info)
    if (i < info.size()) {
      std::cout << info[i];
    }

    std::cout << std::endl;
  }
}
