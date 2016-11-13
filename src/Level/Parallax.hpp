#ifndef PARALLAX_HPP
#define PARALLAX_HPP

#include <SFML/Graphics.hpp>
#include "../Managers/ResourceManager.hpp"

class Parallax
{
public:
  Parallax();
  ~Parallax();
  void update(sf::Time);
  void draw(sf::RenderWindow*);
private:
  sf::Sprite *background, *background2, *deep_para, *deep_para2, *close_para, *close_para2;
  const double bg_speed = 10;
  const double dp_speed = 15;
  const double cl_speed = 20;
};

#endif
