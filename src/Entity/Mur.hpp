#ifndef DEF_MUR
#define DEF_MUR
#include "nonMovingEntity.hpp"
#include <SFML/Graphics.hpp>

class Mur : public nonMovingEntity
{
public:
  
private:
  int update(sf::time delta);
  void draw(sf::RenderWindow* w);
}
  
#endif
