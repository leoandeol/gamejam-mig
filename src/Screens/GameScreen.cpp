#include "GameScreen.hpp"

GameScreen::GameScreen(ScreenManager* m) : AbstractScreen(m)
{
  window = manager->getWindow();
  player = new Player(2,this);
}

GameScreen::~GameScreen()
{

}

void GameScreen::update(sf::Time delta)
{
  para.update(delta);
  player->update(delta);
  for(int i = 0; i < wolves.size(); i++)
    {
      wolves[i]->update(delta);
    }
  for(int i = 0; i < parents.size(); i++)
    {
      parents[i]->update(delta);
    }
}

void GameScreen::draw()
{
  para.draw(window);
  player->draw(window);
}

void GameScreen::wolfRun()
{
  for(int i = 0; i < wolves.size(); i++)
    {
      wolves[i]->run();
    }
}
