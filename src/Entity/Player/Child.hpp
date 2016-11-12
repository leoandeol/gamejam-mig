#ifndef DEF_CHILD
#define DEF_CHILD
#include <string>
#include "Entity.h"
#include <cstdlib>

class Child : Entity
{

public:
  Child(string);
  void accelerate();
  void slowDown();
  
private:
  std::string c_name;
  double c_moveSpeed;
  bool c_sex;
  bool c_enchanted;
}

#endif
