#include "MovingEntity.hpp"

MovingEntity::MovingEntity()
{
  this.moveSpeed = 1.0;
}

void MovingEntity::acceleration()
{
  if(this.moveSpeed <= 9.5) this.moveSpeed += 0.5;
}

void MovingEntity::slowDown()
{
  if(this.moveSpeed >= 0.5) this.moveSpeed -= 0.5;
}

void MovingEntity::moveUp()
{
  if(this.lane < 3){
    this.lane++;
  }
}

void MovingEntity::moveDown()
{
  if(this.lane > 1){
    this.lane--;
  }
}

