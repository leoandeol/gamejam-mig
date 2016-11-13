#ifndef LOADINGSCREEN_HPP
#define LOADINGSCREEN_HPP

#include <thread>
#include <vector>
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
  sf::Sprite background, loading_bar, loading_frame;
  std::thread loading_thread;
  const int NB_ELEMENTS_TO_LOAD = 3;
  int nb_elements_loaded;
  double percent_loaded;
  std::vector<char*> textures_to_load;
};

#endif
