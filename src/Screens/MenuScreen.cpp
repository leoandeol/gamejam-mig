#include "MenuScreen.hpp"

MenuScreen::MenuScreen(ScreenManager* man) : AbstractScreen(man), play("Jouer",sf::IntRect(513,450,254,95)), tutorial("Tutoriel",sf::IntRect(50,450,254,95)), score("scores",sf::IntRect(976,450,254,95)), options("Options",sf::IntRect(50,570,254,95)), credits("Credits",sf::IntRect(513,570,254,95)), exit("Quitter",sf::IntRect(976,570,254,95))
{
  background.setTexture(*ResourceManager::GetTexture("data/textures/menu/background.png"));
  background.setPosition(sf::Vector2f(0,0));
  window = man->getWindow();
}

MenuScreen::~MenuScreen()
{
  
}

void MenuScreen::update(sf::Time delta)
{
  sf::Event event;
  while(window->pollEvent(event))
    {sf::Vector2i mous = sf::Mouse::getPosition(*window);
	  std::cout << mous.x << ";" << mous.y << std::endl;
      if(event.type==sf::Event::MouseButtonPressed&&event.mouseButton.button==sf::Mouse::Left)
	{
	  
	  if(play.contains(mous))
	    {
	      std::cout << "Play" << std::endl;
	      manager->push_screen(new GameScreen(manager));
	    }
	  else if (tutorial.contains(mous))
	    {
	      std::cout << "Tutorial" << std::endl;
	    }
	  else if (score.contains(mous))
	    {
	      std::cout << "Score" << std::endl;
	    }
	  else if (options.contains(mous))
	    {
	      std::cout << "Options" << std::endl;
	    }
	  else if (credits.contains(mous))
	    {
	      std::cout << "Credits" << std::endl;
	    }
	  else if (exit.contains(mous))
	    {
	      window->close();
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
  play.draw(w);
  tutorial.draw(w);
  score.draw(w);
  options.draw(w);
  credits.draw(w);
  exit.draw(w);
}
