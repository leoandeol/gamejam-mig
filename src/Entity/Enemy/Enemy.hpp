#ifndef DEF_ENEMY
#define DEF_ENEMY

#include "Entity.hpp"

class Enemy : public Entity
{
  
public:
  void Attack();
  
private:
  int hp;

};

#endif
