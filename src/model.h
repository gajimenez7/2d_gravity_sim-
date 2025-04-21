#ifndef MODEL_H
#define MODEL_H

#include <string>

// hold position coordinates of a planet
struct Position {
  int x;
  int y;

  Position(int x = 0, int y = 0) : x(x), y(y) {}

  void set(int x, int y);
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
