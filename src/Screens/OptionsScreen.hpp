#ifndef OPTIONSSCREEN_HPP
#define OPTIONSSCREEN_HPP

#include <thread>
#include <SFML/Graphics.hpp>
#include "../Managers/ScreenManager.hpp"
#include "AbstractScreen.hpp"

class OptionsScreen : public AbstractScreen
{
public:
  OptionsScreen(ScreenManager*);
  ~OptionsScreen();
  virtual void update(sf::Time);
  virtual void draw();
};

#endif
