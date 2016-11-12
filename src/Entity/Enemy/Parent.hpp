#ifndef DEF_PARENT
#define DEF_PARENT
#include "Enemy.hpp"
#include <cstdlib>

class Parent : Enemy
{

public:
  Parent(int, int);
  void attack();
  
private:
  int p_sex;

};

#endif
