#ifndef DEF_MUR
#define DEF_MUR
#include "Entite.hpp"

class Mur : public Entite
{
public:
  
private:
  int update(sf::time delta);
  void draw(sf::RenderWindow* w);
}
  
#endif
