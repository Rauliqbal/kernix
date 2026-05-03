#ifndef CPU_H
#define CPU_H

#include "../module.h"

class CpuModule : public Module {
public:
  std::string getName() const override;
  std::string fetch() const override;
};

#endif
