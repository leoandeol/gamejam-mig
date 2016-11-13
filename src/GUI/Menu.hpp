#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <SFML/Graphics.hpp>
#include "../Managers/ResourceManager.hpp"

class Menu {
public:
  Menu(const std::string,const std::string,const std::string);
  ~Menu();
  void moveUp();
  void moveDown();
  int getCurrent();
  void draw(sf::RenderWindow*);
  
private:
  sf::Text** strings;
  sf::CircleShape shape;
  int current;
  int length;
};

#endif
