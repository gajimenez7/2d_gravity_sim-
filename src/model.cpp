#include <string>

// hold position coordinates of a planet
struct Position {
  int x;
  int y;

  Position(int x, int y): x(x), y(y) {}
};

struct Object {
  // planet name
  std::string name;
  // mass value
  int mass;
  // position of planet
  Pos pos;

  Object(std::string name, int mass, Position pos): name(name), mass(mass), pos(pos){}
};
