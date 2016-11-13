#include "Menu.hpp"

Menu::Menu(std::vector<std::string> v)
{
  sf::Font* font = ResourceManager::GetFont("data/fonts/sevenswords.ttf");
  const int x = 900;
  int y = 200;
  current = 0;
  length = v.size();
  for(int i = 0; i < length; i++)
    {      
      strings[i]=new sf::Text();
      strings[i]->setString(v.at(i));
      strings[i]->setPosition(x,y);
      strings[i]->setFont(*font);
      y+=150;
    }
}

Menu::~Menu()
{

}

void Menu::moveUp()
{
  current--;
  if(current<0) current = length-1;
}

void Menu::moveDown()
{
  current++;
  if(current> length-1) current = 0;
}

int Menu::getCurrent()
{
  return current;
}

void Menu::draw(sf::RenderWindow* w)
{
  for(int i = 0; i < length; i++)
    {
      strings[i]->setStyle(i==current?sf::Text::Style::Bold : sf::Text::Style::Regular);
    }
  for(int i = 0; i < length; i++)
    {
      w->draw(*strings[i]);
    }
}
