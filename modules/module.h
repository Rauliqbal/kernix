#ifndef MODULE_H
#define MODULE_H

#include <string>

class Module {
public:
  virtual std::string getName() const = 0;
  virtual std::string fetch() const = 0;

  virtual ~Module() {}
};

#endif
