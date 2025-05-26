#include "model.h"
#include <stdexcept>

void Position::set(int x, int y) {
  if (y >= 0) {
    x = x;
    y = y;
  }
}

void ObjectSystem::addObject(int id, const std::string &name, int mass,
                             Position pos) {
  ids.push_back(id);
  names.push_back(name);
  masses.push_back(mass);
  positions.push_back(pos);
}

size_t ObjectSystem::getIndexById(int id) const {
  for (size_t i = 0; i < ids.size(); ++i) {
    if (ids[i] == id) {
      return i;
    }
  }
  throw std::runtime_error("Object with given ID not found...");
}
