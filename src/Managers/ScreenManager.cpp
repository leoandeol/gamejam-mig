#include "ScreenManager.hpp"

ScreenManager::ScreenManager(sf::RenderWindow* w)
{
  window = w;
}

ScreenManager::~ScreenManager()
{

}

sf::RenderWindow* ScreenManager::getWindow()
{
  return window;
}

void ScreenManager::update(sf::Time delta)
{
  screens.top()->update(delta);
}

void ScreenManager::draw()
{
  screens.top()->draw();
}

void ScreenManager::push_screen(AbstractScreen* s)
{
  screens.push(s);
}

void ScreenManager::pop_screen()
{
  screens.pop();
}
