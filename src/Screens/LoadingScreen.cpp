#include "LoadingScreen.hpp"

LoadingScreen::LoadingScreen(ScreenManager* man) : AbstractScreen(man)
{
  //todo::load background pic & play music
  loading_thread = std::thread(&LoadingScreen::load_data, this);
}

LoadingScreen::~LoadingScreen()
{

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
  //todo :: draw background
}

void LoadingScreen::load_data()
{
  
}
