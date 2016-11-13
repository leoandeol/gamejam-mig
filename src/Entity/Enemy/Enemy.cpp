#include "Enemy.hpp"

Enemy::Enemy(int lane, int hp, ResourceManager* rm) : MovingEntity(lane, rm)
{
  hp = hp;
}
 
