#include "Parent.hpp"

Parent::Parent(int lane, int hp, ResourceManager* rm) : Enemy(lane, hp, rm)
{
  p_sex = rand()%2;
}

/*void attack(Player player){
  player.loseChild();
  this.run();
  delete this;
}*/

