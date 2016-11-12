#ifndef LOADINGSCREEN_HPP
#define LOADINGSCREEN_HPP

#include <thread>
#include <SFML/Graphics.hpp>

class LoadingScren : AbstractScreen
{
public:
  virtual void update(sf::Time);
  virtual void draw(sf::RenderWindow*);
  void load_data();
private:
  std::thread loading_thread;
};

#endif
