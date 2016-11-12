#include "ScreenManager.hpp"

ScreenManager::ScreenManager(sf::RenderWindow* w)
{
  window = w;
}

ScreenManager::~ScreenManager()
{

}

void ScreenManager::update(sf::Time delta)
{
  screens.top()->update(delta);
}

void ScreenManager::draw()
{
  screens.top()->draw(window);
}

void ScreenManager::push_screen(AbstractScreen* s)
{
  screens.push(s);
}

void ScreenManager::pop_screen()
{
  screens.pop();
}
