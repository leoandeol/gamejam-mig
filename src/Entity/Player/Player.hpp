#ifndef DEF_PLAYER
#define DEF_PLAYER
#include <string>
#include <vector>
#include "Child.hpp"
#include "../MovingEntity.hpp"
#include "Note.hpp"
#include "../../Screens/GameScreen.hpp"
#include "../../Managers/ResourceManager.hpp"

class GameScreen;

class Player : public MovingEntity
{

public:
  Player(int, GameScreen*,ResourceManager*);
  ~Player();
  void wolfFlute();
  void bomb();
  void enchantChildren(Child*);
  void getAttacked();
  void loseChild();
  void joueNote(Note);
  void receiveNew(Child*);
  int update(sf::Time delta);

private:
  std::vector<Child*> child;
  GameScreen* gs;
  int nbNoteSup;
  Child* newEnfant;
};


#endif
