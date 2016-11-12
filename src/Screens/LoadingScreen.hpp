#ifndef LOADINGSCREEN_HPP
#define LOADINGSCREEN_HPP

#include <thread>
#include <SFML/Graphics.hpp>
#include "../Managers/ScreenManager.hpp"
#include "AbstractScreen.hpp"
#include "MenuScreen.hpp"

class LoadingScreen : public AbstractScreen
{
public:
  LoadingScreen(ScreenManager*);
  ~LoadingScreen();
  virtual void update(sf::Time);
  virtual void draw();
  void load_data();
private:
  sf::Sprite background;
  std::thread loading_thread;
};

#endif
