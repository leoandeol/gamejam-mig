#ifndef ANIMATION_HPP
#define ANIMATION_HPP

#include <string>
#include <vector>
#include <SFML/Graphics.hpp>

class Animation
{
  
public:
  // texture, anim duration
  Animation(sf::Texture*,int,int,sf::Vector2f,sf::Time=sf::seconds(1)); // 1/nb image dans ligne textures
  ~Animation();
  void update(sf::Time);
  void draw(sf::RenderWindow*);
  sf::Sprite* getCurrentAnimation();
  void setPosition(sf::Vector2f);
  void move(sf::Vector2f);

private:
  sf::Sprite* sprite;
  sf::Vector2f pos;
  sf::Time elapsed; //Temps passé
  sf::Time tick; //Durée d'une image
  int nb_columns;
  int nb_rows;
  int current_anim_x;
  int current_anim_y;
  int sprite_width;
  int sprite_height;
};

#endif
