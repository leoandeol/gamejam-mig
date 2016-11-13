#include "MenuScreen.hpp"

MenuScreen::MenuScreen(ScreenManager* man) : AbstractScreen(man)
{
  background.setTexture(*ResourceManager::GetTexture("data/textures/menu/background.png"));
  background.setPosition(sf::Vector2f(0,0));
  window = man->getWindow();
  //manager->push_screen(new GameScreen(manager));


  const std::string s[3] = { "Jouer", "Options", "Quitter" };
  strings.push_back("Jouer");
  strings.push_back("Options");
  strings.push_back("Quitter");
  
  menu = new Menu(strings);
}

MenuScreen::~MenuScreen()
{
  
}

void MenuScreen::update(sf::Time delta)
{
  sf::Event event;
  while(window->pollEvent(event))
    {
      if(event.type==sf::Event::KeyPressed)
	{
	  switch(event.key.code)
	    {
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
