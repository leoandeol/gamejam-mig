#include "nonMovingEntity.hpp"

nonMovingEntity::nonMovingEntity(int l, ResourceManager *r, sf::Sprite* sp) : Entity(l, r)  
{
  s = sp;
}
  

void nonMovingEntity::draw(sf::RenderWindow* w)
{
  w->draw(*s);
}
