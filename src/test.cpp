#include <cmath>
#include <iostream>

// gravity constant
const double g = 9.8;

struct Object {
  int mass;
  int radius;
  float restitution;
  float velocity;
  float x;
  float y;

  Object(int mass, int radius, float restitution, float velocity, float x,
         float y)
      : mass(mass), radius(radius), restitution(restitution),
        velocity(velocity), x(x), y(y) {}
};

void printPos(const Object *object) {
  std::cout << "Position: " << object->x << ", " << object->y << std::endl;
}

float calculateG(const Object *object) {
  return (g * object->mass) / std::pow(object->radius, 2);
}

float calculateFF(const int t) { return 0.5 * g * (std::pow(t, 2)); }

float calculateVel(const int height) { return std::sqrt(2 * g * height); }

float calculateBounce(const float rest, const int initHeight) {
  return std::pow(rest, 2) * initHeight;
}

int main() {
  // time variable
  int t = 0;

  int initialHeight = 10;
  int bounceHeight = initialHeight;

  // Object struct values

  int oMass;
  float oRad, oRest, oVel, oX, oY;

  oMass = 20;
  oRad = 10;
  oRest = 1;
  oVel = 0.0;
  oX = 10;
  oY = initialHeight;

  Object object(oMass, oRad, oRest, oVel, oX, oY);

  std::cout << "Object starting at " << object.x << " " << object.y << "\n"
            << std::endl;

  while (bounceHeight > 0.1) {
    if (object.y > 0) {
      object.y = std::max(0.0f, object.y - calculateFF(t));
    }
    /*
    if(object.y == 1){
      object.velocity = calculateVel(object.y);
    }*/
    else {
      bounceHeight = calculateBounce(object.restitution, bounceHeight);
      object.y += bounceHeight;
    }
    t++;
    printPos(&object);
  }
  return 0;
}
