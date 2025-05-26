#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "model.h"
#include <string>
#include <unordered_map>

class SimulationController {
private:
  ObjectSystem objSys;
  std::unordered_map<int, size_t> idToIndex;

public:
  void addObject(int id, const std::string &name, int mass, Position pos);
  void setObjectPosition(int id, int x, int y);
  void setObjectMass(int id, int mass);
  void updatePhysics();

  void applyGravitationalForce(int id1, int id2);
};

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
