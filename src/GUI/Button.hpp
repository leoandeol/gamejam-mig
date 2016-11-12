#ifndef BUTTON_HPP
#define BUTTON_HPP

#include <string>
#include <SFML/Graphics.hpp>
#include "../Managers/ResourceManager.hpp"

class Button
{
public:
  Button(std::string,sf::IntRect);
  ~Button();
  sf::IntRect getHitbox();
  void draw(sf::RenderWindow*);
private:
  sf::Sprite sprite;
  sf::IntRect hitbox;
  sf::Text text;
};

#endif
