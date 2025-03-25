#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

#include

const int gravity = 9.8;

int main(){
  // Exit flag
  bool exit = false;

  // Initialize Object
  Position pos(10, 10);
  Object object("A", 10, pos);

  // View
  ObjectView view;

  // Controller
  ObjectController controller(&object->pos, &object, &view);

  view.displayInfo(&object);

  while(!exit){

  }

  return 0;
}
