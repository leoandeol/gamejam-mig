#ifndef DEF_CHILD
#define DEF_CHILD
#include "../MovingEntity.hpp"
#include <cstdlib>

class Child : public MovingEntity
{

public:
  Child();
  void setEnchanted();
 
private:
  double c_moveSpeed;
  bool c_sex;
  bool c_enchanted;
};

#endif
