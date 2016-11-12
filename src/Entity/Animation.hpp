#ifndef ANIMATION_HPP
#define ANIMATION_HPP

#include <string>
#include <vector>
#include <SFML/Graphics.hpp>

class Animation
{
  enum Direction {
    Up,
    Down,
    Left,
    Right
  };
  
public:
  // texture, nb of animations per direction, false : 1 dir, true : 4, anim duration
  Animation();
  Animation(sf::Texture*,int,bool,sf::Time=sf::seconds(1));
  void update(sf::Time);
  void draw(sf::RenderWindow*);
  sf::Sprite* getCurrentAnimation();
private:
  sf::Sprite** sprites;
  sf::Vector2f pos;
  sf::Time elapse;
  sf::Time tick;
  int nb_columns;
  int nb_rows;
  int current_anim;
};

#endif
