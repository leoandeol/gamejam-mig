#include "Entity.hpp"

Entity::Entity(int l, ResourceManager* r)
{
  lane = l;
  rm = r;
  //COORDONNEES A FAIRE 
}

int Entity::getLane()
{
  return lane;
}

Entity::~Entity()
{
  
}


