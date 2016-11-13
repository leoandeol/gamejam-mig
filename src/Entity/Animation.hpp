#ifndef ANIMATION_HPP
#define ANIMATION_HPP

#include <string>
#include <vector>
#include <SFML/Graphics.hpp>

class Animation
{
  
public:
  // texture, anim duration
  Animation(sf::Texture*, sf::Time=sf::seconds(1)); // 1/nb image dans ligne textures
  void update(sf::Time);
  void draw(sf::RenderWindow*);
  sf::Sprite* getCurrentAnimation();

private:
  sf::Sprite* sprite;
  sf::Vector2f pos;
  sf::Time elapsed; //Temps passé
  sf::Time tick; //Durée d'une image
  int nb_columns;
  int nb_rows;
  int current_anim_x;
  int current_anim_y;
};

#endif
