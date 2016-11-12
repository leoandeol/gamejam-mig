#ifndef DEF_ENEMY
#define DEF_ENEMY

#include "../MovingEntity.hpp"

class Enemy : public MovingEntity
{
  
public:
  Enemy(int, int);
  void attack();
  void run();
  
private:
  int hp;

};

#endif
