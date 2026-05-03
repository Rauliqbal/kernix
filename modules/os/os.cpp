#include "os.h"
#include <fstream>
#include <string>

using namespace std;

string getOS() {
  ifstream file("/etc/os-release");
  string line;

  while (getline(file, line)) {
    if (line.find("PRETTY_NAME") != string::npos) {
      return line.substr(13, line.length() - 14);
    }
  }

  return "Uknown OS";
}
