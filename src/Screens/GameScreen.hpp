#ifndef GAMESCREEN_HPP
#define GAMESCREEN_HPP

#include <SFML/Graphics.hpp>
#include "../Managers/ScreenManager.hpp"
#include "AbstractScreen.hpp"

class GameScreen : public AbstractScreen
{
public:
  GameScreen(ScreenManager*);
  ~GameScreen();
  virtual void update(sf::Time);
  virtual void draw();
};

#endif
