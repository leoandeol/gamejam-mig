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
  // texture, anim duration
  Animation(sf::Texture*, sf::Time=sf::seconds(1));
  void update(sf::Time);
  void draw(sf::RenderWindow*);
  sf::Sprite* getCurrentAnimation();

private:
  sf::Sprite* sprite;
  sf::Vector2f pos;
  sf::Time elapsed;
  sf::Time tick;
  int nb_columns;
  int nb_rows;
  int current_anim_x;
  int current_anim_y;
};

#endif
