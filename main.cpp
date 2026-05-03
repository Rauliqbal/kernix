#include "modules/cpu/cpu.h"
#include "modules/memory/memory.h"
#include <iostream>

using namespace std;

int main() {
  cout << getCPU() << endl;
  cout << getRAM() << endl;

  return 0;
}
