#ifndef DEF_NONMOVING
#define DEF_NONMOVING

#include "Entity.hpp"
#include <SFML/Graphics.hpp>

class nonMovingEntity : Entity
{
public:
  void draw(sf::RenderWindow*);
private:
  sf::Sprite* s;

};

#endif
