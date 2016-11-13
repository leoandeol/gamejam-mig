#include "Player.hpp"

Player::Player(int lane, GameScreen* gsi) : MovingEntity(lane)
{
  for(int i = 0; i < 10 ;i++){
    child.push_back(new Child(lane));
  }
  gs = gsi;
  nbNoteSup = 0;
}

Player::~Player()
{

}

void Player::wolfFlute()
{
  gs->wolfRun();
}

void Player::bomb(){
  child.back()->kill();
  wolfFlute();
}

void Player::enchantChildren(Child* enfant)
{
  enfant->setEnchant(true);
}

void Player::loseChild()
{
  child.back()->kill();
}

void Player::getAttacked()
{
  child.back()->kill();
}

int Player::update(sf::Time delta)
{
  return 0;
}

void Player::receiveNew(Child* enfant)
{
  newEnfant = enfant;
}


void Player::joueNote(Note newNote)
{
  if(newNote.getA() == -1 || newNote.getB() == -1 || newNote.getC() == -1);
  else if(newNote.getA() == 1 && newNote.getB() == 2 && newNote.getC() == 3)
    {
      moveUp();
    }
  else if(newNote.getA() == 4 && newNote.getB() == 2 && newNote.getC() == 1)
    {
      moveDown();
    }
  else if(newNote.getA() == 1 && newNote.getB() == 3 && newNote.getC() == 2)
    {
      acceleration();
    }
  else if(newNote.getA() == 2 && newNote.getB() == 3 && newNote.getC() == 1)
    {
      slowDown();
    }
  else if(newNote.getA() == 4 && newNote.getB() == 2 && newNote.getC() == 3)
    {
      enchantChildren(newEnfant);
    }
  else if(newNote.getA() == 2 && newNote.getB() == 4 && newNote.getC() == 3)
    {
      bomb();
    }
  else if(newNote.getA() == 3 && newNote.getB() == 4 && newNote.getC() == 1)
    {
      wolfFlute();
    }
  if(newNote.getVolume() >= 0.5)
    {
      nbNoteSup++;
    }
  if(nbNoteSup >= 3)
    {
      child.back()->setEnchant(false);
    }
}
