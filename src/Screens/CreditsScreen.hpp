#ifndef CREDITSSCREEN_HPP
#define CREDITSSCREEN_HPP

#include <thread>
#include <SFML/Graphics.hpp>
#include "../Managers/ScreenManager.hpp"
#include "AbstractScreen.hpp"

class CreditsScreen : public AbstractScreen
{
public:
  CreditsScreen(ScreenManager*);
  ~CreditsScreen();
  virtual void update(sf::Time);
  virtual void draw(sf::RenderWindow*);
};

#endif
