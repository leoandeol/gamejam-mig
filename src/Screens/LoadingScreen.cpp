#include "LoadingScreen.hpp"

LoadingScreen::LoadingScreen(ScreenManager* man) : AbstractScreen(man)
{
  std::cout << "Entering loading screen" << std::endl;
  textures_to_load.push_back("data/textures/menu/background.png");
  textures_to_load.push_back("data/textures/menu/button.png");
  textures_to_load.push_back("data/textures/game/background/1.png");
  textures_to_load.push_back("data/textures/game/background/2.png");
  textures_to_load.push_back("data/textures/game/background/3.png");
  textures_to_load.push_back("data/textures/game/background/4.png");
  textures_to_load.push_back("data/textures/game/background/5.png");
  textures_to_load.push_back("data/textures/game/background/6.png");
  textures_to_load.push_back("data/textures/game/background/7.png");
  textures_to_load.push_back("data/textures/game/background/fp1.png");
  textures_to_load.push_back("data/textures/game/background/fp2.png");
  textures_to_load.push_back("data/textures/game/background/aft_lan_1.png");
  textures_to_load.push_back("data/textures/game/background/aft_lan_2.png");
  textures_to_load.push_back("data/textures/game/background/aft_lan_3.png");
  ResourceManager* res = manager->getRes();
  																 
  //todo::& play music
  percent_loaded=0;
  nb_elements_loaded = 0;
  char* s = "data/textures/game/background/1.png";
  std::cout << "Entering loading screeaaaaaaaan" << std::endl;
  background.setTexture(*(res->GetTexture(s)));
  std::cout << "Entering loading screeaaaaaaaan1" << std::endl;
  background.setPosition(sf::Vector2f(0,0));
  loading_bar.setTexture(*(res->GetTexture("data/textures/loading/LoadingBar.png")));
  loading_bar.setPosition(sf::Vector2f(100,600));
  loading_frame.setTexture(*(res->GetTexture("data/textures/loading/LoadingFrame.png")));
  loading_frame.setPosition(sf::Vector2f(100,600));
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
      manager->push_screen(new MenuScreen(manager));
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
  ResourceManager* man = manager->getRes();
  man->GetFont("data/fonts/sevenswords.ttf");
  nb_elements_loaded++;
  percent_loaded = (double)nb_elements_loaded / ((double)textures_to_load.size()+1);
  for(int i = 0; i < textures_to_load.size(); i++)
    {
      std::cout << "Loading " << (int)(percent_loaded*100) << "% : Loading texture : "<< textures_to_load[i] << std::endl;
      man->GetTexture(textures_to_load[i]);
      nb_elements_loaded++;
      percent_loaded = (double)nb_elements_loaded / ((double)textures_to_load.size()+1);
    }
  std::cout << "Loading 100%" << std::endl;
}

