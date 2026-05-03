#include "cpu.h"
#include <fstream>

std::string CpuModule::getName() const { return "CPU"; }

std::string CpuModule::fetch() const {
  std::ifstream file("/proc/cpuinfo");
  std::string line;

  while (std::getline(file, line)) {
    if (line.find("model name") != std::string::npos) {
      return line.substr(line.find(":") + 2);
    }
  }

  return "Unknown CPU";
}
