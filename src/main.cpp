#include <cstdlib>
#include <ctime>
#include <SFML/Graphics.hpp>
#include "Managers/ScreenManager.hpp"
#include "Screens/LoadingScreen.hpp"

int main()
{
  srand(time(NULL)); // Setting random seed
  sf::RenderWindow window(sf::VideoMode(1280, 720, 32), "A type pursuer");
  ScreenManager sc(&window);
  sc.push_screen(new LoadingScreen(&sc));
  sf::Clock delta;
  
  while (window.isOpen())
    {
      sf::Event event;
      while (window.pollEvent(event))
        {
	  if (event.type == sf::Event::Closed||(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
	    window.close();
        }
      
      window.clear();
      sc.update(delta.restart());
      sc.draw();
      window.display();
    }
  
  return 0;
}
