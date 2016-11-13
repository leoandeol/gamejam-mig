#include "ScreenManager.hpp"

ScreenManager::ScreenManager(sf::RenderWindow* w) : window(w)
{
  res = new ResourceManager();
}

ScreenManager::~ScreenManager()
{

}

sf::RenderWindow* ScreenManager::getWindow()
{
  return window;
}

ResourceManager* ScreenManager::getRes()
{
  return res;
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
