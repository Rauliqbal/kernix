#include "memory.h"
#include <fstream>
#include <string>

using namespace std;

string getRAM() {
  ifstream file("/proc/meminfo");
  string line;

  while (getline(file, line)) {
    if (line.find("MemTotal") != string::npos) {
      return line.substr(line.find(":") + 2);
    }
  }

  return "Unknown RAM";
}
