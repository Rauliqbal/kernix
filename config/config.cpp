#include "config.h"
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

bool Config::load(const std::string &path) {
  std::ifstream file(path);
  if (!file.is_open())
    return false;

  json j;
  file >> j;

  if (j.contains("modules")) {
    modules = j["modules"].get<std::vector<std::string>>();
  }

  return true;
}
