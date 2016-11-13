#include "MovingEntity.hpp"

MovingEntity::MovingEntity(int lane, ResourceManager* rm) : Entity(lane, rm)
{
  moveSpeed = 1.0;
}

void MovingEntity::acceleration()
{
  if(moveSpeed <= 2) moveSpeed += 0.5;
}

void MovingEntity::slowDown()
{
  if(moveSpeed >= 1) moveSpeed -= 0.5;
}

void MovingEntity::moveUp()
{
  if(lane < 3){
    lane++;
  }
}

void MovingEntity::moveDown()
{
  if(lane > 1){
    lane--;
  }
}

void MovingEntity::MovingEntity()
{
  w->draw(anim*);
}

