#include "GameScreen.hpp"

GameScreen::GameScreen(ScreenManager* m) : AbstractScreen(m), para(m->getRes()) 
{
  entities_to_draw_by_lane = new std::vector<MovingEntity*>[3];
  for(int i = 0; i < 3; i++)
    {
      entities_to_draw_by_lane[i] = std::vector<MovingEntity*>();
    }
  ResourceManager* r = m->getRes();
  window = manager->getWindow();
  player = new Player(2,this,r);
  fp1 = new sf::Sprite();
  fp2 = new sf::Sprite();
  aft_lan_1 = new sf::Sprite();
  aft_lan_2 = new sf::Sprite();
  aft_lan_3 = new sf::Sprite();
  road = new sf::Sprite();
  fp1->setTexture(*r->getTexture("data/textures/game/background/fp1.png"));
  fp2->setTexture(*r->getTexture("data/textures/game/background/fp2.png"));
  aft_lan_1->setTexture(*r->getTexture("data/textures/game/background/aft_lan_1.png"));
  aft_lan_2->setTexture(*r->getTexture("data/textures/game/background/aft_lan_2.png"));
  aft_lan_3->setTexture(*r->getTexture("data/textures/game/background/aft_lan_3.png"));
  road->setTexture(*r->getTexture("data/textures/game/background/7.png"));
  music = r->getMusic("data/sounds/Musique du niveau.mp3");
  music->play();
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


  //sorting for draw
  entities_to_draw_by_lane[0].clear();
  entities_to_draw_by_lane[1].clear();
  entities_to_draw_by_lane[2].clear();
  int a = player->getLane();
  entities_to_draw_by_lane[a].push_back(player);
  
  for(int i = 0; i < wolves.size(); i++)
    {
      a = wolves[i]->getLane();
      entities_to_draw_by_lane[a].push_back(wolves[i]);
    }
  for(int i = 0; i < parents.size(); i++)
    {
      a = parents[i]->getLane();
      entities_to_draw_by_lane[a].push_back(parents[i]);
    }
}

void GameScreen::draw()
{
  para.draw(window);
  window->draw(*road);
  window->draw(*aft_lan_3);
  for(int i = 0; i < entities_to_draw_by_lane[2].size(); i++)
    {
      entities_to_draw_by_lane[2][i]->draw(window);
    }
  window->draw(*aft_lan_2);
  for(int i = 0; i < entities_to_draw_by_lane[1].size(); i++)
    {
      entities_to_draw_by_lane[1][i]->draw(window);
    }
  window->draw(*aft_lan_1);
  for(int i = 0; i < entities_to_draw_by_lane[0].size(); i++)
    {
      entities_to_draw_by_lane[0][i]->draw(window);
    }
  player->draw(window);
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

Player* GameScreen::getPlayer()
{
  return player;
}
