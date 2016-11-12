#ifndef DEF_PLAYER
#define DEF_PLAYER
#include <string>
#include <vector>
#include "Child.hpp"
#include "../MovingEntity.hpp"


class Player : public MovingEntity
{

public:
  Player();
  ~Player();
  void wolfFlute();
  //void bomb();
  void enchantChildren();
  void getAttacked();
  void loseChild();
  void toString();

private:
  std::vector<Child*> child;
};


#endif
