#ifndef DEF_ENTITY
#define DEF_ENTITY
#include <SFML/Graphics.hpp>
#include "../Managers/ResourceManager.hpp"

class Entity{

public:
  Entity(int, ResourceManager*); 
  ~Entity();
  int getLane();
  virtual int update(sf::Time)=0;
  virtual void draw(sf::RenderWindow*)=0;
  
protected:
  ResourceManager* rm;
  int lane;
  sf::Vector2f coord;

};

#endif
