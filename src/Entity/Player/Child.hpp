#ifndef DEF_CHILD
#define DEF_CHILD
#include "../MovingEntity.hpp"
#include <cstdlib>

class Child : public MovingEntity
{

public:
  Child(int);
  void setEnchanted();
  void setDesenchanted();
  bool getSex();
  void kill();
  int update(sf::Time);
  
private:
  double c_moveSpeed;
  bool c_sex;
  bool c_enchanted;
};

#endif
