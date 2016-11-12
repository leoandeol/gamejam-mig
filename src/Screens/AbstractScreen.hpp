#ifndef ABSTRACTSCREEN_HPP
#define ABSTRACTSCREEN_HPP

#include <SFML/Graphics.hpp>
#include "../Managers/ScreenManager.hpp"

class AbstractScreen
{
public:
  AbstractScreen(ScreenManager*);
  virtual void update(sf::Time)=0;
  virtual void draw(sf::RenderWindow*)=0;
private:
  ScreenManager* manager;
};

#endif
