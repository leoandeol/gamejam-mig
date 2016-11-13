#ifndef PARALLAX_HPP
#define PARALLAX_HPP

#include <SFML/Graphics.hpp>
#include "../Managers/ResourceManager.hpp"

class Parallax
{
public:
  Parallax(ResourceManager*);
  ~Parallax();
  void update(sf::Time);
  void draw(sf::RenderWindow*);
private:
  sf::Sprite *a1,*a2,*b1,*b2,*c1,*c2,*d1,*d2,*e1,*e2,*f1,*f2;
  const double a_speed = 0.2;
  const double b_speed = 0.4;
  const double c_speed = 0.6;
  const double d_speed = 0.8;
  const double e_speed = 1.0;
  const double f_speed = 1.2;
};

#endif
