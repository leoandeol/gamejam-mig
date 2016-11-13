#ifndef DEF_MUR
#define DEF_MUR
#include "nonMovingEntity.hpp"

class Mur : public nonMovingEntity
{
public:
  
private:
  int update(sf::time delta);
  void draw(sf::RenderWindow* w);
}
  
#endif
