#ifndef DEF_CHILD
#define DEF_CHILD
#include "../MovingEntity.hpp"
#include <cstdlib>

class Child : public MovingEntity
{

  enum Action {
    Walk,
    Fall,
    Cry,
    Jump,
  };
  
public:
  Child(int, ResourceManager*);
  void setEnchant(bool);
  bool getSex();
  void kill();
  int update(sf::Time);
  Action getAction();
  void setAction(Action);
  
private:
  double moveSpeed;
  bool sex;
  bool enchanted;
  Action act;
  Animation* currentAnim;
};

#endif
