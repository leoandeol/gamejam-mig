#include "MovingEntity.hpp"

MovingEntity::MovingEntity(int lane) : Entity(lane)
{
  moveSpeed = 1.0;
}

void MovingEntity::acceleration()
{
  if(moveSpeed <= 2.5) moveSpeed += 0.5;
}

void MovingEntity::slowDown()
{
  if(moveSpeed >= 0.5) moveSpeed -= 0.5;
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

