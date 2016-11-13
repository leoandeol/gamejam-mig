#ifndef DEF_PLAYER
#define DEF_PLAYER
#include <string>
#include <vector>
#include "Child.hpp"
#include "../MovingEntity.hpp"


class Player : public MovingEntity
{

public:
  Player(int);
  ~Player();
  void wolfFlute();
  void bomb();
  void enchantChildren();
  void getAttacked();
  void loseChild();
  //void joueNote();
  std::string toString();
  int update(sf::Time delta);

private:
  std::vector<Child*> child;
};


#endif
