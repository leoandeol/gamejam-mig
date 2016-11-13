#include "Animation.hpp"

Animation::Animation(sf::Texture* t, int spritew, int spriteh, int nban, int height, sf::Vector2f coord, bool l, sf::Time total) : pos(coord)
{
  sprite = new sf::Sprite();
  sprite->setTexture(*t);
  sprite->setPosition(coord);
  tick = total/(float)nban;
  nb_columns = nban;
  elapsed = sf::seconds(0);
  current_anim_x = 0;
  sprite_width = spritew;
  sprite_height = spriteh;
  current_anim_y = height;
  loop = l;
}

Animation::~Animation()
{

}

void Animation::update(sf::Time delta)
{
  elapsed += delta;
  while(elapsed>=tick)
    {
      if(current_anim_x==nb_columns-1&&!loop) finished=true;
      elapsed-=tick;
      current_anim_x++;
      if(current_anim_x>=nb_columns&&loop) current_anim_x = 0;
    }
  if(finished)
    {
      current_anim_x = nb_columns-1;
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

bool Animation::isOver()
{
  return finished;
}
