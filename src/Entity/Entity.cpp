#include "Entity.hpp"

Entity::Entity(Animation anim, int lane)
{
  this.e_anim = anim;
  this.e_lane = lane;
  //COORDONNEES A FAIRE 
}

Entity::~Entity()
{
  delete this.e_anim;
  delete this.e_coord;
}

void Entity::moveUp()
{
  if(this.lane < 3){
    this.lane++;
  }
}

void Entity::moveDown()
{
  if(this.lane > 1){
    this.lane--;
  }
}
