#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "model.h"
#include <string>

struct ObjectController {
  Object *object;

  ObjectController(Object *object) : object(object) {}

  // Object struct functions
  void setObjName(std::string &name);

  std::string getObjName() const;

  void setObjMass(int mass);

  int getObjMass();

  void setObjPos(int x, int y);
};

#endif // !CONTROLLER_H
