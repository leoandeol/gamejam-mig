#include "GameScreen.hpp"

GameScreen::GameScreen(ScreenManager* m) : AbstractScreen(m)
{
  window = manager->getWindow();
}

GameScreen::~GameScreen()
{

}

void GameScreen::update(sf::Time delta)
{
  para.update(delta);
  player.update(delta);
  for(int i = 0; i < wolves.size(); i++)
    {
      wolves.update(delta);
    }
  for(i = 0; i < parents.size(); i++)
    {
      wolves.update(delta);
    }
}

void GameScreen::draw()
{
  para.draw(window);
}

void GameScreen::wolfRun()
{
  for(int i = 0; i < wolves.size(); i++)
    {
      wolves[i]->run();
    }
}
