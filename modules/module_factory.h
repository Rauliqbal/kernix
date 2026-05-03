#ifndef MODULE_FACTORY_H
#define MODULE_FACTORY_H

#include "../modules/module.h"
#include <string>

Module *createModule(const std::string &name);

#endif
