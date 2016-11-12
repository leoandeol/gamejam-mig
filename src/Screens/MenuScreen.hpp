#ifndef MENUSCREEN_HPP
#define MENUSCREEN_HPP

#include <thread>
#include <SFML/Graphics.hpp>
#include "../Managers/ScreenManager.hpp"
#include "AbstractScreen.hpp"
#include "../Managers/ResourceManager.hpp"
#include "../GUI/Button.hpp"
#include "GameScreen.hpp"

class MenuScreen : public AbstractScreen
{
public:
  MenuScreen(ScreenManager*);
  ~MenuScreen();
  virtual void update(sf::Time);
  virtual void draw();
private:
  sf::Sprite background;
  Button play,tutorial,score,options,credits,exit;
};

#endif
