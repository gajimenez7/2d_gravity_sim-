#ifndef VIEW_H
#define VIEW_H

#include "model.h"

struct ObjectView {
  void displayInfo(const Object &object);
  void displayPosition(const Object &object);
};

#endif // !VIEW_H
