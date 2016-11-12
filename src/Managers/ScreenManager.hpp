#ifndef SCREENMANAGER_HPP
#define SCREENMANAGER_HPP

#include <stack>
#include <SFML/Graphics.hpp>
#include "../Screens/AbstractScreen.hpp"

class ScreenManager
{
public:
  ScreenManager(sf::RenderWindow*);
  ~ScreenManager();
  sf::RenderWindow* getWindow();
  void update(sf::Time);
  void draw();
  void push_screen(AbstractScreen*);
  void pop_screen();
private:
  std::stack<AbstractScreen*> screens;
  sf::RenderWindow* window;
};

#endif
