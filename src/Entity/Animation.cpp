#include "Animation.hpp"

Animation::Animation(sf::Texture* t, sf::Time time, int nbColumns, int nbRows, float x, float y) : pos(x,y)
{
  sprite.setTexture(*t);
  tick = time/nbColumns;
  nb_columns = nbColumns;
  nb_rows = nbRows;
  elapsed = 0;
  current_anim_x = 0;
  current_anix_y = 0;
}

void update(sf::Time)
{
  
}

void draw(sf::RenderWindow*)
{
  
}

