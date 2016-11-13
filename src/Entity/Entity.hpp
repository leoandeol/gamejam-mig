#ifndef DEF_ENTITY
#define DEF_ENTITY
#include <SFML/Graphics.hpp>

class Entity{

public:
  Entity(int, ResourceManager*); 
  ~Entity();
  virtual int update(sf::Time)=0;
  void draw(sf::RenderWindow*);
  
protected:
  ResourceManager* rm;
  int lane;
  sf::Vector2f coord;

};

#endif
