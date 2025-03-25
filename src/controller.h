#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <string>

struct ObjectController {
  // Position struct functions
  void setPos(int x, int y);

  int getXPos();

  int getYPos();

  // Object struct functions
  void setObjName(std::string name);

  std::string getObjName();


  void setObjMass(int mass);

  int getObjMass();

  void setObjPos(int x, int y);
};

#endif // !CONTROLLER_H
