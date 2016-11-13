#ifndef DEF_PLAYER
#define DEF_PLAYER
#include <string>
#include <vector>
#include "Child.hpp"
#include "../MovingEntity.hpp"
#include "Note.hpp"
#include "../../Screens/GameScreen.hpp"

class Player : public MovingEntity
{

public:
  Player(int, GameScreen*);
  ~Player();
  void wolfFlute();
  void bomb();
  void enchantChildren(Child);
  void getAttacked();
  void loseChild();
  void joueNote(Note);
  int update(sf::Time delta);

private:
  std::vector<Child*> child;
  GameScreen* gs;
  int nbNoteSup;
};


#endif
