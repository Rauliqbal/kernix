#include <fstream>
#include <iostream>
#include <string>
#include <sys/utsname.h>

using namespace std;

string getOS() {
  ifstream file("/etc/os-release");
  string line;
  while (getline(file, line)) {
    if (line.find("PRETTY_NAME=") != string::npos) {
      return line.substr(13, line.length() - 14);
    }
  }
  return "Unknown OS";
}

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

string getKernel() {
  struct utsname unameData;
  uname(&unameData);
  return unameData.release;
}

int main() {
  cout << "===== MyFastFetch =====" << endl;
  cout << "OS     : " << getOS() << endl;
  cout << "Kernel : " << getKernel() << endl;
  cout << "CPU    : " << getCPU() << endl;
  cout << "RAM    : " << getRAM() << endl;
  return 0;
}
