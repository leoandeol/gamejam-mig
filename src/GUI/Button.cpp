#include "Button.hpp"

Button::Button(std::string te, sf::IntRect r) : hitbox(r)
{
  sprite.setTexture(*ResourceManager::GetTexture("data/textures/menu/button.png"));
  text.setString(te);
  text.setFont(*ResourceManager::GetFont("data/fonts/sevenswords.ttf"));
  sprite.setPosition(hitbox.left+10, hitbox.top+10);
  int x = hitbox.left + ((hitbox.width-text.getGlobalBounds().width)/2);
  int y = hitbox.top + ((hitbox.height-text.getGlobalBounds().height)/2);
  text.setPosition(x,y);
}

Button::~Button()
{
  
}

sf::IntRect Button::getHitbox()
{
  return hitbox;
}

void Button::draw(sf::RenderWindow* w)
{
  w->draw(sprite);
  w->draw(text);
}

