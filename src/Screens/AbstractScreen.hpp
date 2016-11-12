#ifndef ABSTRACTSCREEN_HPP
#define ABSTRACTSCREEN_HPP

#include <SFML/Graphics.hpp>

class AbstractScreen
{
public:
  virtual void update(sf::Time)=0;
  virtual void draw(sf::RenderWindow*)=0;
private:
  
};

#endif
