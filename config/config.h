#ifndef CONFIG_H
#define CONFIG_H

#include <string>
#include <vector>

class Config {
public:
  std::vector<std::string> modules;

  bool load(const std::string &path);
};

#endif
