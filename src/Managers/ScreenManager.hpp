#ifndef SCREENMANAGER_HPP
#define SCREENMANAGER_HPP

#include <stack>
#include <SFML/Graphics.hpp>
#include "../Screens/AbstractScreen.hpp"
#include "../Managers/ResourceManager.hpp"

class ScreenManager
{
public:
  ScreenManager(sf::RenderWindow*);
  ~ScreenManager();
  sf::RenderWindow* getWindow();
  ResourceManager* getRes();
  void update(sf::Time);
  void draw();
  void push_screen(AbstractScreen*);
  void pop_screen();
private:
  std::stack<AbstractScreen*> screens;
  sf::RenderWindow* window;
  ResourceManager* res;
};

#endif
