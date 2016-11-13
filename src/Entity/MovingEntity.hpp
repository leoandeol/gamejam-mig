#ifndef DEF_MOVEENTITY
#define DEF_MOVEENTITY
#include <SFML/Graphics.hpp>
#include "Animation.hpp"
#include "Entity.hpp"
#include "../Managers/ResourceManager.hpp"

class MovingEntity : public Entity
{

public:
  MovingEntity(int, ResourceManager*);
  void acceleration();
  void slowDown();
  void moveUp();
  void moveDown();
  void draw(sf::RenderWindow*);

protected:
  double moveSpeed;
  Animation* anim;

};

#endif
