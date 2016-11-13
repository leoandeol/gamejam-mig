#include "GameScreen.hpp"

GameScreen::GameScreen(ScreenManager* m) : AbstractScreen(m), para(m->getRes())
{
  window = manager->getWindow();
  player = new Player(2,this);
}

GameScreen::~GameScreen()
{

}

void GameScreen::update(sf::Time delta)
{sf::Event event;
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
  for(int i = 0; i < wolves.size(); i++)
    {
      wolves[i]->draw(window);
    }
  for(int i = 0; i < parents.size(); i++)
    {
      parents[i]->draw(window);
    }
}

void GameScreen::wolfRun()
{
  for(int i = 0; i < wolves.size(); i++)
    {
      wolves[i]->run();
    }
}
