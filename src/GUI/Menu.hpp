#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <string>
#include <list>
#include <SFML/Graphics.hpp>
#include "../Managers/ResourceManager.hpp"

class Menu {
public:
  Menu(std::list<std::string>);
  ~Menu();
  void moveUp();
  void moveDown();
  int getCurrent();
  void draw(sf::RenderWindow*);
private:
  std::vector<sf::Text*> strings;
  int current;
  int max;
  int length;
};

#endif
