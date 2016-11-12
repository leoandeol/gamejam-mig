#include "Parent.hpp"

Parent::Parent() : Enemy()
{
  this.p_sex = rand()%2;
}

void attack(Player player){
  player.loseChild();
  delete this;
}

