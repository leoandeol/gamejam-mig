#ifndef SCREENMANAGER_HPP
#define SCREENMANAGER_HPP

#include <stack>
#include <SFML/Graphics.hpp>
#include "../Screens/AbstractScreen.hpp"

class ScreenManager
{
public:
  ScreenManager(sf::RenderWindow&);
  ~ScreenManager();
  void update(sf::Time);
  void draw();
  void push_screen(AbstractScreen);
  AbstractScreen pop();
private:
  std::stack<AbstractScreen> screens;
  sf::Renderwindow* window;
};

#endif
