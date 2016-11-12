#ifndef DEF_ENTITY
#define DEF_ENTITY
#include <SFML/Graphics.hpp>
//#include "Animation.hpp"

class Entity{

public:
  Entity(); 
  ~Entity();
  virtual int  update(sf::Time)=0;
  virtual void draw(sf::RenderWindow*)=0;
  
private:
  Animation e_anim;
  int e_lane;
  sf::Vector2f e_coord;

};

#endif
