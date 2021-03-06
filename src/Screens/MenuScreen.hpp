#ifndef MENUSCREEN_HPP
#define MENUSCREEN_HPP

#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "../Managers/ScreenManager.hpp"
#include "../Managers/ResourceManager.hpp"
#include "GameScreen.hpp"
#include "../GUI/Menu.hpp"

class MenuScreen : public AbstractScreen
{
public:
  MenuScreen(ScreenManager*);
  ~MenuScreen();
  virtual void update(sf::Time);
  virtual void draw();
private:
  Menu* menu;
  sf::Music* music;
  sf::Sprite background;
  std::vector<std::string*> s;
};

#endif
