#include <cstdlib>
#include <ctime>
#include <SFML/Graphics.hpp>
#include "Managers/ScreenManager.hpp"

int main()
{
  srand(time(NULL)); // Setting random seed
  sf::RenderWindow window(sf::VideoMode(1280, 720), "A type pursuer", sf::Style::Fullscreen);
  sf::CircleShape shape(100.f);
  shape.setFillColor(sf::Color::Green);
  
  while (window.isOpen())
    {
      sf::Event event;
      while (window.pollEvent(event))
        {
	  if (event.type == sf::Event::Closed||(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
	    window.close();
        }
      
      window.clear();
      window.draw(shape);
      window.display();
    }
  
  return 0;
}
