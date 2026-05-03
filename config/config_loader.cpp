#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

json config;

void loadConfig() {
  std::ifstream file("config.json");
  file >> config;
}
