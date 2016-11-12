#include "LoadingScreen.hpp"

LoadingScreen::LoadingScreen()
{
  //todo::load background pic & play music
  loading_thread(&LoadingScreen::load_data(), this);
}

LoadingScreen::~LoadingScreen()
{

}

void LoadingScreen::update(sf::Time)
{
  if(loading_tread.joinable())
    {
      t.join();
      manager->push_screen(new MenuScreen());
    }
}

void LoadingScreen::draw(sf::RenderWindow* window);
{
  //todo :: draw background
}

void LoadingScreen::load_data()
{
  
}
