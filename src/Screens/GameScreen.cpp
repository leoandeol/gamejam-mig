#include "GameScreen.hpp"

GameScreen::GameScreen(ScreenManager* m) : AbstractScreen(m), para(m->getRes())
{
  ResourceManager* r = m->getRes();
  window = manager->getWindow();
  player = new Player(2,this,r);
  fp1 = new sf::Sprite();
  fp2 = new sf::Sprite();
  aft_lan_1 = new sf::Sprite();
  aft_lan_2 = new sf::Sprite();
  aft_lan_3 = new sf::Sprite();
  road = new sf::Sprite();
  fp1->setTexture(*r->GetTexture("data/textures/game/background/fp1.png"));
  fp2->setTexture(*r->GetTexture("data/textures/game/background/fp2.png"));
  aft_lan_1->setTexture(*r->GetTexture("data/textures/game/background/aft_lan_1.png"));
  aft_lan_2->setTexture(*r->GetTexture("data/textures/game/background/aft_lan_2.png"));
  aft_lan_3->setTexture(*r->GetTexture("data/textures/game/background/aft_lan_3.png"));
  road->setTexture(*r->GetTexture("data/textures/game/background/7.png"));
}

GameScreen::~GameScreen()
{

}

void GameScreen::update(sf::Time delta)
{
  sf::Event event;
  while(window->pollEvent(event))
    {
      if (event.type == sf::Event::Closed||(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
	window->close();
      if(event.type==sf::Event::KeyPressed)
	{
	  switch(event.key.code)
	    {
	    case sf::Keyboard::Return:
	      break;
	    default:
	      break;
	    }
	}
      if(event.type==sf::Event::JoystickButtonPressed||event.type==sf::Event::JoystickMoved)
	{
	  std::cout << "YOU WIN" << event.joystickButton.button << std::endl;
	  std::cout << "new position: " << event.joystickMove.position << std::endl;
	}
    }
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
  window->draw(*road);
  for(int i = 0; i < wolves.size(); i++)
    {
      wolves[i]->draw(window);
    }
  for(int i = 0; i < parents.size(); i++)
    {
      parents[i]->draw(window);
    }
  window->draw(*fp2);
  window->draw(*fp1);
}

void GameScreen::wolfRun()
{
  for(int i = 0; i < wolves.size(); i++)
    {
      wolves[i]->run();
    }
}
