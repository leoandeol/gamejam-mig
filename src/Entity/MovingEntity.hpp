#ifndef DEF_MOVEENTITY
#define DEF_MOVEENTITY
#include <SFML/Graphics.hpp>
#include "Animation.hpp"
#include "Entity.hpp"

class MoveEntity : public Entity
{

public:
  void acceleration();
  void slowDown();
  void moveUp();
  void moveDown();

private:
  double moveSpeed;

};

#endif
