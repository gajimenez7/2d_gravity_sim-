#include "controller.h"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

struct ObjectController {
  Pos *pos;
  Object *object;
  ObjectView *view;

  ObjectController(Pos *pos, Object *object, ObjectView *view): pos(pos), object(object), view(view){}

  // Position mutators
  // Y should not be less than 0, as 0 will be ground
  void setPos(int x, int y) {
    pos->x = x;
    pos->y = y;
  }

  int getXPos() {
    return pos->x;
  }

  int getYPos() {
    return pos->y;
  }

  // Object mutators and accessors
  void setObjName(std::string name) {
    object->name = name;
  }

  std::string getObjName() {
    return object->name;
  }

  void setObjMass(int mass) {
    object->mass = mass;
  }

  int getObjMass() {
    return object->mass;
  }

  void setObjPos(int x, int y) {
    object->pos.setPos(x, y);
  }

  // Add support for multiple objects
};
