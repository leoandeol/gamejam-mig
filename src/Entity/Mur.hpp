#ifndef DEF_MUR
#define DEF_MUR
#include "nonMovingEntity.hpp"
#include <SFML/Graphics.hpp>

class Mur : public nonMovingEntity
{  
public:
  int update(sf::Time);
};

#endif
