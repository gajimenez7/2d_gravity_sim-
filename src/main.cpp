#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

#include "controller.h"
#include "model.h"
#include "view.h"

const double gravity = 9.8;

int main() {
  // Exit flag
  bool exit = false;

  // Initialize Object
  Position pos(10, 10);
  Object object("A", 10, pos);

  // View
  ObjectView view;

  // Controller
  ObjectController controller(&object);

  view.displayInfo(object);

  /*
  while (!exit) {
  }
  */

  return 0;
}
