#ifndef DEF_CHILD
#define DEF_CHILD
#include "../MovingEntity.hpp"
#include <cstdlib>

class Child : public MovingEntity
{

public:
  Child(int, ResourceManager*);
  void setEnchant(bool);
  bool getSex();
  void kill();
  int update(sf::Time);
  
private:
  double moveSpeed;
  bool sex;
  bool enchanted;
};

#endif
