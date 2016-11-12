#ifndef DEF_PLAYER
#define DEF_PLAYER
#include <vector>
#include "Entity.hpp"


class Player : Entity
{

public:
  Player();
  void scareWolves();
  void callRats();
  void enchantChildren();

private:
  std::vector<Child> child;
};


#endif
