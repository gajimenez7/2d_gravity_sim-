#include "view.h"
#include "model.h"
#include <iostream>

void ObjectView::displayInfo(const Object &object) {
  std::cout << "Object Name: " << object.name << std::endl;
  std::cout << "Object Mass: " << object.mass << "\n" << std::endl;
}

void ObjectView::displayPosition(const Object &object) {
  std::cout << object.name << " Position: " << object.getXPos() << ", "
            << object.getYPos() << std::endl;
}
