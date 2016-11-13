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
