#include "MenuScreen.hpp"

MenuScreen::MenuScreen(ScreenManager* man) : AbstractScreen(man)
{
  background.setTexture(*manager->getRes()->getTexture("data/textures/menu/background.png"));
  background.setPosition(sf::Vector2f(0,0));
  window = man->getWindow();
  
  menu = new Menu("Jouer", "Options", "Quitter",manager->getRes());
}

MenuScreen::~MenuScreen()
{
  
}

void MenuScreen::update(sf::Time delta)
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
	      manager->push_screen(new GameScreen(manager));
	      break;
	    case sf::Keyboard::Up:
	      menu->moveUp();
	      break;
	    case sf::Keyboard::Down:
	      menu->moveDown();
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
}

void MenuScreen::draw()
{
  sf::RenderWindow* w = manager->getWindow();
  w->draw(background);
  menu->draw(w);
}
