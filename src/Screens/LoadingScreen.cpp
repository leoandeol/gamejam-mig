#include "LoadingScreen.hpp"

LoadingScreen::LoadingScreen(ScreenManager* man) : AbstractScreen(man)
{
  //todo::& play music
  background.setTexture(*ResourceManager::GetTexture("data/textures/loading/backgroun.png"));
  background.setPosition(sf::Vector2f(0,0));
  loading_thread = std::thread(&LoadingScreen::load_data, this);
}

LoadingScreen::~LoadingScreen()
{
  delete &background;
}

void LoadingScreen::update(sf::Time)
{
  if(loading_thread.joinable())
    {
      loading_thread.join();
      manager->push_screen(new MenuScreen(manager));
    }
}

void LoadingScreen::draw()
{
  manager->getWindow()->draw(background);
}

void LoadingScreen::load_data()
{
  
}
