#ifndef DEF_MOVEENTITY
#define DEF_MOVEENTITY
#include <SFML/Graphics.hpp>
#include "Animation.hpp"
#include "Entity.hpp"

class MovingEntity : public Entity
{

public:
  MovingEntity(int);
  void acceleration();
  void slowDown();
  void moveUp();
  void moveDown();

private:
  double moveSpeed;

};

#endif
