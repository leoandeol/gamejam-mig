1#ifndef DEF_ENTITY
#define DEF_ENTITY
#include <SFML/Graphics.hpp>

class Entity{

public:
  Entity(int); 
  ~Entity();
  virtual int update(sf::Time)=0;
  void draw(sf::RenderWindow*);
  
protected:
  int lane;
  sf::Vector2f coord;

};

#endif
