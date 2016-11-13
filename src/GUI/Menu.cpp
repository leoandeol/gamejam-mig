#include "Menu.hpp"

Menu::Menu(const std::string a, const std::string b, const std::string c,ResourceManager* man)
{
  sf::Font* font = man->GetFont("data/fonts/sevenswords.ttf");
  const int x = 1000;
  int y = 200;
  current = 0;
  length = 3;
  
  strings = new sf::Text*[length];
  for(int i = 0; i < length; i++)
    {      
      strings[i]=new sf::Text();
      strings[i]->setPosition(x,y);
      strings[i]->setFont(*font);
      y+=150;
    }
  strings[0]->setString(std::string(a));
  strings[1]->setString(std::string(b));
  strings[2]->setString(std::string(c));
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
  /*for(int i = 0; i < length; i++)
    {
      strings[i]->setStyle(i==current?sf::Text::Style::Bold : sf::Text::Style::Regular);
    }*/
  for(int i = 0; i < length; i++)
    {
      w->draw(*strings[i]);
    }
}
