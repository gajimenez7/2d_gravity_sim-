#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "controller.h"

struct ObjectView {
 void displayInfo(const Object &object) {
   std::cout << "Object Name: " << object.name << std::endl;
   std::cout << "Object Mass: " << object.mass << "\n" << std::endl;
 }

 void displayPosition(const Object &object) {
   std::cout << object.name << "Position: " << object.pos.getXPos() << ", " << object.pos.getYPos() << std::endl;
 }
};
