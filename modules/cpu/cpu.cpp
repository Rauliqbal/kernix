#include "cpu.h"
#include <fstream>
#include <string>

using namespace std;

string getCPU() {
  ifstream file("/proc/cpuinfo");
  string line;

  while (getline(file, line)) {
    if (line.find("model name") != string::npos) {
      return line.substr(line.find(":") + 2);
    }
  }

  return "Unknown CPU";
}
