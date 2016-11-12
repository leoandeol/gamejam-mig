#include "LoadingScreen.hpp"

LoadingScreen::LoadingScreen(ScreenManager* man) : AbstractScreen(man)
{
  textures_to_load.push_back("data/textures/menu/background.png");
  textures_to_load.push_back("data/textures/menu/button.png");
  //todo::& play music
  percent_loaded=0;
  nb_elements_loaded = 0;
  background.setTexture(*ResourceManager::GetTexture("data/textures/loading/background.png"));
  background.setPosition(sf::Vector2f(0,0));
  loading_bar.setTexture(*ResourceManager::GetTexture("data/textures/loading/LoadingBar.png"));
  loading_bar.setPosition(sf::Vector2f(100,600));
  loading_frame.setTexture(*ResourceManager::GetTexture("data/textures/loading/LoadingFrame.png"));
  loading_frame.setPosition(sf::Vector2f(100,600));
  ResourceManager::GetTexture(textures_to_load[0]);
  loading_thread = std::thread(&LoadingScreen::load_data, this);
}

LoadingScreen::~LoadingScreen()
{
  
}

void LoadingScreen::update(sf::Time)
{
  int x = loading_bar.getTexture()->getSize().x;
  int loading_bar_width = x * percent_loaded;
  loading_bar.setTextureRect(sf::IntRect(0,0,loading_bar_width,loading_bar.getTexture()->getSize().y)); 
  if(loading_thread.joinable())
    {
      loading_thread.join();
      //manager->push_screen(new MenuScreen(manager));
    }
}

void LoadingScreen::draw()
{
  manager->getWindow()->draw(background);
  manager->getWindow()->draw(loading_bar);
  manager->getWindow()->draw(loading_frame);
}

void LoadingScreen::load_data()
{
  std::cout << "Loading " << (int)(percent_loaded*100) << "% : Loading font" << std::endl;
  ResourceManager::GetFont("data/fonts/sevenswords.ttf");
  nb_elements_loaded++;
  percent_loaded = (double)nb_elements_loaded / (double)NB_ELEMENTS_TO_LOAD;
  for(int i = 0; i < textures_to_load.size(); i++)
    {
      std::cout << "Loading " << (int)(percent_loaded*100) << "% : Loading texture : "<< textures_to_load[i] << std::endl;
      std::cout << "Done loading texture : " << textures_to_load[i] <<std::endl;
      nb_elements_loaded++;
      percent_loaded = (double)nb_elements_loaded / (double)NB_ELEMENTS_TO_LOAD;
    }
  std::cout << "Done loading" << std::endl;
}

