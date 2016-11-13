#include "Entity.hpp"

Entity::Entity(int l)
{
  lane = l;
  //COORDONNEES A FAIRE 
}

Entity::~Entity()
{
}

void Entity::draw(sf::RenderWindow* w)
{
  anim->draw(w);
}


