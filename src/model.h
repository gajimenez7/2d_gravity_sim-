#ifndef MODEL_H
#define MODEL_H

#include <string>
#include <unordered_map>
#include <vector>

// hold position coordinates of a planet
struct Position {
  int x;
  int y;

  Position(int x = 0, int y = 0) : x(x), y(y) {}

  void set(int x, int y);
};

struct ObjectSystem {
  // obejct ids
  std::vector<int> ids;
  // object names
  std::vector<std::string> names;
  // object masses
  std::vector<int> masses;
  // object positions
  std::vector<Position> positions;

  void addObject(int id, const std::string &name, int mass, Position pos);
  size_t getIndexById(int id) const;
};

struct Object {
  // planet name
  std::string name;
  // mass value
  int mass;
  // position of planet
  Position pos;

  Object(std::string name, int mass, Position pos)
      : name(name), mass(mass), pos(pos) {}

  int getXPos() const { return pos.x; }
  int getYPos() const { return pos.y; }
};

#endif // !MODEL_H
