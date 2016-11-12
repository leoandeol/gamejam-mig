#include "Entity.hpp"

Entity::Entity(int l)
{
  lane = l;
  //COORDONNEES A FAIRE 
}

Entity::~Entity()
{
  delete anim;
}

void Entity::draw(sf::RenderWindow* w)
{
}


