#include "controller.h"
#include "model.h"

#include <string>

// Object mutators and accessors
void ObjectController::setObjName(std::string &name) { object->name = name; }

std::string ObjectController::getObjName() const { return object->name; }

void ObjectController::setObjMass(int mass) { object->mass = mass; }

int ObjectController::getObjMass() { return object->mass; }

void ObjectController::setObjPos(int x, int y) { object->pos.set(x, y); }

// Add support for multiple objects
