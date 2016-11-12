#include "Parent.hpp"

Parent::Parent(int lane, int hp) : Enemy(lane, hp)
{
  p_sex = rand()%2;
}

/*void attack(Player player){
  player.loseChild();
  this.run();
  delete this;
}*/

