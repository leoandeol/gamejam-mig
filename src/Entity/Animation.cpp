#include "Animation.hpp"

Animation::Animation(sf::Texture* t, int nbColumns, int nbRows, sf::Vector2f coord, sf::Time total) : pos(coord)
{
  sprite = new sf::Sprite();
  sprite->setTexture(*t);
  sprite->setPosition(coord);
  tick = total/(float)nbColumns;
  nb_columns = nbColumns;
  nb_rows = nbRows;
  elapsed = sf::seconds(0);
  current_anim_x = 0;
  current_anim_y = 0;
  sprite_width = t->getSize().x / nbColumns;
  sprite_height = t->getSize().y / nbRows;
}

Animation::~Animation()
{

}

void Animation::update(sf::Time delta)
{
  elapsed += delta;
  while(elapsed>=tick)
    {
      elapsed-=tick;
      current_anim_x++;
      if(current_anim_x>=nb_columns) current_anim_x = 0;
    }
  sf::IntRect rect(current_anim_x * sprite_width, current_anim_y * sprite_height, sprite_width, sprite_height);
  sprite->setTextureRect(rect);
}

void Animation::draw(sf::RenderWindow* w)
{
  w->draw(*sprite);
}

void Animation::setPosition(sf::Vector2f pos)
{
  sprite->setPosition(pos);
}

void Animation::move(sf::Vector2f pos)
{
  sprite->move(pos);
}
