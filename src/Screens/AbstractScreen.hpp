#ifndef ABSTRACTSCREEN_HPP
#define ABSTRACTSCREEN_HPP

#include <SFML/Graphics.hpp>
//#include "../Managers/ScreenManager.hpp"

class ScreenManager;

class AbstractScreen
{
public:
  AbstractScreen(ScreenManager*);
  virtual void update(sf::Time)=0;
  virtual void draw()=0;
protected:
  ScreenManager* manager;
  sf::RenderWindow* window;
};

#endif
